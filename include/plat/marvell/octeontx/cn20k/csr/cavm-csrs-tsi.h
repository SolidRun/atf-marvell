#ifndef __CAVM_CSRS_TSI_H__
#define __CAVM_CSRS_TSI_H__
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
 * TSI.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration tsi_bar_e
 *
 * TSI Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_TSI_BAR_E_TSI_PF_BAR0 (0x80e040000000ll)
#define CAVM_TSI_BAR_E_TSI_PF_BAR0_SIZE 0x40000000ull

/**
 * Register (NCB32b) tsi#_etmasiccr
 *
 * ASIC Control Register
 * Controls ASIC logic, such as the static configuration of Memory Map Decoders (MMDs).
 */
union cavm_tsix_etmasiccr
{
    uint32_t u;
    struct cavm_tsix_etmasiccr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reg_value             : 32; /**< [ 31:  0](RO) Memory map decoders are not implemented,
                                                                 no functionality to support. */
#else /* Word 0 - Little Endian */
        uint32_t reg_value             : 32; /**< [ 31:  0](RO) Memory map decoders are not implemented,
                                                                 no functionality to support. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmasiccr_s cn; */
};
typedef union cavm_tsix_etmasiccr cavm_tsix_etmasiccr_t;

static inline uint64_t CAVM_TSIX_ETMASICCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMASICCR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c000c + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMASICCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMASICCR(a) cavm_tsix_etmasiccr_t
#define bustype_CAVM_TSIX_ETMASICCR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMASICCR(a) "TSIX_ETMASICCR"
#define device_bar_CAVM_TSIX_ETMASICCR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMASICCR(a) (a)
#define arguments_CAVM_TSIX_ETMASICCR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmauthstatus
 *
 * Authentication Status Register
 * Reports the level of tracing currently permitted by authentication signals provided to the ETM.
 */
union cavm_tsix_etmauthstatus
{
    uint32_t u;
    struct cavm_tsix_etmauthstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t res0_0                : 24; /**< [ 31:  8](RAZ) Reserved bit or field with Should-Be-Zero. */
        uint32_t snid                  : 2;  /**< [  7:  6](RO/H) Permission for secure non invasive debug. */
        uint32_t sid                   : 2;  /**< [  5:  4](RO) 0x0, secure invasive debug not supported by the ETM. */
        uint32_t nsnid                 : 2;  /**< [  3:  2](RO/H) Permission for non-secure invasive debug.
                                                                 The possible values of the field are:
                                                                 0x2 = Non-secure non-invasive debug disabled.
                                                                 0x3 = Non-secure non-invasive debug enabled. */
        uint32_t nsid                  : 2;  /**< [  1:  0](RO) Non-secure invasive debug not supported by the ETM. */
#else /* Word 0 - Little Endian */
        uint32_t nsid                  : 2;  /**< [  1:  0](RO) Non-secure invasive debug not supported by the ETM. */
        uint32_t nsnid                 : 2;  /**< [  3:  2](RO/H) Permission for non-secure invasive debug.
                                                                 The possible values of the field are:
                                                                 0x2 = Non-secure non-invasive debug disabled.
                                                                 0x3 = Non-secure non-invasive debug enabled. */
        uint32_t sid                   : 2;  /**< [  5:  4](RO) 0x0, secure invasive debug not supported by the ETM. */
        uint32_t snid                  : 2;  /**< [  7:  6](RO/H) Permission for secure non invasive debug. */
        uint32_t res0_0                : 24; /**< [ 31:  8](RAZ) Reserved bit or field with Should-Be-Zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmauthstatus_s cn; */
};
typedef union cavm_tsix_etmauthstatus cavm_tsix_etmauthstatus_t;

static inline uint64_t CAVM_TSIX_ETMAUTHSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMAUTHSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0fb8 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMAUTHSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMAUTHSTATUS(a) cavm_tsix_etmauthstatus_t
#define bustype_CAVM_TSIX_ETMAUTHSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMAUTHSTATUS(a) "TSIX_ETMAUTHSTATUS"
#define device_bar_CAVM_TSIX_ETMAUTHSTATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMAUTHSTATUS(a) (a)
#define arguments_CAVM_TSIX_ETMAUTHSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmauxcr
 *
 * Auxiliary Control Register
 * Provides additional IMPLEMENTATION DEFINED ETM controls.
 */
union cavm_tsix_etmauxcr
{
    uint32_t u;
    struct cavm_tsix_etmauxcr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmauxcr_s cn; */
};
typedef union cavm_tsix_etmauxcr cavm_tsix_etmauxcr_t;

static inline uint64_t CAVM_TSIX_ETMAUXCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMAUXCR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c01fc + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMAUXCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMAUXCR(a) cavm_tsix_etmauxcr_t
#define bustype_CAVM_TSIX_ETMAUXCR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMAUXCR(a) "TSIX_ETMAUXCR"
#define device_bar_CAVM_TSIX_ETMAUXCR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMAUXCR(a) (a)
#define arguments_CAVM_TSIX_ETMAUXCR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmccer
 *
 * Configuration Code Extension Register
 * Holds ETM configuration information additional to that in the ETMCCR.
 */
union cavm_tsix_etmccer
{
    uint32_t u;
    struct cavm_tsix_etmccer_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t timestamp_default_size : 1; /**< [ 29: 29](RO) Timestamp packet size:
                                                                 0 = the default size of the packet is 48 bits.
                                                                 1 = the default size of the packet is 64 bits. */
        uint32_t timestamp_encoding    : 1;  /**< [ 28: 28](RO) Timestamp packet encoding:
                                                                 1 = the timestamp packet is encoded as a natural binary number.
                                                                 0 = the packet is gray coded. */
        uint32_t reserved_23_27        : 5;
        uint32_t timestamp_implemented : 1;  /**< [ 22: 22](RO) Timestamp injector is implemented. */
        uint32_t reserved_12_21        : 10;
        uint32_t all_regs_readable     : 1;  /**< [ 11: 11](RO) Set to 1 if all registers are readable. */
        uint32_t reserved_0_10         : 11;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_10         : 11;
        uint32_t all_regs_readable     : 1;  /**< [ 11: 11](RO) Set to 1 if all registers are readable. */
        uint32_t reserved_12_21        : 10;
        uint32_t timestamp_implemented : 1;  /**< [ 22: 22](RO) Timestamp injector is implemented. */
        uint32_t reserved_23_27        : 5;
        uint32_t timestamp_encoding    : 1;  /**< [ 28: 28](RO) Timestamp packet encoding:
                                                                 1 = the timestamp packet is encoded as a natural binary number.
                                                                 0 = the packet is gray coded. */
        uint32_t timestamp_default_size : 1; /**< [ 29: 29](RO) Timestamp packet size:
                                                                 0 = the default size of the packet is 48 bits.
                                                                 1 = the default size of the packet is 64 bits. */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmccer_s cn; */
};
typedef union cavm_tsix_etmccer cavm_tsix_etmccer_t;

static inline uint64_t CAVM_TSIX_ETMCCER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMCCER(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c01e8 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMCCER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMCCER(a) cavm_tsix_etmccer_t
#define bustype_CAVM_TSIX_ETMCCER(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMCCER(a) "TSIX_ETMCCER"
#define device_bar_CAVM_TSIX_ETMCCER(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMCCER(a) (a)
#define arguments_CAVM_TSIX_ETMCCER(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmccr
 *
 * Configuration Code Register
 * Enables software to read the IMPLEMENTATION DEFINED configuration of the ETM, giving
 * the number of each type of resource.
 */
union cavm_tsix_etmccr
{
    uint32_t u;
    struct cavm_tsix_etmccr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t etmid_reg_present     : 1;  /**< [ 31: 31](RO) This bit indicates that the ETMIDR, register 0x1E4, is present
                                                                 and defines the ETM architecture version in use. */
        uint32_t reserved_28_30        : 3;
        uint32_t coprocessor_mem_map_supported : 1;/**< [ 27: 27](RO) Coprocessor or memory-mapped access to registers supported. */
        uint32_t trc_start_stop_present : 1; /**< [ 26: 26](RO) Trace start/stop block is not present. */
        uint32_t num_cntxt_id_comp     : 2;  /**< [ 25: 24](RO) Number of context ID comparators. */
        uint32_t fifofull_logic_present : 1; /**< [ 23: 23](RO) FIFOFULL logic is not present. */
        uint32_t num_ofexternal_out    : 3;  /**< [ 22: 20](RO) Number of external outputs. */
        uint32_t num_ofexternal_in     : 3;  /**< [ 19: 17](RO) Number of external inputs. */
        uint32_t sequencer_present     : 1;  /**< [ 16: 16](RO) Sequencer is not present. */
        uint32_t num_of_counters       : 3;  /**< [ 15: 13](RO) Counters are not supported. */
        uint32_t num_of_mem_map_addr_dec_in : 5;/**< [ 12:  8](RO) Memory map decoder inputs are not supported. */
        uint32_t num_of_data_val_comp  : 4;  /**< [  7:  4](RO) Data value comparators are not supported. */
        uint32_t num_of_pairs_of_addrr_comp : 4;/**< [  3:  0](RO) Pairs of address comparators are not supported. */
#else /* Word 0 - Little Endian */
        uint32_t num_of_pairs_of_addrr_comp : 4;/**< [  3:  0](RO) Pairs of address comparators are not supported. */
        uint32_t num_of_data_val_comp  : 4;  /**< [  7:  4](RO) Data value comparators are not supported. */
        uint32_t num_of_mem_map_addr_dec_in : 5;/**< [ 12:  8](RO) Memory map decoder inputs are not supported. */
        uint32_t num_of_counters       : 3;  /**< [ 15: 13](RO) Counters are not supported. */
        uint32_t sequencer_present     : 1;  /**< [ 16: 16](RO) Sequencer is not present. */
        uint32_t num_ofexternal_in     : 3;  /**< [ 19: 17](RO) Number of external inputs. */
        uint32_t num_ofexternal_out    : 3;  /**< [ 22: 20](RO) Number of external outputs. */
        uint32_t fifofull_logic_present : 1; /**< [ 23: 23](RO) FIFOFULL logic is not present. */
        uint32_t num_cntxt_id_comp     : 2;  /**< [ 25: 24](RO) Number of context ID comparators. */
        uint32_t trc_start_stop_present : 1; /**< [ 26: 26](RO) Trace start/stop block is not present. */
        uint32_t coprocessor_mem_map_supported : 1;/**< [ 27: 27](RO) Coprocessor or memory-mapped access to registers supported. */
        uint32_t reserved_28_30        : 3;
        uint32_t etmid_reg_present     : 1;  /**< [ 31: 31](RO) This bit indicates that the ETMIDR, register 0x1E4, is present
                                                                 and defines the ETM architecture version in use. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmccr_s cn; */
};
typedef union cavm_tsix_etmccr cavm_tsix_etmccr_t;

static inline uint64_t CAVM_TSIX_ETMCCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMCCR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0004 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMCCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMCCR(a) cavm_tsix_etmccr_t
#define bustype_CAVM_TSIX_ETMCCR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMCCR(a) "TSIX_ETMCCR"
#define device_bar_CAVM_TSIX_ETMCCR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMCCR(a) (a)
#define arguments_CAVM_TSIX_ETMCCR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmcidr0
 *
 * Component Identification Register 0
 * The CIDR0 register is part of the set of component identification registers.
 */
union cavm_tsix_etmcidr0
{
    uint32_t u;
    struct cavm_tsix_etmcidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
        uint32_t id0                   : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
#else /* Word 0 - Little Endian */
        uint32_t id0                   : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmcidr0_s cn; */
};
typedef union cavm_tsix_etmcidr0 cavm_tsix_etmcidr0_t;

static inline uint64_t CAVM_TSIX_ETMCIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMCIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0ff0 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMCIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMCIDR0(a) cavm_tsix_etmcidr0_t
#define bustype_CAVM_TSIX_ETMCIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMCIDR0(a) "TSIX_ETMCIDR0"
#define device_bar_CAVM_TSIX_ETMCIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMCIDR0(a) (a)
#define arguments_CAVM_TSIX_ETMCIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmcidr1
 *
 * Component Identification Register 1
 * The CIDR1 register is part of the set of component identification registers.
 */
union cavm_tsix_etmcidr1
{
    uint32_t u;
    struct cavm_tsix_etmcidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
        uint32_t id1                   : 8;  /**< [  7:  0](RO) Preamble. Returns 0x90. */
#else /* Word 0 - Little Endian */
        uint32_t id1                   : 8;  /**< [  7:  0](RO) Preamble. Returns 0x90. */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmcidr1_s cn; */
};
typedef union cavm_tsix_etmcidr1 cavm_tsix_etmcidr1_t;

static inline uint64_t CAVM_TSIX_ETMCIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMCIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0ff4 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMCIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMCIDR1(a) cavm_tsix_etmcidr1_t
#define bustype_CAVM_TSIX_ETMCIDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMCIDR1(a) "TSIX_ETMCIDR1"
#define device_bar_CAVM_TSIX_ETMCIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMCIDR1(a) (a)
#define arguments_CAVM_TSIX_ETMCIDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmcidr2
 *
 * Component Identification Register 2
 * The CIDR2 register is part of the set of component identification registers.
 */
union cavm_tsix_etmcidr2
{
    uint32_t u;
    struct cavm_tsix_etmcidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
        uint32_t id2                   : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
#else /* Word 0 - Little Endian */
        uint32_t id2                   : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmcidr2_s cn; */
};
typedef union cavm_tsix_etmcidr2 cavm_tsix_etmcidr2_t;

static inline uint64_t CAVM_TSIX_ETMCIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMCIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0ff8 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMCIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMCIDR2(a) cavm_tsix_etmcidr2_t
#define bustype_CAVM_TSIX_ETMCIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMCIDR2(a) "TSIX_ETMCIDR2"
#define device_bar_CAVM_TSIX_ETMCIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMCIDR2(a) (a)
#define arguments_CAVM_TSIX_ETMCIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmcidr3
 *
 * Component Identification Register 3
 * The CIDR3 register is part of the set of component identification registers.
 */
union cavm_tsix_etmcidr3
{
    uint32_t u;
    struct cavm_tsix_etmcidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
        uint32_t id3                   : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
#else /* Word 0 - Little Endian */
        uint32_t id3                   : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmcidr3_s cn; */
};
typedef union cavm_tsix_etmcidr3 cavm_tsix_etmcidr3_t;

static inline uint64_t CAVM_TSIX_ETMCIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMCIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0ffc + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMCIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMCIDR3(a) cavm_tsix_etmcidr3_t
#define bustype_CAVM_TSIX_ETMCIDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMCIDR3(a) "TSIX_ETMCIDR3"
#define device_bar_CAVM_TSIX_ETMCIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMCIDR3(a) (a)
#define arguments_CAVM_TSIX_ETMCIDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmclaimclr
 *
 * Claim Tag Clear Register
 * clear bits in claim tag to 0.
 * find the current value of the claim tag.
 */
union cavm_tsix_etmclaimclr
{
    uint32_t u;
    struct cavm_tsix_etmclaimclr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t clr                   : 8;  /**< [  7:  0](R/W/H) On reads, returns the current claim tag value.
                                                                 On writes, a 1 in a bit position causes the corresponding bit in the claim tag
                                                                 value to be cleared to 0.
                                                                 On an ETM reset this field is cleared to 0x00. */
#else /* Word 0 - Little Endian */
        uint32_t clr                   : 8;  /**< [  7:  0](R/W/H) On reads, returns the current claim tag value.
                                                                 On writes, a 1 in a bit position causes the corresponding bit in the claim tag
                                                                 value to be cleared to 0.
                                                                 On an ETM reset this field is cleared to 0x00. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmclaimclr_s cn; */
};
typedef union cavm_tsix_etmclaimclr cavm_tsix_etmclaimclr_t;

static inline uint64_t CAVM_TSIX_ETMCLAIMCLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMCLAIMCLR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0fa4 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMCLAIMCLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMCLAIMCLR(a) cavm_tsix_etmclaimclr_t
#define bustype_CAVM_TSIX_ETMCLAIMCLR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMCLAIMCLR(a) "TSIX_ETMCLAIMCLR"
#define device_bar_CAVM_TSIX_ETMCLAIMCLR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMCLAIMCLR(a) (a)
#define arguments_CAVM_TSIX_ETMCLAIMCLR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmclaimset
 *
 * Claim Tag Set Register
 * Set bits in claim tag.
 * find the number of bits supported by the claim tag.
 */
union cavm_tsix_etmclaimset
{
    uint32_t u;
    struct cavm_tsix_etmclaimset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t set                   : 8;  /**< [  7:  0](R/W) On read, returns 0xFF.
                                                                 On writes, a 1 in a bit position caused the corresponding bit in the claim tag to be set. */
#else /* Word 0 - Little Endian */
        uint32_t set                   : 8;  /**< [  7:  0](R/W) On read, returns 0xFF.
                                                                 On writes, a 1 in a bit position caused the corresponding bit in the claim tag to be set. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmclaimset_s cn; */
};
typedef union cavm_tsix_etmclaimset cavm_tsix_etmclaimset_t;

static inline uint64_t CAVM_TSIX_ETMCLAIMSET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMCLAIMSET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0fa0 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMCLAIMSET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMCLAIMSET(a) cavm_tsix_etmclaimset_t
#define bustype_CAVM_TSIX_ETMCLAIMSET(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMCLAIMSET(a) "TSIX_ETMCLAIMSET"
#define device_bar_CAVM_TSIX_ETMCLAIMSET(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMCLAIMSET(a) (a)
#define arguments_CAVM_TSIX_ETMCLAIMSET(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmcr
 *
 * Main control Register
 * Controls general operation of the ETM.
 */
union cavm_tsix_etmcr
{
    uint32_t u;
    struct cavm_tsix_etmcr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t vmid_trace_enable     : 1;  /**< [ 30: 30](RO) Virtualization Extensions are not implemented.
                                                                 This bit is RAZ/WI. */
        uint32_t reserved_29           : 1;
        uint32_t timestamp_enable      : 1;  /**< [ 28: 28](R/W) Set this bit to 1 to enable timestamping.
                                                                 An ETM reset sets this bit to 0. */
        uint32_t processor_select      : 3;  /**< [ 27: 25](RO) This bit reads as zero and ignores writes. */
        uint32_t inst_rsrc_access_ctrl : 1;  /**< [ 24: 24](RO) Instrumentation resources are not implemented, this bit reads as zero
                                                                 and ignores writes. */
        uint32_t disable_reg_wr_sw     : 1;  /**< [ 23: 23](R/W) Register writes from the software disabled. This bit can only be
                                                                 written by debugger.
                                                                 Note: this bit must be zero - functionality not supported. */
        uint32_t disable_reg_wr_dbger  : 1;  /**< [ 22: 22](R/W) Register writes from the debugger disabled. This bit can only be
                                                                 written by software.
                                                                 Note: this bit must be zero - functionality not supported. */
        uint32_t port_size_msb         : 1;  /**< [ 21: 21](RO) For ETMv3.0 and later use this in conjunction with PORT_SIZE_LSB. */
        uint32_t data_only_mode        : 1;  /**< [ 20: 20](RO) The possible values of this bit are:
                                                                 0 = Instruction trace enabled.
                                                                 1 = Instruction trace disabled.
                                                                 On an ETM reset this bit is 1.
                                                                 NO DATA OR INSTRUCTION trace is supported. */
        uint32_t filter                : 1;  /**< [ 19: 19](RO) From ETMv3.0, this
                                                                 bit is used in conjunction with [MONITORCPRT].
                                                                 This bit ignores writes and Reads-As-Zero. */
        uint32_t suppress_data         : 1;  /**< [ 18: 18](RO) This bit ignores writes and Reads-As-Zero. */
        uint32_t port_mode_lsb         : 2;  /**< [ 17: 16](RO) These bits, in conjunction with PORT_MODE_MSB, enable the trace port clocking
                                                                 mode to be set.
                                                                 Note: this field is RO only with value of 0x0. */
        uint32_t contextidsize         : 2;  /**< [ 15: 14](RO) The possible values of this field are:
                                                                 0x0 = No Context ID tracing.
                                                                 0x1 = Context ID bits [7:0] traced.
                                                                 0x2 = Context ID bits [15:0] traced.
                                                                 0x3 = Context ID bits [31:0] traced.
                                                                 Note: only 0x0 is supported - No Context ID tracing" */
        uint32_t port_mode_msb         : 1;  /**< [ 13: 13](RO) This bit enables the trace port clocking mode to be set in conjunction
                                                                 with bits [17:16]. */
        uint32_t cycle_accurate_tracing : 1; /**< [ 12: 12](RO) This bit ignores writes and Reads-As-Zero. */
        uint32_t etm_port_selection    : 1;  /**< [ 11: 11](R/W) This bit controls the external ETMEN pin. The possible values are:
                                                                 0 = ETMEN is LOW.
                                                                 1 = ETMEN is HIGH.
                                                                 This bit must be set by the trace software tools to ensure that trace
                                                                 output is enabled from this ETM.
                                                                 Note: ETMEN port is not implemented */
        uint32_t etm_programming       : 1;  /**< [ 10: 10](R/W) When set to 1, the ETM is being programmed.
                                                                 On an ETM reset this bit is set to 0x1. */
        uint32_t dbg_req_ctrl          : 1;  /**< [  9:  9](RO) No direct connection between TSI and proccessor.
                                                                 This bit ignores writes and Reads-As-Zero. */
        uint32_t branch_output         : 1;  /**< [  8:  8](RO) Instruction trace is not supported.
                                                                 This bit ignores writes and Reads-As-Zero. */
        uint32_t stall_processor       : 1;  /**< [  7:  7](RO) The FIFOFULL output is not implemented.
                                                                 TSI has no FIFO.
                                                                 This bit reads as zero and ignores writes. */
        uint32_t port_size_lsb         : 3;  /**< [  6:  4](RO) The port size determines how many external pins are available to
                                                                 output the trace information.
                                                                 In ETMv3 the port size is the number of bits in TRACEDATA. This configuration determines how
                                                                 quickly the trace packets are extracted from the FIFO.
                                                                 From ETMv3 the port size field is 4 bits wide and [PORT_SIZE_LSB] must be
                                                                 used in conjunction with [PORT_SIZE_MSB], so that the port size encoding is
                                                                 given by ([PORT_SIZE_MSB], [PORT_SIZE_LSB]).
                                                                 Note: TRACEDATA width is 32 bits, this field is fixed to 0x4. */
        uint32_t data_access           : 2;  /**< [  3:  2](RO) The possible values of this field are:
                                                                 0x0 = No data tracing.
                                                                 0x1 = Trace only the data portion of the access.
                                                                 0x2 = Trace only the address portion of the access.
                                                                 0x3 = Trace both the address and the data of the access.
                                                                 Note: only 0x0 is available - No data tracing */
        uint32_t monitorcprt           : 1;  /**< [  1:  1](RO) This bit is used with [FILTER].
                                                                 CPRTs is not traced, this bit is RO only with value of 0x0 */
        uint32_t etm_power_down        : 1;  /**< [  0:  0](R/W) When this bit is set to 1, the ETM must be powered down and disabled. */
#else /* Word 0 - Little Endian */
        uint32_t etm_power_down        : 1;  /**< [  0:  0](R/W) When this bit is set to 1, the ETM must be powered down and disabled. */
        uint32_t monitorcprt           : 1;  /**< [  1:  1](RO) This bit is used with [FILTER].
                                                                 CPRTs is not traced, this bit is RO only with value of 0x0 */
        uint32_t data_access           : 2;  /**< [  3:  2](RO) The possible values of this field are:
                                                                 0x0 = No data tracing.
                                                                 0x1 = Trace only the data portion of the access.
                                                                 0x2 = Trace only the address portion of the access.
                                                                 0x3 = Trace both the address and the data of the access.
                                                                 Note: only 0x0 is available - No data tracing */
        uint32_t port_size_lsb         : 3;  /**< [  6:  4](RO) The port size determines how many external pins are available to
                                                                 output the trace information.
                                                                 In ETMv3 the port size is the number of bits in TRACEDATA. This configuration determines how
                                                                 quickly the trace packets are extracted from the FIFO.
                                                                 From ETMv3 the port size field is 4 bits wide and [PORT_SIZE_LSB] must be
                                                                 used in conjunction with [PORT_SIZE_MSB], so that the port size encoding is
                                                                 given by ([PORT_SIZE_MSB], [PORT_SIZE_LSB]).
                                                                 Note: TRACEDATA width is 32 bits, this field is fixed to 0x4. */
        uint32_t stall_processor       : 1;  /**< [  7:  7](RO) The FIFOFULL output is not implemented.
                                                                 TSI has no FIFO.
                                                                 This bit reads as zero and ignores writes. */
        uint32_t branch_output         : 1;  /**< [  8:  8](RO) Instruction trace is not supported.
                                                                 This bit ignores writes and Reads-As-Zero. */
        uint32_t dbg_req_ctrl          : 1;  /**< [  9:  9](RO) No direct connection between TSI and proccessor.
                                                                 This bit ignores writes and Reads-As-Zero. */
        uint32_t etm_programming       : 1;  /**< [ 10: 10](R/W) When set to 1, the ETM is being programmed.
                                                                 On an ETM reset this bit is set to 0x1. */
        uint32_t etm_port_selection    : 1;  /**< [ 11: 11](R/W) This bit controls the external ETMEN pin. The possible values are:
                                                                 0 = ETMEN is LOW.
                                                                 1 = ETMEN is HIGH.
                                                                 This bit must be set by the trace software tools to ensure that trace
                                                                 output is enabled from this ETM.
                                                                 Note: ETMEN port is not implemented */
        uint32_t cycle_accurate_tracing : 1; /**< [ 12: 12](RO) This bit ignores writes and Reads-As-Zero. */
        uint32_t port_mode_msb         : 1;  /**< [ 13: 13](RO) This bit enables the trace port clocking mode to be set in conjunction
                                                                 with bits [17:16]. */
        uint32_t contextidsize         : 2;  /**< [ 15: 14](RO) The possible values of this field are:
                                                                 0x0 = No Context ID tracing.
                                                                 0x1 = Context ID bits [7:0] traced.
                                                                 0x2 = Context ID bits [15:0] traced.
                                                                 0x3 = Context ID bits [31:0] traced.
                                                                 Note: only 0x0 is supported - No Context ID tracing" */
        uint32_t port_mode_lsb         : 2;  /**< [ 17: 16](RO) These bits, in conjunction with PORT_MODE_MSB, enable the trace port clocking
                                                                 mode to be set.
                                                                 Note: this field is RO only with value of 0x0. */
        uint32_t suppress_data         : 1;  /**< [ 18: 18](RO) This bit ignores writes and Reads-As-Zero. */
        uint32_t filter                : 1;  /**< [ 19: 19](RO) From ETMv3.0, this
                                                                 bit is used in conjunction with [MONITORCPRT].
                                                                 This bit ignores writes and Reads-As-Zero. */
        uint32_t data_only_mode        : 1;  /**< [ 20: 20](RO) The possible values of this bit are:
                                                                 0 = Instruction trace enabled.
                                                                 1 = Instruction trace disabled.
                                                                 On an ETM reset this bit is 1.
                                                                 NO DATA OR INSTRUCTION trace is supported. */
        uint32_t port_size_msb         : 1;  /**< [ 21: 21](RO) For ETMv3.0 and later use this in conjunction with PORT_SIZE_LSB. */
        uint32_t disable_reg_wr_dbger  : 1;  /**< [ 22: 22](R/W) Register writes from the debugger disabled. This bit can only be
                                                                 written by software.
                                                                 Note: this bit must be zero - functionality not supported. */
        uint32_t disable_reg_wr_sw     : 1;  /**< [ 23: 23](R/W) Register writes from the software disabled. This bit can only be
                                                                 written by debugger.
                                                                 Note: this bit must be zero - functionality not supported. */
        uint32_t inst_rsrc_access_ctrl : 1;  /**< [ 24: 24](RO) Instrumentation resources are not implemented, this bit reads as zero
                                                                 and ignores writes. */
        uint32_t processor_select      : 3;  /**< [ 27: 25](RO) This bit reads as zero and ignores writes. */
        uint32_t timestamp_enable      : 1;  /**< [ 28: 28](R/W) Set this bit to 1 to enable timestamping.
                                                                 An ETM reset sets this bit to 0. */
        uint32_t reserved_29           : 1;
        uint32_t vmid_trace_enable     : 1;  /**< [ 30: 30](RO) Virtualization Extensions are not implemented.
                                                                 This bit is RAZ/WI. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmcr_s cn; */
};
typedef union cavm_tsix_etmcr cavm_tsix_etmcr_t;

static inline uint64_t CAVM_TSIX_ETMCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMCR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0000 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMCR(a) cavm_tsix_etmcr_t
#define bustype_CAVM_TSIX_ETMCR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMCR(a) "TSIX_ETMCR"
#define device_bar_CAVM_TSIX_ETMCR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMCR(a) (a)
#define arguments_CAVM_TSIX_ETMCR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmdevid
 *
 * Device Configuration Register
 * Returnes an implementation defined CoreSight component capabilities fields.
 */
union cavm_tsix_etmdevid
{
    uint32_t u;
    struct cavm_tsix_etmdevid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t res0                  : 16; /**< [ 31: 16](RAZ) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
        uint32_t component_capabilities : 16;/**< [ 15:  0](RO) component_capabilities */
#else /* Word 0 - Little Endian */
        uint32_t component_capabilities : 16;/**< [ 15:  0](RO) component_capabilities */
        uint32_t res0                  : 16; /**< [ 31: 16](RAZ) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmdevid_s cn; */
};
typedef union cavm_tsix_etmdevid cavm_tsix_etmdevid_t;

static inline uint64_t CAVM_TSIX_ETMDEVID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMDEVID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0fc8 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMDEVID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMDEVID(a) cavm_tsix_etmdevid_t
#define bustype_CAVM_TSIX_ETMDEVID(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMDEVID(a) "TSIX_ETMDEVID"
#define device_bar_CAVM_TSIX_ETMDEVID(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMDEVID(a) (a)
#define arguments_CAVM_TSIX_ETMDEVID(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmdevtype
 *
 * Device Type Identifier Register
 * Returns the CoreSight device type of the ETM macrocell.
 */
union cavm_tsix_etmdevtype
{
    uint32_t u;
    struct cavm_tsix_etmdevtype_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Minor classification. Returns 0x0. */
        uint32_t main                  : 4;  /**< [  3:  0](RO) Major classification. Returns 0x3, trace source. */
#else /* Word 0 - Little Endian */
        uint32_t main                  : 4;  /**< [  3:  0](RO) Major classification. Returns 0x3, trace source. */
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Minor classification. Returns 0x0. */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmdevtype_s cn; */
};
typedef union cavm_tsix_etmdevtype cavm_tsix_etmdevtype_t;

static inline uint64_t CAVM_TSIX_ETMDEVTYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMDEVTYPE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0fcc + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMDEVTYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMDEVTYPE(a) cavm_tsix_etmdevtype_t
#define bustype_CAVM_TSIX_ETMDEVTYPE(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMDEVTYPE(a) "TSIX_ETMDEVTYPE"
#define device_bar_CAVM_TSIX_ETMDEVTYPE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMDEVTYPE(a) (a)
#define arguments_CAVM_TSIX_ETMDEVTYPE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmeibcr
 *
 * EmbeddedICE Behavior Control Register
 * Controls the sampling behavior of the EmbeddedICE watchpoint comparator inputs.
 */
union cavm_tsix_etmeibcr
{
    uint32_t u;
    struct cavm_tsix_etmeibcr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmeibcr_s cn; */
};
typedef union cavm_tsix_etmeibcr cavm_tsix_etmeibcr_t;

static inline uint64_t CAVM_TSIX_ETMEIBCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMEIBCR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c01f4 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMEIBCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMEIBCR(a) cavm_tsix_etmeibcr_t
#define bustype_CAVM_TSIX_ETMEIBCR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMEIBCR(a) "TSIX_ETMEIBCR"
#define device_bar_CAVM_TSIX_ETMEIBCR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMEIBCR(a) (a)
#define arguments_CAVM_TSIX_ETMEIBCR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmextinselr
 *
 * Extended External Input Selection Register
 * Selects the extended external inputs.
 */
union cavm_tsix_etmextinselr
{
    uint32_t u;
    struct cavm_tsix_etmextinselr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmextinselr_s cn; */
};
typedef union cavm_tsix_etmextinselr cavm_tsix_etmextinselr_t;

static inline uint64_t CAVM_TSIX_ETMEXTINSELR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMEXTINSELR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c01ec + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMEXTINSELR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMEXTINSELR(a) cavm_tsix_etmextinselr_t
#define bustype_CAVM_TSIX_ETMEXTINSELR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMEXTINSELR(a) "TSIX_ETMEXTINSELR"
#define device_bar_CAVM_TSIX_ETMEXTINSELR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMEXTINSELR(a) (a)
#define arguments_CAVM_TSIX_ETMEXTINSELR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmfflr
 *
 * FIFOFULL Level Register
 * Holds the level below which the FIFO is considered full, although its function
 * varies for different ETM architectures.
 */
union cavm_tsix_etmfflr
{
    uint32_t u;
    struct cavm_tsix_etmfflr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t fifo_full_level       : 8;  /**< [  7:  0](RO) The number of bytes left in the FIFO, below which the FIFOFULL or
                                                                 SuppressData signal is asserted. For example, setting this value to 15 causes data
                                                                 trace suppression or processor stalling, if enabled, when there are less than 15 free
                                                                 bytes in the FIFO. */
#else /* Word 0 - Little Endian */
        uint32_t fifo_full_level       : 8;  /**< [  7:  0](RO) The number of bytes left in the FIFO, below which the FIFOFULL or
                                                                 SuppressData signal is asserted. For example, setting this value to 15 causes data
                                                                 trace suppression or processor stalling, if enabled, when there are less than 15 free
                                                                 bytes in the FIFO. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmfflr_s cn; */
};
typedef union cavm_tsix_etmfflr cavm_tsix_etmfflr_t;

static inline uint64_t CAVM_TSIX_ETMFFLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMFFLR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c002c + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMFFLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMFFLR(a) cavm_tsix_etmfflr_t
#define bustype_CAVM_TSIX_ETMFFLR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMFFLR(a) "TSIX_ETMFFLR"
#define device_bar_CAVM_TSIX_ETMFFLR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMFFLR(a) (a)
#define arguments_CAVM_TSIX_ETMFFLR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmffrr
 *
 * FIFOFULL Region Register
 * Defines the regions where FIFOFULL can be asserted, specifying the MMDs and address
 * comparators used for FIFOFULL region control.
 */
union cavm_tsix_etmffrr
{
    uint32_t u;
    struct cavm_tsix_etmffrr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmffrr_s cn; */
};
typedef union cavm_tsix_etmffrr cavm_tsix_etmffrr_t;

static inline uint64_t CAVM_TSIX_ETMFFRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMFFRR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0028 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMFFRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMFFRR(a) cavm_tsix_etmffrr_t
#define bustype_CAVM_TSIX_ETMFFRR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMFFRR(a) "TSIX_ETMFFRR"
#define device_bar_CAVM_TSIX_ETMFFRR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMFFRR(a) (a)
#define arguments_CAVM_TSIX_ETMFFRR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmidr
 *
 * ETM ID Register
 * Holds the ETM architecture variant, and defines the programmers model for the ETM.
 */
union cavm_tsix_etmidr
{
    uint32_t u;
    struct cavm_tsix_etmidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t implementation_code   : 8;  /**< [ 31: 24](RO) ASCII code for A, indicating ARM Limited. */
        uint32_t reserved_21_23        : 3;
        uint32_t branch_pkt_encode_implemented : 1;/**< [ 20: 20](RO) No branch decoding support. */
        uint32_t security_extension    : 1;  /**< [ 19: 19](RO) No extension support. */
        uint32_t support_for_32bit_thump_instr : 1;/**< [ 18: 18](RO) No instruction support. */
        uint32_t reserved_17           : 1;
        uint32_t load_pc_first         : 1;  /**< [ 16: 16](RO) Reserved bits, read as zero, write ignore.
                                                                 Not relevant for TSI. */
        uint32_t processor_family      : 4;  /**< [ 15: 12](RO) Reserved bits, read as zero, write ignore.
                                                                 Not relevant for TSI. */
        uint32_t major                 : 4;  /**< [ 11:  8](RO) Major ETM architecture version number. */
        uint32_t minor                 : 4;  /**< [  7:  4](RO) Minor ETM architecture version number. */
        uint32_t implementation_revision : 4;/**< [  3:  0](RO) Implementation revision. */
#else /* Word 0 - Little Endian */
        uint32_t implementation_revision : 4;/**< [  3:  0](RO) Implementation revision. */
        uint32_t minor                 : 4;  /**< [  7:  4](RO) Minor ETM architecture version number. */
        uint32_t major                 : 4;  /**< [ 11:  8](RO) Major ETM architecture version number. */
        uint32_t processor_family      : 4;  /**< [ 15: 12](RO) Reserved bits, read as zero, write ignore.
                                                                 Not relevant for TSI. */
        uint32_t load_pc_first         : 1;  /**< [ 16: 16](RO) Reserved bits, read as zero, write ignore.
                                                                 Not relevant for TSI. */
        uint32_t reserved_17           : 1;
        uint32_t support_for_32bit_thump_instr : 1;/**< [ 18: 18](RO) No instruction support. */
        uint32_t security_extension    : 1;  /**< [ 19: 19](RO) No extension support. */
        uint32_t branch_pkt_encode_implemented : 1;/**< [ 20: 20](RO) No branch decoding support. */
        uint32_t reserved_21_23        : 3;
        uint32_t implementation_code   : 8;  /**< [ 31: 24](RO) ASCII code for A, indicating ARM Limited. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmidr_s cn; */
};
typedef union cavm_tsix_etmidr cavm_tsix_etmidr_t;

static inline uint64_t CAVM_TSIX_ETMIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMIDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c01e4 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMIDR(a) cavm_tsix_etmidr_t
#define bustype_CAVM_TSIX_ETMIDR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMIDR(a) "TSIX_ETMIDR"
#define device_bar_CAVM_TSIX_ETMIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMIDR(a) (a)
#define arguments_CAVM_TSIX_ETMIDR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmidr2
 *
 * ETM ID 2 Register
 * Provides an extension to the ETM ID register, ETMIDR.
 */
union cavm_tsix_etmidr2
{
    uint32_t u;
    struct cavm_tsix_etmidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t swp_swpb_order        : 1;  /**< [  1:  1](RO) Identifies the order of transfers for a SWP or SWPB instruction:
                                                                 0 = the Load transfer is traced before the Store transfer.
                                                                 1 = the Store transfer is traced before the Load transfer. */
        uint32_t rfe_order             : 1;  /**< [  0:  0](RO) Identifies the order of transfers for the RFE instruction:
                                                                 0 = the PC transfer is traced before the CPSR transfer.
                                                                 1 = the CPSR transfer is traced before the PC transfer. */
#else /* Word 0 - Little Endian */
        uint32_t rfe_order             : 1;  /**< [  0:  0](RO) Identifies the order of transfers for the RFE instruction:
                                                                 0 = the PC transfer is traced before the CPSR transfer.
                                                                 1 = the CPSR transfer is traced before the PC transfer. */
        uint32_t swp_swpb_order        : 1;  /**< [  1:  1](RO) Identifies the order of transfers for a SWP or SWPB instruction:
                                                                 0 = the Load transfer is traced before the Store transfer.
                                                                 1 = the Store transfer is traced before the Load transfer. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmidr2_s cn; */
};
typedef union cavm_tsix_etmidr2 cavm_tsix_etmidr2_t;

static inline uint64_t CAVM_TSIX_ETMIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0208 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMIDR2(a) cavm_tsix_etmidr2_t
#define bustype_CAVM_TSIX_ETMIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMIDR2(a) "TSIX_ETMIDR2"
#define device_bar_CAVM_TSIX_ETMIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMIDR2(a) (a)
#define arguments_CAVM_TSIX_ETMIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmimps0
 *
 * The IMPLEMENTATION SPECIFIC 0 Register
 * Shows the presence of any IMPLEMENTATION SPECIFIC features, and enables any features
 * that are provided.
 */
union cavm_tsix_etmimps0
{
    uint32_t u;
    struct cavm_tsix_etmimps0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmimps0_s cn; */
};
typedef union cavm_tsix_etmimps0 cavm_tsix_etmimps0_t;

static inline uint64_t CAVM_TSIX_ETMIMPS0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMIMPS0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c01c0 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMIMPS0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMIMPS0(a) cavm_tsix_etmimps0_t
#define bustype_CAVM_TSIX_ETMIMPS0(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMIMPS0(a) "TSIX_ETMIMPS0"
#define device_bar_CAVM_TSIX_ETMIMPS0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMIMPS0(a) (a)
#define arguments_CAVM_TSIX_ETMIMPS0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmitctrl
 *
 * Integration Mode Control Register
 * Enables topology detection or integration testing.
 */
union cavm_tsix_etmitctrl
{
    uint32_t u;
    struct cavm_tsix_etmitctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t ime                   : 1;  /**< [  0:  0](R/W) Integration Mode Enable. When set, the device enters integration mode,
                                                                 enabling topology detection or integration testing to be performed. */
#else /* Word 0 - Little Endian */
        uint32_t ime                   : 1;  /**< [  0:  0](R/W) Integration Mode Enable. When set, the device enters integration mode,
                                                                 enabling topology detection or integration testing to be performed. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmitctrl_s cn; */
};
typedef union cavm_tsix_etmitctrl cavm_tsix_etmitctrl_t;

static inline uint64_t CAVM_TSIX_ETMITCTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMITCTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0f00 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMITCTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMITCTRL(a) cavm_tsix_etmitctrl_t
#define bustype_CAVM_TSIX_ETMITCTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMITCTRL(a) "TSIX_ETMITCTRL"
#define device_bar_CAVM_TSIX_ETMITCTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMITCTRL(a) (a)
#define arguments_CAVM_TSIX_ETMITCTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmlar
 *
 * Lock Access Register
 * Lock and unlock access to all ETM registers.
 */
union cavm_tsix_etmlar
{
    uint32_t u;
    struct cavm_tsix_etmlar_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t key_value             : 32; /**< [ 31:  0](WO) Write 0xC5ACCE55 to this field to unlock the ETM.
                                                                 Write any other value to this field to lock the ETM.
                                                                 Note: The lock is not implemented. */
#else /* Word 0 - Little Endian */
        uint32_t key_value             : 32; /**< [ 31:  0](WO) Write 0xC5ACCE55 to this field to unlock the ETM.
                                                                 Write any other value to this field to lock the ETM.
                                                                 Note: The lock is not implemented. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmlar_s cn; */
};
typedef union cavm_tsix_etmlar cavm_tsix_etmlar_t;

static inline uint64_t CAVM_TSIX_ETMLAR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMLAR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0fb0 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMLAR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMLAR(a) cavm_tsix_etmlar_t
#define bustype_CAVM_TSIX_ETMLAR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMLAR(a) "TSIX_ETMLAR"
#define device_bar_CAVM_TSIX_ETMLAR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMLAR(a) (a)
#define arguments_CAVM_TSIX_ETMLAR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmlsr
 *
 * Lock Status Register
 * Software reading the ETMLSR can check bit[1] to find out whether the register currently locked.
 */
union cavm_tsix_etmlsr
{
    uint32_t u;
    struct cavm_tsix_etmlsr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t read_as_zero          : 1;  /**< [  2:  2](RO) Read as zero. Indicates that the ETMLAR is 32bits. */
        uint32_t etm_locked_unlocked   : 1;  /**< [  1:  1](RO) indicates whether the ETM is locked:
                                                                 0x0 = writes are permitted.
                                                                 0x1 = ETM locked. writes are ignored. */
        uint32_t etm_locking_implemented : 1;/**< [  0:  0](RO) Indicates whether the lock register are implemented:
                                                                 0x0 = lock register is NOT implemented.
                                                                 0x1 = lock register is implemented. */
#else /* Word 0 - Little Endian */
        uint32_t etm_locking_implemented : 1;/**< [  0:  0](RO) Indicates whether the lock register are implemented:
                                                                 0x0 = lock register is NOT implemented.
                                                                 0x1 = lock register is implemented. */
        uint32_t etm_locked_unlocked   : 1;  /**< [  1:  1](RO) indicates whether the ETM is locked:
                                                                 0x0 = writes are permitted.
                                                                 0x1 = ETM locked. writes are ignored. */
        uint32_t read_as_zero          : 1;  /**< [  2:  2](RO) Read as zero. Indicates that the ETMLAR is 32bits. */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmlsr_s cn; */
};
typedef union cavm_tsix_etmlsr cavm_tsix_etmlsr_t;

static inline uint64_t CAVM_TSIX_ETMLSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMLSR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0fb4 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMLSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMLSR(a) cavm_tsix_etmlsr_t
#define bustype_CAVM_TSIX_ETMLSR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMLSR(a) "TSIX_ETMLSR"
#define device_bar_CAVM_TSIX_ETMLSR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMLSR(a) (a)
#define arguments_CAVM_TSIX_ETMLSR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmoslar
 *
 * OS Lock Access Register
 * Locks access to the ETM trace registers.
 */
union cavm_tsix_etmoslar
{
    uint32_t u;
    struct cavm_tsix_etmoslar_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ket_value             : 32; /**< [ 31:  0](RAZ) Write 0xC5ACCE55 to this field to lock the ETM trace registers.
                                                                 Write any other value to this field to unlock the ETM trace registers.
                                                                 Note: the lock is not implemented. */
#else /* Word 0 - Little Endian */
        uint32_t ket_value             : 32; /**< [ 31:  0](RAZ) Write 0xC5ACCE55 to this field to lock the ETM trace registers.
                                                                 Write any other value to this field to unlock the ETM trace registers.
                                                                 Note: the lock is not implemented. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmoslar_s cn; */
};
typedef union cavm_tsix_etmoslar cavm_tsix_etmoslar_t;

static inline uint64_t CAVM_TSIX_ETMOSLAR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMOSLAR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0300 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMOSLAR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMOSLAR(a) cavm_tsix_etmoslar_t
#define bustype_CAVM_TSIX_ETMOSLAR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMOSLAR(a) "TSIX_ETMOSLAR"
#define device_bar_CAVM_TSIX_ETMOSLAR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMOSLAR(a) (a)
#define arguments_CAVM_TSIX_ETMOSLAR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmoslsr
 *
 * OS Lock Status Register
 * Indicates whether ETM trace register locking is implemented. Determines whether the
 * ETM trace registers are locked
 */
union cavm_tsix_etmoslsr
{
    uint32_t u;
    struct cavm_tsix_etmoslsr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t etmoslar_implemented  : 1;  /**< [  3:  3](RO) This bit, in conjunction with bit [0], indicates the level of power down support implemented
                                                                 by the ETM. */
        uint32_t access_requires_32bit : 1;  /**< [  2:  2](RO) 32-bit access required.
                                                                 This bit is always Reads-As-Zero, indicating that 32-bit accesses are required to operate the
                                                                 ETMOSLAR. */
        uint32_t etm_debug_registers_locked : 1;/**< [  1:  1](RO) Locked bit. The possible values of this bit are:
                                                                 0 = ETM trace registers are not locked.
                                                                 1 = ETM trace registers are locked. Any access to these registers returns a
                                                                 slave-generated error response. */
        uint32_t dbg_reg_locking_implemented : 1;/**< [  0:  0](RO) This bit, in conjunction with bit [3], indicates the level
                                                                 of power down support implemented by the ETM. */
#else /* Word 0 - Little Endian */
        uint32_t dbg_reg_locking_implemented : 1;/**< [  0:  0](RO) This bit, in conjunction with bit [3], indicates the level
                                                                 of power down support implemented by the ETM. */
        uint32_t etm_debug_registers_locked : 1;/**< [  1:  1](RO) Locked bit. The possible values of this bit are:
                                                                 0 = ETM trace registers are not locked.
                                                                 1 = ETM trace registers are locked. Any access to these registers returns a
                                                                 slave-generated error response. */
        uint32_t access_requires_32bit : 1;  /**< [  2:  2](RO) 32-bit access required.
                                                                 This bit is always Reads-As-Zero, indicating that 32-bit accesses are required to operate the
                                                                 ETMOSLAR. */
        uint32_t etmoslar_implemented  : 1;  /**< [  3:  3](RO) This bit, in conjunction with bit [0], indicates the level of power down support implemented
                                                                 by the ETM. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmoslsr_s cn; */
};
typedef union cavm_tsix_etmoslsr cavm_tsix_etmoslsr_t;

static inline uint64_t CAVM_TSIX_ETMOSLSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMOSLSR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0304 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMOSLSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMOSLSR(a) cavm_tsix_etmoslsr_t
#define bustype_CAVM_TSIX_ETMOSLSR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMOSLSR(a) "TSIX_ETMOSLSR"
#define device_bar_CAVM_TSIX_ETMOSLSR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMOSLSR(a) (a)
#define arguments_CAVM_TSIX_ETMOSLSR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmossrr
 *
 * OS Save and Restore Register
 * Used to save or restore the complete ETM trace register state of the macrocell.
 */
union cavm_tsix_etmossrr
{
    uint32_t u;
    struct cavm_tsix_etmossrr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ossrr_read_or_write_value : 32;/**< [ 31:  0](RO) In SinglePower The ETMOSSRR is not implemented and
                                                                 accesses to the ETMOSSRR are unpredictable. */
#else /* Word 0 - Little Endian */
        uint32_t ossrr_read_or_write_value : 32;/**< [ 31:  0](RO) In SinglePower The ETMOSSRR is not implemented and
                                                                 accesses to the ETMOSSRR are unpredictable. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmossrr_s cn; */
};
typedef union cavm_tsix_etmossrr cavm_tsix_etmossrr_t;

static inline uint64_t CAVM_TSIX_ETMOSSRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMOSSRR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0308 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMOSSRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMOSSRR(a) cavm_tsix_etmossrr_t
#define bustype_CAVM_TSIX_ETMOSSRR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMOSSRR(a) "TSIX_ETMOSSRR"
#define device_bar_CAVM_TSIX_ETMOSSRR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMOSSRR(a) (a)
#define arguments_CAVM_TSIX_ETMOSSRR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmpdcr
 *
 * Power Down Control Register
 * Controls whether power is provided to the ETM trace registers.
 */
union cavm_tsix_etmpdcr
{
    uint32_t u;
    struct cavm_tsix_etmpdcr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t pu                    : 1;  /**< [  3:  3](RO) Power up control. The possible values of this bit are:
                                                                 0 = Power is not provided to the ETM trace registers.
                                                                 1 = Power is provided to the ETM trace registers. */
        uint32_t reserved_0_2          : 3;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_2          : 3;
        uint32_t pu                    : 1;  /**< [  3:  3](RO) Power up control. The possible values of this bit are:
                                                                 0 = Power is not provided to the ETM trace registers.
                                                                 1 = Power is provided to the ETM trace registers. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmpdcr_s cn; */
};
typedef union cavm_tsix_etmpdcr cavm_tsix_etmpdcr_t;

static inline uint64_t CAVM_TSIX_ETMPDCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMPDCR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0310 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMPDCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMPDCR(a) cavm_tsix_etmpdcr_t
#define bustype_CAVM_TSIX_ETMPDCR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMPDCR(a) "TSIX_ETMPDCR"
#define device_bar_CAVM_TSIX_ETMPDCR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMPDCR(a) (a)
#define arguments_CAVM_TSIX_ETMPDCR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmpdsr
 *
 * Device Power-Down Status Register
 * Indicates the power-down status of the ETM.
 */
union cavm_tsix_etmpdsr
{
    uint32_t u;
    struct cavm_tsix_etmpdsr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t lk                    : 1;  /**< [  5:  5](RO) OS lock status. The value of this bit is the same as the value of bit [1] of the ETMOSLSR,
                                                                 which indicates whether the ETM trace registers are locked. */
        uint32_t reserved_2_4          : 3;
        uint32_t sticky_register_state : 1;  /**< [  1:  1](RO) Sticky Register state bit. The possible values of this bit are:
                                                                 0 = ETM Trace Registers have not been powered down since this register was last read.
                                                                 1 = ETM Trace Registers have been powered down since this register was last
                                                                 read, and have lost their state. */
        uint32_t etm_powered_up        : 1;  /**< [  0:  0](RO) ETM powered up bit. The value of this bit indicates whether you can access the ETM Trace
                                                                 Registers. The possible values are:
                                                                 0 = ETM Trace Registers cannot be accessed.
                                                                 1 = ETM Trace Registers can be accessed. */
#else /* Word 0 - Little Endian */
        uint32_t etm_powered_up        : 1;  /**< [  0:  0](RO) ETM powered up bit. The value of this bit indicates whether you can access the ETM Trace
                                                                 Registers. The possible values are:
                                                                 0 = ETM Trace Registers cannot be accessed.
                                                                 1 = ETM Trace Registers can be accessed. */
        uint32_t sticky_register_state : 1;  /**< [  1:  1](RO) Sticky Register state bit. The possible values of this bit are:
                                                                 0 = ETM Trace Registers have not been powered down since this register was last read.
                                                                 1 = ETM Trace Registers have been powered down since this register was last
                                                                 read, and have lost their state. */
        uint32_t reserved_2_4          : 3;
        uint32_t lk                    : 1;  /**< [  5:  5](RO) OS lock status. The value of this bit is the same as the value of bit [1] of the ETMOSLSR,
                                                                 which indicates whether the ETM trace registers are locked. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmpdsr_s cn; */
};
typedef union cavm_tsix_etmpdsr cavm_tsix_etmpdsr_t;

static inline uint64_t CAVM_TSIX_ETMPDSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMPDSR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0314 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMPDSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMPDSR(a) cavm_tsix_etmpdsr_t
#define bustype_CAVM_TSIX_ETMPDSR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMPDSR(a) "TSIX_ETMPDSR"
#define device_bar_CAVM_TSIX_ETMPDSR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMPDSR(a) (a)
#define arguments_CAVM_TSIX_ETMPDSR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmpidr0
 *
 * Peripheral Identification Register 0
 * The PIDR0 register is part of the set of peripheral identification registers.
 */
union cavm_tsix_etmpidr0
{
    uint32_t u;
    struct cavm_tsix_etmpidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
        uint32_t part_0                : 8;  /**< [  7:  0](RO/H) Part number, bits[7:0]. Taken together with PIDR1.PART_1 it indicates the
                                                                 component. The Part Number is selected by the designer of the component. */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](RO/H) Part number, bits[7:0]. Taken together with PIDR1.PART_1 it indicates the
                                                                 component. The Part Number is selected by the designer of the component. */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmpidr0_s cn; */
};
typedef union cavm_tsix_etmpidr0 cavm_tsix_etmpidr0_t;

static inline uint64_t CAVM_TSIX_ETMPIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMPIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0fe0 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMPIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMPIDR0(a) cavm_tsix_etmpidr0_t
#define bustype_CAVM_TSIX_ETMPIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMPIDR0(a) "TSIX_ETMPIDR0"
#define device_bar_CAVM_TSIX_ETMPIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMPIDR0(a) (a)
#define arguments_CAVM_TSIX_ETMPIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmpidr1
 *
 * Peripheral Identification Register 1
 * The PIDR1 register is part of the set of peripheral identification registers.
 */
union cavm_tsix_etmpidr1
{
    uint32_t u;
    struct cavm_tsix_etmpidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
        uint32_t des_0                 : 4;  /**< [  7:  4](RO/H) JEP106 identification code, bits[3:0]. Together, with PIDR4.DES_2 and
                                                                 PIDR2.DES_1, they indicate the designer of the component and not the
                                                                 implementer, except where the two are the same. */
        uint32_t part_1                : 4;  /**< [  3:  0](RO/H) Part number, bits[11:8]. Taken together with PIDR0.PART_0 it indicates the
                                                                 component. The Part Number is selected by the designer of the component. */
#else /* Word 0 - Little Endian */
        uint32_t part_1                : 4;  /**< [  3:  0](RO/H) Part number, bits[11:8]. Taken together with PIDR0.PART_0 it indicates the
                                                                 component. The Part Number is selected by the designer of the component. */
        uint32_t des_0                 : 4;  /**< [  7:  4](RO/H) JEP106 identification code, bits[3:0]. Together, with PIDR4.DES_2 and
                                                                 PIDR2.DES_1, they indicate the designer of the component and not the
                                                                 implementer, except where the two are the same. */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmpidr1_s cn; */
};
typedef union cavm_tsix_etmpidr1 cavm_tsix_etmpidr1_t;

static inline uint64_t CAVM_TSIX_ETMPIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMPIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0fe4 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMPIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMPIDR1(a) cavm_tsix_etmpidr1_t
#define bustype_CAVM_TSIX_ETMPIDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMPIDR1(a) "TSIX_ETMPIDR1"
#define device_bar_CAVM_TSIX_ETMPIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMPIDR1(a) (a)
#define arguments_CAVM_TSIX_ETMPIDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmpidr2
 *
 * Peripheral Identification Register 2
 * The PIDR2 register is part of the set of peripheral identification registers.
 */
union cavm_tsix_etmpidr2
{
    uint32_t u;
    struct cavm_tsix_etmpidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
        uint32_t revision              : 4;  /**< [  7:  4](RO/H) Revision. It is an incremental value starting at 0x0 for the first design of a
                                                                 component. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) 1 - Always set. Indicates that a JEDEC assigned value is used. */
        uint32_t des_1                 : 3;  /**< [  2:  0](RO/H) JEP106 identification code, bits[6:4]. Together, with PIDR4.DES_2 and
                                                                 PIDR1.DES_0, they indicate the designer of the component and not the
                                                                 implementer, except where the two are the same. */
#else /* Word 0 - Little Endian */
        uint32_t des_1                 : 3;  /**< [  2:  0](RO/H) JEP106 identification code, bits[6:4]. Together, with PIDR4.DES_2 and
                                                                 PIDR1.DES_0, they indicate the designer of the component and not the
                                                                 implementer, except where the two are the same. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) 1 - Always set. Indicates that a JEDEC assigned value is used. */
        uint32_t revision              : 4;  /**< [  7:  4](RO/H) Revision. It is an incremental value starting at 0x0 for the first design of a
                                                                 component. */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmpidr2_s cn; */
};
typedef union cavm_tsix_etmpidr2 cavm_tsix_etmpidr2_t;

static inline uint64_t CAVM_TSIX_ETMPIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMPIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0fe8 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMPIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMPIDR2(a) cavm_tsix_etmpidr2_t
#define bustype_CAVM_TSIX_ETMPIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMPIDR2(a) "TSIX_ETMPIDR2"
#define device_bar_CAVM_TSIX_ETMPIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMPIDR2(a) (a)
#define arguments_CAVM_TSIX_ETMPIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmpidr3
 *
 * Peripheral Identification Register 3
 * The PIDR3 register is part of the set of peripheral identification registers.
 */
union cavm_tsix_etmpidr3
{
    uint32_t u;
    struct cavm_tsix_etmpidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
        uint32_t revand                : 4;  /**< [  7:  4](RO/H) This field indicates minor errata fixes specific to this design, for example
                                                                 metal fixes after implementation. In most cases this field is 0x0. */
        uint32_t cmod                  : 4;  /**< [  3:  0](RO) Customer Modified. Where the component is reusable IP, this value indicates if
                                                                 the customer has modified the behavior of the component. In most cases this
                                                                 field is 0x0. */
#else /* Word 0 - Little Endian */
        uint32_t cmod                  : 4;  /**< [  3:  0](RO) Customer Modified. Where the component is reusable IP, this value indicates if
                                                                 the customer has modified the behavior of the component. In most cases this
                                                                 field is 0x0. */
        uint32_t revand                : 4;  /**< [  7:  4](RO/H) This field indicates minor errata fixes specific to this design, for example
                                                                 metal fixes after implementation. In most cases this field is 0x0. */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmpidr3_s cn; */
};
typedef union cavm_tsix_etmpidr3 cavm_tsix_etmpidr3_t;

static inline uint64_t CAVM_TSIX_ETMPIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMPIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0fec + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMPIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMPIDR3(a) cavm_tsix_etmpidr3_t
#define bustype_CAVM_TSIX_ETMPIDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMPIDR3(a) "TSIX_ETMPIDR3"
#define device_bar_CAVM_TSIX_ETMPIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMPIDR3(a) (a)
#define arguments_CAVM_TSIX_ETMPIDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmpidr4
 *
 * Peripheral Identification Register 4
 * This register holds peripheral identification information
 */
union cavm_tsix_etmpidr4
{
    uint32_t u;
    struct cavm_tsix_etmpidr4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
        uint32_t size                  : 4;  /**< [  7:  4](RO) Indicates the memory size that is used by this component. Returns 0 indicating
                                                                 that the component uses an UNKNOWN number of 4KB blocks. Using the SIZE field to
                                                                 indicate the size of the component is deprecated. */
        uint32_t des_2                 : 4;  /**< [  3:  0](RO/H) JEP106[10:7] continuation code. Together, with PIDR2.DES_1 and PIDR1.DES_0, they
                                                                 indicate the designer of the component and not the implementer, except where the
                                                                 two are the same. */
#else /* Word 0 - Little Endian */
        uint32_t des_2                 : 4;  /**< [  3:  0](RO/H) JEP106[10:7] continuation code. Together, with PIDR2.DES_1 and PIDR1.DES_0, they
                                                                 indicate the designer of the component and not the implementer, except where the
                                                                 two are the same. */
        uint32_t size                  : 4;  /**< [  7:  4](RO) Indicates the memory size that is used by this component. Returns 0 indicating
                                                                 that the component uses an UNKNOWN number of 4KB blocks. Using the SIZE field to
                                                                 indicate the size of the component is deprecated. */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmpidr4_s cn; */
};
typedef union cavm_tsix_etmpidr4 cavm_tsix_etmpidr4_t;

static inline uint64_t CAVM_TSIX_ETMPIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMPIDR4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0fd0 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMPIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMPIDR4(a) cavm_tsix_etmpidr4_t
#define bustype_CAVM_TSIX_ETMPIDR4(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMPIDR4(a) "TSIX_ETMPIDR4"
#define device_bar_CAVM_TSIX_ETMPIDR4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMPIDR4(a) (a)
#define arguments_CAVM_TSIX_ETMPIDR4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmpidr5
 *
 * Peripheral Identification Register 5
 * The PIDR5 register is part of the set of peripheral identification registers.
 */
union cavm_tsix_etmpidr5
{
    uint32_t u;
    struct cavm_tsix_etmpidr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmpidr5_s cn; */
};
typedef union cavm_tsix_etmpidr5 cavm_tsix_etmpidr5_t;

static inline uint64_t CAVM_TSIX_ETMPIDR5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMPIDR5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0fd4 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMPIDR5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMPIDR5(a) cavm_tsix_etmpidr5_t
#define bustype_CAVM_TSIX_ETMPIDR5(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMPIDR5(a) "TSIX_ETMPIDR5"
#define device_bar_CAVM_TSIX_ETMPIDR5(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMPIDR5(a) (a)
#define arguments_CAVM_TSIX_ETMPIDR5(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmpidr6
 *
 * Peripheral Identification Register 6
 * The PIDR6 register is part of the set of peripheral identification registers.
 */
union cavm_tsix_etmpidr6
{
    uint32_t u;
    struct cavm_tsix_etmpidr6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmpidr6_s cn; */
};
typedef union cavm_tsix_etmpidr6 cavm_tsix_etmpidr6_t;

static inline uint64_t CAVM_TSIX_ETMPIDR6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMPIDR6(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0fd8 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMPIDR6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMPIDR6(a) cavm_tsix_etmpidr6_t
#define bustype_CAVM_TSIX_ETMPIDR6(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMPIDR6(a) "TSIX_ETMPIDR6"
#define device_bar_CAVM_TSIX_ETMPIDR6(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMPIDR6(a) (a)
#define arguments_CAVM_TSIX_ETMPIDR6(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmpidr7
 *
 * Peripheral Identification Register 7
 * The PIDR7 register is part of the set of peripheral identification registers.
 */
union cavm_tsix_etmpidr7
{
    uint32_t u;
    struct cavm_tsix_etmpidr7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t res0_0                : 24; /**< [ 31:  8](RO) Reserved bit or field with Should-Be-Zero-or-Preserved (SBZP) behavior. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmpidr7_s cn; */
};
typedef union cavm_tsix_etmpidr7 cavm_tsix_etmpidr7_t;

static inline uint64_t CAVM_TSIX_ETMPIDR7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMPIDR7(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0fdc + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMPIDR7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMPIDR7(a) cavm_tsix_etmpidr7_t
#define bustype_CAVM_TSIX_ETMPIDR7(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMPIDR7(a) "TSIX_ETMPIDR7"
#define device_bar_CAVM_TSIX_ETMPIDR7(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMPIDR7(a) (a)
#define arguments_CAVM_TSIX_ETMPIDR7(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmscr
 *
 * System Configuration Register
 * Shows the ETM features supported by the ETM macrocell.
 */
union cavm_tsix_etmscr
{
    uint32_t u;
    struct cavm_tsix_etmscr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reg_value             : 32; /**< [ 31:  0](RO) NO functionality to support. */
#else /* Word 0 - Little Endian */
        uint32_t reg_value             : 32; /**< [ 31:  0](RO) NO functionality to support. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmscr_s cn; */
};
typedef union cavm_tsix_etmscr cavm_tsix_etmscr_t;

static inline uint64_t CAVM_TSIX_ETMSCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMSCR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0014 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMSCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMSCR(a) cavm_tsix_etmscr_t
#define bustype_CAVM_TSIX_ETMSCR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMSCR(a) "TSIX_ETMSCR"
#define device_bar_CAVM_TSIX_ETMSCR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMSCR(a) (a)
#define arguments_CAVM_TSIX_ETMSCR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmsr
 *
 * ETM Status Register
 * Provides information about the current status of the trace and trigger logic.
 */
union cavm_tsix_etmsr
{
    uint32_t u;
    struct cavm_tsix_etmsr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t progbit               : 1;  /**< [  1:  1](RO/H) The current effective value of the ETM programming bit,
                                                                 TSI()_ETMCR[ETM_PROGRAMMING]. */
        uint32_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0            : 1;
        uint32_t progbit               : 1;  /**< [  1:  1](RO/H) The current effective value of the ETM programming bit,
                                                                 TSI()_ETMCR[ETM_PROGRAMMING]. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmsr_s cn; */
};
typedef union cavm_tsix_etmsr cavm_tsix_etmsr_t;

static inline uint64_t CAVM_TSIX_ETMSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMSR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0010 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMSR(a) cavm_tsix_etmsr_t
#define bustype_CAVM_TSIX_ETMSR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMSR(a) "TSIX_ETMSR"
#define device_bar_CAVM_TSIX_ETMSR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMSR(a) (a)
#define arguments_CAVM_TSIX_ETMSR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmsyncfr
 *
 * Synchronization Frequency Register
 * Holds the trace synchronization frequency value.
 */
union cavm_tsix_etmsyncfr
{
    uint32_t u;
    struct cavm_tsix_etmsyncfr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_12_31        : 20;
        uint32_t sync_freq             : 12; /**< [ 11:  0](WO) Synchronization frequency. Default value is 1024.
                                                                 Note: Synchronization occurs every n cycles. */
#else /* Word 0 - Little Endian */
        uint32_t sync_freq             : 12; /**< [ 11:  0](WO) Synchronization frequency. Default value is 1024.
                                                                 Note: Synchronization occurs every n cycles. */
        uint32_t reserved_12_31        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmsyncfr_s cn; */
};
typedef union cavm_tsix_etmsyncfr cavm_tsix_etmsyncfr_t;

static inline uint64_t CAVM_TSIX_ETMSYNCFR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMSYNCFR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c01e0 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMSYNCFR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMSYNCFR(a) cavm_tsix_etmsyncfr_t
#define bustype_CAVM_TSIX_ETMSYNCFR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMSYNCFR(a) "TSIX_ETMSYNCFR"
#define device_bar_CAVM_TSIX_ETMSYNCFR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMSYNCFR(a) (a)
#define arguments_CAVM_TSIX_ETMSYNCFR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmtecr1
 *
 * TraceEnable Control 1 Register
 * General control
 */
union cavm_tsix_etmtecr1
{
    uint32_t u;
    struct cavm_tsix_etmtecr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmtecr1_s cn; */
};
typedef union cavm_tsix_etmtecr1 cavm_tsix_etmtecr1_t;

static inline uint64_t CAVM_TSIX_ETMTECR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMTECR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0024 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMTECR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMTECR1(a) cavm_tsix_etmtecr1_t
#define bustype_CAVM_TSIX_ETMTECR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMTECR1(a) "TSIX_ETMTECR1"
#define device_bar_CAVM_TSIX_ETMTECR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMTECR1(a) (a)
#define arguments_CAVM_TSIX_ETMTECR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmtecr2
 *
 * TraceEnable Control 2 Register
 * Specifies the single address comparators that hold the addresses used for include/exclude control.
 */
union cavm_tsix_etmtecr2
{
    uint32_t u;
    struct cavm_tsix_etmtecr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmtecr2_s cn; */
};
typedef union cavm_tsix_etmtecr2 cavm_tsix_etmtecr2_t;

static inline uint64_t CAVM_TSIX_ETMTECR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMTECR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c001c + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMTECR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMTECR2(a) cavm_tsix_etmtecr2_t
#define bustype_CAVM_TSIX_ETMTECR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMTECR2(a) "TSIX_ETMTECR2"
#define device_bar_CAVM_TSIX_ETMTECR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMTECR2(a) (a)
#define arguments_CAVM_TSIX_ETMTECR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmteevr
 *
 * TraceEnable Event Register
 * Defines the TraceEnable enabling event.
 */
union cavm_tsix_etmteevr
{
    uint32_t u;
    struct cavm_tsix_etmteevr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmteevr_s cn; */
};
typedef union cavm_tsix_etmteevr cavm_tsix_etmteevr_t;

static inline uint64_t CAVM_TSIX_ETMTEEVR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMTEEVR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0020 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMTEEVR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMTEEVR(a) cavm_tsix_etmteevr_t
#define bustype_CAVM_TSIX_ETMTEEVR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMTEEVR(a) "TSIX_ETMTEEVR"
#define device_bar_CAVM_TSIX_ETMTEEVR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMTEEVR(a) (a)
#define arguments_CAVM_TSIX_ETMTEEVR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmtesseicr
 *
 * TraceEnable Start/Stop EmbeddedICE Control Register
 * Specifies the EmbeddedICE watchpoint comparator inputs that are used as trace start
 * and stop resources.
 */
union cavm_tsix_etmtesseicr
{
    uint32_t u;
    struct cavm_tsix_etmtesseicr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmtesseicr_s cn; */
};
typedef union cavm_tsix_etmtesseicr cavm_tsix_etmtesseicr_t;

static inline uint64_t CAVM_TSIX_ETMTESSEICR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMTESSEICR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c01f0 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMTESSEICR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMTESSEICR(a) cavm_tsix_etmtesseicr_t
#define bustype_CAVM_TSIX_ETMTESSEICR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMTESSEICR(a) "TSIX_ETMTESSEICR"
#define device_bar_CAVM_TSIX_ETMTESSEICR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMTESSEICR(a) (a)
#define arguments_CAVM_TSIX_ETMTESSEICR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmtraceidr
 *
 * CoreSight Trace ID Register
 * Defines the 7-bit Trace ID, for output to the trace bus.
 */
union cavm_tsix_etmtraceidr
{
    uint32_t u;
    struct cavm_tsix_etmtraceidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_7_31         : 25;
        uint32_t trace_id              : 7;  /**< [  6:  0](R/W) Trace ID to output onto the trace bus.
                                                                 On an ETM reset this field is cleared to 0x00. */
#else /* Word 0 - Little Endian */
        uint32_t trace_id              : 7;  /**< [  6:  0](R/W) Trace ID to output onto the trace bus.
                                                                 On an ETM reset this field is cleared to 0x00. */
        uint32_t reserved_7_31         : 25;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmtraceidr_s cn; */
};
typedef union cavm_tsix_etmtraceidr cavm_tsix_etmtraceidr_t;

static inline uint64_t CAVM_TSIX_ETMTRACEIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMTRACEIDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0200 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMTRACEIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMTRACEIDR(a) cavm_tsix_etmtraceidr_t
#define bustype_CAVM_TSIX_ETMTRACEIDR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMTRACEIDR(a) "TSIX_ETMTRACEIDR"
#define device_bar_CAVM_TSIX_ETMTRACEIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMTRACEIDR(a) (a)
#define arguments_CAVM_TSIX_ETMTRACEIDR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmtrigger
 *
 * Trigger Event Register
 * Defines the event that controls the trigger.
 */
union cavm_tsix_etmtrigger
{
    uint32_t u;
    struct cavm_tsix_etmtrigger_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reg_value             : 32; /**< [ 31:  0](RO) No resources support, no functionality to support */
#else /* Word 0 - Little Endian */
        uint32_t reg_value             : 32; /**< [ 31:  0](RO) No resources support, no functionality to support */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmtrigger_s cn; */
};
typedef union cavm_tsix_etmtrigger cavm_tsix_etmtrigger_t;

static inline uint64_t CAVM_TSIX_ETMTRIGGER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMTRIGGER(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0008 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMTRIGGER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMTRIGGER(a) cavm_tsix_etmtrigger_t
#define bustype_CAVM_TSIX_ETMTRIGGER(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMTRIGGER(a) "TSIX_ETMTRIGGER"
#define device_bar_CAVM_TSIX_ETMTRIGGER(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMTRIGGER(a) (a)
#define arguments_CAVM_TSIX_ETMTRIGGER(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmtsevr
 *
 * Timestamp Event Register
 * Defines an event that requests the insertion of a timestamp into the trace stream.
 */
union cavm_tsix_etmtsevr
{
    uint32_t u;
    struct cavm_tsix_etmtsevr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmtsevr_s cn; */
};
typedef union cavm_tsix_etmtsevr cavm_tsix_etmtsevr_t;

static inline uint64_t CAVM_TSIX_ETMTSEVR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMTSEVR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c01f8 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMTSEVR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMTSEVR(a) cavm_tsix_etmtsevr_t
#define bustype_CAVM_TSIX_ETMTSEVR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMTSEVR(a) "TSIX_ETMTSEVR"
#define device_bar_CAVM_TSIX_ETMTSEVR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMTSEVR(a) (a)
#define arguments_CAVM_TSIX_ETMTSEVR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmtsscr
 *
 * TraceEnable Start/Stop Control Register
 * Specifies the single address comparators that hold the trace start and stop addresses.
 */
union cavm_tsix_etmtsscr
{
    uint32_t u;
    struct cavm_tsix_etmtsscr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmtsscr_s cn; */
};
typedef union cavm_tsix_etmtsscr cavm_tsix_etmtsscr_t;

static inline uint64_t CAVM_TSIX_ETMTSSCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMTSSCR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0018 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMTSSCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMTSSCR(a) cavm_tsix_etmtsscr_t
#define bustype_CAVM_TSIX_ETMTSSCR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMTSSCR(a) "TSIX_ETMTSSCR"
#define device_bar_CAVM_TSIX_ETMTSSCR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMTSSCR(a) (a)
#define arguments_CAVM_TSIX_ETMTSSCR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmvdcr1
 *
 * ViewData Control 1 Register
 * Specifies the single address comparators that provide include and exclude addresses
 * for ViewData operation.
 */
union cavm_tsix_etmvdcr1
{
    uint32_t u;
    struct cavm_tsix_etmvdcr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmvdcr1_s cn; */
};
typedef union cavm_tsix_etmvdcr1 cavm_tsix_etmvdcr1_t;

static inline uint64_t CAVM_TSIX_ETMVDCR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMVDCR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0034 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMVDCR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMVDCR1(a) cavm_tsix_etmvdcr1_t
#define bustype_CAVM_TSIX_ETMVDCR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMVDCR1(a) "TSIX_ETMVDCR1"
#define device_bar_CAVM_TSIX_ETMVDCR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMVDCR1(a) (a)
#define arguments_CAVM_TSIX_ETMVDCR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmvdcr2
 *
 * ViewData Control 2 Register
 * Specifies the Memory Map Decodes (MMDs) that provide include and exclude control of
 * ViewData operation.
 */
union cavm_tsix_etmvdcr2
{
    uint32_t u;
    struct cavm_tsix_etmvdcr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmvdcr2_s cn; */
};
typedef union cavm_tsix_etmvdcr2 cavm_tsix_etmvdcr2_t;

static inline uint64_t CAVM_TSIX_ETMVDCR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMVDCR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0038 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMVDCR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMVDCR2(a) cavm_tsix_etmvdcr2_t
#define bustype_CAVM_TSIX_ETMVDCR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMVDCR2(a) "TSIX_ETMVDCR2"
#define device_bar_CAVM_TSIX_ETMVDCR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMVDCR2(a) (a)
#define arguments_CAVM_TSIX_ETMVDCR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmvdcr3
 *
 * ViewData Control 3 Register
 * Specifies the address range comparators that hold include and exclude address ranges
 * for ViewData operation, and selects exclude-only operation if required.
 */
union cavm_tsix_etmvdcr3
{
    uint32_t u;
    struct cavm_tsix_etmvdcr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmvdcr3_s cn; */
};
typedef union cavm_tsix_etmvdcr3 cavm_tsix_etmvdcr3_t;

static inline uint64_t CAVM_TSIX_ETMVDCR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMVDCR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c003c + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMVDCR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMVDCR3(a) cavm_tsix_etmvdcr3_t
#define bustype_CAVM_TSIX_ETMVDCR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMVDCR3(a) "TSIX_ETMVDCR3"
#define device_bar_CAVM_TSIX_ETMVDCR3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMVDCR3(a) (a)
#define arguments_CAVM_TSIX_ETMVDCR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmvdevr
 *
 * ViewData Event Register
 * Defines the ViewData enabling event.
 */
union cavm_tsix_etmvdevr
{
    uint32_t u;
    struct cavm_tsix_etmvdevr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmvdevr_s cn; */
};
typedef union cavm_tsix_etmvdevr cavm_tsix_etmvdevr_t;

static inline uint64_t CAVM_TSIX_ETMVDEVR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMVDEVR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0030 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMVDEVR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMVDEVR(a) cavm_tsix_etmvdevr_t
#define bustype_CAVM_TSIX_ETMVDEVR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMVDEVR(a) "TSIX_ETMVDEVR"
#define device_bar_CAVM_TSIX_ETMVDEVR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMVDEVR(a) (a)
#define arguments_CAVM_TSIX_ETMVDEVR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_etmvmidcvr
 *
 * VMID Comparator Value Register
 * Holds a value that the current Virtual Machine ID (VMID) can be compared to.
 */
union cavm_tsix_etmvmidcvr
{
    uint32_t u;
    struct cavm_tsix_etmvmidcvr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_etmvmidcvr_s cn; */
};
typedef union cavm_tsix_etmvmidcvr cavm_tsix_etmvmidcvr_t;

static inline uint64_t CAVM_TSIX_ETMVMIDCVR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ETMVMIDCVR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0240 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ETMVMIDCVR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ETMVMIDCVR(a) cavm_tsix_etmvmidcvr_t
#define bustype_CAVM_TSIX_ETMVMIDCVR(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ETMVMIDCVR(a) "TSIX_ETMVMIDCVR"
#define device_bar_CAVM_TSIX_ETMVMIDCVR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ETMVMIDCVR(a) (a)
#define arguments_CAVM_TSIX_ETMVMIDCVR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_itcurrentts0
 *
 * TSI integration test current TS value Register
 * Must read ITCURRENTTS1 register first.
 * When ITCURRENTTS1 is read the value of TS[31:0] is locked
 * till reading this register.
 * The value of the LSB of the current TS
 */
union cavm_tsix_itcurrentts0
{
    uint32_t u;
    struct cavm_tsix_itcurrentts0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t it_current_ts_lsb     : 32; /**< [ 31:  0](RO/H) LSB of the current TS value (TS[31:0]). */
#else /* Word 0 - Little Endian */
        uint32_t it_current_ts_lsb     : 32; /**< [ 31:  0](RO/H) LSB of the current TS value (TS[31:0]). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_itcurrentts0_s cn; */
};
typedef union cavm_tsix_itcurrentts0 cavm_tsix_itcurrentts0_t;

static inline uint64_t CAVM_TSIX_ITCURRENTTS0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ITCURRENTTS0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0ee8 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ITCURRENTTS0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ITCURRENTTS0(a) cavm_tsix_itcurrentts0_t
#define bustype_CAVM_TSIX_ITCURRENTTS0(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ITCURRENTTS0(a) "TSIX_ITCURRENTTS0"
#define device_bar_CAVM_TSIX_ITCURRENTTS0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ITCURRENTTS0(a) (a)
#define arguments_CAVM_TSIX_ITCURRENTTS0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_itcurrentts1
 *
 * TSI integration test current TS value Register
 * Must read this register before reading ITCURRENTTS0.
 * When this register is read, the value of TS[31:0] is locked
 * till reading ITCURRENTTS0 register.
 * The value of the MSB of the current TS
 */
union cavm_tsix_itcurrentts1
{
    uint32_t u;
    struct cavm_tsix_itcurrentts1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t it_current_ts_msb     : 32; /**< [ 31:  0](RO/H) MSB of the current TS value (TS[63:32]). */
#else /* Word 0 - Little Endian */
        uint32_t it_current_ts_msb     : 32; /**< [ 31:  0](RO/H) MSB of the current TS value (TS[63:32]). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_itcurrentts1_s cn; */
};
typedef union cavm_tsix_itcurrentts1 cavm_tsix_itcurrentts1_t;

static inline uint64_t CAVM_TSIX_ITCURRENTTS1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ITCURRENTTS1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0eec + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ITCURRENTTS1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ITCURRENTTS1(a) cavm_tsix_itcurrentts1_t
#define bustype_CAVM_TSIX_ITCURRENTTS1(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ITCURRENTTS1(a) "TSIX_ITCURRENTTS1"
#define device_bar_CAVM_TSIX_ITCURRENTTS1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ITCURRENTTS1(a) (a)
#define arguments_CAVM_TSIX_ITCURRENTTS1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_ittsinjctrl0
 *
 * TSI integration test inject control Register
 * Enabling injection of time stamp PKT.
 */
union cavm_tsix_ittsinjctrl0
{
    uint32_t u;
    struct cavm_tsix_ittsinjctrl0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t it_curr_prog_ts       : 1;  /**< [  1:  1](R/W) 0 = TSI will inject the current TS value.
                                                                 1 = TSI will inject the programed TS value (IT_TS_LSB/MSB). */
        uint32_t it_ts_inject          : 1;  /**< [  0:  0](WO/H) When asserted, the block will inject TS PKT. */
#else /* Word 0 - Little Endian */
        uint32_t it_ts_inject          : 1;  /**< [  0:  0](WO/H) When asserted, the block will inject TS PKT. */
        uint32_t it_curr_prog_ts       : 1;  /**< [  1:  1](R/W) 0 = TSI will inject the current TS value.
                                                                 1 = TSI will inject the programed TS value (IT_TS_LSB/MSB). */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_ittsinjctrl0_s cn; */
};
typedef union cavm_tsix_ittsinjctrl0 cavm_tsix_ittsinjctrl0_t;

static inline uint64_t CAVM_TSIX_ITTSINJCTRL0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ITTSINJCTRL0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0ef0 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ITTSINJCTRL0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ITTSINJCTRL0(a) cavm_tsix_ittsinjctrl0_t
#define bustype_CAVM_TSIX_ITTSINJCTRL0(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ITTSINJCTRL0(a) "TSIX_ITTSINJCTRL0"
#define device_bar_CAVM_TSIX_ITTSINJCTRL0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ITTSINJCTRL0(a) (a)
#define arguments_CAVM_TSIX_ITTSINJCTRL0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_ittsinjdata0
 *
 * TSI integration test TS value Register
 * Configuring LSB of TS value.
 */
union cavm_tsix_ittsinjdata0
{
    uint32_t u;
    struct cavm_tsix_ittsinjdata0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t it_ts_lsb             : 32; /**< [ 31:  0](R/W) LSB of the desired TS value (TS[31:0]). */
#else /* Word 0 - Little Endian */
        uint32_t it_ts_lsb             : 32; /**< [ 31:  0](R/W) LSB of the desired TS value (TS[31:0]). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_ittsinjdata0_s cn; */
};
typedef union cavm_tsix_ittsinjdata0 cavm_tsix_ittsinjdata0_t;

static inline uint64_t CAVM_TSIX_ITTSINJDATA0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ITTSINJDATA0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0ef4 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ITTSINJDATA0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ITTSINJDATA0(a) cavm_tsix_ittsinjdata0_t
#define bustype_CAVM_TSIX_ITTSINJDATA0(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ITTSINJDATA0(a) "TSIX_ITTSINJDATA0"
#define device_bar_CAVM_TSIX_ITTSINJDATA0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ITTSINJDATA0(a) (a)
#define arguments_CAVM_TSIX_ITTSINJDATA0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_ittsinjdata1
 *
 * TSI integration test TS value Register
 * Configuring MSB of TS value.
 */
union cavm_tsix_ittsinjdata1
{
    uint32_t u;
    struct cavm_tsix_ittsinjdata1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t it_ts_msb             : 32; /**< [ 31:  0](R/W) MSB of the desired TS value (TS[63:32]). */
#else /* Word 0 - Little Endian */
        uint32_t it_ts_msb             : 32; /**< [ 31:  0](R/W) MSB of the desired TS value (TS[63:32]). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_ittsinjdata1_s cn; */
};
typedef union cavm_tsix_ittsinjdata1 cavm_tsix_ittsinjdata1_t;

static inline uint64_t CAVM_TSIX_ITTSINJDATA1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_ITTSINJDATA1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c0ef8 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_ITTSINJDATA1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_ITTSINJDATA1(a) cavm_tsix_ittsinjdata1_t
#define bustype_CAVM_TSIX_ITTSINJDATA1(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_ITTSINJDATA1(a) "TSIX_ITTSINJDATA1"
#define device_bar_CAVM_TSIX_ITTSINJDATA1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_ITTSINJDATA1(a) (a)
#define arguments_CAVM_TSIX_ITTSINJDATA1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_ts_ctrl
 *
 * Timestamp control Register
 * General configuration control of TS injector block.
 */
union cavm_tsix_ts_ctrl
{
    uint32_t u;
    struct cavm_tsix_ts_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ts_ovrd_nts_decoder   : 1;  /**< [ 31: 31](R/W) Upon TS_VALUE=0 due NTS Decoder re-sync event overriding it with TS_VALUE!=0.
                                                                 0 = Not overriding NTS Decoder.
                                                                 1 = Overriding NTS Decoder. */
        uint32_t reserved_11_30        : 20;
        uint32_t force_clocks_active   : 1;  /**< [ 10: 10](R/W) Force subblock coarse clock to always be on. For diagnostic use only. */
        uint32_t ts_width              : 1;  /**< [  9:  9](R/W) 0 = 64 bits.
                                                                 1 = 48 bits. */
        uint32_t opt_ts_pkt            : 1;  /**< [  8:  8](R/W) Optimize TS PKTs:
                                                                 0 = send full TS PKTs.
                                                                 1 = TS PKTs are optimized. */
        uint32_t reserved_2_7          : 6;
        uint32_t ext_trig_en           : 1;  /**< [  1:  1](R/W) External trigger enable:
                                                                 0 = external trigger from ETM is masked.
                                                                 1 = external trigger from ETM causes generation of timestamp packet. */
        uint32_t cnt_en                : 1;  /**< [  0:  0](R/W) Event count enable:
                                                                 0 = event count is disabled.
                                                                 1 = event count is enabled. */
#else /* Word 0 - Little Endian */
        uint32_t cnt_en                : 1;  /**< [  0:  0](R/W) Event count enable:
                                                                 0 = event count is disabled.
                                                                 1 = event count is enabled. */
        uint32_t ext_trig_en           : 1;  /**< [  1:  1](R/W) External trigger enable:
                                                                 0 = external trigger from ETM is masked.
                                                                 1 = external trigger from ETM causes generation of timestamp packet. */
        uint32_t reserved_2_7          : 6;
        uint32_t opt_ts_pkt            : 1;  /**< [  8:  8](R/W) Optimize TS PKTs:
                                                                 0 = send full TS PKTs.
                                                                 1 = TS PKTs are optimized. */
        uint32_t ts_width              : 1;  /**< [  9:  9](R/W) 0 = 64 bits.
                                                                 1 = 48 bits. */
        uint32_t force_clocks_active   : 1;  /**< [ 10: 10](R/W) Force subblock coarse clock to always be on. For diagnostic use only. */
        uint32_t reserved_11_30        : 20;
        uint32_t ts_ovrd_nts_decoder   : 1;  /**< [ 31: 31](R/W) Upon TS_VALUE=0 due NTS Decoder re-sync event overriding it with TS_VALUE!=0.
                                                                 0 = Not overriding NTS Decoder.
                                                                 1 = Overriding NTS Decoder. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_ts_ctrl_s cn; */
};
typedef union cavm_tsix_ts_ctrl cavm_tsix_ts_ctrl_t;

static inline uint64_t CAVM_TSIX_TS_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_TS_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c00b0 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_TS_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_TS_CTRL(a) cavm_tsix_ts_ctrl_t
#define bustype_CAVM_TSIX_TS_CTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_TS_CTRL(a) "TSIX_TS_CTRL"
#define device_bar_CAVM_TSIX_TS_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_TS_CTRL(a) (a)
#define arguments_CAVM_TSIX_TS_CTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) tsi#_ts_event_ctrl
 *
 * TSI event control Register
 * Controlling the events that trigger TS PKT injection.
 */
union cavm_tsix_ts_event_ctrl
{
    uint32_t u;
    struct cavm_tsix_ts_event_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t event_cnt             : 24; /**< [ 31:  8](R/W) Number of events to count before trigger sending TS PKT. */
        uint32_t reserved_4_7          : 4;
        uint32_t flush                 : 1;  /**< [  3:  3](R/W) Event type is CoreSight flush event. */
        uint32_t clk_cycles            : 1;  /**< [  2:  2](R/W) Event type is clock cycles. */
        uint32_t cti                   : 1;  /**< [  1:  1](R/W) Event type is a CTI event routed to TSI block. */
        uint32_t data_transfer         : 1;  /**< [  0:  0](R/W) Event type is valid trace data transfer */
#else /* Word 0 - Little Endian */
        uint32_t data_transfer         : 1;  /**< [  0:  0](R/W) Event type is valid trace data transfer */
        uint32_t cti                   : 1;  /**< [  1:  1](R/W) Event type is a CTI event routed to TSI block. */
        uint32_t clk_cycles            : 1;  /**< [  2:  2](R/W) Event type is clock cycles. */
        uint32_t flush                 : 1;  /**< [  3:  3](R/W) Event type is CoreSight flush event. */
        uint32_t reserved_4_7          : 4;
        uint32_t event_cnt             : 24; /**< [ 31:  8](R/W) Number of events to count before trigger sending TS PKT. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_tsix_ts_event_ctrl_s cn; */
};
typedef union cavm_tsix_ts_event_ctrl cavm_tsix_ts_event_ctrl_t;

static inline uint64_t CAVM_TSIX_TS_EVENT_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_TSIX_TS_EVENT_CTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=31))
        return 0x80e0410c00b4 + (((a&0x1c)>>2)*0x800000+(a&0x3)*0x80000);
    __cavm_csr_fatal("TSIX_TS_EVENT_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_TSIX_TS_EVENT_CTRL(a) cavm_tsix_ts_event_ctrl_t
#define bustype_CAVM_TSIX_TS_EVENT_CTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_TSIX_TS_EVENT_CTRL(a) "TSIX_TS_EVENT_CTRL"
#define device_bar_CAVM_TSIX_TS_EVENT_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_TSIX_TS_EVENT_CTRL(a) (a)
#define arguments_CAVM_TSIX_TS_EVENT_CTRL(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_TSI_H__ */
