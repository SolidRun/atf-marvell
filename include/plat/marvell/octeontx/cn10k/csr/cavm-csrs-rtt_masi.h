#ifndef __CAVM_CSRS_RTT_MASI_H__
#define __CAVM_CSRS_RTT_MASI_H__
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
 * OcteonTX RTT_MASI.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (NCB32b) rtt_mg_masi_cti#_asicctrl
 *
 * RTT Mg Masi Cti Asicctrl Register
 * I/O port control.
 */
union cavm_rtt_mg_masi_ctix_asicctrl
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_asicctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 24; /**< [ 31:  8](R/W) Software should write the field as all 0s. */
        uint32_t asicctrl              : 8;  /**< [  7:  0](R/W) Set and clear external output signal. */
#else /* Word 0 - Little Endian */
        uint32_t asicctrl              : 8;  /**< [  7:  0](R/W) Set and clear external output signal. */
        uint32_t sbz_0                 : 24; /**< [ 31:  8](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_asicctrl_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_asicctrl cavm_rtt_mg_masi_ctix_asicctrl_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_ASICCTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_ASICCTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890144 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_ASICCTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_ASICCTRL(a) cavm_rtt_mg_masi_ctix_asicctrl_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_ASICCTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_ASICCTRL(a) "RTT_MG_MASI_CTIX_ASICCTRL"
#define busnum_CAVM_RTT_MG_MASI_CTIX_ASICCTRL(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_ASICCTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_authstatus
 *
 * RTT Mg Masi Cti Authstatus Register
 * Reports the current status of the authentication control signals.
 */
union cavm_rtt_mg_masi_ctix_authstatus
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_authstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_12_31        : 20;
        uint32_t hnid                  : 2;  /**< [ 11: 10](RO) Hypervisor non-invasive debug. */
        uint32_t hid                   : 2;  /**< [  9:  8](RO) Hypervisor invasive debug. */
        uint32_t snid                  : 2;  /**< [  7:  6](RO) Secure non-invasive debug. */
        uint32_t sid                   : 2;  /**< [  5:  4](RO) Secure invasive debug. */
        uint32_t nsnid                 : 2;  /**< [  3:  2](RO/H) Non-secure non-invasive debug. */
        uint32_t nsid                  : 2;  /**< [  1:  0](RO/H) Non-secure invasive debug. */
#else /* Word 0 - Little Endian */
        uint32_t nsid                  : 2;  /**< [  1:  0](RO/H) Non-secure invasive debug. */
        uint32_t nsnid                 : 2;  /**< [  3:  2](RO/H) Non-secure non-invasive debug. */
        uint32_t sid                   : 2;  /**< [  5:  4](RO) Secure invasive debug. */
        uint32_t snid                  : 2;  /**< [  7:  6](RO) Secure non-invasive debug. */
        uint32_t hid                   : 2;  /**< [  9:  8](RO) Hypervisor invasive debug. */
        uint32_t hnid                  : 2;  /**< [ 11: 10](RO) Hypervisor non-invasive debug. */
        uint32_t reserved_12_31        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_authstatus_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_authstatus cavm_rtt_mg_masi_ctix_authstatus_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_AUTHSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_AUTHSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890fb8 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_AUTHSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_AUTHSTATUS(a) cavm_rtt_mg_masi_ctix_authstatus_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_AUTHSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_AUTHSTATUS(a) "RTT_MG_MASI_CTIX_AUTHSTATUS"
#define busnum_CAVM_RTT_MG_MASI_CTIX_AUTHSTATUS(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_AUTHSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_cidr0
 *
 * RTT Mg Masi Cti Cidr0 Register
 * The CIDR0 register is part of the set of component identification registers.
 */
union cavm_rtt_mg_masi_ctix_cidr0
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_cidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_cidr0_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_cidr0 cavm_rtt_mg_masi_ctix_cidr0_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890ff0 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_CIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_CIDR0(a) cavm_rtt_mg_masi_ctix_cidr0_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_CIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_CIDR0(a) "RTT_MG_MASI_CTIX_CIDR0"
#define busnum_CAVM_RTT_MG_MASI_CTIX_CIDR0(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_CIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_cidr1
 *
 * RTT Mg Masi Cti Cidr1 Register
 * The CIDR1 register is part of the set of component identification registers.
 */
union cavm_rtt_mg_masi_ctix_cidr1
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_cidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t class_f               : 4;  /**< [  7:  4](RO) Component class. Returns 0x9, indicating this is a CoreSight component. */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](RO) Preamble. Returns 0x0. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](RO) Preamble. Returns 0x0. */
        uint32_t class_f               : 4;  /**< [  7:  4](RO) Component class. Returns 0x9, indicating this is a CoreSight component. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_cidr1_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_cidr1 cavm_rtt_mg_masi_ctix_cidr1_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890ff4 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_CIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_CIDR1(a) cavm_rtt_mg_masi_ctix_cidr1_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_CIDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_CIDR1(a) "RTT_MG_MASI_CTIX_CIDR1"
#define busnum_CAVM_RTT_MG_MASI_CTIX_CIDR1(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_CIDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_cidr2
 *
 * RTT Mg Masi Cti Cidr2 Register
 * The CIDR2 register is part of the set of component identification registers.
 */
union cavm_rtt_mg_masi_ctix_cidr2
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_cidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_cidr2_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_cidr2 cavm_rtt_mg_masi_ctix_cidr2_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890ff8 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_CIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_CIDR2(a) cavm_rtt_mg_masi_ctix_cidr2_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_CIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_CIDR2(a) "RTT_MG_MASI_CTIX_CIDR2"
#define busnum_CAVM_RTT_MG_MASI_CTIX_CIDR2(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_CIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_cidr3
 *
 * RTT Mg Masi Cti Cidr3 Register
 * The CIDR3 register is part of the set of component identification registers.
 */
union cavm_rtt_mg_masi_ctix_cidr3
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_cidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_cidr3_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_cidr3 cavm_rtt_mg_masi_ctix_cidr3_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890ffc + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_CIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_CIDR3(a) cavm_rtt_mg_masi_ctix_cidr3_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_CIDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_CIDR3(a) "RTT_MG_MASI_CTIX_CIDR3"
#define busnum_CAVM_RTT_MG_MASI_CTIX_CIDR3(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_CIDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_claimclr
 *
 * RTT Mg Masi Cti Claimclr Register
 * This register forms one half of the claim tag value. On writes, this location
 * enables individual bits to be cleared. On reads, it returns the current claim tag
 * value.
 */
union cavm_rtt_mg_masi_ctix_claimclr
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_claimclr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 28; /**< [ 31:  4](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t clr                   : 4;  /**< [  3:  0](R/W) A bit-programmable register bank that clears the claim tag value. It is zero at
                                                                 reset. It is used by software agents to signal to each other ownership of the
                                                                 hardware. It has no direct effect on the hardware itself. */
#else /* Word 0 - Little Endian */
        uint32_t clr                   : 4;  /**< [  3:  0](R/W) A bit-programmable register bank that clears the claim tag value. It is zero at
                                                                 reset. It is used by software agents to signal to each other ownership of the
                                                                 hardware. It has no direct effect on the hardware itself. */
        uint32_t razwi_0               : 28; /**< [ 31:  4](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_claimclr_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_claimclr cavm_rtt_mg_masi_ctix_claimclr_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CLAIMCLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CLAIMCLR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890fa4 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_CLAIMCLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_CLAIMCLR(a) cavm_rtt_mg_masi_ctix_claimclr_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_CLAIMCLR(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_CLAIMCLR(a) "RTT_MG_MASI_CTIX_CLAIMCLR"
#define busnum_CAVM_RTT_MG_MASI_CTIX_CLAIMCLR(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_CLAIMCLR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_claimset
 *
 * RTT Mg Masi Cti Claimset Register
 * This register forms one half of the claim tag value. On writes, this location
 * enables individual bits to be set. On reads, it returns the number of bits that can
 * be set.
 */
union cavm_rtt_mg_masi_ctix_claimset
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_claimset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 28; /**< [ 31:  4](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t set                   : 4;  /**< [  3:  0](R/W) A bit-programmable register bank that sets the claim tag value. A read returns a
                                                                 logic 1 for all implemented locations. */
#else /* Word 0 - Little Endian */
        uint32_t set                   : 4;  /**< [  3:  0](R/W) A bit-programmable register bank that sets the claim tag value. A read returns a
                                                                 logic 1 for all implemented locations. */
        uint32_t razwi_0               : 28; /**< [ 31:  4](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_claimset_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_claimset cavm_rtt_mg_masi_ctix_claimset_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CLAIMSET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CLAIMSET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890fa0 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_CLAIMSET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_CLAIMSET(a) cavm_rtt_mg_masi_ctix_claimset_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_CLAIMSET(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_CLAIMSET(a) "RTT_MG_MASI_CTIX_CLAIMSET"
#define busnum_CAVM_RTT_MG_MASI_CTIX_CLAIMSET(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_CLAIMSET(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_ctiappclear
 *
 * RTT Mg Masi Cti Ctiappclear Register
 * The application channel clear register allows software to clear any channel output.
 * This register can be used by software to clear a channel event in place of a
 * hardware source on a trigger input. In a system where all events are sent as single
 * cycle pulses, this register must not be used. It is only retained for compatibility
 * with older systems and software. The register is implemented before the CTIGATE
 * register so, for the channel event to propagate outside the CTI, it is necessary for
 * the corresponding CTIGATE bit to be 1.
 */
union cavm_rtt_mg_masi_ctix_ctiappclear
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_ctiappclear_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](WO) Software should write the field as all 0s. */
        uint32_t appclear              : 4;  /**< [  3:  0](WO) Clears the corresponding internal channel flag. */
#else /* Word 0 - Little Endian */
        uint32_t appclear              : 4;  /**< [  3:  0](WO) Clears the corresponding internal channel flag. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](WO) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_ctiappclear_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_ctiappclear cavm_rtt_mg_masi_ctix_ctiappclear_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTIAPPCLEAR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTIAPPCLEAR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890018 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_CTIAPPCLEAR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_CTIAPPCLEAR(a) cavm_rtt_mg_masi_ctix_ctiappclear_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_CTIAPPCLEAR(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_CTIAPPCLEAR(a) "RTT_MG_MASI_CTIX_CTIAPPCLEAR"
#define busnum_CAVM_RTT_MG_MASI_CTIX_CTIAPPCLEAR(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_CTIAPPCLEAR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_ctiapppulse
 *
 * RTT Mg Masi Cti Ctiapppulse Register
 * The application channel pulse register allows software to pulse any channel output.
 * This register can be used by software to pulse a channel event in place of a
 * hardware source on a trigger input. The register is implemented before the CTIGATE
 * register so, for the channel event to propagate outside the CTI, it is necessary for
 * the corresponding CTIGATE bit to be 1.
 */
union cavm_rtt_mg_masi_ctix_ctiapppulse
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_ctiapppulse_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](WO) Software should write the field as all 0s. */
        uint32_t apppulse              : 4;  /**< [  3:  0](WO) Pulses the channel outputs. */
#else /* Word 0 - Little Endian */
        uint32_t apppulse              : 4;  /**< [  3:  0](WO) Pulses the channel outputs. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](WO) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_ctiapppulse_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_ctiapppulse cavm_rtt_mg_masi_ctix_ctiapppulse_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTIAPPPULSE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTIAPPPULSE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e08089001c + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_CTIAPPPULSE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_CTIAPPPULSE(a) cavm_rtt_mg_masi_ctix_ctiapppulse_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_CTIAPPPULSE(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_CTIAPPPULSE(a) "RTT_MG_MASI_CTIX_CTIAPPPULSE"
#define busnum_CAVM_RTT_MG_MASI_CTIX_CTIAPPPULSE(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_CTIAPPPULSE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_ctiappset
 *
 * RTT Mg Masi Cti Ctiappset Register
 * The application channel set register allows software to set any channel output. This
 * register can be used by software to generate a channel event in place of a hardware
 * source on a trigger input. In a system where all events are sent as single cycle
 * pulses, this register must not be used. It is only retained for compatibility with
 * older systems and software. The register is implemented before the CTIGATE register
 * so, for the channel event to propagate outside the CTI, it is necessary for the
 * corresponding CTIGATE bit to be 1.
 */
union cavm_rtt_mg_masi_ctix_ctiappset
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_ctiappset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t appset                : 4;  /**< [  3:  0](R/W) Sets the corresponding internal channel flag. */
#else /* Word 0 - Little Endian */
        uint32_t appset                : 4;  /**< [  3:  0](R/W) Sets the corresponding internal channel flag. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_ctiappset_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_ctiappset cavm_rtt_mg_masi_ctix_ctiappset_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTIAPPSET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTIAPPSET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890014 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_CTIAPPSET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_CTIAPPSET(a) cavm_rtt_mg_masi_ctix_ctiappset_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_CTIAPPSET(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_CTIAPPSET(a) "RTT_MG_MASI_CTIX_CTIAPPSET"
#define busnum_CAVM_RTT_MG_MASI_CTIX_CTIAPPSET(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_CTIAPPSET(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_ctichinstatus
 *
 * RTT Mg Masi Cti Ctichinstatus Register
 * Channel input status. If the channel input is driven by a source that generates
 * single cycle pulses, this register is generally read as 0.
 */
union cavm_rtt_mg_masi_ctix_ctichinstatus
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_ctichinstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](RO) Software should write the field as all 0s. */
        uint32_t ctichinstatus         : 4;  /**< [  3:  0](RO) Channel input status. */
#else /* Word 0 - Little Endian */
        uint32_t ctichinstatus         : 4;  /**< [  3:  0](RO) Channel input status. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](RO) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_ctichinstatus_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_ctichinstatus cavm_rtt_mg_masi_ctix_ctichinstatus_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTICHINSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTICHINSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890138 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_CTICHINSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_CTICHINSTATUS(a) cavm_rtt_mg_masi_ctix_ctichinstatus_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_CTICHINSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_CTICHINSTATUS(a) "RTT_MG_MASI_CTIX_CTICHINSTATUS"
#define busnum_CAVM_RTT_MG_MASI_CTIX_CTICHINSTATUS(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_CTICHINSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_ctichoutstatus
 *
 * RTT Mg Masi Cti Ctichoutstatus Register
 * Channel output status. The register only has meaning if the trigger source drives
 * static levels, rather than pulses.
 */
union cavm_rtt_mg_masi_ctix_ctichoutstatus
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_ctichoutstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](RO) Software should write the field as all 0s. */
        uint32_t ctichoutstatus        : 4;  /**< [  3:  0](RO) Channel output status. */
#else /* Word 0 - Little Endian */
        uint32_t ctichoutstatus        : 4;  /**< [  3:  0](RO) Channel output status. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](RO) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_ctichoutstatus_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_ctichoutstatus cavm_rtt_mg_masi_ctix_ctichoutstatus_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTICHOUTSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTICHOUTSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e08089013c + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_CTICHOUTSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_CTICHOUTSTATUS(a) cavm_rtt_mg_masi_ctix_ctichoutstatus_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_CTICHOUTSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_CTICHOUTSTATUS(a) "RTT_MG_MASI_CTIX_CTICHOUTSTATUS"
#define busnum_CAVM_RTT_MG_MASI_CTIX_CTICHOUTSTATUS(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_CTICHOUTSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_cticontrol
 *
 * RTT Mg Masi Cti Cticontrol Register
 * The CTI control register enables and disables the CTI.
 */
union cavm_rtt_mg_masi_ctix_cticontrol
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_cticontrol_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 31; /**< [ 31:  1](R/W) Software should write the field as all 0s. */
        uint32_t ctien                 : 1;  /**< [  0:  0](R/W) Enable control. */
#else /* Word 0 - Little Endian */
        uint32_t ctien                 : 1;  /**< [  0:  0](R/W) Enable control. */
        uint32_t sbz_0                 : 31; /**< [ 31:  1](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_cticontrol_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_cticontrol cavm_rtt_mg_masi_ctix_cticontrol_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTICONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTICONTROL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890000 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_CTICONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_CTICONTROL(a) cavm_rtt_mg_masi_ctix_cticontrol_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_CTICONTROL(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_CTICONTROL(a) "RTT_MG_MASI_CTIX_CTICONTROL"
#define busnum_CAVM_RTT_MG_MASI_CTIX_CTICONTROL(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_CTICONTROL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_ctigate
 *
 * RTT Mg Masi Cti Ctigate Register
 * Channel output gate.
 */
union cavm_rtt_mg_masi_ctix_ctigate
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_ctigate_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t ctigateen             : 4;  /**< [  3:  0](R/W) Enables the propagation of channel events out of the CTI, one bit per channel. */
#else /* Word 0 - Little Endian */
        uint32_t ctigateen             : 4;  /**< [  3:  0](R/W) Enables the propagation of channel events out of the CTI, one bit per channel. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_ctigate_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_ctigate cavm_rtt_mg_masi_ctix_ctigate_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTIGATE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTIGATE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890140 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_CTIGATE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_CTIGATE(a) cavm_rtt_mg_masi_ctix_ctigate_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_CTIGATE(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_CTIGATE(a) "RTT_MG_MASI_CTIX_CTIGATE"
#define busnum_CAVM_RTT_MG_MASI_CTIX_CTIGATE(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_CTIGATE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_ctiinen#
 *
 * RTT Mg Masi Cti Ctiinen Register
 * This register maps trigger inputs to channels in the cross trigger system. The
 * CTIINEN registers are bit maps that allow the trigger input to be mapped to any
 * channel output, including none (0x0) and all (0xF). There is one register per
 * trigger input, so it is possible to map any combination of trigger inputs to any
 * channel outputs.
 */
union cavm_rtt_mg_masi_ctix_ctiinenx
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_ctiinenx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
#else /* Word 0 - Little Endian */
        uint32_t triginen              : 4;  /**< [  3:  0](R/W) Trigger input to channel mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_ctiinenx_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_ctiinenx cavm_rtt_mg_masi_ctix_ctiinenx_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTIINENX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTIINENX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=15) && (b<=31)))
        return 0x80e080890020 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000) + b*0x4;
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_CTIINENX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_CTIINENX(a,b) cavm_rtt_mg_masi_ctix_ctiinenx_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_CTIINENX(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_CTIINENX(a,b) "RTT_MG_MASI_CTIX_CTIINENX"
#define busnum_CAVM_RTT_MG_MASI_CTIX_CTIINENX(a,b) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_CTIINENX(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_ctiintack
 *
 * RTT Mg Masi Cti Ctiintack Register
 * Software acknowledge for trigger outputs. The CTIINTACK register is a bit map that
 * allows selective clearing of trigger output events. If the SW_HANDSHAKE parameter
 * for a trigger output is set, indicating that the output latches HIGH when an event
 * is sent to that output, then the output remains HIGH until the corresponding INTACK
 * bit is written to a 1. A write of a bit to 0 has no effect. This allows different
 * software threads to be responsible for clearing different trigger outputs without
 * needing to perform a read-modify-write operation to find which bits are set.
 */
union cavm_rtt_mg_masi_ctix_ctiintack
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_ctiintack_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t intack                : 32; /**< [ 31:  0](WO) Acknowledges the corresponding event_out output. */
#else /* Word 0 - Little Endian */
        uint32_t intack                : 32; /**< [ 31:  0](WO) Acknowledges the corresponding event_out output. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_ctiintack_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_ctiintack cavm_rtt_mg_masi_ctix_ctiintack_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTIINTACK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTIINTACK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890010 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_CTIINTACK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_CTIINTACK(a) cavm_rtt_mg_masi_ctix_ctiintack_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_CTIINTACK(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_CTIINTACK(a) "RTT_MG_MASI_CTIX_CTIINTACK"
#define busnum_CAVM_RTT_MG_MASI_CTIX_CTIINTACK(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_CTIINTACK(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_ctiouten#
 *
 * RTT Mg Masi Cti Ctiouten Register
 * This register maps channels in the cross trigger system to trigger outputs. The
 * CTIOUTEN registers are bit maps that allow any channel input to be mapped to the
 * trigger output, including none (0x0) and all (0xF). There is one register per
 * trigger output so it is possible to map any channel input to any combination of
 * trigger outputs.
 */
union cavm_rtt_mg_masi_ctix_ctioutenx
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_ctioutenx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
#else /* Word 0 - Little Endian */
        uint32_t trigouten             : 4;  /**< [  3:  0](R/W) Channel to trigger output mapping. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_ctioutenx_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_ctioutenx cavm_rtt_mg_masi_ctix_ctioutenx_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTIOUTENX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTIOUTENX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=15) && (b<=31)))
        return 0x80e0808900a0 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000) + b*0x4;
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_CTIOUTENX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_CTIOUTENX(a,b) cavm_rtt_mg_masi_ctix_ctioutenx_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_CTIOUTENX(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_CTIOUTENX(a,b) "RTT_MG_MASI_CTIX_CTIOUTENX"
#define busnum_CAVM_RTT_MG_MASI_CTIX_CTIOUTENX(a,b) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_CTIOUTENX(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_ctitriginstatus
 *
 * RTT Mg Masi Cti Ctitriginstatus Register
 * Trigger input status. If the event_in input is driven by a source that generates
 * single cycle pulses, this register is generally read as 0.
 */
union cavm_rtt_mg_masi_ctix_ctitriginstatus
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_ctitriginstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t triginstatus          : 32; /**< [ 31:  0](RO) Trigger input status. */
#else /* Word 0 - Little Endian */
        uint32_t triginstatus          : 32; /**< [ 31:  0](RO) Trigger input status. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_ctitriginstatus_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_ctitriginstatus cavm_rtt_mg_masi_ctix_ctitriginstatus_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTITRIGINSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTITRIGINSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890130 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_CTITRIGINSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_CTITRIGINSTATUS(a) cavm_rtt_mg_masi_ctix_ctitriginstatus_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_CTITRIGINSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_CTITRIGINSTATUS(a) "RTT_MG_MASI_CTIX_CTITRIGINSTATUS"
#define busnum_CAVM_RTT_MG_MASI_CTIX_CTITRIGINSTATUS(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_CTITRIGINSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_ctitrigoutstatus
 *
 * RTT Mg Masi Cti Ctitrigoutstatus Register
 * Trigger output status. The register only has meaning if the trigger source drives
 * static levels, rather than pulses.
 */
union cavm_rtt_mg_masi_ctix_ctitrigoutstatus
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_ctitrigoutstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t trigoutstatus         : 32; /**< [ 31:  0](RO) Trigger output status. */
#else /* Word 0 - Little Endian */
        uint32_t trigoutstatus         : 32; /**< [ 31:  0](RO) Trigger output status. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_ctitrigoutstatus_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_ctitrigoutstatus cavm_rtt_mg_masi_ctix_ctitrigoutstatus_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTITRIGOUTSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_CTITRIGOUTSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890134 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_CTITRIGOUTSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_CTITRIGOUTSTATUS(a) cavm_rtt_mg_masi_ctix_ctitrigoutstatus_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_CTITRIGOUTSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_CTITRIGOUTSTATUS(a) "RTT_MG_MASI_CTIX_CTITRIGOUTSTATUS"
#define busnum_CAVM_RTT_MG_MASI_CTIX_CTITRIGOUTSTATUS(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_CTITRIGOUTSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_devaff0
 *
 * RTT Mg Masi Cti Devaff0 Register
 * Enables a debugger to determine if two components have an affinity with each other.
 */
union cavm_rtt_mg_masi_ctix_devaff0
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_devaff0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t devaff0               : 32; /**< [ 31:  0](RO) Lower 32-bits of DEVAFF. The value is set by the devaff[31:0] tie-off inputs. */
#else /* Word 0 - Little Endian */
        uint32_t devaff0               : 32; /**< [ 31:  0](RO) Lower 32-bits of DEVAFF. The value is set by the devaff[31:0] tie-off inputs. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_devaff0_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_devaff0 cavm_rtt_mg_masi_ctix_devaff0_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_DEVAFF0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_DEVAFF0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890fa8 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_DEVAFF0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_DEVAFF0(a) cavm_rtt_mg_masi_ctix_devaff0_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_DEVAFF0(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_DEVAFF0(a) "RTT_MG_MASI_CTIX_DEVAFF0"
#define busnum_CAVM_RTT_MG_MASI_CTIX_DEVAFF0(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_DEVAFF0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_devaff1
 *
 * RTT Mg Masi Cti Devaff1 Register
 * Enables a debugger to determine if two components have an affinity with each other.
 */
union cavm_rtt_mg_masi_ctix_devaff1
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_devaff1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t devaff1               : 32; /**< [ 31:  0](RO) Upper 32-bits of DEVAFF. The value is set by the devaff[63:32] tie-off inputs. */
#else /* Word 0 - Little Endian */
        uint32_t devaff1               : 32; /**< [ 31:  0](RO) Upper 32-bits of DEVAFF. The value is set by the devaff[63:32] tie-off inputs. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_devaff1_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_devaff1 cavm_rtt_mg_masi_ctix_devaff1_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_DEVAFF1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_DEVAFF1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890fac + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_DEVAFF1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_DEVAFF1(a) cavm_rtt_mg_masi_ctix_devaff1_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_DEVAFF1(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_DEVAFF1(a) "RTT_MG_MASI_CTIX_DEVAFF1"
#define busnum_CAVM_RTT_MG_MASI_CTIX_DEVAFF1(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_DEVAFF1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_devarch
 *
 * RTT Mg Masi Cti Devarch Register
 * Identifies the architect and architecture of a CoreSight component. The architect
 * might differ from the designer of a component, for example Arm defines the
 * architecture but another company designs and implements the component.
 */
union cavm_rtt_mg_masi_ctix_devarch
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_devarch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t architect             : 11; /**< [ 31: 21](RO) Returns 0x23b, denoting Arm as architect of the component. */
        uint32_t present               : 1;  /**< [ 20: 20](RO) Returns 1, indicating that the DEVARCH register is present. */
        uint32_t revision              : 4;  /**< [ 19: 16](RO) Architecture revision. Returns the revision of the architecture that the ARCHID field specifies. */
        uint32_t archid                : 16; /**< [ 15:  0](RO) Architecture ID. Returns 0x1a14, identifying Cross Trigger Interface architecture v2. */
#else /* Word 0 - Little Endian */
        uint32_t archid                : 16; /**< [ 15:  0](RO) Architecture ID. Returns 0x1a14, identifying Cross Trigger Interface architecture v2. */
        uint32_t revision              : 4;  /**< [ 19: 16](RO) Architecture revision. Returns the revision of the architecture that the ARCHID field specifies. */
        uint32_t present               : 1;  /**< [ 20: 20](RO) Returns 1, indicating that the DEVARCH register is present. */
        uint32_t architect             : 11; /**< [ 31: 21](RO) Returns 0x23b, denoting Arm as architect of the component. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_devarch_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_devarch cavm_rtt_mg_masi_ctix_devarch_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_DEVARCH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_DEVARCH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890fbc + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_DEVARCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_DEVARCH(a) cavm_rtt_mg_masi_ctix_devarch_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_DEVARCH(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_DEVARCH(a) "RTT_MG_MASI_CTIX_DEVARCH"
#define busnum_CAVM_RTT_MG_MASI_CTIX_DEVARCH(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_DEVARCH(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_devid
 *
 * RTT Mg Masi Cti Devid Register
 * This register is IMPLEMENTATION DEFINED for each Part Number and Designer. The
 * register indicates the capabilities of the component.
 */
union cavm_rtt_mg_masi_ctix_devid
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_devid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t inout_f               : 1;  /**< [ 24: 24](RO) Indicates channel inputs are also masked by the CTIGATE register. Always 1. */
        uint32_t reserved_20_23        : 4;
        uint32_t num_ch                : 4;  /**< [ 19: 16](RO) The number of channels. Always 4. */
        uint32_t num_trig              : 8;  /**< [ 15:  8](RO) Indicates the maximum number of triggers - the maximum of the two parameters,
                                                                 NUM_EVENT_SLAVES and NUM_EVENT_MASTERS. */
        uint32_t reserved_5_7          : 3;
        uint32_t ext_mux_num           : 5;  /**< [  4:  0](RO) Indicates the value of the EXT_MUX_NUM parameter, which determines if there is
                                                                 any external multiplexing on the trigger inputs and outputs. 0 indicates no
                                                                 multiplexing. */
#else /* Word 0 - Little Endian */
        uint32_t ext_mux_num           : 5;  /**< [  4:  0](RO) Indicates the value of the EXT_MUX_NUM parameter, which determines if there is
                                                                 any external multiplexing on the trigger inputs and outputs. 0 indicates no
                                                                 multiplexing. */
        uint32_t reserved_5_7          : 3;
        uint32_t num_trig              : 8;  /**< [ 15:  8](RO) Indicates the maximum number of triggers - the maximum of the two parameters,
                                                                 NUM_EVENT_SLAVES and NUM_EVENT_MASTERS. */
        uint32_t num_ch                : 4;  /**< [ 19: 16](RO) The number of channels. Always 4. */
        uint32_t reserved_20_23        : 4;
        uint32_t inout_f               : 1;  /**< [ 24: 24](RO) Indicates channel inputs are also masked by the CTIGATE register. Always 1. */
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_devid_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_devid cavm_rtt_mg_masi_ctix_devid_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_DEVID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_DEVID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890fc8 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_DEVID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_DEVID(a) cavm_rtt_mg_masi_ctix_devid_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_DEVID(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_DEVID(a) "RTT_MG_MASI_CTIX_DEVID"
#define busnum_CAVM_RTT_MG_MASI_CTIX_DEVID(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_DEVID(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_devtype
 *
 * RTT Mg Masi Cti Devtype Register
 * A debugger can use this register to get information about a component that has an
 * unrecognized Part number.
 */
union cavm_rtt_mg_masi_ctix_devtype
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_devtype_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Minor classification. Returns 0x1, indicating this component is a Trigger-Matrix. */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major classification. Returns 0x4, indicating this component performs Debug Control. */
#else /* Word 0 - Little Endian */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major classification. Returns 0x4, indicating this component performs Debug Control. */
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Minor classification. Returns 0x1, indicating this component is a Trigger-Matrix. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_devtype_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_devtype cavm_rtt_mg_masi_ctix_devtype_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_DEVTYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_DEVTYPE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890fcc + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_DEVTYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_DEVTYPE(a) cavm_rtt_mg_masi_ctix_devtype_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_DEVTYPE(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_DEVTYPE(a) "RTT_MG_MASI_CTIX_DEVTYPE"
#define busnum_CAVM_RTT_MG_MASI_CTIX_DEVTYPE(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_DEVTYPE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_itchin
 *
 * RTT Mg Masi Cti Itchin Register
 * Integration test to view channel events. The integration test register includes a
 * latch that is set when a pulse is received on a channel input. When read, a register
 * bit reads as 1 if the channel has received a pulse since it was last read. The act
 * of reading the register automatically clears the 1 to a 0. When performing
 * integration testing it is therefore important to coordinate the setting of event
 * latches and reading/clearing them.
 */
union cavm_rtt_mg_masi_ctix_itchin
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_itchin_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](RO) Software should write the field as all 0s. */
        uint32_t ctichin               : 4;  /**< [  3:  0](RO) Reads the latched value of the channel inputs. */
#else /* Word 0 - Little Endian */
        uint32_t ctichin               : 4;  /**< [  3:  0](RO) Reads the latched value of the channel inputs. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](RO) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_itchin_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_itchin cavm_rtt_mg_masi_ctix_itchin_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_ITCHIN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_ITCHIN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890ef4 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_ITCHIN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_ITCHIN(a) cavm_rtt_mg_masi_ctix_itchin_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_ITCHIN(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_ITCHIN(a) "RTT_MG_MASI_CTIX_ITCHIN"
#define busnum_CAVM_RTT_MG_MASI_CTIX_ITCHIN(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_ITCHIN(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_itchout
 *
 * RTT Mg Masi Cti Itchout Register
 * Integration test mode register, used to generate channel events. Writing to the
 * register creates a single pulse on the output. ITCHOUT is self-clearing.
 */
union cavm_rtt_mg_masi_ctix_itchout
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_itchout_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
        uint32_t ctichout              : 4;  /**< [  3:  0](R/W) Pulses the channel outputs. */
#else /* Word 0 - Little Endian */
        uint32_t ctichout              : 4;  /**< [  3:  0](R/W) Pulses the channel outputs. */
        uint32_t sbz_0                 : 28; /**< [ 31:  4](R/W) Software should write the field as all 0s. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_itchout_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_itchout cavm_rtt_mg_masi_ctix_itchout_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_ITCHOUT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_ITCHOUT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890ee4 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_ITCHOUT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_ITCHOUT(a) cavm_rtt_mg_masi_ctix_itchout_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_ITCHOUT(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_ITCHOUT(a) "RTT_MG_MASI_CTIX_ITCHOUT"
#define busnum_CAVM_RTT_MG_MASI_CTIX_ITCHOUT(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_ITCHOUT(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_itctrl
 *
 * RTT Mg Masi Cti Itctrl Register
 * The Integration Mode Control register is used to enable topology detection.
 */
union cavm_rtt_mg_masi_ctix_itctrl
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_itctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 31; /**< [ 31:  1](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t ime                   : 1;  /**< [  0:  0](R/W) Integration Mode Enable. When set, the component enters integration mode,
                                                                 enabling topology detection or integration testing to be performed. */
#else /* Word 0 - Little Endian */
        uint32_t ime                   : 1;  /**< [  0:  0](R/W) Integration Mode Enable. When set, the component enters integration mode,
                                                                 enabling topology detection or integration testing to be performed. */
        uint32_t razwi_0               : 31; /**< [ 31:  1](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_itctrl_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_itctrl cavm_rtt_mg_masi_ctix_itctrl_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_ITCTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_ITCTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890f00 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_ITCTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_ITCTRL(a) cavm_rtt_mg_masi_ctix_itctrl_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_ITCTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_ITCTRL(a) "RTT_MG_MASI_CTIX_ITCTRL"
#define busnum_CAVM_RTT_MG_MASI_CTIX_ITCTRL(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_ITCTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_ittrigin
 *
 * RTT Mg Masi Cti Ittrigin Register
 * Integration test to view trigger events. The integration test register includes a
 * latch that is set when a pulse is received on a trigger input. When read, a register
 * bit reads as 1 if the trigger input has received a pulse since it was last read. The
 * act of reading the register automatically clears the 1 to a 0. When performing
 * integration testing it is therefore important to coordinate the setting of event
 * latches and reading/clearing them.
 */
union cavm_rtt_mg_masi_ctix_ittrigin
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_ittrigin_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ctitrigin             : 32; /**< [ 31:  0](RO) Reads the latched value of the trigger inputs. */
#else /* Word 0 - Little Endian */
        uint32_t ctitrigin             : 32; /**< [ 31:  0](RO) Reads the latched value of the trigger inputs. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_ittrigin_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_ittrigin cavm_rtt_mg_masi_ctix_ittrigin_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_ITTRIGIN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_ITTRIGIN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890ef8 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_ITTRIGIN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_ITTRIGIN(a) cavm_rtt_mg_masi_ctix_ittrigin_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_ITTRIGIN(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_ITTRIGIN(a) "RTT_MG_MASI_CTIX_ITTRIGIN"
#define busnum_CAVM_RTT_MG_MASI_CTIX_ITTRIGIN(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_ITTRIGIN(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_ittrigout
 *
 * RTT Mg Masi Cti Ittrigout Register
 * Integration test to generate trigger events.
 */
union cavm_rtt_mg_masi_ctix_ittrigout
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_ittrigout_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ctitrigout            : 32; /**< [ 31:  0](R/W) Set/clear trigger output signal. Reads return the value in the register. Writes: */
#else /* Word 0 - Little Endian */
        uint32_t ctitrigout            : 32; /**< [ 31:  0](R/W) Set/clear trigger output signal. Reads return the value in the register. Writes: */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_ittrigout_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_ittrigout cavm_rtt_mg_masi_ctix_ittrigout_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_ITTRIGOUT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_ITTRIGOUT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890ee8 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_ITTRIGOUT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_ITTRIGOUT(a) cavm_rtt_mg_masi_ctix_ittrigout_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_ITTRIGOUT(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_ITTRIGOUT(a) "RTT_MG_MASI_CTIX_ITTRIGOUT"
#define busnum_CAVM_RTT_MG_MASI_CTIX_ITTRIGOUT(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_ITTRIGOUT(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_pidr0
 *
 * RTT Mg Masi Cti Pidr0 Register
 * The PIDR0 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mg_masi_ctix_pidr0
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_pidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number, bits[7:0]. Taken together with PIDR1.PART_1 it indicates the
                                                                 component. The Part Number is selected by the designer of the component. */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number, bits[7:0]. Taken together with PIDR1.PART_1 it indicates the
                                                                 component. The Part Number is selected by the designer of the component. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_pidr0_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_pidr0 cavm_rtt_mg_masi_ctix_pidr0_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_PIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_PIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890fe0 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_PIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_PIDR0(a) cavm_rtt_mg_masi_ctix_pidr0_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_PIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_PIDR0(a) "RTT_MG_MASI_CTIX_PIDR0"
#define busnum_CAVM_RTT_MG_MASI_CTIX_PIDR0(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_PIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_pidr1
 *
 * RTT Mg Masi Cti Pidr1 Register
 * The PIDR1 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mg_masi_ctix_pidr1
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_pidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t des_0                 : 4;  /**< [  7:  4](RO) JEP106 identification code, bits[3:0]. Together, with PIDR4.DES_2 and
                                                                 PIDR2.DES_1, they indicate the designer of the component and not the
                                                                 implementer, except where the two are the same. */
        uint32_t part_1                : 4;  /**< [  3:  0](RO) Part number, bits[11:8]. Taken together with PIDR0.PART_0 it indicates the
                                                                 component. The Part Number is selected by the designer of the component. */
#else /* Word 0 - Little Endian */
        uint32_t part_1                : 4;  /**< [  3:  0](RO) Part number, bits[11:8]. Taken together with PIDR0.PART_0 it indicates the
                                                                 component. The Part Number is selected by the designer of the component. */
        uint32_t des_0                 : 4;  /**< [  7:  4](RO) JEP106 identification code, bits[3:0]. Together, with PIDR4.DES_2 and
                                                                 PIDR2.DES_1, they indicate the designer of the component and not the
                                                                 implementer, except where the two are the same. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_pidr1_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_pidr1 cavm_rtt_mg_masi_ctix_pidr1_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_PIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_PIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890fe4 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_PIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_PIDR1(a) cavm_rtt_mg_masi_ctix_pidr1_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_PIDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_PIDR1(a) "RTT_MG_MASI_CTIX_PIDR1"
#define busnum_CAVM_RTT_MG_MASI_CTIX_PIDR1(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_PIDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_pidr2
 *
 * RTT Mg Masi Cti Pidr2 Register
 * The PIDR2 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mg_masi_ctix_pidr2
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_pidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revision              : 4;  /**< [  7:  4](RO) Revision. It is an incremental value starting at 0x0 for the first design of a
                                                                 component. See the css600 Component list in Chapter 1 for information on the RTL
                                                                 revision of the component. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) 1 - Always set. Indicates that a JEDEC assigned value is used. */
        uint32_t des_1                 : 3;  /**< [  2:  0](RO) JEP106 identification code, bits[6:4]. Together, with PIDR4.DES_2 and
                                                                 PIDR1.DES_0, they indicate the designer of the component and not the
                                                                 implementer, except where the two are the same. */
#else /* Word 0 - Little Endian */
        uint32_t des_1                 : 3;  /**< [  2:  0](RO) JEP106 identification code, bits[6:4]. Together, with PIDR4.DES_2 and
                                                                 PIDR1.DES_0, they indicate the designer of the component and not the
                                                                 implementer, except where the two are the same. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) 1 - Always set. Indicates that a JEDEC assigned value is used. */
        uint32_t revision              : 4;  /**< [  7:  4](RO) Revision. It is an incremental value starting at 0x0 for the first design of a
                                                                 component. See the css600 Component list in Chapter 1 for information on the RTL
                                                                 revision of the component. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_pidr2_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_pidr2 cavm_rtt_mg_masi_ctix_pidr2_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_PIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_PIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890fe8 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_PIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_PIDR2(a) cavm_rtt_mg_masi_ctix_pidr2_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_PIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_PIDR2(a) "RTT_MG_MASI_CTIX_PIDR2"
#define busnum_CAVM_RTT_MG_MASI_CTIX_PIDR2(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_PIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_pidr3
 *
 * RTT Mg Masi Cti Pidr3 Register
 * The PIDR3 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mg_masi_ctix_pidr3
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_pidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revand                : 4;  /**< [  7:  4](RO) This field indicates minor errata fixes specific to this design, for example
                                                                 metal fixes after implementation. In most cases this field is 0x0. */
        uint32_t cmod                  : 4;  /**< [  3:  0](RO) Customer Modified. Where the component is reusable IP, this value indicates if
                                                                 the customer has modified the behavior of the component. In most cases this
                                                                 field is 0x0. */
#else /* Word 0 - Little Endian */
        uint32_t cmod                  : 4;  /**< [  3:  0](RO) Customer Modified. Where the component is reusable IP, this value indicates if
                                                                 the customer has modified the behavior of the component. In most cases this
                                                                 field is 0x0. */
        uint32_t revand                : 4;  /**< [  7:  4](RO) This field indicates minor errata fixes specific to this design, for example
                                                                 metal fixes after implementation. In most cases this field is 0x0. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_pidr3_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_pidr3 cavm_rtt_mg_masi_ctix_pidr3_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_PIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_PIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890fec + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_PIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_PIDR3(a) cavm_rtt_mg_masi_ctix_pidr3_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_PIDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_PIDR3(a) "RTT_MG_MASI_CTIX_PIDR3"
#define busnum_CAVM_RTT_MG_MASI_CTIX_PIDR3(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_PIDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_pidr4
 *
 * RTT Mg Masi Cti Pidr4 Register
 * The PIDR4 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mg_masi_ctix_pidr4
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_pidr4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t size                  : 4;  /**< [  7:  4](RO) Indicates the memory size that is used by this component. Returns 0 indicating
                                                                 that the component uses an UNKNOWN number of 4KB blocks. Using the SIZE field to
                                                                 indicate the size of the component is deprecated. */
        uint32_t des_2                 : 4;  /**< [  3:  0](RO) JEP106 continuation code. Together, with PIDR2.DES_1 and PIDR1.DES_0, they
                                                                 indicate the designer of the component and not the implementer, except where the
                                                                 two are the same. */
#else /* Word 0 - Little Endian */
        uint32_t des_2                 : 4;  /**< [  3:  0](RO) JEP106 continuation code. Together, with PIDR2.DES_1 and PIDR1.DES_0, they
                                                                 indicate the designer of the component and not the implementer, except where the
                                                                 two are the same. */
        uint32_t size                  : 4;  /**< [  7:  4](RO) Indicates the memory size that is used by this component. Returns 0 indicating
                                                                 that the component uses an UNKNOWN number of 4KB blocks. Using the SIZE field to
                                                                 indicate the size of the component is deprecated. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_pidr4_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_pidr4 cavm_rtt_mg_masi_ctix_pidr4_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_PIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_PIDR4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890fd0 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_PIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_PIDR4(a) cavm_rtt_mg_masi_ctix_pidr4_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_PIDR4(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_PIDR4(a) "RTT_MG_MASI_CTIX_PIDR4"
#define busnum_CAVM_RTT_MG_MASI_CTIX_PIDR4(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_PIDR4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_pidr5
 *
 * RTT Mg Masi Cti Pidr5 Register
 * The PIDR5 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mg_masi_ctix_pidr5
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_pidr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_pidr5_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_pidr5 cavm_rtt_mg_masi_ctix_pidr5_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_PIDR5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_PIDR5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890fd4 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_PIDR5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_PIDR5(a) cavm_rtt_mg_masi_ctix_pidr5_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_PIDR5(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_PIDR5(a) "RTT_MG_MASI_CTIX_PIDR5"
#define busnum_CAVM_RTT_MG_MASI_CTIX_PIDR5(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_PIDR5(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_pidr6
 *
 * RTT Mg Masi Cti Pidr6 Register
 * The PIDR6 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mg_masi_ctix_pidr6
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_pidr6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_pidr6_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_pidr6 cavm_rtt_mg_masi_ctix_pidr6_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_PIDR6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_PIDR6(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890fd8 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_PIDR6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_PIDR6(a) cavm_rtt_mg_masi_ctix_pidr6_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_PIDR6(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_PIDR6(a) "RTT_MG_MASI_CTIX_PIDR6"
#define busnum_CAVM_RTT_MG_MASI_CTIX_PIDR6(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_PIDR6(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_cti#_pidr7
 *
 * RTT Mg Masi Cti Pidr7 Register
 * The PIDR7 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mg_masi_ctix_pidr7
{
    uint32_t u;
    struct cavm_rtt_mg_masi_ctix_pidr7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_ctix_pidr7_s cn; */
};
typedef union cavm_rtt_mg_masi_ctix_pidr7 cavm_rtt_mg_masi_ctix_pidr7_t;

static inline uint64_t CAVM_RTT_MG_MASI_CTIX_PIDR7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_CTIX_PIDR7(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e080890fdc + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_CTIX_PIDR7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_CTIX_PIDR7(a) cavm_rtt_mg_masi_ctix_pidr7_t
#define bustype_CAVM_RTT_MG_MASI_CTIX_PIDR7(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_CTIX_PIDR7(a) "RTT_MG_MASI_CTIX_PIDR7"
#define busnum_CAVM_RTT_MG_MASI_CTIX_PIDR7(a) (a)
#define arguments_CAVM_RTT_MG_MASI_CTIX_PIDR7(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_authstatus
 *
 * RTT Mg Masi Etf Authstatus Register
 * Reports the current status of the authentication control signals.
 */
union cavm_rtt_mg_masi_etfx_authstatus
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_authstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_12_31        : 20;
        uint32_t hnid                  : 2;  /**< [ 11: 10](RO) Hypervisor non-invasive debug. */
        uint32_t hid                   : 2;  /**< [  9:  8](RO) Hypervisor invasive debug. */
        uint32_t snid                  : 2;  /**< [  7:  6](RO) Secure non-invasive debug. */
        uint32_t sid                   : 2;  /**< [  5:  4](RO) Secure invasive debug. */
        uint32_t nsnid                 : 2;  /**< [  3:  2](RO) Non-secure non-invasive debug. */
        uint32_t nsid                  : 2;  /**< [  1:  0](RO) Non-secure invasive debug. */
#else /* Word 0 - Little Endian */
        uint32_t nsid                  : 2;  /**< [  1:  0](RO) Non-secure invasive debug. */
        uint32_t nsnid                 : 2;  /**< [  3:  2](RO) Non-secure non-invasive debug. */
        uint32_t sid                   : 2;  /**< [  5:  4](RO) Secure invasive debug. */
        uint32_t snid                  : 2;  /**< [  7:  6](RO) Secure non-invasive debug. */
        uint32_t hid                   : 2;  /**< [  9:  8](RO) Hypervisor invasive debug. */
        uint32_t hnid                  : 2;  /**< [ 11: 10](RO) Hypervisor non-invasive debug. */
        uint32_t reserved_12_31        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_authstatus_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_authstatus cavm_rtt_mg_masi_etfx_authstatus_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_AUTHSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_AUTHSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0fb8 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_AUTHSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_AUTHSTATUS(a) cavm_rtt_mg_masi_etfx_authstatus_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_AUTHSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_AUTHSTATUS(a) "RTT_MG_MASI_ETFX_AUTHSTATUS"
#define busnum_CAVM_RTT_MG_MASI_ETFX_AUTHSTATUS(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_AUTHSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_bufwm
 *
 * RTT Mg Masi Etf Bufwm Register
 * The value that is programmed into this register indicates the desired threshold
 * vacancy level in 32-bit words in the trace memory. When the available space in the
 * FIFO is less than or equal to this value, that is, fill level \>= (MEM_SIZE - BUFWM),
 * the full output is asserted and the STS.Full bit is set. This register is used only
 * in the FIFO modes, that is, SWF1, SWF2, and HWF modes. In CB mode, the same
 * functionality is obtained by programming the RWP to the desired vacancy trigger
 * level, so that when the pointer wraps around, the full output gets asserted
 * indicating that the vacancy level has fallen below the desired level. Reading this
 * register returns the programmed value. The maximum value that can be written into
 * this register is MEM_SIZE - 1, in which case the full output is asserted after the
 * first 32-bit word is written to trace memory. Writing to this register other than
 * when in Disabled state results in UNPREDICTABLE behavior. Any software using it must
 * program it with an initial value before setting the CTL.TraceCaptEn bit to 1.
 */
union cavm_rtt_mg_masi_etfx_bufwm
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_bufwm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 25; /**< [ 31:  7](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t bufwm                 : 7;  /**< [  6:  0](R/W) Buffer Level Watermark. Indicates the desired threshold vacancy level in 32-bit
                                                                 words in the trace memory. The width of the register is log2(MEM_SIZE). */
#else /* Word 0 - Little Endian */
        uint32_t bufwm                 : 7;  /**< [  6:  0](R/W) Buffer Level Watermark. Indicates the desired threshold vacancy level in 32-bit
                                                                 words in the trace memory. The width of the register is log2(MEM_SIZE). */
        uint32_t razwi_0               : 25; /**< [ 31:  7](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_bufwm_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_bufwm cavm_rtt_mg_masi_etfx_bufwm_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_BUFWM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_BUFWM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0034 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_BUFWM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_BUFWM(a) cavm_rtt_mg_masi_etfx_bufwm_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_BUFWM(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_BUFWM(a) "RTT_MG_MASI_ETFX_BUFWM"
#define busnum_CAVM_RTT_MG_MASI_ETFX_BUFWM(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_BUFWM(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_cbuflevel
 *
 * RTT Mg Masi Etf Cbuflevel Register
 * The CBUFLEVEL register indicates the current fill level of the trace memory in units
 * of 32-bit words. When the TMC leaves Disabled state, this register dynamically
 * indicates the current fill level of trace memory. It retains its value on entering
 * Disabled state. It is not affected by the reprogramming of pointer registers in
 * Disabled state with the exception of RRD reads and RWD writes. Before leaving the
 * Disabled state software must program RRP with the same value as RWP. Without doing
 * this results in UNPREDICTABLE behavior.
 */
union cavm_rtt_mg_masi_etfx_cbuflevel
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_cbuflevel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 24; /**< [ 31:  8](RO) Read-As-Zero, Writes Ignored. */
        uint32_t cbuflevel             : 8;  /**< [  7:  0](RO) Current Buffer Fill Level. Indicates the current fill level of the trace memory
                                                                 in 32-bit words. The width of the register is 1 + log2(MEM_SIZE). */
#else /* Word 0 - Little Endian */
        uint32_t cbuflevel             : 8;  /**< [  7:  0](RO) Current Buffer Fill Level. Indicates the current fill level of the trace memory
                                                                 in 32-bit words. The width of the register is 1 + log2(MEM_SIZE). */
        uint32_t razwi_0               : 24; /**< [ 31:  8](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_cbuflevel_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_cbuflevel cavm_rtt_mg_masi_etfx_cbuflevel_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_CBUFLEVEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_CBUFLEVEL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0030 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_CBUFLEVEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_CBUFLEVEL(a) cavm_rtt_mg_masi_etfx_cbuflevel_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_CBUFLEVEL(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_CBUFLEVEL(a) "RTT_MG_MASI_ETFX_CBUFLEVEL"
#define busnum_CAVM_RTT_MG_MASI_ETFX_CBUFLEVEL(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_CBUFLEVEL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_cidr0
 *
 * RTT Mg Masi Etf Cidr0 Register
 * The CIDR0 register is part of the set of component identification registers.
 */
union cavm_rtt_mg_masi_etfx_cidr0
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_cidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_cidr0_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_cidr0 cavm_rtt_mg_masi_etfx_cidr0_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_CIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_CIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0ff0 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_CIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_CIDR0(a) cavm_rtt_mg_masi_etfx_cidr0_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_CIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_CIDR0(a) "RTT_MG_MASI_ETFX_CIDR0"
#define busnum_CAVM_RTT_MG_MASI_ETFX_CIDR0(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_CIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_cidr1
 *
 * RTT Mg Masi Etf Cidr1 Register
 * The CIDR1 register is part of the set of component identification registers.
 */
union cavm_rtt_mg_masi_etfx_cidr1
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_cidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t class_f               : 4;  /**< [  7:  4](RO) Component class. Returns 0x9, indicating this is a CoreSight component. */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](RO) Preamble. Returns 0x0. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](RO) Preamble. Returns 0x0. */
        uint32_t class_f               : 4;  /**< [  7:  4](RO) Component class. Returns 0x9, indicating this is a CoreSight component. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_cidr1_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_cidr1 cavm_rtt_mg_masi_etfx_cidr1_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_CIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_CIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0ff4 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_CIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_CIDR1(a) cavm_rtt_mg_masi_etfx_cidr1_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_CIDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_CIDR1(a) "RTT_MG_MASI_ETFX_CIDR1"
#define busnum_CAVM_RTT_MG_MASI_ETFX_CIDR1(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_CIDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_cidr2
 *
 * RTT Mg Masi Etf Cidr2 Register
 * The CIDR2 register is part of the set of component identification registers.
 */
union cavm_rtt_mg_masi_etfx_cidr2
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_cidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_cidr2_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_cidr2 cavm_rtt_mg_masi_etfx_cidr2_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_CIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_CIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0ff8 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_CIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_CIDR2(a) cavm_rtt_mg_masi_etfx_cidr2_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_CIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_CIDR2(a) "RTT_MG_MASI_ETFX_CIDR2"
#define busnum_CAVM_RTT_MG_MASI_ETFX_CIDR2(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_CIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_cidr3
 *
 * RTT Mg Masi Etf Cidr3 Register
 * The CIDR3 register is part of the set of component identification registers.
 */
union cavm_rtt_mg_masi_etfx_cidr3
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_cidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_cidr3_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_cidr3 cavm_rtt_mg_masi_etfx_cidr3_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_CIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_CIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0ffc + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_CIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_CIDR3(a) cavm_rtt_mg_masi_etfx_cidr3_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_CIDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_CIDR3(a) "RTT_MG_MASI_ETFX_CIDR3"
#define busnum_CAVM_RTT_MG_MASI_ETFX_CIDR3(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_CIDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_claimclr
 *
 * RTT Mg Masi Etf Claimclr Register
 * This register forms one half of the claim tag value. On writes, this location
 * enables individual bits to be cleared. On reads, it returns the current claim tag
 * value.
 */
union cavm_rtt_mg_masi_etfx_claimclr
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_claimclr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 28; /**< [ 31:  4](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t clr                   : 4;  /**< [  3:  0](R/W) A bit-programmable register bank that clears the claim tag value. It is zero at
                                                                 reset. It is used by software agents to signal to each other ownership of the
                                                                 hardware. It has no direct effect on the hardware itself. */
#else /* Word 0 - Little Endian */
        uint32_t clr                   : 4;  /**< [  3:  0](R/W) A bit-programmable register bank that clears the claim tag value. It is zero at
                                                                 reset. It is used by software agents to signal to each other ownership of the
                                                                 hardware. It has no direct effect on the hardware itself. */
        uint32_t razwi_0               : 28; /**< [ 31:  4](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_claimclr_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_claimclr cavm_rtt_mg_masi_etfx_claimclr_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_CLAIMCLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_CLAIMCLR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0fa4 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_CLAIMCLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_CLAIMCLR(a) cavm_rtt_mg_masi_etfx_claimclr_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_CLAIMCLR(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_CLAIMCLR(a) "RTT_MG_MASI_ETFX_CLAIMCLR"
#define busnum_CAVM_RTT_MG_MASI_ETFX_CLAIMCLR(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_CLAIMCLR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_claimset
 *
 * RTT Mg Masi Etf Claimset Register
 * This register forms one half of the claim tag value. On writes, this location
 * enables individual bits to be set. On reads, it returns the number of bits that can
 * be set.
 */
union cavm_rtt_mg_masi_etfx_claimset
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_claimset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 28; /**< [ 31:  4](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t set                   : 4;  /**< [  3:  0](R/W) A bit-programmable register bank that sets the claim tag value. A read returns a
                                                                 logic 1 for all implemented locations. */
#else /* Word 0 - Little Endian */
        uint32_t set                   : 4;  /**< [  3:  0](R/W) A bit-programmable register bank that sets the claim tag value. A read returns a
                                                                 logic 1 for all implemented locations. */
        uint32_t razwi_0               : 28; /**< [ 31:  4](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_claimset_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_claimset cavm_rtt_mg_masi_etfx_claimset_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_CLAIMSET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_CLAIMSET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0fa0 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_CLAIMSET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_CLAIMSET(a) cavm_rtt_mg_masi_etfx_claimset_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_CLAIMSET(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_CLAIMSET(a) "RTT_MG_MASI_ETFX_CLAIMSET"
#define busnum_CAVM_RTT_MG_MASI_ETFX_CLAIMSET(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_CLAIMSET(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_ctl
 *
 * RTT Mg Masi Etf Ctl Register
 * This register controls trace stream capture. Setting the CTL.TraceCaptEn bit to 1
 * enables the TMC to capture the trace data. When trace capture is enabled, the
 * formatter behavior is controlled by the FFCR register.
 */
union cavm_rtt_mg_masi_etfx_ctl
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 31; /**< [ 31:  1](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t tracecapten           : 1;  /**< [  0:  0](R/W) Trace capture enable. */
#else /* Word 0 - Little Endian */
        uint32_t tracecapten           : 1;  /**< [  0:  0](R/W) Trace capture enable. */
        uint32_t razwi_0               : 31; /**< [ 31:  1](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_ctl_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_ctl cavm_rtt_mg_masi_etfx_ctl_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0020 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_CTL(a) cavm_rtt_mg_masi_etfx_ctl_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_CTL(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_CTL(a) "RTT_MG_MASI_ETFX_CTL"
#define busnum_CAVM_RTT_MG_MASI_ETFX_CTL(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_devid
 *
 * RTT Mg Masi Etf Devid Register
 * This register is IMPLEMENTATION DEFINED for each Part Number and Designer. The
 * register indicates the capabilities of the component.
 */
union cavm_rtt_mg_masi_etfx_devid
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_devid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_11_31        : 21;
        uint32_t memwidth              : 3;  /**< [ 10:  8](RO) This value is twice ATB_DATA_WIDTH. */
        uint32_t configtype            : 2;  /**< [  7:  6](RO) Returns 0x2, indicating ETF configuration. */
        uint32_t clkscheme             : 1;  /**< [  5:  5](RO) RAM Clocking Scheme. This value indicates the TMC RAM clocking scheme used, that
                                                                 is, whether the TMC RAM operates synchronously or asynchronously to the TMC
                                                                 clock. Fixed to 0 indicating that TMC RAM clock is synchronous to the clk input. */
        uint32_t atbinportcount        : 5;  /**< [  4:  0](RO) Hidden Level of ATB input multiplexing. This value indicates the type/number of
                                                                 ATB multiplexing present on the input ATB. Fixed to 0x00 indicating that no
                                                                 multiplexing is present. */
#else /* Word 0 - Little Endian */
        uint32_t atbinportcount        : 5;  /**< [  4:  0](RO) Hidden Level of ATB input multiplexing. This value indicates the type/number of
                                                                 ATB multiplexing present on the input ATB. Fixed to 0x00 indicating that no
                                                                 multiplexing is present. */
        uint32_t clkscheme             : 1;  /**< [  5:  5](RO) RAM Clocking Scheme. This value indicates the TMC RAM clocking scheme used, that
                                                                 is, whether the TMC RAM operates synchronously or asynchronously to the TMC
                                                                 clock. Fixed to 0 indicating that TMC RAM clock is synchronous to the clk input. */
        uint32_t configtype            : 2;  /**< [  7:  6](RO) Returns 0x2, indicating ETF configuration. */
        uint32_t memwidth              : 3;  /**< [ 10:  8](RO) This value is twice ATB_DATA_WIDTH. */
        uint32_t reserved_11_31        : 21;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_devid_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_devid cavm_rtt_mg_masi_etfx_devid_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_DEVID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_DEVID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0fc8 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_DEVID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_DEVID(a) cavm_rtt_mg_masi_etfx_devid_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_DEVID(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_DEVID(a) "RTT_MG_MASI_ETFX_DEVID"
#define busnum_CAVM_RTT_MG_MASI_ETFX_DEVID(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_DEVID(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_devid1
 *
 * RTT Mg Masi Etf Devid1 Register
 * Contains an IMPLEMENTATION DEFINED value.
 */
union cavm_rtt_mg_masi_etfx_devid1
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_devid1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t rmc                   : 1;  /**< [  0:  0](RO) Register management mode. TMC implements register management mode 1. */
#else /* Word 0 - Little Endian */
        uint32_t rmc                   : 1;  /**< [  0:  0](RO) Register management mode. TMC implements register management mode 1. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_devid1_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_devid1 cavm_rtt_mg_masi_etfx_devid1_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_DEVID1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_DEVID1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0fc4 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_DEVID1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_DEVID1(a) cavm_rtt_mg_masi_etfx_devid1_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_DEVID1(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_DEVID1(a) "RTT_MG_MASI_ETFX_DEVID1"
#define busnum_CAVM_RTT_MG_MASI_ETFX_DEVID1(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_DEVID1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_devtype
 *
 * RTT Mg Masi Etf Devtype Register
 * A debugger can use this register to get information about a component that has an
 * unrecognized Part number.
 */
union cavm_rtt_mg_masi_etfx_devtype
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_devtype_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Minor classification. Returns 0x3, indicating this component is a FIFO. */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major classification. Returns 0x2, indicating this component is a Trace Link. */
#else /* Word 0 - Little Endian */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major classification. Returns 0x2, indicating this component is a Trace Link. */
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Minor classification. Returns 0x3, indicating this component is a FIFO. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_devtype_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_devtype cavm_rtt_mg_masi_etfx_devtype_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_DEVTYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_DEVTYPE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0fcc + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_DEVTYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_DEVTYPE(a) cavm_rtt_mg_masi_etfx_devtype_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_DEVTYPE(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_DEVTYPE(a) "RTT_MG_MASI_ETFX_DEVTYPE"
#define busnum_CAVM_RTT_MG_MASI_ETFX_DEVTYPE(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_DEVTYPE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_ffcr
 *
 * RTT Mg Masi Etf Ffcr Register
 * The FFCR controls the generation of stop, trigger and flush events. The insertion of
 * a flush completion packet and the insertion of a trigger packet in the formatted
 * trace is enabled here. Also one of the 2 formatter modes for bypass mode and normal
 * mode can be changed here when the formatter has stopped.
 */
union cavm_rtt_mg_masi_etfx_ffcr
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_ffcr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_3               : 16; /**< [ 31: 16](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t embedflush            : 1;  /**< [ 15: 15](R/W) Embed Flush ID (flush completion packet). Enables insertion of Flush ID 0x7B
                                                                 with a single byte of data payload = 0x00 in the output trace, immediately after
                                                                 the last flush data byte, when a flush completes on the ATB slave interface.
                                                                 This bit is effective only in Normal formatting modes. In Bypass mode, the Flush
                                                                 ID insertion remains disabled and this bit is ignored. */
        uint32_t drainbuffer           : 1;  /**< [ 14: 14](R/W) Drain Buffer. This bit is used to enable draining of the trace data through the
                                                                 ATB master interface after the formatter has stopped. It is useful in CB mode to
                                                                 capture trace data into trace memory and then to drain the captured trace
                                                                 through the ATB master interface. Writing a 1 to this bit when in Stopped state
                                                                 starts the drain of the contents of trace buffer. This bit always reads as 0.
                                                                 The STS.TMCReady bit goes LOW while the drain is in progress. This bit is
                                                                 functional only when the TMC is in CB mode and formatting is enabled, that is,
                                                                 FFCR.EnFt=1. Setting this bit when the TMC is in any other mode, or when not in
                                                                 Stopped state, results in UNPREDICTABLE behavior. When trace capture is complete
                                                                 in CB mode, all of the captured trace must be retrieved from the trace memory,
                                                                 either by reading all trace data out through RRD reads, or draining all trace
                                                                 data by setting the FFCR.DrainBuffer bit. Setting this bit after some of the
                                                                 captured trace has been read out through RRD results in UNPREDICTABLE behavior. */
        uint32_t stopontrigevt         : 1;  /**< [ 13: 13](R/W) Stop On Trigger Event. If this bit is set, the formatter is stopped when a
                                                                 Trigger Event has been observed. This bit must be used only in CB mode because
                                                                 in FIFO modes, the TMC is a trace link rather than a trace sink and trigger
                                                                 events are related to trace sink functionality. If trace capture is enabled in
                                                                 SWF1, SWF2, or HWF mode with this bit set, it results in UNPREDICTABLE behavior. */
        uint32_t stoponfl              : 1;  /**< [ 12: 12](R/W) Stop On Flush. If this bit is set, the formatter is stopped on completion of a
                                                                 flush operation. The initiation of a flush operation is controlled by
                                                                 programming the register bits FFCR.FlushMan, FFCR.FOnTrigEvt, and FFCR.FOnFlIn.
                                                                 When a flush-initiation condition occurs, afvalid_s is asserted, and when the
                                                                 flush completion is received, that is, afready_s=1, trace capture is stopped.
                                                                 Any remaining data in the formatter is appended with a post-amble and written to
                                                                 trace memory. The flush operation is then complete. When the TMC is configured
                                                                 as an ETF, if a flush is initiated by the ATB Master interface, its completion
                                                                 does not lead to a formatter stop regardless of the value that is programmed in
                                                                 this bit. */
        uint32_t razwi_2               : 1;  /**< [ 11: 11](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t trigonfl              : 1;  /**< [ 10: 10](R/W) Indicate on trace stream the completion of flush. If this bit is set, a trigger
                                                                 is indicated on the trace stream when afready_s is received for a flush in
                                                                 progress. If this bit is clear, no triggers are embedded in the trace stream on
                                                                 flush completion. If Trigger Insertion is disabled, that is, FFCR.EnTI=0, then
                                                                 trigger indication on the trace stream is blocked regardless of the value that
                                                                 is programmed in this bit. When the TMC is configured as ETF, if a flush is
                                                                 initiated by the ATB Master interface, its completion does not lead to a trigger
                                                                 indication on the trace stream regardless of the value that is programmed in
                                                                 this bit. */
        uint32_t trigontrigevt         : 1;  /**< [  9:  9](R/W) Indicate on trace stream the occurrence of a Trigger Event. If this bit is set,
                                                                 a trigger is indicated on the output trace stream when a Trigger Event occurs.
                                                                 If Trigger Insertion is disabled, that is, FFCR.EnTI=0, then trigger indication
                                                                 on the trace stream is blocked regardless of the value that is programmed in
                                                                 this bit. This bit must be used only in CB mode because in FIFO modes, the TMC
                                                                 is a trace link rather than a trace sink and trigger events are related to trace
                                                                 sink functionality. If trace capture is enabled in SWF1, SWF2, or HWF mode with
                                                                 this bit set, it results in UNPREDICTABLE behavior. */
        uint32_t trigontrigin          : 1;  /**< [  8:  8](R/W) Indicate on trace stream the occurrence of a rising edge on trigin. If this bit
                                                                 is set, a trigger is indicated on the trace stream when a rising edge is
                                                                 detected on the trigin input. If Trigger Insertion is disabled, that is,
                                                                 FFCR.EnTI=0, then trigger indication on the trace stream is blocked regardless
                                                                 of the value that is programmed in this bit. */
        uint32_t razwi_1               : 1;  /**< [  7:  7](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t flushman              : 1;  /**< [  6:  6](R/W) Manually generate a flush of the system. Writing 1 to this bit causes a flush to
                                                                 be generated. This bit is cleared automatically when, in formatter bypass mode,
                                                                 afready_s was sampled high, or, in normal formatting mode, afready_s was sampled
                                                                 high and all flush data was output to the trace memory. If CTL.TraceCaptEn=0,
                                                                 writes to this bit are ignored. */
        uint32_t fontrigevt            : 1;  /**< [  5:  5](R/W) Flush on Trigger Event. If FFCR.StopOnTrigEvt is set, this bit is ignored.
                                                                 Setting this bit generates a flush when a Trigger Event occurs. If
                                                                 FFCR.StopOnTrigEvt is set, this bit is ignored. This bit must be used only in CB
                                                                 mode because in FIFO modes, the TMC is a trace link rather than a trace sink and
                                                                 trigger events are related to trace sink functionality. If trace capture is
                                                                 enabled in SWF1, SWF2, or HWF mode with this bit set, it results in
                                                                 UNPREDICTABLE behavior. */
        uint32_t fonflin               : 1;  /**< [  4:  4](R/W) Setting this bit enables the detection of transitions on the flushin input by
                                                                 the TMC. If this bit is set and the formatter has not already stopped, a rising
                                                                 edge on flushin initiates a flush request. */
        uint32_t razwi_0               : 2;  /**< [  3:  2](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t enti                  : 1;  /**< [  1:  1](R/W) Enable Trigger Insertion. Setting this bit enables the insertion of triggers in
                                                                 the formatted trace stream. A trigger is indicated by inserting one byte of data
                                                                 0x00 with atid_s=0x7D in the trace stream. Trigger indication on the trace
                                                                 stream is also controlled by the register bits FFCR.TrigOnFl,
                                                                 FFCR.TrigOnTrigEvt, and FFCR.TrigOnTrigIn. This bit can only be changed when the
                                                                 TMC is in Disabled state. If FFCR.EnTI bit is set formatting is enabled. */
        uint32_t enft                  : 1;  /**< [  0:  0](R/W) Enable Formatter. If this bit is set, formatting is enabled. When EnTi is set,
                                                                 formatting is enabled. When CB mode is not used, formatting is also enabled. For
                                                                 backwards-compatibility with earlier versions of the ETB disabling of formatting
                                                                 is supported only in CB mode. This bit can only be changed when TMC is in
                                                                 Disabled state. */
#else /* Word 0 - Little Endian */
        uint32_t enft                  : 1;  /**< [  0:  0](R/W) Enable Formatter. If this bit is set, formatting is enabled. When EnTi is set,
                                                                 formatting is enabled. When CB mode is not used, formatting is also enabled. For
                                                                 backwards-compatibility with earlier versions of the ETB disabling of formatting
                                                                 is supported only in CB mode. This bit can only be changed when TMC is in
                                                                 Disabled state. */
        uint32_t enti                  : 1;  /**< [  1:  1](R/W) Enable Trigger Insertion. Setting this bit enables the insertion of triggers in
                                                                 the formatted trace stream. A trigger is indicated by inserting one byte of data
                                                                 0x00 with atid_s=0x7D in the trace stream. Trigger indication on the trace
                                                                 stream is also controlled by the register bits FFCR.TrigOnFl,
                                                                 FFCR.TrigOnTrigEvt, and FFCR.TrigOnTrigIn. This bit can only be changed when the
                                                                 TMC is in Disabled state. If FFCR.EnTI bit is set formatting is enabled. */
        uint32_t razwi_0               : 2;  /**< [  3:  2](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t fonflin               : 1;  /**< [  4:  4](R/W) Setting this bit enables the detection of transitions on the flushin input by
                                                                 the TMC. If this bit is set and the formatter has not already stopped, a rising
                                                                 edge on flushin initiates a flush request. */
        uint32_t fontrigevt            : 1;  /**< [  5:  5](R/W) Flush on Trigger Event. If FFCR.StopOnTrigEvt is set, this bit is ignored.
                                                                 Setting this bit generates a flush when a Trigger Event occurs. If
                                                                 FFCR.StopOnTrigEvt is set, this bit is ignored. This bit must be used only in CB
                                                                 mode because in FIFO modes, the TMC is a trace link rather than a trace sink and
                                                                 trigger events are related to trace sink functionality. If trace capture is
                                                                 enabled in SWF1, SWF2, or HWF mode with this bit set, it results in
                                                                 UNPREDICTABLE behavior. */
        uint32_t flushman              : 1;  /**< [  6:  6](R/W) Manually generate a flush of the system. Writing 1 to this bit causes a flush to
                                                                 be generated. This bit is cleared automatically when, in formatter bypass mode,
                                                                 afready_s was sampled high, or, in normal formatting mode, afready_s was sampled
                                                                 high and all flush data was output to the trace memory. If CTL.TraceCaptEn=0,
                                                                 writes to this bit are ignored. */
        uint32_t razwi_1               : 1;  /**< [  7:  7](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t trigontrigin          : 1;  /**< [  8:  8](R/W) Indicate on trace stream the occurrence of a rising edge on trigin. If this bit
                                                                 is set, a trigger is indicated on the trace stream when a rising edge is
                                                                 detected on the trigin input. If Trigger Insertion is disabled, that is,
                                                                 FFCR.EnTI=0, then trigger indication on the trace stream is blocked regardless
                                                                 of the value that is programmed in this bit. */
        uint32_t trigontrigevt         : 1;  /**< [  9:  9](R/W) Indicate on trace stream the occurrence of a Trigger Event. If this bit is set,
                                                                 a trigger is indicated on the output trace stream when a Trigger Event occurs.
                                                                 If Trigger Insertion is disabled, that is, FFCR.EnTI=0, then trigger indication
                                                                 on the trace stream is blocked regardless of the value that is programmed in
                                                                 this bit. This bit must be used only in CB mode because in FIFO modes, the TMC
                                                                 is a trace link rather than a trace sink and trigger events are related to trace
                                                                 sink functionality. If trace capture is enabled in SWF1, SWF2, or HWF mode with
                                                                 this bit set, it results in UNPREDICTABLE behavior. */
        uint32_t trigonfl              : 1;  /**< [ 10: 10](R/W) Indicate on trace stream the completion of flush. If this bit is set, a trigger
                                                                 is indicated on the trace stream when afready_s is received for a flush in
                                                                 progress. If this bit is clear, no triggers are embedded in the trace stream on
                                                                 flush completion. If Trigger Insertion is disabled, that is, FFCR.EnTI=0, then
                                                                 trigger indication on the trace stream is blocked regardless of the value that
                                                                 is programmed in this bit. When the TMC is configured as ETF, if a flush is
                                                                 initiated by the ATB Master interface, its completion does not lead to a trigger
                                                                 indication on the trace stream regardless of the value that is programmed in
                                                                 this bit. */
        uint32_t razwi_2               : 1;  /**< [ 11: 11](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t stoponfl              : 1;  /**< [ 12: 12](R/W) Stop On Flush. If this bit is set, the formatter is stopped on completion of a
                                                                 flush operation. The initiation of a flush operation is controlled by
                                                                 programming the register bits FFCR.FlushMan, FFCR.FOnTrigEvt, and FFCR.FOnFlIn.
                                                                 When a flush-initiation condition occurs, afvalid_s is asserted, and when the
                                                                 flush completion is received, that is, afready_s=1, trace capture is stopped.
                                                                 Any remaining data in the formatter is appended with a post-amble and written to
                                                                 trace memory. The flush operation is then complete. When the TMC is configured
                                                                 as an ETF, if a flush is initiated by the ATB Master interface, its completion
                                                                 does not lead to a formatter stop regardless of the value that is programmed in
                                                                 this bit. */
        uint32_t stopontrigevt         : 1;  /**< [ 13: 13](R/W) Stop On Trigger Event. If this bit is set, the formatter is stopped when a
                                                                 Trigger Event has been observed. This bit must be used only in CB mode because
                                                                 in FIFO modes, the TMC is a trace link rather than a trace sink and trigger
                                                                 events are related to trace sink functionality. If trace capture is enabled in
                                                                 SWF1, SWF2, or HWF mode with this bit set, it results in UNPREDICTABLE behavior. */
        uint32_t drainbuffer           : 1;  /**< [ 14: 14](R/W) Drain Buffer. This bit is used to enable draining of the trace data through the
                                                                 ATB master interface after the formatter has stopped. It is useful in CB mode to
                                                                 capture trace data into trace memory and then to drain the captured trace
                                                                 through the ATB master interface. Writing a 1 to this bit when in Stopped state
                                                                 starts the drain of the contents of trace buffer. This bit always reads as 0.
                                                                 The STS.TMCReady bit goes LOW while the drain is in progress. This bit is
                                                                 functional only when the TMC is in CB mode and formatting is enabled, that is,
                                                                 FFCR.EnFt=1. Setting this bit when the TMC is in any other mode, or when not in
                                                                 Stopped state, results in UNPREDICTABLE behavior. When trace capture is complete
                                                                 in CB mode, all of the captured trace must be retrieved from the trace memory,
                                                                 either by reading all trace data out through RRD reads, or draining all trace
                                                                 data by setting the FFCR.DrainBuffer bit. Setting this bit after some of the
                                                                 captured trace has been read out through RRD results in UNPREDICTABLE behavior. */
        uint32_t embedflush            : 1;  /**< [ 15: 15](R/W) Embed Flush ID (flush completion packet). Enables insertion of Flush ID 0x7B
                                                                 with a single byte of data payload = 0x00 in the output trace, immediately after
                                                                 the last flush data byte, when a flush completes on the ATB slave interface.
                                                                 This bit is effective only in Normal formatting modes. In Bypass mode, the Flush
                                                                 ID insertion remains disabled and this bit is ignored. */
        uint32_t razwi_3               : 16; /**< [ 31: 16](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_ffcr_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_ffcr cavm_rtt_mg_masi_etfx_ffcr_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_FFCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_FFCR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0304 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_FFCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_FFCR(a) cavm_rtt_mg_masi_etfx_ffcr_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_FFCR(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_FFCR(a) "RTT_MG_MASI_ETFX_FFCR"
#define busnum_CAVM_RTT_MG_MASI_ETFX_FFCR(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_FFCR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_ffsr
 *
 * RTT Mg Masi Etf Ffsr Register
 * This register indicates the status of the Formatter, and the status of Flush request.
 */
union cavm_rtt_mg_masi_etfx_ffsr
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_ffsr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 30; /**< [ 31:  2](RO) Read-As-Zero, Writes Ignored. */
        uint32_t ftstopped             : 1;  /**< [  1:  1](RO) Formatter Stopped. This bit behaves the same way as STS.FtEmpty. It is cleared
                                                                 to 0 when leaving the Disabled state and retains its value when entering the
                                                                 Disabled state. The FFCR.FtStopped bit is deprecated and is present in this
                                                                 register to support backwards-compatibility with earlier versions of the ETB. */
        uint32_t flinprog              : 1;  /**< [  0:  0](RO) Flush In Progress. This bit indicates whether the TMC is currently processing a
                                                                 flush request. The flush initiation is controlled by the flush control bits in
                                                                 the FFCR register. This bit is cleared to 0 when leaving the Disabled state and
                                                                 retains its value when entering the Disabled state. When in Disabled state, this
                                                                 bit is not updated. */
#else /* Word 0 - Little Endian */
        uint32_t flinprog              : 1;  /**< [  0:  0](RO) Flush In Progress. This bit indicates whether the TMC is currently processing a
                                                                 flush request. The flush initiation is controlled by the flush control bits in
                                                                 the FFCR register. This bit is cleared to 0 when leaving the Disabled state and
                                                                 retains its value when entering the Disabled state. When in Disabled state, this
                                                                 bit is not updated. */
        uint32_t ftstopped             : 1;  /**< [  1:  1](RO) Formatter Stopped. This bit behaves the same way as STS.FtEmpty. It is cleared
                                                                 to 0 when leaving the Disabled state and retains its value when entering the
                                                                 Disabled state. The FFCR.FtStopped bit is deprecated and is present in this
                                                                 register to support backwards-compatibility with earlier versions of the ETB. */
        uint32_t razwi_0               : 30; /**< [ 31:  2](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_ffsr_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_ffsr cavm_rtt_mg_masi_etfx_ffsr_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_FFSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_FFSR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0300 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_FFSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_FFSR(a) cavm_rtt_mg_masi_etfx_ffsr_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_FFSR(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_FFSR(a) "RTT_MG_MASI_ETFX_FFSR"
#define busnum_CAVM_RTT_MG_MASI_ETFX_FFSR(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_FFSR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_itatbctr0
 *
 * RTT Mg Masi Etf Itatbctr0 Register
 * This register captures the values of ATB slave inputs atvalid_s, afready_s,
 * atwakeup_s, and atbytes_s in integration mode. In functional mode, this register
 * behaves as RAZ/WI. In integration mode, writes to this register are ignored and the
 * reads return the value of corresponding input pins. The width of this register is
 * given by: 8+log2(ATB DATA WIDTH/8).
 */
union cavm_rtt_mg_masi_etfx_itatbctr0
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_itatbctr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_1               : 22; /**< [ 31: 10](RO) Read-As-Zero, Writes Ignored. */
        uint32_t atbytess              : 2;  /**< [  9:  8](RO) Returns the value of atbytes_s input in integration mode. N=8+log2(ATB DATA WIDTH/8). */
        uint32_t razwi_0               : 5;  /**< [  7:  3](RO) Read-As-Zero, Writes Ignored. */
        uint32_t atwakeups             : 1;  /**< [  2:  2](RO) Returns the value of atwakeup_s input in integration mode. */
        uint32_t afreadys              : 1;  /**< [  1:  1](RO) Returns the value of afready_s input in integration mode. */
        uint32_t atvalids              : 1;  /**< [  0:  0](RO) Returns the value of atvalid_s input in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t atvalids              : 1;  /**< [  0:  0](RO) Returns the value of atvalid_s input in integration mode. */
        uint32_t afreadys              : 1;  /**< [  1:  1](RO) Returns the value of afready_s input in integration mode. */
        uint32_t atwakeups             : 1;  /**< [  2:  2](RO) Returns the value of atwakeup_s input in integration mode. */
        uint32_t razwi_0               : 5;  /**< [  7:  3](RO) Read-As-Zero, Writes Ignored. */
        uint32_t atbytess              : 2;  /**< [  9:  8](RO) Returns the value of atbytes_s input in integration mode. N=8+log2(ATB DATA WIDTH/8). */
        uint32_t razwi_1               : 22; /**< [ 31: 10](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_itatbctr0_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_itatbctr0 cavm_rtt_mg_masi_etfx_itatbctr0_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_ITATBCTR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_ITATBCTR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0ef8 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_ITATBCTR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_ITATBCTR0(a) cavm_rtt_mg_masi_etfx_itatbctr0_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_ITATBCTR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_ITATBCTR0(a) "RTT_MG_MASI_ETFX_ITATBCTR0"
#define busnum_CAVM_RTT_MG_MASI_ETFX_ITATBCTR0(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_ITATBCTR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_itatbctr1
 *
 * RTT Mg Masi Etf Itatbctr1 Register
 * This register captures the value of the atid_s[6:0] input in integration mode. In
 * functional mode, this register behaves as RAZ/WI. In integration mode, writes to
 * this register are ignored and the reads return the value of atid_s input.
 */
union cavm_rtt_mg_masi_etfx_itatbctr1
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_itatbctr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 25; /**< [ 31:  7](RO) Read-As-Zero, Writes Ignored. */
        uint32_t atids                 : 7;  /**< [  6:  0](RO) Returns the value of atid_s[6:0] input in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t atids                 : 7;  /**< [  6:  0](RO) Returns the value of atid_s[6:0] input in integration mode. */
        uint32_t razwi_0               : 25; /**< [ 31:  7](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_itatbctr1_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_itatbctr1 cavm_rtt_mg_masi_etfx_itatbctr1_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_ITATBCTR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_ITATBCTR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0ef4 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_ITATBCTR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_ITATBCTR1(a) cavm_rtt_mg_masi_etfx_itatbctr1_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_ITATBCTR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_ITATBCTR1(a) "RTT_MG_MASI_ETFX_ITATBCTR1"
#define busnum_CAVM_RTT_MG_MASI_ETFX_ITATBCTR1(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_ITATBCTR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_itatbctr2
 *
 * RTT Mg Masi Etf Itatbctr2 Register
 * This register enables control of ATB slave outputs atready_s, afvalid_s, and
 * syncreq_s in integration mode. In functional mode, this register behaves as RAZ/WI.
 * In integration mode, the value that is written to any bit of this register is driven
 * on the output pin that is controlled by that bit and the reads return 0x0.
 */
union cavm_rtt_mg_masi_etfx_itatbctr2
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_itatbctr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 29; /**< [ 31:  3](WO) Read-As-Zero, Writes Ignored. */
        uint32_t syncreqs              : 1;  /**< [  2:  2](WO) Controls the value of syncreq_s output in integration mode. */
        uint32_t afvalids              : 1;  /**< [  1:  1](WO) Controls the value of afvalid_s output in integration mode. */
        uint32_t atreadys              : 1;  /**< [  0:  0](WO) Controls the value of atready_s output in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t atreadys              : 1;  /**< [  0:  0](WO) Controls the value of atready_s output in integration mode. */
        uint32_t afvalids              : 1;  /**< [  1:  1](WO) Controls the value of afvalid_s output in integration mode. */
        uint32_t syncreqs              : 1;  /**< [  2:  2](WO) Controls the value of syncreq_s output in integration mode. */
        uint32_t razwi_0               : 29; /**< [ 31:  3](WO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_itatbctr2_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_itatbctr2 cavm_rtt_mg_masi_etfx_itatbctr2_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_ITATBCTR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_ITATBCTR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0ef0 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_ITATBCTR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_ITATBCTR2(a) cavm_rtt_mg_masi_etfx_itatbctr2_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_ITATBCTR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_ITATBCTR2(a) "RTT_MG_MASI_ETFX_ITATBCTR2"
#define busnum_CAVM_RTT_MG_MASI_ETFX_ITATBCTR2(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_ITATBCTR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_itatbdata0
 *
 * RTT Mg Masi Etf Itatbdata0 Register
 * This register captures the value of atdata_s input in integration mode. In
 * functional mode, this register behaves as RAZ/WI. In integration mode, writes to
 * this register are ignored and the reads return the value of corresponding atdata_s
 * bits. The width of this register is given by: 1+(ATB DATA WIDTH)/8.
 */
union cavm_rtt_mg_masi_etfx_itatbdata0
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_itatbdata0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 27; /**< [ 31:  5](RO) Read-As-Zero, Writes Ignored. */
        uint32_t atdatasbit31          : 1;  /**< [  4:  4](RO) Returns the value of atdata_s[31] input in integration mode. */
        uint32_t atdatasbit23          : 1;  /**< [  3:  3](RO) Returns the value of atdata_s[23] input in integration mode. */
        uint32_t atdatasbit15          : 1;  /**< [  2:  2](RO) Returns the value of atdata_s[15] input in integration mode. */
        uint32_t atdatasbit7           : 1;  /**< [  1:  1](RO) Returns the value of atdata_s[7] input in integration mode. */
        uint32_t atdatasbit0           : 1;  /**< [  0:  0](RO) Returns the value of atdata_s[0] input in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t atdatasbit0           : 1;  /**< [  0:  0](RO) Returns the value of atdata_s[0] input in integration mode. */
        uint32_t atdatasbit7           : 1;  /**< [  1:  1](RO) Returns the value of atdata_s[7] input in integration mode. */
        uint32_t atdatasbit15          : 1;  /**< [  2:  2](RO) Returns the value of atdata_s[15] input in integration mode. */
        uint32_t atdatasbit23          : 1;  /**< [  3:  3](RO) Returns the value of atdata_s[23] input in integration mode. */
        uint32_t atdatasbit31          : 1;  /**< [  4:  4](RO) Returns the value of atdata_s[31] input in integration mode. */
        uint32_t razwi_0               : 27; /**< [ 31:  5](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_itatbdata0_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_itatbdata0 cavm_rtt_mg_masi_etfx_itatbdata0_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_ITATBDATA0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_ITATBDATA0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0eec + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_ITATBDATA0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_ITATBDATA0(a) cavm_rtt_mg_masi_etfx_itatbdata0_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_ITATBDATA0(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_ITATBDATA0(a) "RTT_MG_MASI_ETFX_ITATBDATA0"
#define busnum_CAVM_RTT_MG_MASI_ETFX_ITATBDATA0(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_ITATBDATA0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_itatbmctr0
 *
 * RTT Mg Masi Etf Itatbmctr0 Register
 * This register enables control of the ATB master outputs atbytes_m, atwakeup_m,
 * afready_m, and atvalid_m in integration mode. In functional mode, this register
 * behaves as RAZ/WI. In integration mode, the value that is written to any bit of this
 * register is driven on the output pin that is controlled by that bit, and the reads
 * return 0x0.
 */
union cavm_rtt_mg_masi_etfx_itatbmctr0
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_itatbmctr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_1               : 22; /**< [ 31: 10](WO) Read-As-Zero, Writes Ignored. */
        uint32_t atbytesm              : 2;  /**< [  9:  8](WO) Controls the value of atbytes_m output in integration mode. This width of this
                                                                 field is given by N=8+log2(ATB DATA WIDTH/8). */
        uint32_t razwi_0               : 5;  /**< [  7:  3](WO) Read-As-Zero, Writes Ignored. */
        uint32_t atwakeupm             : 1;  /**< [  2:  2](WO) Controls the value of atwakeup_m output in integration mode. */
        uint32_t afreadym              : 1;  /**< [  1:  1](WO) Controls the value of afready_m output in integration mode. */
        uint32_t atvalidm              : 1;  /**< [  0:  0](WO) Controls the value of atvalid_m output in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t atvalidm              : 1;  /**< [  0:  0](WO) Controls the value of atvalid_m output in integration mode. */
        uint32_t afreadym              : 1;  /**< [  1:  1](WO) Controls the value of afready_m output in integration mode. */
        uint32_t atwakeupm             : 1;  /**< [  2:  2](WO) Controls the value of atwakeup_m output in integration mode. */
        uint32_t razwi_0               : 5;  /**< [  7:  3](WO) Read-As-Zero, Writes Ignored. */
        uint32_t atbytesm              : 2;  /**< [  9:  8](WO) Controls the value of atbytes_m output in integration mode. This width of this
                                                                 field is given by N=8+log2(ATB DATA WIDTH/8). */
        uint32_t razwi_1               : 22; /**< [ 31: 10](WO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_itatbmctr0_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_itatbmctr0 cavm_rtt_mg_masi_etfx_itatbmctr0_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_ITATBMCTR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_ITATBMCTR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0edc + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_ITATBMCTR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_ITATBMCTR0(a) cavm_rtt_mg_masi_etfx_itatbmctr0_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_ITATBMCTR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_ITATBMCTR0(a) "RTT_MG_MASI_ETFX_ITATBMCTR0"
#define busnum_CAVM_RTT_MG_MASI_ETFX_ITATBMCTR0(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_ITATBMCTR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_itatbmctr1
 *
 * RTT Mg Masi Etf Itatbmctr1 Register
 * This register enables control of the atid_m output in integration mode. In
 * functional mode, this register behaves as RAZ/WI. In integration mode, the value
 * that is written to this register is driven on the atid_m output and the reads return
 * 0x0.
 */
union cavm_rtt_mg_masi_etfx_itatbmctr1
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_itatbmctr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 25; /**< [ 31:  7](WO) Read-As-Zero, Writes Ignored. */
        uint32_t atidm                 : 7;  /**< [  6:  0](WO) Controls the value of the atid_m[6:0] output in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t atidm                 : 7;  /**< [  6:  0](WO) Controls the value of the atid_m[6:0] output in integration mode. */
        uint32_t razwi_0               : 25; /**< [ 31:  7](WO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_itatbmctr1_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_itatbmctr1 cavm_rtt_mg_masi_etfx_itatbmctr1_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_ITATBMCTR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_ITATBMCTR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0ed8 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_ITATBMCTR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_ITATBMCTR1(a) cavm_rtt_mg_masi_etfx_itatbmctr1_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_ITATBMCTR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_ITATBMCTR1(a) "RTT_MG_MASI_ETFX_ITATBMCTR1"
#define busnum_CAVM_RTT_MG_MASI_ETFX_ITATBMCTR1(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_ITATBMCTR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_itatbmctr2
 *
 * RTT Mg Masi Etf Itatbmctr2 Register
 * This register captures the values of ATB master inputs atready_m, afvalid_m, and
 * syncreq_m in integration mode. In functional mode, this register behaves as RAZ/WI.
 */
union cavm_rtt_mg_masi_etfx_itatbmctr2
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_itatbmctr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 29; /**< [ 31:  3](RO) Read-As-Zero, Writes Ignored. */
        uint32_t syncreqm              : 1;  /**< [  2:  2](RO) Integration status of syncreq_m input. In integration mode, this bit latches to
                                                                 1 on a rising edge of syncreq_m input, which is cleared when this register is
                                                                 read or when integration mode is disabled. */
        uint32_t afvalidm              : 1;  /**< [  1:  1](RO) Integration status of afvalid_m input. In integration mode, writes are ignored
                                                                 and reads return the value of afvalid_m input. */
        uint32_t atreadym              : 1;  /**< [  0:  0](RO) Integration status of atready_m input. In integration mode, writes are ignored
                                                                 and reads return the value of the atready_m input. */
#else /* Word 0 - Little Endian */
        uint32_t atreadym              : 1;  /**< [  0:  0](RO) Integration status of atready_m input. In integration mode, writes are ignored
                                                                 and reads return the value of the atready_m input. */
        uint32_t afvalidm              : 1;  /**< [  1:  1](RO) Integration status of afvalid_m input. In integration mode, writes are ignored
                                                                 and reads return the value of afvalid_m input. */
        uint32_t syncreqm              : 1;  /**< [  2:  2](RO) Integration status of syncreq_m input. In integration mode, this bit latches to
                                                                 1 on a rising edge of syncreq_m input, which is cleared when this register is
                                                                 read or when integration mode is disabled. */
        uint32_t razwi_0               : 29; /**< [ 31:  3](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_itatbmctr2_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_itatbmctr2 cavm_rtt_mg_masi_etfx_itatbmctr2_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_ITATBMCTR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_ITATBMCTR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0ed4 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_ITATBMCTR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_ITATBMCTR2(a) cavm_rtt_mg_masi_etfx_itatbmctr2_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_ITATBMCTR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_ITATBMCTR2(a) "RTT_MG_MASI_ETFX_ITATBMCTR2"
#define busnum_CAVM_RTT_MG_MASI_ETFX_ITATBMCTR2(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_ITATBMCTR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_itatbmdata0
 *
 * RTT Mg Masi Etf Itatbmdata0 Register
 * This register enables control of the atdata_m output in integration mode. In
 * functional mode, this register behaves as RAZ/WI. In integration mode, the value
 * that is written to any given bit is driven on the output pin that is controlled by
 * that bit and the reads return 0x0. The width of this register is given by 1+(ATB
 * DATA WIDTH)/8.
 */
union cavm_rtt_mg_masi_etfx_itatbmdata0
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_itatbmdata0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 27; /**< [ 31:  5](WO) Read-As-Zero, Writes Ignored. */
        uint32_t atdatmbit31           : 1;  /**< [  4:  4](WO) Controls the value of atdata_m[31] output in integration mode. */
        uint32_t atdatmbit23           : 1;  /**< [  3:  3](WO) Controls the value of atdata_m[23] output in integration mode. */
        uint32_t atdatmbit15           : 1;  /**< [  2:  2](WO) Controls the value of atdata_m[15] output in integration mode. */
        uint32_t atdatmbit7            : 1;  /**< [  1:  1](WO) Controls the value of atdata_m[7] output in integration mode. */
        uint32_t atdatmbit0            : 1;  /**< [  0:  0](WO) Controls the value of atdata_m[0] output in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t atdatmbit0            : 1;  /**< [  0:  0](WO) Controls the value of atdata_m[0] output in integration mode. */
        uint32_t atdatmbit7            : 1;  /**< [  1:  1](WO) Controls the value of atdata_m[7] output in integration mode. */
        uint32_t atdatmbit15           : 1;  /**< [  2:  2](WO) Controls the value of atdata_m[15] output in integration mode. */
        uint32_t atdatmbit23           : 1;  /**< [  3:  3](WO) Controls the value of atdata_m[23] output in integration mode. */
        uint32_t atdatmbit31           : 1;  /**< [  4:  4](WO) Controls the value of atdata_m[31] output in integration mode. */
        uint32_t razwi_0               : 27; /**< [ 31:  5](WO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_itatbmdata0_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_itatbmdata0 cavm_rtt_mg_masi_etfx_itatbmdata0_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_ITATBMDATA0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_ITATBMDATA0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0ed0 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_ITATBMDATA0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_ITATBMDATA0(a) cavm_rtt_mg_masi_etfx_itatbmdata0_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_ITATBMDATA0(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_ITATBMDATA0(a) "RTT_MG_MASI_ETFX_ITATBMDATA0"
#define busnum_CAVM_RTT_MG_MASI_ETFX_ITATBMDATA0(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_ITATBMDATA0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_itctrl
 *
 * RTT Mg Masi Etf Itctrl Register
 * The Integration Mode Control register is used to enable topology detection.
 */
union cavm_rtt_mg_masi_etfx_itctrl
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_itctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 31; /**< [ 31:  1](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t ime                   : 1;  /**< [  0:  0](R/W) Integration Mode Enable. When set, the component enters integration mode,
                                                                 enabling topology detection or integration testing to be performed. */
#else /* Word 0 - Little Endian */
        uint32_t ime                   : 1;  /**< [  0:  0](R/W) Integration Mode Enable. When set, the component enters integration mode,
                                                                 enabling topology detection or integration testing to be performed. */
        uint32_t razwi_0               : 31; /**< [ 31:  1](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_itctrl_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_itctrl cavm_rtt_mg_masi_etfx_itctrl_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_ITCTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_ITCTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0f00 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_ITCTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_ITCTRL(a) cavm_rtt_mg_masi_etfx_itctrl_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_ITCTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_ITCTRL(a) "RTT_MG_MASI_ETFX_ITCTRL"
#define busnum_CAVM_RTT_MG_MASI_ETFX_ITCTRL(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_ITCTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_itevtintr
 *
 * RTT Mg Masi Etf Itevtintr Register
 * This register controls the values of event and interrupt outputs in integration
 * mode. In functional mode, this register behaves as RAZ/WI. In integration mode, the
 * value that is written to any bit of this register is driven on the output pin that
 * is controlled by that bit and the reads return 0x0.
 */
union cavm_rtt_mg_masi_etfx_itevtintr
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_itevtintr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 29; /**< [ 31:  3](WO) Read-As-Zero, Writes Ignored. */
        uint32_t flushcomp             : 1;  /**< [  2:  2](WO) Controls the value of flushcomp output in integration mode. */
        uint32_t full                  : 1;  /**< [  1:  1](WO) Controls the value of full output in integration mode. */
        uint32_t acqcomp               : 1;  /**< [  0:  0](WO) Controls the value of acqcomp output in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t acqcomp               : 1;  /**< [  0:  0](WO) Controls the value of acqcomp output in integration mode. */
        uint32_t full                  : 1;  /**< [  1:  1](WO) Controls the value of full output in integration mode. */
        uint32_t flushcomp             : 1;  /**< [  2:  2](WO) Controls the value of flushcomp output in integration mode. */
        uint32_t razwi_0               : 29; /**< [ 31:  3](WO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_itevtintr_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_itevtintr cavm_rtt_mg_masi_etfx_itevtintr_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_ITEVTINTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_ITEVTINTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0ee0 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_ITEVTINTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_ITEVTINTR(a) cavm_rtt_mg_masi_etfx_itevtintr_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_ITEVTINTR(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_ITEVTINTR(a) "RTT_MG_MASI_ETFX_ITEVTINTR"
#define busnum_CAVM_RTT_MG_MASI_ETFX_ITEVTINTR(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_ITEVTINTR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_ittrflin
 *
 * RTT Mg Masi Etf Ittrflin Register
 * This register captures the values of the flushin and trigin inputs in integration
 * mode. In functional mode, this register behaves as RAZ/WI.
 */
union cavm_rtt_mg_masi_etfx_ittrflin
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_ittrflin_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 30; /**< [ 31:  2](RO) Read-As-Zero, Writes Ignored. */
        uint32_t flushin               : 1;  /**< [  1:  1](RO) Integration status of flushin input. In integration mode, this bit latches to 1
                                                                 on a rising edge of the flushin input. It is cleared when the register is read
                                                                 or when integration mode is disabled. */
        uint32_t trigin                : 1;  /**< [  0:  0](RO) Integration status of trigin input. In integration mode, this bit latches to 1
                                                                 on a rising edge of the trigin input. It is cleared when the register is read or
                                                                 when integration mode is disabled. */
#else /* Word 0 - Little Endian */
        uint32_t trigin                : 1;  /**< [  0:  0](RO) Integration status of trigin input. In integration mode, this bit latches to 1
                                                                 on a rising edge of the trigin input. It is cleared when the register is read or
                                                                 when integration mode is disabled. */
        uint32_t flushin               : 1;  /**< [  1:  1](RO) Integration status of flushin input. In integration mode, this bit latches to 1
                                                                 on a rising edge of the flushin input. It is cleared when the register is read
                                                                 or when integration mode is disabled. */
        uint32_t razwi_0               : 30; /**< [ 31:  2](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_ittrflin_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_ittrflin cavm_rtt_mg_masi_etfx_ittrflin_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_ITTRFLIN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_ITTRFLIN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0ee8 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_ITTRFLIN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_ITTRFLIN(a) cavm_rtt_mg_masi_etfx_ittrflin_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_ITTRFLIN(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_ITTRFLIN(a) "RTT_MG_MASI_ETFX_ITTRFLIN"
#define busnum_CAVM_RTT_MG_MASI_ETFX_ITTRFLIN(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_ITTRFLIN(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_lbuflevel
 *
 * RTT Mg Masi Etf Lbuflevel Register
 * Reading this register returns the maximum fill level of the trace memory in 32-bit
 * words since this register was last read. Reading this register also results in its
 * contents being updated to the current fill level. When entering Disabled state, it
 * retains its last value. While in Disabled state, reads from this register do not
 * affect its value. When exiting Disabled state, the LBUFLEVEL register is updated to
 * the current fill level.
 */
union cavm_rtt_mg_masi_etfx_lbuflevel
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_lbuflevel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 24; /**< [ 31:  8](RO) Read-As-Zero, Writes Ignored. */
        uint32_t lbuflevel             : 8;  /**< [  7:  0](RO) Latched Buffer Fill Level. Indicates the maximum fill level of the trace memory
                                                                 in 32-bit words since this register was last read. The width of the register is
                                                                 1 + log2(MEM_SIZE). */
#else /* Word 0 - Little Endian */
        uint32_t lbuflevel             : 8;  /**< [  7:  0](RO) Latched Buffer Fill Level. Indicates the maximum fill level of the trace memory
                                                                 in 32-bit words since this register was last read. The width of the register is
                                                                 1 + log2(MEM_SIZE). */
        uint32_t razwi_0               : 24; /**< [ 31:  8](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_lbuflevel_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_lbuflevel cavm_rtt_mg_masi_etfx_lbuflevel_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_LBUFLEVEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_LBUFLEVEL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a002c + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_LBUFLEVEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_LBUFLEVEL(a) cavm_rtt_mg_masi_etfx_lbuflevel_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_LBUFLEVEL(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_LBUFLEVEL(a) "RTT_MG_MASI_ETFX_LBUFLEVEL"
#define busnum_CAVM_RTT_MG_MASI_ETFX_LBUFLEVEL(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_LBUFLEVEL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_mode
 *
 * RTT Mg Masi Etf Mode Register
 * This register controls the TMC operating mode. The operating mode can only be
 * changed when the TMC is in Disabled state. Attempting to write to this register in
 * any other state results in UNPREDICTABLE behavior. The operating mode is ignored
 * when in Disabled state.
 */
union cavm_rtt_mg_masi_etfx_mode
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_mode_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_1               : 27; /**< [ 31:  5](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t stallonstop           : 1;  /**< [  4:  4](R/W) Stall On Stop. If this bit is set and the formatter stops as a result of a stop
                                                                 event, the output atready_s is de-asserted to stall the ATB interface and avoid
                                                                 loss of trace. If this bit is clear and the formatter stops as a result of a
                                                                 stop event, signal atready_s remains asserted but the TMC discards further
                                                                 incoming trace. */
        uint32_t razwi_0               : 2;  /**< [  3:  2](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t mode                  : 2;  /**< [  1:  0](R/W) Selects the operating mode. If a reserved MODE value is programmed and trace
                                                                 capture is enabled, the TMC starts to operate in SWF1 mode. However, reading the
                                                                 MODE.MODE field returns the programmed value. */
#else /* Word 0 - Little Endian */
        uint32_t mode                  : 2;  /**< [  1:  0](R/W) Selects the operating mode. If a reserved MODE value is programmed and trace
                                                                 capture is enabled, the TMC starts to operate in SWF1 mode. However, reading the
                                                                 MODE.MODE field returns the programmed value. */
        uint32_t razwi_0               : 2;  /**< [  3:  2](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t stallonstop           : 1;  /**< [  4:  4](R/W) Stall On Stop. If this bit is set and the formatter stops as a result of a stop
                                                                 event, the output atready_s is de-asserted to stall the ATB interface and avoid
                                                                 loss of trace. If this bit is clear and the formatter stops as a result of a
                                                                 stop event, signal atready_s remains asserted but the TMC discards further
                                                                 incoming trace. */
        uint32_t razwi_1               : 27; /**< [ 31:  5](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_mode_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_mode cavm_rtt_mg_masi_etfx_mode_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_MODE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_MODE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0028 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_MODE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_MODE(a) cavm_rtt_mg_masi_etfx_mode_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_MODE(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_MODE(a) "RTT_MG_MASI_ETFX_MODE"
#define busnum_CAVM_RTT_MG_MASI_ETFX_MODE(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_MODE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_pidr0
 *
 * RTT Mg Masi Etf Pidr0 Register
 * The PIDR0 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mg_masi_etfx_pidr0
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_pidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number (lower 8 bits). Returns 0xea, indicating TMC ETF. */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number (lower 8 bits). Returns 0xea, indicating TMC ETF. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_pidr0_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_pidr0 cavm_rtt_mg_masi_etfx_pidr0_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_PIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_PIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0fe0 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_PIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_PIDR0(a) cavm_rtt_mg_masi_etfx_pidr0_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_PIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_PIDR0(a) "RTT_MG_MASI_ETFX_PIDR0"
#define busnum_CAVM_RTT_MG_MASI_ETFX_PIDR0(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_PIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_pidr1
 *
 * RTT Mg Masi Etf Pidr1 Register
 * The PIDR1 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mg_masi_etfx_pidr1
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_pidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t des_0                 : 4;  /**< [  7:  4](RO) JEP106 identification code, bits[3:0]. Together, with PIDR4.DES_2 and
                                                                 PIDR2.DES_1, they indicate the designer of the component and not the
                                                                 implementer, except where the two are the same. */
        uint32_t part_1                : 4;  /**< [  3:  0](RO) Part number, bits[11:8]. Taken together with PIDR0.PART_0 it indicates the
                                                                 component. The Part Number is selected by the designer of the component. */
#else /* Word 0 - Little Endian */
        uint32_t part_1                : 4;  /**< [  3:  0](RO) Part number, bits[11:8]. Taken together with PIDR0.PART_0 it indicates the
                                                                 component. The Part Number is selected by the designer of the component. */
        uint32_t des_0                 : 4;  /**< [  7:  4](RO) JEP106 identification code, bits[3:0]. Together, with PIDR4.DES_2 and
                                                                 PIDR2.DES_1, they indicate the designer of the component and not the
                                                                 implementer, except where the two are the same. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_pidr1_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_pidr1 cavm_rtt_mg_masi_etfx_pidr1_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_PIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_PIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0fe4 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_PIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_PIDR1(a) cavm_rtt_mg_masi_etfx_pidr1_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_PIDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_PIDR1(a) "RTT_MG_MASI_ETFX_PIDR1"
#define busnum_CAVM_RTT_MG_MASI_ETFX_PIDR1(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_PIDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_pidr2
 *
 * RTT Mg Masi Etf Pidr2 Register
 * The PIDR2 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mg_masi_etfx_pidr2
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_pidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revision              : 4;  /**< [  7:  4](RO) Revision. It is an incremental value starting at 0x0 for the first design of a
                                                                 component. See the css600 Component list in Chapter 1 for information on the RTL
                                                                 revision of the component. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) 1 - Always set. Indicates that a JEDEC assigned value is used. */
        uint32_t des_1                 : 3;  /**< [  2:  0](RO) JEP106 identification code, bits[6:4]. Together, with PIDR4.DES_2 and
                                                                 PIDR1.DES_0, they indicate the designer of the component and not the
                                                                 implementer, except where the two are the same. */
#else /* Word 0 - Little Endian */
        uint32_t des_1                 : 3;  /**< [  2:  0](RO) JEP106 identification code, bits[6:4]. Together, with PIDR4.DES_2 and
                                                                 PIDR1.DES_0, they indicate the designer of the component and not the
                                                                 implementer, except where the two are the same. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) 1 - Always set. Indicates that a JEDEC assigned value is used. */
        uint32_t revision              : 4;  /**< [  7:  4](RO) Revision. It is an incremental value starting at 0x0 for the first design of a
                                                                 component. See the css600 Component list in Chapter 1 for information on the RTL
                                                                 revision of the component. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_pidr2_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_pidr2 cavm_rtt_mg_masi_etfx_pidr2_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_PIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_PIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0fe8 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_PIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_PIDR2(a) cavm_rtt_mg_masi_etfx_pidr2_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_PIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_PIDR2(a) "RTT_MG_MASI_ETFX_PIDR2"
#define busnum_CAVM_RTT_MG_MASI_ETFX_PIDR2(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_PIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_pidr3
 *
 * RTT Mg Masi Etf Pidr3 Register
 * The PIDR3 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mg_masi_etfx_pidr3
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_pidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revand                : 4;  /**< [  7:  4](RO) This field indicates minor errata fixes specific to this design, for example
                                                                 metal fixes after implementation. In most cases this field is 0x0. */
        uint32_t cmod                  : 4;  /**< [  3:  0](RO) Customer Modified. Where the component is reusable IP, this value indicates if
                                                                 the customer has modified the behavior of the component. In most cases this
                                                                 field is 0x0. */
#else /* Word 0 - Little Endian */
        uint32_t cmod                  : 4;  /**< [  3:  0](RO) Customer Modified. Where the component is reusable IP, this value indicates if
                                                                 the customer has modified the behavior of the component. In most cases this
                                                                 field is 0x0. */
        uint32_t revand                : 4;  /**< [  7:  4](RO) This field indicates minor errata fixes specific to this design, for example
                                                                 metal fixes after implementation. In most cases this field is 0x0. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_pidr3_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_pidr3 cavm_rtt_mg_masi_etfx_pidr3_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_PIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_PIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0fec + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_PIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_PIDR3(a) cavm_rtt_mg_masi_etfx_pidr3_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_PIDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_PIDR3(a) "RTT_MG_MASI_ETFX_PIDR3"
#define busnum_CAVM_RTT_MG_MASI_ETFX_PIDR3(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_PIDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_pidr4
 *
 * RTT Mg Masi Etf Pidr4 Register
 * The PIDR4 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mg_masi_etfx_pidr4
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_pidr4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t size                  : 4;  /**< [  7:  4](RO) Indicates the memory size that is used by this component. Returns 0 indicating
                                                                 that the component uses an UNKNOWN number of 4KB blocks. Using the SIZE field to
                                                                 indicate the size of the component is deprecated. */
        uint32_t des_2                 : 4;  /**< [  3:  0](RO) JEP106 continuation code. Together, with PIDR2.DES_1 and PIDR1.DES_0, they
                                                                 indicate the designer of the component and not the implementer, except where the
                                                                 two are the same. */
#else /* Word 0 - Little Endian */
        uint32_t des_2                 : 4;  /**< [  3:  0](RO) JEP106 continuation code. Together, with PIDR2.DES_1 and PIDR1.DES_0, they
                                                                 indicate the designer of the component and not the implementer, except where the
                                                                 two are the same. */
        uint32_t size                  : 4;  /**< [  7:  4](RO) Indicates the memory size that is used by this component. Returns 0 indicating
                                                                 that the component uses an UNKNOWN number of 4KB blocks. Using the SIZE field to
                                                                 indicate the size of the component is deprecated. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_pidr4_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_pidr4 cavm_rtt_mg_masi_etfx_pidr4_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_PIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_PIDR4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0fd0 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_PIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_PIDR4(a) cavm_rtt_mg_masi_etfx_pidr4_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_PIDR4(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_PIDR4(a) "RTT_MG_MASI_ETFX_PIDR4"
#define busnum_CAVM_RTT_MG_MASI_ETFX_PIDR4(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_PIDR4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_pidr5
 *
 * RTT Mg Masi Etf Pidr5 Register
 * The PIDR5 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mg_masi_etfx_pidr5
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_pidr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_pidr5_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_pidr5 cavm_rtt_mg_masi_etfx_pidr5_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_PIDR5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_PIDR5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0fd4 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_PIDR5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_PIDR5(a) cavm_rtt_mg_masi_etfx_pidr5_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_PIDR5(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_PIDR5(a) "RTT_MG_MASI_ETFX_PIDR5"
#define busnum_CAVM_RTT_MG_MASI_ETFX_PIDR5(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_PIDR5(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_pidr6
 *
 * RTT Mg Masi Etf Pidr6 Register
 * The PIDR6 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mg_masi_etfx_pidr6
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_pidr6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_pidr6_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_pidr6 cavm_rtt_mg_masi_etfx_pidr6_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_PIDR6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_PIDR6(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0fd8 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_PIDR6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_PIDR6(a) cavm_rtt_mg_masi_etfx_pidr6_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_PIDR6(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_PIDR6(a) "RTT_MG_MASI_ETFX_PIDR6"
#define busnum_CAVM_RTT_MG_MASI_ETFX_PIDR6(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_PIDR6(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_pidr7
 *
 * RTT Mg Masi Etf Pidr7 Register
 * The PIDR7 register is part of the set of peripheral identification registers.
 */
union cavm_rtt_mg_masi_etfx_pidr7
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_pidr7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_pidr7_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_pidr7 cavm_rtt_mg_masi_etfx_pidr7_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_PIDR7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_PIDR7(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0fdc + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_PIDR7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_PIDR7(a) cavm_rtt_mg_masi_etfx_pidr7_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_PIDR7(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_PIDR7(a) "RTT_MG_MASI_ETFX_PIDR7"
#define busnum_CAVM_RTT_MG_MASI_ETFX_PIDR7(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_PIDR7(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_pscr
 *
 * RTT Mg Masi Etf Pscr Register
 * This register determines the reload value of the Periodic Synchronization Counter.
 * This counter enables the frequency of sync packets to be optimized to the trace
 * capture buffer size. The default behavior of the counter is to generate periodic
 * synchronization requests, syncreq_s, on the ATB slave interface.
 */
union cavm_rtt_mg_masi_etfx_pscr
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_pscr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 27; /**< [ 31:  5](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t pscount               : 5;  /**< [  4:  0](R/W) Periodic Synchronization Count. Determines the reload value of the
                                                                 Synchronization Counter. The reload value takes effect the next time the counter
                                                                 reaches zero. When trace capture is enabled, the Synchronization Counter counts
                                                                 the number of bytes of trace data that is stored into the trace memory,
                                                                 regardless of whether the trace data has been formatted by the TMC or not, since
                                                                 the occurrence of the last sync request on the ATB slave interface. When the
                                                                 counter reaches 0, a sync request is sent on the ATB slave interface. Reads from
                                                                 this register return the reload value that is programmed in this register. This
                                                                 field resets to 0x0A, that is, the default sync period is 2^10 bytes. If a
                                                                 reserved value is programmed in this register field, the value 0x1B is used
                                                                 instead, and subsequent reads from this register also return 0x1B. The following
                                                                 constraints apply to the values written to the PSCount field: 0x0 -
                                                                 synchronization is disabled, 0x1-0x6 - reserved, 0x7-0x1B - synchronization
                                                                 period is 2^PSCount bytes. The smallest value 0x7 gives a sync period of 128
                                                                 bytes. The maximum allowed value 0x1B gives a sync period of 2^27 bytes, 0x1C-
                                                                 0x1F - reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pscount               : 5;  /**< [  4:  0](R/W) Periodic Synchronization Count. Determines the reload value of the
                                                                 Synchronization Counter. The reload value takes effect the next time the counter
                                                                 reaches zero. When trace capture is enabled, the Synchronization Counter counts
                                                                 the number of bytes of trace data that is stored into the trace memory,
                                                                 regardless of whether the trace data has been formatted by the TMC or not, since
                                                                 the occurrence of the last sync request on the ATB slave interface. When the
                                                                 counter reaches 0, a sync request is sent on the ATB slave interface. Reads from
                                                                 this register return the reload value that is programmed in this register. This
                                                                 field resets to 0x0A, that is, the default sync period is 2^10 bytes. If a
                                                                 reserved value is programmed in this register field, the value 0x1B is used
                                                                 instead, and subsequent reads from this register also return 0x1B. The following
                                                                 constraints apply to the values written to the PSCount field: 0x0 -
                                                                 synchronization is disabled, 0x1-0x6 - reserved, 0x7-0x1B - synchronization
                                                                 period is 2^PSCount bytes. The smallest value 0x7 gives a sync period of 128
                                                                 bytes. The maximum allowed value 0x1B gives a sync period of 2^27 bytes, 0x1C-
                                                                 0x1F - reserved. */
        uint32_t razwi_0               : 27; /**< [ 31:  5](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_pscr_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_pscr cavm_rtt_mg_masi_etfx_pscr_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_PSCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_PSCR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0308 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_PSCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_PSCR(a) cavm_rtt_mg_masi_etfx_pscr_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_PSCR(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_PSCR(a) "RTT_MG_MASI_ETFX_PSCR"
#define busnum_CAVM_RTT_MG_MASI_ETFX_PSCR(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_PSCR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_rrd
 *
 * RTT Mg Masi Etf Rrd Register
 * Reading this register allows data to be read from the trace memory at the location
 * pointed to by the RRP register when either in the Disabled state or operating in CB
 * or SWF1 mode. When ATB_DATA_WIDTH is 32, 64 or 128 bit wide the memory width is
 * twice as wide and a memory word holds 8, 16 or 32 bytes. Multiple RRD reads must be
 * performed to read a full memory word. When a full memory width of data has been read
 * via the RRD register, the RRP register is incremented to the next memory word. When
 * the TMC left the Disabled state and the trace memory is empty, this register returns
 * 0xFFFFFFFF. When the TMC left the Disabled state and the trace memory is empty, this
 * register returns 0xFFFFFFFF. When operating in CB mode and the TMC left the Disabled
 * state, this register returns 0xFFFFFFFF in all other states except the STOPPED
 * state. When operating in HWF mode, this register also returns 0xFFFFFFFF.
 */
union cavm_rtt_mg_masi_etfx_rrd
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_rrd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rrd                   : 32; /**< [ 31:  0](RO) Returns the data read from trace memory. */
#else /* Word 0 - Little Endian */
        uint32_t rrd                   : 32; /**< [ 31:  0](RO) Returns the data read from trace memory. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_rrd_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_rrd cavm_rtt_mg_masi_etfx_rrd_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_RRD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_RRD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0010 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_RRD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_RRD(a) cavm_rtt_mg_masi_etfx_rrd_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_RRD(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_RRD(a) "RTT_MG_MASI_ETFX_RRD"
#define busnum_CAVM_RTT_MG_MASI_ETFX_RRD(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_RRD(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_rrp
 *
 * RTT Mg Masi Etf Rrp Register
 * The RAM Read Pointer Register contains the value of the read pointer that is used to
 * read entries from trace memory over the APB interface. Software must program it
 * before enabling trace capture. Software must program it with the same value as RWP
 * before enabling trace capture.
 */
union cavm_rtt_mg_masi_etfx_rrp
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_rrp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 23; /**< [ 31:  9](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t rrp                   : 9;  /**< [  8:  0](R/W) The RRP width depends on the size of trace memory and is given by log2(MEM_SIZE
                                                                 x 4). The remaining MSBs of the 32-bit register are of type RAZ/WI. When
                                                                 ATB_DATA_WIDTH is 32, 64 or 128 bit wide the memory width is twice as wide and a
                                                                 memory word holds 8, 16 or 32 bytes. When a full memory width of data has been
                                                                 read via the RRD register, the RRP register is incremented to the next memory
                                                                 word. Some of the lower bits have access type RAZ/WI. The number of bits is
                                                                 calculated as log2(2*ATB_DATA_WIDTH/8). Also the lowest 4 bits are always
                                                                 written 0 to enforce alignment to the frame length of 128 bits. For 256-bit wide
                                                                 memory, Software must program the 5th bit with 0 to enforce alignment with the
                                                                 memory width. */
#else /* Word 0 - Little Endian */
        uint32_t rrp                   : 9;  /**< [  8:  0](R/W) The RRP width depends on the size of trace memory and is given by log2(MEM_SIZE
                                                                 x 4). The remaining MSBs of the 32-bit register are of type RAZ/WI. When
                                                                 ATB_DATA_WIDTH is 32, 64 or 128 bit wide the memory width is twice as wide and a
                                                                 memory word holds 8, 16 or 32 bytes. When a full memory width of data has been
                                                                 read via the RRD register, the RRP register is incremented to the next memory
                                                                 word. Some of the lower bits have access type RAZ/WI. The number of bits is
                                                                 calculated as log2(2*ATB_DATA_WIDTH/8). Also the lowest 4 bits are always
                                                                 written 0 to enforce alignment to the frame length of 128 bits. For 256-bit wide
                                                                 memory, Software must program the 5th bit with 0 to enforce alignment with the
                                                                 memory width. */
        uint32_t razwi_0               : 23; /**< [ 31:  9](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_rrp_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_rrp cavm_rtt_mg_masi_etfx_rrp_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_RRP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_RRP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0014 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_RRP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_RRP(a) cavm_rtt_mg_masi_etfx_rrp_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_RRP(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_RRP(a) "RTT_MG_MASI_ETFX_RRP"
#define busnum_CAVM_RTT_MG_MASI_ETFX_RRP(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_RRP(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_rsz
 *
 * RTT Mg Masi Etf Rsz Register
 * Defines the size of trace memory in units of 32-bit words.
 */
union cavm_rtt_mg_masi_etfx_rsz
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_rsz_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 1;  /**< [ 31: 31](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t rsz                   : 31; /**< [ 30:  0](RO) RAM size. Indicates the size of the RAM in 32-bit words. For example: Returns
                                                                 0x00000100 if trace memory size is 1KB, 0x40000000 if trace memory size is 4GB.
                                                                 This field has the same value as the MEM_SIZE parameter. */
#else /* Word 0 - Little Endian */
        uint32_t rsz                   : 31; /**< [ 30:  0](RO) RAM size. Indicates the size of the RAM in 32-bit words. For example: Returns
                                                                 0x00000100 if trace memory size is 1KB, 0x40000000 if trace memory size is 4GB.
                                                                 This field has the same value as the MEM_SIZE parameter. */
        uint32_t razwi_0               : 1;  /**< [ 31: 31](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_rsz_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_rsz cavm_rtt_mg_masi_etfx_rsz_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_RSZ(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_RSZ(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0004 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_RSZ", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_RSZ(a) cavm_rtt_mg_masi_etfx_rsz_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_RSZ(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_RSZ(a) "RTT_MG_MASI_ETFX_RSZ"
#define busnum_CAVM_RTT_MG_MASI_ETFX_RSZ(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_RSZ(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_rwd
 *
 * RTT Mg Masi Etf Rwd Register
 * The RAM Write Data register enables testing of trace memory connectivity to the TMC.
 * Writing this register allows data to be written to the trace memory at the location
 * pointed to by the RWP register when in the Disabled state. When ATB_DATA_WIDTH is
 * 32, 64 or 128 bit wide the memory width is twice as wide and a memory word holds 8,
 * 16 or 32 bytes. Multiple RWD writes must be performed to write a full memory word.
 * When a full memory width of data has been written via the RWD register, the data is
 * written to the trace memory and the RWP register is incremented to the next memory
 * word.
 */
union cavm_rtt_mg_masi_etfx_rwd
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_rwd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rwd                   : 32; /**< [ 31:  0](WO) Data written to this register is placed in the trace memory. */
#else /* Word 0 - Little Endian */
        uint32_t rwd                   : 32; /**< [ 31:  0](WO) Data written to this register is placed in the trace memory. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_rwd_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_rwd cavm_rtt_mg_masi_etfx_rwd_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_RWD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_RWD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0024 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_RWD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_RWD(a) cavm_rtt_mg_masi_etfx_rwd_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_RWD(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_RWD(a) "RTT_MG_MASI_ETFX_RWD"
#define busnum_CAVM_RTT_MG_MASI_ETFX_RWD(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_RWD(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_rwp
 *
 * RTT Mg Masi Etf Rwp Register
 * RAM Write Pointer Register sets the write pointer that is used to write entries into
 * the trace memory. Software must program it before enabling trace capture.
 */
union cavm_rtt_mg_masi_etfx_rwp
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_rwp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 23; /**< [ 31:  9](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t rwp                   : 9;  /**< [  8:  0](R/W) The RWP width depends on the size of trace memory and is given by log2(MEM_SIZE
                                                                 x 4). The remaining MSBs of the 32-bit register are of type RAZ/WI. When
                                                                 ATB_DATA_WIDTH is 32, 64 or 128 bit wide the memory width is twice as wide and a
                                                                 memory word holds 8, 16 or 32 bytes. When a full memory width of data has been
                                                                 written to the RWD register, the RWP register is incremented to the next memory
                                                                 word. Some of the lower bits have access type RAZ/WI. The number of bits is
                                                                 calculated as log2(2*ATB_DATA_WIDTH/8). Also the lowest 4 bits are always
                                                                 written 0 to enforce alignment to the frame length of 128 bits. For 256-bit wide
                                                                 memory, Software must program the 5th bit with 0 to enforce alignment with the
                                                                 memory width. */
#else /* Word 0 - Little Endian */
        uint32_t rwp                   : 9;  /**< [  8:  0](R/W) The RWP width depends on the size of trace memory and is given by log2(MEM_SIZE
                                                                 x 4). The remaining MSBs of the 32-bit register are of type RAZ/WI. When
                                                                 ATB_DATA_WIDTH is 32, 64 or 128 bit wide the memory width is twice as wide and a
                                                                 memory word holds 8, 16 or 32 bytes. When a full memory width of data has been
                                                                 written to the RWD register, the RWP register is incremented to the next memory
                                                                 word. Some of the lower bits have access type RAZ/WI. The number of bits is
                                                                 calculated as log2(2*ATB_DATA_WIDTH/8). Also the lowest 4 bits are always
                                                                 written 0 to enforce alignment to the frame length of 128 bits. For 256-bit wide
                                                                 memory, Software must program the 5th bit with 0 to enforce alignment with the
                                                                 memory width. */
        uint32_t razwi_0               : 23; /**< [ 31:  9](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_rwp_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_rwp cavm_rtt_mg_masi_etfx_rwp_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_RWP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_RWP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a0018 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_RWP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_RWP(a) cavm_rtt_mg_masi_etfx_rwp_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_RWP(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_RWP(a) "RTT_MG_MASI_ETFX_RWP"
#define busnum_CAVM_RTT_MG_MASI_ETFX_RWP(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_RWP(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_sts
 *
 * RTT Mg Masi Etf Sts Register
 * Indicates the status of the Trace Memory Controller. After a reset, software must
 * ignore all the fields of this register except STS.TMCReady. The other fields have
 * meaning only when the TMC has left the Disabled state. Writes to all RO fields of
 * this register are ignored.
 */
union cavm_rtt_mg_masi_etfx_sts
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 27; /**< [ 31:  5](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t empty                 : 1;  /**< [  4:  4](RO) Trace buffer empty. If set, this bit indicates that the trace memory does not
                                                                 contain any valid trace data. However, this does not mean that the pipeline
                                                                 stages within the TMC are empty. To determine whether the internal pipeline
                                                                 stages are empty, the software must read the STS.TMCReady bit. This bit is valid
                                                                 only when TraceCaptEn is HIGH. This bit reads as zero when TraceCaptEn is LOW.
                                                                 Note, that in Circular Buffer mode, it is possible that the Empty bit and the
                                                                 Full bit in this register are one at the same time because the Full bit in this
                                                                 mode, when set, does not clear until TraceCaptEn is set. */
        uint32_t ftempty               : 1;  /**< [  3:  3](RO) Trace capture has been completed and all captured trace data has been written to
                                                                 the trace memory, set when trace capture has stopped */
        uint32_t tmcready              : 1;  /**< [  2:  2](RO) Trace capture has been completed, all captured trace data has been written to
                                                                 the trace memory, and reading from trace memory completed as a result of
                                                                 FFCR.DrainBuffer bit being set */
        uint32_t triggered             : 1;  /**< [  1:  1](RO) TMC triggered. This bit is set when trace capture is in progress and the TMC has
                                                                 detected a trigger event. This bit is cleared to 0 when leaving the Disabled
                                                                 state and retains its value when entering the Disabled state. A trigger event is
                                                                 when the TMC has written a set number of data words, as programmed in the TRG
                                                                 register, into the trace memory after a rising edge of trigin input, or a
                                                                 trigger packet (atid_s = 0x7D) is received in the input trace. */
        uint32_t full                  : 1;  /**< [  0:  0](RO) Trace memory full. This bit helps in determining the amount of valid data
                                                                 present in the trace memory. It is not affected by the reprogramming of pointer
                                                                 registers in Disabled state. It is cleared when the TMC leaves Disabled state.
                                                                 In Circular Buffer mode, this flag is set when the RAM write pointer wraps
                                                                 around the top of the buffer, and remains set until the TraceCaptEn bit is
                                                                 cleared and set. In Software FIFO and Hardware FIFO mode, this flag indicates
                                                                 that the current space in the trace memory is less than or equal to the value
                                                                 programmed in the BUFWM Register, that is, Fill level \>= MEM_SIZE - BUFWM. The
                                                                 FULL output from the TMC reflects the value of this register bit, except when
                                                                 the Integration Mode bit in the ITCTRL Register, 0xF00, is set. */
#else /* Word 0 - Little Endian */
        uint32_t full                  : 1;  /**< [  0:  0](RO) Trace memory full. This bit helps in determining the amount of valid data
                                                                 present in the trace memory. It is not affected by the reprogramming of pointer
                                                                 registers in Disabled state. It is cleared when the TMC leaves Disabled state.
                                                                 In Circular Buffer mode, this flag is set when the RAM write pointer wraps
                                                                 around the top of the buffer, and remains set until the TraceCaptEn bit is
                                                                 cleared and set. In Software FIFO and Hardware FIFO mode, this flag indicates
                                                                 that the current space in the trace memory is less than or equal to the value
                                                                 programmed in the BUFWM Register, that is, Fill level \>= MEM_SIZE - BUFWM. The
                                                                 FULL output from the TMC reflects the value of this register bit, except when
                                                                 the Integration Mode bit in the ITCTRL Register, 0xF00, is set. */
        uint32_t triggered             : 1;  /**< [  1:  1](RO) TMC triggered. This bit is set when trace capture is in progress and the TMC has
                                                                 detected a trigger event. This bit is cleared to 0 when leaving the Disabled
                                                                 state and retains its value when entering the Disabled state. A trigger event is
                                                                 when the TMC has written a set number of data words, as programmed in the TRG
                                                                 register, into the trace memory after a rising edge of trigin input, or a
                                                                 trigger packet (atid_s = 0x7D) is received in the input trace. */
        uint32_t tmcready              : 1;  /**< [  2:  2](RO) Trace capture has been completed, all captured trace data has been written to
                                                                 the trace memory, and reading from trace memory completed as a result of
                                                                 FFCR.DrainBuffer bit being set */
        uint32_t ftempty               : 1;  /**< [  3:  3](RO) Trace capture has been completed and all captured trace data has been written to
                                                                 the trace memory, set when trace capture has stopped */
        uint32_t empty                 : 1;  /**< [  4:  4](RO) Trace buffer empty. If set, this bit indicates that the trace memory does not
                                                                 contain any valid trace data. However, this does not mean that the pipeline
                                                                 stages within the TMC are empty. To determine whether the internal pipeline
                                                                 stages are empty, the software must read the STS.TMCReady bit. This bit is valid
                                                                 only when TraceCaptEn is HIGH. This bit reads as zero when TraceCaptEn is LOW.
                                                                 Note, that in Circular Buffer mode, it is possible that the Empty bit and the
                                                                 Full bit in this register are one at the same time because the Full bit in this
                                                                 mode, when set, does not clear until TraceCaptEn is set. */
        uint32_t razwi_0               : 27; /**< [ 31:  5](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_sts_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_sts cavm_rtt_mg_masi_etfx_sts_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_STS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a000c + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_STS(a) cavm_rtt_mg_masi_etfx_sts_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_STS(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_STS(a) "RTT_MG_MASI_ETFX_STS"
#define busnum_CAVM_RTT_MG_MASI_ETFX_STS(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_STS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_etf#_trg
 *
 * RTT Mg Masi Etf Trg Register
 * In Circular Buffer mode, the Trigger Counter register specifies the number of 32-bit
 * words to capture in the trace memory, after detection of either a rising edge on the
 * trigin input or a trigger packet in the incoming trace stream, that is, where atid_s
 * = 0x7D. The value programmed must be aligned to the frame length of 128 bits.
 * Software must program this register before leaving Disabled state.
 */
union cavm_rtt_mg_masi_etfx_trg
{
    uint32_t u;
    struct cavm_rtt_mg_masi_etfx_trg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 25; /**< [ 31:  7](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t trg                   : 7;  /**< [  6:  0](R/W) Trigger count. This count represents the number of 32-bit words of trace that
                                                                 are captured between a trigger packet and a trigger event.The lowest two bits
                                                                 have access type RAZ/WI. */
#else /* Word 0 - Little Endian */
        uint32_t trg                   : 7;  /**< [  6:  0](R/W) Trigger count. This count represents the number of 32-bit words of trace that
                                                                 are captured between a trigger packet and a trigger event.The lowest two bits
                                                                 have access type RAZ/WI. */
        uint32_t razwi_0               : 25; /**< [ 31:  7](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_etfx_trg_s cn; */
};
typedef union cavm_rtt_mg_masi_etfx_trg cavm_rtt_mg_masi_etfx_trg_t;

static inline uint64_t CAVM_RTT_MG_MASI_ETFX_TRG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_ETFX_TRG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=15))
        return 0x80e0808a001c + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_ETFX_TRG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_ETFX_TRG(a) cavm_rtt_mg_masi_etfx_trg_t
#define bustype_CAVM_RTT_MG_MASI_ETFX_TRG(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_ETFX_TRG(a) "RTT_MG_MASI_ETFX_TRG"
#define busnum_CAVM_RTT_MG_MASI_ETFX_TRG(a) (a)
#define arguments_CAVM_RTT_MG_MASI_ETFX_TRG(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_RTT_MASI_H__ */
