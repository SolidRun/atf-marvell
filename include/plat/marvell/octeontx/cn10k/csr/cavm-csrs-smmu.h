#ifndef __CAVM_CSRS_SMMU_H__
#define __CAVM_CSRS_SMMU_H__
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
 * OcteonTX SMMU.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration smmu_bar_e
 *
 * SMMU Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_SMMU_BAR_E_SMMUX_PF_BAR0(a) (0x830000000000ll + 0x1000000000ll * (a))
#define CAVM_SMMU_BAR_E_SMMUX_PF_BAR0_SIZE 0x200000ull

/**
 * Enumeration smmu_cerror_e
 *
 * SMMU Command Queue Error Enumeration
 */
#define CAVM_SMMU_CERROR_E_ABT (2)
#define CAVM_SMMU_CERROR_E_CERROR_ATC_INV_SYNC (3)
#define CAVM_SMMU_CERROR_E_ILL (1)
#define CAVM_SMMU_CERROR_E_NONE (0)

/**
 * Enumeration smmu_cmd_e
 *
 * SMMU Command Queue Codes Enumeration
 */
#define CAVM_SMMU_CMD_E_ATC_INV (0x40)
#define CAVM_SMMU_CMD_E_CFGI_CD (5)
#define CAVM_SMMU_CMD_E_CFGI_CD_ALL (6)
#define CAVM_SMMU_CMD_E_CFGI_STE (3)
#define CAVM_SMMU_CMD_E_CFGI_STE_RANGE (4)
#define CAVM_SMMU_CMD_E_CFGI_VMS_PIDM (7)
#define CAVM_SMMU_CMD_E_PREFETCH_ADDR (2)
#define CAVM_SMMU_CMD_E_PREFETCH_CONFIG (1)
#define CAVM_SMMU_CMD_E_PRI_RESP (0x41)
#define CAVM_SMMU_CMD_E_RESUME (0x44)
#define CAVM_SMMU_CMD_E_STALL_TERM (0x45)
#define CAVM_SMMU_CMD_E_SYNC (0x46)
#define CAVM_SMMU_CMD_E_TLBI_EL2_ALL (0x20)
#define CAVM_SMMU_CMD_E_TLBI_EL2_ASID (0x21)
#define CAVM_SMMU_CMD_E_TLBI_EL2_VA (0x22)
#define CAVM_SMMU_CMD_E_TLBI_EL2_VAA (0x23)
#define CAVM_SMMU_CMD_E_TLBI_EL3_ALL (0x18)
#define CAVM_SMMU_CMD_E_TLBI_EL3_VA (0x1a)
#define CAVM_SMMU_CMD_E_TLBI_NH_ALL (0x10)
#define CAVM_SMMU_CMD_E_TLBI_NH_ASID (0x11)
#define CAVM_SMMU_CMD_E_TLBI_NH_VA (0x12)
#define CAVM_SMMU_CMD_E_TLBI_NH_VAA (0x13)
#define CAVM_SMMU_CMD_E_TLBI_NSNH_ALL (0x30)
#define CAVM_SMMU_CMD_E_TLBI_S12_VMALL (0x28)
#define CAVM_SMMU_CMD_E_TLBI_S2_IPA (0x2a)
#define CAVM_SMMU_CMD_E_TLBI_SNH_ALL (0x60)
#define CAVM_SMMU_CMD_E_TLBI_S_EL2_ALL (0x50)
#define CAVM_SMMU_CMD_E_TLBI_S_EL2_ASID (0x51)
#define CAVM_SMMU_CMD_E_TLBI_S_EL2_VA (0x52)
#define CAVM_SMMU_CMD_E_TLBI_S_EL2_VAA (0x53)
#define CAVM_SMMU_CMD_E_TLBI_S_S12_VMALL (0x58)
#define CAVM_SMMU_CMD_E_TLBI_S_S2_IPA (0x5a)

/**
 * Enumeration smmu_event_e
 *
 * SMMU Event Record Codes Enumeration
 * Enumerates event record types.
 */
#define CAVM_SMMU_EVENT_E_C_BAD_CD (0xa)
#define CAVM_SMMU_EVENT_E_C_BAD_STE (4)
#define CAVM_SMMU_EVENT_E_C_BAD_STREAMID (2)
#define CAVM_SMMU_EVENT_E_C_BAD_SUBSTREAMID (8)
#define CAVM_SMMU_EVENT_E_E_PAGE_REQUEST (0x24)
#define CAVM_SMMU_EVENT_E_F_ACCESS (0x12)
#define CAVM_SMMU_EVENT_E_F_ADDR_SIZE (0x11)
#define CAVM_SMMU_EVENT_E_F_BAD_ATS_TREQ (5)
#define CAVM_SMMU_EVENT_E_F_CD_FETCH (9)
#define CAVM_SMMU_EVENT_E_F_CFG_CONFLICT (0x21)
#define CAVM_SMMU_EVENT_E_F_PERMISSION (0x13)
#define CAVM_SMMU_EVENT_E_F_STE_FETCH (3)
#define CAVM_SMMU_EVENT_E_F_STREAM_DISABLED (6)
#define CAVM_SMMU_EVENT_E_F_TLB_CONFLICT (0x20)
#define CAVM_SMMU_EVENT_E_F_TRANSLATION (0x10)
#define CAVM_SMMU_EVENT_E_F_TRANSL_FORBIDDEN (7)
#define CAVM_SMMU_EVENT_E_F_UUT (1)
#define CAVM_SMMU_EVENT_E_F_VMS_FETCH (0x25)
#define CAVM_SMMU_EVENT_E_F_WALK_EABT (0xb)
#define CAVM_SMMU_EVENT_E_INTERNAL_ERR (0xfd)
#define CAVM_SMMU_EVENT_E_INV_REQ (0xff)
#define CAVM_SMMU_EVENT_E_INV_STAGE (0xfe)

/**
 * Enumeration smmu_pmcg_e
 *
 * SMMU PMCG Events Enumeration
 * Enumerates counter types.
 */
#define CAVM_SMMU_PMCG_E_ACTIVE_CLOCKS (0x80)
#define CAVM_SMMU_PMCG_E_ARCH_EVENT6 (6)
#define CAVM_SMMU_PMCG_E_ARCH_EVENT7 (7)
#define CAVM_SMMU_PMCG_E_CFG_DOUBLE_HIT (0x9a)
#define CAVM_SMMU_PMCG_E_CFG_HIT (0x98)
#define CAVM_SMMU_PMCG_E_CFG_MISS (3)
#define CAVM_SMMU_PMCG_E_CFG_READ (5)
#define CAVM_SMMU_PMCG_E_CLOCKS (0)
#define CAVM_SMMU_PMCG_E_TLB_FXL_TTD2B (0x93)
#define CAVM_SMMU_PMCG_E_TLB_FXL_TTD2T (0x92)
#define CAVM_SMMU_PMCG_E_TLB_FXL_TTD3P (0x91)
#define CAVM_SMMU_PMCG_E_TLB_FXL_TTDNONE (0x97)
#define CAVM_SMMU_PMCG_E_TLB_MISS (2)
#define CAVM_SMMU_PMCG_E_TLB_WLK_TTD0T (0x86)
#define CAVM_SMMU_PMCG_E_TLB_WLK_TTD1B (0x85)
#define CAVM_SMMU_PMCG_E_TLB_WLK_TTD1T (0x84)
#define CAVM_SMMU_PMCG_E_TLB_WLK_TTD2B (0x83)
#define CAVM_SMMU_PMCG_E_TLB_WLK_TTD2T (0x82)
#define CAVM_SMMU_PMCG_E_TLB_WLK_TTD3P (0x81)
#define CAVM_SMMU_PMCG_E_TLB_WLK_TTDNONE (0x87)
#define CAVM_SMMU_PMCG_E_TRANSLATION_REQUESTS (1)
#define CAVM_SMMU_PMCG_E_TTD_READ (4)
#define CAVM_SMMU_PMCG_E_UTLB_HIT (0x9b)

/**
 * Register (NCB32b) smmu#_agbpa
 *
 * SMMU Alternate Global Bypass Attribute Register
 * This register is intended to allow an implementation to apply an additional non
 * architected attributes or tag to bypassing transactions, for example a traffic
 * routing identifier.
 *
 * If this field is unsupported by an implementation, it is RES0.  It is not
 * intended for this register to be used to further modify existing architected
 * bypass attributes which are controlled using GPBA.
 */
union cavm_smmux_agbpa
{
    uint32_t u;
    struct cavm_smmux_agbpa_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t qos                   : 4;  /**< [  3:  0](R/W) SMMU(0)_S_AGBPA[QOS] */
#else /* Word 0 - Little Endian */
        uint32_t qos                   : 4;  /**< [  3:  0](R/W) SMMU(0)_S_AGBPA[QOS] */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_agbpa_s cn; */
};
typedef union cavm_smmux_agbpa cavm_smmux_agbpa_t;

static inline uint64_t CAVM_SMMUX_AGBPA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_AGBPA(uint64_t a)
{
    if (a==0)
        return 0x830000000048ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_AGBPA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_AGBPA(a) cavm_smmux_agbpa_t
#define bustype_CAVM_SMMUX_AGBPA(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_AGBPA(a) "SMMUX_AGBPA"
#define device_bar_CAVM_SMMUX_AGBPA(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_AGBPA(a) (a)
#define arguments_CAVM_SMMUX_AGBPA(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_aidr
 *
 * SMMU Auxiliary Identification Register
 * This register identifies the SMMU architecture version to which the implementation conforms.
 */
union cavm_smmux_aidr
{
    uint32_t u;
    struct cavm_smmux_aidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t archmajorrev          : 4;  /**< [  7:  4](RO) Indicates SMMUv3.2. */
        uint32_t archminorrev          : 4;  /**< [  3:  0](RO) Indicates SMMUv3.2. */
#else /* Word 0 - Little Endian */
        uint32_t archminorrev          : 4;  /**< [  3:  0](RO) Indicates SMMUv3.2. */
        uint32_t archmajorrev          : 4;  /**< [  7:  4](RO) Indicates SMMUv3.2. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_aidr_s cn; */
};
typedef union cavm_smmux_aidr cavm_smmux_aidr_t;

static inline uint64_t CAVM_SMMUX_AIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_AIDR(uint64_t a)
{
    if (a==0)
        return 0x83000000001cll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_AIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_AIDR(a) cavm_smmux_aidr_t
#define bustype_CAVM_SMMUX_AIDR(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_AIDR(a) "SMMUX_AIDR"
#define device_bar_CAVM_SMMUX_AIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_AIDR(a) (a)
#define arguments_CAVM_SMMUX_AIDR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_cidr0
 *
 * SMMU Component Identification Register 0
 */
union cavm_smmux_cidr0
{
    uint32_t u;
    struct cavm_smmux_cidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t preamble              : 8;  /**< [  7:  0](RO) Preamble identification value. */
#else /* Word 0 - Little Endian */
        uint32_t preamble              : 8;  /**< [  7:  0](RO) Preamble identification value. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_cidr0_s cn; */
};
typedef union cavm_smmux_cidr0 cavm_smmux_cidr0_t;

static inline uint64_t CAVM_SMMUX_CIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_CIDR0(uint64_t a)
{
    if (a==0)
        return 0x830000000ff0ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_CIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_CIDR0(a) cavm_smmux_cidr0_t
#define bustype_CAVM_SMMUX_CIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_CIDR0(a) "SMMUX_CIDR0"
#define device_bar_CAVM_SMMUX_CIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_CIDR0(a) (a)
#define arguments_CAVM_SMMUX_CIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_cidr1
 *
 * SMMU Component Identification Register 1
 */
union cavm_smmux_cidr1
{
    uint32_t u;
    struct cavm_smmux_cidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t preamble              : 8;  /**< [  7:  0](RO) Preamble identification value. */
#else /* Word 0 - Little Endian */
        uint32_t preamble              : 8;  /**< [  7:  0](RO) Preamble identification value. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_cidr1_s cn; */
};
typedef union cavm_smmux_cidr1 cavm_smmux_cidr1_t;

static inline uint64_t CAVM_SMMUX_CIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_CIDR1(uint64_t a)
{
    if (a==0)
        return 0x830000000ff4ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_CIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_CIDR1(a) cavm_smmux_cidr1_t
#define bustype_CAVM_SMMUX_CIDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_CIDR1(a) "SMMUX_CIDR1"
#define device_bar_CAVM_SMMUX_CIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_CIDR1(a) (a)
#define arguments_CAVM_SMMUX_CIDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_cidr2
 *
 * SMMU Component Identification Register 2
 */
union cavm_smmux_cidr2
{
    uint32_t u;
    struct cavm_smmux_cidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t preamble              : 8;  /**< [  7:  0](RO) Preamble identification value. */
#else /* Word 0 - Little Endian */
        uint32_t preamble              : 8;  /**< [  7:  0](RO) Preamble identification value. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_cidr2_s cn; */
};
typedef union cavm_smmux_cidr2 cavm_smmux_cidr2_t;

static inline uint64_t CAVM_SMMUX_CIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_CIDR2(uint64_t a)
{
    if (a==0)
        return 0x830000000ff8ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_CIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_CIDR2(a) cavm_smmux_cidr2_t
#define bustype_CAVM_SMMUX_CIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_CIDR2(a) "SMMUX_CIDR2"
#define device_bar_CAVM_SMMUX_CIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_CIDR2(a) (a)
#define arguments_CAVM_SMMUX_CIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_cidr3
 *
 * SMMU Component Identification Register 3
 */
union cavm_smmux_cidr3
{
    uint32_t u;
    struct cavm_smmux_cidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t preamble              : 8;  /**< [  7:  0](RO) Preamble identification value. */
#else /* Word 0 - Little Endian */
        uint32_t preamble              : 8;  /**< [  7:  0](RO) Preamble identification value. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_cidr3_s cn; */
};
typedef union cavm_smmux_cidr3 cavm_smmux_cidr3_t;

static inline uint64_t CAVM_SMMUX_CIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_CIDR3(uint64_t a)
{
    if (a==0)
        return 0x830000000ffcll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_CIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_CIDR3(a) cavm_smmux_cidr3_t
#define bustype_CAVM_SMMUX_CIDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_CIDR3(a) "SMMUX_CIDR3"
#define device_bar_CAVM_SMMUX_CIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_CIDR3(a) (a)
#define arguments_CAVM_SMMUX_CIDR3(a) (a),-1,-1,-1

/**
 * Register (NCB) smmu#_cmdq_base
 *
 * SMMU Command Queue Base Register
 */
union cavm_smmux_cmdq_base
{
    uint64_t u;
    struct cavm_smmux_cmdq_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t ra                    : 1;  /**< [ 62: 62](R/W) SMMU(0)_S_CMDQ_BASE[RA] */
        uint64_t reserved_52_61        : 10;
        uint64_t addr                  : 47; /**< [ 51:  5](R/W) SMMU(0)_S_CMDQ_BASE[ADDR] */
        uint64_t log2size              : 5;  /**< [  4:  0](R/W) SMMU(0)_S_CMDQ_BASE[LOG2SIZE] */
#else /* Word 0 - Little Endian */
        uint64_t log2size              : 5;  /**< [  4:  0](R/W) SMMU(0)_S_CMDQ_BASE[LOG2SIZE] */
        uint64_t addr                  : 47; /**< [ 51:  5](R/W) SMMU(0)_S_CMDQ_BASE[ADDR] */
        uint64_t reserved_52_61        : 10;
        uint64_t ra                    : 1;  /**< [ 62: 62](R/W) SMMU(0)_S_CMDQ_BASE[RA] */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_cmdq_base_s cn; */
};
typedef union cavm_smmux_cmdq_base cavm_smmux_cmdq_base_t;

static inline uint64_t CAVM_SMMUX_CMDQ_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_CMDQ_BASE(uint64_t a)
{
    if (a==0)
        return 0x830000000090ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_CMDQ_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_CMDQ_BASE(a) cavm_smmux_cmdq_base_t
#define bustype_CAVM_SMMUX_CMDQ_BASE(a) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_CMDQ_BASE(a) "SMMUX_CMDQ_BASE"
#define device_bar_CAVM_SMMUX_CMDQ_BASE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_CMDQ_BASE(a) (a)
#define arguments_CAVM_SMMUX_CMDQ_BASE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_cmdq_cons
 *
 * SMMU Command Queue Consumer Register
 */
union cavm_smmux_cmdq_cons
{
    uint32_t u;
    struct cavm_smmux_cmdq_cons_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t errx                  : 7;  /**< [ 30: 24](RO/H) SMMU(0)_S_CMDQ_CONS[ERRX] */
        uint32_t reserved_20_23        : 4;
        uint32_t rd                    : 20; /**< [ 19:  0](R/W/H) SMMU(0)_S_CMDQ_CONS[RD] */
#else /* Word 0 - Little Endian */
        uint32_t rd                    : 20; /**< [ 19:  0](R/W/H) SMMU(0)_S_CMDQ_CONS[RD] */
        uint32_t reserved_20_23        : 4;
        uint32_t errx                  : 7;  /**< [ 30: 24](RO/H) SMMU(0)_S_CMDQ_CONS[ERRX] */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_cmdq_cons_s cn; */
};
typedef union cavm_smmux_cmdq_cons cavm_smmux_cmdq_cons_t;

static inline uint64_t CAVM_SMMUX_CMDQ_CONS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_CMDQ_CONS(uint64_t a)
{
    if (a==0)
        return 0x83000000009cll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_CMDQ_CONS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_CMDQ_CONS(a) cavm_smmux_cmdq_cons_t
#define bustype_CAVM_SMMUX_CMDQ_CONS(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_CMDQ_CONS(a) "SMMUX_CMDQ_CONS"
#define device_bar_CAVM_SMMUX_CMDQ_CONS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_CMDQ_CONS(a) (a)
#define arguments_CAVM_SMMUX_CMDQ_CONS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_cmdq_prod
 *
 * SMMU Command Queue Producer Register
 */
union cavm_smmux_cmdq_prod
{
    uint32_t u;
    struct cavm_smmux_cmdq_prod_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_20_31        : 12;
        uint32_t wr                    : 20; /**< [ 19:  0](R/W) SMMU(0)_S_CMDQ_PROD[WR] */
#else /* Word 0 - Little Endian */
        uint32_t wr                    : 20; /**< [ 19:  0](R/W) SMMU(0)_S_CMDQ_PROD[WR] */
        uint32_t reserved_20_31        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_cmdq_prod_s cn; */
};
typedef union cavm_smmux_cmdq_prod cavm_smmux_cmdq_prod_t;

static inline uint64_t CAVM_SMMUX_CMDQ_PROD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_CMDQ_PROD(uint64_t a)
{
    if (a==0)
        return 0x830000000098ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_CMDQ_PROD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_CMDQ_PROD(a) cavm_smmux_cmdq_prod_t
#define bustype_CAVM_SMMUX_CMDQ_PROD(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_CMDQ_PROD(a) "SMMUX_CMDQ_PROD"
#define device_bar_CAVM_SMMUX_CMDQ_PROD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_CMDQ_PROD(a) (a)
#define arguments_CAVM_SMMUX_CMDQ_PROD(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_cr0
 *
 * SMMU Control 0 Register
 * Each field in this register has a corresponding field in SMMU()_CR0ACK. An
 * individual field is said to be "updated" after the value of the field observed in
 * SMMU()_CR0ACK matches the value that was written to the field in
 * SMMU()_CR0. Reserved fields in SMMU()_CR0 are not reflected in SMMU()_CR0ACK. To
 * ensure a field change has taken effect, software must poll the equivalent field in
 * SMMU()_CR0ACK after writing the field in this register.
 *
 * Each field in this register is independent and unaffected by ongoing update
 * procedures of adjacent fields.
 *
 * Update of a field must complete in reasonable time, but is not required to occur
 * immediately.  The update process may have side effects which are guaranteed to be
 * complete by the time update completes. See below for details of any side effects.
 *
 * A field that has been written is considered to be in a transitional state until
 * update has completed. Anything depending on its value observes the old value until
 * the new value takes effect at an unpredictable point before update completes
 * whereupon the new value is guaranteed to be used, therefore:
 *
 * A written field cannot be assumed to have taken the new value until update completes.
 *
 * A written field cannot be assumed not to have taken the new value after the write is
 * observed by the SMMU.
 *
 * Anywhere behavior depending on a field value (for example, a rule of the form "REG
 * must only be changed if SMMUEN=0"), it is the post-update value that is referred
 * to. In this example, the rule would be broken were REG to be changed after the point
 * that SMMU()_(S_)SMMUEN has been written to one even if update has not
 * completed. Similarly, a field that has been written and is still in a transitional
 * state (pre-update completion) must be considered to still have the old value for the
 * purposes of constraints the old value places upon software. For example,
 * SMMU()_CMDQ_CONS must not be written when CMDQEN=1, or during an as -yet incomplete
 * transition to 0 (as [CMDQEN] must still be considered to be one).
 *
 * After altering a field value, software must not alter the field's value again before
 * the initial alteration's update is complete. Behavior on doing so is constrained
 * unpredictable and one of the following occurs: The new value is stored and the
 * update completes with any of the values written.
 *
 * The effective field value in use might not match that read back from this register.
 * The new value is ignored and update completes using the first value (reflected in
 * SMMU()_CR0ACK).  Cease update if the new value is the same as the original value
 * before the first write.  This means no update side effects would occur.
 *
 * A write with the same value (i.e. not altered) is permitted; this might occur when
 * altering an unrelated field in the same register whilst an earlier field update is
 * in process.
 */
union cavm_smmux_cr0
{
    uint32_t u;
    struct cavm_smmux_cr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_9_31         : 23;
        uint32_t vmw                   : 3;  /**< [  8:  6](RAZ) VMID wildcard.
                                                                  000 = TLB invalidations (broadcast or command) match VMID tags exactly.

                                                                 For CNXXXX, other values not supported. */
        uint32_t reserved_5            : 1;
        uint32_t atschk                : 1;  /**< [  4:  4](RAZ) ATS behavior.

                                                                 In CNXXXX, reserved. */
        uint32_t cmdqen                : 1;  /**< [  3:  3](R/W) Enable command queue processing. */
        uint32_t eventqen              : 1;  /**< [  2:  2](R/W) Enable event queue writes. */
        uint32_t priqen                : 1;  /**< [  1:  1](RAZ) Enable pri queue writes.
                                                                 In CNXXXX, reserved. */
        uint32_t smmuen                : 1;  /**< [  0:  0](R/W) SMMU NS enable.
                                                                 0 = All nonsecure traffic bypasses SMMU with attributes
                                                                 determined from SMMU()_GBPA.

                                                                 1 = All nonsecure transactions are checked against configuration structures and
                                                                 may (if the relevant STE enables it) undergo translation.  SMMU()_S_CR0 has
                                                                 separate enable for secure interface and traffic. */
#else /* Word 0 - Little Endian */
        uint32_t smmuen                : 1;  /**< [  0:  0](R/W) SMMU NS enable.
                                                                 0 = All nonsecure traffic bypasses SMMU with attributes
                                                                 determined from SMMU()_GBPA.

                                                                 1 = All nonsecure transactions are checked against configuration structures and
                                                                 may (if the relevant STE enables it) undergo translation.  SMMU()_S_CR0 has
                                                                 separate enable for secure interface and traffic. */
        uint32_t priqen                : 1;  /**< [  1:  1](RAZ) Enable pri queue writes.
                                                                 In CNXXXX, reserved. */
        uint32_t eventqen              : 1;  /**< [  2:  2](R/W) Enable event queue writes. */
        uint32_t cmdqen                : 1;  /**< [  3:  3](R/W) Enable command queue processing. */
        uint32_t atschk                : 1;  /**< [  4:  4](RAZ) ATS behavior.

                                                                 In CNXXXX, reserved. */
        uint32_t reserved_5            : 1;
        uint32_t vmw                   : 3;  /**< [  8:  6](RAZ) VMID wildcard.
                                                                  000 = TLB invalidations (broadcast or command) match VMID tags exactly.

                                                                 For CNXXXX, other values not supported. */
        uint32_t reserved_9_31         : 23;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_cr0_s cn; */
};
typedef union cavm_smmux_cr0 cavm_smmux_cr0_t;

static inline uint64_t CAVM_SMMUX_CR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_CR0(uint64_t a)
{
    if (a==0)
        return 0x830000000020ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_CR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_CR0(a) cavm_smmux_cr0_t
#define bustype_CAVM_SMMUX_CR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_CR0(a) "SMMUX_CR0"
#define device_bar_CAVM_SMMUX_CR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_CR0(a) (a)
#define arguments_CAVM_SMMUX_CR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_cr0ack
 *
 * SMMU Control 0 Acknowledgement Register
 * This register is a read-only copy of SMMU()_CR0.
 */
union cavm_smmux_cr0ack
{
    uint32_t u;
    struct cavm_smmux_cr0ack_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_9_31         : 23;
        uint32_t vmw                   : 3;  /**< [  8:  6](RAZ) Read-only hardware-modified SMMU(0)_CR0[VMW]. */
        uint32_t reserved_5            : 1;
        uint32_t atschk                : 1;  /**< [  4:  4](RAZ) Read-only hardware-modified SMMU(0)_CR0[ATSCHK]. */
        uint32_t cmdqen                : 1;  /**< [  3:  3](RO/H) Read-only hardware-modified SMMU(0)_CR0[CMDQEN]. */
        uint32_t eventqen              : 1;  /**< [  2:  2](RO/H) Read-only hardware-modified SMMU(0)_CR0[EVENTQEN]. */
        uint32_t priqen                : 1;  /**< [  1:  1](RAZ) Read-only hardware-modified SMMU(0)_CR0[PRIQEN]. */
        uint32_t smmuen                : 1;  /**< [  0:  0](RO/H) Read-only hardware-modified SMMU(0)_CR0[SMMUEN]. */
#else /* Word 0 - Little Endian */
        uint32_t smmuen                : 1;  /**< [  0:  0](RO/H) Read-only hardware-modified SMMU(0)_CR0[SMMUEN]. */
        uint32_t priqen                : 1;  /**< [  1:  1](RAZ) Read-only hardware-modified SMMU(0)_CR0[PRIQEN]. */
        uint32_t eventqen              : 1;  /**< [  2:  2](RO/H) Read-only hardware-modified SMMU(0)_CR0[EVENTQEN]. */
        uint32_t cmdqen                : 1;  /**< [  3:  3](RO/H) Read-only hardware-modified SMMU(0)_CR0[CMDQEN]. */
        uint32_t atschk                : 1;  /**< [  4:  4](RAZ) Read-only hardware-modified SMMU(0)_CR0[ATSCHK]. */
        uint32_t reserved_5            : 1;
        uint32_t vmw                   : 3;  /**< [  8:  6](RAZ) Read-only hardware-modified SMMU(0)_CR0[VMW]. */
        uint32_t reserved_9_31         : 23;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_cr0ack_s cn; */
};
typedef union cavm_smmux_cr0ack cavm_smmux_cr0ack_t;

static inline uint64_t CAVM_SMMUX_CR0ACK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_CR0ACK(uint64_t a)
{
    if (a==0)
        return 0x830000000024ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_CR0ACK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_CR0ACK(a) cavm_smmux_cr0ack_t
#define bustype_CAVM_SMMUX_CR0ACK(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_CR0ACK(a) "SMMUX_CR0ACK"
#define device_bar_CAVM_SMMUX_CR0ACK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_CR0ACK(a) (a)
#define arguments_CAVM_SMMUX_CR0ACK(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_cr1
 *
 * SMMU Control 1 Register
 */
union cavm_smmux_cr1
{
    uint32_t u;
    struct cavm_smmux_cr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_12_31        : 20;
        uint32_t table_sh              : 2;  /**< [ 11: 10](R/W) SMMU(0)_S_CR1[TABLE_SH] */
        uint32_t table_oc              : 2;  /**< [  9:  8](R/W) SMMU(0)_S_CR1[TABLE_OC] */
        uint32_t table_ic              : 2;  /**< [  7:  6](R/W) SMMU(0)_S_CR1[TABLE_IC] */
        uint32_t queue_sh              : 2;  /**< [  5:  4](R/W) SMMU(0)_S_CR1[QUEUE_SH] */
        uint32_t queue_oc              : 2;  /**< [  3:  2](R/W) SMMU(0)_S_CR1[QUEUE_OC] */
        uint32_t queue_ic              : 2;  /**< [  1:  0](R/W) SMMU(0)_S_CR1[QUEUE_IC] */
#else /* Word 0 - Little Endian */
        uint32_t queue_ic              : 2;  /**< [  1:  0](R/W) SMMU(0)_S_CR1[QUEUE_IC] */
        uint32_t queue_oc              : 2;  /**< [  3:  2](R/W) SMMU(0)_S_CR1[QUEUE_OC] */
        uint32_t queue_sh              : 2;  /**< [  5:  4](R/W) SMMU(0)_S_CR1[QUEUE_SH] */
        uint32_t table_ic              : 2;  /**< [  7:  6](R/W) SMMU(0)_S_CR1[TABLE_IC] */
        uint32_t table_oc              : 2;  /**< [  9:  8](R/W) SMMU(0)_S_CR1[TABLE_OC] */
        uint32_t table_sh              : 2;  /**< [ 11: 10](R/W) SMMU(0)_S_CR1[TABLE_SH] */
        uint32_t reserved_12_31        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_cr1_s cn; */
};
typedef union cavm_smmux_cr1 cavm_smmux_cr1_t;

static inline uint64_t CAVM_SMMUX_CR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_CR1(uint64_t a)
{
    if (a==0)
        return 0x830000000028ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_CR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_CR1(a) cavm_smmux_cr1_t
#define bustype_CAVM_SMMUX_CR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_CR1(a) "SMMUX_CR1"
#define device_bar_CAVM_SMMUX_CR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_CR1(a) (a)
#define arguments_CAVM_SMMUX_CR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_cr2
 *
 * SMMU Control 2 Register
 */
union cavm_smmux_cr2
{
    uint32_t u;
    struct cavm_smmux_cr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t ptm                   : 1;  /**< [  2:  2](R/W) Private TLB maintenance.

                                                                 When set, the SMMU is not expected to invalidate any local TLB entries on receipt of
                                                                 broadcast TLB maintenance operations for NS-EL1, EL2, or EL2-E2H translation regimes.

                                                                 Broadcast invalidation for S-EL1 or EL3 translation regimes are not affected by
                                                                 this flag; see SMMU()_S_CR2[PTM]. */
        uint32_t recinvsid             : 1;  /**< [  1:  1](R/W) Record event SMMU_C_BAD_STREAMID_S from invalid input StreamIDs. When the SMMU
                                                                 is enabled, all traffic should be associated with a valid, reachable STE. Any
                                                                 transaction with a StreamID out of the range of a linear stream table, reaching
                                                                 an invalid pointer in a two-level stream table or out of the range of a second level
                                                                 array will be aborted. This bit determines whether SMMU_C_BAD_STREAMID_S events
                                                                 are recorded when this happens. */
        uint32_t e2h                   : 1;  /**< [  0:  0](R/W) Enable EL2-E2H translation regime for EL2 stream worlds.
                                                                   0 = EL2 translation regime, without ASIDs or VMIDs.
                                                                   1 = EL2-E2H translation regime used, with ASID.

                                                                 This field affects the SMMU_STE_S[STRW] encoding 0x2, which selects a hypervisor
                                                                 translation regime for the resulting translations; the translations are tagged
                                                                 without ASID in EL2 mode, or with ASID in EL2-E2H mode.

                                                                 This field should match the HCR_EL2[E2H] field in host CPUs.

                                                                 This bit is permitted to be cached in configuration caches and TLBs. Changes to
                                                                 this bit must be accompanied by invalidation of configuration and translations
                                                                 pertinent to streams configured with SMMU_STE_S[STRW]=EL2/EL2-E2H.

                                                                 When SMMU()_IDR0[HYP]=0, this field is reserved. */
#else /* Word 0 - Little Endian */
        uint32_t e2h                   : 1;  /**< [  0:  0](R/W) Enable EL2-E2H translation regime for EL2 stream worlds.
                                                                   0 = EL2 translation regime, without ASIDs or VMIDs.
                                                                   1 = EL2-E2H translation regime used, with ASID.

                                                                 This field affects the SMMU_STE_S[STRW] encoding 0x2, which selects a hypervisor
                                                                 translation regime for the resulting translations; the translations are tagged
                                                                 without ASID in EL2 mode, or with ASID in EL2-E2H mode.

                                                                 This field should match the HCR_EL2[E2H] field in host CPUs.

                                                                 This bit is permitted to be cached in configuration caches and TLBs. Changes to
                                                                 this bit must be accompanied by invalidation of configuration and translations
                                                                 pertinent to streams configured with SMMU_STE_S[STRW]=EL2/EL2-E2H.

                                                                 When SMMU()_IDR0[HYP]=0, this field is reserved. */
        uint32_t recinvsid             : 1;  /**< [  1:  1](R/W) Record event SMMU_C_BAD_STREAMID_S from invalid input StreamIDs. When the SMMU
                                                                 is enabled, all traffic should be associated with a valid, reachable STE. Any
                                                                 transaction with a StreamID out of the range of a linear stream table, reaching
                                                                 an invalid pointer in a two-level stream table or out of the range of a second level
                                                                 array will be aborted. This bit determines whether SMMU_C_BAD_STREAMID_S events
                                                                 are recorded when this happens. */
        uint32_t ptm                   : 1;  /**< [  2:  2](R/W) Private TLB maintenance.

                                                                 When set, the SMMU is not expected to invalidate any local TLB entries on receipt of
                                                                 broadcast TLB maintenance operations for NS-EL1, EL2, or EL2-E2H translation regimes.

                                                                 Broadcast invalidation for S-EL1 or EL3 translation regimes are not affected by
                                                                 this flag; see SMMU()_S_CR2[PTM]. */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_cr2_s cn; */
};
typedef union cavm_smmux_cr2 cavm_smmux_cr2_t;

static inline uint64_t CAVM_SMMUX_CR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_CR2(uint64_t a)
{
    if (a==0)
        return 0x83000000002cll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_CR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_CR2(a) cavm_smmux_cr2_t
#define bustype_CAVM_SMMUX_CR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_CR2(a) "SMMUX_CR2"
#define device_bar_CAVM_SMMUX_CR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_CR2(a) (a)
#define arguments_CAVM_SMMUX_CR2(a) (a),-1,-1,-1

/**
 * Register (NCB) smmu#_eventq_base
 *
 * SMMU Event Queue Base Register
 */
union cavm_smmux_eventq_base
{
    uint64_t u;
    struct cavm_smmux_eventq_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t wa                    : 1;  /**< [ 62: 62](R/W) SMMU(0)_S_EVENTQ_BASE[WA] */
        uint64_t reserved_52_61        : 10;
        uint64_t addr                  : 47; /**< [ 51:  5](R/W) SMMU(0)_S_EVENTQ_BASE[ADDR] */
        uint64_t log2size              : 5;  /**< [  4:  0](R/W) SMMU(0)_S_EVENTQ_BASE[LOG2SIZE] */
#else /* Word 0 - Little Endian */
        uint64_t log2size              : 5;  /**< [  4:  0](R/W) SMMU(0)_S_EVENTQ_BASE[LOG2SIZE] */
        uint64_t addr                  : 47; /**< [ 51:  5](R/W) SMMU(0)_S_EVENTQ_BASE[ADDR] */
        uint64_t reserved_52_61        : 10;
        uint64_t wa                    : 1;  /**< [ 62: 62](R/W) SMMU(0)_S_EVENTQ_BASE[WA] */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_eventq_base_s cn; */
};
typedef union cavm_smmux_eventq_base cavm_smmux_eventq_base_t;

static inline uint64_t CAVM_SMMUX_EVENTQ_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_EVENTQ_BASE(uint64_t a)
{
    if (a==0)
        return 0x8300000000a0ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_EVENTQ_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_EVENTQ_BASE(a) cavm_smmux_eventq_base_t
#define bustype_CAVM_SMMUX_EVENTQ_BASE(a) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_EVENTQ_BASE(a) "SMMUX_EVENTQ_BASE"
#define device_bar_CAVM_SMMUX_EVENTQ_BASE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_EVENTQ_BASE(a) (a)
#define arguments_CAVM_SMMUX_EVENTQ_BASE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_eventq_cons
 *
 * SMMU Event Queue Consumer Register
 */
union cavm_smmux_eventq_cons
{
    uint32_t u;
    struct cavm_smmux_eventq_cons_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ovackflg              : 1;  /**< [ 31: 31](R/W) SMMU(0)_S_EVENTQ_CONS[OVACKFLG] */
        uint32_t reserved_20_30        : 11;
        uint32_t rd                    : 20; /**< [ 19:  0](R/W) SMMU(0)_S_EVENTQ_CONS[RD] */
#else /* Word 0 - Little Endian */
        uint32_t rd                    : 20; /**< [ 19:  0](R/W) SMMU(0)_S_EVENTQ_CONS[RD] */
        uint32_t reserved_20_30        : 11;
        uint32_t ovackflg              : 1;  /**< [ 31: 31](R/W) SMMU(0)_S_EVENTQ_CONS[OVACKFLG] */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_eventq_cons_s cn; */
};
typedef union cavm_smmux_eventq_cons cavm_smmux_eventq_cons_t;

static inline uint64_t CAVM_SMMUX_EVENTQ_CONS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_EVENTQ_CONS(uint64_t a)
{
    if (a==0)
        return 0x8300000100acll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_EVENTQ_CONS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_EVENTQ_CONS(a) cavm_smmux_eventq_cons_t
#define bustype_CAVM_SMMUX_EVENTQ_CONS(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_EVENTQ_CONS(a) "SMMUX_EVENTQ_CONS"
#define device_bar_CAVM_SMMUX_EVENTQ_CONS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_EVENTQ_CONS(a) (a)
#define arguments_CAVM_SMMUX_EVENTQ_CONS(a) (a),-1,-1,-1

/**
 * Register (NCB) smmu#_eventq_irq_cfg0
 *
 * SMMU Event Queue Interrupt Configuration 0 Register
 */
union cavm_smmux_eventq_irq_cfg0
{
    uint64_t u;
    struct cavm_smmux_eventq_irq_cfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t addr                  : 50; /**< [ 51:  2](R/W) SMMU(0)_S_GERROR_IRQ_CFG0[ADDR] */
        uint64_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_1          : 2;
        uint64_t addr                  : 50; /**< [ 51:  2](R/W) SMMU(0)_S_GERROR_IRQ_CFG0[ADDR] */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_eventq_irq_cfg0_s cn; */
};
typedef union cavm_smmux_eventq_irq_cfg0 cavm_smmux_eventq_irq_cfg0_t;

static inline uint64_t CAVM_SMMUX_EVENTQ_IRQ_CFG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_EVENTQ_IRQ_CFG0(uint64_t a)
{
    if (a==0)
        return 0x8300000000b0ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_EVENTQ_IRQ_CFG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_EVENTQ_IRQ_CFG0(a) cavm_smmux_eventq_irq_cfg0_t
#define bustype_CAVM_SMMUX_EVENTQ_IRQ_CFG0(a) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_EVENTQ_IRQ_CFG0(a) "SMMUX_EVENTQ_IRQ_CFG0"
#define device_bar_CAVM_SMMUX_EVENTQ_IRQ_CFG0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_EVENTQ_IRQ_CFG0(a) (a)
#define arguments_CAVM_SMMUX_EVENTQ_IRQ_CFG0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_eventq_irq_cfg1
 *
 * SMMU Event Queue Interrupt Configuration 1 Register
 */
union cavm_smmux_eventq_irq_cfg1
{
    uint32_t u;
    struct cavm_smmux_eventq_irq_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) SMMU(0)_S_GERROR_IRQ_CFG1[DATA] */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) SMMU(0)_S_GERROR_IRQ_CFG1[DATA] */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_eventq_irq_cfg1_s cn; */
};
typedef union cavm_smmux_eventq_irq_cfg1 cavm_smmux_eventq_irq_cfg1_t;

static inline uint64_t CAVM_SMMUX_EVENTQ_IRQ_CFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_EVENTQ_IRQ_CFG1(uint64_t a)
{
    if (a==0)
        return 0x8300000000b8ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_EVENTQ_IRQ_CFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_EVENTQ_IRQ_CFG1(a) cavm_smmux_eventq_irq_cfg1_t
#define bustype_CAVM_SMMUX_EVENTQ_IRQ_CFG1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_EVENTQ_IRQ_CFG1(a) "SMMUX_EVENTQ_IRQ_CFG1"
#define device_bar_CAVM_SMMUX_EVENTQ_IRQ_CFG1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_EVENTQ_IRQ_CFG1(a) (a)
#define arguments_CAVM_SMMUX_EVENTQ_IRQ_CFG1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_eventq_irq_cfg2
 *
 * SMMU Event Queue Interrupt Configuration 2 Register
 */
union cavm_smmux_eventq_irq_cfg2
{
    uint32_t u;
    struct cavm_smmux_eventq_irq_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t sh                    : 2;  /**< [  5:  4](R/W) SMMU(0)_S_GERROR_IRQ_CFG2[SH] */
        uint32_t memattr               : 4;  /**< [  3:  0](R/W) SMMU(0)_S_GERROR_IRQ_CFG2[MEMATTR] */
#else /* Word 0 - Little Endian */
        uint32_t memattr               : 4;  /**< [  3:  0](R/W) SMMU(0)_S_GERROR_IRQ_CFG2[MEMATTR] */
        uint32_t sh                    : 2;  /**< [  5:  4](R/W) SMMU(0)_S_GERROR_IRQ_CFG2[SH] */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_eventq_irq_cfg2_s cn; */
};
typedef union cavm_smmux_eventq_irq_cfg2 cavm_smmux_eventq_irq_cfg2_t;

static inline uint64_t CAVM_SMMUX_EVENTQ_IRQ_CFG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_EVENTQ_IRQ_CFG2(uint64_t a)
{
    if (a==0)
        return 0x8300000000bcll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_EVENTQ_IRQ_CFG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_EVENTQ_IRQ_CFG2(a) cavm_smmux_eventq_irq_cfg2_t
#define bustype_CAVM_SMMUX_EVENTQ_IRQ_CFG2(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_EVENTQ_IRQ_CFG2(a) "SMMUX_EVENTQ_IRQ_CFG2"
#define device_bar_CAVM_SMMUX_EVENTQ_IRQ_CFG2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_EVENTQ_IRQ_CFG2(a) (a)
#define arguments_CAVM_SMMUX_EVENTQ_IRQ_CFG2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_eventq_prod
 *
 * SMMU Event Queue Producer Register
 */
union cavm_smmux_eventq_prod
{
    uint32_t u;
    struct cavm_smmux_eventq_prod_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ovflg                 : 1;  /**< [ 31: 31](R/W/H) SMMU(0)_S_EVENTQ_PROD[OVFLG] */
        uint32_t reserved_20_30        : 11;
        uint32_t wr                    : 20; /**< [ 19:  0](R/W/H) SMMU(0)_S_EVENTQ_PROD[WR] */
#else /* Word 0 - Little Endian */
        uint32_t wr                    : 20; /**< [ 19:  0](R/W/H) SMMU(0)_S_EVENTQ_PROD[WR] */
        uint32_t reserved_20_30        : 11;
        uint32_t ovflg                 : 1;  /**< [ 31: 31](R/W/H) SMMU(0)_S_EVENTQ_PROD[OVFLG] */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_eventq_prod_s cn; */
};
typedef union cavm_smmux_eventq_prod cavm_smmux_eventq_prod_t;

static inline uint64_t CAVM_SMMUX_EVENTQ_PROD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_EVENTQ_PROD(uint64_t a)
{
    if (a==0)
        return 0x8300000100a8ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_EVENTQ_PROD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_EVENTQ_PROD(a) cavm_smmux_eventq_prod_t
#define bustype_CAVM_SMMUX_EVENTQ_PROD(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_EVENTQ_PROD(a) "SMMUX_EVENTQ_PROD"
#define device_bar_CAVM_SMMUX_EVENTQ_PROD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_EVENTQ_PROD(a) (a)
#define arguments_CAVM_SMMUX_EVENTQ_PROD(a) (a),-1,-1,-1

/**
 * Register (NCB) smmu#_gatos_addr
 *
 * SMMU GATOS Address Register
 */
union cavm_smmux_gatos_addr
{
    uint64_t u;
    struct cavm_smmux_gatos_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 52; /**< [ 63: 12](R/W) SMMU(0)_S_GATOS_ADDR[ADDR] */
        uint64_t rtype                 : 2;  /**< [ 11: 10](R/W) SMMU(0)_S_GATOS_ADDR[RTYPE] */
        uint64_t pnu                   : 1;  /**< [  9:  9](R/W) SMMU(0)_S_GATOS_ADDR[PNU] */
        uint64_t rnw                   : 1;  /**< [  8:  8](R/W) SMMU(0)_S_GATOS_ADDR[RNW] */
        uint64_t ind                   : 1;  /**< [  7:  7](R/W) SMMU(0)_S_GATOS_ADDR[IND] */
        uint64_t httui                 : 1;  /**< [  6:  6](R/W) SMMU(0)_S_GATOS_ADDR[HTTUI] */
        uint64_t reserved_5            : 1;
        uint64_t ns_ind                : 1;  /**< [  4:  4](R/W) SMMU(0)_S_GATOS_ADDR[NS_IND] */
        uint64_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_3          : 4;
        uint64_t ns_ind                : 1;  /**< [  4:  4](R/W) SMMU(0)_S_GATOS_ADDR[NS_IND] */
        uint64_t reserved_5            : 1;
        uint64_t httui                 : 1;  /**< [  6:  6](R/W) SMMU(0)_S_GATOS_ADDR[HTTUI] */
        uint64_t ind                   : 1;  /**< [  7:  7](R/W) SMMU(0)_S_GATOS_ADDR[IND] */
        uint64_t rnw                   : 1;  /**< [  8:  8](R/W) SMMU(0)_S_GATOS_ADDR[RNW] */
        uint64_t pnu                   : 1;  /**< [  9:  9](R/W) SMMU(0)_S_GATOS_ADDR[PNU] */
        uint64_t rtype                 : 2;  /**< [ 11: 10](R/W) SMMU(0)_S_GATOS_ADDR[RTYPE] */
        uint64_t addr                  : 52; /**< [ 63: 12](R/W) SMMU(0)_S_GATOS_ADDR[ADDR] */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_gatos_addr_s cn; */
};
typedef union cavm_smmux_gatos_addr cavm_smmux_gatos_addr_t;

static inline uint64_t CAVM_SMMUX_GATOS_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_GATOS_ADDR(uint64_t a)
{
    if (a==0)
        return 0x830000000110ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_GATOS_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_GATOS_ADDR(a) cavm_smmux_gatos_addr_t
#define bustype_CAVM_SMMUX_GATOS_ADDR(a) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_GATOS_ADDR(a) "SMMUX_GATOS_ADDR"
#define device_bar_CAVM_SMMUX_GATOS_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_GATOS_ADDR(a) (a)
#define arguments_CAVM_SMMUX_GATOS_ADDR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_gatos_ctrl
 *
 * SMMU GATOS Control Register
 */
union cavm_smmux_gatos_ctrl
{
    uint32_t u;
    struct cavm_smmux_gatos_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t run                   : 1;  /**< [  0:  0](R/W1S/H) SMMU(0)_S_GATOS_CTRL[RUN] */
#else /* Word 0 - Little Endian */
        uint32_t run                   : 1;  /**< [  0:  0](R/W1S/H) SMMU(0)_S_GATOS_CTRL[RUN] */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_gatos_ctrl_s cn; */
};
typedef union cavm_smmux_gatos_ctrl cavm_smmux_gatos_ctrl_t;

static inline uint64_t CAVM_SMMUX_GATOS_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_GATOS_CTRL(uint64_t a)
{
    if (a==0)
        return 0x830000000100ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_GATOS_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_GATOS_CTRL(a) cavm_smmux_gatos_ctrl_t
#define bustype_CAVM_SMMUX_GATOS_CTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_GATOS_CTRL(a) "SMMUX_GATOS_CTRL"
#define device_bar_CAVM_SMMUX_GATOS_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_GATOS_CTRL(a) (a)
#define arguments_CAVM_SMMUX_GATOS_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB) smmu#_gatos_par
 *
 * SMMU GATOS Address Register
 */
union cavm_smmux_gatos_par
{
    uint64_t u;
    struct cavm_smmux_gatos_par_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t par                   : 64; /**< [ 63:  0](RO/H) SMMU(0)_S_GATOS_PAR[PAR] */
#else /* Word 0 - Little Endian */
        uint64_t par                   : 64; /**< [ 63:  0](RO/H) SMMU(0)_S_GATOS_PAR[PAR] */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_gatos_par_s cn; */
};
typedef union cavm_smmux_gatos_par cavm_smmux_gatos_par_t;

static inline uint64_t CAVM_SMMUX_GATOS_PAR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_GATOS_PAR(uint64_t a)
{
    if (a==0)
        return 0x830000000118ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_GATOS_PAR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_GATOS_PAR(a) cavm_smmux_gatos_par_t
#define bustype_CAVM_SMMUX_GATOS_PAR(a) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_GATOS_PAR(a) "SMMUX_GATOS_PAR"
#define device_bar_CAVM_SMMUX_GATOS_PAR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_GATOS_PAR(a) (a)
#define arguments_CAVM_SMMUX_GATOS_PAR(a) (a),-1,-1,-1

/**
 * Register (NCB) smmu#_gatos_sid
 *
 * SMMU GATOS SID Register
 */
union cavm_smmux_gatos_sid
{
    uint64_t u;
    struct cavm_smmux_gatos_sid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t ssid_valid            : 1;  /**< [ 52: 52](RAZ) SubstreamID valid. */
        uint64_t substreamid           : 20; /**< [ 51: 32](RAZ) SubstreamID of request.
                                                                 If SMMU()_IDR1[SSIDSIZE]\<20, bits \<51:32+SMMU()_IDR1[SSIDSIZE]\> are RES0. */
        uint64_t reserved_24_31        : 8;
        uint64_t streamid              : 24; /**< [ 23:  0](R/W) StreamID of request.
                                                                 This is written with the StreamID (used to locate translations/CDs) of the request
                                                                 later submitted
                                                                 to SMMU()_GATOS_ADDR.
                                                                 If SMMU()_IDR1[SIDSIZE]\<32, bits \<31:SMMU()_IDR1[SIDSIZE]\> are RES0. */
#else /* Word 0 - Little Endian */
        uint64_t streamid              : 24; /**< [ 23:  0](R/W) StreamID of request.
                                                                 This is written with the StreamID (used to locate translations/CDs) of the request
                                                                 later submitted
                                                                 to SMMU()_GATOS_ADDR.
                                                                 If SMMU()_IDR1[SIDSIZE]\<32, bits \<31:SMMU()_IDR1[SIDSIZE]\> are RES0. */
        uint64_t reserved_24_31        : 8;
        uint64_t substreamid           : 20; /**< [ 51: 32](RAZ) SubstreamID of request.
                                                                 If SMMU()_IDR1[SSIDSIZE]\<20, bits \<51:32+SMMU()_IDR1[SSIDSIZE]\> are RES0. */
        uint64_t ssid_valid            : 1;  /**< [ 52: 52](RAZ) SubstreamID valid. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_gatos_sid_s cn; */
};
typedef union cavm_smmux_gatos_sid cavm_smmux_gatos_sid_t;

static inline uint64_t CAVM_SMMUX_GATOS_SID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_GATOS_SID(uint64_t a)
{
    if (a==0)
        return 0x830000000108ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_GATOS_SID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_GATOS_SID(a) cavm_smmux_gatos_sid_t
#define bustype_CAVM_SMMUX_GATOS_SID(a) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_GATOS_SID(a) "SMMUX_GATOS_SID"
#define device_bar_CAVM_SMMUX_GATOS_SID(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_GATOS_SID(a) (a)
#define arguments_CAVM_SMMUX_GATOS_SID(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_gbpa
 *
 * SMMU Global Bypass Attribute Register
 */
union cavm_smmux_gbpa
{
    uint32_t u;
    struct cavm_smmux_gbpa_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t update                : 1;  /**< [ 31: 31](RAZ) Update/completion flag. */
        uint32_t reserved_21_30        : 10;
        uint32_t abrt                  : 1;  /**< [ 20: 20](R/W) Abort all incoming transactions.
                                                                 0 = Do not abort; transactions bypass the SMMU with attributes given by other
                                                                 fields in this register.
                                                                 1 = Abort all incoming transactions.

                                                                 The SMMU makes no record of transactions aborted using this flag. */
        uint32_t instcfg               : 2;  /**< [ 19: 18](R/W) Instruction/data override. Only affects reads; writes are always output as data.
                                                                 0x0 = Use incoming.
                                                                 0x1 = Reserved (behaves as 0x0).
                                                                 0x2 = Data.
                                                                 0x3 = Instruction. */
        uint32_t privcfg               : 2;  /**< [ 17: 16](R/W) User/privileged override.
                                                                 0x0 = Use incoming.
                                                                 0x1 = Reserved (behaves as 0x0).
                                                                 0x2 = Unprivileged.
                                                                 0x3 = Privileged. */
        uint32_t reserved_14_15        : 2;
        uint32_t shcfg                 : 2;  /**< [ 13: 12](R/W) Shareability override.
                                                                 0x0 = NSH.
                                                                 0x1 = Use incoming.
                                                                 0x2 = OSH.
                                                                 0x3 = ISH. */
        uint32_t alloccfg              : 4;  /**< [ 11:  8](R/W) 0xxx = Use incoming RA/WA/TR allocation/transient hints.
                                                                 1RWT = Hints are overridden to given values:
                                                                 * Read allocate = R.
                                                                 * Write allocate = W.
                                                                 * Transient = T.

                                                                 When overridden by this field, for each of RA/WA and TR, both inner- and outer-
                                                                 hints are set to the same value. Since it is not architecturally possible to
                                                                 express hints for types that are device or normal-noncacheable, this field has
                                                                 no effect on memory types that are not normal-WB or normal-WT, whether such
                                                                 types are provided with an upstream transaction or overridden using
                                                                 MTCFG/MemAttr. */
        uint32_t reserved_5_7          : 3;
        uint32_t mtcfg                 : 1;  /**< [  4:  4](R/W) Memory type override.
                                                                 0 = Use incoming memory type.
                                                                 1 = Override incoming memory type using MemAttr field. */
        uint32_t memattr               : 4;  /**< [  3:  0](R/W) Memory type, encoded the same as SMMU_STE_S[MEMATTR]. */
#else /* Word 0 - Little Endian */
        uint32_t memattr               : 4;  /**< [  3:  0](R/W) Memory type, encoded the same as SMMU_STE_S[MEMATTR]. */
        uint32_t mtcfg                 : 1;  /**< [  4:  4](R/W) Memory type override.
                                                                 0 = Use incoming memory type.
                                                                 1 = Override incoming memory type using MemAttr field. */
        uint32_t reserved_5_7          : 3;
        uint32_t alloccfg              : 4;  /**< [ 11:  8](R/W) 0xxx = Use incoming RA/WA/TR allocation/transient hints.
                                                                 1RWT = Hints are overridden to given values:
                                                                 * Read allocate = R.
                                                                 * Write allocate = W.
                                                                 * Transient = T.

                                                                 When overridden by this field, for each of RA/WA and TR, both inner- and outer-
                                                                 hints are set to the same value. Since it is not architecturally possible to
                                                                 express hints for types that are device or normal-noncacheable, this field has
                                                                 no effect on memory types that are not normal-WB or normal-WT, whether such
                                                                 types are provided with an upstream transaction or overridden using
                                                                 MTCFG/MemAttr. */
        uint32_t shcfg                 : 2;  /**< [ 13: 12](R/W) Shareability override.
                                                                 0x0 = NSH.
                                                                 0x1 = Use incoming.
                                                                 0x2 = OSH.
                                                                 0x3 = ISH. */
        uint32_t reserved_14_15        : 2;
        uint32_t privcfg               : 2;  /**< [ 17: 16](R/W) User/privileged override.
                                                                 0x0 = Use incoming.
                                                                 0x1 = Reserved (behaves as 0x0).
                                                                 0x2 = Unprivileged.
                                                                 0x3 = Privileged. */
        uint32_t instcfg               : 2;  /**< [ 19: 18](R/W) Instruction/data override. Only affects reads; writes are always output as data.
                                                                 0x0 = Use incoming.
                                                                 0x1 = Reserved (behaves as 0x0).
                                                                 0x2 = Data.
                                                                 0x3 = Instruction. */
        uint32_t abrt                  : 1;  /**< [ 20: 20](R/W) Abort all incoming transactions.
                                                                 0 = Do not abort; transactions bypass the SMMU with attributes given by other
                                                                 fields in this register.
                                                                 1 = Abort all incoming transactions.

                                                                 The SMMU makes no record of transactions aborted using this flag. */
        uint32_t reserved_21_30        : 10;
        uint32_t update                : 1;  /**< [ 31: 31](RAZ) Update/completion flag. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_gbpa_s cn; */
};
typedef union cavm_smmux_gbpa cavm_smmux_gbpa_t;

static inline uint64_t CAVM_SMMUX_GBPA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_GBPA(uint64_t a)
{
    if (a==0)
        return 0x830000000044ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_GBPA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_GBPA(a) cavm_smmux_gbpa_t
#define bustype_CAVM_SMMUX_GBPA(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_GBPA(a) "SMMUX_GBPA"
#define device_bar_CAVM_SMMUX_GBPA(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_GBPA(a) (a)
#define arguments_CAVM_SMMUX_GBPA(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_gbpmpam
 *
 * SMMU Global Bypass MPAM Configuration Register
 */
union cavm_smmux_gbpmpam
{
    uint32_t u;
    struct cavm_smmux_gbpmpam_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t update                : 1;  /**< [ 31: 31](R/W/H) SMMU(0)_S_GBPMPAM[UPDATE] */
        uint32_t reserved_17_30        : 14;
        uint32_t gbp_pmg               : 1;  /**< [ 16: 16](R/W) SMMU(0)_S_GBPMPAM[GBP_PMG] */
        uint32_t reserved_9_15         : 7;
        uint32_t gbp_partid            : 9;  /**< [  8:  0](R/W) SMMU(0)_S_GBPMPAM[GBP_PARTID] */
#else /* Word 0 - Little Endian */
        uint32_t gbp_partid            : 9;  /**< [  8:  0](R/W) SMMU(0)_S_GBPMPAM[GBP_PARTID] */
        uint32_t reserved_9_15         : 7;
        uint32_t gbp_pmg               : 1;  /**< [ 16: 16](R/W) SMMU(0)_S_GBPMPAM[GBP_PMG] */
        uint32_t reserved_17_30        : 14;
        uint32_t update                : 1;  /**< [ 31: 31](R/W/H) SMMU(0)_S_GBPMPAM[UPDATE] */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_gbpmpam_s cn; */
};
typedef union cavm_smmux_gbpmpam cavm_smmux_gbpmpam_t;

static inline uint64_t CAVM_SMMUX_GBPMPAM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_GBPMPAM(uint64_t a)
{
    if (a==0)
        return 0x83000000013cll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_GBPMPAM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_GBPMPAM(a) cavm_smmux_gbpmpam_t
#define bustype_CAVM_SMMUX_GBPMPAM(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_GBPMPAM(a) "SMMUX_GBPMPAM"
#define device_bar_CAVM_SMMUX_GBPMPAM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_GBPMPAM(a) (a)
#define arguments_CAVM_SMMUX_GBPMPAM(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_gerror
 *
 * SMMU Global Error Register
 * This register, in conjunction with SMMU()_(S_)GERRORN, indicates whether global error
 * conditions exist.
 *
 * The SMMU toggles SMMU()_(S_)GERROR[x] when an error becomes active. Software is
 * expected to toggle SMMU()_(S_)GERRORN[x] in response, to acknowledge the error.
 *
 * The SMMU does not toggle a bit when an error is already active. An error is only
 * activated if it is in an inactive state (i.e. a prior error has been
 * acknowledged/de-activated).
 *
 * Software is not intended to trigger interrupts by arranging for SMMU()_GERRORN\<x\> to differ
 * from SMMU()_GERROR\<x\>.
 */
union cavm_smmux_gerror
{
    uint32_t u;
    struct cavm_smmux_gerror_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_10_31        : 22;
        uint32_t cmdqp_err             : 1;  /**< [  9:  9](RO/H) When this bit is different to SMMU()_GERRORN[CMDQP_ERR], it indicates that one
                                                                 or more errors have been encountered on a Command queue control page interface. */
        uint32_t sfm_err               : 1;  /**< [  8:  8](RAZ) The SMMU has entered service failure mode.

                                                                 * Traffic through the SMMU might be affected. Depending on the origin of the
                                                                 error, the SMMU might stop processing commands and recording events. The RAS
                                                                 registers describe the error.

                                                                 * Acknowledgement of this error via GERRORN does not clear this error, which is
                                                                 cleared in an implementation defined way.

                                                                 * SFM triggers both SMMU()_GERROR[SFM_ERR] and SMMU()_S_GERROR[SFM_ERR]. */
        uint32_t msi_gerror_abt_err    : 1;  /**< [  7:  7](RAZ) A GERROR MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs. */
        uint32_t msi_priq_abt_err      : 1;  /**< [  6:  6](RAZ) A PRIQ MSI was terminated with abort. Activation of this error does not affect future
                                                                 MSIs.
                                                                 If SMMU()_IDR0[PRI]=0 or SMMU()_IDR0[MSI]=0, this field is RES0.

                                                                 Not implemented in CNXXXX. */
        uint32_t msi_eventq_abt_err    : 1;  /**< [  5:  5](RAZ) An EVENTQ MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs.
                                                                 If SMMU()_IDR0[MSI]=0, this field is RES0. */
        uint32_t msi_cmdq_abt_err      : 1;  /**< [  4:  4](RAZ) A CMD_SYNC MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs.
                                                                 If SMMU()_IDR0[MSI]=0, this field is RES0. */
        uint32_t priq_abt_err          : 1;  /**< [  3:  3](RAZ) A write to the PRI queue was terminated with abort and page request records might have
                                                                 been lost.
                                                                 If SMMU()_IDR0[PRI]=0, this field is RES0.

                                                                 Not implemented in CNXXXX. */
        uint32_t eventq_abt_err        : 1;  /**< [  2:  2](RO/H) A write to the event queue was terminated with abort and event records might have been lost. */
        uint32_t reserved_1            : 1;
        uint32_t cmdq_err              : 1;  /**< [  0:  0](RO/H) A command has been encountered that cannot be processed. SMMU()_CMDQ_CONS[ERRX] has
                                                                 been updated with a reason code and command processing has stopped.
                                                                 Commands are not processed while this error is active. */
#else /* Word 0 - Little Endian */
        uint32_t cmdq_err              : 1;  /**< [  0:  0](RO/H) A command has been encountered that cannot be processed. SMMU()_CMDQ_CONS[ERRX] has
                                                                 been updated with a reason code and command processing has stopped.
                                                                 Commands are not processed while this error is active. */
        uint32_t reserved_1            : 1;
        uint32_t eventq_abt_err        : 1;  /**< [  2:  2](RO/H) A write to the event queue was terminated with abort and event records might have been lost. */
        uint32_t priq_abt_err          : 1;  /**< [  3:  3](RAZ) A write to the PRI queue was terminated with abort and page request records might have
                                                                 been lost.
                                                                 If SMMU()_IDR0[PRI]=0, this field is RES0.

                                                                 Not implemented in CNXXXX. */
        uint32_t msi_cmdq_abt_err      : 1;  /**< [  4:  4](RAZ) A CMD_SYNC MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs.
                                                                 If SMMU()_IDR0[MSI]=0, this field is RES0. */
        uint32_t msi_eventq_abt_err    : 1;  /**< [  5:  5](RAZ) An EVENTQ MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs.
                                                                 If SMMU()_IDR0[MSI]=0, this field is RES0. */
        uint32_t msi_priq_abt_err      : 1;  /**< [  6:  6](RAZ) A PRIQ MSI was terminated with abort. Activation of this error does not affect future
                                                                 MSIs.
                                                                 If SMMU()_IDR0[PRI]=0 or SMMU()_IDR0[MSI]=0, this field is RES0.

                                                                 Not implemented in CNXXXX. */
        uint32_t msi_gerror_abt_err    : 1;  /**< [  7:  7](RAZ) A GERROR MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs. */
        uint32_t sfm_err               : 1;  /**< [  8:  8](RAZ) The SMMU has entered service failure mode.

                                                                 * Traffic through the SMMU might be affected. Depending on the origin of the
                                                                 error, the SMMU might stop processing commands and recording events. The RAS
                                                                 registers describe the error.

                                                                 * Acknowledgement of this error via GERRORN does not clear this error, which is
                                                                 cleared in an implementation defined way.

                                                                 * SFM triggers both SMMU()_GERROR[SFM_ERR] and SMMU()_S_GERROR[SFM_ERR]. */
        uint32_t cmdqp_err             : 1;  /**< [  9:  9](RO/H) When this bit is different to SMMU()_GERRORN[CMDQP_ERR], it indicates that one
                                                                 or more errors have been encountered on a Command queue control page interface. */
        uint32_t reserved_10_31        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_gerror_s cn10; */
    struct cavm_smmux_gerror_cn10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_9_31         : 23;
        uint32_t sfm_err               : 1;  /**< [  8:  8](RAZ) The SMMU has entered service failure mode.

                                                                 * Traffic through the SMMU might be affected. Depending on the origin of the
                                                                 error, the SMMU might stop processing commands and recording events. The RAS
                                                                 registers describe the error.

                                                                 * Acknowledgement of this error via GERRORN does not clear this error, which is
                                                                 cleared in an implementation defined way.

                                                                 * SFM triggers both SMMU()_GERROR[SFM_ERR] and SMMU()_S_GERROR[SFM_ERR]. */
        uint32_t msi_gerror_abt_err    : 1;  /**< [  7:  7](RAZ) A GERROR MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs. */
        uint32_t msi_priq_abt_err      : 1;  /**< [  6:  6](RAZ) A PRIQ MSI was terminated with abort. Activation of this error does not affect future
                                                                 MSIs.
                                                                 If SMMU()_IDR0[PRI]=0 or SMMU()_IDR0[MSI]=0, this field is RES0.

                                                                 Not implemented in CNXXXX. */
        uint32_t msi_eventq_abt_err    : 1;  /**< [  5:  5](RAZ) An EVENTQ MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs.
                                                                 If SMMU()_IDR0[MSI]=0, this field is RES0. */
        uint32_t msi_cmdq_abt_err      : 1;  /**< [  4:  4](RAZ) A CMD_SYNC MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs.
                                                                 If SMMU()_IDR0[MSI]=0, this field is RES0. */
        uint32_t priq_abt_err          : 1;  /**< [  3:  3](RAZ) A write to the PRI queue was terminated with abort and page request records might have
                                                                 been lost.
                                                                 If SMMU()_IDR0[PRI]=0, this field is RES0.

                                                                 Not implemented in CNXXXX. */
        uint32_t eventq_abt_err        : 1;  /**< [  2:  2](RO/H) A write to the event queue was terminated with abort and event records might have been lost. */
        uint32_t reserved_1            : 1;
        uint32_t cmdq_err              : 1;  /**< [  0:  0](RO/H) A command has been encountered that cannot be processed. SMMU()_CMDQ_CONS[ERRX] has
                                                                 been updated with a reason code and command processing has stopped.
                                                                 Commands are not processed while this error is active. */
#else /* Word 0 - Little Endian */
        uint32_t cmdq_err              : 1;  /**< [  0:  0](RO/H) A command has been encountered that cannot be processed. SMMU()_CMDQ_CONS[ERRX] has
                                                                 been updated with a reason code and command processing has stopped.
                                                                 Commands are not processed while this error is active. */
        uint32_t reserved_1            : 1;
        uint32_t eventq_abt_err        : 1;  /**< [  2:  2](RO/H) A write to the event queue was terminated with abort and event records might have been lost. */
        uint32_t priq_abt_err          : 1;  /**< [  3:  3](RAZ) A write to the PRI queue was terminated with abort and page request records might have
                                                                 been lost.
                                                                 If SMMU()_IDR0[PRI]=0, this field is RES0.

                                                                 Not implemented in CNXXXX. */
        uint32_t msi_cmdq_abt_err      : 1;  /**< [  4:  4](RAZ) A CMD_SYNC MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs.
                                                                 If SMMU()_IDR0[MSI]=0, this field is RES0. */
        uint32_t msi_eventq_abt_err    : 1;  /**< [  5:  5](RAZ) An EVENTQ MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs.
                                                                 If SMMU()_IDR0[MSI]=0, this field is RES0. */
        uint32_t msi_priq_abt_err      : 1;  /**< [  6:  6](RAZ) A PRIQ MSI was terminated with abort. Activation of this error does not affect future
                                                                 MSIs.
                                                                 If SMMU()_IDR0[PRI]=0 or SMMU()_IDR0[MSI]=0, this field is RES0.

                                                                 Not implemented in CNXXXX. */
        uint32_t msi_gerror_abt_err    : 1;  /**< [  7:  7](RAZ) A GERROR MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs. */
        uint32_t sfm_err               : 1;  /**< [  8:  8](RAZ) The SMMU has entered service failure mode.

                                                                 * Traffic through the SMMU might be affected. Depending on the origin of the
                                                                 error, the SMMU might stop processing commands and recording events. The RAS
                                                                 registers describe the error.

                                                                 * Acknowledgement of this error via GERRORN does not clear this error, which is
                                                                 cleared in an implementation defined way.

                                                                 * SFM triggers both SMMU()_GERROR[SFM_ERR] and SMMU()_S_GERROR[SFM_ERR]. */
        uint32_t reserved_9_31         : 23;
#endif /* Word 0 - End */
    } cn10ka;
    /* struct cavm_smmux_gerror_s cn10kb; */
    /* struct cavm_smmux_gerror_cn10ka cnf10ka; */
    /* struct cavm_smmux_gerror_cn10ka cnf10kb; */
};
typedef union cavm_smmux_gerror cavm_smmux_gerror_t;

static inline uint64_t CAVM_SMMUX_GERROR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_GERROR(uint64_t a)
{
    if (a==0)
        return 0x830000000060ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_GERROR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_GERROR(a) cavm_smmux_gerror_t
#define bustype_CAVM_SMMUX_GERROR(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_GERROR(a) "SMMUX_GERROR"
#define device_bar_CAVM_SMMUX_GERROR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_GERROR(a) (a)
#define arguments_CAVM_SMMUX_GERROR(a) (a),-1,-1,-1

/**
 * Register (NCB) smmu#_gerror_irq_cfg0
 *
 * SMMU Global Error IRQ Configuration 0 Register
 * Registers SMMU()_S_GERROR_IRQ_CFG0/1/2 are guarded by the respective
 * SMMU()_S_IRQ_CTRL[GERROR_IRQEN] and must only be modified when
 * SMMU()_S_IRQ_CTRL[GERROR_IRQEN]=0.
 */
union cavm_smmux_gerror_irq_cfg0
{
    uint64_t u;
    struct cavm_smmux_gerror_irq_cfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t addr                  : 50; /**< [ 51:  2](R/W) SMMU(0)_S_GERROR_IRQ_CFG0[ADDR] */
        uint64_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_1          : 2;
        uint64_t addr                  : 50; /**< [ 51:  2](R/W) SMMU(0)_S_GERROR_IRQ_CFG0[ADDR] */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_gerror_irq_cfg0_s cn; */
};
typedef union cavm_smmux_gerror_irq_cfg0 cavm_smmux_gerror_irq_cfg0_t;

static inline uint64_t CAVM_SMMUX_GERROR_IRQ_CFG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_GERROR_IRQ_CFG0(uint64_t a)
{
    if (a==0)
        return 0x830000000068ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_GERROR_IRQ_CFG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_GERROR_IRQ_CFG0(a) cavm_smmux_gerror_irq_cfg0_t
#define bustype_CAVM_SMMUX_GERROR_IRQ_CFG0(a) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_GERROR_IRQ_CFG0(a) "SMMUX_GERROR_IRQ_CFG0"
#define device_bar_CAVM_SMMUX_GERROR_IRQ_CFG0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_GERROR_IRQ_CFG0(a) (a)
#define arguments_CAVM_SMMUX_GERROR_IRQ_CFG0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_gerror_irq_cfg1
 *
 * SMMU Global Error IRQ Configuration 1 Register
 */
union cavm_smmux_gerror_irq_cfg1
{
    uint32_t u;
    struct cavm_smmux_gerror_irq_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) SMMU(0)_S_GERROR_IRQ_CFG1[DATA] */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) SMMU(0)_S_GERROR_IRQ_CFG1[DATA] */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_gerror_irq_cfg1_s cn; */
};
typedef union cavm_smmux_gerror_irq_cfg1 cavm_smmux_gerror_irq_cfg1_t;

static inline uint64_t CAVM_SMMUX_GERROR_IRQ_CFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_GERROR_IRQ_CFG1(uint64_t a)
{
    if (a==0)
        return 0x830000000070ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_GERROR_IRQ_CFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_GERROR_IRQ_CFG1(a) cavm_smmux_gerror_irq_cfg1_t
#define bustype_CAVM_SMMUX_GERROR_IRQ_CFG1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_GERROR_IRQ_CFG1(a) "SMMUX_GERROR_IRQ_CFG1"
#define device_bar_CAVM_SMMUX_GERROR_IRQ_CFG1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_GERROR_IRQ_CFG1(a) (a)
#define arguments_CAVM_SMMUX_GERROR_IRQ_CFG1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_gerror_irq_cfg2
 *
 * SMMU Global Error IRQ Configuration 2 Register
 */
union cavm_smmux_gerror_irq_cfg2
{
    uint32_t u;
    struct cavm_smmux_gerror_irq_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t sh                    : 2;  /**< [  5:  4](R/W) SMMU(0)_S_GERROR_IRQ_CFG2[SH] */
        uint32_t memattr               : 4;  /**< [  3:  0](R/W) SMMU(0)_S_GERROR_IRQ_CFG2[MEMATTR] */
#else /* Word 0 - Little Endian */
        uint32_t memattr               : 4;  /**< [  3:  0](R/W) SMMU(0)_S_GERROR_IRQ_CFG2[MEMATTR] */
        uint32_t sh                    : 2;  /**< [  5:  4](R/W) SMMU(0)_S_GERROR_IRQ_CFG2[SH] */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_gerror_irq_cfg2_s cn; */
};
typedef union cavm_smmux_gerror_irq_cfg2 cavm_smmux_gerror_irq_cfg2_t;

static inline uint64_t CAVM_SMMUX_GERROR_IRQ_CFG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_GERROR_IRQ_CFG2(uint64_t a)
{
    if (a==0)
        return 0x830000000074ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_GERROR_IRQ_CFG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_GERROR_IRQ_CFG2(a) cavm_smmux_gerror_irq_cfg2_t
#define bustype_CAVM_SMMUX_GERROR_IRQ_CFG2(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_GERROR_IRQ_CFG2(a) "SMMUX_GERROR_IRQ_CFG2"
#define device_bar_CAVM_SMMUX_GERROR_IRQ_CFG2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_GERROR_IRQ_CFG2(a) (a)
#define arguments_CAVM_SMMUX_GERROR_IRQ_CFG2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_gerrorn
 *
 * SMMU Global Error Acknowledge Register
 * Same fields as SMMU()_GERROR.
 *
 * Software must not toggle fields in this register that correspond to errors that are
 * inactive.  It is constrained unpredictable whether or not an SMMU activates errors
 * if this is done.
 *
 * The SMMU does not alter fields in this register.
 *
 * Software might maintain an internal copy of the last value written to this register,
 * for comparison against values read from SMMU()_GERROR when probing for errors.
 */
union cavm_smmux_gerrorn
{
    uint32_t u;
    struct cavm_smmux_gerrorn_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_10_31        : 22;
        uint32_t cmdqp_err             : 1;  /**< [  9:  9](R/W) When this bit is different to SMMU()_GERROR[CMDQP_ERR], it indicates that one or
                                                                 more errors have been encountered on a Command queue control page interface. */
        uint32_t sfm_err               : 1;  /**< [  8:  8](R/W) The SMMU has entered service failure mode.
                                                                 * Traffic through the SMMU might be affected. Depending on the origin of the
                                                                 error, the SMMU might stop processing commands and recording events. The RAS
                                                                 registers describe the error.

                                                                 *  Acknowledgement of this error via GERRORN does not clear this error, which is cleared
                                                                 in an implementation defined way.

                                                                 *  SFM triggers both SMMU()_GERROR[SFM_ERR] and SMMU()_S_GERROR[SFM_ERR]. */
        uint32_t msi_gerror_abt_err    : 1;  /**< [  7:  7](R/W) A GERROR MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs. */
        uint32_t msi_priq_abt_err      : 1;  /**< [  6:  6](RAZ) A PRIQ MSI was terminated with abort. Activation of this error does not affect future
                                                                 MSIs.
                                                                 If SMMU()_IDR0[PRI]=0 or SMMU()_IDR0[MSI]=0, this field is RES0.

                                                                 Not implemented in CNXXXX. */
        uint32_t msi_eventq_abt_err    : 1;  /**< [  5:  5](R/W) An EVENTQ MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs.
                                                                 If SMMU()_IDR0[MSI]=0, this field is RES0. */
        uint32_t msi_cmdq_abt_err      : 1;  /**< [  4:  4](R/W) A CMD_SYNC MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs.
                                                                 If SMMU()_IDR0[MSI]=0, this field is RES0. */
        uint32_t priq_abt_err          : 1;  /**< [  3:  3](RAZ) A write to the PRI queue was terminated with abort and page request records might have
                                                                 been lost.
                                                                 If SMMU()_IDR0[PRI]=0, this field is RES0.

                                                                 Not implemented in CNXXXX. */
        uint32_t eventq_abt_err        : 1;  /**< [  2:  2](R/W) A write to the event queue was terminated with abort and event records might have been lost. */
        uint32_t reserved_1            : 1;
        uint32_t cmdq_err              : 1;  /**< [  0:  0](R/W) A command has been encountered that cannot be processed. SMMU()_CMDQ_CONS[ERRX] has
                                                                 been updated with a reason code and command processing has stopped.
                                                                 Commands are not processed while this error is active. */
#else /* Word 0 - Little Endian */
        uint32_t cmdq_err              : 1;  /**< [  0:  0](R/W) A command has been encountered that cannot be processed. SMMU()_CMDQ_CONS[ERRX] has
                                                                 been updated with a reason code and command processing has stopped.
                                                                 Commands are not processed while this error is active. */
        uint32_t reserved_1            : 1;
        uint32_t eventq_abt_err        : 1;  /**< [  2:  2](R/W) A write to the event queue was terminated with abort and event records might have been lost. */
        uint32_t priq_abt_err          : 1;  /**< [  3:  3](RAZ) A write to the PRI queue was terminated with abort and page request records might have
                                                                 been lost.
                                                                 If SMMU()_IDR0[PRI]=0, this field is RES0.

                                                                 Not implemented in CNXXXX. */
        uint32_t msi_cmdq_abt_err      : 1;  /**< [  4:  4](R/W) A CMD_SYNC MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs.
                                                                 If SMMU()_IDR0[MSI]=0, this field is RES0. */
        uint32_t msi_eventq_abt_err    : 1;  /**< [  5:  5](R/W) An EVENTQ MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs.
                                                                 If SMMU()_IDR0[MSI]=0, this field is RES0. */
        uint32_t msi_priq_abt_err      : 1;  /**< [  6:  6](RAZ) A PRIQ MSI was terminated with abort. Activation of this error does not affect future
                                                                 MSIs.
                                                                 If SMMU()_IDR0[PRI]=0 or SMMU()_IDR0[MSI]=0, this field is RES0.

                                                                 Not implemented in CNXXXX. */
        uint32_t msi_gerror_abt_err    : 1;  /**< [  7:  7](R/W) A GERROR MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs. */
        uint32_t sfm_err               : 1;  /**< [  8:  8](R/W) The SMMU has entered service failure mode.
                                                                 * Traffic through the SMMU might be affected. Depending on the origin of the
                                                                 error, the SMMU might stop processing commands and recording events. The RAS
                                                                 registers describe the error.

                                                                 *  Acknowledgement of this error via GERRORN does not clear this error, which is cleared
                                                                 in an implementation defined way.

                                                                 *  SFM triggers both SMMU()_GERROR[SFM_ERR] and SMMU()_S_GERROR[SFM_ERR]. */
        uint32_t cmdqp_err             : 1;  /**< [  9:  9](R/W) When this bit is different to SMMU()_GERROR[CMDQP_ERR], it indicates that one or
                                                                 more errors have been encountered on a Command queue control page interface. */
        uint32_t reserved_10_31        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_gerrorn_s cn10; */
    struct cavm_smmux_gerrorn_cn10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_9_31         : 23;
        uint32_t sfm_err               : 1;  /**< [  8:  8](R/W) The SMMU has entered service failure mode.
                                                                 * Traffic through the SMMU might be affected. Depending on the origin of the
                                                                 error, the SMMU might stop processing commands and recording events. The RAS
                                                                 registers describe the error.

                                                                 *  Acknowledgement of this error via GERRORN does not clear this error, which is cleared
                                                                 in an implementation defined way.

                                                                 *  SFM triggers both SMMU()_GERROR[SFM_ERR] and SMMU()_S_GERROR[SFM_ERR]. */
        uint32_t msi_gerror_abt_err    : 1;  /**< [  7:  7](R/W) A GERROR MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs. */
        uint32_t msi_priq_abt_err      : 1;  /**< [  6:  6](RAZ) A PRIQ MSI was terminated with abort. Activation of this error does not affect future
                                                                 MSIs.
                                                                 If SMMU()_IDR0[PRI]=0 or SMMU()_IDR0[MSI]=0, this field is RES0.

                                                                 Not implemented in CNXXXX. */
        uint32_t msi_eventq_abt_err    : 1;  /**< [  5:  5](R/W) An EVENTQ MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs.
                                                                 If SMMU()_IDR0[MSI]=0, this field is RES0. */
        uint32_t msi_cmdq_abt_err      : 1;  /**< [  4:  4](R/W) A CMD_SYNC MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs.
                                                                 If SMMU()_IDR0[MSI]=0, this field is RES0. */
        uint32_t priq_abt_err          : 1;  /**< [  3:  3](RAZ) A write to the PRI queue was terminated with abort and page request records might have
                                                                 been lost.
                                                                 If SMMU()_IDR0[PRI]=0, this field is RES0.

                                                                 Not implemented in CNXXXX. */
        uint32_t eventq_abt_err        : 1;  /**< [  2:  2](R/W) A write to the event queue was terminated with abort and event records might have been lost. */
        uint32_t reserved_1            : 1;
        uint32_t cmdq_err              : 1;  /**< [  0:  0](R/W) A command has been encountered that cannot be processed. SMMU()_CMDQ_CONS[ERRX] has
                                                                 been updated with a reason code and command processing has stopped.
                                                                 Commands are not processed while this error is active. */
#else /* Word 0 - Little Endian */
        uint32_t cmdq_err              : 1;  /**< [  0:  0](R/W) A command has been encountered that cannot be processed. SMMU()_CMDQ_CONS[ERRX] has
                                                                 been updated with a reason code and command processing has stopped.
                                                                 Commands are not processed while this error is active. */
        uint32_t reserved_1            : 1;
        uint32_t eventq_abt_err        : 1;  /**< [  2:  2](R/W) A write to the event queue was terminated with abort and event records might have been lost. */
        uint32_t priq_abt_err          : 1;  /**< [  3:  3](RAZ) A write to the PRI queue was terminated with abort and page request records might have
                                                                 been lost.
                                                                 If SMMU()_IDR0[PRI]=0, this field is RES0.

                                                                 Not implemented in CNXXXX. */
        uint32_t msi_cmdq_abt_err      : 1;  /**< [  4:  4](R/W) A CMD_SYNC MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs.
                                                                 If SMMU()_IDR0[MSI]=0, this field is RES0. */
        uint32_t msi_eventq_abt_err    : 1;  /**< [  5:  5](R/W) An EVENTQ MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs.
                                                                 If SMMU()_IDR0[MSI]=0, this field is RES0. */
        uint32_t msi_priq_abt_err      : 1;  /**< [  6:  6](RAZ) A PRIQ MSI was terminated with abort. Activation of this error does not affect future
                                                                 MSIs.
                                                                 If SMMU()_IDR0[PRI]=0 or SMMU()_IDR0[MSI]=0, this field is RES0.

                                                                 Not implemented in CNXXXX. */
        uint32_t msi_gerror_abt_err    : 1;  /**< [  7:  7](R/W) A GERROR MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs. */
        uint32_t sfm_err               : 1;  /**< [  8:  8](R/W) The SMMU has entered service failure mode.
                                                                 * Traffic through the SMMU might be affected. Depending on the origin of the
                                                                 error, the SMMU might stop processing commands and recording events. The RAS
                                                                 registers describe the error.

                                                                 *  Acknowledgement of this error via GERRORN does not clear this error, which is cleared
                                                                 in an implementation defined way.

                                                                 *  SFM triggers both SMMU()_GERROR[SFM_ERR] and SMMU()_S_GERROR[SFM_ERR]. */
        uint32_t reserved_9_31         : 23;
#endif /* Word 0 - End */
    } cn10ka;
    /* struct cavm_smmux_gerrorn_s cn10kb; */
    /* struct cavm_smmux_gerrorn_cn10ka cnf10ka; */
    /* struct cavm_smmux_gerrorn_cn10ka cnf10kb; */
};
typedef union cavm_smmux_gerrorn cavm_smmux_gerrorn_t;

static inline uint64_t CAVM_SMMUX_GERRORN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_GERRORN(uint64_t a)
{
    if (a==0)
        return 0x830000000064ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_GERRORN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_GERRORN(a) cavm_smmux_gerrorn_t
#define bustype_CAVM_SMMUX_GERRORN(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_GERRORN(a) "SMMUX_GERRORN"
#define device_bar_CAVM_SMMUX_GERRORN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_GERRORN(a) (a)
#define arguments_CAVM_SMMUX_GERRORN(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_gmpam
 *
 * SMMU Global MPAM Configuration Register
 */
union cavm_smmux_gmpam
{
    uint32_t u;
    struct cavm_smmux_gmpam_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t update                : 1;  /**< [ 31: 31](RO) SMMU(0)_S_GMPAM[UPDATE] */
        uint32_t reserved_17_30        : 14;
        uint32_t so_pmg                : 1;  /**< [ 16: 16](R/W) SMMU(0)_S_GMPAM[SO_PMG] */
        uint32_t reserved_9_15         : 7;
        uint32_t so_partid             : 9;  /**< [  8:  0](R/W) SMMU(0)_S_GMPAM[SO_PARTID] */
#else /* Word 0 - Little Endian */
        uint32_t so_partid             : 9;  /**< [  8:  0](R/W) SMMU(0)_S_GMPAM[SO_PARTID] */
        uint32_t reserved_9_15         : 7;
        uint32_t so_pmg                : 1;  /**< [ 16: 16](R/W) SMMU(0)_S_GMPAM[SO_PMG] */
        uint32_t reserved_17_30        : 14;
        uint32_t update                : 1;  /**< [ 31: 31](RO) SMMU(0)_S_GMPAM[UPDATE] */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_gmpam_s cn; */
};
typedef union cavm_smmux_gmpam cavm_smmux_gmpam_t;

static inline uint64_t CAVM_SMMUX_GMPAM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_GMPAM(uint64_t a)
{
    if (a==0)
        return 0x830000000138ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_GMPAM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_GMPAM(a) cavm_smmux_gmpam_t
#define bustype_CAVM_SMMUX_GMPAM(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_GMPAM(a) "SMMUX_GMPAM"
#define device_bar_CAVM_SMMUX_GMPAM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_GMPAM(a) (a)
#define arguments_CAVM_SMMUX_GMPAM(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_idr0
 *
 * SMMU Identification 0 Register
 */
union cavm_smmux_idr0
{
    uint32_t u;
    struct cavm_smmux_idr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t st_level              : 2;  /**< [ 28: 27](RO) Multilevel stream table support.
                                                                 0x0 = Linear stream table supported.
                                                                 0x1 = Two-level stream table supported in addition to linear stream table.
                                                                 0x2 = Reserved.
                                                                 0x3 = Reserved. */
        uint32_t term_model            : 1;  /**< [ 26: 26](RO) Termination model behavior.

                                                                 0 = SMMU_CD_S[A] determines Abort or RAZ/WI behavior of a terminated transaction. The
                                                                 act of terminating a transaction may be configured using SMMU_CD_S[A] to successfully
                                                                 complete the transaction (RAZ/WI) or abort the transaction/return error.

                                                                 1 = Terminating a transaction with RAZ/WI behavior is not supported,
                                                                 SMMU_CD_S[A] must be one. This means that a terminated transaction will always be
                                                                 aborted/error returned. */
        uint32_t stall_model           : 2;  /**< [ 25: 24](RO) Stalling fault model support.
                                                                     0x0 = Stall and terminate models supported.
                                                                     0x1 = Stall is not supported (all faults terminate transaction); SMMU_STE_S[S2S]/CD[S]
                                                                     must be zero CMD_RESUME and CMD_STALL_TERM are not available.
                                                                     0x2 = Stall is forced (all faults eligible to stall cause stall);
                                                                 SMMU_STE_S[S2S]/CD[S]
                                                                     must be one.
                                                                     0x3 = Reserved.

                                                                     SMMU_STE_S[S2S] must be in the states above only if stage 2 translation was
                                                                     enabled (as it is otherwise ignored).

                                                                     This field is related to SMMU()_S_IDR0[STALL_MODEL] and might be modified by
                                                                     SMMU()_S_CR0[NSSTALLD].

                                                                     An SMMU associated with a PCI system must not have [STALL_MODEL]=0x2. */
        uint32_t reserved_23           : 1;
        uint32_t ttendian              : 2;  /**< [ 22: 21](RO) Endianness support for translation table walks.
                                                                 0x0 = Mixed-endian: SMMU_CD_S[ENDI] and SMMU_STE_S[S2ENDI] may select either endian.
                                                                 0x1 = Reserved.
                                                                 0x2 = Little-endian: SMMU_CD_S[ENDI] and SMMU_STE_S[S2ENDI] must select little-endian.
                                                                 0x3 = Big-endian: SMMU_CD_S[ENDI] and SMMU_STE_S[S2ENDI] must select big-endian. */
        uint32_t vatos                 : 1;  /**< [ 20: 20](RO) Virtual ATOS page interface supported.
                                                                 ATOS must also be supported.
                                                                 If this is set, both stage 1 and stage 2 translation must also be supported: S1P and
                                                                 S2P must be set. */
        uint32_t cd2l                  : 1;  /**< [ 19: 19](RO) Two-level context descriptor table supported. */
        uint32_t vmid16                : 1;  /**< [ 18: 18](RO) 16-bit VMID supported.
                                                                 When 16-bit VMIDs are not supported, VMID\<15:8\> is RES0 in command parameters
                                                                 and must be zero in SMMU_STE_S[S2VMID].
                                                                 The value of this field is irrelevant to software unless SMMU()_IDR0[S2P] is set. */
        uint32_t vmw                   : 1;  /**< [ 17: 17](RO) VMID wildcard-matching supported for TLB invalidates.
                                                                 Must be zero when SMMU()_IDR0[S2P]=0 (VMID tagging is not supported unless stage 2 is
                                                                 implemented). */
        uint32_t pri                   : 1;  /**< [ 16: 16](RO) Page request interface supported.
                                                                 For CNXXXX, must be zero as no ATS supported. */
        uint32_t atos                  : 1;  /**< [ 15: 15](RO) Address translation operations supported.
                                                                 When zero, VATOS=0 and all SMMU()_(S_)GATOS_* registers are reserved. */
        uint32_t sev                   : 1;  /**< [ 14: 14](RO) SMMU, and system, support generation of events to CPU.
                                                                 When set, WFE may be used on the CPU to wait for CMD_SYNC completion.
                                                                 This bit must reflect the ability of the system, and SMMU implementation, to convey
                                                                 events to all CPUs that are expected to run SMMU maintenance software. */
        uint32_t msi                   : 1;  /**< [ 13: 13](RO) Message signaled interrupts are supported. */
        uint32_t asid16                : 1;  /**< [ 12: 12](RO) 16-bit ASID supported.
                                                                 When 16-bit ASIDs are not supported, ASID\<15:8\> is RES0 in command parameters and must be
                                                                 zero in SMMU_CD_S[ASID]. */
        uint32_t ns1ats                : 1;  /**< [ 11: 11](RO) Stage 1-only ATS not supported.
                                                                 Must be zero when SMMU()_IDR0[ATS]=0 or SMMU()_IDR0[S1P]=0 or SMMU()_IDR0[S2P]=0.

                                                                 The value of this field is only relevant to software when ATS and both stages of
                                                                 translation are supported.

                                                                 When one, stage 1-only ATS set by SMMU_STE_S[EATS]=0x2 is not supported. See
                                                                 SMMU_STE_S[EATS]. */
        uint32_t ats                   : 1;  /**< [ 10: 10](RO) PCIe RC ATS supported by SMMU. An implementation's support for ATS and PRI
                                                                 influences interpretation of SMMU_STE_S[EATS], ATS/PRI-related commands and
                                                                 SMMU()_PRIQ_* registers. It does not guarantee that client devices and
                                                                 intermediate components (e.g. Root Complexes) also support ATS and this must be
                                                                 determined separately. */
        uint32_t hyp                   : 1;  /**< [  9:  9](RO) Hypervisor stage 1 contexts supported.
                                                                 This flag indicates whether TLB entries may be tagged as EL2/EL2-E2H  see
                                                                 SMMU_STE_S[STRW].
                                                                 Must be zero if [S1P]=0, i.e. if no general stage 1 support.
                                                                 Must be zero if [S2P]=0, i.e. if no general stage 2 support. */
        uint32_t dormhint              : 1;  /**< [  8:  8](RO) Dormant hint supported. When one, SMMU()_STATUSR[DORMANT] might read as one;
                                                                 otherwise when zero, DORMANT always reads as zero. */
        uint32_t httu                  : 2;  /**< [  7:  6](RO/H) Hardware translation table dirty/accessed flag updates supported.
                                                                 0x0 = No flag updates supported.
                                                                 0x1 = Access flag update supported.
                                                                 0x2 = Access and Dirty flag update supported.
                                                                 0x3 = Reserved. */
        uint32_t btm                   : 1;  /**< [  5:  5](RO) Broadcast TLB maintenance. When one, SMMU and system support broadcast TLB
                                                                 maintenance. Software can rely on TLBIxxxIS instructions invalidating matching
                                                                 TLB entries on this SMMU. */
        uint32_t cohacc                : 1;  /**< [  4:  4](RO) Coherent access supported to translations, structures and queues.
                                                                 When one, I/O-coherent access is supported for translation table walks, L1STE/STE/L1CD/CD
                                                                 fetches and command/event/PRI queue access and GERROR/CMD_SYNC/EVENTQ/PRIQ MSIs (if
                                                                 supported).

                                                                 Whether a specific access is performed in a cacheable shareable manner
                                                                 is dependent on the access type configured for access to structures, queues and
                                                                 translation table walks. */
        uint32_t ttf                   : 2;  /**< [  3:  2](RO) Translation table formats supported at both stage 1 & 2:
                                                                  0x0 = Reserved.
                                                                  0x1 = AArch32 (LPAE).
                                                                  0x2 = AArch64.
                                                                  0x3 = AArch32 and AArch64. */
        uint32_t s1p                   : 1;  /**< [  1:  1](RO) Stage 1 translation supported (CtxTable etc.). */
        uint32_t s2p                   : 1;  /**< [  0:  0](RO) Stage 2 translation supported. */
#else /* Word 0 - Little Endian */
        uint32_t s2p                   : 1;  /**< [  0:  0](RO) Stage 2 translation supported. */
        uint32_t s1p                   : 1;  /**< [  1:  1](RO) Stage 1 translation supported (CtxTable etc.). */
        uint32_t ttf                   : 2;  /**< [  3:  2](RO) Translation table formats supported at both stage 1 & 2:
                                                                  0x0 = Reserved.
                                                                  0x1 = AArch32 (LPAE).
                                                                  0x2 = AArch64.
                                                                  0x3 = AArch32 and AArch64. */
        uint32_t cohacc                : 1;  /**< [  4:  4](RO) Coherent access supported to translations, structures and queues.
                                                                 When one, I/O-coherent access is supported for translation table walks, L1STE/STE/L1CD/CD
                                                                 fetches and command/event/PRI queue access and GERROR/CMD_SYNC/EVENTQ/PRIQ MSIs (if
                                                                 supported).

                                                                 Whether a specific access is performed in a cacheable shareable manner
                                                                 is dependent on the access type configured for access to structures, queues and
                                                                 translation table walks. */
        uint32_t btm                   : 1;  /**< [  5:  5](RO) Broadcast TLB maintenance. When one, SMMU and system support broadcast TLB
                                                                 maintenance. Software can rely on TLBIxxxIS instructions invalidating matching
                                                                 TLB entries on this SMMU. */
        uint32_t httu                  : 2;  /**< [  7:  6](RO/H) Hardware translation table dirty/accessed flag updates supported.
                                                                 0x0 = No flag updates supported.
                                                                 0x1 = Access flag update supported.
                                                                 0x2 = Access and Dirty flag update supported.
                                                                 0x3 = Reserved. */
        uint32_t dormhint              : 1;  /**< [  8:  8](RO) Dormant hint supported. When one, SMMU()_STATUSR[DORMANT] might read as one;
                                                                 otherwise when zero, DORMANT always reads as zero. */
        uint32_t hyp                   : 1;  /**< [  9:  9](RO) Hypervisor stage 1 contexts supported.
                                                                 This flag indicates whether TLB entries may be tagged as EL2/EL2-E2H  see
                                                                 SMMU_STE_S[STRW].
                                                                 Must be zero if [S1P]=0, i.e. if no general stage 1 support.
                                                                 Must be zero if [S2P]=0, i.e. if no general stage 2 support. */
        uint32_t ats                   : 1;  /**< [ 10: 10](RO) PCIe RC ATS supported by SMMU. An implementation's support for ATS and PRI
                                                                 influences interpretation of SMMU_STE_S[EATS], ATS/PRI-related commands and
                                                                 SMMU()_PRIQ_* registers. It does not guarantee that client devices and
                                                                 intermediate components (e.g. Root Complexes) also support ATS and this must be
                                                                 determined separately. */
        uint32_t ns1ats                : 1;  /**< [ 11: 11](RO) Stage 1-only ATS not supported.
                                                                 Must be zero when SMMU()_IDR0[ATS]=0 or SMMU()_IDR0[S1P]=0 or SMMU()_IDR0[S2P]=0.

                                                                 The value of this field is only relevant to software when ATS and both stages of
                                                                 translation are supported.

                                                                 When one, stage 1-only ATS set by SMMU_STE_S[EATS]=0x2 is not supported. See
                                                                 SMMU_STE_S[EATS]. */
        uint32_t asid16                : 1;  /**< [ 12: 12](RO) 16-bit ASID supported.
                                                                 When 16-bit ASIDs are not supported, ASID\<15:8\> is RES0 in command parameters and must be
                                                                 zero in SMMU_CD_S[ASID]. */
        uint32_t msi                   : 1;  /**< [ 13: 13](RO) Message signaled interrupts are supported. */
        uint32_t sev                   : 1;  /**< [ 14: 14](RO) SMMU, and system, support generation of events to CPU.
                                                                 When set, WFE may be used on the CPU to wait for CMD_SYNC completion.
                                                                 This bit must reflect the ability of the system, and SMMU implementation, to convey
                                                                 events to all CPUs that are expected to run SMMU maintenance software. */
        uint32_t atos                  : 1;  /**< [ 15: 15](RO) Address translation operations supported.
                                                                 When zero, VATOS=0 and all SMMU()_(S_)GATOS_* registers are reserved. */
        uint32_t pri                   : 1;  /**< [ 16: 16](RO) Page request interface supported.
                                                                 For CNXXXX, must be zero as no ATS supported. */
        uint32_t vmw                   : 1;  /**< [ 17: 17](RO) VMID wildcard-matching supported for TLB invalidates.
                                                                 Must be zero when SMMU()_IDR0[S2P]=0 (VMID tagging is not supported unless stage 2 is
                                                                 implemented). */
        uint32_t vmid16                : 1;  /**< [ 18: 18](RO) 16-bit VMID supported.
                                                                 When 16-bit VMIDs are not supported, VMID\<15:8\> is RES0 in command parameters
                                                                 and must be zero in SMMU_STE_S[S2VMID].
                                                                 The value of this field is irrelevant to software unless SMMU()_IDR0[S2P] is set. */
        uint32_t cd2l                  : 1;  /**< [ 19: 19](RO) Two-level context descriptor table supported. */
        uint32_t vatos                 : 1;  /**< [ 20: 20](RO) Virtual ATOS page interface supported.
                                                                 ATOS must also be supported.
                                                                 If this is set, both stage 1 and stage 2 translation must also be supported: S1P and
                                                                 S2P must be set. */
        uint32_t ttendian              : 2;  /**< [ 22: 21](RO) Endianness support for translation table walks.
                                                                 0x0 = Mixed-endian: SMMU_CD_S[ENDI] and SMMU_STE_S[S2ENDI] may select either endian.
                                                                 0x1 = Reserved.
                                                                 0x2 = Little-endian: SMMU_CD_S[ENDI] and SMMU_STE_S[S2ENDI] must select little-endian.
                                                                 0x3 = Big-endian: SMMU_CD_S[ENDI] and SMMU_STE_S[S2ENDI] must select big-endian. */
        uint32_t reserved_23           : 1;
        uint32_t stall_model           : 2;  /**< [ 25: 24](RO) Stalling fault model support.
                                                                     0x0 = Stall and terminate models supported.
                                                                     0x1 = Stall is not supported (all faults terminate transaction); SMMU_STE_S[S2S]/CD[S]
                                                                     must be zero CMD_RESUME and CMD_STALL_TERM are not available.
                                                                     0x2 = Stall is forced (all faults eligible to stall cause stall);
                                                                 SMMU_STE_S[S2S]/CD[S]
                                                                     must be one.
                                                                     0x3 = Reserved.

                                                                     SMMU_STE_S[S2S] must be in the states above only if stage 2 translation was
                                                                     enabled (as it is otherwise ignored).

                                                                     This field is related to SMMU()_S_IDR0[STALL_MODEL] and might be modified by
                                                                     SMMU()_S_CR0[NSSTALLD].

                                                                     An SMMU associated with a PCI system must not have [STALL_MODEL]=0x2. */
        uint32_t term_model            : 1;  /**< [ 26: 26](RO) Termination model behavior.

                                                                 0 = SMMU_CD_S[A] determines Abort or RAZ/WI behavior of a terminated transaction. The
                                                                 act of terminating a transaction may be configured using SMMU_CD_S[A] to successfully
                                                                 complete the transaction (RAZ/WI) or abort the transaction/return error.

                                                                 1 = Terminating a transaction with RAZ/WI behavior is not supported,
                                                                 SMMU_CD_S[A] must be one. This means that a terminated transaction will always be
                                                                 aborted/error returned. */
        uint32_t st_level              : 2;  /**< [ 28: 27](RO) Multilevel stream table support.
                                                                 0x0 = Linear stream table supported.
                                                                 0x1 = Two-level stream table supported in addition to linear stream table.
                                                                 0x2 = Reserved.
                                                                 0x3 = Reserved. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_idr0_s cn; */
};
typedef union cavm_smmux_idr0 cavm_smmux_idr0_t;

static inline uint64_t CAVM_SMMUX_IDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_IDR0(uint64_t a)
{
    if (a==0)
        return 0x830000000000ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_IDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_IDR0(a) cavm_smmux_idr0_t
#define bustype_CAVM_SMMUX_IDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_IDR0(a) "SMMUX_IDR0"
#define device_bar_CAVM_SMMUX_IDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_IDR0(a) (a)
#define arguments_CAVM_SMMUX_IDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_idr1
 *
 * SMMU Identification 1 Register
 */
union cavm_smmux_idr1
{
    uint32_t u;
    struct cavm_smmux_idr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ecmdq                 : 1;  /**< [ 31: 31](RO) Support for enhanced Command queue interface.

                                                                 0 = Enhanced Command queue interface not supported. SMMU()_IDR6 is RES0.

                                                                 1 = Enhanced Command queue interface details are advertised in SMMU()_IDR6. */
        uint32_t tables_preset         : 1;  /**< [ 30: 30](RO) Table base addresses fixed.

                                                                 When set, the contents of the registers SMMU()_(S_)STRTAB_BASE and
                                                                 SMMU()_(S_)STRTAB_BASE_CFG are fixed and pre-set at initialization
                                                                 time. Software must use the addresses in these registers in order to access the
                                                                 tables, rather than allocating system memory and providing a pointer to the
                                                                 SMMU. Software must use an appropriate memory type for access to these
                                                                 addresses; the SMMU will not guarantee cache coherency, so software must use
                                                                 either noncached access or cached access with software cache maintenance. See
                                                                 [REL]. */
        uint32_t queues_preset         : 1;  /**< [ 29: 29](RO) Queue base addresses fixed. As with [TABLES_PRESET]: when set, the contents of
                                                                 SMMU()_CMDQ_BASE, SMMU()_EVENTQ_BASE are fixed and pre-set at initialization time. */
        uint32_t rel                   : 1;  /**< [ 28: 28](RO) Relative base pointers. For embedded implementations, this flag indicates that a
                                                                 base register affected by [TABLES_PRESET] or [QUEUES_PRESET] being set to 1
                                                                 contains a preset address relative to the SMMU base address (register offset
                                                                 0). Otherwise, all addresses in SMMU registers are absolute physical
                                                                 addresses. Relative addresses are calculated using an addition of the unsigned
                                                                 ADDR field onto the SMMU base address. When [TABLES_PRESET]=0 &&
                                                                 [QUEUES_PRESET]=0, the REL value is zero; if base addresses are not fixed, they
                                                                 are always absolute addresses. */
        uint32_t attr_types_ovr        : 1;  /**< [ 27: 27](RO) Incoming MemType, shareability, allocation/transient hints override.

                                                                 0 = Incoming attributes cannot be overridden before translation or by global
                                                                 bypass; effectively, STE and SMMU()_(S_)GBPA MTCFG/SHCFG/ALLOCCFG fields are fixed
                                                                 as use incoming.

                                                                 1 = Incoming attributes can be overridden. */
        uint32_t attr_perms_ovr        : 1;  /**< [ 26: 26](RO) Incoming Data/Inst, User/Privileged, NS override.

                                                                 0 = Incoming attributes cannot be overridden before translation or by global
                                                                 bypass; effectively, INSTCFG/PRIVCFG/NSCFG are fixed as use incoming.

                                                                 1 = Incoming attributes can be overridden. */
        uint32_t cmdqs                 : 5;  /**< [ 25: 21](RO) Command queue maximum number of entries as log2(entries), max 19. The index
                                                                 register values include an extra bit for wrap, so a queue with two entries has
                                                                 indices of N bits but an index register containing (N+1) bits. */
        uint32_t eventqs               : 5;  /**< [ 20: 16](RO) Event queue maximum number of entries as log2(entries), max 19. */
        uint32_t priqs                 : 5;  /**< [ 15: 11](RO) PRIQ maximum number of entries as log2(entries), max 19. */
        uint32_t ssidsize              : 5;  /**< [ 10:  6](RO) Max bits of SubstreamID. Valid range 0 to 20 inclusive, 0 meaning no Substreams
                                                                 are supported. */
        uint32_t sidsize               : 6;  /**< [  5:  0](RO) Max bits of StreamID. This value is between 0 and 32 inclusive. This reflects
                                                                 the physical StreamID size, i.e. an SMMU cannot represent (or be presented with)
                                                                 StreamIDs greater than SIDSIZE. */
#else /* Word 0 - Little Endian */
        uint32_t sidsize               : 6;  /**< [  5:  0](RO) Max bits of StreamID. This value is between 0 and 32 inclusive. This reflects
                                                                 the physical StreamID size, i.e. an SMMU cannot represent (or be presented with)
                                                                 StreamIDs greater than SIDSIZE. */
        uint32_t ssidsize              : 5;  /**< [ 10:  6](RO) Max bits of SubstreamID. Valid range 0 to 20 inclusive, 0 meaning no Substreams
                                                                 are supported. */
        uint32_t priqs                 : 5;  /**< [ 15: 11](RO) PRIQ maximum number of entries as log2(entries), max 19. */
        uint32_t eventqs               : 5;  /**< [ 20: 16](RO) Event queue maximum number of entries as log2(entries), max 19. */
        uint32_t cmdqs                 : 5;  /**< [ 25: 21](RO) Command queue maximum number of entries as log2(entries), max 19. The index
                                                                 register values include an extra bit for wrap, so a queue with two entries has
                                                                 indices of N bits but an index register containing (N+1) bits. */
        uint32_t attr_perms_ovr        : 1;  /**< [ 26: 26](RO) Incoming Data/Inst, User/Privileged, NS override.

                                                                 0 = Incoming attributes cannot be overridden before translation or by global
                                                                 bypass; effectively, INSTCFG/PRIVCFG/NSCFG are fixed as use incoming.

                                                                 1 = Incoming attributes can be overridden. */
        uint32_t attr_types_ovr        : 1;  /**< [ 27: 27](RO) Incoming MemType, shareability, allocation/transient hints override.

                                                                 0 = Incoming attributes cannot be overridden before translation or by global
                                                                 bypass; effectively, STE and SMMU()_(S_)GBPA MTCFG/SHCFG/ALLOCCFG fields are fixed
                                                                 as use incoming.

                                                                 1 = Incoming attributes can be overridden. */
        uint32_t rel                   : 1;  /**< [ 28: 28](RO) Relative base pointers. For embedded implementations, this flag indicates that a
                                                                 base register affected by [TABLES_PRESET] or [QUEUES_PRESET] being set to 1
                                                                 contains a preset address relative to the SMMU base address (register offset
                                                                 0). Otherwise, all addresses in SMMU registers are absolute physical
                                                                 addresses. Relative addresses are calculated using an addition of the unsigned
                                                                 ADDR field onto the SMMU base address. When [TABLES_PRESET]=0 &&
                                                                 [QUEUES_PRESET]=0, the REL value is zero; if base addresses are not fixed, they
                                                                 are always absolute addresses. */
        uint32_t queues_preset         : 1;  /**< [ 29: 29](RO) Queue base addresses fixed. As with [TABLES_PRESET]: when set, the contents of
                                                                 SMMU()_CMDQ_BASE, SMMU()_EVENTQ_BASE are fixed and pre-set at initialization time. */
        uint32_t tables_preset         : 1;  /**< [ 30: 30](RO) Table base addresses fixed.

                                                                 When set, the contents of the registers SMMU()_(S_)STRTAB_BASE and
                                                                 SMMU()_(S_)STRTAB_BASE_CFG are fixed and pre-set at initialization
                                                                 time. Software must use the addresses in these registers in order to access the
                                                                 tables, rather than allocating system memory and providing a pointer to the
                                                                 SMMU. Software must use an appropriate memory type for access to these
                                                                 addresses; the SMMU will not guarantee cache coherency, so software must use
                                                                 either noncached access or cached access with software cache maintenance. See
                                                                 [REL]. */
        uint32_t ecmdq                 : 1;  /**< [ 31: 31](RO) Support for enhanced Command queue interface.

                                                                 0 = Enhanced Command queue interface not supported. SMMU()_IDR6 is RES0.

                                                                 1 = Enhanced Command queue interface details are advertised in SMMU()_IDR6. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_idr1_s cn10; */
    struct cavm_smmux_idr1_cn10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t tables_preset         : 1;  /**< [ 30: 30](RO) Table base addresses fixed.

                                                                 When set, the contents of the registers SMMU()_(S_)STRTAB_BASE and
                                                                 SMMU()_(S_)STRTAB_BASE_CFG are fixed and pre-set at initialization
                                                                 time. Software must use the addresses in these registers in order to access the
                                                                 tables, rather than allocating system memory and providing a pointer to the
                                                                 SMMU. Software must use an appropriate memory type for access to these
                                                                 addresses; the SMMU will not guarantee cache coherency, so software must use
                                                                 either noncached access or cached access with software cache maintenance. See
                                                                 [REL]. */
        uint32_t queues_preset         : 1;  /**< [ 29: 29](RO) Queue base addresses fixed. As with [TABLES_PRESET]: when set, the contents of
                                                                 SMMU()_CMDQ_BASE, SMMU()_EVENTQ_BASE are fixed and pre-set at initialization time. */
        uint32_t rel                   : 1;  /**< [ 28: 28](RO) Relative base pointers. For embedded implementations, this flag indicates that a
                                                                 base register affected by [TABLES_PRESET] or [QUEUES_PRESET] being set to 1
                                                                 contains a preset address relative to the SMMU base address (register offset
                                                                 0). Otherwise, all addresses in SMMU registers are absolute physical
                                                                 addresses. Relative addresses are calculated using an addition of the unsigned
                                                                 ADDR field onto the SMMU base address. When [TABLES_PRESET]=0 &&
                                                                 [QUEUES_PRESET]=0, the REL value is zero; if base addresses are not fixed, they
                                                                 are always absolute addresses. */
        uint32_t attr_types_ovr        : 1;  /**< [ 27: 27](RO) Incoming MemType, shareability, allocation/transient hints override.

                                                                 0 = Incoming attributes cannot be overridden before translation or by global
                                                                 bypass; effectively, STE and SMMU()_(S_)GBPA MTCFG/SHCFG/ALLOCCFG fields are fixed
                                                                 as use incoming.

                                                                 1 = Incoming attributes can be overridden. */
        uint32_t attr_perms_ovr        : 1;  /**< [ 26: 26](RO) Incoming Data/Inst, User/Privileged, NS override.

                                                                 0 = Incoming attributes cannot be overridden before translation or by global
                                                                 bypass; effectively, INSTCFG/PRIVCFG/NSCFG are fixed as use incoming.

                                                                 1 = Incoming attributes can be overridden. */
        uint32_t cmdqs                 : 5;  /**< [ 25: 21](RO) Command queue maximum number of entries as log2(entries), max 19. The index
                                                                 register values include an extra bit for wrap, so a queue with two entries has
                                                                 indices of N bits but an index register containing (N+1) bits. */
        uint32_t eventqs               : 5;  /**< [ 20: 16](RO) Event queue maximum number of entries as log2(entries), max 19. */
        uint32_t priqs                 : 5;  /**< [ 15: 11](RO) PRIQ maximum number of entries as log2(entries), max 19. */
        uint32_t ssidsize              : 5;  /**< [ 10:  6](RO) Max bits of SubstreamID. Valid range 0 to 20 inclusive, 0 meaning no Substreams
                                                                 are supported. */
        uint32_t sidsize               : 6;  /**< [  5:  0](RO) Max bits of StreamID. This value is between 0 and 32 inclusive. This reflects
                                                                 the physical StreamID size, i.e. an SMMU cannot represent (or be presented with)
                                                                 StreamIDs greater than SIDSIZE. */
#else /* Word 0 - Little Endian */
        uint32_t sidsize               : 6;  /**< [  5:  0](RO) Max bits of StreamID. This value is between 0 and 32 inclusive. This reflects
                                                                 the physical StreamID size, i.e. an SMMU cannot represent (or be presented with)
                                                                 StreamIDs greater than SIDSIZE. */
        uint32_t ssidsize              : 5;  /**< [ 10:  6](RO) Max bits of SubstreamID. Valid range 0 to 20 inclusive, 0 meaning no Substreams
                                                                 are supported. */
        uint32_t priqs                 : 5;  /**< [ 15: 11](RO) PRIQ maximum number of entries as log2(entries), max 19. */
        uint32_t eventqs               : 5;  /**< [ 20: 16](RO) Event queue maximum number of entries as log2(entries), max 19. */
        uint32_t cmdqs                 : 5;  /**< [ 25: 21](RO) Command queue maximum number of entries as log2(entries), max 19. The index
                                                                 register values include an extra bit for wrap, so a queue with two entries has
                                                                 indices of N bits but an index register containing (N+1) bits. */
        uint32_t attr_perms_ovr        : 1;  /**< [ 26: 26](RO) Incoming Data/Inst, User/Privileged, NS override.

                                                                 0 = Incoming attributes cannot be overridden before translation or by global
                                                                 bypass; effectively, INSTCFG/PRIVCFG/NSCFG are fixed as use incoming.

                                                                 1 = Incoming attributes can be overridden. */
        uint32_t attr_types_ovr        : 1;  /**< [ 27: 27](RO) Incoming MemType, shareability, allocation/transient hints override.

                                                                 0 = Incoming attributes cannot be overridden before translation or by global
                                                                 bypass; effectively, STE and SMMU()_(S_)GBPA MTCFG/SHCFG/ALLOCCFG fields are fixed
                                                                 as use incoming.

                                                                 1 = Incoming attributes can be overridden. */
        uint32_t rel                   : 1;  /**< [ 28: 28](RO) Relative base pointers. For embedded implementations, this flag indicates that a
                                                                 base register affected by [TABLES_PRESET] or [QUEUES_PRESET] being set to 1
                                                                 contains a preset address relative to the SMMU base address (register offset
                                                                 0). Otherwise, all addresses in SMMU registers are absolute physical
                                                                 addresses. Relative addresses are calculated using an addition of the unsigned
                                                                 ADDR field onto the SMMU base address. When [TABLES_PRESET]=0 &&
                                                                 [QUEUES_PRESET]=0, the REL value is zero; if base addresses are not fixed, they
                                                                 are always absolute addresses. */
        uint32_t queues_preset         : 1;  /**< [ 29: 29](RO) Queue base addresses fixed. As with [TABLES_PRESET]: when set, the contents of
                                                                 SMMU()_CMDQ_BASE, SMMU()_EVENTQ_BASE are fixed and pre-set at initialization time. */
        uint32_t tables_preset         : 1;  /**< [ 30: 30](RO) Table base addresses fixed.

                                                                 When set, the contents of the registers SMMU()_(S_)STRTAB_BASE and
                                                                 SMMU()_(S_)STRTAB_BASE_CFG are fixed and pre-set at initialization
                                                                 time. Software must use the addresses in these registers in order to access the
                                                                 tables, rather than allocating system memory and providing a pointer to the
                                                                 SMMU. Software must use an appropriate memory type for access to these
                                                                 addresses; the SMMU will not guarantee cache coherency, so software must use
                                                                 either noncached access or cached access with software cache maintenance. See
                                                                 [REL]. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } cn10ka;
    /* struct cavm_smmux_idr1_s cn10kb; */
    /* struct cavm_smmux_idr1_cn10ka cnf10ka; */
    /* struct cavm_smmux_idr1_cn10ka cnf10kb; */
};
typedef union cavm_smmux_idr1 cavm_smmux_idr1_t;

static inline uint64_t CAVM_SMMUX_IDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_IDR1(uint64_t a)
{
    if (a==0)
        return 0x830000000004ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_IDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_IDR1(a) cavm_smmux_idr1_t
#define bustype_CAVM_SMMUX_IDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_IDR1(a) "SMMUX_IDR1"
#define device_bar_CAVM_SMMUX_IDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_IDR1(a) (a)
#define arguments_CAVM_SMMUX_IDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_idr2
 *
 * SMMU Identification 2 Register
 */
union cavm_smmux_idr2
{
    uint32_t u;
    struct cavm_smmux_idr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_10_31        : 22;
        uint32_t ba_vatos              : 10; /**< [  9:  0](RO) VATOS page base address offset. If SMMU()_IDR0[VATOS]=0, no VATOS page is
                                                                 present and this value is zero. */
#else /* Word 0 - Little Endian */
        uint32_t ba_vatos              : 10; /**< [  9:  0](RO) VATOS page base address offset. If SMMU()_IDR0[VATOS]=0, no VATOS page is
                                                                 present and this value is zero. */
        uint32_t reserved_10_31        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_idr2_s cn; */
};
typedef union cavm_smmux_idr2 cavm_smmux_idr2_t;

static inline uint64_t CAVM_SMMUX_IDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_IDR2(uint64_t a)
{
    if (a==0)
        return 0x830000000008ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_IDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_IDR2(a) cavm_smmux_idr2_t
#define bustype_CAVM_SMMUX_IDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_IDR2(a) "SMMUX_IDR2"
#define device_bar_CAVM_SMMUX_IDR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_IDR2(a) (a)
#define arguments_CAVM_SMMUX_IDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_idr3
 *
 * SMMU Identification 3 Register
 */
union cavm_smmux_idr3
{
    uint32_t u;
    struct cavm_smmux_idr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cmdq_control_page_count : 4;/**< [ 31: 28](RO) Number of command queue control pages supported.
                                                                 The number of command queue control pages supported is 2^[CMDQ_CONTROL_PAGE_COUNT].
                                                                 This field is RES0 in SMMUv3.2 and earlier.
                                                                 An SMMU with [CMDQ_CONTROL_PAGE_COUNT] \> 0 has SMMU_IDR0[COHACC] = 1 and
                                                                 SMMU_IDR0[MSI] = 1. */
        uint32_t cmdq_control_page_log2numq : 4;/**< [ 27: 24](RO) Maximum number of configurable queues per command queue control page.
                                                                 The number of queues supported per command queue control page is 2^[CMDQ_CONTROL_PAGE_LOG2NUMQ].
                                                                 This field has a maximum value of 0x8.
                                                                 If [CMDQ_CONTROL_PAGE_COUNT] = 0x0, this field is Reserved, RES0. */
        uint32_t reserved_13_23        : 11;
        uint32_t bbml                  : 2;  /**< [ 12: 11](RO) Break-before-make behavior level:
                                                                 0x0 = Level 0.
                                                                 0x1 = Level 1.
                                                                 0x2 = Level 2. */
        uint32_t ril                   : 1;  /**< [ 10: 10](RO) Range-based Invalidations and Level hint support
                                                                 0 = Range-based invalidation and level hint are not supported.
                                                                 1 = Range-based invalidation and level hint are supported. */
        uint32_t stt                   : 1;  /**< [  9:  9](RO) Small translation table support
                                                                 0 = Small translation tables are not supported.
                                                                 1 = Small translation tables are supported. */
        uint32_t fwb                   : 1;  /**< [  8:  8](RO) Stage 2 control of memory types and attributes
                                                                 0 = Stage 2 control of memory types and attributes is not supported and the STE.S2FWB bit
                                                                     is RES0.
                                                                 1 = Stage 2 control of memory types and attributes is supported. */
        uint32_t mpam                  : 1;  /**< [  7:  7](RO) 0x0 = MPAM is not supported.
                                                                 0x1 = MPAM is supported in at least one Security state and the SMMU_(S)MPAMIDR registers
                                                                       are present. The SMMU_(S_)MPAMIDR registers indicate whether MPAM is supported by a
                                                                       corresponding Security state. */
        uint32_t reserved_6            : 1;
        uint32_t pps                   : 1;  /**< [  5:  5](RO) 0 = The STE.PPAR field determines whether a PASID is used on a PRI auto-generated response.
                                                                 1 = If the request had a PASID, it is used on a PRI auto-generated response for PRI queue
                                                                     overflow, in the same way as when STE.PPAR == 1. The STE.PPAR field is not checked, and
                                                                     the value is IGNORED. */
        uint32_t xnx                   : 1;  /**< [  4:  4](RO) 0 = EL0/EL1 execute control distinction at stage 2 not supported.
                                                                 1 = EL0/EL1 execute control distinction at stage 2 supported for both AArch64 and
                                                                     AArch32 stage 2 translation tables. */
        uint32_t pbha                  : 1;  /**< [  3:  3](RO) 0 = Page-Based Hardware Attributes not supported.
                                                                   SMMU()_IDR3[HAD] determines whether Hierarchical Attribute Disables
                                                                   supported.
                                                                 1 = Page-Based Hardware Attributes are supported.
                                                                   SMMU()_IDR3[HAD] must be 1. */
        uint32_t had                   : 1;  /**< [  2:  2](RO) Hierarchical attribute disable presence.
                                                                 0 = No hierarchical attribute disable support; SMMU_CD_S[HAD0,HAD1] are ignored.
                                                                 1 = SMMU_CD_S[HAD0,HAD1] control hierarchical attribute disable. */
        uint32_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_1          : 2;
        uint32_t had                   : 1;  /**< [  2:  2](RO) Hierarchical attribute disable presence.
                                                                 0 = No hierarchical attribute disable support; SMMU_CD_S[HAD0,HAD1] are ignored.
                                                                 1 = SMMU_CD_S[HAD0,HAD1] control hierarchical attribute disable. */
        uint32_t pbha                  : 1;  /**< [  3:  3](RO) 0 = Page-Based Hardware Attributes not supported.
                                                                   SMMU()_IDR3[HAD] determines whether Hierarchical Attribute Disables
                                                                   supported.
                                                                 1 = Page-Based Hardware Attributes are supported.
                                                                   SMMU()_IDR3[HAD] must be 1. */
        uint32_t xnx                   : 1;  /**< [  4:  4](RO) 0 = EL0/EL1 execute control distinction at stage 2 not supported.
                                                                 1 = EL0/EL1 execute control distinction at stage 2 supported for both AArch64 and
                                                                     AArch32 stage 2 translation tables. */
        uint32_t pps                   : 1;  /**< [  5:  5](RO) 0 = The STE.PPAR field determines whether a PASID is used on a PRI auto-generated response.
                                                                 1 = If the request had a PASID, it is used on a PRI auto-generated response for PRI queue
                                                                     overflow, in the same way as when STE.PPAR == 1. The STE.PPAR field is not checked, and
                                                                     the value is IGNORED. */
        uint32_t reserved_6            : 1;
        uint32_t mpam                  : 1;  /**< [  7:  7](RO) 0x0 = MPAM is not supported.
                                                                 0x1 = MPAM is supported in at least one Security state and the SMMU_(S)MPAMIDR registers
                                                                       are present. The SMMU_(S_)MPAMIDR registers indicate whether MPAM is supported by a
                                                                       corresponding Security state. */
        uint32_t fwb                   : 1;  /**< [  8:  8](RO) Stage 2 control of memory types and attributes
                                                                 0 = Stage 2 control of memory types and attributes is not supported and the STE.S2FWB bit
                                                                     is RES0.
                                                                 1 = Stage 2 control of memory types and attributes is supported. */
        uint32_t stt                   : 1;  /**< [  9:  9](RO) Small translation table support
                                                                 0 = Small translation tables are not supported.
                                                                 1 = Small translation tables are supported. */
        uint32_t ril                   : 1;  /**< [ 10: 10](RO) Range-based Invalidations and Level hint support
                                                                 0 = Range-based invalidation and level hint are not supported.
                                                                 1 = Range-based invalidation and level hint are supported. */
        uint32_t bbml                  : 2;  /**< [ 12: 11](RO) Break-before-make behavior level:
                                                                 0x0 = Level 0.
                                                                 0x1 = Level 1.
                                                                 0x2 = Level 2. */
        uint32_t reserved_13_23        : 11;
        uint32_t cmdq_control_page_log2numq : 4;/**< [ 27: 24](RO) Maximum number of configurable queues per command queue control page.
                                                                 The number of queues supported per command queue control page is 2^[CMDQ_CONTROL_PAGE_LOG2NUMQ].
                                                                 This field has a maximum value of 0x8.
                                                                 If [CMDQ_CONTROL_PAGE_COUNT] = 0x0, this field is Reserved, RES0. */
        uint32_t cmdq_control_page_count : 4;/**< [ 31: 28](RO) Number of command queue control pages supported.
                                                                 The number of command queue control pages supported is 2^[CMDQ_CONTROL_PAGE_COUNT].
                                                                 This field is RES0 in SMMUv3.2 and earlier.
                                                                 An SMMU with [CMDQ_CONTROL_PAGE_COUNT] \> 0 has SMMU_IDR0[COHACC] = 1 and
                                                                 SMMU_IDR0[MSI] = 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_idr3_s cn10; */
    /* struct cavm_smmux_idr3_s cn10ka; */
    struct cavm_smmux_idr3_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t bbml                  : 2;  /**< [ 12: 11](RO) Break-before-make behavior level:
                                                                 0x0 = Level 0.
                                                                 0x1 = Level 1.
                                                                 0x2 = Level 2. */
        uint32_t ril                   : 1;  /**< [ 10: 10](RO) Range-based Invalidations and Level hint support
                                                                 0 = Range-based invalidation and level hint are not supported.
                                                                 1 = Range-based invalidation and level hint are supported. */
        uint32_t stt                   : 1;  /**< [  9:  9](RO) Small translation table support
                                                                 0 = Small translation tables are not supported.
                                                                 1 = Small translation tables are supported. */
        uint32_t fwb                   : 1;  /**< [  8:  8](RO) Stage 2 control of memory types and attributes
                                                                 0 = Stage 2 control of memory types and attributes is not supported and the STE.S2FWB bit
                                                                     is RES0.
                                                                 1 = Stage 2 control of memory types and attributes is supported. */
        uint32_t mpam                  : 1;  /**< [  7:  7](RO) 0x0 = MPAM is not supported.
                                                                 0x1 = MPAM is supported in at least one Security state and the SMMU_(S)MPAMIDR registers
                                                                       are present. The SMMU_(S_)MPAMIDR registers indicate whether MPAM is supported by a
                                                                       corresponding Security state. */
        uint32_t reserved_6            : 1;
        uint32_t pps                   : 1;  /**< [  5:  5](RO) 0 = The STE.PPAR field determines whether a PASID is used on a PRI auto-generated response.
                                                                 1 = If the request had a PASID, it is used on a PRI auto-generated response for PRI queue
                                                                     overflow, in the same way as when STE.PPAR == 1. The STE.PPAR field is not checked, and
                                                                     the value is IGNORED. */
        uint32_t xnx                   : 1;  /**< [  4:  4](RO) 0 = EL0/EL1 execute control distinction at stage 2 not supported.
                                                                 1 = EL0/EL1 execute control distinction at stage 2 supported for both AArch64 and
                                                                     AArch32 stage 2 translation tables. */
        uint32_t pbha                  : 1;  /**< [  3:  3](RO) 0 = Page-Based Hardware Attributes not supported.
                                                                   SMMU()_IDR3[HAD] determines whether Hierarchical Attribute Disables
                                                                   supported.
                                                                 1 = Page-Based Hardware Attributes are supported.
                                                                   SMMU()_IDR3[HAD] must be 1. */
        uint32_t had                   : 1;  /**< [  2:  2](RO) Hierarchical attribute disable presence.
                                                                 0 = No hierarchical attribute disable support; SMMU_CD_S[HAD0,HAD1] are ignored.
                                                                 1 = SMMU_CD_S[HAD0,HAD1] control hierarchical attribute disable. */
        uint32_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_1          : 2;
        uint32_t had                   : 1;  /**< [  2:  2](RO) Hierarchical attribute disable presence.
                                                                 0 = No hierarchical attribute disable support; SMMU_CD_S[HAD0,HAD1] are ignored.
                                                                 1 = SMMU_CD_S[HAD0,HAD1] control hierarchical attribute disable. */
        uint32_t pbha                  : 1;  /**< [  3:  3](RO) 0 = Page-Based Hardware Attributes not supported.
                                                                   SMMU()_IDR3[HAD] determines whether Hierarchical Attribute Disables
                                                                   supported.
                                                                 1 = Page-Based Hardware Attributes are supported.
                                                                   SMMU()_IDR3[HAD] must be 1. */
        uint32_t xnx                   : 1;  /**< [  4:  4](RO) 0 = EL0/EL1 execute control distinction at stage 2 not supported.
                                                                 1 = EL0/EL1 execute control distinction at stage 2 supported for both AArch64 and
                                                                     AArch32 stage 2 translation tables. */
        uint32_t pps                   : 1;  /**< [  5:  5](RO) 0 = The STE.PPAR field determines whether a PASID is used on a PRI auto-generated response.
                                                                 1 = If the request had a PASID, it is used on a PRI auto-generated response for PRI queue
                                                                     overflow, in the same way as when STE.PPAR == 1. The STE.PPAR field is not checked, and
                                                                     the value is IGNORED. */
        uint32_t reserved_6            : 1;
        uint32_t mpam                  : 1;  /**< [  7:  7](RO) 0x0 = MPAM is not supported.
                                                                 0x1 = MPAM is supported in at least one Security state and the SMMU_(S)MPAMIDR registers
                                                                       are present. The SMMU_(S_)MPAMIDR registers indicate whether MPAM is supported by a
                                                                       corresponding Security state. */
        uint32_t fwb                   : 1;  /**< [  8:  8](RO) Stage 2 control of memory types and attributes
                                                                 0 = Stage 2 control of memory types and attributes is not supported and the STE.S2FWB bit
                                                                     is RES0.
                                                                 1 = Stage 2 control of memory types and attributes is supported. */
        uint32_t stt                   : 1;  /**< [  9:  9](RO) Small translation table support
                                                                 0 = Small translation tables are not supported.
                                                                 1 = Small translation tables are supported. */
        uint32_t ril                   : 1;  /**< [ 10: 10](RO) Range-based Invalidations and Level hint support
                                                                 0 = Range-based invalidation and level hint are not supported.
                                                                 1 = Range-based invalidation and level hint are supported. */
        uint32_t bbml                  : 2;  /**< [ 12: 11](RO) Break-before-make behavior level:
                                                                 0x0 = Level 0.
                                                                 0x1 = Level 1.
                                                                 0x2 = Level 2. */
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_smmux_idr3_s cnf10ka; */
    /* struct cavm_smmux_idr3_s cnf10kb; */
};
typedef union cavm_smmux_idr3 cavm_smmux_idr3_t;

static inline uint64_t CAVM_SMMUX_IDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_IDR3(uint64_t a)
{
    if (a==0)
        return 0x83000000000cll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_IDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_IDR3(a) cavm_smmux_idr3_t
#define bustype_CAVM_SMMUX_IDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_IDR3(a) "SMMUX_IDR3"
#define device_bar_CAVM_SMMUX_IDR3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_IDR3(a) (a)
#define arguments_CAVM_SMMUX_IDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_idr4
 *
 * SMMU Identification 4 Register
 * The contents of this register are implementation-defined and can be used to identify
 * the presence of other implementation-defined register regions elsewhere in the
 * memory map.
 */
union cavm_smmux_idr4
{
    uint32_t u;
    struct cavm_smmux_idr4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_idr4_s cn; */
};
typedef union cavm_smmux_idr4 cavm_smmux_idr4_t;

static inline uint64_t CAVM_SMMUX_IDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_IDR4(uint64_t a)
{
    if (a==0)
        return 0x830000000010ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_IDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_IDR4(a) cavm_smmux_idr4_t
#define bustype_CAVM_SMMUX_IDR4(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_IDR4(a) "SMMUX_IDR4"
#define device_bar_CAVM_SMMUX_IDR4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_IDR4(a) (a)
#define arguments_CAVM_SMMUX_IDR4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_idr5
 *
 * SMMU Identification 5 Register
 */
union cavm_smmux_idr5
{
    uint32_t u;
    struct cavm_smmux_idr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t stall_max             : 16; /**< [ 31: 16](RO) Maximum number of outstanding stalled transactions supported by SMMU/system. */
        uint32_t reserved_12_15        : 4;
        uint32_t vax                   : 2;  /**< [ 11: 10](RO) Virtual address extend.
                                                                 0x0 = Virtual addresses of 48 bits per SMMU_CD_S[TTBx] supported.
                                                                 0x1 = Virtual addresses of 52 bits per SMMU_CD_S[TTBx] supported.
                                                                 0x2, 0x3 = Reserved. */
        uint32_t reserved_7_9          : 3;
        uint32_t gran64k               : 1;  /**< [  6:  6](RO) 64 KB translation granule supported. */
        uint32_t gran16k               : 1;  /**< [  5:  5](RO) 16 KB translation granule supported. */
        uint32_t gran4k                : 1;  /**< [  4:  4](RO) 4 KB translation granule supported. */
        uint32_t reserved_3            : 1;
        uint32_t oas                   : 3;  /**< [  2:  0](RO) Output address size (size of physical address output from SMMU).
                                                                  0x0 = 32 bits.
                                                                  0x1 = 36 bits.
                                                                  0x2 = 40 bits.
                                                                  0x3 = 42 bits.
                                                                  0x4 = 44 bits.
                                                                  0x5 = 48 bits.
                                                                  0x6 = 52 bits.
                                                                  _ Other values reserved.

                                                                 Where reference is made to OAS, it is the size value (32, 36, 40, etc.) that is
                                                                 referenced, not the literal value of this field. For example, MAX(OAS, 40) is
                                                                 intended to evaluate against a size like 36, not the field encoding 0x1. */
#else /* Word 0 - Little Endian */
        uint32_t oas                   : 3;  /**< [  2:  0](RO) Output address size (size of physical address output from SMMU).
                                                                  0x0 = 32 bits.
                                                                  0x1 = 36 bits.
                                                                  0x2 = 40 bits.
                                                                  0x3 = 42 bits.
                                                                  0x4 = 44 bits.
                                                                  0x5 = 48 bits.
                                                                  0x6 = 52 bits.
                                                                  _ Other values reserved.

                                                                 Where reference is made to OAS, it is the size value (32, 36, 40, etc.) that is
                                                                 referenced, not the literal value of this field. For example, MAX(OAS, 40) is
                                                                 intended to evaluate against a size like 36, not the field encoding 0x1. */
        uint32_t reserved_3            : 1;
        uint32_t gran4k                : 1;  /**< [  4:  4](RO) 4 KB translation granule supported. */
        uint32_t gran16k               : 1;  /**< [  5:  5](RO) 16 KB translation granule supported. */
        uint32_t gran64k               : 1;  /**< [  6:  6](RO) 64 KB translation granule supported. */
        uint32_t reserved_7_9          : 3;
        uint32_t vax                   : 2;  /**< [ 11: 10](RO) Virtual address extend.
                                                                 0x0 = Virtual addresses of 48 bits per SMMU_CD_S[TTBx] supported.
                                                                 0x1 = Virtual addresses of 52 bits per SMMU_CD_S[TTBx] supported.
                                                                 0x2, 0x3 = Reserved. */
        uint32_t reserved_12_15        : 4;
        uint32_t stall_max             : 16; /**< [ 31: 16](RO) Maximum number of outstanding stalled transactions supported by SMMU/system. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_idr5_s cn; */
};
typedef union cavm_smmux_idr5 cavm_smmux_idr5_t;

static inline uint64_t CAVM_SMMUX_IDR5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_IDR5(uint64_t a)
{
    if (a==0)
        return 0x830000000014ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_IDR5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_IDR5(a) cavm_smmux_idr5_t
#define bustype_CAVM_SMMUX_IDR5(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_IDR5(a) "SMMUX_IDR5"
#define device_bar_CAVM_SMMUX_IDR5(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_IDR5(a) (a)
#define arguments_CAVM_SMMUX_IDR5(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_iidr
 *
 * SMMU Implementation Identification Register
 * Provides information about the implementation/implementer of the SMMU and
 * architecture version supported.
 */
union cavm_smmux_iidr
{
    uint32_t u;
    struct cavm_smmux_iidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t productid             : 12; /**< [ 31: 20](RO) An implementation defined product number for the device.
                                                                 In CNXXXX, enumerated by PCC_PROD_E. */
        uint32_t variant               : 4;  /**< [ 19: 16](RO) Indicates the major revision or variant of the product.
                                                                 On CNXXXX, this is the major revision. See FUSE_NUM_E::CHIP_ID(). */
        uint32_t revision              : 4;  /**< [ 15: 12](RO) Indicates the minor revision or variant of the product.
                                                                 On CNXXXX, this is the minor revision. See FUSE_NUM_E::CHIP_ID(). */
        uint32_t implementer           : 12; /**< [ 11:  0](RO) Contains the JEP106 code of the company that implemented the SMMU:
                                                                    0x34C = Marvell.

                                                                 Matches the SMMU()_PIDR1/2/4[DES_{0,1,2}] fields. */
#else /* Word 0 - Little Endian */
        uint32_t implementer           : 12; /**< [ 11:  0](RO) Contains the JEP106 code of the company that implemented the SMMU:
                                                                    0x34C = Marvell.

                                                                 Matches the SMMU()_PIDR1/2/4[DES_{0,1,2}] fields. */
        uint32_t revision              : 4;  /**< [ 15: 12](RO) Indicates the minor revision or variant of the product.
                                                                 On CNXXXX, this is the minor revision. See FUSE_NUM_E::CHIP_ID(). */
        uint32_t variant               : 4;  /**< [ 19: 16](RO) Indicates the major revision or variant of the product.
                                                                 On CNXXXX, this is the major revision. See FUSE_NUM_E::CHIP_ID(). */
        uint32_t productid             : 12; /**< [ 31: 20](RO) An implementation defined product number for the device.
                                                                 In CNXXXX, enumerated by PCC_PROD_E. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_iidr_s cn; */
};
typedef union cavm_smmux_iidr cavm_smmux_iidr_t;

static inline uint64_t CAVM_SMMUX_IIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_IIDR(uint64_t a)
{
    if (a==0)
        return 0x830000000018ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_IIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_IIDR(a) cavm_smmux_iidr_t
#define bustype_CAVM_SMMUX_IIDR(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_IIDR(a) "SMMUX_IIDR"
#define device_bar_CAVM_SMMUX_IIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_IIDR(a) (a)
#define arguments_CAVM_SMMUX_IIDR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_imp_actlr
 *
 * SMMU Auxiliary Control Register
 */
union cavm_smmux_imp_actlr
{
    uint32_t u;
    struct cavm_smmux_imp_actlr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t qos                   : 4;  /**< [  3:  0](R/W) SMMU(0)_S_IMP_ACTLR[QOS] */
#else /* Word 0 - Little Endian */
        uint32_t qos                   : 4;  /**< [  3:  0](R/W) SMMU(0)_S_IMP_ACTLR[QOS] */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_imp_actlr_s cn; */
};
typedef union cavm_smmux_imp_actlr cavm_smmux_imp_actlr_t;

static inline uint64_t CAVM_SMMUX_IMP_ACTLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_IMP_ACTLR(uint64_t a)
{
    if (a==0)
        return 0x830000000e10ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_IMP_ACTLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_IMP_ACTLR(a) cavm_smmux_imp_actlr_t
#define bustype_CAVM_SMMUX_IMP_ACTLR(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_IMP_ACTLR(a) "SMMUX_IMP_ACTLR"
#define device_bar_CAVM_SMMUX_IMP_ACTLR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_IMP_ACTLR(a) (a)
#define arguments_CAVM_SMMUX_IMP_ACTLR(a) (a),-1,-1,-1

/**
 * Register (NCB) smmu#_imp_const0
 *
 * SMMU Constant Register
 */
union cavm_smmux_imp_const0
{
    uint64_t u;
    struct cavm_smmux_imp_const0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cfc                   : 16; /**< [ 63: 48](RO) Number of CFC entries. */
        uint64_t reserved_16_47        : 32;
        uint64_t tlb                   : 16; /**< [ 15:  0](RO) Number of IO-TLB entries. */
#else /* Word 0 - Little Endian */
        uint64_t tlb                   : 16; /**< [ 15:  0](RO) Number of IO-TLB entries. */
        uint64_t reserved_16_47        : 32;
        uint64_t cfc                   : 16; /**< [ 63: 48](RO) Number of CFC entries. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_imp_const0_s cn; */
};
typedef union cavm_smmux_imp_const0 cavm_smmux_imp_const0_t;

static inline uint64_t CAVM_SMMUX_IMP_CONST0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_IMP_CONST0(uint64_t a)
{
    if (a==0)
        return 0x830000000e08ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_IMP_CONST0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_IMP_CONST0(a) cavm_smmux_imp_const0_t
#define bustype_CAVM_SMMUX_IMP_CONST0(a) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_IMP_CONST0(a) "SMMUX_IMP_CONST0"
#define device_bar_CAVM_SMMUX_IMP_CONST0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_IMP_CONST0(a) (a)
#define arguments_CAVM_SMMUX_IMP_CONST0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_imp_error_cause
 *
 * SMMU cause for error event Register
 * This register contains debug information.
 */
union cavm_smmux_imp_error_cause
{
    uint32_t u;
    struct cavm_smmux_imp_error_cause_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bus_error             : 1;  /**< [ 31: 31](R/W/H) Error detected on MESH bus (RXRDAT.error). */
        uint32_t bus_poison            : 1;  /**< [ 30: 30](R/W/H) Poison detected on MESH bus (RXRDAT.poison). */
        uint32_t reserved_25_29        : 5;
        uint32_t ttd_valid             : 1;  /**< [ 24: 24](RAZ) Valid bit of TTD not set when walker read it. */
        uint32_t reserved_20_23        : 4;
        uint32_t cd_tgx                : 1;  /**< [ 19: 19](R/W/H) CD TG0 or TG1 granule is not supported. */
        uint32_t cd_ttbx               : 1;  /**< [ 18: 18](R/W/H) CD TTB0 or TTB1 is outside of range. */
        uint32_t cd_txsz               : 1;  /**< [ 17: 17](R/W/H) CD T0SZ or T1SZ is invalid. */
        uint32_t cd_httu               : 1;  /**< [ 16: 16](R/W/H) CD access flag and dirty state bits not supported by our system as indicated
                                                                 from SMMU()_IDR0[HTTU]. */
        uint32_t cd_aarch              : 1;  /**< [ 15: 15](R/W/H) CD AArch is not supported by our system as indicated from (SMMU()_IDR0[TTF]. */
        uint32_t cd_streamworld        : 1;  /**< [ 14: 14](R/W/H) CD STREAMWORLD not supported. */
        uint32_t cd_s                  : 1;  /**< [ 13: 13](R/W/H) CD_S not supported by our stall model as indicated in SMMU(0)(_S)_IDR0.STALL_MODEL. */
        uint32_t cd_valid              : 1;  /**< [ 12: 12](R/W/H) Valid bit of CD not set when walker read it. */
        uint32_t ste_s2_walk_cfg       : 1;  /**< [ 11: 11](R/W/H) STE walk config inconsist between following parameters: S2TG, S2SL0, S2T0SZ.
                                                                 See Arm spec DDIO487D, tables D5-11, D5-13, D5-15. */
        uint32_t ste_s2t0sz            : 1;  /**< [ 10: 10](R/W/H) STE S2T0SZ invalid for granularity specified by STE.S2TG. */
        uint32_t ste_s2ttb             : 1;  /**< [  9:  9](R/W/H) STE S2TTB outside range. */
        uint32_t ste_httu              : 1;  /**< [  8:  8](R/W/H) STE access flag and dirty state bits not supported by our system as indicated
                                                                 from SMMU()_IDR0[HTTU]. */
        uint32_t ste_aarch             : 1;  /**< [  7:  7](R/W/H) STE AArch is not supported by our system as indicated from (SMMU()_IDR0[TTF]. */
        uint32_t ste_s2tg              : 1;  /**< [  6:  6](R/W/H) STE granule not supported. */
        uint32_t ste_s2s               : 1;  /**< [  5:  5](R/W/H) STE S2S field not supported by our stall model as indicated in SMMU(0)(_S)_IDR0.STALL_MODEL. */
        uint32_t ste_s1contextptr      : 1;  /**< [  4:  4](R/W/H) STE S1ContextPtr is out of range. */
        uint32_t ste_s1stalld          : 1;  /**< [  3:  3](R/W/H) STE S1STALLD field not supported by our stall model as indicated in SMMU(0)(_S)_IDR0.STALL_MODEL. */
        uint32_t ste_strw              : 1;  /**< [  2:  2](R/W/H) STE STRW not match with SSEC indication of TXN. */
        uint32_t ste_sel2              : 1;  /**< [  1:  1](R/W/H) Secure stage 2 is not supported when SMMU(0)_S_IDR1.SEL2 == 0. */
        uint32_t ste_valid             : 1;  /**< [  0:  0](R/W/H) Valid bit of STE not set when walker read it. */
#else /* Word 0 - Little Endian */
        uint32_t ste_valid             : 1;  /**< [  0:  0](R/W/H) Valid bit of STE not set when walker read it. */
        uint32_t ste_sel2              : 1;  /**< [  1:  1](R/W/H) Secure stage 2 is not supported when SMMU(0)_S_IDR1.SEL2 == 0. */
        uint32_t ste_strw              : 1;  /**< [  2:  2](R/W/H) STE STRW not match with SSEC indication of TXN. */
        uint32_t ste_s1stalld          : 1;  /**< [  3:  3](R/W/H) STE S1STALLD field not supported by our stall model as indicated in SMMU(0)(_S)_IDR0.STALL_MODEL. */
        uint32_t ste_s1contextptr      : 1;  /**< [  4:  4](R/W/H) STE S1ContextPtr is out of range. */
        uint32_t ste_s2s               : 1;  /**< [  5:  5](R/W/H) STE S2S field not supported by our stall model as indicated in SMMU(0)(_S)_IDR0.STALL_MODEL. */
        uint32_t ste_s2tg              : 1;  /**< [  6:  6](R/W/H) STE granule not supported. */
        uint32_t ste_aarch             : 1;  /**< [  7:  7](R/W/H) STE AArch is not supported by our system as indicated from (SMMU()_IDR0[TTF]. */
        uint32_t ste_httu              : 1;  /**< [  8:  8](R/W/H) STE access flag and dirty state bits not supported by our system as indicated
                                                                 from SMMU()_IDR0[HTTU]. */
        uint32_t ste_s2ttb             : 1;  /**< [  9:  9](R/W/H) STE S2TTB outside range. */
        uint32_t ste_s2t0sz            : 1;  /**< [ 10: 10](R/W/H) STE S2T0SZ invalid for granularity specified by STE.S2TG. */
        uint32_t ste_s2_walk_cfg       : 1;  /**< [ 11: 11](R/W/H) STE walk config inconsist between following parameters: S2TG, S2SL0, S2T0SZ.
                                                                 See Arm spec DDIO487D, tables D5-11, D5-13, D5-15. */
        uint32_t cd_valid              : 1;  /**< [ 12: 12](R/W/H) Valid bit of CD not set when walker read it. */
        uint32_t cd_s                  : 1;  /**< [ 13: 13](R/W/H) CD_S not supported by our stall model as indicated in SMMU(0)(_S)_IDR0.STALL_MODEL. */
        uint32_t cd_streamworld        : 1;  /**< [ 14: 14](R/W/H) CD STREAMWORLD not supported. */
        uint32_t cd_aarch              : 1;  /**< [ 15: 15](R/W/H) CD AArch is not supported by our system as indicated from (SMMU()_IDR0[TTF]. */
        uint32_t cd_httu               : 1;  /**< [ 16: 16](R/W/H) CD access flag and dirty state bits not supported by our system as indicated
                                                                 from SMMU()_IDR0[HTTU]. */
        uint32_t cd_txsz               : 1;  /**< [ 17: 17](R/W/H) CD T0SZ or T1SZ is invalid. */
        uint32_t cd_ttbx               : 1;  /**< [ 18: 18](R/W/H) CD TTB0 or TTB1 is outside of range. */
        uint32_t cd_tgx                : 1;  /**< [ 19: 19](R/W/H) CD TG0 or TG1 granule is not supported. */
        uint32_t reserved_20_23        : 4;
        uint32_t ttd_valid             : 1;  /**< [ 24: 24](RAZ) Valid bit of TTD not set when walker read it. */
        uint32_t reserved_25_29        : 5;
        uint32_t bus_poison            : 1;  /**< [ 30: 30](R/W/H) Poison detected on MESH bus (RXRDAT.poison). */
        uint32_t bus_error             : 1;  /**< [ 31: 31](R/W/H) Error detected on MESH bus (RXRDAT.error). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_imp_error_cause_s cn; */
};
typedef union cavm_smmux_imp_error_cause cavm_smmux_imp_error_cause_t;

static inline uint64_t CAVM_SMMUX_IMP_ERROR_CAUSE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_IMP_ERROR_CAUSE(uint64_t a)
{
    if (a==0)
        return 0x830000000e20ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_IMP_ERROR_CAUSE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_IMP_ERROR_CAUSE(a) cavm_smmux_imp_error_cause_t
#define bustype_CAVM_SMMUX_IMP_ERROR_CAUSE(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_IMP_ERROR_CAUSE(a) "SMMUX_IMP_ERROR_CAUSE"
#define device_bar_CAVM_SMMUX_IMP_ERROR_CAUSE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_IMP_ERROR_CAUSE(a) (a)
#define arguments_CAVM_SMMUX_IMP_ERROR_CAUSE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_imp_prefetch_addr_cap
 *
 * SMMU Prepeftc Addr Cap Register
 */
union cavm_smmux_imp_prefetch_addr_cap
{
    uint32_t u;
    struct cavm_smmux_imp_prefetch_addr_cap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_7_31         : 25;
        uint32_t fxl_prefetch_dis      : 1;  /**< [  6:  6](R/W) FXL drops CMD_PREFETCH_ADDR commands.
                                                                 It terminate outstanding prefetch commands since FXL gets CMD_PREFETCH_ADDR only
                                                                 when prefetch command is already executed. */
        uint32_t prefetch_addr_cap_valid : 1;/**< [  5:  5](R/W) Qualifies PREFETCH_ADDR_CAP field. */
        uint32_t prefetch_addr_cap     : 5;  /**< [  4:  0](R/W) When PREFETCH_ADDR_CAP_VALID is set the number of iterations defined by SIZE in
                                                                 prefetch command is ANDed with PREFETCH_ADDR_CAP. */
#else /* Word 0 - Little Endian */
        uint32_t prefetch_addr_cap     : 5;  /**< [  4:  0](R/W) When PREFETCH_ADDR_CAP_VALID is set the number of iterations defined by SIZE in
                                                                 prefetch command is ANDed with PREFETCH_ADDR_CAP. */
        uint32_t prefetch_addr_cap_valid : 1;/**< [  5:  5](R/W) Qualifies PREFETCH_ADDR_CAP field. */
        uint32_t fxl_prefetch_dis      : 1;  /**< [  6:  6](R/W) FXL drops CMD_PREFETCH_ADDR commands.
                                                                 It terminate outstanding prefetch commands since FXL gets CMD_PREFETCH_ADDR only
                                                                 when prefetch command is already executed. */
        uint32_t reserved_7_31         : 25;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_imp_prefetch_addr_cap_s cn; */
};
typedef union cavm_smmux_imp_prefetch_addr_cap cavm_smmux_imp_prefetch_addr_cap_t;

static inline uint64_t CAVM_SMMUX_IMP_PREFETCH_ADDR_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_IMP_PREFETCH_ADDR_CAP(uint64_t a)
{
    if (a==0)
        return 0x830000000e88ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_IMP_PREFETCH_ADDR_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_IMP_PREFETCH_ADDR_CAP(a) cavm_smmux_imp_prefetch_addr_cap_t
#define bustype_CAVM_SMMUX_IMP_PREFETCH_ADDR_CAP(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_IMP_PREFETCH_ADDR_CAP(a) "SMMUX_IMP_PREFETCH_ADDR_CAP"
#define device_bar_CAVM_SMMUX_IMP_PREFETCH_ADDR_CAP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_IMP_PREFETCH_ADDR_CAP(a) (a)
#define arguments_CAVM_SMMUX_IMP_PREFETCH_ADDR_CAP(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_imp_status
 *
 * SMMU Debug Registers
 * This register contains debug information.
 */
union cavm_smmux_imp_status
{
    uint32_t u;
    struct cavm_smmux_imp_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_26_31        : 6;
        uint32_t cfgwalker             : 5;  /**< [ 25: 21](RO/H) Configuration walkers active. */
        uint32_t walker                : 5;  /**< [ 20: 16](RO/H) Walkers active. */
        uint32_t inflight              : 16; /**< [ 15:  0](RO/H) Valid entries in inflight queue. */
#else /* Word 0 - Little Endian */
        uint32_t inflight              : 16; /**< [ 15:  0](RO/H) Valid entries in inflight queue. */
        uint32_t walker                : 5;  /**< [ 20: 16](RO/H) Walkers active. */
        uint32_t cfgwalker             : 5;  /**< [ 25: 21](RO/H) Configuration walkers active. */
        uint32_t reserved_26_31        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_imp_status_s cn; */
};
typedef union cavm_smmux_imp_status cavm_smmux_imp_status_t;

static inline uint64_t CAVM_SMMUX_IMP_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_IMP_STATUS(uint64_t a)
{
    if (a==0)
        return 0x830000000e18ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_IMP_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_IMP_STATUS(a) cavm_smmux_imp_status_t
#define bustype_CAVM_SMMUX_IMP_STATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_IMP_STATUS(a) "SMMUX_IMP_STATUS"
#define device_bar_CAVM_SMMUX_IMP_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_IMP_STATUS(a) (a)
#define arguments_CAVM_SMMUX_IMP_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_irq_ctrl
 *
 * SMMU Interrupt Request Control Register
 * Each field in this register has a corresponding field in SMMU()_IRQ_CTRLACK, with
 * the same "update" semantic as fields in SMMU()_CR0 versus SMMU()_CR0ACK.
 *
 * This register contains IRQ enable flags for GERROR/PRIQ/EVENTQ interrupt
 * sources. These enables allow/inhibit both edge-triggered wired outputs (if
 * implemented) and MSI writes (if implemented).
 *
 * IRQ enable flags guard the MSI address/payload registers, which must only be changed
 * when their respective enable flag is zero. See SMMU()_GERROR_IRQ_CFG0 for details.
 *
 * Completion of an update of x_IRQEN from zero to one guarantees that the MSI configuration
 * in SMMU()_x_IRQ_CFG{0,1,2} will be used for all future MSIs generated from source `x'.
 * An update of x_IRQEN from one to zero completes when all prior MSIs have become visible
 * to their shareability domain (have completed). Completion of this update guarantees
 * that no new MSI writes or wired edge events will later become visible from source
 * `x'.
 */
union cavm_smmux_irq_ctrl
{
    uint32_t u;
    struct cavm_smmux_irq_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t eventq_irqen          : 1;  /**< [  2:  2](R/W) Nonsecure event queue interrupt enable. */
        uint32_t priq_irqen            : 1;  /**< [  1:  1](RAZ) Reserved as SMMU()_IDR0[PRI]=0. */
        uint32_t gerror_irqen          : 1;  /**< [  0:  0](R/W) Nonsecure GERROR interrupt enable. */
#else /* Word 0 - Little Endian */
        uint32_t gerror_irqen          : 1;  /**< [  0:  0](R/W) Nonsecure GERROR interrupt enable. */
        uint32_t priq_irqen            : 1;  /**< [  1:  1](RAZ) Reserved as SMMU()_IDR0[PRI]=0. */
        uint32_t eventq_irqen          : 1;  /**< [  2:  2](R/W) Nonsecure event queue interrupt enable. */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_irq_ctrl_s cn; */
};
typedef union cavm_smmux_irq_ctrl cavm_smmux_irq_ctrl_t;

static inline uint64_t CAVM_SMMUX_IRQ_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_IRQ_CTRL(uint64_t a)
{
    if (a==0)
        return 0x830000000050ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_IRQ_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_IRQ_CTRL(a) cavm_smmux_irq_ctrl_t
#define bustype_CAVM_SMMUX_IRQ_CTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_IRQ_CTRL(a) "SMMUX_IRQ_CTRL"
#define device_bar_CAVM_SMMUX_IRQ_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_IRQ_CTRL(a) (a)
#define arguments_CAVM_SMMUX_IRQ_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_irq_ctrlack
 *
 * SMMU Interrupt Control Acknowledgement Register
 * This register is a read-only copy of SMMU()_IRQ_CTRL.
 */
union cavm_smmux_irq_ctrlack
{
    uint32_t u;
    struct cavm_smmux_irq_ctrlack_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t eventq_irqen          : 1;  /**< [  2:  2](RO/H) Read-only hardware-modified SMMU(0)_IRQ_CTRL[EVENTQ_IRQEN]. */
        uint32_t priq_irqen            : 1;  /**< [  1:  1](RAZ) Read-only hardware-modified SMMU(0)_IRQ_CTRL[PRIQ_IRQEN]. */
        uint32_t gerror_irqen          : 1;  /**< [  0:  0](RO/H) Read-only hardware-modified SMMU(0)_IRQ_CTRL[GERROR_IRQEN]. */
#else /* Word 0 - Little Endian */
        uint32_t gerror_irqen          : 1;  /**< [  0:  0](RO/H) Read-only hardware-modified SMMU(0)_IRQ_CTRL[GERROR_IRQEN]. */
        uint32_t priq_irqen            : 1;  /**< [  1:  1](RAZ) Read-only hardware-modified SMMU(0)_IRQ_CTRL[PRIQ_IRQEN]. */
        uint32_t eventq_irqen          : 1;  /**< [  2:  2](RO/H) Read-only hardware-modified SMMU(0)_IRQ_CTRL[EVENTQ_IRQEN]. */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_irq_ctrlack_s cn; */
};
typedef union cavm_smmux_irq_ctrlack cavm_smmux_irq_ctrlack_t;

static inline uint64_t CAVM_SMMUX_IRQ_CTRLACK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_IRQ_CTRLACK(uint64_t a)
{
    if (a==0)
        return 0x830000000054ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_IRQ_CTRLACK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_IRQ_CTRLACK(a) cavm_smmux_irq_ctrlack_t
#define bustype_CAVM_SMMUX_IRQ_CTRLACK(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_IRQ_CTRLACK(a) "SMMUX_IRQ_CTRLACK"
#define device_bar_CAVM_SMMUX_IRQ_CTRLACK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_IRQ_CTRLACK(a) (a)
#define arguments_CAVM_SMMUX_IRQ_CTRLACK(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_mpamidr
 *
 * MPAM capability identification for Non-secure state Register
 */
union cavm_smmux_mpamidr
{
    uint32_t u;
    struct cavm_smmux_mpamidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t pmg_max               : 8;  /**< [ 23: 16](RO) SMMU(0)_S_MPAMIDR[PMG_MAX] */
        uint32_t partid_max            : 16; /**< [ 15:  0](RO) SMMU(0)_S_MPAMIDR[PARTID_MAX] */
#else /* Word 0 - Little Endian */
        uint32_t partid_max            : 16; /**< [ 15:  0](RO) SMMU(0)_S_MPAMIDR[PARTID_MAX] */
        uint32_t pmg_max               : 8;  /**< [ 23: 16](RO) SMMU(0)_S_MPAMIDR[PMG_MAX] */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_mpamidr_s cn; */
};
typedef union cavm_smmux_mpamidr cavm_smmux_mpamidr_t;

static inline uint64_t CAVM_SMMUX_MPAMIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_MPAMIDR(uint64_t a)
{
    if (a==0)
        return 0x830000000130ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_MPAMIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_MPAMIDR(a) cavm_smmux_mpamidr_t
#define bustype_CAVM_SMMUX_MPAMIDR(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_MPAMIDR(a) "SMMUX_MPAMIDR"
#define device_bar_CAVM_SMMUX_MPAMIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_MPAMIDR(a) (a)
#define arguments_CAVM_SMMUX_MPAMIDR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_pidr0
 *
 * SMMU Peripheral Identification Register 0
 */
union cavm_smmux_pidr0
{
    uint32_t u;
    struct cavm_smmux_pidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t partnum0              : 8;  /**< [  7:  0](RO) Part number \<7:0\>.  Indicates PCC_PIDR_PARTNUM0_E::SMMU3. */
#else /* Word 0 - Little Endian */
        uint32_t partnum0              : 8;  /**< [  7:  0](RO) Part number \<7:0\>.  Indicates PCC_PIDR_PARTNUM0_E::SMMU3. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pidr0_s cn; */
};
typedef union cavm_smmux_pidr0 cavm_smmux_pidr0_t;

static inline uint64_t CAVM_SMMUX_PIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PIDR0(uint64_t a)
{
    if (a==0)
        return 0x830000000fe0ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_PIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PIDR0(a) cavm_smmux_pidr0_t
#define bustype_CAVM_SMMUX_PIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_PIDR0(a) "SMMUX_PIDR0"
#define device_bar_CAVM_SMMUX_PIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PIDR0(a) (a)
#define arguments_CAVM_SMMUX_PIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_pidr1
 *
 * SMMU Peripheral Identification Register 1
 */
union cavm_smmux_pidr1
{
    uint32_t u;
    struct cavm_smmux_pidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t idcode                : 4;  /**< [  7:  4](RO) JEP106 identification code \<3:0\>. Marvell code is 0x4C. */
        uint32_t partnum1              : 4;  /**< [  3:  0](RO) Part number \<11:8\>.  Indicates PCC_PIDR_PARTNUM1_E::COMP. */
#else /* Word 0 - Little Endian */
        uint32_t partnum1              : 4;  /**< [  3:  0](RO) Part number \<11:8\>.  Indicates PCC_PIDR_PARTNUM1_E::COMP. */
        uint32_t idcode                : 4;  /**< [  7:  4](RO) JEP106 identification code \<3:0\>. Marvell code is 0x4C. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pidr1_s cn; */
};
typedef union cavm_smmux_pidr1 cavm_smmux_pidr1_t;

static inline uint64_t CAVM_SMMUX_PIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PIDR1(uint64_t a)
{
    if (a==0)
        return 0x830000000fe4ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_PIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PIDR1(a) cavm_smmux_pidr1_t
#define bustype_CAVM_SMMUX_PIDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_PIDR1(a) "SMMUX_PIDR1"
#define device_bar_CAVM_SMMUX_PIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PIDR1(a) (a)
#define arguments_CAVM_SMMUX_PIDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_pidr2
 *
 * SMMU Peripheral Identification Register 2
 */
union cavm_smmux_pidr2
{
    uint32_t u;
    struct cavm_smmux_pidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revision              : 4;  /**< [  7:  4](RO) SMMU Revision.
                                                                 0x0 = SMMUv1.
                                                                 0x1 = SMMUv2.
                                                                 0x2 = SMMUv3. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) JEDEC assigned. */
        uint32_t idcode                : 3;  /**< [  2:  0](RO) JEP106 identification code \<6:4\>. Marvell code is 0x4C. */
#else /* Word 0 - Little Endian */
        uint32_t idcode                : 3;  /**< [  2:  0](RO) JEP106 identification code \<6:4\>. Marvell code is 0x4C. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) JEDEC assigned. */
        uint32_t revision              : 4;  /**< [  7:  4](RO) SMMU Revision.
                                                                 0x0 = SMMUv1.
                                                                 0x1 = SMMUv2.
                                                                 0x2 = SMMUv3. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pidr2_s cn; */
};
typedef union cavm_smmux_pidr2 cavm_smmux_pidr2_t;

static inline uint64_t CAVM_SMMUX_PIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PIDR2(uint64_t a)
{
    if (a==0)
        return 0x830000000fe8ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_PIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PIDR2(a) cavm_smmux_pidr2_t
#define bustype_CAVM_SMMUX_PIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_PIDR2(a) "SMMUX_PIDR2"
#define device_bar_CAVM_SMMUX_PIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PIDR2(a) (a)
#define arguments_CAVM_SMMUX_PIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_pidr3
 *
 * SMMU Peripheral Identification Register 3
 */
union cavm_smmux_pidr3
{
    uint32_t u;
    struct cavm_smmux_pidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revand                : 4;  /**< [  7:  4](RO) Manufacturer revision number. For CNXXXX always 0x0. */
        uint32_t cust                  : 4;  /**< [  3:  0](RO) Customer modified. 1 = Overall product information should be consulted for
                                                                 product, major and minor pass numbers. */
#else /* Word 0 - Little Endian */
        uint32_t cust                  : 4;  /**< [  3:  0](RO) Customer modified. 1 = Overall product information should be consulted for
                                                                 product, major and minor pass numbers. */
        uint32_t revand                : 4;  /**< [  7:  4](RO) Manufacturer revision number. For CNXXXX always 0x0. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pidr3_s cn; */
};
typedef union cavm_smmux_pidr3 cavm_smmux_pidr3_t;

static inline uint64_t CAVM_SMMUX_PIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PIDR3(uint64_t a)
{
    if (a==0)
        return 0x830000000fecll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_PIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PIDR3(a) cavm_smmux_pidr3_t
#define bustype_CAVM_SMMUX_PIDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_PIDR3(a) "SMMUX_PIDR3"
#define device_bar_CAVM_SMMUX_PIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PIDR3(a) (a)
#define arguments_CAVM_SMMUX_PIDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_pidr4
 *
 * SMMU Peripheral Identification Register 4
 */
union cavm_smmux_pidr4
{
    uint32_t u;
    struct cavm_smmux_pidr4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pagecnt               : 4;  /**< [  7:  4](RO) Number of log-2 4 KB blocks occupied. */
        uint32_t jepcont               : 4;  /**< [  3:  0](RO) JEP106 continuation code, least significant nibble. Indicates Cavium. */
#else /* Word 0 - Little Endian */
        uint32_t jepcont               : 4;  /**< [  3:  0](RO) JEP106 continuation code, least significant nibble. Indicates Cavium. */
        uint32_t pagecnt               : 4;  /**< [  7:  4](RO) Number of log-2 4 KB blocks occupied. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pidr4_s cn; */
};
typedef union cavm_smmux_pidr4 cavm_smmux_pidr4_t;

static inline uint64_t CAVM_SMMUX_PIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PIDR4(uint64_t a)
{
    if (a==0)
        return 0x830000000fd0ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_PIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PIDR4(a) cavm_smmux_pidr4_t
#define bustype_CAVM_SMMUX_PIDR4(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_PIDR4(a) "SMMUX_PIDR4"
#define device_bar_CAVM_SMMUX_PIDR4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PIDR4(a) (a)
#define arguments_CAVM_SMMUX_PIDR4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_pidr5
 *
 * SMMU Peripheral Identification Register 5
 */
union cavm_smmux_pidr5
{
    uint32_t u;
    struct cavm_smmux_pidr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pidr5_s cn; */
};
typedef union cavm_smmux_pidr5 cavm_smmux_pidr5_t;

static inline uint64_t CAVM_SMMUX_PIDR5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PIDR5(uint64_t a)
{
    if (a==0)
        return 0x830000000fd4ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_PIDR5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PIDR5(a) cavm_smmux_pidr5_t
#define bustype_CAVM_SMMUX_PIDR5(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_PIDR5(a) "SMMUX_PIDR5"
#define device_bar_CAVM_SMMUX_PIDR5(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PIDR5(a) (a)
#define arguments_CAVM_SMMUX_PIDR5(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_pidr6
 *
 * SMMU Peripheral Identification Register 6
 */
union cavm_smmux_pidr6
{
    uint32_t u;
    struct cavm_smmux_pidr6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pidr6_s cn; */
};
typedef union cavm_smmux_pidr6 cavm_smmux_pidr6_t;

static inline uint64_t CAVM_SMMUX_PIDR6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PIDR6(uint64_t a)
{
    if (a==0)
        return 0x830000000fd8ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_PIDR6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PIDR6(a) cavm_smmux_pidr6_t
#define bustype_CAVM_SMMUX_PIDR6(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_PIDR6(a) "SMMUX_PIDR6"
#define device_bar_CAVM_SMMUX_PIDR6(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PIDR6(a) (a)
#define arguments_CAVM_SMMUX_PIDR6(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_pidr7
 *
 * SMMU Peripheral Identification Register 7
 */
union cavm_smmux_pidr7
{
    uint32_t u;
    struct cavm_smmux_pidr7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pidr7_s cn; */
};
typedef union cavm_smmux_pidr7 cavm_smmux_pidr7_t;

static inline uint64_t CAVM_SMMUX_PIDR7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PIDR7(uint64_t a)
{
    if (a==0)
        return 0x830000000fdcll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_PIDR7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PIDR7(a) cavm_smmux_pidr7_t
#define bustype_CAVM_SMMUX_PIDR7(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_PIDR7(a) "SMMUX_PIDR7"
#define device_bar_CAVM_SMMUX_PIDR7(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PIDR7(a) (a)
#define arguments_CAVM_SMMUX_PIDR7(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_pmcg#_aidr
 *
 * SMMU PMCG Architecture Identification Register
 */
union cavm_smmux_pmcgx_aidr
{
    uint32_t u;
    struct cavm_smmux_pmcgx_aidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t archmajorrev          : 4;  /**< [  7:  4](RO) Architecture major revision. */
        uint32_t archminorrev          : 4;  /**< [  3:  0](RO) Architecture minor revision. */
#else /* Word 0 - Little Endian */
        uint32_t archminorrev          : 4;  /**< [  3:  0](RO) Architecture minor revision. */
        uint32_t archmajorrev          : 4;  /**< [  7:  4](RO) Architecture major revision. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_aidr_s cn; */
};
typedef union cavm_smmux_pmcgx_aidr cavm_smmux_pmcgx_aidr_t;

static inline uint64_t CAVM_SMMUX_PMCGX_AIDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_AIDR(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=3))
        return 0x830000100e70ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3);
    __cavm_csr_fatal("SMMUX_PMCGX_AIDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_AIDR(a,b) cavm_smmux_pmcgx_aidr_t
#define bustype_CAVM_SMMUX_PMCGX_AIDR(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_PMCGX_AIDR(a,b) "SMMUX_PMCGX_AIDR"
#define device_bar_CAVM_SMMUX_PMCGX_AIDR(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_AIDR(a,b) (a)
#define arguments_CAVM_SMMUX_PMCGX_AIDR(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) smmu#_pmcg#_capr
 *
 * SMMU PMCG Counter Shadow Value Register
 */
union cavm_smmux_pmcgx_capr
{
    uint32_t u;
    struct cavm_smmux_pmcgx_capr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t capture               : 1;  /**< [  0:  0](WO) When counter capture is supported (SMMU_PMCG_CFGR.CAPTURE == 1), a write of 1 to this
                                                                 bit triggers a capture of all SMMU_PMCG_EVCNTRn values within the PMCG into their
                                                                 respective SMMU_PMCG_SVRn shadow register.

                                                                 When SMMU_PMCG_CFGR.CAPTURE == 0, this field is RES0 . */
#else /* Word 0 - Little Endian */
        uint32_t capture               : 1;  /**< [  0:  0](WO) When counter capture is supported (SMMU_PMCG_CFGR.CAPTURE == 1), a write of 1 to this
                                                                 bit triggers a capture of all SMMU_PMCG_EVCNTRn values within the PMCG into their
                                                                 respective SMMU_PMCG_SVRn shadow register.

                                                                 When SMMU_PMCG_CFGR.CAPTURE == 0, this field is RES0 . */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_capr_s cn; */
};
typedef union cavm_smmux_pmcgx_capr cavm_smmux_pmcgx_capr_t;

static inline uint64_t CAVM_SMMUX_PMCGX_CAPR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_CAPR(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=3))
        return 0x830000100d88ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3);
    __cavm_csr_fatal("SMMUX_PMCGX_CAPR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_CAPR(a,b) cavm_smmux_pmcgx_capr_t
#define bustype_CAVM_SMMUX_PMCGX_CAPR(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_PMCGX_CAPR(a,b) "SMMUX_PMCGX_CAPR"
#define device_bar_CAVM_SMMUX_PMCGX_CAPR(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_CAPR(a,b) (a)
#define arguments_CAVM_SMMUX_PMCGX_CAPR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) smmu#_pmcg#_ceid0
 *
 * SMMU PMCG Common Event ID bitmap, Lower Register
 */
union cavm_smmux_pmcgx_ceid0
{
    uint64_t u;
    struct cavm_smmux_pmcgx_ceid0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t bitmap                : 64; /**< [ 63:  0](RO) 128-bit bitmap comprised of two consecutive 64-bit registers. Bit (N & 63) of the 64-bit
                                                                 word at offset 8*(N/64)
                                                                 relates to event number N. For each bit:
                                                                 0 = Event N cannot be counted by counters in this group.
                                                                 1 = Event N can be counted by counters in this group. */
#else /* Word 0 - Little Endian */
        uint64_t bitmap                : 64; /**< [ 63:  0](RO) 128-bit bitmap comprised of two consecutive 64-bit registers. Bit (N & 63) of the 64-bit
                                                                 word at offset 8*(N/64)
                                                                 relates to event number N. For each bit:
                                                                 0 = Event N cannot be counted by counters in this group.
                                                                 1 = Event N can be counted by counters in this group. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_ceid0_s cn; */
};
typedef union cavm_smmux_pmcgx_ceid0 cavm_smmux_pmcgx_ceid0_t;

static inline uint64_t CAVM_SMMUX_PMCGX_CEID0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_CEID0(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=3))
        return 0x830000100e20ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3);
    __cavm_csr_fatal("SMMUX_PMCGX_CEID0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_CEID0(a,b) cavm_smmux_pmcgx_ceid0_t
#define bustype_CAVM_SMMUX_PMCGX_CEID0(a,b) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_PMCGX_CEID0(a,b) "SMMUX_PMCGX_CEID0"
#define device_bar_CAVM_SMMUX_PMCGX_CEID0(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_CEID0(a,b) (a)
#define arguments_CAVM_SMMUX_PMCGX_CEID0(a,b) (a),(b),-1,-1

/**
 * Register (NCB) smmu#_pmcg#_ceid1
 *
 * SMMU PMCG Common Event ID bitmap, Upper Register
 */
union cavm_smmux_pmcgx_ceid1
{
    uint64_t u;
    struct cavm_smmux_pmcgx_ceid1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t bitmap                : 64; /**< [ 63:  0](RO) 128-bit bitmap comprised of two consecutive 64-bit registers. Bit (N & 63) of the 64-bit
                                                                 word at offset 8*(N/64)
                                                                 relates to event number N. For each bit,
                                                                 0 = Event N cannot be counted by counters in this group.
                                                                 1 = Event N can be counted by counters in this group. */
#else /* Word 0 - Little Endian */
        uint64_t bitmap                : 64; /**< [ 63:  0](RO) 128-bit bitmap comprised of two consecutive 64-bit registers. Bit (N & 63) of the 64-bit
                                                                 word at offset 8*(N/64)
                                                                 relates to event number N. For each bit,
                                                                 0 = Event N cannot be counted by counters in this group.
                                                                 1 = Event N can be counted by counters in this group. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_ceid1_s cn; */
};
typedef union cavm_smmux_pmcgx_ceid1 cavm_smmux_pmcgx_ceid1_t;

static inline uint64_t CAVM_SMMUX_PMCGX_CEID1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_CEID1(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=3))
        return 0x830000100e28ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3);
    __cavm_csr_fatal("SMMUX_PMCGX_CEID1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_CEID1(a,b) cavm_smmux_pmcgx_ceid1_t
#define bustype_CAVM_SMMUX_PMCGX_CEID1(a,b) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_PMCGX_CEID1(a,b) "SMMUX_PMCGX_CEID1"
#define device_bar_CAVM_SMMUX_PMCGX_CEID1(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_CEID1(a,b) (a)
#define arguments_CAVM_SMMUX_PMCGX_CEID1(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) smmu#_pmcg#_cfgr
 *
 * SMMU PMCG Configuration Register
 */
union cavm_smmux_pmcgx_cfgr
{
    uint32_t u;
    struct cavm_smmux_pmcgx_cfgr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t mpam                  : 1;  /**< [ 24: 24](RO) Memory Partitioning And Monitoring (MPAM) support
                                                                 0 = MPAM is not supported by the PMCG.
                                                                 1 = MPAM is supported by the PMCG. */
        uint32_t sid_filter_type       : 1;  /**< [ 23: 23](RO) 0 = Separate StreamID filtering is supported for each counter in the PMCG.
                                                                 1 = The StreamID filter configured by SMMU()_PMCG()_SMR(0) and
                                                                 SMMU()_PMCG()_EVTYPER(0)[FILTER_SID_SPAN] applies to all counter in the PMCG. */
        uint32_t capture               : 1;  /**< [ 22: 22](RAZ) Capture of counter values.
                                                                 0 = Capture of counter values into SVRn registers not supported (SMMU()_PMCG()_SVR() and
                                                                 SMMU()_PMCG()_CAPR are reserved.)
                                                                 1 = Capture of counter values supported. */
        uint32_t msi                   : 1;  /**< [ 21: 21](RO) Counter group supports message signaled interrupts.
                                                                 0 = Group does not support MSI.
                                                                 1 = Group can send MSI. */
        uint32_t reloc_ctrs            : 1;  /**< [ 20: 20](RO) If set, page 1 is present and the following registers are relocated to the equivalent
                                                                 offset
                                                                 on page 1 (their page 0 locations become reserved):
                                                                   * SMMU()_PMCG()_EVCNTR().
                                                                   * SMMU()_PMCG()_SVR().
                                                                   * SMMU()_PMCG()_OVSCLR0.
                                                                   * SMMU()_PMCG()_OVSSET0.
                                                                   * SMMU()_PMCG()_CAPR. */
        uint32_t reserved_14_19        : 6;
        uint32_t size                  : 6;  /**< [ 13:  8](RO) Size of PMCG counters in bits, minus one. Valid values are:
                                                                    31 = 32-bit counters.
                                                                    39 = 40-bit counters.
                                                                    43 = 44-bit counters.
                                                                    47 = 48-bit counters.
                                                                    63 = 64-bit counters.

                                                                 Other values are reserved. */
        uint32_t reserved_6_7          : 2;
        uint32_t nctr                  : 6;  /**< [  5:  0](RO) Number of counters in group minus 1. */
#else /* Word 0 - Little Endian */
        uint32_t nctr                  : 6;  /**< [  5:  0](RO) Number of counters in group minus 1. */
        uint32_t reserved_6_7          : 2;
        uint32_t size                  : 6;  /**< [ 13:  8](RO) Size of PMCG counters in bits, minus one. Valid values are:
                                                                    31 = 32-bit counters.
                                                                    39 = 40-bit counters.
                                                                    43 = 44-bit counters.
                                                                    47 = 48-bit counters.
                                                                    63 = 64-bit counters.

                                                                 Other values are reserved. */
        uint32_t reserved_14_19        : 6;
        uint32_t reloc_ctrs            : 1;  /**< [ 20: 20](RO) If set, page 1 is present and the following registers are relocated to the equivalent
                                                                 offset
                                                                 on page 1 (their page 0 locations become reserved):
                                                                   * SMMU()_PMCG()_EVCNTR().
                                                                   * SMMU()_PMCG()_SVR().
                                                                   * SMMU()_PMCG()_OVSCLR0.
                                                                   * SMMU()_PMCG()_OVSSET0.
                                                                   * SMMU()_PMCG()_CAPR. */
        uint32_t msi                   : 1;  /**< [ 21: 21](RO) Counter group supports message signaled interrupts.
                                                                 0 = Group does not support MSI.
                                                                 1 = Group can send MSI. */
        uint32_t capture               : 1;  /**< [ 22: 22](RAZ) Capture of counter values.
                                                                 0 = Capture of counter values into SVRn registers not supported (SMMU()_PMCG()_SVR() and
                                                                 SMMU()_PMCG()_CAPR are reserved.)
                                                                 1 = Capture of counter values supported. */
        uint32_t sid_filter_type       : 1;  /**< [ 23: 23](RO) 0 = Separate StreamID filtering is supported for each counter in the PMCG.
                                                                 1 = The StreamID filter configured by SMMU()_PMCG()_SMR(0) and
                                                                 SMMU()_PMCG()_EVTYPER(0)[FILTER_SID_SPAN] applies to all counter in the PMCG. */
        uint32_t mpam                  : 1;  /**< [ 24: 24](RO) Memory Partitioning And Monitoring (MPAM) support
                                                                 0 = MPAM is not supported by the PMCG.
                                                                 1 = MPAM is supported by the PMCG. */
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_cfgr_s cn; */
};
typedef union cavm_smmux_pmcgx_cfgr cavm_smmux_pmcgx_cfgr_t;

static inline uint64_t CAVM_SMMUX_PMCGX_CFGR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_CFGR(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=3))
        return 0x830000100e00ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3);
    __cavm_csr_fatal("SMMUX_PMCGX_CFGR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_CFGR(a,b) cavm_smmux_pmcgx_cfgr_t
#define bustype_CAVM_SMMUX_PMCGX_CFGR(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_PMCGX_CFGR(a,b) "SMMUX_PMCGX_CFGR"
#define device_bar_CAVM_SMMUX_PMCGX_CFGR(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_CFGR(a,b) (a)
#define arguments_CAVM_SMMUX_PMCGX_CFGR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) smmu#_pmcg#_cntenclr0
 *
 * SMMU PMCG Counter Enable Clear Register
 */
union cavm_smmux_pmcgx_cntenclr0
{
    uint64_t u;
    struct cavm_smmux_pmcgx_cntenclr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t cnten                 : 4;  /**< [  3:  0](R/W1C) Counter enable. */
#else /* Word 0 - Little Endian */
        uint64_t cnten                 : 4;  /**< [  3:  0](R/W1C) Counter enable. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_cntenclr0_s cn; */
};
typedef union cavm_smmux_pmcgx_cntenclr0 cavm_smmux_pmcgx_cntenclr0_t;

static inline uint64_t CAVM_SMMUX_PMCGX_CNTENCLR0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_CNTENCLR0(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=3))
        return 0x830000100c20ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3);
    __cavm_csr_fatal("SMMUX_PMCGX_CNTENCLR0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_CNTENCLR0(a,b) cavm_smmux_pmcgx_cntenclr0_t
#define bustype_CAVM_SMMUX_PMCGX_CNTENCLR0(a,b) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_PMCGX_CNTENCLR0(a,b) "SMMUX_PMCGX_CNTENCLR0"
#define device_bar_CAVM_SMMUX_PMCGX_CNTENCLR0(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_CNTENCLR0(a,b) (a)
#define arguments_CAVM_SMMUX_PMCGX_CNTENCLR0(a,b) (a),(b),-1,-1

/**
 * Register (NCB) smmu#_pmcg#_cntenset0
 *
 * SMMU PMCG Counter Enable Set Register
 */
union cavm_smmux_pmcgx_cntenset0
{
    uint64_t u;
    struct cavm_smmux_pmcgx_cntenset0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t cnten                 : 4;  /**< [  3:  0](R/W1S) Counter enable. */
#else /* Word 0 - Little Endian */
        uint64_t cnten                 : 4;  /**< [  3:  0](R/W1S) Counter enable. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_cntenset0_s cn; */
};
typedef union cavm_smmux_pmcgx_cntenset0 cavm_smmux_pmcgx_cntenset0_t;

static inline uint64_t CAVM_SMMUX_PMCGX_CNTENSET0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_CNTENSET0(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=3))
        return 0x830000100c00ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3);
    __cavm_csr_fatal("SMMUX_PMCGX_CNTENSET0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_CNTENSET0(a,b) cavm_smmux_pmcgx_cntenset0_t
#define bustype_CAVM_SMMUX_PMCGX_CNTENSET0(a,b) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_PMCGX_CNTENSET0(a,b) "SMMUX_PMCGX_CNTENSET0"
#define device_bar_CAVM_SMMUX_PMCGX_CNTENSET0(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_CNTENSET0(a,b) (a)
#define arguments_CAVM_SMMUX_PMCGX_CNTENSET0(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) smmu#_pmcg#_cr
 *
 * SMMU PMCG Global Counter Enable Register
 */
union cavm_smmux_pmcgx_cr
{
    uint32_t u;
    struct cavm_smmux_pmcgx_cr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t enable                : 1;  /**< [  0:  0](R/W) Global counter enable. When clear, no events are counted and values in
                                                                 SMMU()_PMCG()_EVCNTR() do not change. This bit takes precedence over the
                                                                 SMMU()_PMCG()_CNTENSET0[CNTEN] bits. */
#else /* Word 0 - Little Endian */
        uint32_t enable                : 1;  /**< [  0:  0](R/W) Global counter enable. When clear, no events are counted and values in
                                                                 SMMU()_PMCG()_EVCNTR() do not change. This bit takes precedence over the
                                                                 SMMU()_PMCG()_CNTENSET0[CNTEN] bits. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_cr_s cn; */
};
typedef union cavm_smmux_pmcgx_cr cavm_smmux_pmcgx_cr_t;

static inline uint64_t CAVM_SMMUX_PMCGX_CR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_CR(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=3))
        return 0x830000100e04ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3);
    __cavm_csr_fatal("SMMUX_PMCGX_CR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_CR(a,b) cavm_smmux_pmcgx_cr_t
#define bustype_CAVM_SMMUX_PMCGX_CR(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_PMCGX_CR(a,b) "SMMUX_PMCGX_CR"
#define device_bar_CAVM_SMMUX_PMCGX_CR(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_CR(a,b) (a)
#define arguments_CAVM_SMMUX_PMCGX_CR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) smmu#_pmcg#_evcntr#
 *
 * SMMU PMCG Event Counter Register
 */
union cavm_smmux_pmcgx_evcntrx
{
    uint64_t u;
    struct cavm_smmux_pmcgx_evcntrx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Counter value. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Counter value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_evcntrx_s cn; */
};
typedef union cavm_smmux_pmcgx_evcntrx cavm_smmux_pmcgx_evcntrx_t;

static inline uint64_t CAVM_SMMUX_PMCGX_EVCNTRX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_EVCNTRX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a==0) && (b<=3) && (c<=3))
        return 0x830000110000ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3) + 8ll * ((c) & 0x3);
    __cavm_csr_fatal("SMMUX_PMCGX_EVCNTRX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_EVCNTRX(a,b,c) cavm_smmux_pmcgx_evcntrx_t
#define bustype_CAVM_SMMUX_PMCGX_EVCNTRX(a,b,c) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_PMCGX_EVCNTRX(a,b,c) "SMMUX_PMCGX_EVCNTRX"
#define device_bar_CAVM_SMMUX_PMCGX_EVCNTRX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_EVCNTRX(a,b,c) (a)
#define arguments_CAVM_SMMUX_PMCGX_EVCNTRX(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB32b) smmu#_pmcg#_evtyper#
 *
 * SMMU PMCG Event Type Configuration Register
 */
union cavm_smmux_pmcgx_evtyperx
{
    uint32_t u;
    struct cavm_smmux_pmcgx_evtyperx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ovfcap                : 1;  /**< [ 31: 31](R/W) 0 = An overflow of counter n does not trigger a capture of all counters.
                                                                 1 = An overflow of counter n triggers a capture of all counters in the same way as by
                                                                     SMMU_PMCG_CAPR.CAPTURE.

                                                                 When SMMU_PMCG_CFGR.CAPTURE == 0, this bit is RES0. */
        uint32_t filter_sec_sid        : 1;  /**< [ 30: 30](R/W) 0 = Count events originating from nonsecure StreamIDs.
                                                                 1 = Count events originating from secure StreamIDs.

                                                                 This bit is RES0 if the PMCG does not implement security support. Otherwise,
                                                                 this bit is effectively 0 if security support is implemented but secure
                                                                 observation is disabled (SMMU()_PMCG()_SCR[SO]=0).

                                                                 For event types that can be filtered on StreamID, this bit causes the StreamID
                                                                 match determined by [FILTER_SID_SPAN] and SMMU()_PMCG()_SMR()[STREAMID] to match
                                                                 secure or nonsecure StreamIDs (as determined by SMMU SSD).

                                                                 Where the StreamID match span encodes `ALL', this bit selects counting of events
                                                                 associated with all nonsecure StreamIDs or all secure StreamIDs. */
        uint32_t filter_sid_span       : 1;  /**< [ 29: 29](R/W) 0 = SMMU()_PMCG()_SMR()[STREAMID] filters event on an exact StreamID match (if the
                                                                     event type can be filtered on StreamID).

                                                                 1 = SMMU()_PMCG()_SMR()[STREAMID] encodes a `match span' of StreamID values.

                                                                 The span can encode `ALL', equivalent to disabling filtering on StreamID. */
        uint32_t reserved_16_28        : 13;
        uint32_t evnt                  : 16; /**< [ 15:  0](R/W) Event type that causes this counter to increment. */
#else /* Word 0 - Little Endian */
        uint32_t evnt                  : 16; /**< [ 15:  0](R/W) Event type that causes this counter to increment. */
        uint32_t reserved_16_28        : 13;
        uint32_t filter_sid_span       : 1;  /**< [ 29: 29](R/W) 0 = SMMU()_PMCG()_SMR()[STREAMID] filters event on an exact StreamID match (if the
                                                                     event type can be filtered on StreamID).

                                                                 1 = SMMU()_PMCG()_SMR()[STREAMID] encodes a `match span' of StreamID values.

                                                                 The span can encode `ALL', equivalent to disabling filtering on StreamID. */
        uint32_t filter_sec_sid        : 1;  /**< [ 30: 30](R/W) 0 = Count events originating from nonsecure StreamIDs.
                                                                 1 = Count events originating from secure StreamIDs.

                                                                 This bit is RES0 if the PMCG does not implement security support. Otherwise,
                                                                 this bit is effectively 0 if security support is implemented but secure
                                                                 observation is disabled (SMMU()_PMCG()_SCR[SO]=0).

                                                                 For event types that can be filtered on StreamID, this bit causes the StreamID
                                                                 match determined by [FILTER_SID_SPAN] and SMMU()_PMCG()_SMR()[STREAMID] to match
                                                                 secure or nonsecure StreamIDs (as determined by SMMU SSD).

                                                                 Where the StreamID match span encodes `ALL', this bit selects counting of events
                                                                 associated with all nonsecure StreamIDs or all secure StreamIDs. */
        uint32_t ovfcap                : 1;  /**< [ 31: 31](R/W) 0 = An overflow of counter n does not trigger a capture of all counters.
                                                                 1 = An overflow of counter n triggers a capture of all counters in the same way as by
                                                                     SMMU_PMCG_CAPR.CAPTURE.

                                                                 When SMMU_PMCG_CFGR.CAPTURE == 0, this bit is RES0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_evtyperx_s cn; */
};
typedef union cavm_smmux_pmcgx_evtyperx cavm_smmux_pmcgx_evtyperx_t;

static inline uint64_t CAVM_SMMUX_PMCGX_EVTYPERX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_EVTYPERX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a==0) && (b<=3) && (c<=3))
        return 0x830000100400ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3) + 4ll * ((c) & 0x3);
    __cavm_csr_fatal("SMMUX_PMCGX_EVTYPERX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_EVTYPERX(a,b,c) cavm_smmux_pmcgx_evtyperx_t
#define bustype_CAVM_SMMUX_PMCGX_EVTYPERX(a,b,c) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_PMCGX_EVTYPERX(a,b,c) "SMMUX_PMCGX_EVTYPERX"
#define device_bar_CAVM_SMMUX_PMCGX_EVTYPERX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_EVTYPERX(a,b,c) (a)
#define arguments_CAVM_SMMUX_PMCGX_EVTYPERX(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) smmu#_pmcg#_intenclr0
 *
 * SMMU PMCG Interrupt Enable Clear Register
 */
union cavm_smmux_pmcgx_intenclr0
{
    uint64_t u;
    struct cavm_smmux_pmcgx_intenclr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t inten                 : 4;  /**< [  3:  0](R/W1C) Overflow status. */
#else /* Word 0 - Little Endian */
        uint64_t inten                 : 4;  /**< [  3:  0](R/W1C) Overflow status. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_intenclr0_s cn; */
};
typedef union cavm_smmux_pmcgx_intenclr0 cavm_smmux_pmcgx_intenclr0_t;

static inline uint64_t CAVM_SMMUX_PMCGX_INTENCLR0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_INTENCLR0(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=3))
        return 0x830000100c60ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3);
    __cavm_csr_fatal("SMMUX_PMCGX_INTENCLR0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_INTENCLR0(a,b) cavm_smmux_pmcgx_intenclr0_t
#define bustype_CAVM_SMMUX_PMCGX_INTENCLR0(a,b) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_PMCGX_INTENCLR0(a,b) "SMMUX_PMCGX_INTENCLR0"
#define device_bar_CAVM_SMMUX_PMCGX_INTENCLR0(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_INTENCLR0(a,b) (a)
#define arguments_CAVM_SMMUX_PMCGX_INTENCLR0(a,b) (a),(b),-1,-1

/**
 * Register (NCB) smmu#_pmcg#_intenset0
 *
 * SMMU PMCG Interrupt Enable Set Register
 */
union cavm_smmux_pmcgx_intenset0
{
    uint64_t u;
    struct cavm_smmux_pmcgx_intenset0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t inten                 : 4;  /**< [  3:  0](R/W1S) Counter enable. */
#else /* Word 0 - Little Endian */
        uint64_t inten                 : 4;  /**< [  3:  0](R/W1S) Counter enable. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_intenset0_s cn; */
};
typedef union cavm_smmux_pmcgx_intenset0 cavm_smmux_pmcgx_intenset0_t;

static inline uint64_t CAVM_SMMUX_PMCGX_INTENSET0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_INTENSET0(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=3))
        return 0x830000100c40ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3);
    __cavm_csr_fatal("SMMUX_PMCGX_INTENSET0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_INTENSET0(a,b) cavm_smmux_pmcgx_intenset0_t
#define bustype_CAVM_SMMUX_PMCGX_INTENSET0(a,b) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_PMCGX_INTENSET0(a,b) "SMMUX_PMCGX_INTENSET0"
#define device_bar_CAVM_SMMUX_PMCGX_INTENSET0(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_INTENSET0(a,b) (a)
#define arguments_CAVM_SMMUX_PMCGX_INTENSET0(a,b) (a),(b),-1,-1

/**
 * Register (NCB) smmu#_pmcg#_irq_cfg0
 *
 * SMMU PMCG MSI Configuration Register
 */
union cavm_smmux_pmcgx_irq_cfg0
{
    uint64_t u;
    struct cavm_smmux_pmcgx_irq_cfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t addr                  : 50; /**< [ 51:  2](R/W) IOVA of MSI target address.
                                                                 If [ADDR]=0x0, no MSI is sent. This allows a wired IRQ, if implemented, to be used instead
                                                                 of an MSI.  Address bits above and below this field are implied as zero.

                                                                 Note unlike most CNXXXX MSI-X address registers, this is a physical address, not
                                                                 a virtual address. The address is always secure world.

                                                                 The interrupt message will use the SMMU's stream ID plus the PMCG number (0..3). */
        uint64_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_1          : 2;
        uint64_t addr                  : 50; /**< [ 51:  2](R/W) IOVA of MSI target address.
                                                                 If [ADDR]=0x0, no MSI is sent. This allows a wired IRQ, if implemented, to be used instead
                                                                 of an MSI.  Address bits above and below this field are implied as zero.

                                                                 Note unlike most CNXXXX MSI-X address registers, this is a physical address, not
                                                                 a virtual address. The address is always secure world.

                                                                 The interrupt message will use the SMMU's stream ID plus the PMCG number (0..3). */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_irq_cfg0_s cn; */
};
typedef union cavm_smmux_pmcgx_irq_cfg0 cavm_smmux_pmcgx_irq_cfg0_t;

static inline uint64_t CAVM_SMMUX_PMCGX_IRQ_CFG0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_IRQ_CFG0(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=3))
        return 0x830000100e58ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3);
    __cavm_csr_fatal("SMMUX_PMCGX_IRQ_CFG0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_IRQ_CFG0(a,b) cavm_smmux_pmcgx_irq_cfg0_t
#define bustype_CAVM_SMMUX_PMCGX_IRQ_CFG0(a,b) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_PMCGX_IRQ_CFG0(a,b) "SMMUX_PMCGX_IRQ_CFG0"
#define device_bar_CAVM_SMMUX_PMCGX_IRQ_CFG0(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_IRQ_CFG0(a,b) (a)
#define arguments_CAVM_SMMUX_PMCGX_IRQ_CFG0(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) smmu#_pmcg#_irq_cfg1
 *
 * SMMU PMCG MSI Configuration Register
 */
union cavm_smmux_pmcgx_irq_cfg1
{
    uint32_t u;
    struct cavm_smmux_pmcgx_irq_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) MSIX data payload. */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](R/W) MSIX data payload. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_irq_cfg1_s cn; */
};
typedef union cavm_smmux_pmcgx_irq_cfg1 cavm_smmux_pmcgx_irq_cfg1_t;

static inline uint64_t CAVM_SMMUX_PMCGX_IRQ_CFG1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_IRQ_CFG1(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=3))
        return 0x830000100e60ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3);
    __cavm_csr_fatal("SMMUX_PMCGX_IRQ_CFG1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_IRQ_CFG1(a,b) cavm_smmux_pmcgx_irq_cfg1_t
#define bustype_CAVM_SMMUX_PMCGX_IRQ_CFG1(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_PMCGX_IRQ_CFG1(a,b) "SMMUX_PMCGX_IRQ_CFG1"
#define device_bar_CAVM_SMMUX_PMCGX_IRQ_CFG1(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_IRQ_CFG1(a,b) (a)
#define arguments_CAVM_SMMUX_PMCGX_IRQ_CFG1(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) smmu#_pmcg#_irq_cfg2
 *
 * SMMU PMCG MSI Configuration Register
 */
union cavm_smmux_pmcgx_irq_cfg2
{
    uint32_t u;
    struct cavm_smmux_pmcgx_irq_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t sh                    : 2;  /**< [  5:  4](R/W) Shareability.
                                                                 0x0 = NSH.
                                                                 0x1 = Reserved (behaves as 0x0).
                                                                 0x2 = OSH.
                                                                 0x3 = ISH.

                                                                 When [MEMATTR] encodes a device memory type, the value of this field is ignored
                                                                 and the shareability is effectively OSH. */
        uint32_t memattr               : 4;  /**< [  3:  0](R/W) MemAttr. Memory type, encoded the same as SMMU_STE_S[MEMATTR]. */
#else /* Word 0 - Little Endian */
        uint32_t memattr               : 4;  /**< [  3:  0](R/W) MemAttr. Memory type, encoded the same as SMMU_STE_S[MEMATTR]. */
        uint32_t sh                    : 2;  /**< [  5:  4](R/W) Shareability.
                                                                 0x0 = NSH.
                                                                 0x1 = Reserved (behaves as 0x0).
                                                                 0x2 = OSH.
                                                                 0x3 = ISH.

                                                                 When [MEMATTR] encodes a device memory type, the value of this field is ignored
                                                                 and the shareability is effectively OSH. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_irq_cfg2_s cn; */
};
typedef union cavm_smmux_pmcgx_irq_cfg2 cavm_smmux_pmcgx_irq_cfg2_t;

static inline uint64_t CAVM_SMMUX_PMCGX_IRQ_CFG2(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_IRQ_CFG2(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=3))
        return 0x830000100e64ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3);
    __cavm_csr_fatal("SMMUX_PMCGX_IRQ_CFG2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_IRQ_CFG2(a,b) cavm_smmux_pmcgx_irq_cfg2_t
#define bustype_CAVM_SMMUX_PMCGX_IRQ_CFG2(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_PMCGX_IRQ_CFG2(a,b) "SMMUX_PMCGX_IRQ_CFG2"
#define device_bar_CAVM_SMMUX_PMCGX_IRQ_CFG2(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_IRQ_CFG2(a,b) (a)
#define arguments_CAVM_SMMUX_PMCGX_IRQ_CFG2(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) smmu#_pmcg#_irq_ctrl
 *
 * SMMU PMCG IRQ Enable Register
 */
union cavm_smmux_pmcgx_irq_ctrl
{
    uint32_t u;
    struct cavm_smmux_pmcgx_irq_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t irqen                 : 1;  /**< [  0:  0](R/W) Main IRQ enable for a per-counter group interrupt source. This enable
                                                                 allows/inhibits both edge-triggered wired outputs (if implemented) and MSI
                                                                 writes (if supported by the counter group). When [IRQEN] is clear, no interrupt
                                                                 is triggered regardless of individual per-counter overflow INTEN flags
                                                                 (i.e. they are overridden). [IRQEN] also controls overall interrupt
                                                                 completion/MSI configuration changes as described below. */
#else /* Word 0 - Little Endian */
        uint32_t irqen                 : 1;  /**< [  0:  0](R/W) Main IRQ enable for a per-counter group interrupt source. This enable
                                                                 allows/inhibits both edge-triggered wired outputs (if implemented) and MSI
                                                                 writes (if supported by the counter group). When [IRQEN] is clear, no interrupt
                                                                 is triggered regardless of individual per-counter overflow INTEN flags
                                                                 (i.e. they are overridden). [IRQEN] also controls overall interrupt
                                                                 completion/MSI configuration changes as described below. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_irq_ctrl_s cn; */
};
typedef union cavm_smmux_pmcgx_irq_ctrl cavm_smmux_pmcgx_irq_ctrl_t;

static inline uint64_t CAVM_SMMUX_PMCGX_IRQ_CTRL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_IRQ_CTRL(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=3))
        return 0x830000100e50ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3);
    __cavm_csr_fatal("SMMUX_PMCGX_IRQ_CTRL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_IRQ_CTRL(a,b) cavm_smmux_pmcgx_irq_ctrl_t
#define bustype_CAVM_SMMUX_PMCGX_IRQ_CTRL(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_PMCGX_IRQ_CTRL(a,b) "SMMUX_PMCGX_IRQ_CTRL"
#define device_bar_CAVM_SMMUX_PMCGX_IRQ_CTRL(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_IRQ_CTRL(a,b) (a)
#define arguments_CAVM_SMMUX_PMCGX_IRQ_CTRL(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) smmu#_pmcg#_irq_ctrlack
 *
 * SMMU PMCG IRQ Enable Ack Register
 * This register is a read-only copy of SMMU()_PMCG()_IRQ_CTRL.
 */
union cavm_smmux_pmcgx_irq_ctrlack
{
    uint32_t u;
    struct cavm_smmux_pmcgx_irq_ctrlack_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t irqen                 : 1;  /**< [  0:  0](RO/H) Read-only hardware-modified SMMU(0)_PMCG(0..3)_IRQ_CTRL[IRQEN]. */
#else /* Word 0 - Little Endian */
        uint32_t irqen                 : 1;  /**< [  0:  0](RO/H) Read-only hardware-modified SMMU(0)_PMCG(0..3)_IRQ_CTRL[IRQEN]. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_irq_ctrlack_s cn; */
};
typedef union cavm_smmux_pmcgx_irq_ctrlack cavm_smmux_pmcgx_irq_ctrlack_t;

static inline uint64_t CAVM_SMMUX_PMCGX_IRQ_CTRLACK(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_IRQ_CTRLACK(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=3))
        return 0x830000100e54ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3);
    __cavm_csr_fatal("SMMUX_PMCGX_IRQ_CTRLACK", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_IRQ_CTRLACK(a,b) cavm_smmux_pmcgx_irq_ctrlack_t
#define bustype_CAVM_SMMUX_PMCGX_IRQ_CTRLACK(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_PMCGX_IRQ_CTRLACK(a,b) "SMMUX_PMCGX_IRQ_CTRLACK"
#define device_bar_CAVM_SMMUX_PMCGX_IRQ_CTRLACK(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_IRQ_CTRLACK(a,b) (a)
#define arguments_CAVM_SMMUX_PMCGX_IRQ_CTRLACK(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) smmu#_pmcg#_irq_status
 *
 * SMMU PMCG MSI Status Register
 */
union cavm_smmux_pmcgx_irq_status
{
    uint32_t u;
    struct cavm_smmux_pmcgx_irq_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t irq_abt               : 1;  /**< [  0:  0](RO) The SMMU sets this bit to one if it detects that an MSI has terminated with an abort.
                                                                 This bit is RES0 when SMMU()_PMCG()_CFGR[MSI]=0.
                                                                 It is implementation defined whether an implementation can detect this condition.
                                                                 This bit is cleared when SMMU()_PMCG()_IRQ_CTRL[IRQEN] is updated from zero to one.
                                                                        Note: An IRQEN transition from one to zero does not clear this bit, as this
                                                                 transition also
                                                                           ensures visibility of outstanding MSI writes and clearing [IRQ_ABT] at this point
                                                                 might
                                                                           mask possible abort completions of those MSI writes. */
#else /* Word 0 - Little Endian */
        uint32_t irq_abt               : 1;  /**< [  0:  0](RO) The SMMU sets this bit to one if it detects that an MSI has terminated with an abort.
                                                                 This bit is RES0 when SMMU()_PMCG()_CFGR[MSI]=0.
                                                                 It is implementation defined whether an implementation can detect this condition.
                                                                 This bit is cleared when SMMU()_PMCG()_IRQ_CTRL[IRQEN] is updated from zero to one.
                                                                        Note: An IRQEN transition from one to zero does not clear this bit, as this
                                                                 transition also
                                                                           ensures visibility of outstanding MSI writes and clearing [IRQ_ABT] at this point
                                                                 might
                                                                           mask possible abort completions of those MSI writes. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_irq_status_s cn; */
};
typedef union cavm_smmux_pmcgx_irq_status cavm_smmux_pmcgx_irq_status_t;

static inline uint64_t CAVM_SMMUX_PMCGX_IRQ_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_IRQ_STATUS(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=3))
        return 0x830000100e68ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3);
    __cavm_csr_fatal("SMMUX_PMCGX_IRQ_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_IRQ_STATUS(a,b) cavm_smmux_pmcgx_irq_status_t
#define bustype_CAVM_SMMUX_PMCGX_IRQ_STATUS(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_PMCGX_IRQ_STATUS(a,b) "SMMUX_PMCGX_IRQ_STATUS"
#define device_bar_CAVM_SMMUX_PMCGX_IRQ_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_IRQ_STATUS(a,b) (a)
#define arguments_CAVM_SMMUX_PMCGX_IRQ_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (NCB) smmu#_pmcg#_ovsclr0
 *
 * SMMU PMCG Overflow Status Clear Register
 */
union cavm_smmux_pmcgx_ovsclr0
{
    uint64_t u;
    struct cavm_smmux_pmcgx_ovsclr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t ovs                   : 4;  /**< [  3:  0](R/W1C/H)  */
#else /* Word 0 - Little Endian */
        uint64_t ovs                   : 4;  /**< [  3:  0](R/W1C/H)  */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_ovsclr0_s cn; */
};
typedef union cavm_smmux_pmcgx_ovsclr0 cavm_smmux_pmcgx_ovsclr0_t;

static inline uint64_t CAVM_SMMUX_PMCGX_OVSCLR0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_OVSCLR0(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=3))
        return 0x830000110c80ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3);
    __cavm_csr_fatal("SMMUX_PMCGX_OVSCLR0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_OVSCLR0(a,b) cavm_smmux_pmcgx_ovsclr0_t
#define bustype_CAVM_SMMUX_PMCGX_OVSCLR0(a,b) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_PMCGX_OVSCLR0(a,b) "SMMUX_PMCGX_OVSCLR0"
#define device_bar_CAVM_SMMUX_PMCGX_OVSCLR0(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_OVSCLR0(a,b) (a)
#define arguments_CAVM_SMMUX_PMCGX_OVSCLR0(a,b) (a),(b),-1,-1

/**
 * Register (NCB) smmu#_pmcg#_ovsset0
 *
 * SMMU PMCG Overflow Status Set Register
 */
union cavm_smmux_pmcgx_ovsset0
{
    uint64_t u;
    struct cavm_smmux_pmcgx_ovsset0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t ovs                   : 4;  /**< [  3:  0](R/W1S/H)  */
#else /* Word 0 - Little Endian */
        uint64_t ovs                   : 4;  /**< [  3:  0](R/W1S/H)  */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_ovsset0_s cn; */
};
typedef union cavm_smmux_pmcgx_ovsset0 cavm_smmux_pmcgx_ovsset0_t;

static inline uint64_t CAVM_SMMUX_PMCGX_OVSSET0(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_OVSSET0(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=3))
        return 0x830000110cc0ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3);
    __cavm_csr_fatal("SMMUX_PMCGX_OVSSET0", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_OVSSET0(a,b) cavm_smmux_pmcgx_ovsset0_t
#define bustype_CAVM_SMMUX_PMCGX_OVSSET0(a,b) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_PMCGX_OVSSET0(a,b) "SMMUX_PMCGX_OVSSET0"
#define device_bar_CAVM_SMMUX_PMCGX_OVSSET0(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_OVSSET0(a,b) (a)
#define arguments_CAVM_SMMUX_PMCGX_OVSSET0(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) smmu#_pmcg#_scr
 *
 * SMMU PMCG Secure Control Register
 */
union cavm_smmux_pmcgx_scr
{
    uint32_t u;
    struct cavm_smmux_pmcgx_scr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t valid                 : 1;  /**< [ 31: 31](SRO) Reads as one.
                                                                 Secure software can use this bit to discover security support in the PMCG. */
        uint32_t reserved_3_30         : 28;
        uint32_t nsmsi                 : 1;  /**< [  2:  2](SR/W) Nonsecure MSI-X.
                                                                    0 = Generated MSIs have an NS=0 attribute.
                                                                    1 = Generated MSIs have an NS=1 attribute. */
        uint32_t nsra                  : 1;  /**< [  1:  1](SR/W) Nonsecure register access.
                                                                 0 = Nonsecure register access is disabled.
                                                                     Nonsecure access to any PMCG register is RAZ/WI.
                                                                 1 = Nonsecure register access is enabled.
                                                                     If the PMCG supports MSIs, generated MSIs have an NS=1 attribute. */
        uint32_t so                    : 1;  /**< [  0:  0](SR/W) Secure observation.
                                                                 0 = Secure observation is disabled.
                                                                     SMMU()_PMCG()_EVTYPER()[FILTER_SEC_SID] is effectively 0.
                                                                 1 = Secure observation is enabled. */
#else /* Word 0 - Little Endian */
        uint32_t so                    : 1;  /**< [  0:  0](SR/W) Secure observation.
                                                                 0 = Secure observation is disabled.
                                                                     SMMU()_PMCG()_EVTYPER()[FILTER_SEC_SID] is effectively 0.
                                                                 1 = Secure observation is enabled. */
        uint32_t nsra                  : 1;  /**< [  1:  1](SR/W) Nonsecure register access.
                                                                 0 = Nonsecure register access is disabled.
                                                                     Nonsecure access to any PMCG register is RAZ/WI.
                                                                 1 = Nonsecure register access is enabled.
                                                                     If the PMCG supports MSIs, generated MSIs have an NS=1 attribute. */
        uint32_t nsmsi                 : 1;  /**< [  2:  2](SR/W) Nonsecure MSI-X.
                                                                    0 = Generated MSIs have an NS=0 attribute.
                                                                    1 = Generated MSIs have an NS=1 attribute. */
        uint32_t reserved_3_30         : 28;
        uint32_t valid                 : 1;  /**< [ 31: 31](SRO) Reads as one.
                                                                 Secure software can use this bit to discover security support in the PMCG. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_scr_s cn; */
};
typedef union cavm_smmux_pmcgx_scr cavm_smmux_pmcgx_scr_t;

static inline uint64_t CAVM_SMMUX_PMCGX_SCR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_SCR(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=3))
        return 0x830000100df8ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3);
    __cavm_csr_fatal("SMMUX_PMCGX_SCR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_SCR(a,b) cavm_smmux_pmcgx_scr_t
#define bustype_CAVM_SMMUX_PMCGX_SCR(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_PMCGX_SCR(a,b) "SMMUX_PMCGX_SCR"
#define device_bar_CAVM_SMMUX_PMCGX_SCR(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_SCR(a,b) (a)
#define arguments_CAVM_SMMUX_PMCGX_SCR(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) smmu#_pmcg#_smr#
 *
 * SMMU PMCG Counter Stream Match Filter Register
 */
union cavm_smmux_pmcgx_smrx
{
    uint32_t u;
    struct cavm_smmux_pmcgx_smrx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_22_31        : 10;
        uint32_t streamid              : 22; /**< [ 21:  0](R/W) When the corresponding SMMU()_PMCG()_EVTYPER()[EVNT] indicates an event that cannot be
                                                                 filtered on StreamID, the value in this register is ignored. Otherwise:

                                                                 When the corresponding SMMU()_PMCG()_EVTYPER()[FILTER_SID_SPAN]=0, counter `n' only
                                                                 counts events associated with a StreamID matching this field exactly.

                                                                 When SMMU()_PMCG()_EVTYPER()[FILTER_SID_SPAN]=1, this field is encoded such that the
                                                                 least-significant zero bit indicates the uppermost of a contiguous span of
                                                                 least-significant StreamID bits that are ignored for the purposes of filtering
                                                                 on a StreamID match. Bits above this position match the corresponding bits in an
                                                                 event's StreamID for the event to be counted and bits below this position down
                                                                 to bit 0 are 1. When all implemented bits are 1, any StreamID is
                                                                 matched. See Section 12.4.  When secure observation is enabled,
                                                                 SMMU()_PMCG()_EVTYPER()[FILTER_SEC_SID] determines whether the StreamID is matched
                                                                 from secure or nonsecure StreamID spaces (as defined by SMMU SSD).

                                                                 This field implements an implementation defined number of contiguous bits (from
                                                                 0 upwards) corresponding to the PMCG StreamID size. Bits outside this range read
                                                                 as zero, writes ignored (RAZ/WI). */
#else /* Word 0 - Little Endian */
        uint32_t streamid              : 22; /**< [ 21:  0](R/W) When the corresponding SMMU()_PMCG()_EVTYPER()[EVNT] indicates an event that cannot be
                                                                 filtered on StreamID, the value in this register is ignored. Otherwise:

                                                                 When the corresponding SMMU()_PMCG()_EVTYPER()[FILTER_SID_SPAN]=0, counter `n' only
                                                                 counts events associated with a StreamID matching this field exactly.

                                                                 When SMMU()_PMCG()_EVTYPER()[FILTER_SID_SPAN]=1, this field is encoded such that the
                                                                 least-significant zero bit indicates the uppermost of a contiguous span of
                                                                 least-significant StreamID bits that are ignored for the purposes of filtering
                                                                 on a StreamID match. Bits above this position match the corresponding bits in an
                                                                 event's StreamID for the event to be counted and bits below this position down
                                                                 to bit 0 are 1. When all implemented bits are 1, any StreamID is
                                                                 matched. See Section 12.4.  When secure observation is enabled,
                                                                 SMMU()_PMCG()_EVTYPER()[FILTER_SEC_SID] determines whether the StreamID is matched
                                                                 from secure or nonsecure StreamID spaces (as defined by SMMU SSD).

                                                                 This field implements an implementation defined number of contiguous bits (from
                                                                 0 upwards) corresponding to the PMCG StreamID size. Bits outside this range read
                                                                 as zero, writes ignored (RAZ/WI). */
        uint32_t reserved_22_31        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_smrx_s cn; */
};
typedef union cavm_smmux_pmcgx_smrx cavm_smmux_pmcgx_smrx_t;

static inline uint64_t CAVM_SMMUX_PMCGX_SMRX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_SMRX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a==0) && (b<=3) && (c==0))
        return 0x830000100a00ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3) + 4ll * ((c) & 0x0);
    __cavm_csr_fatal("SMMUX_PMCGX_SMRX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_SMRX(a,b,c) cavm_smmux_pmcgx_smrx_t
#define bustype_CAVM_SMMUX_PMCGX_SMRX(a,b,c) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_PMCGX_SMRX(a,b,c) "SMMUX_PMCGX_SMRX"
#define device_bar_CAVM_SMMUX_PMCGX_SMRX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_SMRX(a,b,c) (a)
#define arguments_CAVM_SMMUX_PMCGX_SMRX(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) smmu#_pmcg#_svr#
 *
 * SMMU PMCG Counter Shadow Value Register
 */
union cavm_smmux_pmcgx_svrx
{
    uint64_t u;
    struct cavm_smmux_pmcgx_svrx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_pmcgx_svrx_s cn; */
};
typedef union cavm_smmux_pmcgx_svrx cavm_smmux_pmcgx_svrx_t;

static inline uint64_t CAVM_SMMUX_PMCGX_SVRX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_PMCGX_SVRX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a==0) && (b<=3) && (c==0))
        return 0x830000100600ll + 0x1000000000ll * ((a) & 0x0) + 0x20000ll * ((b) & 0x3) + 4ll * ((c) & 0x0);
    __cavm_csr_fatal("SMMUX_PMCGX_SVRX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_PMCGX_SVRX(a,b,c) cavm_smmux_pmcgx_svrx_t
#define bustype_CAVM_SMMUX_PMCGX_SVRX(a,b,c) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_PMCGX_SVRX(a,b,c) "SMMUX_PMCGX_SVRX"
#define device_bar_CAVM_SMMUX_PMCGX_SVRX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_PMCGX_SVRX(a,b,c) (a)
#define arguments_CAVM_SMMUX_PMCGX_SVRX(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB32b) smmu#_s_agbpa
 *
 * SMMU Secure Alternate Global Bypass Attribute Register
 * This register is intended to allow an implementation to apply an additional non
 * architected attributes or tag to bypassing transactions, for example a traffic
 * routing identifier.
 *
 * If this field is unsupported by an implementation, it is RES0.  It is not
 * intended for this register to be used to further modify existing architected
 * bypass attributes which are controlled using GPBA.
 */
union cavm_smmux_s_agbpa
{
    uint32_t u;
    struct cavm_smmux_s_agbpa_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t qos                   : 4;  /**< [  3:  0](SR/W) Quality-of-service for bypassed transactions. */
#else /* Word 0 - Little Endian */
        uint32_t qos                   : 4;  /**< [  3:  0](SR/W) Quality-of-service for bypassed transactions. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_agbpa_s cn; */
};
typedef union cavm_smmux_s_agbpa cavm_smmux_s_agbpa_t;

static inline uint64_t CAVM_SMMUX_S_AGBPA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_AGBPA(uint64_t a)
{
    if (a==0)
        return 0x830000008048ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_AGBPA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_AGBPA(a) cavm_smmux_s_agbpa_t
#define bustype_CAVM_SMMUX_S_AGBPA(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_AGBPA(a) "SMMUX_S_AGBPA"
#define device_bar_CAVM_SMMUX_S_AGBPA(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_AGBPA(a) (a)
#define arguments_CAVM_SMMUX_S_AGBPA(a) (a),-1,-1,-1

/**
 * Register (NCB) smmu#_s_cmdq_base
 *
 * SMMU Secure Command Queue Base Register
 */
union cavm_smmux_s_cmdq_base
{
    uint64_t u;
    struct cavm_smmux_s_cmdq_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t ra                    : 1;  /**< [ 62: 62](SR/W) Read allocate hint.
                                                                 0 = No read-allocate.
                                                                 1 = Read-allocate. */
        uint64_t reserved_52_61        : 10;
        uint64_t addr                  : 47; /**< [ 51:  5](SR/W) PA of queue base.
                                                                 The effective address has \<63:52\> = 0x0 and \<4:0\> = 0x0. */
        uint64_t log2size              : 5;  /**< [  4:  0](SR/W) Queue size as log2(entries).
                                                                 Except for the purposes of readback of this register, any use of this field's
                                                                 value is capped at the maximum, SMMU()_IDR1[CMDQS].
                                                                 The minimum size is zero for one entry, but this must be aligned to a 32-byte (2
                                                                 entry) boundary as above. */
#else /* Word 0 - Little Endian */
        uint64_t log2size              : 5;  /**< [  4:  0](SR/W) Queue size as log2(entries).
                                                                 Except for the purposes of readback of this register, any use of this field's
                                                                 value is capped at the maximum, SMMU()_IDR1[CMDQS].
                                                                 The minimum size is zero for one entry, but this must be aligned to a 32-byte (2
                                                                 entry) boundary as above. */
        uint64_t addr                  : 47; /**< [ 51:  5](SR/W) PA of queue base.
                                                                 The effective address has \<63:52\> = 0x0 and \<4:0\> = 0x0. */
        uint64_t reserved_52_61        : 10;
        uint64_t ra                    : 1;  /**< [ 62: 62](SR/W) Read allocate hint.
                                                                 0 = No read-allocate.
                                                                 1 = Read-allocate. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_cmdq_base_s cn; */
};
typedef union cavm_smmux_s_cmdq_base cavm_smmux_s_cmdq_base_t;

static inline uint64_t CAVM_SMMUX_S_CMDQ_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_CMDQ_BASE(uint64_t a)
{
    if (a==0)
        return 0x830000008090ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_CMDQ_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_CMDQ_BASE(a) cavm_smmux_s_cmdq_base_t
#define bustype_CAVM_SMMUX_S_CMDQ_BASE(a) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_S_CMDQ_BASE(a) "SMMUX_S_CMDQ_BASE"
#define device_bar_CAVM_SMMUX_S_CMDQ_BASE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_CMDQ_BASE(a) (a)
#define arguments_CAVM_SMMUX_S_CMDQ_BASE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_cmdq_cons
 *
 * SMMU Secure Command Queue Consumer Register
 */
union cavm_smmux_s_cmdq_cons
{
    uint32_t u;
    struct cavm_smmux_s_cmdq_cons_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t errx                  : 7;  /**< [ 30: 24](SRO/H) Error reason code.
                                                                 When a command execution error is detected, set to a reason code and then the
                                                                 SMMU()_S_GERROR[CMDQ_ERR] global error becomes active (is toggled by the SMMU).
                                                                 The value in this field becomes unknown when the SMMU()_S_GERROR[CMDQ_ERR]
                                                                 global error is deactivated.
                                                                 Software should ignore this field unless the error is active. */
        uint32_t reserved_20_23        : 4;
        uint32_t rd                    : 20; /**< [ 19:  0](SR/W/H) Queue read index + wrap flag. Updated by the SMMU (consumer) indicating which
                                                                 command entry has just been executed. */
#else /* Word 0 - Little Endian */
        uint32_t rd                    : 20; /**< [ 19:  0](SR/W/H) Queue read index + wrap flag. Updated by the SMMU (consumer) indicating which
                                                                 command entry has just been executed. */
        uint32_t reserved_20_23        : 4;
        uint32_t errx                  : 7;  /**< [ 30: 24](SRO/H) Error reason code.
                                                                 When a command execution error is detected, set to a reason code and then the
                                                                 SMMU()_S_GERROR[CMDQ_ERR] global error becomes active (is toggled by the SMMU).
                                                                 The value in this field becomes unknown when the SMMU()_S_GERROR[CMDQ_ERR]
                                                                 global error is deactivated.
                                                                 Software should ignore this field unless the error is active. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_cmdq_cons_s cn; */
};
typedef union cavm_smmux_s_cmdq_cons cavm_smmux_s_cmdq_cons_t;

static inline uint64_t CAVM_SMMUX_S_CMDQ_CONS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_CMDQ_CONS(uint64_t a)
{
    if (a==0)
        return 0x83000000809cll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_CMDQ_CONS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_CMDQ_CONS(a) cavm_smmux_s_cmdq_cons_t
#define bustype_CAVM_SMMUX_S_CMDQ_CONS(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_CMDQ_CONS(a) "SMMUX_S_CMDQ_CONS"
#define device_bar_CAVM_SMMUX_S_CMDQ_CONS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_CMDQ_CONS(a) (a)
#define arguments_CAVM_SMMUX_S_CMDQ_CONS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_cmdq_prod
 *
 * SMMU Secure Command Queue Producer Register
 */
union cavm_smmux_s_cmdq_prod
{
    uint32_t u;
    struct cavm_smmux_s_cmdq_prod_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_20_31        : 12;
        uint32_t wr                    : 20; /**< [ 19:  0](SR/W) Queue write index + wrap flag. Updated by the CPU (producer) indicating the next
                                                                 empty space in the queue after new data. */
#else /* Word 0 - Little Endian */
        uint32_t wr                    : 20; /**< [ 19:  0](SR/W) Queue write index + wrap flag. Updated by the CPU (producer) indicating the next
                                                                 empty space in the queue after new data. */
        uint32_t reserved_20_31        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_cmdq_prod_s cn; */
};
typedef union cavm_smmux_s_cmdq_prod cavm_smmux_s_cmdq_prod_t;

static inline uint64_t CAVM_SMMUX_S_CMDQ_PROD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_CMDQ_PROD(uint64_t a)
{
    if (a==0)
        return 0x830000008098ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_CMDQ_PROD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_CMDQ_PROD(a) cavm_smmux_s_cmdq_prod_t
#define bustype_CAVM_SMMUX_S_CMDQ_PROD(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_CMDQ_PROD(a) "SMMUX_S_CMDQ_PROD"
#define device_bar_CAVM_SMMUX_S_CMDQ_PROD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_CMDQ_PROD(a) (a)
#define arguments_CAVM_SMMUX_S_CMDQ_PROD(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_cr0
 *
 * SMMU Secure Control 0 Register
 * An update to a field in SMMU()_S_CR0 is not considered complete, along with any
 * side effects, until the respective field in SMMU()_S_CR0ACK is observed to take the
 * new value.
 */
union cavm_smmux_s_cr0
{
    uint32_t u;
    struct cavm_smmux_s_cr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_10_31        : 22;
        uint32_t nsstalld              : 1;  /**< [  9:  9](SRO) Nonsecure stall disable.
                                                                 0 = Nonsecure programming interface may use stalling fault model, if
                                                                 implemented.

                                                                 1 = Nonsecure programming interface prohibited from using stalling fault
                                                                 model, if implemented.

                                                                 For CNXXXX, always stall, so zero. */
        uint32_t vmw                   : 3;  /**< [  8:  6](SRO) Secure VMID Wildcard.
                                                                 The VMW field is defined in the same way as SMMU_CR0.VMW, but affects Secure VMID
                                                                 matching on invalidation. */
        uint32_t sif                   : 1;  /**< [  5:  5](SR/W) Secure instruction fetch.
                                                                 0 = Secure transactions may exit the SMMU as a nonsecure instruction fetch.
                                                                 1 = Secure transactions determined to be nonsecure instruction fetch are
                                                                 terminated with abort.

                                                                 This field causes transactions from a secure stream (as determined by SSD) that
                                                                 are determined to be an instruction fetch (after INSTCFG fields are applied) to
                                                                 experience a permission fault if their effective output NS attribute is
                                                                 nonsecure (NS=1).

                                                                 When translation is disabled due to SMMUEN=0, the transaction is terminated with
                                                                 abort and no SMMU_F_PERMISSION_S event is recorded.

                                                                 When SMMUEN is set and the event queue is writable, a SMMU_F_PERMISSION_S event is
                                                                 recorded, and:

                                                                 * If stream translation is disabled (SMMU_STE_S[CONFIG] selects bypass), the
                                                                 faulting transaction is terminated with abort.

                                                                 * If stream translation is enabled (SMMU_STE_S[CONFIG] enables stage 1),
                                                                 CD.{A,R,S} govern stall/terminate behavior.

                                                                 The fault event is a stage 1 permission fault as, by definition, a secure
                                                                 transaction has only stage 1 configuration (that is, has no option to have stage 2
                                                                 translation).

                                                                 This bit is permitted to be cached in a TLB or configuration cache; an update of
                                                                 this bit requires invalidation of all secure TLB entries and configuration caches. */
        uint32_t reserved_4            : 1;
        uint32_t cmdqen                : 1;  /**< [  3:  3](SR/W) Enable secure command queue processing. */
        uint32_t eventqen              : 1;  /**< [  2:  2](SR/W) Enable secure EventQ writes. */
        uint32_t reserved_1            : 1;
        uint32_t smmuen                : 1;  /**< [  0:  0](SR/W) Secure SMMU enable. Enables the secure SMMU interface and allows secure traffic
                                                                 to enter the SMMU. When disabled, secure traffic bypasses the SMMU. Note the
                                                                 independent nonsecure interface might remain active. */
#else /* Word 0 - Little Endian */
        uint32_t smmuen                : 1;  /**< [  0:  0](SR/W) Secure SMMU enable. Enables the secure SMMU interface and allows secure traffic
                                                                 to enter the SMMU. When disabled, secure traffic bypasses the SMMU. Note the
                                                                 independent nonsecure interface might remain active. */
        uint32_t reserved_1            : 1;
        uint32_t eventqen              : 1;  /**< [  2:  2](SR/W) Enable secure EventQ writes. */
        uint32_t cmdqen                : 1;  /**< [  3:  3](SR/W) Enable secure command queue processing. */
        uint32_t reserved_4            : 1;
        uint32_t sif                   : 1;  /**< [  5:  5](SR/W) Secure instruction fetch.
                                                                 0 = Secure transactions may exit the SMMU as a nonsecure instruction fetch.
                                                                 1 = Secure transactions determined to be nonsecure instruction fetch are
                                                                 terminated with abort.

                                                                 This field causes transactions from a secure stream (as determined by SSD) that
                                                                 are determined to be an instruction fetch (after INSTCFG fields are applied) to
                                                                 experience a permission fault if their effective output NS attribute is
                                                                 nonsecure (NS=1).

                                                                 When translation is disabled due to SMMUEN=0, the transaction is terminated with
                                                                 abort and no SMMU_F_PERMISSION_S event is recorded.

                                                                 When SMMUEN is set and the event queue is writable, a SMMU_F_PERMISSION_S event is
                                                                 recorded, and:

                                                                 * If stream translation is disabled (SMMU_STE_S[CONFIG] selects bypass), the
                                                                 faulting transaction is terminated with abort.

                                                                 * If stream translation is enabled (SMMU_STE_S[CONFIG] enables stage 1),
                                                                 CD.{A,R,S} govern stall/terminate behavior.

                                                                 The fault event is a stage 1 permission fault as, by definition, a secure
                                                                 transaction has only stage 1 configuration (that is, has no option to have stage 2
                                                                 translation).

                                                                 This bit is permitted to be cached in a TLB or configuration cache; an update of
                                                                 this bit requires invalidation of all secure TLB entries and configuration caches. */
        uint32_t vmw                   : 3;  /**< [  8:  6](SRO) Secure VMID Wildcard.
                                                                 The VMW field is defined in the same way as SMMU_CR0.VMW, but affects Secure VMID
                                                                 matching on invalidation. */
        uint32_t nsstalld              : 1;  /**< [  9:  9](SRO) Nonsecure stall disable.
                                                                 0 = Nonsecure programming interface may use stalling fault model, if
                                                                 implemented.

                                                                 1 = Nonsecure programming interface prohibited from using stalling fault
                                                                 model, if implemented.

                                                                 For CNXXXX, always stall, so zero. */
        uint32_t reserved_10_31        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_cr0_s cn; */
};
typedef union cavm_smmux_s_cr0 cavm_smmux_s_cr0_t;

static inline uint64_t CAVM_SMMUX_S_CR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_CR0(uint64_t a)
{
    if (a==0)
        return 0x830000008020ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_CR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_CR0(a) cavm_smmux_s_cr0_t
#define bustype_CAVM_SMMUX_S_CR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_CR0(a) "SMMUX_S_CR0"
#define device_bar_CAVM_SMMUX_S_CR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_CR0(a) (a)
#define arguments_CAVM_SMMUX_S_CR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_cr0ack
 *
 * SMMU Secure Control 0 Acknowledgement Register
 * This register is a read-only copy of SMMU()_S_CR0.
 */
union cavm_smmux_s_cr0ack
{
    uint32_t u;
    struct cavm_smmux_s_cr0ack_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_10_31        : 22;
        uint32_t nsstalld              : 1;  /**< [  9:  9](SRO/H) Read-only hardware-modified SMMU(0)_S_CR0[NSSTALLD]. */
        uint32_t vmw                   : 3;  /**< [  8:  6](SRO/H) Read-only hardware-modified SMMU(0)_S_CR0[VMW]. */
        uint32_t sif                   : 1;  /**< [  5:  5](SRO/H) Read-only hardware-modified SMMU(0)_S_CR0[SIF]. */
        uint32_t reserved_4            : 1;
        uint32_t cmdqen                : 1;  /**< [  3:  3](SRO/H) Read-only hardware-modified SMMU(0)_S_CR0[CMDQEN]. */
        uint32_t eventqen              : 1;  /**< [  2:  2](SRO/H) Read-only hardware-modified SMMU(0)_S_CR0[EVENTQEN]. */
        uint32_t reserved_1            : 1;
        uint32_t smmuen                : 1;  /**< [  0:  0](SRO/H) Read-only hardware-modified SMMU(0)_S_CR0[SMMUEN]. */
#else /* Word 0 - Little Endian */
        uint32_t smmuen                : 1;  /**< [  0:  0](SRO/H) Read-only hardware-modified SMMU(0)_S_CR0[SMMUEN]. */
        uint32_t reserved_1            : 1;
        uint32_t eventqen              : 1;  /**< [  2:  2](SRO/H) Read-only hardware-modified SMMU(0)_S_CR0[EVENTQEN]. */
        uint32_t cmdqen                : 1;  /**< [  3:  3](SRO/H) Read-only hardware-modified SMMU(0)_S_CR0[CMDQEN]. */
        uint32_t reserved_4            : 1;
        uint32_t sif                   : 1;  /**< [  5:  5](SRO/H) Read-only hardware-modified SMMU(0)_S_CR0[SIF]. */
        uint32_t vmw                   : 3;  /**< [  8:  6](SRO/H) Read-only hardware-modified SMMU(0)_S_CR0[VMW]. */
        uint32_t nsstalld              : 1;  /**< [  9:  9](SRO/H) Read-only hardware-modified SMMU(0)_S_CR0[NSSTALLD]. */
        uint32_t reserved_10_31        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_cr0ack_s cn; */
};
typedef union cavm_smmux_s_cr0ack cavm_smmux_s_cr0ack_t;

static inline uint64_t CAVM_SMMUX_S_CR0ACK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_CR0ACK(uint64_t a)
{
    if (a==0)
        return 0x830000008024ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_CR0ACK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_CR0ACK(a) cavm_smmux_s_cr0ack_t
#define bustype_CAVM_SMMUX_S_CR0ACK(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_CR0ACK(a) "SMMUX_S_CR0ACK"
#define device_bar_CAVM_SMMUX_S_CR0ACK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_CR0ACK(a) (a)
#define arguments_CAVM_SMMUX_S_CR0ACK(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_cr1
 *
 * SMMU Secure Control 1 Register
 */
union cavm_smmux_s_cr1
{
    uint32_t u;
    struct cavm_smmux_s_cr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_12_31        : 20;
        uint32_t table_sh              : 2;  /**< [ 11: 10](SR/W) Table access shareability.
                                                                    0x0 = NSH.
                                                                    0x1 = Reserved (treated as 0x0).
                                                                    0x2 = OSH.
                                                                    0x3 = ISH.

                                                                 If [TABLE_OC]=0x0 and [TABLE_IC]=0x0, this field is ignored and OSH shareability
                                                                 is assumed. */
        uint32_t table_oc              : 2;  /**< [  9:  8](SR/W) Table access outer cacheability.
                                                                    0x0 = Noncacheable.
                                                                    0x1 = Write-back cacheable.
                                                                    0x2 = Write-through cacheable.
                                                                    0x3 = Reserved (treated as 0x0). */
        uint32_t table_ic              : 2;  /**< [  7:  6](SR/W) Table access inner cacheability.
                                                                    0x0 = Noncacheable.
                                                                    0x1 = Write-back cacheable.
                                                                    0x2 = Write-through cacheable.
                                                                    0x3 = Reserved (treated as 0x0). */
        uint32_t queue_sh              : 2;  /**< [  5:  4](SR/W) Queue access shareability.
                                                                    0x0 = NSH.
                                                                    0x1 = Reserved (treated as 0x0).
                                                                    0x2 = OSH.
                                                                    0x3 = ISH.

                                                                 If [QUEUE_OC]=0x0 and [QUEUE_IC]=0x0, this field is ignored and OSH
                                                                 shareability is assumed. */
        uint32_t queue_oc              : 2;  /**< [  3:  2](SR/W) Queue access outer cacheability.
                                                                    0x0 = Noncacheable.
                                                                    0x1 = Write-back cacheable.
                                                                    0x2 = Write-through cacheable.
                                                                    0x3 = Reserved (treated as 0x0). */
        uint32_t queue_ic              : 2;  /**< [  1:  0](SR/W) Queue access inner cacheability.
                                                                    0x0 = Noncacheable.
                                                                    0x1 = Write-back cacheable.
                                                                    0x2 = Write-through cacheable.
                                                                    0x3 = Reserved (treated as 0x0). */
#else /* Word 0 - Little Endian */
        uint32_t queue_ic              : 2;  /**< [  1:  0](SR/W) Queue access inner cacheability.
                                                                    0x0 = Noncacheable.
                                                                    0x1 = Write-back cacheable.
                                                                    0x2 = Write-through cacheable.
                                                                    0x3 = Reserved (treated as 0x0). */
        uint32_t queue_oc              : 2;  /**< [  3:  2](SR/W) Queue access outer cacheability.
                                                                    0x0 = Noncacheable.
                                                                    0x1 = Write-back cacheable.
                                                                    0x2 = Write-through cacheable.
                                                                    0x3 = Reserved (treated as 0x0). */
        uint32_t queue_sh              : 2;  /**< [  5:  4](SR/W) Queue access shareability.
                                                                    0x0 = NSH.
                                                                    0x1 = Reserved (treated as 0x0).
                                                                    0x2 = OSH.
                                                                    0x3 = ISH.

                                                                 If [QUEUE_OC]=0x0 and [QUEUE_IC]=0x0, this field is ignored and OSH
                                                                 shareability is assumed. */
        uint32_t table_ic              : 2;  /**< [  7:  6](SR/W) Table access inner cacheability.
                                                                    0x0 = Noncacheable.
                                                                    0x1 = Write-back cacheable.
                                                                    0x2 = Write-through cacheable.
                                                                    0x3 = Reserved (treated as 0x0). */
        uint32_t table_oc              : 2;  /**< [  9:  8](SR/W) Table access outer cacheability.
                                                                    0x0 = Noncacheable.
                                                                    0x1 = Write-back cacheable.
                                                                    0x2 = Write-through cacheable.
                                                                    0x3 = Reserved (treated as 0x0). */
        uint32_t table_sh              : 2;  /**< [ 11: 10](SR/W) Table access shareability.
                                                                    0x0 = NSH.
                                                                    0x1 = Reserved (treated as 0x0).
                                                                    0x2 = OSH.
                                                                    0x3 = ISH.

                                                                 If [TABLE_OC]=0x0 and [TABLE_IC]=0x0, this field is ignored and OSH shareability
                                                                 is assumed. */
        uint32_t reserved_12_31        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_cr1_s cn; */
};
typedef union cavm_smmux_s_cr1 cavm_smmux_s_cr1_t;

static inline uint64_t CAVM_SMMUX_S_CR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_CR1(uint64_t a)
{
    if (a==0)
        return 0x830000008028ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_CR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_CR1(a) cavm_smmux_s_cr1_t
#define bustype_CAVM_SMMUX_S_CR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_CR1(a) "SMMUX_S_CR1"
#define device_bar_CAVM_SMMUX_S_CR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_CR1(a) (a)
#define arguments_CAVM_SMMUX_S_CR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_cr2
 *
 * SMMU Secure Control 2 Register
 */
union cavm_smmux_s_cr2
{
    uint32_t u;
    struct cavm_smmux_s_cr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t ptm                   : 1;  /**< [  2:  2](SR/W) Private TLB maintenance. When set, the SMMU is not expected to invalidate any
                                                                 local TLB entries on receipt of broadcast TLB maintenance operations for S-EL1
                                                                 or EL3 translation regimes.

                                                                 Broadcast invalidation for NS-EL1, EL2 or EL2-E2H translation regimes are not
                                                                 affected by this flag; see SMMU()_CR2[PTM]. */
        uint32_t recinvsid             : 1;  /**< [  1:  1](SR/W) Record event SMMU_C_BAD_STREAMID_S from invalid input StreamIDs. When the SMMU is
                                                                 enabled, all traffic must be associated with a valid, reachable STE. Any
                                                                 transaction with a StreamID out of the range of a linear stream table, reaching
                                                                 an invalid pointer in a two-level stream table or out of the range of a second-level
                                                                 array will be aborted. This bit determines whether such events are also
                                                                 recorded. */
        uint32_t e2h                   : 1;  /**< [  0:  0](SR/W) Enable Secure EL2-E2H translation regime
                                                                   0 = Secure EL2 translation regime, without ASID.
                                                                   1 = Secure EL2-E2H translation regime used, with ASID.

                                                                 This field affects the SMMU_STE_S[STRW] encoding 0x2, which selects a hypervisor
                                                                 translation regime for the resulting translations; the translations are tagged
                                                                 without ASID in EL2 mode, or with ASID in EL2-E2H mode.

                                                                 This field should match the Secure HCR_EL2[E2H] in host PEs.

                                                                 This bit is permitted to be cached in configuration caches and TLBs. Changes to
                                                                 this bit must be accompanied by invalidation of configuration and translations
                                                                 pertinent to streams configured with StreamWorld == S-EL2 or S-EL2-E2H.

                                                                 When SMMU()_S_IDR1[SEL2]=0, this field is reserved.

                                                                 This bit affects the StreamWorld of Secure streams only */
#else /* Word 0 - Little Endian */
        uint32_t e2h                   : 1;  /**< [  0:  0](SR/W) Enable Secure EL2-E2H translation regime
                                                                   0 = Secure EL2 translation regime, without ASID.
                                                                   1 = Secure EL2-E2H translation regime used, with ASID.

                                                                 This field affects the SMMU_STE_S[STRW] encoding 0x2, which selects a hypervisor
                                                                 translation regime for the resulting translations; the translations are tagged
                                                                 without ASID in EL2 mode, or with ASID in EL2-E2H mode.

                                                                 This field should match the Secure HCR_EL2[E2H] in host PEs.

                                                                 This bit is permitted to be cached in configuration caches and TLBs. Changes to
                                                                 this bit must be accompanied by invalidation of configuration and translations
                                                                 pertinent to streams configured with StreamWorld == S-EL2 or S-EL2-E2H.

                                                                 When SMMU()_S_IDR1[SEL2]=0, this field is reserved.

                                                                 This bit affects the StreamWorld of Secure streams only */
        uint32_t recinvsid             : 1;  /**< [  1:  1](SR/W) Record event SMMU_C_BAD_STREAMID_S from invalid input StreamIDs. When the SMMU is
                                                                 enabled, all traffic must be associated with a valid, reachable STE. Any
                                                                 transaction with a StreamID out of the range of a linear stream table, reaching
                                                                 an invalid pointer in a two-level stream table or out of the range of a second-level
                                                                 array will be aborted. This bit determines whether such events are also
                                                                 recorded. */
        uint32_t ptm                   : 1;  /**< [  2:  2](SR/W) Private TLB maintenance. When set, the SMMU is not expected to invalidate any
                                                                 local TLB entries on receipt of broadcast TLB maintenance operations for S-EL1
                                                                 or EL3 translation regimes.

                                                                 Broadcast invalidation for NS-EL1, EL2 or EL2-E2H translation regimes are not
                                                                 affected by this flag; see SMMU()_CR2[PTM]. */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_cr2_s cn; */
};
typedef union cavm_smmux_s_cr2 cavm_smmux_s_cr2_t;

static inline uint64_t CAVM_SMMUX_S_CR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_CR2(uint64_t a)
{
    if (a==0)
        return 0x83000000802cll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_CR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_CR2(a) cavm_smmux_s_cr2_t
#define bustype_CAVM_SMMUX_S_CR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_CR2(a) "SMMUX_S_CR2"
#define device_bar_CAVM_SMMUX_S_CR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_CR2(a) (a)
#define arguments_CAVM_SMMUX_S_CR2(a) (a),-1,-1,-1

/**
 * Register (NCB) smmu#_s_eventq_base
 *
 * SMMU Secure Event Queue Base Register
 */
union cavm_smmux_s_eventq_base
{
    uint64_t u;
    struct cavm_smmux_s_eventq_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t wa                    : 1;  /**< [ 62: 62](SR/W) Write allocate hint.
                                                                 0 = No write-allocate.
                                                                 1 = Write-allocate. */
        uint64_t reserved_52_61        : 10;
        uint64_t addr                  : 47; /**< [ 51:  5](SR/W) Physical address of queue base.
                                                                 The effective base address has \<63:52\> = 0x0 and [ADDR]\<4:0\> =
                                                                 0x0. The effective base address is aligned to the queue size (in bytes), ignoring
                                                                 the least-significant bits of \<47:5\> as required to do so. */
        uint64_t log2size              : 5;  /**< [  4:  0](SR/W) Queue size as log2(entries). Except for the purposes of readback of this
                                                                 register, any use of this field's value is capped at the maximum,
                                                                 SMMU()_IDR1[EVENTQS]. */
#else /* Word 0 - Little Endian */
        uint64_t log2size              : 5;  /**< [  4:  0](SR/W) Queue size as log2(entries). Except for the purposes of readback of this
                                                                 register, any use of this field's value is capped at the maximum,
                                                                 SMMU()_IDR1[EVENTQS]. */
        uint64_t addr                  : 47; /**< [ 51:  5](SR/W) Physical address of queue base.
                                                                 The effective base address has \<63:52\> = 0x0 and [ADDR]\<4:0\> =
                                                                 0x0. The effective base address is aligned to the queue size (in bytes), ignoring
                                                                 the least-significant bits of \<47:5\> as required to do so. */
        uint64_t reserved_52_61        : 10;
        uint64_t wa                    : 1;  /**< [ 62: 62](SR/W) Write allocate hint.
                                                                 0 = No write-allocate.
                                                                 1 = Write-allocate. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_eventq_base_s cn; */
};
typedef union cavm_smmux_s_eventq_base cavm_smmux_s_eventq_base_t;

static inline uint64_t CAVM_SMMUX_S_EVENTQ_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_EVENTQ_BASE(uint64_t a)
{
    if (a==0)
        return 0x8300000080a0ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_EVENTQ_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_EVENTQ_BASE(a) cavm_smmux_s_eventq_base_t
#define bustype_CAVM_SMMUX_S_EVENTQ_BASE(a) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_S_EVENTQ_BASE(a) "SMMUX_S_EVENTQ_BASE"
#define device_bar_CAVM_SMMUX_S_EVENTQ_BASE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_EVENTQ_BASE(a) (a)
#define arguments_CAVM_SMMUX_S_EVENTQ_BASE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_eventq_cons
 *
 * SMMU Secure Event Queue Consumer Register
 */
union cavm_smmux_s_eventq_cons
{
    uint32_t u;
    struct cavm_smmux_s_eventq_cons_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ovackflg              : 1;  /**< [ 31: 31](SR/W) Overflow acknowledge flag. Software should set this flag to the value of
                                                                 SMMU()_EVENTQ_PROD[OVFLG] when it is safe for the SMMU to report a future event
                                                                 queue overflow; this should be done on initialization and after a previous event
                                                                 queue overflow is handled by software. */
        uint32_t reserved_20_30        : 11;
        uint32_t rd                    : 20; /**< [ 19:  0](SR/W) Queue read index + wrap flag.
                                                                 Entry last read by CPU (first empty queue location). */
#else /* Word 0 - Little Endian */
        uint32_t rd                    : 20; /**< [ 19:  0](SR/W) Queue read index + wrap flag.
                                                                 Entry last read by CPU (first empty queue location). */
        uint32_t reserved_20_30        : 11;
        uint32_t ovackflg              : 1;  /**< [ 31: 31](SR/W) Overflow acknowledge flag. Software should set this flag to the value of
                                                                 SMMU()_EVENTQ_PROD[OVFLG] when it is safe for the SMMU to report a future event
                                                                 queue overflow; this should be done on initialization and after a previous event
                                                                 queue overflow is handled by software. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_eventq_cons_s cn; */
};
typedef union cavm_smmux_s_eventq_cons cavm_smmux_s_eventq_cons_t;

static inline uint64_t CAVM_SMMUX_S_EVENTQ_CONS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_EVENTQ_CONS(uint64_t a)
{
    if (a==0)
        return 0x8300000080acll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_EVENTQ_CONS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_EVENTQ_CONS(a) cavm_smmux_s_eventq_cons_t
#define bustype_CAVM_SMMUX_S_EVENTQ_CONS(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_EVENTQ_CONS(a) "SMMUX_S_EVENTQ_CONS"
#define device_bar_CAVM_SMMUX_S_EVENTQ_CONS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_EVENTQ_CONS(a) (a)
#define arguments_CAVM_SMMUX_S_EVENTQ_CONS(a) (a),-1,-1,-1

/**
 * Register (NCB) smmu#_s_eventq_irq_cfg0
 *
 * SMMU Secure Event Queue IRQ Configuration 0 Register
 */
union cavm_smmux_s_eventq_irq_cfg0
{
    uint64_t u;
    struct cavm_smmux_s_eventq_irq_cfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t addr                  : 50; /**< [ 51:  2](SR/W) Physical address of MSI target register.
                                                                 The effective address has ADDR\<63:52\> = 0x0 and [ADDR]\<1:0\> = 0x0.

                                                                 Note unlike most CNXXXX MSI-X address registers, this is a physical address, not
                                                                 a virtual address.

                                                                 If [ADDR]=0x0, no MSI is sent.

                                                                 The interrupt message will use the SMMU's stream ID. */
        uint64_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_1          : 2;
        uint64_t addr                  : 50; /**< [ 51:  2](SR/W) Physical address of MSI target register.
                                                                 The effective address has ADDR\<63:52\> = 0x0 and [ADDR]\<1:0\> = 0x0.

                                                                 Note unlike most CNXXXX MSI-X address registers, this is a physical address, not
                                                                 a virtual address.

                                                                 If [ADDR]=0x0, no MSI is sent.

                                                                 The interrupt message will use the SMMU's stream ID. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_eventq_irq_cfg0_s cn; */
};
typedef union cavm_smmux_s_eventq_irq_cfg0 cavm_smmux_s_eventq_irq_cfg0_t;

static inline uint64_t CAVM_SMMUX_S_EVENTQ_IRQ_CFG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_EVENTQ_IRQ_CFG0(uint64_t a)
{
    if (a==0)
        return 0x8300000080b0ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_EVENTQ_IRQ_CFG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_EVENTQ_IRQ_CFG0(a) cavm_smmux_s_eventq_irq_cfg0_t
#define bustype_CAVM_SMMUX_S_EVENTQ_IRQ_CFG0(a) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_S_EVENTQ_IRQ_CFG0(a) "SMMUX_S_EVENTQ_IRQ_CFG0"
#define device_bar_CAVM_SMMUX_S_EVENTQ_IRQ_CFG0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_EVENTQ_IRQ_CFG0(a) (a)
#define arguments_CAVM_SMMUX_S_EVENTQ_IRQ_CFG0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_eventq_irq_cfg1
 *
 * SMMU Secure Event Queue IRQ Configuration 1 Register
 */
union cavm_smmux_s_eventq_irq_cfg1
{
    uint32_t u;
    struct cavm_smmux_s_eventq_irq_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](SR/W) MSI data payload. */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](SR/W) MSI data payload. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_eventq_irq_cfg1_s cn; */
};
typedef union cavm_smmux_s_eventq_irq_cfg1 cavm_smmux_s_eventq_irq_cfg1_t;

static inline uint64_t CAVM_SMMUX_S_EVENTQ_IRQ_CFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_EVENTQ_IRQ_CFG1(uint64_t a)
{
    if (a==0)
        return 0x8300000080b8ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_EVENTQ_IRQ_CFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_EVENTQ_IRQ_CFG1(a) cavm_smmux_s_eventq_irq_cfg1_t
#define bustype_CAVM_SMMUX_S_EVENTQ_IRQ_CFG1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_EVENTQ_IRQ_CFG1(a) "SMMUX_S_EVENTQ_IRQ_CFG1"
#define device_bar_CAVM_SMMUX_S_EVENTQ_IRQ_CFG1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_EVENTQ_IRQ_CFG1(a) (a)
#define arguments_CAVM_SMMUX_S_EVENTQ_IRQ_CFG1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_eventq_irq_cfg2
 *
 * SMMU Secure Event Queue IRQ Configuration 2 Register
 */
union cavm_smmux_s_eventq_irq_cfg2
{
    uint32_t u;
    struct cavm_smmux_s_eventq_irq_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t sh                    : 2;  /**< [  5:  4](SR/W) Shareability.
                                                                 0x0 = NSH.
                                                                 0x1 = Reserved (treated as 0x0).
                                                                 0x2 = OSH.
                                                                 0x3 = ISH.

                                                                 When [MEMATTR] specifies a device memory type, the contents of this field are
                                                                 ignored and the shareability is effectively OSH. */
        uint32_t memattr               : 4;  /**< [  3:  0](SR/W) Memory type, encoded the same as SMMU_STE_S[MEMATTR]. */
#else /* Word 0 - Little Endian */
        uint32_t memattr               : 4;  /**< [  3:  0](SR/W) Memory type, encoded the same as SMMU_STE_S[MEMATTR]. */
        uint32_t sh                    : 2;  /**< [  5:  4](SR/W) Shareability.
                                                                 0x0 = NSH.
                                                                 0x1 = Reserved (treated as 0x0).
                                                                 0x2 = OSH.
                                                                 0x3 = ISH.

                                                                 When [MEMATTR] specifies a device memory type, the contents of this field are
                                                                 ignored and the shareability is effectively OSH. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_eventq_irq_cfg2_s cn; */
};
typedef union cavm_smmux_s_eventq_irq_cfg2 cavm_smmux_s_eventq_irq_cfg2_t;

static inline uint64_t CAVM_SMMUX_S_EVENTQ_IRQ_CFG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_EVENTQ_IRQ_CFG2(uint64_t a)
{
    if (a==0)
        return 0x8300000080bcll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_EVENTQ_IRQ_CFG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_EVENTQ_IRQ_CFG2(a) cavm_smmux_s_eventq_irq_cfg2_t
#define bustype_CAVM_SMMUX_S_EVENTQ_IRQ_CFG2(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_EVENTQ_IRQ_CFG2(a) "SMMUX_S_EVENTQ_IRQ_CFG2"
#define device_bar_CAVM_SMMUX_S_EVENTQ_IRQ_CFG2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_EVENTQ_IRQ_CFG2(a) (a)
#define arguments_CAVM_SMMUX_S_EVENTQ_IRQ_CFG2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_eventq_prod
 *
 * SMMU Secure Event Queue Producer Register
 */
union cavm_smmux_s_eventq_prod
{
    uint32_t u;
    struct cavm_smmux_s_eventq_prod_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ovflg                 : 1;  /**< [ 31: 31](SR/W/H) Queue overflowed, one or more events have been lost. An event queue overflow is
                                                                 indicated using this flag. This flag is toggled by the SMMU when a queue
                                                                 overflow is detected, if OVFLG=SMMU()_S_EVENTQ_CONS[OVACKFLG] (i.e. no
                                                                 outstanding overflow condition exists).

                                                                 This flag will not be updated until a prior overflow is acknowledged by setting
                                                                 SMMU()_S_EVENTQ_CONS[OVACKFLG] equal to OVFLG. */
        uint32_t reserved_20_30        : 11;
        uint32_t wr                    : 20; /**< [ 19:  0](SR/W/H) Queue write index + wrap flag.
                                                                 Next space to be written by SMMU. */
#else /* Word 0 - Little Endian */
        uint32_t wr                    : 20; /**< [ 19:  0](SR/W/H) Queue write index + wrap flag.
                                                                 Next space to be written by SMMU. */
        uint32_t reserved_20_30        : 11;
        uint32_t ovflg                 : 1;  /**< [ 31: 31](SR/W/H) Queue overflowed, one or more events have been lost. An event queue overflow is
                                                                 indicated using this flag. This flag is toggled by the SMMU when a queue
                                                                 overflow is detected, if OVFLG=SMMU()_S_EVENTQ_CONS[OVACKFLG] (i.e. no
                                                                 outstanding overflow condition exists).

                                                                 This flag will not be updated until a prior overflow is acknowledged by setting
                                                                 SMMU()_S_EVENTQ_CONS[OVACKFLG] equal to OVFLG. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_eventq_prod_s cn; */
};
typedef union cavm_smmux_s_eventq_prod cavm_smmux_s_eventq_prod_t;

static inline uint64_t CAVM_SMMUX_S_EVENTQ_PROD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_EVENTQ_PROD(uint64_t a)
{
    if (a==0)
        return 0x8300000080a8ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_EVENTQ_PROD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_EVENTQ_PROD(a) cavm_smmux_s_eventq_prod_t
#define bustype_CAVM_SMMUX_S_EVENTQ_PROD(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_EVENTQ_PROD(a) "SMMUX_S_EVENTQ_PROD"
#define device_bar_CAVM_SMMUX_S_EVENTQ_PROD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_EVENTQ_PROD(a) (a)
#define arguments_CAVM_SMMUX_S_EVENTQ_PROD(a) (a),-1,-1,-1

/**
 * Register (NCB) smmu#_s_gatos_addr
 *
 * SMMU GATOS Address Register
 */
union cavm_smmux_s_gatos_addr
{
    uint64_t u;
    struct cavm_smmux_s_gatos_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 52; /**< [ 63: 12](SR/W) Requested input address. */
        uint64_t rtype                 : 2;  /**< [ 11: 10](SR/W) Request type.
                                                                 0x0 = Reserved.
                                                                 0x1 = Stage 1 (VAaIPA).
                                                                 0x2 = Stage 2 (IPAaPA).
                                                                 0x3 = Stage 1 + stage 2 (VAaPA). */
        uint64_t pnu                   : 1;  /**< [  9:  9](SR/W) Privileged/User access.
                                                                   0 = User/unprivileged.
                                                                   1 = Privileged. */
        uint64_t rnw                   : 1;  /**< [  8:  8](SR/W) Read/write access.
                                                                   0 = Write.
                                                                   1 = Read. */
        uint64_t ind                   : 1;  /**< [  7:  7](SR/W) Instruction/data access.
                                                                   0 = Data.
                                                                   1 = Instruction.

                                                                 This bit is ignored if [RNW]=0, and the effective [IND] for writes is "data". */
        uint64_t httui                 : 1;  /**< [  6:  6](SR/W) Inhibit hardware TTD flag update.
                                                                 0 = Flag update (HTTU) may occur, where supported by the SMMU, according to
                                                                 HA/HD configuration fields at stage 1/stage 2.
                                                                 1 = HTTU is inhibited, regardless of HA/HD configuration.
                                                                 The ATOS operation causes no state change and is "passive". */
        uint64_t reserved_5            : 1;
        uint64_t ns_ind                : 1;  /**< [  4:  4](SR/W) Input NS attribute.
                                                                 This bit is used in the scenario where the selected stream is Secure and one of the following
                                                                 applies:
                                                                   The stream is configured for stage 1 and stage 2 translation and an ATOS lookup is
                                                                   made for stage 1 and stage 2, but stage 1 translation is bypassed due to STE.S1DSS.
                                                                   The stream is configured for stage 1 and stage 2 translation and an ATOS lookup is
                                                                   made for stage 2 only.
                                                                   The stream is configured for stage 2 translation only and an ATOS lookup is made for
                                                                   stage 2 only.

                                                                 In these scenarios, this bit provides the NS attribute required to be input to Secure stage 2
                                                                 translation.

                                                                 When SMMU_S_IDR1.SEL2 == 0, this field is RES0. */
        uint64_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_3          : 4;
        uint64_t ns_ind                : 1;  /**< [  4:  4](SR/W) Input NS attribute.
                                                                 This bit is used in the scenario where the selected stream is Secure and one of the following
                                                                 applies:
                                                                   The stream is configured for stage 1 and stage 2 translation and an ATOS lookup is
                                                                   made for stage 1 and stage 2, but stage 1 translation is bypassed due to STE.S1DSS.
                                                                   The stream is configured for stage 1 and stage 2 translation and an ATOS lookup is
                                                                   made for stage 2 only.
                                                                   The stream is configured for stage 2 translation only and an ATOS lookup is made for
                                                                   stage 2 only.

                                                                 In these scenarios, this bit provides the NS attribute required to be input to Secure stage 2
                                                                 translation.

                                                                 When SMMU_S_IDR1.SEL2 == 0, this field is RES0. */
        uint64_t reserved_5            : 1;
        uint64_t httui                 : 1;  /**< [  6:  6](SR/W) Inhibit hardware TTD flag update.
                                                                 0 = Flag update (HTTU) may occur, where supported by the SMMU, according to
                                                                 HA/HD configuration fields at stage 1/stage 2.
                                                                 1 = HTTU is inhibited, regardless of HA/HD configuration.
                                                                 The ATOS operation causes no state change and is "passive". */
        uint64_t ind                   : 1;  /**< [  7:  7](SR/W) Instruction/data access.
                                                                   0 = Data.
                                                                   1 = Instruction.

                                                                 This bit is ignored if [RNW]=0, and the effective [IND] for writes is "data". */
        uint64_t rnw                   : 1;  /**< [  8:  8](SR/W) Read/write access.
                                                                   0 = Write.
                                                                   1 = Read. */
        uint64_t pnu                   : 1;  /**< [  9:  9](SR/W) Privileged/User access.
                                                                   0 = User/unprivileged.
                                                                   1 = Privileged. */
        uint64_t rtype                 : 2;  /**< [ 11: 10](SR/W) Request type.
                                                                 0x0 = Reserved.
                                                                 0x1 = Stage 1 (VAaIPA).
                                                                 0x2 = Stage 2 (IPAaPA).
                                                                 0x3 = Stage 1 + stage 2 (VAaPA). */
        uint64_t addr                  : 52; /**< [ 63: 12](SR/W) Requested input address. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_gatos_addr_s cn; */
};
typedef union cavm_smmux_s_gatos_addr cavm_smmux_s_gatos_addr_t;

static inline uint64_t CAVM_SMMUX_S_GATOS_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_GATOS_ADDR(uint64_t a)
{
    if (a==0)
        return 0x830000008110ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_GATOS_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_GATOS_ADDR(a) cavm_smmux_s_gatos_addr_t
#define bustype_CAVM_SMMUX_S_GATOS_ADDR(a) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_S_GATOS_ADDR(a) "SMMUX_S_GATOS_ADDR"
#define device_bar_CAVM_SMMUX_S_GATOS_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_GATOS_ADDR(a) (a)
#define arguments_CAVM_SMMUX_S_GATOS_ADDR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_gatos_ctrl
 *
 * SMMU Secure GATOS Control Register
 */
union cavm_smmux_s_gatos_ctrl
{
    uint32_t u;
    struct cavm_smmux_s_gatos_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t run                   : 1;  /**< [  0:  0](SR/W1S/H) Run ATOS translation. Software should write this bit to one to initiate the
                                                                 translation operation, after initializing the SMMU()_S_GATOS_SID and
                                                                 SMMU()_S_GATOS_ADDR registers. The SMMU clears [RUN] after the translation
                                                                 completes and its result is visible in SMMU()_S_GATOS_PAR. A write of zero to
                                                                 this flag might change the value of the flag but has no other effect. Software
                                                                 must only write zero to this flag when the flag is zero. */
#else /* Word 0 - Little Endian */
        uint32_t run                   : 1;  /**< [  0:  0](SR/W1S/H) Run ATOS translation. Software should write this bit to one to initiate the
                                                                 translation operation, after initializing the SMMU()_S_GATOS_SID and
                                                                 SMMU()_S_GATOS_ADDR registers. The SMMU clears [RUN] after the translation
                                                                 completes and its result is visible in SMMU()_S_GATOS_PAR. A write of zero to
                                                                 this flag might change the value of the flag but has no other effect. Software
                                                                 must only write zero to this flag when the flag is zero. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_gatos_ctrl_s cn; */
};
typedef union cavm_smmux_s_gatos_ctrl cavm_smmux_s_gatos_ctrl_t;

static inline uint64_t CAVM_SMMUX_S_GATOS_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_GATOS_CTRL(uint64_t a)
{
    if (a==0)
        return 0x830000008100ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_GATOS_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_GATOS_CTRL(a) cavm_smmux_s_gatos_ctrl_t
#define bustype_CAVM_SMMUX_S_GATOS_CTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_GATOS_CTRL(a) "SMMUX_S_GATOS_CTRL"
#define device_bar_CAVM_SMMUX_S_GATOS_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_GATOS_CTRL(a) (a)
#define arguments_CAVM_SMMUX_S_GATOS_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB) smmu#_s_gatos_par
 *
 * SMMU GATOS Address Register
 */
union cavm_smmux_s_gatos_par
{
    uint64_t u;
    struct cavm_smmux_s_gatos_par_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t par                   : 64; /**< [ 63:  0](SRO/H) Bit zero determines the format of the register.
                                                                 Fault/error status:
                                                                   0 = No fault.
                                                                   1 = Fault/translation error.

                                                                 See SMMUv3 spec for the encodings. */
#else /* Word 0 - Little Endian */
        uint64_t par                   : 64; /**< [ 63:  0](SRO/H) Bit zero determines the format of the register.
                                                                 Fault/error status:
                                                                   0 = No fault.
                                                                   1 = Fault/translation error.

                                                                 See SMMUv3 spec for the encodings. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_gatos_par_s cn; */
};
typedef union cavm_smmux_s_gatos_par cavm_smmux_s_gatos_par_t;

static inline uint64_t CAVM_SMMUX_S_GATOS_PAR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_GATOS_PAR(uint64_t a)
{
    if (a==0)
        return 0x830000008118ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_GATOS_PAR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_GATOS_PAR(a) cavm_smmux_s_gatos_par_t
#define bustype_CAVM_SMMUX_S_GATOS_PAR(a) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_S_GATOS_PAR(a) "SMMUX_S_GATOS_PAR"
#define device_bar_CAVM_SMMUX_S_GATOS_PAR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_GATOS_PAR(a) (a)
#define arguments_CAVM_SMMUX_S_GATOS_PAR(a) (a),-1,-1,-1

/**
 * Register (NCB) smmu#_s_gatos_sid
 *
 * SMMU GATOS SID Register
 */
union cavm_smmux_s_gatos_sid
{
    uint64_t u;
    struct cavm_smmux_s_gatos_sid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_54_63        : 10;
        uint64_t ssec                  : 1;  /**< [ 53: 53](SR/W) Secure stream lookup.
                                                                 0 = Nonsecure stream lookup. [STREAMID] is a nonsecure StreamID.
                                                                 1 = Secure stream lookup. [STREAMID] is a secure StreamID. */
        uint64_t ssid_valid            : 1;  /**< [ 52: 52](SRO) SubstreamID valid. */
        uint64_t substreamid           : 20; /**< [ 51: 32](SRO) SubstreamID of request.
                                                                 If SMMU()_IDR1[SSIDSIZE]\<20, bits \<51:32+SMMU()_IDR1[SSIDSIZE]\> are RES0. */
        uint64_t reserved_22_31        : 10;
        uint64_t streamid              : 22; /**< [ 21:  0](SR/W) StreamID of request.
                                                                 This is written with the StreamID (used to locate translations/CDs) of the request
                                                                 later submitted
                                                                 to SMMU()_GATOS_ADDR.
                                                                 If SMMU()_IDR1[SIDSIZE]\<32, bits \<31:SMMU()_IDR1[SIDSIZE]\> are RES0. */
#else /* Word 0 - Little Endian */
        uint64_t streamid              : 22; /**< [ 21:  0](SR/W) StreamID of request.
                                                                 This is written with the StreamID (used to locate translations/CDs) of the request
                                                                 later submitted
                                                                 to SMMU()_GATOS_ADDR.
                                                                 If SMMU()_IDR1[SIDSIZE]\<32, bits \<31:SMMU()_IDR1[SIDSIZE]\> are RES0. */
        uint64_t reserved_22_31        : 10;
        uint64_t substreamid           : 20; /**< [ 51: 32](SRO) SubstreamID of request.
                                                                 If SMMU()_IDR1[SSIDSIZE]\<20, bits \<51:32+SMMU()_IDR1[SSIDSIZE]\> are RES0. */
        uint64_t ssid_valid            : 1;  /**< [ 52: 52](SRO) SubstreamID valid. */
        uint64_t ssec                  : 1;  /**< [ 53: 53](SR/W) Secure stream lookup.
                                                                 0 = Nonsecure stream lookup. [STREAMID] is a nonsecure StreamID.
                                                                 1 = Secure stream lookup. [STREAMID] is a secure StreamID. */
        uint64_t reserved_54_63        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_gatos_sid_s cn; */
};
typedef union cavm_smmux_s_gatos_sid cavm_smmux_s_gatos_sid_t;

static inline uint64_t CAVM_SMMUX_S_GATOS_SID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_GATOS_SID(uint64_t a)
{
    if (a==0)
        return 0x830000008108ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_GATOS_SID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_GATOS_SID(a) cavm_smmux_s_gatos_sid_t
#define bustype_CAVM_SMMUX_S_GATOS_SID(a) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_S_GATOS_SID(a) "SMMUX_S_GATOS_SID"
#define device_bar_CAVM_SMMUX_S_GATOS_SID(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_GATOS_SID(a) (a)
#define arguments_CAVM_SMMUX_S_GATOS_SID(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_gbpa
 *
 * SMMU Secure Global Bypass Attribute Register
 */
union cavm_smmux_s_gbpa
{
    uint32_t u;
    struct cavm_smmux_s_gbpa_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t update                : 1;  /**< [ 31: 31](SRO) Update/completion flag. */
        uint32_t reserved_21_30        : 10;
        uint32_t abrt                  : 1;  /**< [ 20: 20](SR/W) Abort all incoming transactions.
                                                                 0 = Do not abort; transactions bypass the SMMU with attributes given by other
                                                                 fields in this register.
                                                                 1 = Abort all incoming transactions.

                                                                 The SMMU makes no record of transactions aborted using this flag. */
        uint32_t instcfg               : 2;  /**< [ 19: 18](SR/W) Instruction/data override.
                                                                      0x0 = Use incoming.
                                                                      0x1 = Reserved (behaves as 0x0).
                                                                      0x2 = Data.
                                                                      0x3 = Instruction.

                                                                 Only affects reads; writes are always output as data. */
        uint32_t privcfg               : 2;  /**< [ 17: 16](SR/W) User/privileged override.
                                                                      0x0 = Use incoming.
                                                                      0x1 = Reserved (behaves as 0x0).
                                                                      0x2 = Unprivileged.
                                                                      0x3 = Privileged. */
        uint32_t nscfg                 : 2;  /**< [ 15: 14](SR/W) NS override.
                                                                    0x0 = Use incoming.
                                                                    0x1 = Reserved (behaves as 0x0).
                                                                    0x2 = Secure.
                                                                    0x3 = Nonsecure. */
        uint32_t shcfg                 : 2;  /**< [ 13: 12](SR/W) Shareability override.
                                                                    0x0 = NSH.
                                                                    0x1 = Use incoming.
                                                                    0x2 = OSH.
                                                                    0x3 = ISH. */
        uint32_t alloccfg              : 4;  /**< [ 11:  8](SR/W) 0xxx:    Use incoming RA/WA/TR allocation/transient hints.
                                                                 1RWT: Hints are overridden to given values:
                                                                   * Read allocate = R.
                                                                   * Write allocate = W.
                                                                   * Transient = T.

                                                                   When overridden by this field, for each of RA/WA and TR, both inner- and
                                                                 outer-hints are set to the same value. Since it is not architecturally possible
                                                                 to express hints for types that are device or normal-nonCacheable, this field
                                                                 has no effect on memory types that are not normal- WB or normal-WT, whether such
                                                                 types are provided with an upstream transaction or overridden using
                                                                 MTCFG/MemAttr. */
        uint32_t reserved_5_7          : 3;
        uint32_t mtcfg                 : 1;  /**< [  4:  4](SR/W) Memory type override.
                                                                 0 = Use incoming memory type.
                                                                 1 = Override incoming memory type using MemAttr field. */
        uint32_t memattr               : 4;  /**< [  3:  0](SR/W) Memory type, encoded the same as SMMU_STE_S[MEMATTR]. */
#else /* Word 0 - Little Endian */
        uint32_t memattr               : 4;  /**< [  3:  0](SR/W) Memory type, encoded the same as SMMU_STE_S[MEMATTR]. */
        uint32_t mtcfg                 : 1;  /**< [  4:  4](SR/W) Memory type override.
                                                                 0 = Use incoming memory type.
                                                                 1 = Override incoming memory type using MemAttr field. */
        uint32_t reserved_5_7          : 3;
        uint32_t alloccfg              : 4;  /**< [ 11:  8](SR/W) 0xxx:    Use incoming RA/WA/TR allocation/transient hints.
                                                                 1RWT: Hints are overridden to given values:
                                                                   * Read allocate = R.
                                                                   * Write allocate = W.
                                                                   * Transient = T.

                                                                   When overridden by this field, for each of RA/WA and TR, both inner- and
                                                                 outer-hints are set to the same value. Since it is not architecturally possible
                                                                 to express hints for types that are device or normal-nonCacheable, this field
                                                                 has no effect on memory types that are not normal- WB or normal-WT, whether such
                                                                 types are provided with an upstream transaction or overridden using
                                                                 MTCFG/MemAttr. */
        uint32_t shcfg                 : 2;  /**< [ 13: 12](SR/W) Shareability override.
                                                                    0x0 = NSH.
                                                                    0x1 = Use incoming.
                                                                    0x2 = OSH.
                                                                    0x3 = ISH. */
        uint32_t nscfg                 : 2;  /**< [ 15: 14](SR/W) NS override.
                                                                    0x0 = Use incoming.
                                                                    0x1 = Reserved (behaves as 0x0).
                                                                    0x2 = Secure.
                                                                    0x3 = Nonsecure. */
        uint32_t privcfg               : 2;  /**< [ 17: 16](SR/W) User/privileged override.
                                                                      0x0 = Use incoming.
                                                                      0x1 = Reserved (behaves as 0x0).
                                                                      0x2 = Unprivileged.
                                                                      0x3 = Privileged. */
        uint32_t instcfg               : 2;  /**< [ 19: 18](SR/W) Instruction/data override.
                                                                      0x0 = Use incoming.
                                                                      0x1 = Reserved (behaves as 0x0).
                                                                      0x2 = Data.
                                                                      0x3 = Instruction.

                                                                 Only affects reads; writes are always output as data. */
        uint32_t abrt                  : 1;  /**< [ 20: 20](SR/W) Abort all incoming transactions.
                                                                 0 = Do not abort; transactions bypass the SMMU with attributes given by other
                                                                 fields in this register.
                                                                 1 = Abort all incoming transactions.

                                                                 The SMMU makes no record of transactions aborted using this flag. */
        uint32_t reserved_21_30        : 10;
        uint32_t update                : 1;  /**< [ 31: 31](SRO) Update/completion flag. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_gbpa_s cn; */
};
typedef union cavm_smmux_s_gbpa cavm_smmux_s_gbpa_t;

static inline uint64_t CAVM_SMMUX_S_GBPA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_GBPA(uint64_t a)
{
    if (a==0)
        return 0x830000008044ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_GBPA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_GBPA(a) cavm_smmux_s_gbpa_t
#define bustype_CAVM_SMMUX_S_GBPA(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_GBPA(a) "SMMUX_S_GBPA"
#define device_bar_CAVM_SMMUX_S_GBPA(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_GBPA(a) (a)
#define arguments_CAVM_SMMUX_S_GBPA(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_gbpmpam
 *
 * SMMU Global Bypass MPAM Configuration Register
 */
union cavm_smmux_s_gbpmpam
{
    uint32_t u;
    struct cavm_smmux_s_gbpmpam_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t update                : 1;  /**< [ 31: 31](SR/W/H) Update completion flag. */
        uint32_t reserved_17_30        : 14;
        uint32_t gbp_pmg               : 1;  /**< [ 16: 16](SR/W) "* This field determines the default PMG applied to all client transactions that
                                                                 bypass translation for the reasons described below.
                                                                 * Bits above the supported PMG bit width, as indicated by SMMU_MPAMIDR[PMG_MAX], are RES0.
                                                                 * If a value is programmed that is greater than SMMU_MPAMIDR[PMG_MAX], an UNKNOWN PMG is used." */
        uint32_t reserved_9_15         : 7;
        uint32_t gbp_partid            : 9;  /**< [  8:  0](SR/W) "* This field determines the default PARTID applied to all client transactions
                                                                 that bypass translation for the reasons described below.
                                                                 * Bits above the supported PARTID bit width, as indicated by SMMU_MPAMIDR.PARTID_MAX, are RES0.
                                                                 * If a value is programmed that is greater than SMMU_MPAMIDR.PARTID_MAX, an
                                                                 UNKNOWN PARTID is used." */
#else /* Word 0 - Little Endian */
        uint32_t gbp_partid            : 9;  /**< [  8:  0](SR/W) "* This field determines the default PARTID applied to all client transactions
                                                                 that bypass translation for the reasons described below.
                                                                 * Bits above the supported PARTID bit width, as indicated by SMMU_MPAMIDR.PARTID_MAX, are RES0.
                                                                 * If a value is programmed that is greater than SMMU_MPAMIDR.PARTID_MAX, an
                                                                 UNKNOWN PARTID is used." */
        uint32_t reserved_9_15         : 7;
        uint32_t gbp_pmg               : 1;  /**< [ 16: 16](SR/W) "* This field determines the default PMG applied to all client transactions that
                                                                 bypass translation for the reasons described below.
                                                                 * Bits above the supported PMG bit width, as indicated by SMMU_MPAMIDR[PMG_MAX], are RES0.
                                                                 * If a value is programmed that is greater than SMMU_MPAMIDR[PMG_MAX], an UNKNOWN PMG is used." */
        uint32_t reserved_17_30        : 14;
        uint32_t update                : 1;  /**< [ 31: 31](SR/W/H) Update completion flag. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_gbpmpam_s cn; */
};
typedef union cavm_smmux_s_gbpmpam cavm_smmux_s_gbpmpam_t;

static inline uint64_t CAVM_SMMUX_S_GBPMPAM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_GBPMPAM(uint64_t a)
{
    if (a==0)
        return 0x83000000813cll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_GBPMPAM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_GBPMPAM(a) cavm_smmux_s_gbpmpam_t
#define bustype_CAVM_SMMUX_S_GBPMPAM(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_GBPMPAM(a) "SMMUX_S_GBPMPAM"
#define device_bar_CAVM_SMMUX_S_GBPMPAM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_GBPMPAM(a) (a)
#define arguments_CAVM_SMMUX_S_GBPMPAM(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_gerror
 *
 * SMMU Secure GERROR Register
 */
union cavm_smmux_s_gerror
{
    uint32_t u;
    struct cavm_smmux_s_gerror_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_9_31         : 23;
        uint32_t sfm_err               : 1;  /**< [  8:  8](SRO) The SMMU has entered service failure mode. Traffic through the SMMU might be
                                                                 affected. Depending on the origin of the error, the SMMU might stop processing
                                                                 commands and recording events. The RAS registers describe the
                                                                 error. Acknowledgement of this error via GERRORN does not clear this error,
                                                                 which is cleared in an implementation defined way. SFM triggers both
                                                                 SMMU()_GERROR[SFM_ERR] and SMMU()_S_GERROR[SFM_ERR]. */
        uint32_t msi_gerror_abt_err    : 1;  /**< [  7:  7](SRO) A GERROR MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs. */
        uint32_t reserved_6            : 1;
        uint32_t msi_eventq_abt_err    : 1;  /**< [  5:  5](SRO) An event queue MSI was terminated with abort. Activation of this error does not
                                                                 affect future MSIs. */
        uint32_t msi_cmdq_abt_err      : 1;  /**< [  4:  4](SRO) A CMD_SYNC MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs. */
        uint32_t reserved_3            : 1;
        uint32_t eventq_abt_err        : 1;  /**< [  2:  2](SRO/H) A write to the event queue was terminated with abort and event records might have been lost. */
        uint32_t reserved_1            : 1;
        uint32_t cmdq_err              : 1;  /**< [  0:  0](SRO/H) A command has been encountered that cannot be processed. SMMU()_CMDQ_CONS[ERRX] has
                                                                 been updated with a reason code and command processing has stopped.
                                                                 Commands are not processed while this error is active. */
#else /* Word 0 - Little Endian */
        uint32_t cmdq_err              : 1;  /**< [  0:  0](SRO/H) A command has been encountered that cannot be processed. SMMU()_CMDQ_CONS[ERRX] has
                                                                 been updated with a reason code and command processing has stopped.
                                                                 Commands are not processed while this error is active. */
        uint32_t reserved_1            : 1;
        uint32_t eventq_abt_err        : 1;  /**< [  2:  2](SRO/H) A write to the event queue was terminated with abort and event records might have been lost. */
        uint32_t reserved_3            : 1;
        uint32_t msi_cmdq_abt_err      : 1;  /**< [  4:  4](SRO) A CMD_SYNC MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs. */
        uint32_t msi_eventq_abt_err    : 1;  /**< [  5:  5](SRO) An event queue MSI was terminated with abort. Activation of this error does not
                                                                 affect future MSIs. */
        uint32_t reserved_6            : 1;
        uint32_t msi_gerror_abt_err    : 1;  /**< [  7:  7](SRO) A GERROR MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs. */
        uint32_t sfm_err               : 1;  /**< [  8:  8](SRO) The SMMU has entered service failure mode. Traffic through the SMMU might be
                                                                 affected. Depending on the origin of the error, the SMMU might stop processing
                                                                 commands and recording events. The RAS registers describe the
                                                                 error. Acknowledgement of this error via GERRORN does not clear this error,
                                                                 which is cleared in an implementation defined way. SFM triggers both
                                                                 SMMU()_GERROR[SFM_ERR] and SMMU()_S_GERROR[SFM_ERR]. */
        uint32_t reserved_9_31         : 23;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_gerror_s cn; */
};
typedef union cavm_smmux_s_gerror cavm_smmux_s_gerror_t;

static inline uint64_t CAVM_SMMUX_S_GERROR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_GERROR(uint64_t a)
{
    if (a==0)
        return 0x830000008060ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_GERROR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_GERROR(a) cavm_smmux_s_gerror_t
#define bustype_CAVM_SMMUX_S_GERROR(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_GERROR(a) "SMMUX_S_GERROR"
#define device_bar_CAVM_SMMUX_S_GERROR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_GERROR(a) (a)
#define arguments_CAVM_SMMUX_S_GERROR(a) (a),-1,-1,-1

/**
 * Register (NCB) smmu#_s_gerror_irq_cfg0
 *
 * SMMU Secure GERROR IRQ Configuration 0 Register
 * Registers SMMU()_S_GERROR_IRQ_CFG0/1/2 are guarded by the respective
 * SMMU()_S_IRQ_CTRL[GERROR_IRQEN] and must only be modified when
 * SMMU()_S_IRQ_CTRL[GERROR_IRQEN]=0.
 */
union cavm_smmux_s_gerror_irq_cfg0
{
    uint64_t u;
    struct cavm_smmux_s_gerror_irq_cfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t addr                  : 50; /**< [ 51:  2](SR/W) Physical address of MSI target register.
                                                                 The effective address has ADDR\<63:52\> = 0x0 and [ADDR]\<1:0\> = 0x0.

                                                                 Note unlike most CNXXXX MSI-X address registers, this is a physical address, not
                                                                 a virtual address.

                                                                 If [ADDR]=0x0, no MSI is sent.

                                                                 The interrupt message will use the SMMU's stream ID. */
        uint64_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_1          : 2;
        uint64_t addr                  : 50; /**< [ 51:  2](SR/W) Physical address of MSI target register.
                                                                 The effective address has ADDR\<63:52\> = 0x0 and [ADDR]\<1:0\> = 0x0.

                                                                 Note unlike most CNXXXX MSI-X address registers, this is a physical address, not
                                                                 a virtual address.

                                                                 If [ADDR]=0x0, no MSI is sent.

                                                                 The interrupt message will use the SMMU's stream ID. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_gerror_irq_cfg0_s cn; */
};
typedef union cavm_smmux_s_gerror_irq_cfg0 cavm_smmux_s_gerror_irq_cfg0_t;

static inline uint64_t CAVM_SMMUX_S_GERROR_IRQ_CFG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_GERROR_IRQ_CFG0(uint64_t a)
{
    if (a==0)
        return 0x830000008068ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_GERROR_IRQ_CFG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_GERROR_IRQ_CFG0(a) cavm_smmux_s_gerror_irq_cfg0_t
#define bustype_CAVM_SMMUX_S_GERROR_IRQ_CFG0(a) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_S_GERROR_IRQ_CFG0(a) "SMMUX_S_GERROR_IRQ_CFG0"
#define device_bar_CAVM_SMMUX_S_GERROR_IRQ_CFG0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_GERROR_IRQ_CFG0(a) (a)
#define arguments_CAVM_SMMUX_S_GERROR_IRQ_CFG0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_gerror_irq_cfg1
 *
 * SMMU Secure GERROR IRQ Configuration 1 Register
 */
union cavm_smmux_s_gerror_irq_cfg1
{
    uint32_t u;
    struct cavm_smmux_s_gerror_irq_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](SR/W) MSI data payload. */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](SR/W) MSI data payload. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_gerror_irq_cfg1_s cn; */
};
typedef union cavm_smmux_s_gerror_irq_cfg1 cavm_smmux_s_gerror_irq_cfg1_t;

static inline uint64_t CAVM_SMMUX_S_GERROR_IRQ_CFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_GERROR_IRQ_CFG1(uint64_t a)
{
    if (a==0)
        return 0x830000008070ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_GERROR_IRQ_CFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_GERROR_IRQ_CFG1(a) cavm_smmux_s_gerror_irq_cfg1_t
#define bustype_CAVM_SMMUX_S_GERROR_IRQ_CFG1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_GERROR_IRQ_CFG1(a) "SMMUX_S_GERROR_IRQ_CFG1"
#define device_bar_CAVM_SMMUX_S_GERROR_IRQ_CFG1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_GERROR_IRQ_CFG1(a) (a)
#define arguments_CAVM_SMMUX_S_GERROR_IRQ_CFG1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_gerror_irq_cfg2
 *
 * SMMU Secure GERROR IRQ Configuration 2 Register
 */
union cavm_smmux_s_gerror_irq_cfg2
{
    uint32_t u;
    struct cavm_smmux_s_gerror_irq_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t sh                    : 2;  /**< [  5:  4](SR/W) Shareability.
                                                                 0x0 = NSH.
                                                                 0x1 = Reserved (treated as 0x0).
                                                                 0x2 = OSH.
                                                                 0x3 = ISH.

                                                                 When [MEMATTR] specifies a device memory type, the contents of this field are
                                                                 ignored and the shareability is effectively OSH. */
        uint32_t memattr               : 4;  /**< [  3:  0](SR/W) Memory type, encoded the same as SMMU_STE_S[MEMATTR]. */
#else /* Word 0 - Little Endian */
        uint32_t memattr               : 4;  /**< [  3:  0](SR/W) Memory type, encoded the same as SMMU_STE_S[MEMATTR]. */
        uint32_t sh                    : 2;  /**< [  5:  4](SR/W) Shareability.
                                                                 0x0 = NSH.
                                                                 0x1 = Reserved (treated as 0x0).
                                                                 0x2 = OSH.
                                                                 0x3 = ISH.

                                                                 When [MEMATTR] specifies a device memory type, the contents of this field are
                                                                 ignored and the shareability is effectively OSH. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_gerror_irq_cfg2_s cn; */
};
typedef union cavm_smmux_s_gerror_irq_cfg2 cavm_smmux_s_gerror_irq_cfg2_t;

static inline uint64_t CAVM_SMMUX_S_GERROR_IRQ_CFG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_GERROR_IRQ_CFG2(uint64_t a)
{
    if (a==0)
        return 0x830000008074ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_GERROR_IRQ_CFG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_GERROR_IRQ_CFG2(a) cavm_smmux_s_gerror_irq_cfg2_t
#define bustype_CAVM_SMMUX_S_GERROR_IRQ_CFG2(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_GERROR_IRQ_CFG2(a) "SMMUX_S_GERROR_IRQ_CFG2"
#define device_bar_CAVM_SMMUX_S_GERROR_IRQ_CFG2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_GERROR_IRQ_CFG2(a) (a)
#define arguments_CAVM_SMMUX_S_GERROR_IRQ_CFG2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_gerrorn
 *
 * SMMU Secure GERRORN Register
 */
union cavm_smmux_s_gerrorn
{
    uint32_t u;
    struct cavm_smmux_s_gerrorn_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_9_31         : 23;
        uint32_t sfm_err               : 1;  /**< [  8:  8](SR/W) The SMMU has entered service failure mode. Traffic through the SMMU might be
                                                                 affected. Depending on the origin of the error, the SMMU might stop processing
                                                                 commands and recording events. The RAS registers describe the
                                                                 error. Acknowledgement of this error via GERRORN does not clear this error,
                                                                 which is cleared in an implementation defined way. SFM triggers both
                                                                 SMMU()_GERROR[SFM_ERR] and SMMU()_S_GERROR[SFM_ERR]. */
        uint32_t msi_gerror_abt_err    : 1;  /**< [  7:  7](SR/W) A GERROR MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs. */
        uint32_t reserved_6            : 1;
        uint32_t msi_eventq_abt_err    : 1;  /**< [  5:  5](SR/W) An event queue MSI was terminated with abort. Activation of this error does not
                                                                 affect future MSIs. */
        uint32_t msi_cmdq_abt_err      : 1;  /**< [  4:  4](SR/W) A CMD_SYNC MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs. */
        uint32_t reserved_3            : 1;
        uint32_t eventq_abt_err        : 1;  /**< [  2:  2](SR/W) A write to the event queue was terminated with abort and event records might have been lost. */
        uint32_t reserved_1            : 1;
        uint32_t cmdq_err              : 1;  /**< [  0:  0](SR/W) A command has been encountered that cannot be processed. SMMU()_CMDQ_CONS[ERRX] has
                                                                 been updated with a reason code and command processing has stopped.
                                                                 Commands are not processed while this error is active. */
#else /* Word 0 - Little Endian */
        uint32_t cmdq_err              : 1;  /**< [  0:  0](SR/W) A command has been encountered that cannot be processed. SMMU()_CMDQ_CONS[ERRX] has
                                                                 been updated with a reason code and command processing has stopped.
                                                                 Commands are not processed while this error is active. */
        uint32_t reserved_1            : 1;
        uint32_t eventq_abt_err        : 1;  /**< [  2:  2](SR/W) A write to the event queue was terminated with abort and event records might have been lost. */
        uint32_t reserved_3            : 1;
        uint32_t msi_cmdq_abt_err      : 1;  /**< [  4:  4](SR/W) A CMD_SYNC MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs. */
        uint32_t msi_eventq_abt_err    : 1;  /**< [  5:  5](SR/W) An event queue MSI was terminated with abort. Activation of this error does not
                                                                 affect future MSIs. */
        uint32_t reserved_6            : 1;
        uint32_t msi_gerror_abt_err    : 1;  /**< [  7:  7](SR/W) A GERROR MSI was terminated with abort. Activation of this error does not affect
                                                                 future MSIs. */
        uint32_t sfm_err               : 1;  /**< [  8:  8](SR/W) The SMMU has entered service failure mode. Traffic through the SMMU might be
                                                                 affected. Depending on the origin of the error, the SMMU might stop processing
                                                                 commands and recording events. The RAS registers describe the
                                                                 error. Acknowledgement of this error via GERRORN does not clear this error,
                                                                 which is cleared in an implementation defined way. SFM triggers both
                                                                 SMMU()_GERROR[SFM_ERR] and SMMU()_S_GERROR[SFM_ERR]. */
        uint32_t reserved_9_31         : 23;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_gerrorn_s cn; */
};
typedef union cavm_smmux_s_gerrorn cavm_smmux_s_gerrorn_t;

static inline uint64_t CAVM_SMMUX_S_GERRORN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_GERRORN(uint64_t a)
{
    if (a==0)
        return 0x830000008064ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_GERRORN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_GERRORN(a) cavm_smmux_s_gerrorn_t
#define bustype_CAVM_SMMUX_S_GERRORN(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_GERRORN(a) "SMMUX_S_GERRORN"
#define device_bar_CAVM_SMMUX_S_GERRORN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_GERRORN(a) (a)
#define arguments_CAVM_SMMUX_S_GERRORN(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_gmpam
 *
 * SMMU Global MPAM Configuration Register
 */
union cavm_smmux_s_gmpam
{
    uint32_t u;
    struct cavm_smmux_s_gmpam_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t update                : 1;  /**< [ 31: 31](SRO) Update completion flag. */
        uint32_t reserved_17_30        : 14;
        uint32_t so_pmg                : 1;  /**< [ 16: 16](SR/W) "* This field determines the PMG of the SMMU-originated transactions described below.
                                                                 * Bits above the supported PMG bit width, as indicated by SMMU_MPAMIDR[PMG_MAX], are RES0.
                                                                 * If a value is programmed that is greater than the corresponding PMG_MAX, an UNKNOWN PMG is used." */
        uint32_t reserved_9_15         : 7;
        uint32_t so_partid             : 9;  /**< [  8:  0](SR/W) "* This field determines the PARTID of the SMMU-originated transactions described below.
                                                                 * Bits above the supported PARTID bit width, as indicated by SMMU_MPAMIDR.PARTID_MAX, are RES0.
                                                                 * If a value is programmed that is greater than SMMU_MPAMIDR.PARTID_MAX, an
                                                                 UNKNOWN PARTID is used." */
#else /* Word 0 - Little Endian */
        uint32_t so_partid             : 9;  /**< [  8:  0](SR/W) "* This field determines the PARTID of the SMMU-originated transactions described below.
                                                                 * Bits above the supported PARTID bit width, as indicated by SMMU_MPAMIDR.PARTID_MAX, are RES0.
                                                                 * If a value is programmed that is greater than SMMU_MPAMIDR.PARTID_MAX, an
                                                                 UNKNOWN PARTID is used." */
        uint32_t reserved_9_15         : 7;
        uint32_t so_pmg                : 1;  /**< [ 16: 16](SR/W) "* This field determines the PMG of the SMMU-originated transactions described below.
                                                                 * Bits above the supported PMG bit width, as indicated by SMMU_MPAMIDR[PMG_MAX], are RES0.
                                                                 * If a value is programmed that is greater than the corresponding PMG_MAX, an UNKNOWN PMG is used." */
        uint32_t reserved_17_30        : 14;
        uint32_t update                : 1;  /**< [ 31: 31](SRO) Update completion flag. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_gmpam_s cn; */
};
typedef union cavm_smmux_s_gmpam cavm_smmux_s_gmpam_t;

static inline uint64_t CAVM_SMMUX_S_GMPAM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_GMPAM(uint64_t a)
{
    if (a==0)
        return 0x830000008138ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_GMPAM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_GMPAM(a) cavm_smmux_s_gmpam_t
#define bustype_CAVM_SMMUX_S_GMPAM(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_GMPAM(a) "SMMUX_S_GMPAM"
#define device_bar_CAVM_SMMUX_S_GMPAM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_GMPAM(a) (a)
#define arguments_CAVM_SMMUX_S_GMPAM(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_idr0
 *
 * SMMU Secure IDR0 Register
 */
union cavm_smmux_s_idr0
{
    uint32_t u;
    struct cavm_smmux_s_idr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ecmdq                 : 1;  /**< [ 31: 31](SRO) Support for enhanced Command queue interface for Secure programming interface.

                                                                 0 = Secure Enhanced Command queue interface not supported. SMMU()_S_IDR6 is RES0.

                                                                 1 = Secure Enhanced Command queue interface details are advertised in SMMU()_S_IDR6. */
        uint32_t reserved_26_30        : 5;
        uint32_t stall_model           : 2;  /**< [ 25: 24](SRO) Stalling fault model support. Encoded identically to SMMU()_IDR0[STALL_MODEL],
                                                                 this field indicates the implementation's support for stall/terminate fault
                                                                 models.

                                                                 For CNXXXX, no stalling. */
        uint32_t reserved_14_23        : 10;
        uint32_t msi                   : 1;  /**< [ 13: 13](SRO) Secure message signaled interrupts are supported. */
        uint32_t reserved_0_12         : 13;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_12         : 13;
        uint32_t msi                   : 1;  /**< [ 13: 13](SRO) Secure message signaled interrupts are supported. */
        uint32_t reserved_14_23        : 10;
        uint32_t stall_model           : 2;  /**< [ 25: 24](SRO) Stalling fault model support. Encoded identically to SMMU()_IDR0[STALL_MODEL],
                                                                 this field indicates the implementation's support for stall/terminate fault
                                                                 models.

                                                                 For CNXXXX, no stalling. */
        uint32_t reserved_26_30        : 5;
        uint32_t ecmdq                 : 1;  /**< [ 31: 31](SRO) Support for enhanced Command queue interface for Secure programming interface.

                                                                 0 = Secure Enhanced Command queue interface not supported. SMMU()_S_IDR6 is RES0.

                                                                 1 = Secure Enhanced Command queue interface details are advertised in SMMU()_S_IDR6. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_idr0_s cn10; */
    struct cavm_smmux_s_idr0_cn10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_26_31        : 6;
        uint32_t stall_model           : 2;  /**< [ 25: 24](SRO) Stalling fault model support. Encoded identically to SMMU()_IDR0[STALL_MODEL],
                                                                 this field indicates the implementation's support for stall/terminate fault
                                                                 models.

                                                                 For CNXXXX, no stalling. */
        uint32_t reserved_14_23        : 10;
        uint32_t msi                   : 1;  /**< [ 13: 13](SRO) Secure message signaled interrupts are supported. */
        uint32_t reserved_0_12         : 13;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_12         : 13;
        uint32_t msi                   : 1;  /**< [ 13: 13](SRO) Secure message signaled interrupts are supported. */
        uint32_t reserved_14_23        : 10;
        uint32_t stall_model           : 2;  /**< [ 25: 24](SRO) Stalling fault model support. Encoded identically to SMMU()_IDR0[STALL_MODEL],
                                                                 this field indicates the implementation's support for stall/terminate fault
                                                                 models.

                                                                 For CNXXXX, no stalling. */
        uint32_t reserved_26_31        : 6;
#endif /* Word 0 - End */
    } cn10ka;
    /* struct cavm_smmux_s_idr0_s cn10kb; */
    /* struct cavm_smmux_s_idr0_cn10ka cnf10ka; */
    /* struct cavm_smmux_s_idr0_cn10ka cnf10kb; */
};
typedef union cavm_smmux_s_idr0 cavm_smmux_s_idr0_t;

static inline uint64_t CAVM_SMMUX_S_IDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IDR0(uint64_t a)
{
    if (a==0)
        return 0x830000008000ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IDR0(a) cavm_smmux_s_idr0_t
#define bustype_CAVM_SMMUX_S_IDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_IDR0(a) "SMMUX_S_IDR0"
#define device_bar_CAVM_SMMUX_S_IDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IDR0(a) (a)
#define arguments_CAVM_SMMUX_S_IDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_idr1
 *
 * SMMU Secure IDR1 Register
 */
union cavm_smmux_s_idr1
{
    uint32_t u;
    struct cavm_smmux_s_idr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t secure_impl           : 1;  /**< [ 31: 31](SRO) Security implemented.
                                                                 For CNXXXX, reads as one when security is implemented in the SMMU. */
        uint32_t reserved_30           : 1;
        uint32_t sel2                  : 1;  /**< [ 29: 29](SRO) Secure EL2 and Secure stage 2 support.
                                                                 0 = Secure EL2 and Secure stage 2 are not supported.
                                                                 1 = Secure EL2 is supported and Secure STEs are permitted to be configured with
                                                                 STE.STRW == 0b10. Secure stage 2 is supported and Secure STEs are permitted to be
                                                                 configured with STE.Config[1] == 1.

                                                                 Secure EL2 and Secure stage 2 support is optional in SMMUv3.2 and later.
                                                                 SEL2 == 0 if SMMU_IDR0.S1P == 0 or if SMMU_IDR0.S2P == 0. */
        uint32_t reserved_6_28         : 23;
        uint32_t s_sidsize             : 6;  /**< [  5:  0](SRO) Secure StreamID size. Equivalent to SMMU()_IDR1[SIDSIZE] (and encoded the same),
                                                                 this field determines the maximum secure StreamID value and therefore the
                                                                 maximum size of the secure stream table. */
#else /* Word 0 - Little Endian */
        uint32_t s_sidsize             : 6;  /**< [  5:  0](SRO) Secure StreamID size. Equivalent to SMMU()_IDR1[SIDSIZE] (and encoded the same),
                                                                 this field determines the maximum secure StreamID value and therefore the
                                                                 maximum size of the secure stream table. */
        uint32_t reserved_6_28         : 23;
        uint32_t sel2                  : 1;  /**< [ 29: 29](SRO) Secure EL2 and Secure stage 2 support.
                                                                 0 = Secure EL2 and Secure stage 2 are not supported.
                                                                 1 = Secure EL2 is supported and Secure STEs are permitted to be configured with
                                                                 STE.STRW == 0b10. Secure stage 2 is supported and Secure STEs are permitted to be
                                                                 configured with STE.Config[1] == 1.

                                                                 Secure EL2 and Secure stage 2 support is optional in SMMUv3.2 and later.
                                                                 SEL2 == 0 if SMMU_IDR0.S1P == 0 or if SMMU_IDR0.S2P == 0. */
        uint32_t reserved_30           : 1;
        uint32_t secure_impl           : 1;  /**< [ 31: 31](SRO) Security implemented.
                                                                 For CNXXXX, reads as one when security is implemented in the SMMU. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_idr1_s cn; */
};
typedef union cavm_smmux_s_idr1 cavm_smmux_s_idr1_t;

static inline uint64_t CAVM_SMMUX_S_IDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IDR1(uint64_t a)
{
    if (a==0)
        return 0x830000008004ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IDR1(a) cavm_smmux_s_idr1_t
#define bustype_CAVM_SMMUX_S_IDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_IDR1(a) "SMMUX_S_IDR1"
#define device_bar_CAVM_SMMUX_S_IDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IDR1(a) (a)
#define arguments_CAVM_SMMUX_S_IDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_idr2
 *
 * SMMU Secure IDR2 Register
 */
union cavm_smmux_s_idr2
{
    uint32_t u;
    struct cavm_smmux_s_idr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_10_31        : 22;
        uint32_t ba_s_vatos            : 10; /**< [  9:  0](SRO) S_VATOS page base address offset.
                                                                 If SMMU_IDR0.VATOS == 0, no S_VATOS page is present and this field is RES0. */
#else /* Word 0 - Little Endian */
        uint32_t ba_s_vatos            : 10; /**< [  9:  0](SRO) S_VATOS page base address offset.
                                                                 If SMMU_IDR0.VATOS == 0, no S_VATOS page is present and this field is RES0. */
        uint32_t reserved_10_31        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_idr2_s cn; */
};
typedef union cavm_smmux_s_idr2 cavm_smmux_s_idr2_t;

static inline uint64_t CAVM_SMMUX_S_IDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IDR2(uint64_t a)
{
    if (a==0)
        return 0x830000008008ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IDR2(a) cavm_smmux_s_idr2_t
#define bustype_CAVM_SMMUX_S_IDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_IDR2(a) "SMMUX_S_IDR2"
#define device_bar_CAVM_SMMUX_S_IDR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IDR2(a) (a)
#define arguments_CAVM_SMMUX_S_IDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_idr3
 *
 * SMMU Secure IDR3 Register
 */
union cavm_smmux_s_idr3
{
    uint32_t u;
    struct cavm_smmux_s_idr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_7_31         : 25;
        uint32_t sams                  : 1;  /**< [  6:  6](SRO) Secure ATS maintenance support.
                                                                 0 = If SMMU()_IDR0[ATS] = 1, the CMD_ATC_INV command is supported when issued on
                                                                 the Nonsecure and Secure Command queues. If SMMU()_IDR0[PRI] == 1, the
                                                                 CMD_PRI_RESP command is supported, when issued on the Nonsecure and Secure
                                                                 Command queues.
                                                                 1 = If SMMU()_IDR0[ATS]== 1, the CMD_ATC_INV command is supported when issued on
                                                                 the Nonsecure Command queue, but raises CERROR_ILL when issued on the Secure
                                                                 Command queue. If SMMU()_IDR0[PRI] == 1, the CMD_PRI_RESP command is supported when
                                                                 issued on the Nonsecure Command queue, but raises CERROR_ILL when issued on the
                                                                 Secure Command queue. */
        uint32_t reserved_0_5          : 6;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_5          : 6;
        uint32_t sams                  : 1;  /**< [  6:  6](SRO) Secure ATS maintenance support.
                                                                 0 = If SMMU()_IDR0[ATS] = 1, the CMD_ATC_INV command is supported when issued on
                                                                 the Nonsecure and Secure Command queues. If SMMU()_IDR0[PRI] == 1, the
                                                                 CMD_PRI_RESP command is supported, when issued on the Nonsecure and Secure
                                                                 Command queues.
                                                                 1 = If SMMU()_IDR0[ATS]== 1, the CMD_ATC_INV command is supported when issued on
                                                                 the Nonsecure Command queue, but raises CERROR_ILL when issued on the Secure
                                                                 Command queue. If SMMU()_IDR0[PRI] == 1, the CMD_PRI_RESP command is supported when
                                                                 issued on the Nonsecure Command queue, but raises CERROR_ILL when issued on the
                                                                 Secure Command queue. */
        uint32_t reserved_7_31         : 25;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_idr3_s cn; */
};
typedef union cavm_smmux_s_idr3 cavm_smmux_s_idr3_t;

static inline uint64_t CAVM_SMMUX_S_IDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IDR3(uint64_t a)
{
    if (a==0)
        return 0x83000000800cll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IDR3(a) cavm_smmux_s_idr3_t
#define bustype_CAVM_SMMUX_S_IDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_IDR3(a) "SMMUX_S_IDR3"
#define device_bar_CAVM_SMMUX_S_IDR3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IDR3(a) (a)
#define arguments_CAVM_SMMUX_S_IDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_idr4
 *
 * SMMU Secure IDR4 Register
 */
union cavm_smmux_s_idr4
{
    uint32_t u;
    struct cavm_smmux_s_idr4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_idr4_s cn; */
};
typedef union cavm_smmux_s_idr4 cavm_smmux_s_idr4_t;

static inline uint64_t CAVM_SMMUX_S_IDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IDR4(uint64_t a)
{
    if (a==0)
        return 0x830000008010ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IDR4(a) cavm_smmux_s_idr4_t
#define bustype_CAVM_SMMUX_S_IDR4(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_IDR4(a) "SMMUX_S_IDR4"
#define device_bar_CAVM_SMMUX_S_IDR4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IDR4(a) (a)
#define arguments_CAVM_SMMUX_S_IDR4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_imp_actlr
 *
 * SMMU Auxiliary Control Register
 */
union cavm_smmux_s_imp_actlr
{
    uint32_t u;
    struct cavm_smmux_s_imp_actlr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t qos                   : 4;  /**< [  3:  0](SR/W) Quality-of-service for the memory accesses performed during the translation process. */
#else /* Word 0 - Little Endian */
        uint32_t qos                   : 4;  /**< [  3:  0](SR/W) Quality-of-service for the memory accesses performed during the translation process. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_imp_actlr_s cn; */
};
typedef union cavm_smmux_s_imp_actlr cavm_smmux_s_imp_actlr_t;

static inline uint64_t CAVM_SMMUX_S_IMP_ACTLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IMP_ACTLR(uint64_t a)
{
    if (a==0)
        return 0x830000008e10ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IMP_ACTLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IMP_ACTLR(a) cavm_smmux_s_imp_actlr_t
#define bustype_CAVM_SMMUX_S_IMP_ACTLR(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_IMP_ACTLR(a) "SMMUX_S_IMP_ACTLR"
#define device_bar_CAVM_SMMUX_S_IMP_ACTLR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IMP_ACTLR(a) (a)
#define arguments_CAVM_SMMUX_S_IMP_ACTLR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_imp_chicken_bits
 *
 * SMMU chicken bits Register
 */
union cavm_smmux_s_imp_chicken_bits
{
    uint32_t u;
    struct cavm_smmux_s_imp_chicken_bits_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t dwb_all               : 1;  /**< [  3:  3](SR/W) Reserved. */
        uint32_t wlk_dup_dis           : 1;  /**< [  2:  2](SR/W) Walker duplicate feature disable. */
        uint32_t httu_chicken_bits     : 2;  /**< [  1:  0](SR/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t httu_chicken_bits     : 2;  /**< [  1:  0](SR/W) Reserved. */
        uint32_t wlk_dup_dis           : 1;  /**< [  2:  2](SR/W) Walker duplicate feature disable. */
        uint32_t dwb_all               : 1;  /**< [  3:  3](SR/W) Reserved. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_imp_chicken_bits_s cn; */
};
typedef union cavm_smmux_s_imp_chicken_bits cavm_smmux_s_imp_chicken_bits_t;

static inline uint64_t CAVM_SMMUX_S_IMP_CHICKEN_BITS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IMP_CHICKEN_BITS(uint64_t a)
{
    if (a==0)
        return 0x830000008e78ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IMP_CHICKEN_BITS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IMP_CHICKEN_BITS(a) cavm_smmux_s_imp_chicken_bits_t
#define bustype_CAVM_SMMUX_S_IMP_CHICKEN_BITS(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_IMP_CHICKEN_BITS(a) "SMMUX_S_IMP_CHICKEN_BITS"
#define device_bar_CAVM_SMMUX_S_IMP_CHICKEN_BITS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IMP_CHICKEN_BITS(a) (a)
#define arguments_CAVM_SMMUX_S_IMP_CHICKEN_BITS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_imp_diag_ctl
 *
 * SMMU Secure Diagnostic Control Register
 */
union cavm_smmux_s_imp_diag_ctl
{
    uint32_t u;
    struct cavm_smmux_s_imp_diag_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_22_31        : 10;
        uint32_t force_fxl_clk_active  : 1;  /**< [ 21: 21](SR/W) Forces the FXL conditional clock to be always on.  For diagnostic use only. */
        uint32_t force_inp_clk_active  : 1;  /**< [ 20: 20](SR/W) Forces the INP conditional clock to be always on.  For diagnostic use only. */
        uint32_t force_cra_clk_active  : 1;  /**< [ 19: 19](SR/W) Forces the CRA conditional clock to be always on.  For diagnostic use only. */
        uint32_t force_csr_clk_active  : 1;  /**< [ 18: 18](SR/W) Forces the CSR conditional clock to be always on.  For diagnostic use only. */
        uint32_t force_crs_clk_active  : 1;  /**< [ 17: 17](SR/W) Forces the CRS conditional clock to be always on.  For diagnostic use only. */
        uint32_t force_cmd_clk_active  : 1;  /**< [ 16: 16](SR/W) Forces the CMD conditional clocks to be always on.  For diagnostic use only. */
        uint32_t force_out_clk_active  : 1;  /**< [ 15: 15](SR/W) Forces the OUT conditional clock to be always on.  For diagnostic use only. */
        uint32_t force_wlk_clk_active  : 1;  /**< [ 14: 14](SR/W) Forces the per-WLK conditional clocks to be always on.  For diagnostic use only. */
        uint32_t force_tlb_clk_active  : 1;  /**< [ 13: 13](SR/W) Forces the TLB conditional clock to be always on.  For diagnostic use only. */
        uint32_t force_clks_active     : 1;  /**< [ 12: 12](SR/W) Forces the conditional clocks to be always on.  For diagnostic use only. */
        uint32_t dis_cfc               : 1;  /**< [ 11: 11](SR/W) Disables hitting in the CFC. For diagnostic use only. */
        uint32_t dis_tlb               : 1;  /**< [ 10: 10](SR/W) Disables hitting in the TLB. For diagnostic use only. */
        uint32_t dis_wcs1              : 2;  /**< [  9:  8](SR/W) Reserved. */
        uint32_t dis_wcs2              : 2;  /**< [  7:  6](SR/W) Reserved. */
        uint32_t walkers               : 6;  /**< [  5:  0](SR/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t walkers               : 6;  /**< [  5:  0](SR/W) Reserved. */
        uint32_t dis_wcs2              : 2;  /**< [  7:  6](SR/W) Reserved. */
        uint32_t dis_wcs1              : 2;  /**< [  9:  8](SR/W) Reserved. */
        uint32_t dis_tlb               : 1;  /**< [ 10: 10](SR/W) Disables hitting in the TLB. For diagnostic use only. */
        uint32_t dis_cfc               : 1;  /**< [ 11: 11](SR/W) Disables hitting in the CFC. For diagnostic use only. */
        uint32_t force_clks_active     : 1;  /**< [ 12: 12](SR/W) Forces the conditional clocks to be always on.  For diagnostic use only. */
        uint32_t force_tlb_clk_active  : 1;  /**< [ 13: 13](SR/W) Forces the TLB conditional clock to be always on.  For diagnostic use only. */
        uint32_t force_wlk_clk_active  : 1;  /**< [ 14: 14](SR/W) Forces the per-WLK conditional clocks to be always on.  For diagnostic use only. */
        uint32_t force_out_clk_active  : 1;  /**< [ 15: 15](SR/W) Forces the OUT conditional clock to be always on.  For diagnostic use only. */
        uint32_t force_cmd_clk_active  : 1;  /**< [ 16: 16](SR/W) Forces the CMD conditional clocks to be always on.  For diagnostic use only. */
        uint32_t force_crs_clk_active  : 1;  /**< [ 17: 17](SR/W) Forces the CRS conditional clock to be always on.  For diagnostic use only. */
        uint32_t force_csr_clk_active  : 1;  /**< [ 18: 18](SR/W) Forces the CSR conditional clock to be always on.  For diagnostic use only. */
        uint32_t force_cra_clk_active  : 1;  /**< [ 19: 19](SR/W) Forces the CRA conditional clock to be always on.  For diagnostic use only. */
        uint32_t force_inp_clk_active  : 1;  /**< [ 20: 20](SR/W) Forces the INP conditional clock to be always on.  For diagnostic use only. */
        uint32_t force_fxl_clk_active  : 1;  /**< [ 21: 21](SR/W) Forces the FXL conditional clock to be always on.  For diagnostic use only. */
        uint32_t reserved_22_31        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_imp_diag_ctl_s cn10; */
    struct cavm_smmux_s_imp_diag_ctl_cn10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t force_clks_active     : 1;  /**< [ 12: 12](SR/W) Forces the conditional clocks to be always on.  For diagnostic use only. */
        uint32_t dis_cfc               : 1;  /**< [ 11: 11](SR/W) Disables hitting in the CFC. For diagnostic use only. */
        uint32_t dis_tlb               : 1;  /**< [ 10: 10](SR/W) Disables hitting in the TLB. For diagnostic use only. */
        uint32_t dis_wcs1              : 2;  /**< [  9:  8](SR/W) Reserved. */
        uint32_t dis_wcs2              : 2;  /**< [  7:  6](SR/W) Reserved. */
        uint32_t walkers               : 6;  /**< [  5:  0](SR/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t walkers               : 6;  /**< [  5:  0](SR/W) Reserved. */
        uint32_t dis_wcs2              : 2;  /**< [  7:  6](SR/W) Reserved. */
        uint32_t dis_wcs1              : 2;  /**< [  9:  8](SR/W) Reserved. */
        uint32_t dis_tlb               : 1;  /**< [ 10: 10](SR/W) Disables hitting in the TLB. For diagnostic use only. */
        uint32_t dis_cfc               : 1;  /**< [ 11: 11](SR/W) Disables hitting in the CFC. For diagnostic use only. */
        uint32_t force_clks_active     : 1;  /**< [ 12: 12](SR/W) Forces the conditional clocks to be always on.  For diagnostic use only. */
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } cn10ka;
    /* struct cavm_smmux_s_imp_diag_ctl_s cn10kb; */
    /* struct cavm_smmux_s_imp_diag_ctl_cn10ka cnf10ka; */
    /* struct cavm_smmux_s_imp_diag_ctl_cn10ka cnf10kb; */
};
typedef union cavm_smmux_s_imp_diag_ctl cavm_smmux_s_imp_diag_ctl_t;

static inline uint64_t CAVM_SMMUX_S_IMP_DIAG_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IMP_DIAG_CTL(uint64_t a)
{
    if (a==0)
        return 0x830000008e14ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IMP_DIAG_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IMP_DIAG_CTL(a) cavm_smmux_s_imp_diag_ctl_t
#define bustype_CAVM_SMMUX_S_IMP_DIAG_CTL(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_IMP_DIAG_CTL(a) "SMMUX_S_IMP_DIAG_CTL"
#define device_bar_CAVM_SMMUX_S_IMP_DIAG_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IMP_DIAG_CTL(a) (a)
#define arguments_CAVM_SMMUX_S_IMP_DIAG_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_imp_fifo_threshold
 *
 * SMMU FIFO Threshold Register
 */
union cavm_smmux_s_imp_fifo_threshold
{
    uint32_t u;
    struct cavm_smmux_s_imp_fifo_threshold_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_7_31         : 25;
        uint32_t rpb_safety_threshold  : 7;  /**< [  6:  0](SR/W) Replay buffer safety threshold.
                                                                 When this threshold meet no incoming translation can enter till replay FIFO will
                                                                 safely release his content. */
#else /* Word 0 - Little Endian */
        uint32_t rpb_safety_threshold  : 7;  /**< [  6:  0](SR/W) Replay buffer safety threshold.
                                                                 When this threshold meet no incoming translation can enter till replay FIFO will
                                                                 safely release his content. */
        uint32_t reserved_7_31         : 25;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_imp_fifo_threshold_s cn; */
};
typedef union cavm_smmux_s_imp_fifo_threshold cavm_smmux_s_imp_fifo_threshold_t;

static inline uint64_t CAVM_SMMUX_S_IMP_FIFO_THRESHOLD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IMP_FIFO_THRESHOLD(uint64_t a)
{
    if (a==0)
        return 0x830000008e60ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IMP_FIFO_THRESHOLD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IMP_FIFO_THRESHOLD(a) cavm_smmux_s_imp_fifo_threshold_t
#define bustype_CAVM_SMMUX_S_IMP_FIFO_THRESHOLD(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_IMP_FIFO_THRESHOLD(a) "SMMUX_S_IMP_FIFO_THRESHOLD"
#define device_bar_CAVM_SMMUX_S_IMP_FIFO_THRESHOLD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IMP_FIFO_THRESHOLD(a) (a)
#define arguments_CAVM_SMMUX_S_IMP_FIFO_THRESHOLD(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_imp_long_rbi
 *
 * SMMU Range-based TLBI To Slow TLBI Conversion Register
 * This register controls conversion of a range-based TLBI into a slow TLBI.
 */
union cavm_smmux_s_imp_long_rbi
{
    uint32_t u;
    struct cavm_smmux_s_imp_long_rbi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_23_31        : 9;
        uint32_t dvm_long_rbi_force_en : 1;  /**< [ 22: 22](SR/W) Always convert a range-based DVM TLBI into a slow TLBI (ignores the value of
                                                                 [DVM_LONG_RBI_LOG2LIMIT]).
                                                                 Should not be set together with [DVM_LONG_RBI_FORCE_DIS]. */
        uint32_t dvm_long_rbi_force_dis : 1; /**< [ 21: 21](SR/W) Never convert a range-based DVM TLBI into a slow TLBI (ignores the value of
                                                                 [DVM_LONG_RBI_LOG2LIMIT]).
                                                                 Should not be set together with [DVM_LONG_RBI_FORCE_EN]. */
        uint32_t dvm_long_rbi_log2limit : 5; /**< [ 20: 16](SR/W) Convert a range-based DVM TLBI into a slow TLBI, if
                                                                 (DVM.NUM+1)*2^(5*DVM.SCALE+1) \> 2^[DVM_LONG_RBI_LOG2LIMIT]. */
        uint32_t reserved_7_15         : 9;
        uint32_t cmd_long_rbi_force_en : 1;  /**< [  6:  6](SR/W) Always convert a range-based CMD TLBI into a slow TLBI (ignores the value of
                                                                 [CMD_LONG_RBI_LOG2LIMIT]).
                                                                 Should not be set together with [CMD_LONG_RBI_FORCE_DIS]. */
        uint32_t cmd_long_rbi_force_dis : 1; /**< [  5:  5](SR/W) Never convert a range-based CMD TLBI into a slow TLBI (ignores the value of
                                                                 [CMD_LONG_RBI_LOG2LIMIT]).
                                                                 Should not be set together with [CMD_LONG_RBI_FORCE_EN]. */
        uint32_t cmd_long_rbi_log2limit : 5; /**< [  4:  0](SR/W) Convert a range-based CMD TLBI into a slow TLBI, if (CMD.NUM+1)*2^CMD.SCALE \>
                                                                 2^[CMD_LONG_RBI_LOG2LIMIT]. */
#else /* Word 0 - Little Endian */
        uint32_t cmd_long_rbi_log2limit : 5; /**< [  4:  0](SR/W) Convert a range-based CMD TLBI into a slow TLBI, if (CMD.NUM+1)*2^CMD.SCALE \>
                                                                 2^[CMD_LONG_RBI_LOG2LIMIT]. */
        uint32_t cmd_long_rbi_force_dis : 1; /**< [  5:  5](SR/W) Never convert a range-based CMD TLBI into a slow TLBI (ignores the value of
                                                                 [CMD_LONG_RBI_LOG2LIMIT]).
                                                                 Should not be set together with [CMD_LONG_RBI_FORCE_EN]. */
        uint32_t cmd_long_rbi_force_en : 1;  /**< [  6:  6](SR/W) Always convert a range-based CMD TLBI into a slow TLBI (ignores the value of
                                                                 [CMD_LONG_RBI_LOG2LIMIT]).
                                                                 Should not be set together with [CMD_LONG_RBI_FORCE_DIS]. */
        uint32_t reserved_7_15         : 9;
        uint32_t dvm_long_rbi_log2limit : 5; /**< [ 20: 16](SR/W) Convert a range-based DVM TLBI into a slow TLBI, if
                                                                 (DVM.NUM+1)*2^(5*DVM.SCALE+1) \> 2^[DVM_LONG_RBI_LOG2LIMIT]. */
        uint32_t dvm_long_rbi_force_dis : 1; /**< [ 21: 21](SR/W) Never convert a range-based DVM TLBI into a slow TLBI (ignores the value of
                                                                 [DVM_LONG_RBI_LOG2LIMIT]).
                                                                 Should not be set together with [DVM_LONG_RBI_FORCE_EN]. */
        uint32_t dvm_long_rbi_force_en : 1;  /**< [ 22: 22](SR/W) Always convert a range-based DVM TLBI into a slow TLBI (ignores the value of
                                                                 [DVM_LONG_RBI_LOG2LIMIT]).
                                                                 Should not be set together with [DVM_LONG_RBI_FORCE_DIS]. */
        uint32_t reserved_23_31        : 9;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_imp_long_rbi_s cn; */
};
typedef union cavm_smmux_s_imp_long_rbi cavm_smmux_s_imp_long_rbi_t;

static inline uint64_t CAVM_SMMUX_S_IMP_LONG_RBI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IMP_LONG_RBI(uint64_t a)
{
    if (a==0)
        return 0x830000008e70ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IMP_LONG_RBI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IMP_LONG_RBI(a) cavm_smmux_s_imp_long_rbi_t
#define bustype_CAVM_SMMUX_S_IMP_LONG_RBI(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_IMP_LONG_RBI(a) "SMMUX_S_IMP_LONG_RBI"
#define device_bar_CAVM_SMMUX_S_IMP_LONG_RBI(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IMP_LONG_RBI(a) (a)
#define arguments_CAVM_SMMUX_S_IMP_LONG_RBI(a) (a),-1,-1,-1

/**
 * Register (NCB) smmu#_s_imp_ras_ctl
 *
 * SMMU RAS Control Register
 */
union cavm_smmux_s_imp_ras_ctl
{
    uint64_t u;
    struct cavm_smmux_s_imp_ras_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t rd_psn_ign            : 1;  /**< [  0:  0](SR/W) Read poison ignore.
                                                                 0 = Received poison sets SMMU()_S_IMP_RAS_INT[*] and is otherwise treated as if
                                                                 the transaction faulted.
                                                                 1 = Received poison sets SMMU()_S_IMP_RAS_INT[*] but is otherwise ignored. */
#else /* Word 0 - Little Endian */
        uint64_t rd_psn_ign            : 1;  /**< [  0:  0](SR/W) Read poison ignore.
                                                                 0 = Received poison sets SMMU()_S_IMP_RAS_INT[*] and is otherwise treated as if
                                                                 the transaction faulted.
                                                                 1 = Received poison sets SMMU()_S_IMP_RAS_INT[*] but is otherwise ignored. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_imp_ras_ctl_s cn; */
};
typedef union cavm_smmux_s_imp_ras_ctl cavm_smmux_s_imp_ras_ctl_t;

static inline uint64_t CAVM_SMMUX_S_IMP_RAS_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IMP_RAS_CTL(uint64_t a)
{
    if (a==0)
        return 0x830000008e50ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IMP_RAS_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IMP_RAS_CTL(a) cavm_smmux_s_imp_ras_ctl_t
#define bustype_CAVM_SMMUX_S_IMP_RAS_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_S_IMP_RAS_CTL(a) "SMMUX_S_IMP_RAS_CTL"
#define device_bar_CAVM_SMMUX_S_IMP_RAS_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IMP_RAS_CTL(a) (a)
#define arguments_CAVM_SMMUX_S_IMP_RAS_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_imp_ras_int
 *
 * SMMU RAS Interrupt Register
 */
union cavm_smmux_s_imp_ras_int
{
    uint32_t u;
    struct cavm_smmux_s_imp_ras_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t fetch_psn             : 1;  /**< [  2:  2](SR/W1C/H) A fetch for TTD or configuration data received poisoned data from CCU/DRAM.
                                                                 If SMMU()_S_IMP_RAS_CTL[RD_PSN_IGN]=0, also treat it as a fault for all related downstream logic. */
        uint32_t s_cmdq_psn            : 1;  /**< [  1:  1](SR/W1C/H) A DMA read of the secure CMDQ from memory received poisoned data from CCU/DRAM.
                                                                 If SMMU()_S_IMP_RAS_CTL[RD_PSN_IGN]=0, also treat it as a fault for all related downstream logic. */
        uint32_t ns_cmdq_psn           : 1;  /**< [  0:  0](SR/W1C/H) A DMA read of the nonsecure CMDQ from memory received poisoned data from CCU/DRAM.
                                                                 If SMMU()_S_IMP_RAS_CTL[RD_PSN_IGN]=0, also treat it as a fault for all related downstream logic. */
#else /* Word 0 - Little Endian */
        uint32_t ns_cmdq_psn           : 1;  /**< [  0:  0](SR/W1C/H) A DMA read of the nonsecure CMDQ from memory received poisoned data from CCU/DRAM.
                                                                 If SMMU()_S_IMP_RAS_CTL[RD_PSN_IGN]=0, also treat it as a fault for all related downstream logic. */
        uint32_t s_cmdq_psn            : 1;  /**< [  1:  1](SR/W1C/H) A DMA read of the secure CMDQ from memory received poisoned data from CCU/DRAM.
                                                                 If SMMU()_S_IMP_RAS_CTL[RD_PSN_IGN]=0, also treat it as a fault for all related downstream logic. */
        uint32_t fetch_psn             : 1;  /**< [  2:  2](SR/W1C/H) A fetch for TTD or configuration data received poisoned data from CCU/DRAM.
                                                                 If SMMU()_S_IMP_RAS_CTL[RD_PSN_IGN]=0, also treat it as a fault for all related downstream logic. */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_imp_ras_int_s cn; */
};
typedef union cavm_smmux_s_imp_ras_int cavm_smmux_s_imp_ras_int_t;

static inline uint64_t CAVM_SMMUX_S_IMP_RAS_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IMP_RAS_INT(uint64_t a)
{
    if (a==0)
        return 0x830000008e20ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IMP_RAS_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IMP_RAS_INT(a) cavm_smmux_s_imp_ras_int_t
#define bustype_CAVM_SMMUX_S_IMP_RAS_INT(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_IMP_RAS_INT(a) "SMMUX_S_IMP_RAS_INT"
#define device_bar_CAVM_SMMUX_S_IMP_RAS_INT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IMP_RAS_INT(a) (a)
#define arguments_CAVM_SMMUX_S_IMP_RAS_INT(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_imp_ras_int_ena_w1c
 *
 * SMMU RAS Interrupt Enable Set Register
 * This register clears interrupt enable bits.
 */
union cavm_smmux_s_imp_ras_int_ena_w1c
{
    uint32_t u;
    struct cavm_smmux_s_imp_ras_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t fetch_psn             : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for SMMU(0)_S_IMP_RAS_INT[FETCH_PSN]. */
        uint32_t s_cmdq_psn            : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for SMMU(0)_S_IMP_RAS_INT[S_CMDQ_PSN]. */
        uint32_t ns_cmdq_psn           : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for SMMU(0)_S_IMP_RAS_INT[NS_CMDQ_PSN]. */
#else /* Word 0 - Little Endian */
        uint32_t ns_cmdq_psn           : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for SMMU(0)_S_IMP_RAS_INT[NS_CMDQ_PSN]. */
        uint32_t s_cmdq_psn            : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for SMMU(0)_S_IMP_RAS_INT[S_CMDQ_PSN]. */
        uint32_t fetch_psn             : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for SMMU(0)_S_IMP_RAS_INT[FETCH_PSN]. */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_imp_ras_int_ena_w1c_s cn; */
};
typedef union cavm_smmux_s_imp_ras_int_ena_w1c cavm_smmux_s_imp_ras_int_ena_w1c_t;

static inline uint64_t CAVM_SMMUX_S_IMP_RAS_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IMP_RAS_INT_ENA_W1C(uint64_t a)
{
    if (a==0)
        return 0x830000008e38ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IMP_RAS_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IMP_RAS_INT_ENA_W1C(a) cavm_smmux_s_imp_ras_int_ena_w1c_t
#define bustype_CAVM_SMMUX_S_IMP_RAS_INT_ENA_W1C(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_IMP_RAS_INT_ENA_W1C(a) "SMMUX_S_IMP_RAS_INT_ENA_W1C"
#define device_bar_CAVM_SMMUX_S_IMP_RAS_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IMP_RAS_INT_ENA_W1C(a) (a)
#define arguments_CAVM_SMMUX_S_IMP_RAS_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_imp_ras_int_ena_w1s
 *
 * SMMU RAS Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_smmux_s_imp_ras_int_ena_w1s
{
    uint32_t u;
    struct cavm_smmux_s_imp_ras_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t fetch_psn             : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for SMMU(0)_S_IMP_RAS_INT[FETCH_PSN]. */
        uint32_t s_cmdq_psn            : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for SMMU(0)_S_IMP_RAS_INT[S_CMDQ_PSN]. */
        uint32_t ns_cmdq_psn           : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for SMMU(0)_S_IMP_RAS_INT[NS_CMDQ_PSN]. */
#else /* Word 0 - Little Endian */
        uint32_t ns_cmdq_psn           : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for SMMU(0)_S_IMP_RAS_INT[NS_CMDQ_PSN]. */
        uint32_t s_cmdq_psn            : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for SMMU(0)_S_IMP_RAS_INT[S_CMDQ_PSN]. */
        uint32_t fetch_psn             : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for SMMU(0)_S_IMP_RAS_INT[FETCH_PSN]. */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_imp_ras_int_ena_w1s_s cn; */
};
typedef union cavm_smmux_s_imp_ras_int_ena_w1s cavm_smmux_s_imp_ras_int_ena_w1s_t;

static inline uint64_t CAVM_SMMUX_S_IMP_RAS_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IMP_RAS_INT_ENA_W1S(uint64_t a)
{
    if (a==0)
        return 0x830000008e30ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IMP_RAS_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IMP_RAS_INT_ENA_W1S(a) cavm_smmux_s_imp_ras_int_ena_w1s_t
#define bustype_CAVM_SMMUX_S_IMP_RAS_INT_ENA_W1S(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_IMP_RAS_INT_ENA_W1S(a) "SMMUX_S_IMP_RAS_INT_ENA_W1S"
#define device_bar_CAVM_SMMUX_S_IMP_RAS_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IMP_RAS_INT_ENA_W1S(a) (a)
#define arguments_CAVM_SMMUX_S_IMP_RAS_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_imp_ras_int_w1s
 *
 * SMMU RAS Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_smmux_s_imp_ras_int_w1s
{
    uint32_t u;
    struct cavm_smmux_s_imp_ras_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t fetch_psn             : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets SMMU(0)_S_IMP_RAS_INT[FETCH_PSN]. */
        uint32_t s_cmdq_psn            : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets SMMU(0)_S_IMP_RAS_INT[S_CMDQ_PSN]. */
        uint32_t ns_cmdq_psn           : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets SMMU(0)_S_IMP_RAS_INT[NS_CMDQ_PSN]. */
#else /* Word 0 - Little Endian */
        uint32_t ns_cmdq_psn           : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets SMMU(0)_S_IMP_RAS_INT[NS_CMDQ_PSN]. */
        uint32_t s_cmdq_psn            : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets SMMU(0)_S_IMP_RAS_INT[S_CMDQ_PSN]. */
        uint32_t fetch_psn             : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets SMMU(0)_S_IMP_RAS_INT[FETCH_PSN]. */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_imp_ras_int_w1s_s cn; */
};
typedef union cavm_smmux_s_imp_ras_int_w1s cavm_smmux_s_imp_ras_int_w1s_t;

static inline uint64_t CAVM_SMMUX_S_IMP_RAS_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IMP_RAS_INT_W1S(uint64_t a)
{
    if (a==0)
        return 0x830000008e28ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IMP_RAS_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IMP_RAS_INT_W1S(a) cavm_smmux_s_imp_ras_int_w1s_t
#define bustype_CAVM_SMMUX_S_IMP_RAS_INT_W1S(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_IMP_RAS_INT_W1S(a) "SMMUX_S_IMP_RAS_INT_W1S"
#define device_bar_CAVM_SMMUX_S_IMP_RAS_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IMP_RAS_INT_W1S(a) (a)
#define arguments_CAVM_SMMUX_S_IMP_RAS_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) smmu#_s_imp_ras_irq_cfg0
 *
 * SMMU RAS Interrupt 0 Register
 */
union cavm_smmux_s_imp_ras_irq_cfg0
{
    uint64_t u;
    struct cavm_smmux_s_imp_ras_irq_cfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t addr                  : 50; /**< [ 51:  2](SR/W) Physical address of MSI target register.
                                                                 The effective address has ADDR\<63:52\> = 0x0 and [ADDR]\<1:0\> = 0x0.

                                                                 Note unlike most CNXXXX MSI-X address registers, this is a physical address, not
                                                                 a virtual address. The address is always secure world.

                                                                 If [ADDR]=0x0, no MSI is sent.

                                                                 The interrupt message will use the SMMU's stream ID. */
        uint64_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_1          : 2;
        uint64_t addr                  : 50; /**< [ 51:  2](SR/W) Physical address of MSI target register.
                                                                 The effective address has ADDR\<63:52\> = 0x0 and [ADDR]\<1:0\> = 0x0.

                                                                 Note unlike most CNXXXX MSI-X address registers, this is a physical address, not
                                                                 a virtual address. The address is always secure world.

                                                                 If [ADDR]=0x0, no MSI is sent.

                                                                 The interrupt message will use the SMMU's stream ID. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_imp_ras_irq_cfg0_s cn; */
};
typedef union cavm_smmux_s_imp_ras_irq_cfg0 cavm_smmux_s_imp_ras_irq_cfg0_t;

static inline uint64_t CAVM_SMMUX_S_IMP_RAS_IRQ_CFG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IMP_RAS_IRQ_CFG0(uint64_t a)
{
    if (a==0)
        return 0x830000008e40ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IMP_RAS_IRQ_CFG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IMP_RAS_IRQ_CFG0(a) cavm_smmux_s_imp_ras_irq_cfg0_t
#define bustype_CAVM_SMMUX_S_IMP_RAS_IRQ_CFG0(a) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_S_IMP_RAS_IRQ_CFG0(a) "SMMUX_S_IMP_RAS_IRQ_CFG0"
#define device_bar_CAVM_SMMUX_S_IMP_RAS_IRQ_CFG0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IMP_RAS_IRQ_CFG0(a) (a)
#define arguments_CAVM_SMMUX_S_IMP_RAS_IRQ_CFG0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_imp_ras_irq_cfg1
 *
 * SMMU RAS Interrupt 1 Register
 */
union cavm_smmux_s_imp_ras_irq_cfg1
{
    uint32_t u;
    struct cavm_smmux_s_imp_ras_irq_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](SR/W) MSI data payload. */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](SR/W) MSI data payload. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_imp_ras_irq_cfg1_s cn; */
};
typedef union cavm_smmux_s_imp_ras_irq_cfg1 cavm_smmux_s_imp_ras_irq_cfg1_t;

static inline uint64_t CAVM_SMMUX_S_IMP_RAS_IRQ_CFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IMP_RAS_IRQ_CFG1(uint64_t a)
{
    if (a==0)
        return 0x830000008e48ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IMP_RAS_IRQ_CFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IMP_RAS_IRQ_CFG1(a) cavm_smmux_s_imp_ras_irq_cfg1_t
#define bustype_CAVM_SMMUX_S_IMP_RAS_IRQ_CFG1(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_IMP_RAS_IRQ_CFG1(a) "SMMUX_S_IMP_RAS_IRQ_CFG1"
#define device_bar_CAVM_SMMUX_S_IMP_RAS_IRQ_CFG1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IMP_RAS_IRQ_CFG1(a) (a)
#define arguments_CAVM_SMMUX_S_IMP_RAS_IRQ_CFG1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_imp_txn_arb_weight
 *
 * SMMU Translation Arbitration Weight Register
 * This register contains weight values of arbitration between translation sources.
 */
union cavm_smmux_s_imp_txn_arb_weight
{
    uint32_t u;
    struct cavm_smmux_s_imp_txn_arb_weight_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t imp_txn_src_weight    : 1;  /**< [ 16: 16](SR/W) Arbitration option between SMMU clients:
                                                                 0 = Arbiter between clients give higher weight to clients that more active.
                                                                 1 = Arbiter between clients give weight from this register. */
        uint32_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_15         : 16;
        uint32_t imp_txn_src_weight    : 1;  /**< [ 16: 16](SR/W) Arbitration option between SMMU clients:
                                                                 0 = Arbiter between clients give higher weight to clients that more active.
                                                                 1 = Arbiter between clients give weight from this register. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_imp_txn_arb_weight_s cn10; */
    struct cavm_smmux_s_imp_txn_arb_weight_cn10ka
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t imp_txn_src_weight    : 1;  /**< [ 16: 16](SR/W) Arbitration option between SMMU clients:
                                                                 0 = Arbiter between clients give higher weight to clients that more active.
                                                                 1 = Arbiter between clients give weight from this register. */
        uint32_t txn_iob7              : 2;  /**< [ 15: 14](SR/W) Weight of IOB7's translations. */
        uint32_t txn_iob6              : 2;  /**< [ 13: 12](SR/W) Weight of IOB6's translations. */
        uint32_t txn_iob5              : 2;  /**< [ 11: 10](SR/W) Weight of IOB5's translations. */
        uint32_t txn_iob4              : 2;  /**< [  9:  8](SR/W) Weight of IOB4's translations. */
        uint32_t txn_iob3              : 2;  /**< [  7:  6](SR/W) Weight of IOB3's translations. */
        uint32_t txn_iob2              : 2;  /**< [  5:  4](SR/W) Weight of IOB2's translations. */
        uint32_t txn_iob1              : 2;  /**< [  3:  2](SR/W) Weight of IOB1's translations. */
        uint32_t txn_iob0              : 2;  /**< [  1:  0](SR/W) Weight of IOB0's translations. */
#else /* Word 0 - Little Endian */
        uint32_t txn_iob0              : 2;  /**< [  1:  0](SR/W) Weight of IOB0's translations. */
        uint32_t txn_iob1              : 2;  /**< [  3:  2](SR/W) Weight of IOB1's translations. */
        uint32_t txn_iob2              : 2;  /**< [  5:  4](SR/W) Weight of IOB2's translations. */
        uint32_t txn_iob3              : 2;  /**< [  7:  6](SR/W) Weight of IOB3's translations. */
        uint32_t txn_iob4              : 2;  /**< [  9:  8](SR/W) Weight of IOB4's translations. */
        uint32_t txn_iob5              : 2;  /**< [ 11: 10](SR/W) Weight of IOB5's translations. */
        uint32_t txn_iob6              : 2;  /**< [ 13: 12](SR/W) Weight of IOB6's translations. */
        uint32_t txn_iob7              : 2;  /**< [ 15: 14](SR/W) Weight of IOB7's translations. */
        uint32_t imp_txn_src_weight    : 1;  /**< [ 16: 16](SR/W) Arbitration option between SMMU clients:
                                                                 0 = Arbiter between clients give higher weight to clients that more active.
                                                                 1 = Arbiter between clients give weight from this register. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } cn10ka;
    struct cavm_smmux_s_imp_txn_arb_weight_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t imp_txn_src_weight    : 1;  /**< [ 16: 16](SR/W) Arbitration option between SMMU clients:
                                                                 0 = Arbiter between clients give higher weight to clients that more active.
                                                                 1 = Arbiter between clients give weight from this register. */
        uint32_t txn_iob               : 16; /**< [ 15:  0](SR/W) The weight of each IOB's transaction. Every two bits are dedicated to a port, so
                                                                 0x55 is a weight of '1' for all ports. */
#else /* Word 0 - Little Endian */
        uint32_t txn_iob               : 16; /**< [ 15:  0](SR/W) The weight of each IOB's transaction. Every two bits are dedicated to a port, so
                                                                 0x55 is a weight of '1' for all ports. */
        uint32_t imp_txn_src_weight    : 1;  /**< [ 16: 16](SR/W) Arbitration option between SMMU clients:
                                                                 0 = Arbiter between clients give higher weight to clients that more active.
                                                                 1 = Arbiter between clients give weight from this register. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_smmux_s_imp_txn_arb_weight_cn10ka cnf10ka; */
    /* struct cavm_smmux_s_imp_txn_arb_weight_cn10ka cnf10kb; */
};
typedef union cavm_smmux_s_imp_txn_arb_weight cavm_smmux_s_imp_txn_arb_weight_t;

static inline uint64_t CAVM_SMMUX_S_IMP_TXN_ARB_WEIGHT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IMP_TXN_ARB_WEIGHT(uint64_t a)
{
    if (a==0)
        return 0x830000008e68ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IMP_TXN_ARB_WEIGHT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IMP_TXN_ARB_WEIGHT(a) cavm_smmux_s_imp_txn_arb_weight_t
#define bustype_CAVM_SMMUX_S_IMP_TXN_ARB_WEIGHT(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_IMP_TXN_ARB_WEIGHT(a) "SMMUX_S_IMP_TXN_ARB_WEIGHT"
#define device_bar_CAVM_SMMUX_S_IMP_TXN_ARB_WEIGHT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IMP_TXN_ARB_WEIGHT(a) (a)
#define arguments_CAVM_SMMUX_S_IMP_TXN_ARB_WEIGHT(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_imp_txreq_arb_weight
 *
 * SMMU Fetches Arbitration Weight Register
 * This register contains weight values of arbitration between SMMU fetches and store to
 * external memory.
 */
union cavm_smmux_s_imp_txreq_arb_weight
{
    uint32_t u;
    struct cavm_smmux_s_imp_txreq_arb_weight_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t imp_walker_fetch      : 2;  /**< [  5:  4](SR/W) Weight of walk fetch. */
        uint32_t imp_cmd_fetch         : 2;  /**< [  3:  2](SR/W) Weight of CMD fetch. */
        uint32_t imp_event_store       : 2;  /**< [  1:  0](SR/W) Weight of event buffer store. */
#else /* Word 0 - Little Endian */
        uint32_t imp_event_store       : 2;  /**< [  1:  0](SR/W) Weight of event buffer store. */
        uint32_t imp_cmd_fetch         : 2;  /**< [  3:  2](SR/W) Weight of CMD fetch. */
        uint32_t imp_walker_fetch      : 2;  /**< [  5:  4](SR/W) Weight of walk fetch. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_imp_txreq_arb_weight_s cn; */
};
typedef union cavm_smmux_s_imp_txreq_arb_weight cavm_smmux_s_imp_txreq_arb_weight_t;

static inline uint64_t CAVM_SMMUX_S_IMP_TXREQ_ARB_WEIGHT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IMP_TXREQ_ARB_WEIGHT(uint64_t a)
{
    if (a==0)
        return 0x830000008e6cll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IMP_TXREQ_ARB_WEIGHT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IMP_TXREQ_ARB_WEIGHT(a) cavm_smmux_s_imp_txreq_arb_weight_t
#define bustype_CAVM_SMMUX_S_IMP_TXREQ_ARB_WEIGHT(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_IMP_TXREQ_ARB_WEIGHT(a) "SMMUX_S_IMP_TXREQ_ARB_WEIGHT"
#define device_bar_CAVM_SMMUX_S_IMP_TXREQ_ARB_WEIGHT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IMP_TXREQ_ARB_WEIGHT(a) (a)
#define arguments_CAVM_SMMUX_S_IMP_TXREQ_ARB_WEIGHT(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_imp_typ_arb_weight
 *
 * SMMU Translations Type Arbitration Weight Register
 * This register contains weight values of arbitration between translation types.
 */
union cavm_smmux_s_imp_typ_arb_weight
{
    uint32_t u;
    struct cavm_smmux_s_imp_typ_arb_weight_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t imp_txn_prio          : 3;  /**< [ 17: 15](SR/W) Weight of regular translations. */
        uint32_t imp_replay_prio       : 3;  /**< [ 14: 12](SR/W) Weight of replay translations. */
        uint32_t imp_gatos_ns_prio     : 3;  /**< [ 11:  9](SR/W) Weight of non-secured GATOS translations. */
        uint32_t imp_gatos_s_prio      : 3;  /**< [  8:  6](SR/W) Weight of secured GATOS translations. */
        uint32_t imp_prefetch_ns_prio  : 3;  /**< [  5:  3](SR/W) Weight of non-secured prefetch translations. */
        uint32_t imp_prefetch_s_prio   : 3;  /**< [  2:  0](SR/W) Weight of secured prefetch translations. */
#else /* Word 0 - Little Endian */
        uint32_t imp_prefetch_s_prio   : 3;  /**< [  2:  0](SR/W) Weight of secured prefetch translations. */
        uint32_t imp_prefetch_ns_prio  : 3;  /**< [  5:  3](SR/W) Weight of non-secured prefetch translations. */
        uint32_t imp_gatos_s_prio      : 3;  /**< [  8:  6](SR/W) Weight of secured GATOS translations. */
        uint32_t imp_gatos_ns_prio     : 3;  /**< [ 11:  9](SR/W) Weight of non-secured GATOS translations. */
        uint32_t imp_replay_prio       : 3;  /**< [ 14: 12](SR/W) Weight of replay translations. */
        uint32_t imp_txn_prio          : 3;  /**< [ 17: 15](SR/W) Weight of regular translations. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_imp_typ_arb_weight_s cn; */
};
typedef union cavm_smmux_s_imp_typ_arb_weight cavm_smmux_s_imp_typ_arb_weight_t;

static inline uint64_t CAVM_SMMUX_S_IMP_TYP_ARB_WEIGHT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IMP_TYP_ARB_WEIGHT(uint64_t a)
{
    if (a==0)
        return 0x830000008e64ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IMP_TYP_ARB_WEIGHT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IMP_TYP_ARB_WEIGHT(a) cavm_smmux_s_imp_typ_arb_weight_t
#define bustype_CAVM_SMMUX_S_IMP_TYP_ARB_WEIGHT(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_IMP_TYP_ARB_WEIGHT(a) "SMMUX_S_IMP_TYP_ARB_WEIGHT"
#define device_bar_CAVM_SMMUX_S_IMP_TYP_ARB_WEIGHT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IMP_TYP_ARB_WEIGHT(a) (a)
#define arguments_CAVM_SMMUX_S_IMP_TYP_ARB_WEIGHT(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_imp_wlk_dis
 *
 * SMMU Walker Disable Register
 */
union cavm_smmux_s_imp_wlk_dis
{
    uint32_t u;
    struct cavm_smmux_s_imp_wlk_dis_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t wlk_dis               : 31; /**< [ 30:  0](SR/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t wlk_dis               : 31; /**< [ 30:  0](SR/W) Reserved. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_imp_wlk_dis_s cn10; */
    /* struct cavm_smmux_s_imp_wlk_dis_s cn10ka; */
    struct cavm_smmux_s_imp_wlk_dis_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t wlk_dis               : 31; /**< [ 30:  0](SR/W) Disable a walker and cause translations not to enter it. One bit per walker.
                                                                 For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint32_t wlk_dis               : 31; /**< [ 30:  0](SR/W) Disable a walker and cause translations not to enter it. One bit per walker.
                                                                 For diagnostic use only. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_smmux_s_imp_wlk_dis_s cnf10ka; */
    /* struct cavm_smmux_s_imp_wlk_dis_s cnf10kb; */
};
typedef union cavm_smmux_s_imp_wlk_dis cavm_smmux_s_imp_wlk_dis_t;

static inline uint64_t CAVM_SMMUX_S_IMP_WLK_DIS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IMP_WLK_DIS(uint64_t a)
{
    if (a==0)
        return 0x830000008e80ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IMP_WLK_DIS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IMP_WLK_DIS(a) cavm_smmux_s_imp_wlk_dis_t
#define bustype_CAVM_SMMUX_S_IMP_WLK_DIS(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_IMP_WLK_DIS(a) "SMMUX_S_IMP_WLK_DIS"
#define device_bar_CAVM_SMMUX_S_IMP_WLK_DIS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IMP_WLK_DIS(a) (a)
#define arguments_CAVM_SMMUX_S_IMP_WLK_DIS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_imp_wlk_skip_lu
 *
 * SMMU Walker Skip Look Up Register
 */
union cavm_smmux_s_imp_wlk_skip_lu
{
    uint32_t u;
    struct cavm_smmux_s_imp_wlk_skip_lu_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t skip                  : 31; /**< [ 30:  0](SR/W) Cause a walker to skip lookup and not seek TTDs in the TLB. One bit per walker.
                                                                 For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint32_t skip                  : 31; /**< [ 30:  0](SR/W) Cause a walker to skip lookup and not seek TTDs in the TLB. One bit per walker.
                                                                 For diagnostic use only. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_imp_wlk_skip_lu_s cn; */
};
typedef union cavm_smmux_s_imp_wlk_skip_lu cavm_smmux_s_imp_wlk_skip_lu_t;

static inline uint64_t CAVM_SMMUX_S_IMP_WLK_SKIP_LU(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IMP_WLK_SKIP_LU(uint64_t a)
{
    if (a==0)
        return 0x830000008e84ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IMP_WLK_SKIP_LU", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IMP_WLK_SKIP_LU(a) cavm_smmux_s_imp_wlk_skip_lu_t
#define bustype_CAVM_SMMUX_S_IMP_WLK_SKIP_LU(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_IMP_WLK_SKIP_LU(a) "SMMUX_S_IMP_WLK_SKIP_LU"
#define device_bar_CAVM_SMMUX_S_IMP_WLK_SKIP_LU(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IMP_WLK_SKIP_LU(a) (a)
#define arguments_CAVM_SMMUX_S_IMP_WLK_SKIP_LU(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_init
 *
 * SMMU Secure INIT Register
 */
union cavm_smmux_s_init
{
    uint32_t u;
    struct cavm_smmux_s_init_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t inv_all               : 1;  /**< [  0:  0](SR/W/H) Invalidate all cache and TLB contents. When written to one, an SMMU-global
                                                                 invalidation is performed for all configuration and translation caches for all
                                                                 translation regimes and security worlds. This field is reset to zero by the SMMU
                                                                 when the invalidation is complete.

                                                                 This field can be used to simplify secure software that otherwise makes no use
                                                                 of the SMMU yet must safely initialize the SMMU for use by nonsecure software. */
#else /* Word 0 - Little Endian */
        uint32_t inv_all               : 1;  /**< [  0:  0](SR/W/H) Invalidate all cache and TLB contents. When written to one, an SMMU-global
                                                                 invalidation is performed for all configuration and translation caches for all
                                                                 translation regimes and security worlds. This field is reset to zero by the SMMU
                                                                 when the invalidation is complete.

                                                                 This field can be used to simplify secure software that otherwise makes no use
                                                                 of the SMMU yet must safely initialize the SMMU for use by nonsecure software. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_init_s cn; */
};
typedef union cavm_smmux_s_init cavm_smmux_s_init_t;

static inline uint64_t CAVM_SMMUX_S_INIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_INIT(uint64_t a)
{
    if (a==0)
        return 0x83000000803cll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_INIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_INIT(a) cavm_smmux_s_init_t
#define bustype_CAVM_SMMUX_S_INIT(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_INIT(a) "SMMUX_S_INIT"
#define device_bar_CAVM_SMMUX_S_INIT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_INIT(a) (a)
#define arguments_CAVM_SMMUX_S_INIT(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_irq_ctrl
 *
 * SMMU Secure IRQ Control Register
 * An update to a field in SMMU()_S_IRQ_CTRL is not considered complete, along with any
 * side-effects, until the respective field in SMMU()_S_IRQ_CTRLACK is observed to take
 * the new value.
 */
union cavm_smmux_s_irq_ctrl
{
    uint32_t u;
    struct cavm_smmux_s_irq_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t eventq_irqen          : 1;  /**< [  2:  2](SR/W) Secure event queue interrupt enable. */
        uint32_t reserved_1            : 1;
        uint32_t gerror_irqen          : 1;  /**< [  0:  0](SR/W) Secure GERROR interrupt enable. */
#else /* Word 0 - Little Endian */
        uint32_t gerror_irqen          : 1;  /**< [  0:  0](SR/W) Secure GERROR interrupt enable. */
        uint32_t reserved_1            : 1;
        uint32_t eventq_irqen          : 1;  /**< [  2:  2](SR/W) Secure event queue interrupt enable. */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_irq_ctrl_s cn; */
};
typedef union cavm_smmux_s_irq_ctrl cavm_smmux_s_irq_ctrl_t;

static inline uint64_t CAVM_SMMUX_S_IRQ_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IRQ_CTRL(uint64_t a)
{
    if (a==0)
        return 0x830000008050ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IRQ_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IRQ_CTRL(a) cavm_smmux_s_irq_ctrl_t
#define bustype_CAVM_SMMUX_S_IRQ_CTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_IRQ_CTRL(a) "SMMUX_S_IRQ_CTRL"
#define device_bar_CAVM_SMMUX_S_IRQ_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IRQ_CTRL(a) (a)
#define arguments_CAVM_SMMUX_S_IRQ_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_irq_ctrlack
 *
 * SMMU Secure IRQ Control Acknowledgement Register
 * This register is a read-only copy of SMMU()_S_IRQ_CTRL.
 */
union cavm_smmux_s_irq_ctrlack
{
    uint32_t u;
    struct cavm_smmux_s_irq_ctrlack_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t eventq_irqen          : 1;  /**< [  2:  2](SRO/H) Read-only hardware-modified SMMU(0)_S_IRQ_CTRL[EVENTQ_IRQEN]. */
        uint32_t reserved_1            : 1;
        uint32_t gerror_irqen          : 1;  /**< [  0:  0](SRO/H) Read-only hardware-modified SMMU(0)_S_IRQ_CTRL[GERROR_IRQEN]. */
#else /* Word 0 - Little Endian */
        uint32_t gerror_irqen          : 1;  /**< [  0:  0](SRO/H) Read-only hardware-modified SMMU(0)_S_IRQ_CTRL[GERROR_IRQEN]. */
        uint32_t reserved_1            : 1;
        uint32_t eventq_irqen          : 1;  /**< [  2:  2](SRO/H) Read-only hardware-modified SMMU(0)_S_IRQ_CTRL[EVENTQ_IRQEN]. */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_irq_ctrlack_s cn; */
};
typedef union cavm_smmux_s_irq_ctrlack cavm_smmux_s_irq_ctrlack_t;

static inline uint64_t CAVM_SMMUX_S_IRQ_CTRLACK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_IRQ_CTRLACK(uint64_t a)
{
    if (a==0)
        return 0x830000008054ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_IRQ_CTRLACK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_IRQ_CTRLACK(a) cavm_smmux_s_irq_ctrlack_t
#define bustype_CAVM_SMMUX_S_IRQ_CTRLACK(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_IRQ_CTRLACK(a) "SMMUX_S_IRQ_CTRLACK"
#define device_bar_CAVM_SMMUX_S_IRQ_CTRLACK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_IRQ_CTRLACK(a) (a)
#define arguments_CAVM_SMMUX_S_IRQ_CTRLACK(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_mpamidr
 *
 * MPAM capability identification for secure state Register
 */
union cavm_smmux_s_mpamidr
{
    uint32_t u;
    struct cavm_smmux_s_mpamidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t pmg_max               : 8;  /**< [ 23: 16](SRO) The maximum PMG value that is permitted to be used in this security state. This field is RES0
                                                                 when SMMU_IDR3.MPAM == 0 */
        uint32_t partid_max            : 16; /**< [ 15:  0](SRO) The maximum PARTID value that is permitted to be used in this security state. This field is RES0
                                                                 when SMMU_IDR3.MPAM == 0 */
#else /* Word 0 - Little Endian */
        uint32_t partid_max            : 16; /**< [ 15:  0](SRO) The maximum PARTID value that is permitted to be used in this security state. This field is RES0
                                                                 when SMMU_IDR3.MPAM == 0 */
        uint32_t pmg_max               : 8;  /**< [ 23: 16](SRO) The maximum PMG value that is permitted to be used in this security state. This field is RES0
                                                                 when SMMU_IDR3.MPAM == 0 */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_mpamidr_s cn; */
};
typedef union cavm_smmux_s_mpamidr cavm_smmux_s_mpamidr_t;

static inline uint64_t CAVM_SMMUX_S_MPAMIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_MPAMIDR(uint64_t a)
{
    if (a==0)
        return 0x830000008130ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_MPAMIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_MPAMIDR(a) cavm_smmux_s_mpamidr_t
#define bustype_CAVM_SMMUX_S_MPAMIDR(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_MPAMIDR(a) "SMMUX_S_MPAMIDR"
#define device_bar_CAVM_SMMUX_S_MPAMIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_MPAMIDR(a) (a)
#define arguments_CAVM_SMMUX_S_MPAMIDR(a) (a),-1,-1,-1

/**
 * Register (NCB) smmu#_s_strtab_base
 *
 * SMMU Secure STRTAB Base Register
 */
union cavm_smmux_s_strtab_base
{
    uint64_t u;
    struct cavm_smmux_s_strtab_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t ra                    : 1;  /**< [ 62: 62](SR/W) Read allocate hint.
                                                                 0 = No read-allocate.
                                                                 1 = Read-allocate. */
        uint64_t reserved_52_61        : 10;
        uint64_t addr                  : 46; /**< [ 51:  6](SR/W) PA of stream table base.
                                                                 The effective base address has [ADDR]\<63:52\> = 0x0 and [ADDR]\<5:0\> = 0x0.

                                                                 When a linear stream table is used (SMMU()_S_STRTAB_BASE_CFG[FMT]=0x0), the
                                                                 effective base address is aligned to the table size, ignoring the
                                                                 least-significant bits in the [ADDR]\<47:6\> range as required to do so; i.e.,
                                                                 ADDR\<LOG2SIZE+5:0\> = 0.

                                                                 When a two-stage stream table is used (SMMU()_S_STRTAB_BASE_CFG[FMT]=0x1), the
                                                                 effective base address is aligned to the larger of 64 bytes or the first-level
                                                                 table size.  I.e., ADDR\<MAX(5, (LOG2SIZE-SPLIT-1+3)):0\> = 0.

                                                                 The alignment of [ADDR] is affected by the literal value of the respective
                                                                 SMMU()_S_STRTAB_BASE_CFG[LOG2SIZE] field and is not limited by SMMU()_S_IDR1[S_SIDSIZE].
                                                                 This means that configuring a table that is larger than required by the incoming
                                                                 StreamID span results in some entries being unreachable, but the table must be
                                                                 aligned to the configured size. */
        uint64_t reserved_0_5          : 6;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_5          : 6;
        uint64_t addr                  : 46; /**< [ 51:  6](SR/W) PA of stream table base.
                                                                 The effective base address has [ADDR]\<63:52\> = 0x0 and [ADDR]\<5:0\> = 0x0.

                                                                 When a linear stream table is used (SMMU()_S_STRTAB_BASE_CFG[FMT]=0x0), the
                                                                 effective base address is aligned to the table size, ignoring the
                                                                 least-significant bits in the [ADDR]\<47:6\> range as required to do so; i.e.,
                                                                 ADDR\<LOG2SIZE+5:0\> = 0.

                                                                 When a two-stage stream table is used (SMMU()_S_STRTAB_BASE_CFG[FMT]=0x1), the
                                                                 effective base address is aligned to the larger of 64 bytes or the first-level
                                                                 table size.  I.e., ADDR\<MAX(5, (LOG2SIZE-SPLIT-1+3)):0\> = 0.

                                                                 The alignment of [ADDR] is affected by the literal value of the respective
                                                                 SMMU()_S_STRTAB_BASE_CFG[LOG2SIZE] field and is not limited by SMMU()_S_IDR1[S_SIDSIZE].
                                                                 This means that configuring a table that is larger than required by the incoming
                                                                 StreamID span results in some entries being unreachable, but the table must be
                                                                 aligned to the configured size. */
        uint64_t reserved_52_61        : 10;
        uint64_t ra                    : 1;  /**< [ 62: 62](SR/W) Read allocate hint.
                                                                 0 = No read-allocate.
                                                                 1 = Read-allocate. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_strtab_base_s cn; */
};
typedef union cavm_smmux_s_strtab_base cavm_smmux_s_strtab_base_t;

static inline uint64_t CAVM_SMMUX_S_STRTAB_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_STRTAB_BASE(uint64_t a)
{
    if (a==0)
        return 0x830000008080ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_STRTAB_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_STRTAB_BASE(a) cavm_smmux_s_strtab_base_t
#define bustype_CAVM_SMMUX_S_STRTAB_BASE(a) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_S_STRTAB_BASE(a) "SMMUX_S_STRTAB_BASE"
#define device_bar_CAVM_SMMUX_S_STRTAB_BASE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_STRTAB_BASE(a) (a)
#define arguments_CAVM_SMMUX_S_STRTAB_BASE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_s_strtab_base_cfg
 *
 * SMMU Secure Command Queue Base Register
 * SMMU()_S_STRTAB_BASE_CFG is guarded by the respective SMMU()_S_CR0[SMMUEN] and
 * must only be modified when SMMU()_S_CR0[SMMUEN]=0. A write whilst
 * SMMU()_S_CR0[SMMUEN]=1 is constrained unpredictable and has one of the following
 * behaviors:
 *
 * * The register takes on any value, which might cause STEs to be fetched from an unpredictable
 *   address.
 *
 * * The write is ignored.
 *
 * A read following such a write will return an unknown value.
 *
 * Use of any reserved value or unsupported value combination in this register (for
 * example, selection of a two-level table when unsupported where
 * SMMU()_IDR0[ST_LEVEL]=0x0) causes the stream table to become inaccessible; a
 * transaction causing a lookup of an STE is terminated with abort and a SMMU_C_BAD_STREAMID_S
 * event recorded.
 */
union cavm_smmux_s_strtab_base_cfg
{
    uint32_t u;
    struct cavm_smmux_s_strtab_base_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t fmt                   : 2;  /**< [ 17: 16](SR/W) Format of stream table.
                                                                 0x0 = Linear. ADDR points to an array of STEs.
                                                                 0x1 = 2-level. ADDR points to an array of level 1 stream table descriptors.

                                                                 Other values are reserved, behaving as 0x0. */
        uint32_t reserved_11_15        : 5;
        uint32_t split                 : 5;  /**< [ 10:  6](SR/W) StreamID split point for multi-level table.
                                                                 Determines the split point of a two-level stream table, selected by the
                                                                 number of bits at the bottom level.

                                                                   0x6 = 4KB leaf tables.
                                                                   0x8 = 16KB leaf tables.
                                                                   0xA = 64KB leaf tables.
                                                                   _ Other values are reserved, behaving as 0x6.

                                                                 For example, selecting [SPLIT]=6 causes StreamID\<5:0\> to be used to index the
                                                                 lowest level stream table and StreamID\<LOG2SIZE-1:6\> to index the upper level
                                                                 table.

                                                                 The effective value of [SPLIT] is capped at [LOG2SIZE]; a value greater or equal
                                                                 to [LOG2SIZE] results in a single upper-level descriptor indicating one
                                                                 bottom-level stream table of [LOG2SIZE].  This combination is not recommended; a
                                                                 more efficient linear ([FMT]=0x0) table should instead be used. */
        uint32_t log2size              : 6;  /**< [  5:  0](SR/W) Table size as log2(entries). The maximum index into the stream table is limited
                                                                 by SMMU()_IDR1[SIDSIZE]. For indexing purposes, [LOG2SIZE] \>
                                                                 SMMU()_IDR1[SIDSIZE] and setting a value greater than SMMU()_IDR1[SIDSIZE] causes a table
                                                                 to be indexed based on that maximum size.

                                                                 In the SMMU()_S_STRTAB_BASE_CFG variant, the maximum effective index of secure
                                                                 stream table [LOG2SIZE] \> SMMU()_S_IDR1[S_SIDSIZE] instead. */
#else /* Word 0 - Little Endian */
        uint32_t log2size              : 6;  /**< [  5:  0](SR/W) Table size as log2(entries). The maximum index into the stream table is limited
                                                                 by SMMU()_IDR1[SIDSIZE]. For indexing purposes, [LOG2SIZE] \>
                                                                 SMMU()_IDR1[SIDSIZE] and setting a value greater than SMMU()_IDR1[SIDSIZE] causes a table
                                                                 to be indexed based on that maximum size.

                                                                 In the SMMU()_S_STRTAB_BASE_CFG variant, the maximum effective index of secure
                                                                 stream table [LOG2SIZE] \> SMMU()_S_IDR1[S_SIDSIZE] instead. */
        uint32_t split                 : 5;  /**< [ 10:  6](SR/W) StreamID split point for multi-level table.
                                                                 Determines the split point of a two-level stream table, selected by the
                                                                 number of bits at the bottom level.

                                                                   0x6 = 4KB leaf tables.
                                                                   0x8 = 16KB leaf tables.
                                                                   0xA = 64KB leaf tables.
                                                                   _ Other values are reserved, behaving as 0x6.

                                                                 For example, selecting [SPLIT]=6 causes StreamID\<5:0\> to be used to index the
                                                                 lowest level stream table and StreamID\<LOG2SIZE-1:6\> to index the upper level
                                                                 table.

                                                                 The effective value of [SPLIT] is capped at [LOG2SIZE]; a value greater or equal
                                                                 to [LOG2SIZE] results in a single upper-level descriptor indicating one
                                                                 bottom-level stream table of [LOG2SIZE].  This combination is not recommended; a
                                                                 more efficient linear ([FMT]=0x0) table should instead be used. */
        uint32_t reserved_11_15        : 5;
        uint32_t fmt                   : 2;  /**< [ 17: 16](SR/W) Format of stream table.
                                                                 0x0 = Linear. ADDR points to an array of STEs.
                                                                 0x1 = 2-level. ADDR points to an array of level 1 stream table descriptors.

                                                                 Other values are reserved, behaving as 0x0. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_s_strtab_base_cfg_s cn; */
};
typedef union cavm_smmux_s_strtab_base_cfg cavm_smmux_s_strtab_base_cfg_t;

static inline uint64_t CAVM_SMMUX_S_STRTAB_BASE_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_S_STRTAB_BASE_CFG(uint64_t a)
{
    if (a==0)
        return 0x830000008088ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_S_STRTAB_BASE_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_S_STRTAB_BASE_CFG(a) cavm_smmux_s_strtab_base_cfg_t
#define bustype_CAVM_SMMUX_S_STRTAB_BASE_CFG(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_S_STRTAB_BASE_CFG(a) "SMMUX_S_STRTAB_BASE_CFG"
#define device_bar_CAVM_SMMUX_S_STRTAB_BASE_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_S_STRTAB_BASE_CFG(a) (a)
#define arguments_CAVM_SMMUX_S_STRTAB_BASE_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_statusr
 *
 * SMMU Status Register
 */
union cavm_smmux_statusr
{
    uint32_t u;
    struct cavm_smmux_statusr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t dormant               : 1;  /**< [  0:  0](RAZ) Dormant hint.

                                                                   0x0 = The SMMU may have cached translation or configuration structure data, or
                                                                 be in the process of doing so.

                                                                   0x1 = The SMMU guarantees that no translation or configuration structure data
                                                                 is cached (and that no prefetches are in-flight).

                                                                 Software may avoid issuing configuration invalidation or TLB invalidation
                                                                 commands for changes to structures made visible to the SMMU before reading this
                                                                 hint as one.

                                                                 This bit might read as one if SMMU()_IDR0[DORMHINT]=1. If SMMU()_IDR0[DORMHINT]=0,
                                                                 the implementation does not support this hint and this bit reads as zero. */
#else /* Word 0 - Little Endian */
        uint32_t dormant               : 1;  /**< [  0:  0](RAZ) Dormant hint.

                                                                   0x0 = The SMMU may have cached translation or configuration structure data, or
                                                                 be in the process of doing so.

                                                                   0x1 = The SMMU guarantees that no translation or configuration structure data
                                                                 is cached (and that no prefetches are in-flight).

                                                                 Software may avoid issuing configuration invalidation or TLB invalidation
                                                                 commands for changes to structures made visible to the SMMU before reading this
                                                                 hint as one.

                                                                 This bit might read as one if SMMU()_IDR0[DORMHINT]=1. If SMMU()_IDR0[DORMHINT]=0,
                                                                 the implementation does not support this hint and this bit reads as zero. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_statusr_s cn; */
};
typedef union cavm_smmux_statusr cavm_smmux_statusr_t;

static inline uint64_t CAVM_SMMUX_STATUSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_STATUSR(uint64_t a)
{
    if (a==0)
        return 0x830000000040ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_STATUSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_STATUSR(a) cavm_smmux_statusr_t
#define bustype_CAVM_SMMUX_STATUSR(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_STATUSR(a) "SMMUX_STATUSR"
#define device_bar_CAVM_SMMUX_STATUSR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_STATUSR(a) (a)
#define arguments_CAVM_SMMUX_STATUSR(a) (a),-1,-1,-1

/**
 * Register (NCB) smmu#_strtab_base
 *
 * SMMU Stream Table Base Register
 */
union cavm_smmux_strtab_base
{
    uint64_t u;
    struct cavm_smmux_strtab_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t ra                    : 1;  /**< [ 62: 62](R/W) SMMU(0)_S_STRTAB_BASE[RA] */
        uint64_t reserved_52_61        : 10;
        uint64_t addr                  : 46; /**< [ 51:  6](R/W) SMMU(0)_S_STRTAB_BASE[ADDR] */
        uint64_t reserved_0_5          : 6;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_5          : 6;
        uint64_t addr                  : 46; /**< [ 51:  6](R/W) SMMU(0)_S_STRTAB_BASE[ADDR] */
        uint64_t reserved_52_61        : 10;
        uint64_t ra                    : 1;  /**< [ 62: 62](R/W) SMMU(0)_S_STRTAB_BASE[RA] */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_strtab_base_s cn; */
};
typedef union cavm_smmux_strtab_base cavm_smmux_strtab_base_t;

static inline uint64_t CAVM_SMMUX_STRTAB_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_STRTAB_BASE(uint64_t a)
{
    if (a==0)
        return 0x830000000080ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_STRTAB_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_STRTAB_BASE(a) cavm_smmux_strtab_base_t
#define bustype_CAVM_SMMUX_STRTAB_BASE(a) CSR_TYPE_NCB
#define basename_CAVM_SMMUX_STRTAB_BASE(a) "SMMUX_STRTAB_BASE"
#define device_bar_CAVM_SMMUX_STRTAB_BASE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_STRTAB_BASE(a) (a)
#define arguments_CAVM_SMMUX_STRTAB_BASE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_strtab_base_cfg
 *
 * SMMU Stream Table Base Configuration Register
 * SMMU()_S_STRTAB_BASE_CFG is guarded by the respective SMMU()_S_CR0[SMMUEN] and
 * must only be modified when SMMU()_S_CR0[SMMUEN]=0. A write whilst
 * SMMU()_S_CR0[SMMUEN]=1 is constrained unpredictable and has one of the following
 * behaviors:
 *
 * * The register takes on any value, which might cause STEs to be fetched from an unpredictable
 *   address.
 *
 * * The write is ignored.
 *
 * A read following such a write will return an unknown value.
 *
 * Use of any reserved value or unsupported value combination in this register (for
 * example, selection of a two-level table when unsupported where
 * SMMU()_IDR0[ST_LEVEL]=0x0) causes the stream table to become inaccessible; a
 * transaction causing a lookup of an STE is terminated with abort and a SMMU_C_BAD_STREAMID_S
 * event recorded.
 */
union cavm_smmux_strtab_base_cfg
{
    uint32_t u;
    struct cavm_smmux_strtab_base_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t fmt                   : 2;  /**< [ 17: 16](R/W) SMMU(0)_S_STRTAB_BASE_CFG[FMT] */
        uint32_t reserved_11_15        : 5;
        uint32_t split                 : 5;  /**< [ 10:  6](R/W) SMMU(0)_S_STRTAB_BASE_CFG[SPLIT] */
        uint32_t log2size              : 6;  /**< [  5:  0](R/W) SMMU(0)_S_STRTAB_BASE_CFG[LOG2SIZE] */
#else /* Word 0 - Little Endian */
        uint32_t log2size              : 6;  /**< [  5:  0](R/W) SMMU(0)_S_STRTAB_BASE_CFG[LOG2SIZE] */
        uint32_t split                 : 5;  /**< [ 10:  6](R/W) SMMU(0)_S_STRTAB_BASE_CFG[SPLIT] */
        uint32_t reserved_11_15        : 5;
        uint32_t fmt                   : 2;  /**< [ 17: 16](R/W) SMMU(0)_S_STRTAB_BASE_CFG[FMT] */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_strtab_base_cfg_s cn; */
};
typedef union cavm_smmux_strtab_base_cfg cavm_smmux_strtab_base_cfg_t;

static inline uint64_t CAVM_SMMUX_STRTAB_BASE_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_STRTAB_BASE_CFG(uint64_t a)
{
    if (a==0)
        return 0x830000000088ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_STRTAB_BASE_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_STRTAB_BASE_CFG(a) cavm_smmux_strtab_base_cfg_t
#define bustype_CAVM_SMMUX_STRTAB_BASE_CFG(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_STRTAB_BASE_CFG(a) "SMMUX_STRTAB_BASE_CFG"
#define device_bar_CAVM_SMMUX_STRTAB_BASE_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_STRTAB_BASE_CFG(a) (a)
#define arguments_CAVM_SMMUX_STRTAB_BASE_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB32b) smmu#_vatos_sel
 *
 * SMMU VATOS SEL Register
 */
union cavm_smmux_vatos_sel
{
    uint32_t u;
    struct cavm_smmux_vatos_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t vmid                  : 16; /**< [ 15:  0](RAZ) VMID associated with the VM that is using the VATOS interface. */
#else /* Word 0 - Little Endian */
        uint32_t vmid                  : 16; /**< [ 15:  0](RAZ) VMID associated with the VM that is using the VATOS interface. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_smmux_vatos_sel_s cn; */
};
typedef union cavm_smmux_vatos_sel cavm_smmux_vatos_sel_t;

static inline uint64_t CAVM_SMMUX_VATOS_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SMMUX_VATOS_SEL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a==0))
        return 0x830000000140ll + 0x1000000000ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a==0))
        return 0x830000000180ll + 0x1000000000ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a==0))
        return 0x830000000140ll + 0x1000000000ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a==0))
        return 0x830000000140ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("SMMUX_VATOS_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SMMUX_VATOS_SEL(a) cavm_smmux_vatos_sel_t
#define bustype_CAVM_SMMUX_VATOS_SEL(a) CSR_TYPE_NCB32b
#define basename_CAVM_SMMUX_VATOS_SEL(a) "SMMUX_VATOS_SEL"
#define device_bar_CAVM_SMMUX_VATOS_SEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SMMUX_VATOS_SEL(a) (a)
#define arguments_CAVM_SMMUX_VATOS_SEL(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_SMMU_H__ */
