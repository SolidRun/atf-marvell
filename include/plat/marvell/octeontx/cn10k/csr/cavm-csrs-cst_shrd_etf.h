#ifndef __CAVM_CSRS_CST_SHRD_ETF_H__
#define __CAVM_CSRS_CST_SHRD_ETF_H__
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
 * OcteonTX CST_SHRD_ETF.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (NCB32b) cst_shrd_etf_authstatus
 *
 * CST Shrd Etf Authstatus Register
 * Reports the current status of the authentication control signals.
 */
union cavm_cst_shrd_etf_authstatus
{
    uint32_t u;
    struct cavm_cst_shrd_etf_authstatus_s
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
    /* struct cavm_cst_shrd_etf_authstatus_s cn; */
};
typedef union cavm_cst_shrd_etf_authstatus cavm_cst_shrd_etf_authstatus_t;

#define CAVM_CST_SHRD_ETF_AUTHSTATUS CAVM_CST_SHRD_ETF_AUTHSTATUS_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_AUTHSTATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_AUTHSTATUS_FUNC(void)
{
    return 0x87a100050fb8ll;
}

#define typedef_CAVM_CST_SHRD_ETF_AUTHSTATUS cavm_cst_shrd_etf_authstatus_t
#define bustype_CAVM_CST_SHRD_ETF_AUTHSTATUS CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_AUTHSTATUS "CST_SHRD_ETF_AUTHSTATUS"
#define busnum_CAVM_CST_SHRD_ETF_AUTHSTATUS 0
#define arguments_CAVM_CST_SHRD_ETF_AUTHSTATUS -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_bufwm
 *
 * CST Shrd Etf Bufwm Register
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
union cavm_cst_shrd_etf_bufwm
{
    uint32_t u;
    struct cavm_cst_shrd_etf_bufwm_s
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
    /* struct cavm_cst_shrd_etf_bufwm_s cn; */
};
typedef union cavm_cst_shrd_etf_bufwm cavm_cst_shrd_etf_bufwm_t;

#define CAVM_CST_SHRD_ETF_BUFWM CAVM_CST_SHRD_ETF_BUFWM_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_BUFWM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_BUFWM_FUNC(void)
{
    return 0x87a100050034ll;
}

#define typedef_CAVM_CST_SHRD_ETF_BUFWM cavm_cst_shrd_etf_bufwm_t
#define bustype_CAVM_CST_SHRD_ETF_BUFWM CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_BUFWM "CST_SHRD_ETF_BUFWM"
#define busnum_CAVM_CST_SHRD_ETF_BUFWM 0
#define arguments_CAVM_CST_SHRD_ETF_BUFWM -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_cbuflevel
 *
 * CST Shrd Etf Cbuflevel Register
 * The CBUFLEVEL register indicates the current fill level of the trace memory in units
 * of 32-bit words. When the TMC leaves Disabled state, this register dynamically
 * indicates the current fill level of trace memory. It retains its value on entering
 * Disabled state. It is not affected by the reprogramming of pointer registers in
 * Disabled state with the exception of RRD reads and RWD writes. Before leaving the
 * Disabled state software must program RRP with the same value as RWP. Without doing
 * this results in UNPREDICTABLE behavior.
 */
union cavm_cst_shrd_etf_cbuflevel
{
    uint32_t u;
    struct cavm_cst_shrd_etf_cbuflevel_s
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
    /* struct cavm_cst_shrd_etf_cbuflevel_s cn; */
};
typedef union cavm_cst_shrd_etf_cbuflevel cavm_cst_shrd_etf_cbuflevel_t;

#define CAVM_CST_SHRD_ETF_CBUFLEVEL CAVM_CST_SHRD_ETF_CBUFLEVEL_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_CBUFLEVEL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_CBUFLEVEL_FUNC(void)
{
    return 0x87a100050030ll;
}

#define typedef_CAVM_CST_SHRD_ETF_CBUFLEVEL cavm_cst_shrd_etf_cbuflevel_t
#define bustype_CAVM_CST_SHRD_ETF_CBUFLEVEL CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_CBUFLEVEL "CST_SHRD_ETF_CBUFLEVEL"
#define busnum_CAVM_CST_SHRD_ETF_CBUFLEVEL 0
#define arguments_CAVM_CST_SHRD_ETF_CBUFLEVEL -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_cidr0
 *
 * CST Shrd Etf Cidr0 Register
 * The CIDR0 register is part of the set of component identification registers.
 */
union cavm_cst_shrd_etf_cidr0
{
    uint32_t u;
    struct cavm_cst_shrd_etf_cidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etf_cidr0_s cn; */
};
typedef union cavm_cst_shrd_etf_cidr0 cavm_cst_shrd_etf_cidr0_t;

#define CAVM_CST_SHRD_ETF_CIDR0 CAVM_CST_SHRD_ETF_CIDR0_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_CIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_CIDR0_FUNC(void)
{
    return 0x87a100050ff0ll;
}

#define typedef_CAVM_CST_SHRD_ETF_CIDR0 cavm_cst_shrd_etf_cidr0_t
#define bustype_CAVM_CST_SHRD_ETF_CIDR0 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_CIDR0 "CST_SHRD_ETF_CIDR0"
#define busnum_CAVM_CST_SHRD_ETF_CIDR0 0
#define arguments_CAVM_CST_SHRD_ETF_CIDR0 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_cidr1
 *
 * CST Shrd Etf Cidr1 Register
 * The CIDR1 register is part of the set of component identification registers.
 */
union cavm_cst_shrd_etf_cidr1
{
    uint32_t u;
    struct cavm_cst_shrd_etf_cidr1_s
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
    /* struct cavm_cst_shrd_etf_cidr1_s cn; */
};
typedef union cavm_cst_shrd_etf_cidr1 cavm_cst_shrd_etf_cidr1_t;

#define CAVM_CST_SHRD_ETF_CIDR1 CAVM_CST_SHRD_ETF_CIDR1_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_CIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_CIDR1_FUNC(void)
{
    return 0x87a100050ff4ll;
}

#define typedef_CAVM_CST_SHRD_ETF_CIDR1 cavm_cst_shrd_etf_cidr1_t
#define bustype_CAVM_CST_SHRD_ETF_CIDR1 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_CIDR1 "CST_SHRD_ETF_CIDR1"
#define busnum_CAVM_CST_SHRD_ETF_CIDR1 0
#define arguments_CAVM_CST_SHRD_ETF_CIDR1 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_cidr2
 *
 * CST Shrd Etf Cidr2 Register
 * The CIDR2 register is part of the set of component identification registers.
 */
union cavm_cst_shrd_etf_cidr2
{
    uint32_t u;
    struct cavm_cst_shrd_etf_cidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etf_cidr2_s cn; */
};
typedef union cavm_cst_shrd_etf_cidr2 cavm_cst_shrd_etf_cidr2_t;

#define CAVM_CST_SHRD_ETF_CIDR2 CAVM_CST_SHRD_ETF_CIDR2_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_CIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_CIDR2_FUNC(void)
{
    return 0x87a100050ff8ll;
}

#define typedef_CAVM_CST_SHRD_ETF_CIDR2 cavm_cst_shrd_etf_cidr2_t
#define bustype_CAVM_CST_SHRD_ETF_CIDR2 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_CIDR2 "CST_SHRD_ETF_CIDR2"
#define busnum_CAVM_CST_SHRD_ETF_CIDR2 0
#define arguments_CAVM_CST_SHRD_ETF_CIDR2 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_cidr3
 *
 * CST Shrd Etf Cidr3 Register
 * The CIDR3 register is part of the set of component identification registers.
 */
union cavm_cst_shrd_etf_cidr3
{
    uint32_t u;
    struct cavm_cst_shrd_etf_cidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etf_cidr3_s cn; */
};
typedef union cavm_cst_shrd_etf_cidr3 cavm_cst_shrd_etf_cidr3_t;

#define CAVM_CST_SHRD_ETF_CIDR3 CAVM_CST_SHRD_ETF_CIDR3_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_CIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_CIDR3_FUNC(void)
{
    return 0x87a100050ffcll;
}

#define typedef_CAVM_CST_SHRD_ETF_CIDR3 cavm_cst_shrd_etf_cidr3_t
#define bustype_CAVM_CST_SHRD_ETF_CIDR3 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_CIDR3 "CST_SHRD_ETF_CIDR3"
#define busnum_CAVM_CST_SHRD_ETF_CIDR3 0
#define arguments_CAVM_CST_SHRD_ETF_CIDR3 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_claimclr
 *
 * CST Shrd Etf Claimclr Register
 * This register forms one half of the claim tag value. On writes, this location
 * enables individual bits to be cleared. On reads, it returns the current claim tag
 * value.
 */
union cavm_cst_shrd_etf_claimclr
{
    uint32_t u;
    struct cavm_cst_shrd_etf_claimclr_s
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
    /* struct cavm_cst_shrd_etf_claimclr_s cn; */
};
typedef union cavm_cst_shrd_etf_claimclr cavm_cst_shrd_etf_claimclr_t;

#define CAVM_CST_SHRD_ETF_CLAIMCLR CAVM_CST_SHRD_ETF_CLAIMCLR_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_CLAIMCLR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_CLAIMCLR_FUNC(void)
{
    return 0x87a100050fa4ll;
}

#define typedef_CAVM_CST_SHRD_ETF_CLAIMCLR cavm_cst_shrd_etf_claimclr_t
#define bustype_CAVM_CST_SHRD_ETF_CLAIMCLR CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_CLAIMCLR "CST_SHRD_ETF_CLAIMCLR"
#define busnum_CAVM_CST_SHRD_ETF_CLAIMCLR 0
#define arguments_CAVM_CST_SHRD_ETF_CLAIMCLR -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_claimset
 *
 * CST Shrd Etf Claimset Register
 * This register forms one half of the claim tag value. On writes, this location
 * enables individual bits to be set. On reads, it returns the number of bits that can
 * be set.
 */
union cavm_cst_shrd_etf_claimset
{
    uint32_t u;
    struct cavm_cst_shrd_etf_claimset_s
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
    /* struct cavm_cst_shrd_etf_claimset_s cn; */
};
typedef union cavm_cst_shrd_etf_claimset cavm_cst_shrd_etf_claimset_t;

#define CAVM_CST_SHRD_ETF_CLAIMSET CAVM_CST_SHRD_ETF_CLAIMSET_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_CLAIMSET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_CLAIMSET_FUNC(void)
{
    return 0x87a100050fa0ll;
}

#define typedef_CAVM_CST_SHRD_ETF_CLAIMSET cavm_cst_shrd_etf_claimset_t
#define bustype_CAVM_CST_SHRD_ETF_CLAIMSET CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_CLAIMSET "CST_SHRD_ETF_CLAIMSET"
#define busnum_CAVM_CST_SHRD_ETF_CLAIMSET 0
#define arguments_CAVM_CST_SHRD_ETF_CLAIMSET -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_ctl
 *
 * CST Shrd Etf Ctl Register
 * This register controls trace stream capture. Setting the CTL.TraceCaptEn bit to 1
 * enables the TMC to capture the trace data. When trace capture is enabled, the
 * formatter behavior is controlled by the FFCR register.
 */
union cavm_cst_shrd_etf_ctl
{
    uint32_t u;
    struct cavm_cst_shrd_etf_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 31; /**< [ 31:  1](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t tracecapten           : 1;  /**< [  0:  0](R/W) Trace capture enable. */
#else /* Word 0 - Little Endian */
        uint32_t tracecapten           : 1;  /**< [  0:  0](R/W) Trace capture enable. */
        uint32_t razwi_0               : 31; /**< [ 31:  1](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etf_ctl_s cn; */
};
typedef union cavm_cst_shrd_etf_ctl cavm_cst_shrd_etf_ctl_t;

#define CAVM_CST_SHRD_ETF_CTL CAVM_CST_SHRD_ETF_CTL_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_CTL_FUNC(void)
{
    return 0x87a100050020ll;
}

#define typedef_CAVM_CST_SHRD_ETF_CTL cavm_cst_shrd_etf_ctl_t
#define bustype_CAVM_CST_SHRD_ETF_CTL CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_CTL "CST_SHRD_ETF_CTL"
#define busnum_CAVM_CST_SHRD_ETF_CTL 0
#define arguments_CAVM_CST_SHRD_ETF_CTL -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_devid
 *
 * CST Shrd Etf Devid Register
 * This register is IMPLEMENTATION DEFINED for each Part Number and Designer. The
 * register indicates the capabilities of the component.
 */
union cavm_cst_shrd_etf_devid
{
    uint32_t u;
    struct cavm_cst_shrd_etf_devid_s
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
    /* struct cavm_cst_shrd_etf_devid_s cn; */
};
typedef union cavm_cst_shrd_etf_devid cavm_cst_shrd_etf_devid_t;

#define CAVM_CST_SHRD_ETF_DEVID CAVM_CST_SHRD_ETF_DEVID_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_DEVID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_DEVID_FUNC(void)
{
    return 0x87a100050fc8ll;
}

#define typedef_CAVM_CST_SHRD_ETF_DEVID cavm_cst_shrd_etf_devid_t
#define bustype_CAVM_CST_SHRD_ETF_DEVID CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_DEVID "CST_SHRD_ETF_DEVID"
#define busnum_CAVM_CST_SHRD_ETF_DEVID 0
#define arguments_CAVM_CST_SHRD_ETF_DEVID -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_devid1
 *
 * CST Shrd Etf Devid1 Register
 * Contains an IMPLEMENTATION DEFINED value.
 */
union cavm_cst_shrd_etf_devid1
{
    uint32_t u;
    struct cavm_cst_shrd_etf_devid1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t rmc                   : 1;  /**< [  0:  0](RO) Register management mode. TMC implements register management mode 1. */
#else /* Word 0 - Little Endian */
        uint32_t rmc                   : 1;  /**< [  0:  0](RO) Register management mode. TMC implements register management mode 1. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etf_devid1_s cn; */
};
typedef union cavm_cst_shrd_etf_devid1 cavm_cst_shrd_etf_devid1_t;

#define CAVM_CST_SHRD_ETF_DEVID1 CAVM_CST_SHRD_ETF_DEVID1_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_DEVID1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_DEVID1_FUNC(void)
{
    return 0x87a100050fc4ll;
}

#define typedef_CAVM_CST_SHRD_ETF_DEVID1 cavm_cst_shrd_etf_devid1_t
#define bustype_CAVM_CST_SHRD_ETF_DEVID1 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_DEVID1 "CST_SHRD_ETF_DEVID1"
#define busnum_CAVM_CST_SHRD_ETF_DEVID1 0
#define arguments_CAVM_CST_SHRD_ETF_DEVID1 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_devtype
 *
 * CST Shrd Etf Devtype Register
 * A debugger can use this register to get information about a component that has an
 * unrecognized Part number.
 */
union cavm_cst_shrd_etf_devtype
{
    uint32_t u;
    struct cavm_cst_shrd_etf_devtype_s
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
    /* struct cavm_cst_shrd_etf_devtype_s cn; */
};
typedef union cavm_cst_shrd_etf_devtype cavm_cst_shrd_etf_devtype_t;

#define CAVM_CST_SHRD_ETF_DEVTYPE CAVM_CST_SHRD_ETF_DEVTYPE_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_DEVTYPE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_DEVTYPE_FUNC(void)
{
    return 0x87a100050fccll;
}

#define typedef_CAVM_CST_SHRD_ETF_DEVTYPE cavm_cst_shrd_etf_devtype_t
#define bustype_CAVM_CST_SHRD_ETF_DEVTYPE CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_DEVTYPE "CST_SHRD_ETF_DEVTYPE"
#define busnum_CAVM_CST_SHRD_ETF_DEVTYPE 0
#define arguments_CAVM_CST_SHRD_ETF_DEVTYPE -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_ffcr
 *
 * CST Shrd Etf Ffcr Register
 * The FFCR controls the generation of stop, trigger and flush events. The insertion of
 * a flush completion packet and the insertion of a trigger packet in the formatted
 * trace is enabled here. Also one of the 2 formatter modes for bypass mode and normal
 * mode can be changed here when the formatter has stopped.
 */
union cavm_cst_shrd_etf_ffcr
{
    uint32_t u;
    struct cavm_cst_shrd_etf_ffcr_s
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
    /* struct cavm_cst_shrd_etf_ffcr_s cn; */
};
typedef union cavm_cst_shrd_etf_ffcr cavm_cst_shrd_etf_ffcr_t;

#define CAVM_CST_SHRD_ETF_FFCR CAVM_CST_SHRD_ETF_FFCR_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_FFCR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_FFCR_FUNC(void)
{
    return 0x87a100050304ll;
}

#define typedef_CAVM_CST_SHRD_ETF_FFCR cavm_cst_shrd_etf_ffcr_t
#define bustype_CAVM_CST_SHRD_ETF_FFCR CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_FFCR "CST_SHRD_ETF_FFCR"
#define busnum_CAVM_CST_SHRD_ETF_FFCR 0
#define arguments_CAVM_CST_SHRD_ETF_FFCR -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_ffsr
 *
 * CST Shrd Etf Ffsr Register
 * This register indicates the status of the Formatter, and the status of Flush request.
 */
union cavm_cst_shrd_etf_ffsr
{
    uint32_t u;
    struct cavm_cst_shrd_etf_ffsr_s
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
    /* struct cavm_cst_shrd_etf_ffsr_s cn; */
};
typedef union cavm_cst_shrd_etf_ffsr cavm_cst_shrd_etf_ffsr_t;

#define CAVM_CST_SHRD_ETF_FFSR CAVM_CST_SHRD_ETF_FFSR_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_FFSR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_FFSR_FUNC(void)
{
    return 0x87a100050300ll;
}

#define typedef_CAVM_CST_SHRD_ETF_FFSR cavm_cst_shrd_etf_ffsr_t
#define bustype_CAVM_CST_SHRD_ETF_FFSR CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_FFSR "CST_SHRD_ETF_FFSR"
#define busnum_CAVM_CST_SHRD_ETF_FFSR 0
#define arguments_CAVM_CST_SHRD_ETF_FFSR -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_itatbctr0
 *
 * CST Shrd Etf Itatbctr0 Register
 * This register captures the values of ATB slave inputs atvalid_s, afready_s,
 * atwakeup_s, and atbytes_s in integration mode. In functional mode, this register
 * behaves as RAZ/WI. In integration mode, writes to this register are ignored and the
 * reads return the value of corresponding input pins. The width of this register is
 * given by: 8+log2(ATB DATA WIDTH/8).
 */
union cavm_cst_shrd_etf_itatbctr0
{
    uint32_t u;
    struct cavm_cst_shrd_etf_itatbctr0_s
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
    /* struct cavm_cst_shrd_etf_itatbctr0_s cn; */
};
typedef union cavm_cst_shrd_etf_itatbctr0 cavm_cst_shrd_etf_itatbctr0_t;

#define CAVM_CST_SHRD_ETF_ITATBCTR0 CAVM_CST_SHRD_ETF_ITATBCTR0_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_ITATBCTR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_ITATBCTR0_FUNC(void)
{
    return 0x87a100050ef8ll;
}

#define typedef_CAVM_CST_SHRD_ETF_ITATBCTR0 cavm_cst_shrd_etf_itatbctr0_t
#define bustype_CAVM_CST_SHRD_ETF_ITATBCTR0 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_ITATBCTR0 "CST_SHRD_ETF_ITATBCTR0"
#define busnum_CAVM_CST_SHRD_ETF_ITATBCTR0 0
#define arguments_CAVM_CST_SHRD_ETF_ITATBCTR0 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_itatbctr1
 *
 * CST Shrd Etf Itatbctr1 Register
 * This register captures the value of the atid_s[6:0] input in integration mode. In
 * functional mode, this register behaves as RAZ/WI. In integration mode, writes to
 * this register are ignored and the reads return the value of atid_s input.
 */
union cavm_cst_shrd_etf_itatbctr1
{
    uint32_t u;
    struct cavm_cst_shrd_etf_itatbctr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 25; /**< [ 31:  7](RO) Read-As-Zero, Writes Ignored. */
        uint32_t atids                 : 7;  /**< [  6:  0](RO) Returns the value of atid_s[6:0] input in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t atids                 : 7;  /**< [  6:  0](RO) Returns the value of atid_s[6:0] input in integration mode. */
        uint32_t razwi_0               : 25; /**< [ 31:  7](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etf_itatbctr1_s cn; */
};
typedef union cavm_cst_shrd_etf_itatbctr1 cavm_cst_shrd_etf_itatbctr1_t;

#define CAVM_CST_SHRD_ETF_ITATBCTR1 CAVM_CST_SHRD_ETF_ITATBCTR1_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_ITATBCTR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_ITATBCTR1_FUNC(void)
{
    return 0x87a100050ef4ll;
}

#define typedef_CAVM_CST_SHRD_ETF_ITATBCTR1 cavm_cst_shrd_etf_itatbctr1_t
#define bustype_CAVM_CST_SHRD_ETF_ITATBCTR1 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_ITATBCTR1 "CST_SHRD_ETF_ITATBCTR1"
#define busnum_CAVM_CST_SHRD_ETF_ITATBCTR1 0
#define arguments_CAVM_CST_SHRD_ETF_ITATBCTR1 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_itatbctr2
 *
 * CST Shrd Etf Itatbctr2 Register
 * This register enables control of ATB slave outputs atready_s, afvalid_s, and
 * syncreq_s in integration mode. In functional mode, this register behaves as RAZ/WI.
 * In integration mode, the value that is written to any bit of this register is driven
 * on the output pin that is controlled by that bit and the reads return 0x0.
 */
union cavm_cst_shrd_etf_itatbctr2
{
    uint32_t u;
    struct cavm_cst_shrd_etf_itatbctr2_s
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
    /* struct cavm_cst_shrd_etf_itatbctr2_s cn; */
};
typedef union cavm_cst_shrd_etf_itatbctr2 cavm_cst_shrd_etf_itatbctr2_t;

#define CAVM_CST_SHRD_ETF_ITATBCTR2 CAVM_CST_SHRD_ETF_ITATBCTR2_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_ITATBCTR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_ITATBCTR2_FUNC(void)
{
    return 0x87a100050ef0ll;
}

#define typedef_CAVM_CST_SHRD_ETF_ITATBCTR2 cavm_cst_shrd_etf_itatbctr2_t
#define bustype_CAVM_CST_SHRD_ETF_ITATBCTR2 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_ITATBCTR2 "CST_SHRD_ETF_ITATBCTR2"
#define busnum_CAVM_CST_SHRD_ETF_ITATBCTR2 0
#define arguments_CAVM_CST_SHRD_ETF_ITATBCTR2 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_itatbdata0
 *
 * CST Shrd Etf Itatbdata0 Register
 * This register captures the value of atdata_s input in integration mode. In
 * functional mode, this register behaves as RAZ/WI. In integration mode, writes to
 * this register are ignored and the reads return the value of corresponding atdata_s
 * bits. The width of this register is given by: 1+(ATB DATA WIDTH)/8.
 */
union cavm_cst_shrd_etf_itatbdata0
{
    uint32_t u;
    struct cavm_cst_shrd_etf_itatbdata0_s
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
    /* struct cavm_cst_shrd_etf_itatbdata0_s cn; */
};
typedef union cavm_cst_shrd_etf_itatbdata0 cavm_cst_shrd_etf_itatbdata0_t;

#define CAVM_CST_SHRD_ETF_ITATBDATA0 CAVM_CST_SHRD_ETF_ITATBDATA0_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_ITATBDATA0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_ITATBDATA0_FUNC(void)
{
    return 0x87a100050eecll;
}

#define typedef_CAVM_CST_SHRD_ETF_ITATBDATA0 cavm_cst_shrd_etf_itatbdata0_t
#define bustype_CAVM_CST_SHRD_ETF_ITATBDATA0 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_ITATBDATA0 "CST_SHRD_ETF_ITATBDATA0"
#define busnum_CAVM_CST_SHRD_ETF_ITATBDATA0 0
#define arguments_CAVM_CST_SHRD_ETF_ITATBDATA0 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_itatbmctr0
 *
 * CST Shrd Etf Itatbmctr0 Register
 * This register enables control of the ATB master outputs atbytes_m, atwakeup_m,
 * afready_m, and atvalid_m in integration mode. In functional mode, this register
 * behaves as RAZ/WI. In integration mode, the value that is written to any bit of this
 * register is driven on the output pin that is controlled by that bit, and the reads
 * return 0x0.
 */
union cavm_cst_shrd_etf_itatbmctr0
{
    uint32_t u;
    struct cavm_cst_shrd_etf_itatbmctr0_s
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
    /* struct cavm_cst_shrd_etf_itatbmctr0_s cn; */
};
typedef union cavm_cst_shrd_etf_itatbmctr0 cavm_cst_shrd_etf_itatbmctr0_t;

#define CAVM_CST_SHRD_ETF_ITATBMCTR0 CAVM_CST_SHRD_ETF_ITATBMCTR0_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_ITATBMCTR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_ITATBMCTR0_FUNC(void)
{
    return 0x87a100050edcll;
}

#define typedef_CAVM_CST_SHRD_ETF_ITATBMCTR0 cavm_cst_shrd_etf_itatbmctr0_t
#define bustype_CAVM_CST_SHRD_ETF_ITATBMCTR0 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_ITATBMCTR0 "CST_SHRD_ETF_ITATBMCTR0"
#define busnum_CAVM_CST_SHRD_ETF_ITATBMCTR0 0
#define arguments_CAVM_CST_SHRD_ETF_ITATBMCTR0 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_itatbmctr1
 *
 * CST Shrd Etf Itatbmctr1 Register
 * This register enables control of the atid_m output in integration mode. In
 * functional mode, this register behaves as RAZ/WI. In integration mode, the value
 * that is written to this register is driven on the atid_m output and the reads return
 * 0x0.
 */
union cavm_cst_shrd_etf_itatbmctr1
{
    uint32_t u;
    struct cavm_cst_shrd_etf_itatbmctr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 25; /**< [ 31:  7](WO) Read-As-Zero, Writes Ignored. */
        uint32_t atidm                 : 7;  /**< [  6:  0](WO) Controls the value of the atid_m[6:0] output in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t atidm                 : 7;  /**< [  6:  0](WO) Controls the value of the atid_m[6:0] output in integration mode. */
        uint32_t razwi_0               : 25; /**< [ 31:  7](WO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etf_itatbmctr1_s cn; */
};
typedef union cavm_cst_shrd_etf_itatbmctr1 cavm_cst_shrd_etf_itatbmctr1_t;

#define CAVM_CST_SHRD_ETF_ITATBMCTR1 CAVM_CST_SHRD_ETF_ITATBMCTR1_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_ITATBMCTR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_ITATBMCTR1_FUNC(void)
{
    return 0x87a100050ed8ll;
}

#define typedef_CAVM_CST_SHRD_ETF_ITATBMCTR1 cavm_cst_shrd_etf_itatbmctr1_t
#define bustype_CAVM_CST_SHRD_ETF_ITATBMCTR1 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_ITATBMCTR1 "CST_SHRD_ETF_ITATBMCTR1"
#define busnum_CAVM_CST_SHRD_ETF_ITATBMCTR1 0
#define arguments_CAVM_CST_SHRD_ETF_ITATBMCTR1 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_itatbmctr2
 *
 * CST Shrd Etf Itatbmctr2 Register
 * This register captures the values of ATB master inputs atready_m, afvalid_m, and
 * syncreq_m in integration mode. In functional mode, this register behaves as RAZ/WI.
 */
union cavm_cst_shrd_etf_itatbmctr2
{
    uint32_t u;
    struct cavm_cst_shrd_etf_itatbmctr2_s
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
    /* struct cavm_cst_shrd_etf_itatbmctr2_s cn; */
};
typedef union cavm_cst_shrd_etf_itatbmctr2 cavm_cst_shrd_etf_itatbmctr2_t;

#define CAVM_CST_SHRD_ETF_ITATBMCTR2 CAVM_CST_SHRD_ETF_ITATBMCTR2_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_ITATBMCTR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_ITATBMCTR2_FUNC(void)
{
    return 0x87a100050ed4ll;
}

#define typedef_CAVM_CST_SHRD_ETF_ITATBMCTR2 cavm_cst_shrd_etf_itatbmctr2_t
#define bustype_CAVM_CST_SHRD_ETF_ITATBMCTR2 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_ITATBMCTR2 "CST_SHRD_ETF_ITATBMCTR2"
#define busnum_CAVM_CST_SHRD_ETF_ITATBMCTR2 0
#define arguments_CAVM_CST_SHRD_ETF_ITATBMCTR2 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_itatbmdata0
 *
 * CST Shrd Etf Itatbmdata0 Register
 * This register enables control of the atdata_m output in integration mode. In
 * functional mode, this register behaves as RAZ/WI. In integration mode, the value
 * that is written to any given bit is driven on the output pin that is controlled by
 * that bit and the reads return 0x0. The width of this register is given by 1+(ATB
 * DATA WIDTH)/8.
 */
union cavm_cst_shrd_etf_itatbmdata0
{
    uint32_t u;
    struct cavm_cst_shrd_etf_itatbmdata0_s
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
    /* struct cavm_cst_shrd_etf_itatbmdata0_s cn; */
};
typedef union cavm_cst_shrd_etf_itatbmdata0 cavm_cst_shrd_etf_itatbmdata0_t;

#define CAVM_CST_SHRD_ETF_ITATBMDATA0 CAVM_CST_SHRD_ETF_ITATBMDATA0_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_ITATBMDATA0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_ITATBMDATA0_FUNC(void)
{
    return 0x87a100050ed0ll;
}

#define typedef_CAVM_CST_SHRD_ETF_ITATBMDATA0 cavm_cst_shrd_etf_itatbmdata0_t
#define bustype_CAVM_CST_SHRD_ETF_ITATBMDATA0 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_ITATBMDATA0 "CST_SHRD_ETF_ITATBMDATA0"
#define busnum_CAVM_CST_SHRD_ETF_ITATBMDATA0 0
#define arguments_CAVM_CST_SHRD_ETF_ITATBMDATA0 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_itctrl
 *
 * CST Shrd Etf Itctrl Register
 * The Integration Mode Control register is used to enable topology detection.
 */
union cavm_cst_shrd_etf_itctrl
{
    uint32_t u;
    struct cavm_cst_shrd_etf_itctrl_s
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
    /* struct cavm_cst_shrd_etf_itctrl_s cn; */
};
typedef union cavm_cst_shrd_etf_itctrl cavm_cst_shrd_etf_itctrl_t;

#define CAVM_CST_SHRD_ETF_ITCTRL CAVM_CST_SHRD_ETF_ITCTRL_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_ITCTRL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_ITCTRL_FUNC(void)
{
    return 0x87a100050f00ll;
}

#define typedef_CAVM_CST_SHRD_ETF_ITCTRL cavm_cst_shrd_etf_itctrl_t
#define bustype_CAVM_CST_SHRD_ETF_ITCTRL CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_ITCTRL "CST_SHRD_ETF_ITCTRL"
#define busnum_CAVM_CST_SHRD_ETF_ITCTRL 0
#define arguments_CAVM_CST_SHRD_ETF_ITCTRL -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_itevtintr
 *
 * CST Shrd Etf Itevtintr Register
 * This register controls the values of event and interrupt outputs in integration
 * mode. In functional mode, this register behaves as RAZ/WI. In integration mode, the
 * value that is written to any bit of this register is driven on the output pin that
 * is controlled by that bit and the reads return 0x0.
 */
union cavm_cst_shrd_etf_itevtintr
{
    uint32_t u;
    struct cavm_cst_shrd_etf_itevtintr_s
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
    /* struct cavm_cst_shrd_etf_itevtintr_s cn; */
};
typedef union cavm_cst_shrd_etf_itevtintr cavm_cst_shrd_etf_itevtintr_t;

#define CAVM_CST_SHRD_ETF_ITEVTINTR CAVM_CST_SHRD_ETF_ITEVTINTR_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_ITEVTINTR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_ITEVTINTR_FUNC(void)
{
    return 0x87a100050ee0ll;
}

#define typedef_CAVM_CST_SHRD_ETF_ITEVTINTR cavm_cst_shrd_etf_itevtintr_t
#define bustype_CAVM_CST_SHRD_ETF_ITEVTINTR CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_ITEVTINTR "CST_SHRD_ETF_ITEVTINTR"
#define busnum_CAVM_CST_SHRD_ETF_ITEVTINTR 0
#define arguments_CAVM_CST_SHRD_ETF_ITEVTINTR -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_ittrflin
 *
 * CST Shrd Etf Ittrflin Register
 * This register captures the values of the flushin and trigin inputs in integration
 * mode. In functional mode, this register behaves as RAZ/WI.
 */
union cavm_cst_shrd_etf_ittrflin
{
    uint32_t u;
    struct cavm_cst_shrd_etf_ittrflin_s
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
    /* struct cavm_cst_shrd_etf_ittrflin_s cn; */
};
typedef union cavm_cst_shrd_etf_ittrflin cavm_cst_shrd_etf_ittrflin_t;

#define CAVM_CST_SHRD_ETF_ITTRFLIN CAVM_CST_SHRD_ETF_ITTRFLIN_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_ITTRFLIN_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_ITTRFLIN_FUNC(void)
{
    return 0x87a100050ee8ll;
}

#define typedef_CAVM_CST_SHRD_ETF_ITTRFLIN cavm_cst_shrd_etf_ittrflin_t
#define bustype_CAVM_CST_SHRD_ETF_ITTRFLIN CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_ITTRFLIN "CST_SHRD_ETF_ITTRFLIN"
#define busnum_CAVM_CST_SHRD_ETF_ITTRFLIN 0
#define arguments_CAVM_CST_SHRD_ETF_ITTRFLIN -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_lbuflevel
 *
 * CST Shrd Etf Lbuflevel Register
 * Reading this register returns the maximum fill level of the trace memory in 32-bit
 * words since this register was last read. Reading this register also results in its
 * contents being updated to the current fill level. When entering Disabled state, it
 * retains its last value. While in Disabled state, reads from this register do not
 * affect its value. When exiting Disabled state, the LBUFLEVEL register is updated to
 * the current fill level.
 */
union cavm_cst_shrd_etf_lbuflevel
{
    uint32_t u;
    struct cavm_cst_shrd_etf_lbuflevel_s
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
    /* struct cavm_cst_shrd_etf_lbuflevel_s cn; */
};
typedef union cavm_cst_shrd_etf_lbuflevel cavm_cst_shrd_etf_lbuflevel_t;

#define CAVM_CST_SHRD_ETF_LBUFLEVEL CAVM_CST_SHRD_ETF_LBUFLEVEL_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_LBUFLEVEL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_LBUFLEVEL_FUNC(void)
{
    return 0x87a10005002cll;
}

#define typedef_CAVM_CST_SHRD_ETF_LBUFLEVEL cavm_cst_shrd_etf_lbuflevel_t
#define bustype_CAVM_CST_SHRD_ETF_LBUFLEVEL CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_LBUFLEVEL "CST_SHRD_ETF_LBUFLEVEL"
#define busnum_CAVM_CST_SHRD_ETF_LBUFLEVEL 0
#define arguments_CAVM_CST_SHRD_ETF_LBUFLEVEL -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_mode
 *
 * CST Shrd Etf Mode Register
 * This register controls the TMC operating mode. The operating mode can only be
 * changed when the TMC is in Disabled state. Attempting to write to this register in
 * any other state results in UNPREDICTABLE behavior. The operating mode is ignored
 * when in Disabled state.
 */
union cavm_cst_shrd_etf_mode
{
    uint32_t u;
    struct cavm_cst_shrd_etf_mode_s
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
    /* struct cavm_cst_shrd_etf_mode_s cn; */
};
typedef union cavm_cst_shrd_etf_mode cavm_cst_shrd_etf_mode_t;

#define CAVM_CST_SHRD_ETF_MODE CAVM_CST_SHRD_ETF_MODE_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_MODE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_MODE_FUNC(void)
{
    return 0x87a100050028ll;
}

#define typedef_CAVM_CST_SHRD_ETF_MODE cavm_cst_shrd_etf_mode_t
#define bustype_CAVM_CST_SHRD_ETF_MODE CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_MODE "CST_SHRD_ETF_MODE"
#define busnum_CAVM_CST_SHRD_ETF_MODE 0
#define arguments_CAVM_CST_SHRD_ETF_MODE -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_pidr0
 *
 * CST Shrd Etf Pidr0 Register
 * The PIDR0 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_etf_pidr0
{
    uint32_t u;
    struct cavm_cst_shrd_etf_pidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number (lower 8 bits). Returns 0xea, indicating TMC ETF. */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number (lower 8 bits). Returns 0xea, indicating TMC ETF. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etf_pidr0_s cn; */
};
typedef union cavm_cst_shrd_etf_pidr0 cavm_cst_shrd_etf_pidr0_t;

#define CAVM_CST_SHRD_ETF_PIDR0 CAVM_CST_SHRD_ETF_PIDR0_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_PIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_PIDR0_FUNC(void)
{
    return 0x87a100050fe0ll;
}

#define typedef_CAVM_CST_SHRD_ETF_PIDR0 cavm_cst_shrd_etf_pidr0_t
#define bustype_CAVM_CST_SHRD_ETF_PIDR0 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_PIDR0 "CST_SHRD_ETF_PIDR0"
#define busnum_CAVM_CST_SHRD_ETF_PIDR0 0
#define arguments_CAVM_CST_SHRD_ETF_PIDR0 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_pidr1
 *
 * CST Shrd Etf Pidr1 Register
 * The PIDR1 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_etf_pidr1
{
    uint32_t u;
    struct cavm_cst_shrd_etf_pidr1_s
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
    /* struct cavm_cst_shrd_etf_pidr1_s cn; */
};
typedef union cavm_cst_shrd_etf_pidr1 cavm_cst_shrd_etf_pidr1_t;

#define CAVM_CST_SHRD_ETF_PIDR1 CAVM_CST_SHRD_ETF_PIDR1_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_PIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_PIDR1_FUNC(void)
{
    return 0x87a100050fe4ll;
}

#define typedef_CAVM_CST_SHRD_ETF_PIDR1 cavm_cst_shrd_etf_pidr1_t
#define bustype_CAVM_CST_SHRD_ETF_PIDR1 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_PIDR1 "CST_SHRD_ETF_PIDR1"
#define busnum_CAVM_CST_SHRD_ETF_PIDR1 0
#define arguments_CAVM_CST_SHRD_ETF_PIDR1 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_pidr2
 *
 * CST Shrd Etf Pidr2 Register
 * The PIDR2 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_etf_pidr2
{
    uint32_t u;
    struct cavm_cst_shrd_etf_pidr2_s
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
    /* struct cavm_cst_shrd_etf_pidr2_s cn; */
};
typedef union cavm_cst_shrd_etf_pidr2 cavm_cst_shrd_etf_pidr2_t;

#define CAVM_CST_SHRD_ETF_PIDR2 CAVM_CST_SHRD_ETF_PIDR2_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_PIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_PIDR2_FUNC(void)
{
    return 0x87a100050fe8ll;
}

#define typedef_CAVM_CST_SHRD_ETF_PIDR2 cavm_cst_shrd_etf_pidr2_t
#define bustype_CAVM_CST_SHRD_ETF_PIDR2 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_PIDR2 "CST_SHRD_ETF_PIDR2"
#define busnum_CAVM_CST_SHRD_ETF_PIDR2 0
#define arguments_CAVM_CST_SHRD_ETF_PIDR2 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_pidr3
 *
 * CST Shrd Etf Pidr3 Register
 * The PIDR3 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_etf_pidr3
{
    uint32_t u;
    struct cavm_cst_shrd_etf_pidr3_s
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
    /* struct cavm_cst_shrd_etf_pidr3_s cn; */
};
typedef union cavm_cst_shrd_etf_pidr3 cavm_cst_shrd_etf_pidr3_t;

#define CAVM_CST_SHRD_ETF_PIDR3 CAVM_CST_SHRD_ETF_PIDR3_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_PIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_PIDR3_FUNC(void)
{
    return 0x87a100050fecll;
}

#define typedef_CAVM_CST_SHRD_ETF_PIDR3 cavm_cst_shrd_etf_pidr3_t
#define bustype_CAVM_CST_SHRD_ETF_PIDR3 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_PIDR3 "CST_SHRD_ETF_PIDR3"
#define busnum_CAVM_CST_SHRD_ETF_PIDR3 0
#define arguments_CAVM_CST_SHRD_ETF_PIDR3 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_pidr4
 *
 * CST Shrd Etf Pidr4 Register
 * The PIDR4 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_etf_pidr4
{
    uint32_t u;
    struct cavm_cst_shrd_etf_pidr4_s
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
    /* struct cavm_cst_shrd_etf_pidr4_s cn; */
};
typedef union cavm_cst_shrd_etf_pidr4 cavm_cst_shrd_etf_pidr4_t;

#define CAVM_CST_SHRD_ETF_PIDR4 CAVM_CST_SHRD_ETF_PIDR4_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_PIDR4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_PIDR4_FUNC(void)
{
    return 0x87a100050fd0ll;
}

#define typedef_CAVM_CST_SHRD_ETF_PIDR4 cavm_cst_shrd_etf_pidr4_t
#define bustype_CAVM_CST_SHRD_ETF_PIDR4 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_PIDR4 "CST_SHRD_ETF_PIDR4"
#define busnum_CAVM_CST_SHRD_ETF_PIDR4 0
#define arguments_CAVM_CST_SHRD_ETF_PIDR4 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_pidr5
 *
 * CST Shrd Etf Pidr5 Register
 * The PIDR5 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_etf_pidr5
{
    uint32_t u;
    struct cavm_cst_shrd_etf_pidr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etf_pidr5_s cn; */
};
typedef union cavm_cst_shrd_etf_pidr5 cavm_cst_shrd_etf_pidr5_t;

#define CAVM_CST_SHRD_ETF_PIDR5 CAVM_CST_SHRD_ETF_PIDR5_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_PIDR5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_PIDR5_FUNC(void)
{
    return 0x87a100050fd4ll;
}

#define typedef_CAVM_CST_SHRD_ETF_PIDR5 cavm_cst_shrd_etf_pidr5_t
#define bustype_CAVM_CST_SHRD_ETF_PIDR5 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_PIDR5 "CST_SHRD_ETF_PIDR5"
#define busnum_CAVM_CST_SHRD_ETF_PIDR5 0
#define arguments_CAVM_CST_SHRD_ETF_PIDR5 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_pidr6
 *
 * CST Shrd Etf Pidr6 Register
 * The PIDR6 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_etf_pidr6
{
    uint32_t u;
    struct cavm_cst_shrd_etf_pidr6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etf_pidr6_s cn; */
};
typedef union cavm_cst_shrd_etf_pidr6 cavm_cst_shrd_etf_pidr6_t;

#define CAVM_CST_SHRD_ETF_PIDR6 CAVM_CST_SHRD_ETF_PIDR6_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_PIDR6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_PIDR6_FUNC(void)
{
    return 0x87a100050fd8ll;
}

#define typedef_CAVM_CST_SHRD_ETF_PIDR6 cavm_cst_shrd_etf_pidr6_t
#define bustype_CAVM_CST_SHRD_ETF_PIDR6 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_PIDR6 "CST_SHRD_ETF_PIDR6"
#define busnum_CAVM_CST_SHRD_ETF_PIDR6 0
#define arguments_CAVM_CST_SHRD_ETF_PIDR6 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_pidr7
 *
 * CST Shrd Etf Pidr7 Register
 * The PIDR7 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_etf_pidr7
{
    uint32_t u;
    struct cavm_cst_shrd_etf_pidr7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etf_pidr7_s cn; */
};
typedef union cavm_cst_shrd_etf_pidr7 cavm_cst_shrd_etf_pidr7_t;

#define CAVM_CST_SHRD_ETF_PIDR7 CAVM_CST_SHRD_ETF_PIDR7_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_PIDR7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_PIDR7_FUNC(void)
{
    return 0x87a100050fdcll;
}

#define typedef_CAVM_CST_SHRD_ETF_PIDR7 cavm_cst_shrd_etf_pidr7_t
#define bustype_CAVM_CST_SHRD_ETF_PIDR7 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_PIDR7 "CST_SHRD_ETF_PIDR7"
#define busnum_CAVM_CST_SHRD_ETF_PIDR7 0
#define arguments_CAVM_CST_SHRD_ETF_PIDR7 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_pscr
 *
 * CST Shrd Etf Pscr Register
 * This register determines the reload value of the Periodic Synchronization Counter.
 * This counter enables the frequency of sync packets to be optimized to the trace
 * capture buffer size. The default behavior of the counter is to generate periodic
 * synchronization requests, syncreq_s, on the ATB slave interface.
 */
union cavm_cst_shrd_etf_pscr
{
    uint32_t u;
    struct cavm_cst_shrd_etf_pscr_s
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
    /* struct cavm_cst_shrd_etf_pscr_s cn; */
};
typedef union cavm_cst_shrd_etf_pscr cavm_cst_shrd_etf_pscr_t;

#define CAVM_CST_SHRD_ETF_PSCR CAVM_CST_SHRD_ETF_PSCR_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_PSCR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_PSCR_FUNC(void)
{
    return 0x87a100050308ll;
}

#define typedef_CAVM_CST_SHRD_ETF_PSCR cavm_cst_shrd_etf_pscr_t
#define bustype_CAVM_CST_SHRD_ETF_PSCR CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_PSCR "CST_SHRD_ETF_PSCR"
#define busnum_CAVM_CST_SHRD_ETF_PSCR 0
#define arguments_CAVM_CST_SHRD_ETF_PSCR -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_rrd
 *
 * CST Shrd Etf Rrd Register
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
union cavm_cst_shrd_etf_rrd
{
    uint32_t u;
    struct cavm_cst_shrd_etf_rrd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rrd                   : 32; /**< [ 31:  0](RO) Returns the data read from trace memory. */
#else /* Word 0 - Little Endian */
        uint32_t rrd                   : 32; /**< [ 31:  0](RO) Returns the data read from trace memory. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etf_rrd_s cn; */
};
typedef union cavm_cst_shrd_etf_rrd cavm_cst_shrd_etf_rrd_t;

#define CAVM_CST_SHRD_ETF_RRD CAVM_CST_SHRD_ETF_RRD_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_RRD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_RRD_FUNC(void)
{
    return 0x87a100050010ll;
}

#define typedef_CAVM_CST_SHRD_ETF_RRD cavm_cst_shrd_etf_rrd_t
#define bustype_CAVM_CST_SHRD_ETF_RRD CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_RRD "CST_SHRD_ETF_RRD"
#define busnum_CAVM_CST_SHRD_ETF_RRD 0
#define arguments_CAVM_CST_SHRD_ETF_RRD -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_rrp
 *
 * CST Shrd Etf Rrp Register
 * The RAM Read Pointer Register contains the value of the read pointer that is used to
 * read entries from trace memory over the APB interface. Software must program it
 * before enabling trace capture. Software must program it with the same value as RWP
 * before enabling trace capture.
 */
union cavm_cst_shrd_etf_rrp
{
    uint32_t u;
    struct cavm_cst_shrd_etf_rrp_s
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
    /* struct cavm_cst_shrd_etf_rrp_s cn; */
};
typedef union cavm_cst_shrd_etf_rrp cavm_cst_shrd_etf_rrp_t;

#define CAVM_CST_SHRD_ETF_RRP CAVM_CST_SHRD_ETF_RRP_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_RRP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_RRP_FUNC(void)
{
    return 0x87a100050014ll;
}

#define typedef_CAVM_CST_SHRD_ETF_RRP cavm_cst_shrd_etf_rrp_t
#define bustype_CAVM_CST_SHRD_ETF_RRP CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_RRP "CST_SHRD_ETF_RRP"
#define busnum_CAVM_CST_SHRD_ETF_RRP 0
#define arguments_CAVM_CST_SHRD_ETF_RRP -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_rsz
 *
 * CST Shrd Etf Rsz Register
 * Defines the size of trace memory in units of 32-bit words.
 */
union cavm_cst_shrd_etf_rsz
{
    uint32_t u;
    struct cavm_cst_shrd_etf_rsz_s
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
    /* struct cavm_cst_shrd_etf_rsz_s cn; */
};
typedef union cavm_cst_shrd_etf_rsz cavm_cst_shrd_etf_rsz_t;

#define CAVM_CST_SHRD_ETF_RSZ CAVM_CST_SHRD_ETF_RSZ_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_RSZ_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_RSZ_FUNC(void)
{
    return 0x87a100050004ll;
}

#define typedef_CAVM_CST_SHRD_ETF_RSZ cavm_cst_shrd_etf_rsz_t
#define bustype_CAVM_CST_SHRD_ETF_RSZ CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_RSZ "CST_SHRD_ETF_RSZ"
#define busnum_CAVM_CST_SHRD_ETF_RSZ 0
#define arguments_CAVM_CST_SHRD_ETF_RSZ -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_rwd
 *
 * CST Shrd Etf Rwd Register
 * The RAM Write Data register enables testing of trace memory connectivity to the TMC.
 * Writing this register allows data to be written to the trace memory at the location
 * pointed to by the RWP register when in the Disabled state. When ATB_DATA_WIDTH is
 * 32, 64 or 128 bit wide the memory width is twice as wide and a memory word holds 8,
 * 16 or 32 bytes. Multiple RWD writes must be performed to write a full memory word.
 * When a full memory width of data has been written via the RWD register, the data is
 * written to the trace memory and the RWP register is incremented to the next memory
 * word.
 */
union cavm_cst_shrd_etf_rwd
{
    uint32_t u;
    struct cavm_cst_shrd_etf_rwd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rwd                   : 32; /**< [ 31:  0](WO) Data written to this register is placed in the trace memory. */
#else /* Word 0 - Little Endian */
        uint32_t rwd                   : 32; /**< [ 31:  0](WO) Data written to this register is placed in the trace memory. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etf_rwd_s cn; */
};
typedef union cavm_cst_shrd_etf_rwd cavm_cst_shrd_etf_rwd_t;

#define CAVM_CST_SHRD_ETF_RWD CAVM_CST_SHRD_ETF_RWD_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_RWD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_RWD_FUNC(void)
{
    return 0x87a100050024ll;
}

#define typedef_CAVM_CST_SHRD_ETF_RWD cavm_cst_shrd_etf_rwd_t
#define bustype_CAVM_CST_SHRD_ETF_RWD CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_RWD "CST_SHRD_ETF_RWD"
#define busnum_CAVM_CST_SHRD_ETF_RWD 0
#define arguments_CAVM_CST_SHRD_ETF_RWD -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_rwp
 *
 * CST Shrd Etf Rwp Register
 * RAM Write Pointer Register sets the write pointer that is used to write entries into
 * the trace memory. Software must program it before enabling trace capture.
 */
union cavm_cst_shrd_etf_rwp
{
    uint32_t u;
    struct cavm_cst_shrd_etf_rwp_s
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
    /* struct cavm_cst_shrd_etf_rwp_s cn; */
};
typedef union cavm_cst_shrd_etf_rwp cavm_cst_shrd_etf_rwp_t;

#define CAVM_CST_SHRD_ETF_RWP CAVM_CST_SHRD_ETF_RWP_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_RWP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_RWP_FUNC(void)
{
    return 0x87a100050018ll;
}

#define typedef_CAVM_CST_SHRD_ETF_RWP cavm_cst_shrd_etf_rwp_t
#define bustype_CAVM_CST_SHRD_ETF_RWP CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_RWP "CST_SHRD_ETF_RWP"
#define busnum_CAVM_CST_SHRD_ETF_RWP 0
#define arguments_CAVM_CST_SHRD_ETF_RWP -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_sts
 *
 * CST Shrd Etf Sts Register
 * Indicates the status of the Trace Memory Controller. After a reset, software must
 * ignore all the fields of this register except STS.TMCReady. The other fields have
 * meaning only when the TMC has left the Disabled state. Writes to all RO fields of
 * this register are ignored.
 */
union cavm_cst_shrd_etf_sts
{
    uint32_t u;
    struct cavm_cst_shrd_etf_sts_s
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
    /* struct cavm_cst_shrd_etf_sts_s cn; */
};
typedef union cavm_cst_shrd_etf_sts cavm_cst_shrd_etf_sts_t;

#define CAVM_CST_SHRD_ETF_STS CAVM_CST_SHRD_ETF_STS_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_STS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_STS_FUNC(void)
{
    return 0x87a10005000cll;
}

#define typedef_CAVM_CST_SHRD_ETF_STS cavm_cst_shrd_etf_sts_t
#define bustype_CAVM_CST_SHRD_ETF_STS CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_STS "CST_SHRD_ETF_STS"
#define busnum_CAVM_CST_SHRD_ETF_STS 0
#define arguments_CAVM_CST_SHRD_ETF_STS -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etf_trg
 *
 * CST Shrd Etf Trg Register
 * In Circular Buffer mode, the Trigger Counter register specifies the number of 32-bit
 * words to capture in the trace memory, after detection of either a rising edge on the
 * trigin input or a trigger packet in the incoming trace stream, that is, where atid_s
 * = 0x7D. The value programmed must be aligned to the frame length of 128 bits.
 * Software must program this register before leaving Disabled state.
 */
union cavm_cst_shrd_etf_trg
{
    uint32_t u;
    struct cavm_cst_shrd_etf_trg_s
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
    /* struct cavm_cst_shrd_etf_trg_s cn; */
};
typedef union cavm_cst_shrd_etf_trg cavm_cst_shrd_etf_trg_t;

#define CAVM_CST_SHRD_ETF_TRG CAVM_CST_SHRD_ETF_TRG_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETF_TRG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETF_TRG_FUNC(void)
{
    return 0x87a10005001cll;
}

#define typedef_CAVM_CST_SHRD_ETF_TRG cavm_cst_shrd_etf_trg_t
#define bustype_CAVM_CST_SHRD_ETF_TRG CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETF_TRG "CST_SHRD_ETF_TRG"
#define busnum_CAVM_CST_SHRD_ETF_TRG 0
#define arguments_CAVM_CST_SHRD_ETF_TRG -1,-1,-1,-1

#endif /* __CAVM_CSRS_CST_SHRD_ETF_H__ */
