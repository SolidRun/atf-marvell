#ifndef __CAVM_CSRS_CST_SHRD_ETR_H__
#define __CAVM_CSRS_CST_SHRD_ETR_H__
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
 * OcteonTX CST_SHRD_ETR.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (NCB32b) cst_shrd_etr_authstatus
 *
 * CST Shrd Etr Authstatus Register
 * Reports the current status of the authentication control signals.
 */
union cavm_cst_shrd_etr_authstatus
{
    uint32_t u;
    struct cavm_cst_shrd_etr_authstatus_s
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
    /* struct cavm_cst_shrd_etr_authstatus_s cn; */
};
typedef union cavm_cst_shrd_etr_authstatus cavm_cst_shrd_etr_authstatus_t;

#define CAVM_CST_SHRD_ETR_AUTHSTATUS CAVM_CST_SHRD_ETR_AUTHSTATUS_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_AUTHSTATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_AUTHSTATUS_FUNC(void)
{
    return 0x87a100060fb8ll;
}

#define typedef_CAVM_CST_SHRD_ETR_AUTHSTATUS cavm_cst_shrd_etr_authstatus_t
#define bustype_CAVM_CST_SHRD_ETR_AUTHSTATUS CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_AUTHSTATUS "CST_SHRD_ETR_AUTHSTATUS"
#define busnum_CAVM_CST_SHRD_ETR_AUTHSTATUS 0
#define arguments_CAVM_CST_SHRD_ETR_AUTHSTATUS -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_axictl
 *
 * CST Shrd Etr Axictl Register
 * This register controls TMC accesses to system memory through the AXI interface. The
 * TMC only performs data accesses, so the arprot_m[2] and awprot_m[2] outputs are LOW
 * for all AXI transfers.
 */
union cavm_cst_shrd_etr_axictl
{
    uint32_t u;
    struct cavm_cst_shrd_etr_axictl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_2               : 12; /**< [ 31: 20](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t rcache                : 4;  /**< [ 19: 16](R/W) This field controls the AXI cache encoding for read transfers, that is, the
                                                                 value to be driven on the arcache_m[3:0] bus. Software must only program a valid
                                                                 AXI3 or AXI4 cache encoding value in this field. These values are defined in the
                                                                 AMBA 4 AXI and ACE Protocol Specification. If software attempts to program an
                                                                 invalid value 0x0 is written to this field instead. */
        uint32_t razwi_1               : 4;  /**< [ 15: 12](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t wrburstlen            : 4;  /**< [ 11:  8](R/W) Write Burst Length. This field indicates the maximum number of data transfers
                                                                 that can occur within each burst that is initiated by the TMC on the AXI
                                                                 interface. The write burst that is initiated on the AXI can be shorter than the
                                                                 programmed value in a case when the formatter has stopped due to a stop
                                                                 condition having occurred. */
        uint32_t razwi_0               : 2;  /**< [  7:  6](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t wcache                : 4;  /**< [  5:  2](R/W) This field controls the AXI cache encoding for write transfers, that is, the
                                                                 value to be driven on the awcache_m[3:0] bus. Software must only program a valid
                                                                 AXI3 or AXI4 cache encoding value in this field. These values are defined in the
                                                                 AMBA 4 AXI and ACE Protocol Specification. If software attempts to program an
                                                                 invalid value, 0x0 is written to this field instead. */
        uint32_t protctrlbit1          : 1;  /**< [  1:  1](R/W) Secure Access (AXI4 definition). This bit controls the value that is driven on
                                                                 arprot_m[1] or awprot_m[1] on the AXI master interface when performing AXI
                                                                 transfers. */
        uint32_t protctrlbit0          : 1;  /**< [  0:  0](R/W) Privileged Access (AXI4 definition). This bit controls the value that is driven
                                                                 on arprot_m[0] or awprot_m[0] on the AXI master interface when performing AXI
                                                                 transfers. */
#else /* Word 0 - Little Endian */
        uint32_t protctrlbit0          : 1;  /**< [  0:  0](R/W) Privileged Access (AXI4 definition). This bit controls the value that is driven
                                                                 on arprot_m[0] or awprot_m[0] on the AXI master interface when performing AXI
                                                                 transfers. */
        uint32_t protctrlbit1          : 1;  /**< [  1:  1](R/W) Secure Access (AXI4 definition). This bit controls the value that is driven on
                                                                 arprot_m[1] or awprot_m[1] on the AXI master interface when performing AXI
                                                                 transfers. */
        uint32_t wcache                : 4;  /**< [  5:  2](R/W) This field controls the AXI cache encoding for write transfers, that is, the
                                                                 value to be driven on the awcache_m[3:0] bus. Software must only program a valid
                                                                 AXI3 or AXI4 cache encoding value in this field. These values are defined in the
                                                                 AMBA 4 AXI and ACE Protocol Specification. If software attempts to program an
                                                                 invalid value, 0x0 is written to this field instead. */
        uint32_t razwi_0               : 2;  /**< [  7:  6](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t wrburstlen            : 4;  /**< [ 11:  8](R/W) Write Burst Length. This field indicates the maximum number of data transfers
                                                                 that can occur within each burst that is initiated by the TMC on the AXI
                                                                 interface. The write burst that is initiated on the AXI can be shorter than the
                                                                 programmed value in a case when the formatter has stopped due to a stop
                                                                 condition having occurred. */
        uint32_t razwi_1               : 4;  /**< [ 15: 12](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t rcache                : 4;  /**< [ 19: 16](R/W) This field controls the AXI cache encoding for read transfers, that is, the
                                                                 value to be driven on the arcache_m[3:0] bus. Software must only program a valid
                                                                 AXI3 or AXI4 cache encoding value in this field. These values are defined in the
                                                                 AMBA 4 AXI and ACE Protocol Specification. If software attempts to program an
                                                                 invalid value 0x0 is written to this field instead. */
        uint32_t razwi_2               : 12; /**< [ 31: 20](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_axictl_s cn; */
};
typedef union cavm_cst_shrd_etr_axictl cavm_cst_shrd_etr_axictl_t;

#define CAVM_CST_SHRD_ETR_AXICTL CAVM_CST_SHRD_ETR_AXICTL_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_AXICTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_AXICTL_FUNC(void)
{
    return 0x87a100060110ll;
}

#define typedef_CAVM_CST_SHRD_ETR_AXICTL cavm_cst_shrd_etr_axictl_t
#define bustype_CAVM_CST_SHRD_ETR_AXICTL CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_AXICTL "CST_SHRD_ETR_AXICTL"
#define busnum_CAVM_CST_SHRD_ETR_AXICTL 0
#define arguments_CAVM_CST_SHRD_ETR_AXICTL -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_bufwm
 *
 * CST Shrd Etr Bufwm Register
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
union cavm_cst_shrd_etr_bufwm
{
    uint32_t u;
    struct cavm_cst_shrd_etr_bufwm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 2;  /**< [ 31: 30](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t bufwm                 : 30; /**< [ 29:  0](R/W) Buffer Level Watermark. Indicates the desired threshold vacancy level in 32-bit
                                                                 words in the trace memory. */
#else /* Word 0 - Little Endian */
        uint32_t bufwm                 : 30; /**< [ 29:  0](R/W) Buffer Level Watermark. Indicates the desired threshold vacancy level in 32-bit
                                                                 words in the trace memory. */
        uint32_t razwi_0               : 2;  /**< [ 31: 30](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_bufwm_s cn; */
};
typedef union cavm_cst_shrd_etr_bufwm cavm_cst_shrd_etr_bufwm_t;

#define CAVM_CST_SHRD_ETR_BUFWM CAVM_CST_SHRD_ETR_BUFWM_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_BUFWM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_BUFWM_FUNC(void)
{
    return 0x87a100060034ll;
}

#define typedef_CAVM_CST_SHRD_ETR_BUFWM cavm_cst_shrd_etr_bufwm_t
#define bustype_CAVM_CST_SHRD_ETR_BUFWM CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_BUFWM "CST_SHRD_ETR_BUFWM"
#define busnum_CAVM_CST_SHRD_ETR_BUFWM 0
#define arguments_CAVM_CST_SHRD_ETR_BUFWM -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_cbuflevel
 *
 * CST Shrd Etr Cbuflevel Register
 * The CBUFLEVEL register indicates the current fill level of the trace memory in units
 * of 32-bit words. When the TMC leaves Disabled state, this register dynamically
 * indicates the current fill level of trace memory. It retains its value on entering
 * Disabled state. It is not affected by the reprogramming of pointer registers in
 * Disabled state with the exception of RRD reads and RWD writes.
 */
union cavm_cst_shrd_etr_cbuflevel
{
    uint32_t u;
    struct cavm_cst_shrd_etr_cbuflevel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 1;  /**< [ 31: 31](RO) Read-As-Zero, Writes Ignored. */
        uint32_t cbuflevel             : 31; /**< [ 30:  0](RO) Current Buffer Fill Level. Indicates the current fill level of the trace memory in 32-bit words. */
#else /* Word 0 - Little Endian */
        uint32_t cbuflevel             : 31; /**< [ 30:  0](RO) Current Buffer Fill Level. Indicates the current fill level of the trace memory in 32-bit words. */
        uint32_t razwi_0               : 1;  /**< [ 31: 31](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_cbuflevel_s cn; */
};
typedef union cavm_cst_shrd_etr_cbuflevel cavm_cst_shrd_etr_cbuflevel_t;

#define CAVM_CST_SHRD_ETR_CBUFLEVEL CAVM_CST_SHRD_ETR_CBUFLEVEL_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_CBUFLEVEL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_CBUFLEVEL_FUNC(void)
{
    return 0x87a100060030ll;
}

#define typedef_CAVM_CST_SHRD_ETR_CBUFLEVEL cavm_cst_shrd_etr_cbuflevel_t
#define bustype_CAVM_CST_SHRD_ETR_CBUFLEVEL CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_CBUFLEVEL "CST_SHRD_ETR_CBUFLEVEL"
#define busnum_CAVM_CST_SHRD_ETR_CBUFLEVEL 0
#define arguments_CAVM_CST_SHRD_ETR_CBUFLEVEL -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_cidr0
 *
 * CST Shrd Etr Cidr0 Register
 * The CIDR0 register is part of the set of component identification registers.
 */
union cavm_cst_shrd_etr_cidr0
{
    uint32_t u;
    struct cavm_cst_shrd_etr_cidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x0D. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_cidr0_s cn; */
};
typedef union cavm_cst_shrd_etr_cidr0 cavm_cst_shrd_etr_cidr0_t;

#define CAVM_CST_SHRD_ETR_CIDR0 CAVM_CST_SHRD_ETR_CIDR0_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_CIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_CIDR0_FUNC(void)
{
    return 0x87a100060ff0ll;
}

#define typedef_CAVM_CST_SHRD_ETR_CIDR0 cavm_cst_shrd_etr_cidr0_t
#define bustype_CAVM_CST_SHRD_ETR_CIDR0 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_CIDR0 "CST_SHRD_ETR_CIDR0"
#define busnum_CAVM_CST_SHRD_ETR_CIDR0 0
#define arguments_CAVM_CST_SHRD_ETR_CIDR0 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_cidr1
 *
 * CST Shrd Etr Cidr1 Register
 * The CIDR1 register is part of the set of component identification registers.
 */
union cavm_cst_shrd_etr_cidr1
{
    uint32_t u;
    struct cavm_cst_shrd_etr_cidr1_s
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
    /* struct cavm_cst_shrd_etr_cidr1_s cn; */
};
typedef union cavm_cst_shrd_etr_cidr1 cavm_cst_shrd_etr_cidr1_t;

#define CAVM_CST_SHRD_ETR_CIDR1 CAVM_CST_SHRD_ETR_CIDR1_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_CIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_CIDR1_FUNC(void)
{
    return 0x87a100060ff4ll;
}

#define typedef_CAVM_CST_SHRD_ETR_CIDR1 cavm_cst_shrd_etr_cidr1_t
#define bustype_CAVM_CST_SHRD_ETR_CIDR1 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_CIDR1 "CST_SHRD_ETR_CIDR1"
#define busnum_CAVM_CST_SHRD_ETR_CIDR1 0
#define arguments_CAVM_CST_SHRD_ETR_CIDR1 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_cidr2
 *
 * CST Shrd Etr Cidr2 Register
 * The CIDR2 register is part of the set of component identification registers.
 */
union cavm_cst_shrd_etr_cidr2
{
    uint32_t u;
    struct cavm_cst_shrd_etr_cidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Returns 0x05. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_cidr2_s cn; */
};
typedef union cavm_cst_shrd_etr_cidr2 cavm_cst_shrd_etr_cidr2_t;

#define CAVM_CST_SHRD_ETR_CIDR2 CAVM_CST_SHRD_ETR_CIDR2_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_CIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_CIDR2_FUNC(void)
{
    return 0x87a100060ff8ll;
}

#define typedef_CAVM_CST_SHRD_ETR_CIDR2 cavm_cst_shrd_etr_cidr2_t
#define bustype_CAVM_CST_SHRD_ETR_CIDR2 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_CIDR2 "CST_SHRD_ETR_CIDR2"
#define busnum_CAVM_CST_SHRD_ETR_CIDR2 0
#define arguments_CAVM_CST_SHRD_ETR_CIDR2 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_cidr3
 *
 * CST Shrd Etr Cidr3 Register
 * The CIDR3 register is part of the set of component identification registers.
 */
union cavm_cst_shrd_etr_cidr3
{
    uint32_t u;
    struct cavm_cst_shrd_etr_cidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Returns 0xB1. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_cidr3_s cn; */
};
typedef union cavm_cst_shrd_etr_cidr3 cavm_cst_shrd_etr_cidr3_t;

#define CAVM_CST_SHRD_ETR_CIDR3 CAVM_CST_SHRD_ETR_CIDR3_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_CIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_CIDR3_FUNC(void)
{
    return 0x87a100060ffcll;
}

#define typedef_CAVM_CST_SHRD_ETR_CIDR3 cavm_cst_shrd_etr_cidr3_t
#define bustype_CAVM_CST_SHRD_ETR_CIDR3 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_CIDR3 "CST_SHRD_ETR_CIDR3"
#define busnum_CAVM_CST_SHRD_ETR_CIDR3 0
#define arguments_CAVM_CST_SHRD_ETR_CIDR3 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_claimclr
 *
 * CST Shrd Etr Claimclr Register
 * This register forms one half of the claim tag value. On writes, this location
 * enables individual bits to be cleared. On reads, it returns the current claim tag
 * value.
 */
union cavm_cst_shrd_etr_claimclr
{
    uint32_t u;
    struct cavm_cst_shrd_etr_claimclr_s
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
    /* struct cavm_cst_shrd_etr_claimclr_s cn; */
};
typedef union cavm_cst_shrd_etr_claimclr cavm_cst_shrd_etr_claimclr_t;

#define CAVM_CST_SHRD_ETR_CLAIMCLR CAVM_CST_SHRD_ETR_CLAIMCLR_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_CLAIMCLR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_CLAIMCLR_FUNC(void)
{
    return 0x87a100060fa4ll;
}

#define typedef_CAVM_CST_SHRD_ETR_CLAIMCLR cavm_cst_shrd_etr_claimclr_t
#define bustype_CAVM_CST_SHRD_ETR_CLAIMCLR CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_CLAIMCLR "CST_SHRD_ETR_CLAIMCLR"
#define busnum_CAVM_CST_SHRD_ETR_CLAIMCLR 0
#define arguments_CAVM_CST_SHRD_ETR_CLAIMCLR -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_claimset
 *
 * CST Shrd Etr Claimset Register
 * This register forms one half of the claim tag value. On writes, this location
 * enables individual bits to be set. On reads, it returns the number of bits that can
 * be set.
 */
union cavm_cst_shrd_etr_claimset
{
    uint32_t u;
    struct cavm_cst_shrd_etr_claimset_s
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
    /* struct cavm_cst_shrd_etr_claimset_s cn; */
};
typedef union cavm_cst_shrd_etr_claimset cavm_cst_shrd_etr_claimset_t;

#define CAVM_CST_SHRD_ETR_CLAIMSET CAVM_CST_SHRD_ETR_CLAIMSET_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_CLAIMSET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_CLAIMSET_FUNC(void)
{
    return 0x87a100060fa0ll;
}

#define typedef_CAVM_CST_SHRD_ETR_CLAIMSET cavm_cst_shrd_etr_claimset_t
#define bustype_CAVM_CST_SHRD_ETR_CLAIMSET CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_CLAIMSET "CST_SHRD_ETR_CLAIMSET"
#define busnum_CAVM_CST_SHRD_ETR_CLAIMSET 0
#define arguments_CAVM_CST_SHRD_ETR_CLAIMSET -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_ctl
 *
 * CST Shrd Etr Ctl Register
 * This register controls trace stream capture. Setting the CTL.TraceCaptEn bit to 1
 * enables the TMC to capture the trace data. When trace capture is enabled, the
 * formatter behavior is controlled by the FFCR register.
 */
union cavm_cst_shrd_etr_ctl
{
    uint32_t u;
    struct cavm_cst_shrd_etr_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 31; /**< [ 31:  1](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t tracecapten           : 1;  /**< [  0:  0](R/W) Trace capture enable. */
#else /* Word 0 - Little Endian */
        uint32_t tracecapten           : 1;  /**< [  0:  0](R/W) Trace capture enable. */
        uint32_t razwi_0               : 31; /**< [ 31:  1](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_ctl_s cn; */
};
typedef union cavm_cst_shrd_etr_ctl cavm_cst_shrd_etr_ctl_t;

#define CAVM_CST_SHRD_ETR_CTL CAVM_CST_SHRD_ETR_CTL_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_CTL_FUNC(void)
{
    return 0x87a100060020ll;
}

#define typedef_CAVM_CST_SHRD_ETR_CTL cavm_cst_shrd_etr_ctl_t
#define bustype_CAVM_CST_SHRD_ETR_CTL CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_CTL "CST_SHRD_ETR_CTL"
#define busnum_CAVM_CST_SHRD_ETR_CTL 0
#define arguments_CAVM_CST_SHRD_ETR_CTL -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_dbahi
 *
 * CST Shrd Etr Dbahi Register
 * This register, together with the DBALO register, enables the TMC to locate the trace
 * buffer in system memory. It contains bits \>= bit[32] of the start address of the
 * trace buffer in system memory. The width of this register is given by:
 * (AXI_ADDR_WIDTH - 32), however, if AXI_ADDR_WIDTH is \<= 32 bits, this register is
 * reserved and access type is RAZ/WI. Modifying this register, other than when in
 * Disabled state, results in UNPREDICTABLE behavior. Software must program it with an
 * initial value before setting CTL.TraceCaptEn bit to 1.
 */
union cavm_cst_shrd_etr_dbahi
{
    uint32_t u;
    struct cavm_cst_shrd_etr_dbahi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 24; /**< [ 31:  8](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t bufaddrhi             : 8;  /**< [  7:  0](R/W) Data Buffer High Address. Holds the upper bits, that is, bit[32] and above, of
                                                                 the AXI address that is used to locate the trace buffer in the system. */
#else /* Word 0 - Little Endian */
        uint32_t bufaddrhi             : 8;  /**< [  7:  0](R/W) Data Buffer High Address. Holds the upper bits, that is, bit[32] and above, of
                                                                 the AXI address that is used to locate the trace buffer in the system. */
        uint32_t razwi_0               : 24; /**< [ 31:  8](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_dbahi_s cn; */
};
typedef union cavm_cst_shrd_etr_dbahi cavm_cst_shrd_etr_dbahi_t;

#define CAVM_CST_SHRD_ETR_DBAHI CAVM_CST_SHRD_ETR_DBAHI_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_DBAHI_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_DBAHI_FUNC(void)
{
    return 0x87a10006011cll;
}

#define typedef_CAVM_CST_SHRD_ETR_DBAHI cavm_cst_shrd_etr_dbahi_t
#define bustype_CAVM_CST_SHRD_ETR_DBAHI CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_DBAHI "CST_SHRD_ETR_DBAHI"
#define busnum_CAVM_CST_SHRD_ETR_DBAHI 0
#define arguments_CAVM_CST_SHRD_ETR_DBAHI -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_dbalo
 *
 * CST Shrd Etr Dbalo Register
 * This register, together with the DBAHI register, enables the TMC to locate the trace
 * buffer in system memory. This register contains bits [31:0] of the start address of
 * the trace buffer in system memory. This register is 32-bits wide if AXI_ADDR_WIDTH
 * is \>= 32-bits. If the AXI_ADDR_WIDTH is 0, this register is reserved and access type
 * is RAZ/WI. Software must program it before enabling trace capture, and the
 * programmed value must be aligned to the Trace Memory Data Width and the Frame Width.
 * Programming an unaligned value results in UNPREDICTABLE behavior. Modifying this
 * register other than when in Disabled state results in UNPREDICTABLE behavior.
 */
union cavm_cst_shrd_etr_dbalo
{
    uint32_t u;
    struct cavm_cst_shrd_etr_dbalo_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bufaddrlo             : 32; /**< [ 31:  0](R/W) Data Buffer Low Address. Holds the lower 32 bits of the AXI address that is used
                                                                 to locate the trace buffer in system memory.The lowest four bits have access
                                                                 type RAZ/WI. */
#else /* Word 0 - Little Endian */
        uint32_t bufaddrlo             : 32; /**< [ 31:  0](R/W) Data Buffer Low Address. Holds the lower 32 bits of the AXI address that is used
                                                                 to locate the trace buffer in system memory.The lowest four bits have access
                                                                 type RAZ/WI. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_dbalo_s cn; */
};
typedef union cavm_cst_shrd_etr_dbalo cavm_cst_shrd_etr_dbalo_t;

#define CAVM_CST_SHRD_ETR_DBALO CAVM_CST_SHRD_ETR_DBALO_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_DBALO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_DBALO_FUNC(void)
{
    return 0x87a100060118ll;
}

#define typedef_CAVM_CST_SHRD_ETR_DBALO cavm_cst_shrd_etr_dbalo_t
#define bustype_CAVM_CST_SHRD_ETR_DBALO CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_DBALO "CST_SHRD_ETR_DBALO"
#define busnum_CAVM_CST_SHRD_ETR_DBALO 0
#define arguments_CAVM_CST_SHRD_ETR_DBALO -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_devid
 *
 * CST Shrd Etr Devid Register
 * This register is IMPLEMENTATION DEFINED for each Part Number and Designer. The
 * register indicates the capabilities of the component.
 */
union cavm_cst_shrd_etr_devid
{
    uint32_t u;
    struct cavm_cst_shrd_etr_devid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t cachetype             : 2;  /**< [ 29: 28](RO) Indicates the format of BUSCTL register bus control fields. Reads as 2'b00
                                                                 indicating that AXICTL bus attribute bits [19:16] and [5:2] follow an
                                                                 implementation-defined non-generic format. See AXICTL register description. */
        uint32_t modes                 : 3;  /**< [ 27: 25](RO) Indicates the supported modes of operation. Reads as 3'b001 indicating that ETR
                                                                 supports CB, SWF1, and SWF2 modes. */
        uint32_t noscat                : 1;  /**< [ 24: 24](RO) Indicates whether the scatter-gather mode is implemented. Fixed at 1 indicating
                                                                 that scatter-gather mode is not implemented. */
        uint32_t aw                    : 7;  /**< [ 23: 17](RO) This field indicates the width of AXI address bus in ETR configuration. This
                                                                 field is valid only when DEVID.AW_VALID is set. Possible values are: */
        uint32_t aw_valid              : 1;  /**< [ 16: 16](RO) Indicates whether field DEVID.AW is valid. The value of this field is fixed at 1. */
        uint32_t reserved_14_15        : 2;
        uint32_t wbuf_depth            : 3;  /**< [ 13: 11](RO) Log2 of the number of write buffer entries. This value is set by the parameter
                                                                 WBUFFER_DEPTH. Each entry is of size ATB_DATA_WIDTH. */
        uint32_t memwidth              : 3;  /**< [ 10:  8](RO) This value is equal to ATB_DATA_WIDTH. */
        uint32_t configtype            : 2;  /**< [  7:  6](RO) Returns 0x1 indicating ETR configuration. */
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
        uint32_t configtype            : 2;  /**< [  7:  6](RO) Returns 0x1 indicating ETR configuration. */
        uint32_t memwidth              : 3;  /**< [ 10:  8](RO) This value is equal to ATB_DATA_WIDTH. */
        uint32_t wbuf_depth            : 3;  /**< [ 13: 11](RO) Log2 of the number of write buffer entries. This value is set by the parameter
                                                                 WBUFFER_DEPTH. Each entry is of size ATB_DATA_WIDTH. */
        uint32_t reserved_14_15        : 2;
        uint32_t aw_valid              : 1;  /**< [ 16: 16](RO) Indicates whether field DEVID.AW is valid. The value of this field is fixed at 1. */
        uint32_t aw                    : 7;  /**< [ 23: 17](RO) This field indicates the width of AXI address bus in ETR configuration. This
                                                                 field is valid only when DEVID.AW_VALID is set. Possible values are: */
        uint32_t noscat                : 1;  /**< [ 24: 24](RO) Indicates whether the scatter-gather mode is implemented. Fixed at 1 indicating
                                                                 that scatter-gather mode is not implemented. */
        uint32_t modes                 : 3;  /**< [ 27: 25](RO) Indicates the supported modes of operation. Reads as 3'b001 indicating that ETR
                                                                 supports CB, SWF1, and SWF2 modes. */
        uint32_t cachetype             : 2;  /**< [ 29: 28](RO) Indicates the format of BUSCTL register bus control fields. Reads as 2'b00
                                                                 indicating that AXICTL bus attribute bits [19:16] and [5:2] follow an
                                                                 implementation-defined non-generic format. See AXICTL register description. */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_devid_s cn; */
};
typedef union cavm_cst_shrd_etr_devid cavm_cst_shrd_etr_devid_t;

#define CAVM_CST_SHRD_ETR_DEVID CAVM_CST_SHRD_ETR_DEVID_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_DEVID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_DEVID_FUNC(void)
{
    return 0x87a100060fc8ll;
}

#define typedef_CAVM_CST_SHRD_ETR_DEVID cavm_cst_shrd_etr_devid_t
#define bustype_CAVM_CST_SHRD_ETR_DEVID CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_DEVID "CST_SHRD_ETR_DEVID"
#define busnum_CAVM_CST_SHRD_ETR_DEVID 0
#define arguments_CAVM_CST_SHRD_ETR_DEVID -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_devid1
 *
 * CST Shrd Etr Devid1 Register
 * Contains an IMPLEMENTATION DEFINED value.
 */
union cavm_cst_shrd_etr_devid1
{
    uint32_t u;
    struct cavm_cst_shrd_etr_devid1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t rmc                   : 1;  /**< [  0:  0](RO) Register management mode. TMC implements register management mode 1. */
#else /* Word 0 - Little Endian */
        uint32_t rmc                   : 1;  /**< [  0:  0](RO) Register management mode. TMC implements register management mode 1. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_devid1_s cn; */
};
typedef union cavm_cst_shrd_etr_devid1 cavm_cst_shrd_etr_devid1_t;

#define CAVM_CST_SHRD_ETR_DEVID1 CAVM_CST_SHRD_ETR_DEVID1_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_DEVID1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_DEVID1_FUNC(void)
{
    return 0x87a100060fc4ll;
}

#define typedef_CAVM_CST_SHRD_ETR_DEVID1 cavm_cst_shrd_etr_devid1_t
#define bustype_CAVM_CST_SHRD_ETR_DEVID1 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_DEVID1 "CST_SHRD_ETR_DEVID1"
#define busnum_CAVM_CST_SHRD_ETR_DEVID1 0
#define arguments_CAVM_CST_SHRD_ETR_DEVID1 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_devtype
 *
 * CST Shrd Etr Devtype Register
 * A debugger can use this register to get information about a component that has an
 * unrecognized Part number.
 */
union cavm_cst_shrd_etr_devtype
{
    uint32_t u;
    struct cavm_cst_shrd_etr_devtype_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Minor classification. Returns 0x2, indicating this component is a Buffer. */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major classification. Returns 0x1, indicating this component is a Trace Sink. */
#else /* Word 0 - Little Endian */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major classification. Returns 0x1, indicating this component is a Trace Sink. */
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Minor classification. Returns 0x2, indicating this component is a Buffer. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_devtype_s cn; */
};
typedef union cavm_cst_shrd_etr_devtype cavm_cst_shrd_etr_devtype_t;

#define CAVM_CST_SHRD_ETR_DEVTYPE CAVM_CST_SHRD_ETR_DEVTYPE_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_DEVTYPE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_DEVTYPE_FUNC(void)
{
    return 0x87a100060fccll;
}

#define typedef_CAVM_CST_SHRD_ETR_DEVTYPE cavm_cst_shrd_etr_devtype_t
#define bustype_CAVM_CST_SHRD_ETR_DEVTYPE CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_DEVTYPE "CST_SHRD_ETR_DEVTYPE"
#define busnum_CAVM_CST_SHRD_ETR_DEVTYPE 0
#define arguments_CAVM_CST_SHRD_ETR_DEVTYPE -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_ffcr
 *
 * CST Shrd Etr Ffcr Register
 * The FFCR controls the generation of stop, trigger and flush events. The insertion of
 * a flush completion packet and the insertion of a trigger packet in the formatted
 * trace is enabled here. Also one of the 2 formatter modes for bypass mode and normal
 * mode can be changed here when the formatter has stopped.
 */
union cavm_cst_shrd_etr_ffcr
{
    uint32_t u;
    struct cavm_cst_shrd_etr_ffcr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_4               : 16; /**< [ 31: 16](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t embedflush            : 1;  /**< [ 15: 15](R/W) Embed Flush ID (flush completion packet). Enables insertion of Flush ID 0x7B
                                                                 with a single byte of data payload = 0x00 in the output trace, immediately after
                                                                 the last flush data byte, when a flush completes on the ATB slave interface.
                                                                 This bit is effective only in Normal formatting modes. In Bypass mode, the Flush
                                                                 ID insertion remains disabled and this bit is ignored. */
        uint32_t razwi_3               : 1;  /**< [ 14: 14](R/W) Read-As-Zero, Writes Ignored. */
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
        uint32_t razwi_3               : 1;  /**< [ 14: 14](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t embedflush            : 1;  /**< [ 15: 15](R/W) Embed Flush ID (flush completion packet). Enables insertion of Flush ID 0x7B
                                                                 with a single byte of data payload = 0x00 in the output trace, immediately after
                                                                 the last flush data byte, when a flush completes on the ATB slave interface.
                                                                 This bit is effective only in Normal formatting modes. In Bypass mode, the Flush
                                                                 ID insertion remains disabled and this bit is ignored. */
        uint32_t razwi_4               : 16; /**< [ 31: 16](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_ffcr_s cn; */
};
typedef union cavm_cst_shrd_etr_ffcr cavm_cst_shrd_etr_ffcr_t;

#define CAVM_CST_SHRD_ETR_FFCR CAVM_CST_SHRD_ETR_FFCR_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_FFCR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_FFCR_FUNC(void)
{
    return 0x87a100060304ll;
}

#define typedef_CAVM_CST_SHRD_ETR_FFCR cavm_cst_shrd_etr_ffcr_t
#define bustype_CAVM_CST_SHRD_ETR_FFCR CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_FFCR "CST_SHRD_ETR_FFCR"
#define busnum_CAVM_CST_SHRD_ETR_FFCR 0
#define arguments_CAVM_CST_SHRD_ETR_FFCR -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_ffsr
 *
 * CST Shrd Etr Ffsr Register
 * This register indicates the status of the Formatter, and the status of Flush request.
 */
union cavm_cst_shrd_etr_ffsr
{
    uint32_t u;
    struct cavm_cst_shrd_etr_ffsr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 30; /**< [ 31:  2](RO) Read-As-Zero, Writes Ignored. */
        uint32_t ftstopped             : 1;  /**< [  1:  1](RO) Formatter Stopped. This bit behaves the same way as STS.FtEmpty. It is cleared
                                                                 to 0 when leaving the Disabled state and retains its value when entering the
                                                                 Disabled state. The FFCR.FtStopped bit is deprecated and is present in this
                                                                 register to support backwards-compatibility with earlier versions of the ETB. */
        uint32_t flinprog              : 1;  /**< [  0:  0](RO) Flush In Progress. This bit indicates whether the TMC is currently processing a
                                                                 flush request. The flush initiation is controlled by the flush control bits in
                                                                 the FFCR register. The flush request could additionally be from the ATB master
                                                                 port. This bit is cleared to 0 when leaving the Disabled state and retains its
                                                                 value when entering the Disabled state. When in Disabled state, this bit is not
                                                                 updated. */
#else /* Word 0 - Little Endian */
        uint32_t flinprog              : 1;  /**< [  0:  0](RO) Flush In Progress. This bit indicates whether the TMC is currently processing a
                                                                 flush request. The flush initiation is controlled by the flush control bits in
                                                                 the FFCR register. The flush request could additionally be from the ATB master
                                                                 port. This bit is cleared to 0 when leaving the Disabled state and retains its
                                                                 value when entering the Disabled state. When in Disabled state, this bit is not
                                                                 updated. */
        uint32_t ftstopped             : 1;  /**< [  1:  1](RO) Formatter Stopped. This bit behaves the same way as STS.FtEmpty. It is cleared
                                                                 to 0 when leaving the Disabled state and retains its value when entering the
                                                                 Disabled state. The FFCR.FtStopped bit is deprecated and is present in this
                                                                 register to support backwards-compatibility with earlier versions of the ETB. */
        uint32_t razwi_0               : 30; /**< [ 31:  2](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_ffsr_s cn; */
};
typedef union cavm_cst_shrd_etr_ffsr cavm_cst_shrd_etr_ffsr_t;

#define CAVM_CST_SHRD_ETR_FFSR CAVM_CST_SHRD_ETR_FFSR_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_FFSR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_FFSR_FUNC(void)
{
    return 0x87a100060300ll;
}

#define typedef_CAVM_CST_SHRD_ETR_FFSR cavm_cst_shrd_etr_ffsr_t
#define bustype_CAVM_CST_SHRD_ETR_FFSR CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_FFSR "CST_SHRD_ETR_FFSR"
#define busnum_CAVM_CST_SHRD_ETR_FFSR 0
#define arguments_CAVM_CST_SHRD_ETR_FFSR -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_itatbctr0
 *
 * CST Shrd Etr Itatbctr0 Register
 * This register captures the values of ATB slave inputs atvalid_s, afready_s,
 * atwakeup_s, and atbytes_s in integration mode. In functional mode, this register
 * behaves as RAZ/WI. In integration mode, writes to this register are ignored and the
 * reads return the value of corresponding input pins. The width of this register is
 * given by: 8+log2(ATB DATA WIDTH/8).
 */
union cavm_cst_shrd_etr_itatbctr0
{
    uint32_t u;
    struct cavm_cst_shrd_etr_itatbctr0_s
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
    /* struct cavm_cst_shrd_etr_itatbctr0_s cn; */
};
typedef union cavm_cst_shrd_etr_itatbctr0 cavm_cst_shrd_etr_itatbctr0_t;

#define CAVM_CST_SHRD_ETR_ITATBCTR0 CAVM_CST_SHRD_ETR_ITATBCTR0_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_ITATBCTR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_ITATBCTR0_FUNC(void)
{
    return 0x87a100060ef8ll;
}

#define typedef_CAVM_CST_SHRD_ETR_ITATBCTR0 cavm_cst_shrd_etr_itatbctr0_t
#define bustype_CAVM_CST_SHRD_ETR_ITATBCTR0 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_ITATBCTR0 "CST_SHRD_ETR_ITATBCTR0"
#define busnum_CAVM_CST_SHRD_ETR_ITATBCTR0 0
#define arguments_CAVM_CST_SHRD_ETR_ITATBCTR0 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_itatbctr1
 *
 * CST Shrd Etr Itatbctr1 Register
 * This register captures the value of the atid_s[6:0] input in integration mode. In
 * functional mode, this register behaves as RAZ/WI. In integration mode, writes to
 * this register are ignored and the reads return the value of atid_s input.
 */
union cavm_cst_shrd_etr_itatbctr1
{
    uint32_t u;
    struct cavm_cst_shrd_etr_itatbctr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 25; /**< [ 31:  7](RO) Read-As-Zero, Writes Ignored. */
        uint32_t atids                 : 7;  /**< [  6:  0](RO) Returns the value of atid_s[6:0] input in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t atids                 : 7;  /**< [  6:  0](RO) Returns the value of atid_s[6:0] input in integration mode. */
        uint32_t razwi_0               : 25; /**< [ 31:  7](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_itatbctr1_s cn; */
};
typedef union cavm_cst_shrd_etr_itatbctr1 cavm_cst_shrd_etr_itatbctr1_t;

#define CAVM_CST_SHRD_ETR_ITATBCTR1 CAVM_CST_SHRD_ETR_ITATBCTR1_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_ITATBCTR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_ITATBCTR1_FUNC(void)
{
    return 0x87a100060ef4ll;
}

#define typedef_CAVM_CST_SHRD_ETR_ITATBCTR1 cavm_cst_shrd_etr_itatbctr1_t
#define bustype_CAVM_CST_SHRD_ETR_ITATBCTR1 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_ITATBCTR1 "CST_SHRD_ETR_ITATBCTR1"
#define busnum_CAVM_CST_SHRD_ETR_ITATBCTR1 0
#define arguments_CAVM_CST_SHRD_ETR_ITATBCTR1 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_itatbctr2
 *
 * CST Shrd Etr Itatbctr2 Register
 * This register enables control of ATB slave outputs atready_s, afvalid_s, and
 * syncreq_s in integration mode. In functional mode, this register behaves as RAZ/WI.
 * In integration mode, the value that is written to any bit of this register is driven
 * on the output pin that is controlled by that bit and the reads return 0x0.
 */
union cavm_cst_shrd_etr_itatbctr2
{
    uint32_t u;
    struct cavm_cst_shrd_etr_itatbctr2_s
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
    /* struct cavm_cst_shrd_etr_itatbctr2_s cn; */
};
typedef union cavm_cst_shrd_etr_itatbctr2 cavm_cst_shrd_etr_itatbctr2_t;

#define CAVM_CST_SHRD_ETR_ITATBCTR2 CAVM_CST_SHRD_ETR_ITATBCTR2_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_ITATBCTR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_ITATBCTR2_FUNC(void)
{
    return 0x87a100060ef0ll;
}

#define typedef_CAVM_CST_SHRD_ETR_ITATBCTR2 cavm_cst_shrd_etr_itatbctr2_t
#define bustype_CAVM_CST_SHRD_ETR_ITATBCTR2 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_ITATBCTR2 "CST_SHRD_ETR_ITATBCTR2"
#define busnum_CAVM_CST_SHRD_ETR_ITATBCTR2 0
#define arguments_CAVM_CST_SHRD_ETR_ITATBCTR2 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_itatbdata0
 *
 * CST Shrd Etr Itatbdata0 Register
 * This register captures the value of atdata_s input in integration mode. In
 * functional mode, this register behaves as RAZ/WI. In integration mode, writes to
 * this register are ignored and the reads return the value of corresponding atdata_s
 * bits. The width of this register is given by: 1+(ATB DATA WIDTH)/8.
 */
union cavm_cst_shrd_etr_itatbdata0
{
    uint32_t u;
    struct cavm_cst_shrd_etr_itatbdata0_s
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
    /* struct cavm_cst_shrd_etr_itatbdata0_s cn; */
};
typedef union cavm_cst_shrd_etr_itatbdata0 cavm_cst_shrd_etr_itatbdata0_t;

#define CAVM_CST_SHRD_ETR_ITATBDATA0 CAVM_CST_SHRD_ETR_ITATBDATA0_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_ITATBDATA0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_ITATBDATA0_FUNC(void)
{
    return 0x87a100060eecll;
}

#define typedef_CAVM_CST_SHRD_ETR_ITATBDATA0 cavm_cst_shrd_etr_itatbdata0_t
#define bustype_CAVM_CST_SHRD_ETR_ITATBDATA0 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_ITATBDATA0 "CST_SHRD_ETR_ITATBDATA0"
#define busnum_CAVM_CST_SHRD_ETR_ITATBDATA0 0
#define arguments_CAVM_CST_SHRD_ETR_ITATBDATA0 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_itctrl
 *
 * CST Shrd Etr Itctrl Register
 * The Integration Mode Control register is used to enable topology detection.
 */
union cavm_cst_shrd_etr_itctrl
{
    uint32_t u;
    struct cavm_cst_shrd_etr_itctrl_s
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
    /* struct cavm_cst_shrd_etr_itctrl_s cn; */
};
typedef union cavm_cst_shrd_etr_itctrl cavm_cst_shrd_etr_itctrl_t;

#define CAVM_CST_SHRD_ETR_ITCTRL CAVM_CST_SHRD_ETR_ITCTRL_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_ITCTRL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_ITCTRL_FUNC(void)
{
    return 0x87a100060f00ll;
}

#define typedef_CAVM_CST_SHRD_ETR_ITCTRL cavm_cst_shrd_etr_itctrl_t
#define bustype_CAVM_CST_SHRD_ETR_ITCTRL CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_ITCTRL "CST_SHRD_ETR_ITCTRL"
#define busnum_CAVM_CST_SHRD_ETR_ITCTRL 0
#define arguments_CAVM_CST_SHRD_ETR_ITCTRL -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_itevtintr
 *
 * CST Shrd Etr Itevtintr Register
 * This register controls the values of event and interrupt outputs in integration
 * mode. In functional mode, this register behaves as RAZ/WI. In integration mode, the
 * value that is written to any bit of this register is driven on the output pin that
 * is controlled by that bit and the reads return 0x0.
 */
union cavm_cst_shrd_etr_itevtintr
{
    uint32_t u;
    struct cavm_cst_shrd_etr_itevtintr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 28; /**< [ 31:  4](WO) Read-As-Zero, Writes Ignored. */
        uint32_t bufintr               : 1;  /**< [  3:  3](WO) Controls the value of bufintr output in integration mode. */
        uint32_t flushcomp             : 1;  /**< [  2:  2](WO) Controls the value of flushcomp output in integration mode. */
        uint32_t full                  : 1;  /**< [  1:  1](WO) Controls the value of full output in integration mode. */
        uint32_t acqcomp               : 1;  /**< [  0:  0](WO) Controls the value of acqcomp output in integration mode. */
#else /* Word 0 - Little Endian */
        uint32_t acqcomp               : 1;  /**< [  0:  0](WO) Controls the value of acqcomp output in integration mode. */
        uint32_t full                  : 1;  /**< [  1:  1](WO) Controls the value of full output in integration mode. */
        uint32_t flushcomp             : 1;  /**< [  2:  2](WO) Controls the value of flushcomp output in integration mode. */
        uint32_t bufintr               : 1;  /**< [  3:  3](WO) Controls the value of bufintr output in integration mode. */
        uint32_t razwi_0               : 28; /**< [ 31:  4](WO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_itevtintr_s cn; */
};
typedef union cavm_cst_shrd_etr_itevtintr cavm_cst_shrd_etr_itevtintr_t;

#define CAVM_CST_SHRD_ETR_ITEVTINTR CAVM_CST_SHRD_ETR_ITEVTINTR_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_ITEVTINTR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_ITEVTINTR_FUNC(void)
{
    return 0x87a100060ee0ll;
}

#define typedef_CAVM_CST_SHRD_ETR_ITEVTINTR cavm_cst_shrd_etr_itevtintr_t
#define bustype_CAVM_CST_SHRD_ETR_ITEVTINTR CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_ITEVTINTR "CST_SHRD_ETR_ITEVTINTR"
#define busnum_CAVM_CST_SHRD_ETR_ITEVTINTR 0
#define arguments_CAVM_CST_SHRD_ETR_ITEVTINTR -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_ittrflin
 *
 * CST Shrd Etr Ittrflin Register
 * This register captures the values of the flushin and trigin inputs in integration
 * mode. In functional mode, this register behaves as RAZ/WI.
 */
union cavm_cst_shrd_etr_ittrflin
{
    uint32_t u;
    struct cavm_cst_shrd_etr_ittrflin_s
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
    /* struct cavm_cst_shrd_etr_ittrflin_s cn; */
};
typedef union cavm_cst_shrd_etr_ittrflin cavm_cst_shrd_etr_ittrflin_t;

#define CAVM_CST_SHRD_ETR_ITTRFLIN CAVM_CST_SHRD_ETR_ITTRFLIN_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_ITTRFLIN_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_ITTRFLIN_FUNC(void)
{
    return 0x87a100060ee8ll;
}

#define typedef_CAVM_CST_SHRD_ETR_ITTRFLIN cavm_cst_shrd_etr_ittrflin_t
#define bustype_CAVM_CST_SHRD_ETR_ITTRFLIN CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_ITTRFLIN "CST_SHRD_ETR_ITTRFLIN"
#define busnum_CAVM_CST_SHRD_ETR_ITTRFLIN 0
#define arguments_CAVM_CST_SHRD_ETR_ITTRFLIN -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_lbuflevel
 *
 * CST Shrd Etr Lbuflevel Register
 * Reading this register returns the maximum fill level of the trace memory in 32-bit
 * words since this register was last read. Reading this register also results in its
 * contents being updated to the current fill level. When entering Disabled state, it
 * retains its last value. While in Disabled state, reads from this register do not
 * affect its value. When exiting Disabled state, the LBUFLEVEL register is updated to
 * the current fill level.
 */
union cavm_cst_shrd_etr_lbuflevel
{
    uint32_t u;
    struct cavm_cst_shrd_etr_lbuflevel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 1;  /**< [ 31: 31](RO) Read-As-Zero, Writes Ignored. */
        uint32_t lbuflevel             : 31; /**< [ 30:  0](RO) Latched Buffer Fill Level. Indicates the maximum fill level of the trace memory
                                                                 in 32-bit words since this register was last read. */
#else /* Word 0 - Little Endian */
        uint32_t lbuflevel             : 31; /**< [ 30:  0](RO) Latched Buffer Fill Level. Indicates the maximum fill level of the trace memory
                                                                 in 32-bit words since this register was last read. */
        uint32_t razwi_0               : 1;  /**< [ 31: 31](RO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_lbuflevel_s cn; */
};
typedef union cavm_cst_shrd_etr_lbuflevel cavm_cst_shrd_etr_lbuflevel_t;

#define CAVM_CST_SHRD_ETR_LBUFLEVEL CAVM_CST_SHRD_ETR_LBUFLEVEL_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_LBUFLEVEL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_LBUFLEVEL_FUNC(void)
{
    return 0x87a10006002cll;
}

#define typedef_CAVM_CST_SHRD_ETR_LBUFLEVEL cavm_cst_shrd_etr_lbuflevel_t
#define bustype_CAVM_CST_SHRD_ETR_LBUFLEVEL CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_LBUFLEVEL "CST_SHRD_ETR_LBUFLEVEL"
#define busnum_CAVM_CST_SHRD_ETR_LBUFLEVEL 0
#define arguments_CAVM_CST_SHRD_ETR_LBUFLEVEL -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_mode
 *
 * CST Shrd Etr Mode Register
 * This register controls the TMC operating mode. The operating mode can only be
 * changed when the TMC is in Disabled state. Attempting to write to this register in
 * any other state results in UNPREDICTABLE behavior. The operating mode is ignored
 * when in Disabled state.
 */
union cavm_cst_shrd_etr_mode
{
    uint32_t u;
    struct cavm_cst_shrd_etr_mode_s
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
    /* struct cavm_cst_shrd_etr_mode_s cn; */
};
typedef union cavm_cst_shrd_etr_mode cavm_cst_shrd_etr_mode_t;

#define CAVM_CST_SHRD_ETR_MODE CAVM_CST_SHRD_ETR_MODE_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_MODE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_MODE_FUNC(void)
{
    return 0x87a100060028ll;
}

#define typedef_CAVM_CST_SHRD_ETR_MODE cavm_cst_shrd_etr_mode_t
#define bustype_CAVM_CST_SHRD_ETR_MODE CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_MODE "CST_SHRD_ETR_MODE"
#define busnum_CAVM_CST_SHRD_ETR_MODE 0
#define arguments_CAVM_CST_SHRD_ETR_MODE -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_pidr0
 *
 * CST Shrd Etr Pidr0 Register
 * The PIDR0 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_etr_pidr0
{
    uint32_t u;
    struct cavm_cst_shrd_etr_pidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number (lower 8 bits). Returns 0xe8, indicating TMC ETR/ETS. */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number (lower 8 bits). Returns 0xe8, indicating TMC ETR/ETS. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_pidr0_s cn; */
};
typedef union cavm_cst_shrd_etr_pidr0 cavm_cst_shrd_etr_pidr0_t;

#define CAVM_CST_SHRD_ETR_PIDR0 CAVM_CST_SHRD_ETR_PIDR0_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_PIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_PIDR0_FUNC(void)
{
    return 0x87a100060fe0ll;
}

#define typedef_CAVM_CST_SHRD_ETR_PIDR0 cavm_cst_shrd_etr_pidr0_t
#define bustype_CAVM_CST_SHRD_ETR_PIDR0 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_PIDR0 "CST_SHRD_ETR_PIDR0"
#define busnum_CAVM_CST_SHRD_ETR_PIDR0 0
#define arguments_CAVM_CST_SHRD_ETR_PIDR0 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_pidr1
 *
 * CST Shrd Etr Pidr1 Register
 * The PIDR1 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_etr_pidr1
{
    uint32_t u;
    struct cavm_cst_shrd_etr_pidr1_s
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
    /* struct cavm_cst_shrd_etr_pidr1_s cn; */
};
typedef union cavm_cst_shrd_etr_pidr1 cavm_cst_shrd_etr_pidr1_t;

#define CAVM_CST_SHRD_ETR_PIDR1 CAVM_CST_SHRD_ETR_PIDR1_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_PIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_PIDR1_FUNC(void)
{
    return 0x87a100060fe4ll;
}

#define typedef_CAVM_CST_SHRD_ETR_PIDR1 cavm_cst_shrd_etr_pidr1_t
#define bustype_CAVM_CST_SHRD_ETR_PIDR1 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_PIDR1 "CST_SHRD_ETR_PIDR1"
#define busnum_CAVM_CST_SHRD_ETR_PIDR1 0
#define arguments_CAVM_CST_SHRD_ETR_PIDR1 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_pidr2
 *
 * CST Shrd Etr Pidr2 Register
 * The PIDR2 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_etr_pidr2
{
    uint32_t u;
    struct cavm_cst_shrd_etr_pidr2_s
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
    /* struct cavm_cst_shrd_etr_pidr2_s cn; */
};
typedef union cavm_cst_shrd_etr_pidr2 cavm_cst_shrd_etr_pidr2_t;

#define CAVM_CST_SHRD_ETR_PIDR2 CAVM_CST_SHRD_ETR_PIDR2_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_PIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_PIDR2_FUNC(void)
{
    return 0x87a100060fe8ll;
}

#define typedef_CAVM_CST_SHRD_ETR_PIDR2 cavm_cst_shrd_etr_pidr2_t
#define bustype_CAVM_CST_SHRD_ETR_PIDR2 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_PIDR2 "CST_SHRD_ETR_PIDR2"
#define busnum_CAVM_CST_SHRD_ETR_PIDR2 0
#define arguments_CAVM_CST_SHRD_ETR_PIDR2 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_pidr3
 *
 * CST Shrd Etr Pidr3 Register
 * The PIDR3 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_etr_pidr3
{
    uint32_t u;
    struct cavm_cst_shrd_etr_pidr3_s
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
    /* struct cavm_cst_shrd_etr_pidr3_s cn; */
};
typedef union cavm_cst_shrd_etr_pidr3 cavm_cst_shrd_etr_pidr3_t;

#define CAVM_CST_SHRD_ETR_PIDR3 CAVM_CST_SHRD_ETR_PIDR3_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_PIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_PIDR3_FUNC(void)
{
    return 0x87a100060fecll;
}

#define typedef_CAVM_CST_SHRD_ETR_PIDR3 cavm_cst_shrd_etr_pidr3_t
#define bustype_CAVM_CST_SHRD_ETR_PIDR3 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_PIDR3 "CST_SHRD_ETR_PIDR3"
#define busnum_CAVM_CST_SHRD_ETR_PIDR3 0
#define arguments_CAVM_CST_SHRD_ETR_PIDR3 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_pidr4
 *
 * CST Shrd Etr Pidr4 Register
 * The PIDR4 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_etr_pidr4
{
    uint32_t u;
    struct cavm_cst_shrd_etr_pidr4_s
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
    /* struct cavm_cst_shrd_etr_pidr4_s cn; */
};
typedef union cavm_cst_shrd_etr_pidr4 cavm_cst_shrd_etr_pidr4_t;

#define CAVM_CST_SHRD_ETR_PIDR4 CAVM_CST_SHRD_ETR_PIDR4_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_PIDR4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_PIDR4_FUNC(void)
{
    return 0x87a100060fd0ll;
}

#define typedef_CAVM_CST_SHRD_ETR_PIDR4 cavm_cst_shrd_etr_pidr4_t
#define bustype_CAVM_CST_SHRD_ETR_PIDR4 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_PIDR4 "CST_SHRD_ETR_PIDR4"
#define busnum_CAVM_CST_SHRD_ETR_PIDR4 0
#define arguments_CAVM_CST_SHRD_ETR_PIDR4 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_pidr5
 *
 * CST Shrd Etr Pidr5 Register
 * The PIDR5 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_etr_pidr5
{
    uint32_t u;
    struct cavm_cst_shrd_etr_pidr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr5                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_pidr5_s cn; */
};
typedef union cavm_cst_shrd_etr_pidr5 cavm_cst_shrd_etr_pidr5_t;

#define CAVM_CST_SHRD_ETR_PIDR5 CAVM_CST_SHRD_ETR_PIDR5_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_PIDR5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_PIDR5_FUNC(void)
{
    return 0x87a100060fd4ll;
}

#define typedef_CAVM_CST_SHRD_ETR_PIDR5 cavm_cst_shrd_etr_pidr5_t
#define bustype_CAVM_CST_SHRD_ETR_PIDR5 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_PIDR5 "CST_SHRD_ETR_PIDR5"
#define busnum_CAVM_CST_SHRD_ETR_PIDR5 0
#define arguments_CAVM_CST_SHRD_ETR_PIDR5 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_pidr6
 *
 * CST Shrd Etr Pidr6 Register
 * The PIDR6 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_etr_pidr6
{
    uint32_t u;
    struct cavm_cst_shrd_etr_pidr6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr6                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_pidr6_s cn; */
};
typedef union cavm_cst_shrd_etr_pidr6 cavm_cst_shrd_etr_pidr6_t;

#define CAVM_CST_SHRD_ETR_PIDR6 CAVM_CST_SHRD_ETR_PIDR6_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_PIDR6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_PIDR6_FUNC(void)
{
    return 0x87a100060fd8ll;
}

#define typedef_CAVM_CST_SHRD_ETR_PIDR6 cavm_cst_shrd_etr_pidr6_t
#define bustype_CAVM_CST_SHRD_ETR_PIDR6 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_PIDR6 "CST_SHRD_ETR_PIDR6"
#define busnum_CAVM_CST_SHRD_ETR_PIDR6 0
#define arguments_CAVM_CST_SHRD_ETR_PIDR6 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_pidr7
 *
 * CST Shrd Etr Pidr7 Register
 * The PIDR7 register is part of the set of peripheral identification registers.
 */
union cavm_cst_shrd_etr_pidr7
{
    uint32_t u;
    struct cavm_cst_shrd_etr_pidr7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
#else /* Word 0 - Little Endian */
        uint32_t pidr7                 : 8;  /**< [  7:  0](RO) Reserved. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_pidr7_s cn; */
};
typedef union cavm_cst_shrd_etr_pidr7 cavm_cst_shrd_etr_pidr7_t;

#define CAVM_CST_SHRD_ETR_PIDR7 CAVM_CST_SHRD_ETR_PIDR7_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_PIDR7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_PIDR7_FUNC(void)
{
    return 0x87a100060fdcll;
}

#define typedef_CAVM_CST_SHRD_ETR_PIDR7 cavm_cst_shrd_etr_pidr7_t
#define bustype_CAVM_CST_SHRD_ETR_PIDR7 CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_PIDR7 "CST_SHRD_ETR_PIDR7"
#define busnum_CAVM_CST_SHRD_ETR_PIDR7 0
#define arguments_CAVM_CST_SHRD_ETR_PIDR7 -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_pscr
 *
 * CST Shrd Etr Pscr Register
 * This register determines the reload value of the Periodic Synchronization Counter.
 * This counter enables the frequency of sync packets to be optimized to the trace
 * capture buffer size. The default behavior of the counter is to generate periodic
 * synchronization requests, syncreq_s, on the ATB slave interface.
 */
union cavm_cst_shrd_etr_pscr
{
    uint32_t u;
    struct cavm_cst_shrd_etr_pscr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 26; /**< [ 31:  6](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t embedsync             : 1;  /**< [  5:  5](R/W) Embed Frame Sync Packet in the trace stream. Setting this bit to 1 enables the
                                                                 formatter to insert frame sync packets in the trace stream at periodic
                                                                 intervals. If this bit is set and the Synchronization Counter is enabled, the
                                                                 formatter inserts a 32-bit frame sync packet in the trace stream when the
                                                                 counter reaches 0. This bit is effective only when formatting is enabled, that
                                                                 is when FFCR.EnTI=1 or FFCR.EnFt=1, and it is ignored when the formatter is in
                                                                 bypass mode. */
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
        uint32_t embedsync             : 1;  /**< [  5:  5](R/W) Embed Frame Sync Packet in the trace stream. Setting this bit to 1 enables the
                                                                 formatter to insert frame sync packets in the trace stream at periodic
                                                                 intervals. If this bit is set and the Synchronization Counter is enabled, the
                                                                 formatter inserts a 32-bit frame sync packet in the trace stream when the
                                                                 counter reaches 0. This bit is effective only when formatting is enabled, that
                                                                 is when FFCR.EnTI=1 or FFCR.EnFt=1, and it is ignored when the formatter is in
                                                                 bypass mode. */
        uint32_t razwi_0               : 26; /**< [ 31:  6](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_pscr_s cn; */
};
typedef union cavm_cst_shrd_etr_pscr cavm_cst_shrd_etr_pscr_t;

#define CAVM_CST_SHRD_ETR_PSCR CAVM_CST_SHRD_ETR_PSCR_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_PSCR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_PSCR_FUNC(void)
{
    return 0x87a100060308ll;
}

#define typedef_CAVM_CST_SHRD_ETR_PSCR cavm_cst_shrd_etr_pscr_t
#define bustype_CAVM_CST_SHRD_ETR_PSCR CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_PSCR "CST_SHRD_ETR_PSCR"
#define busnum_CAVM_CST_SHRD_ETR_PSCR 0
#define arguments_CAVM_CST_SHRD_ETR_PSCR -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_rrd
 *
 * CST Shrd Etr Rrd Register
 * Reading this register allows data to be read from the trace memory at the location
 * pointed to by the RRP/RRPHI registers when either in the Disabled state or operating
 * in CB or SWF1 mode. When ATB_DATA_WIDTH is 32, 64 or 128 bit wide the AXI data width
 * is the same and a memory word holds 4, 8, or 16 bytes. When ATB_DATA_WIDTH is 64 or
 * 128 bit wide multiple RRD reads must be performed to read a full memory word. When a
 * full memory width of data has been read via the RRD register, the RRP register is
 * incremented to the next memory word. When the TMC left the Disabled state and the
 * trace memory is empty, this register returns 0xFFFFFFFF. When the TMC left the
 * Disabled state and the trace memory is empty, this register returns 0xFFFFFFFF. When
 * operating in CB mode and the TMC left the Disabled state, this register returns
 * 0xFFFFFFFF in all other states except the STOPPED state. When operating in SWF2
 * mode, this register also returns 0xFFFFFFFF. When the MemErr bit in the STS Register
 * is set, reading this register returns an error response on the APB slave interface.
 */
union cavm_cst_shrd_etr_rrd
{
    uint32_t u;
    struct cavm_cst_shrd_etr_rrd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rrd                   : 32; /**< [ 31:  0](RO) Returns the data read from trace memory. */
#else /* Word 0 - Little Endian */
        uint32_t rrd                   : 32; /**< [ 31:  0](RO) Returns the data read from trace memory. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_rrd_s cn; */
};
typedef union cavm_cst_shrd_etr_rrd cavm_cst_shrd_etr_rrd_t;

#define CAVM_CST_SHRD_ETR_RRD CAVM_CST_SHRD_ETR_RRD_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_RRD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_RRD_FUNC(void)
{
    return 0x87a100060010ll;
}

#define typedef_CAVM_CST_SHRD_ETR_RRD cavm_cst_shrd_etr_rrd_t
#define bustype_CAVM_CST_SHRD_ETR_RRD CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_RRD "CST_SHRD_ETR_RRD"
#define busnum_CAVM_CST_SHRD_ETR_RRD 0
#define arguments_CAVM_CST_SHRD_ETR_RRD -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_rrp
 *
 * CST Shrd Etr Rrp Register
 * The RAM Read Pointer Register contains the value of the read pointer that is used to
 * read entries from trace memory over the APB interface. Software must program it
 * before enabling trace capture. Software must program it before enabling trace
 * capture.
 */
union cavm_cst_shrd_etr_rrp
{
    uint32_t u;
    struct cavm_cst_shrd_etr_rrp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rrp                   : 32; /**< [ 31:  0](R/W) This register represents the lower 32 bits of the AXI address that is used to
                                                                 access the trace memory with RRD read acesses. When ATB_DATA_WIDTH is 32, 64 or
                                                                 128 bit wide the AXI data width is the same and a memory word holds 4, 8, or 16
                                                                 bytes. When a full memory width of data has been read via the RRD register, the
                                                                 RRP register is incremented to the next memory word. Some of the lower bits have
                                                                 access type RAZ/WI. The number of bits is calculated as log2(ATB_DATA_WIDTH/8).
                                                                 When the AXI_ADDR_WIDTH is 0, this register is reserved and access type is
                                                                 RAZ/WI. */
#else /* Word 0 - Little Endian */
        uint32_t rrp                   : 32; /**< [ 31:  0](R/W) This register represents the lower 32 bits of the AXI address that is used to
                                                                 access the trace memory with RRD read acesses. When ATB_DATA_WIDTH is 32, 64 or
                                                                 128 bit wide the AXI data width is the same and a memory word holds 4, 8, or 16
                                                                 bytes. When a full memory width of data has been read via the RRD register, the
                                                                 RRP register is incremented to the next memory word. Some of the lower bits have
                                                                 access type RAZ/WI. The number of bits is calculated as log2(ATB_DATA_WIDTH/8).
                                                                 When the AXI_ADDR_WIDTH is 0, this register is reserved and access type is
                                                                 RAZ/WI. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_rrp_s cn; */
};
typedef union cavm_cst_shrd_etr_rrp cavm_cst_shrd_etr_rrp_t;

#define CAVM_CST_SHRD_ETR_RRP CAVM_CST_SHRD_ETR_RRP_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_RRP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_RRP_FUNC(void)
{
    return 0x87a100060014ll;
}

#define typedef_CAVM_CST_SHRD_ETR_RRP cavm_cst_shrd_etr_rrp_t
#define bustype_CAVM_CST_SHRD_ETR_RRP CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_RRP "CST_SHRD_ETR_RRP"
#define busnum_CAVM_CST_SHRD_ETR_RRP 0
#define arguments_CAVM_CST_SHRD_ETR_RRP -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_rrphi
 *
 * CST Shrd Etr Rrphi Register
 * The RAM Read Pointer High register contains address bits \>= bit[32] of the read
 * pointer that is used to read entries from trace memory over the APB interface.
 * Software must program it before enabling trace capture.
 */
union cavm_cst_shrd_etr_rrphi
{
    uint32_t u;
    struct cavm_cst_shrd_etr_rrphi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 24; /**< [ 31:  8](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t rrphi                 : 8;  /**< [  7:  0](R/W) RAM Read Pointer High. Bits [32] and above of the RAM read pointer. */
#else /* Word 0 - Little Endian */
        uint32_t rrphi                 : 8;  /**< [  7:  0](R/W) RAM Read Pointer High. Bits [32] and above of the RAM read pointer. */
        uint32_t razwi_0               : 24; /**< [ 31:  8](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_rrphi_s cn; */
};
typedef union cavm_cst_shrd_etr_rrphi cavm_cst_shrd_etr_rrphi_t;

#define CAVM_CST_SHRD_ETR_RRPHI CAVM_CST_SHRD_ETR_RRPHI_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_RRPHI_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_RRPHI_FUNC(void)
{
    return 0x87a100060038ll;
}

#define typedef_CAVM_CST_SHRD_ETR_RRPHI cavm_cst_shrd_etr_rrphi_t
#define bustype_CAVM_CST_SHRD_ETR_RRPHI CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_RRPHI "CST_SHRD_ETR_RRPHI"
#define busnum_CAVM_CST_SHRD_ETR_RRPHI 0
#define arguments_CAVM_CST_SHRD_ETR_RRPHI -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_rsz
 *
 * CST Shrd Etr Rsz Register
 * Defines the size of trace memory in units of 32-bit words.
 */
union cavm_cst_shrd_etr_rsz
{
    uint32_t u;
    struct cavm_cst_shrd_etr_rsz_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 1;  /**< [ 31: 31](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t rsz                   : 31; /**< [ 30:  0](R/W) RAM size. Indicates the size of trace memory in 32-bit words. The size of the
                                                                 trace buffer must be a multiple of the AXI data width. This can be found by
                                                                 looking at the MEMWIDTH field in the DEVID Register. The maximum trace buffer
                                                                 size permitted is 4GB. The minimum trace buffer size enabled in Software FIFO
                                                                 mode and Hardware FIFO mode is 512 bytes. The minimum trace buffer size enabled
                                                                 in Circular Buffer mode is one AXI dataword. Returns the programmed value on
                                                                 reading. The burst length programmed in the AXICTL Register, WrBurstLen, must be
                                                                 compatible with the trace buffer size and the AXI data width so that the total
                                                                 number of bytes of data transferred in a burst is not greater than the trace
                                                                 buffer size. Programming an incompatible burst length results in UNPREDICTABLE
                                                                 behavior. Modifying this register when the TMCReady bit, STS Register, 0x00C is
                                                                 clear, or the TraceCaptEn bit, CTL Register, 0x020 is set, results in
                                                                 UNPREDICTABLE behavior. */
#else /* Word 0 - Little Endian */
        uint32_t rsz                   : 31; /**< [ 30:  0](R/W) RAM size. Indicates the size of trace memory in 32-bit words. The size of the
                                                                 trace buffer must be a multiple of the AXI data width. This can be found by
                                                                 looking at the MEMWIDTH field in the DEVID Register. The maximum trace buffer
                                                                 size permitted is 4GB. The minimum trace buffer size enabled in Software FIFO
                                                                 mode and Hardware FIFO mode is 512 bytes. The minimum trace buffer size enabled
                                                                 in Circular Buffer mode is one AXI dataword. Returns the programmed value on
                                                                 reading. The burst length programmed in the AXICTL Register, WrBurstLen, must be
                                                                 compatible with the trace buffer size and the AXI data width so that the total
                                                                 number of bytes of data transferred in a burst is not greater than the trace
                                                                 buffer size. Programming an incompatible burst length results in UNPREDICTABLE
                                                                 behavior. Modifying this register when the TMCReady bit, STS Register, 0x00C is
                                                                 clear, or the TraceCaptEn bit, CTL Register, 0x020 is set, results in
                                                                 UNPREDICTABLE behavior. */
        uint32_t razwi_0               : 1;  /**< [ 31: 31](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_rsz_s cn; */
};
typedef union cavm_cst_shrd_etr_rsz cavm_cst_shrd_etr_rsz_t;

#define CAVM_CST_SHRD_ETR_RSZ CAVM_CST_SHRD_ETR_RSZ_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_RSZ_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_RSZ_FUNC(void)
{
    return 0x87a100060004ll;
}

#define typedef_CAVM_CST_SHRD_ETR_RSZ cavm_cst_shrd_etr_rsz_t
#define bustype_CAVM_CST_SHRD_ETR_RSZ CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_RSZ "CST_SHRD_ETR_RSZ"
#define busnum_CAVM_CST_SHRD_ETR_RSZ 0
#define arguments_CAVM_CST_SHRD_ETR_RSZ -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_rurp
 *
 * CST Shrd Etr Rurp Register
 * The RURP register enables software to inform the TMC of the amount of trace data
 * that is extracted directly from system memory in SWF2 mode. Writes to this register
 * are ignored when the TMC is in Disabled state or when not in SWF2 mode.
 */
union cavm_cst_shrd_etr_rurp
{
    uint32_t u;
    struct cavm_cst_shrd_etr_rurp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 11; /**< [ 31: 21](WO) Read-As-Zero, Writes Ignored. */
        uint32_t rurp                  : 21; /**< [ 20:  0](WO) RAM Update Read Pointer. A write to the RURP register causes the TMC to update
                                                                 the RAM Read Pointer, both the RRP and RRPHI registers, based on the value that
                                                                 is written to it. RURP allows up to 1MB of data to be extracted in a single
                                                                 chunk. Reads always return 0x0. The following constraints apply to the write
                                                                 values: 0x000000 - no effect, 0x000010-0x100000 - increment RRP by this value,
                                                                 0x100010-0x1FFFFF - reserved. The programmed value must also be aligned to the
                                                                 Trace Memory Data Width and the Frame Width. Programming an unaligned or
                                                                 reserved value results in UNPREDICTABLE behavior. */
#else /* Word 0 - Little Endian */
        uint32_t rurp                  : 21; /**< [ 20:  0](WO) RAM Update Read Pointer. A write to the RURP register causes the TMC to update
                                                                 the RAM Read Pointer, both the RRP and RRPHI registers, based on the value that
                                                                 is written to it. RURP allows up to 1MB of data to be extracted in a single
                                                                 chunk. Reads always return 0x0. The following constraints apply to the write
                                                                 values: 0x000000 - no effect, 0x000010-0x100000 - increment RRP by this value,
                                                                 0x100010-0x1FFFFF - reserved. The programmed value must also be aligned to the
                                                                 Trace Memory Data Width and the Frame Width. Programming an unaligned or
                                                                 reserved value results in UNPREDICTABLE behavior. */
        uint32_t razwi_0               : 11; /**< [ 31: 21](WO) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_rurp_s cn; */
};
typedef union cavm_cst_shrd_etr_rurp cavm_cst_shrd_etr_rurp_t;

#define CAVM_CST_SHRD_ETR_RURP CAVM_CST_SHRD_ETR_RURP_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_RURP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_RURP_FUNC(void)
{
    return 0x87a100060120ll;
}

#define typedef_CAVM_CST_SHRD_ETR_RURP cavm_cst_shrd_etr_rurp_t
#define bustype_CAVM_CST_SHRD_ETR_RURP CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_RURP "CST_SHRD_ETR_RURP"
#define busnum_CAVM_CST_SHRD_ETR_RURP 0
#define arguments_CAVM_CST_SHRD_ETR_RURP -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_rwd
 *
 * CST Shrd Etr Rwd Register
 * The RAM Write Data register enables testing of trace memory connectivity to the TMC.
 * Writing this register allows data to be written to the trace memory at the location
 * pointed to by the RWP/RWPHI registers when in the Disabled state. When
 * ATB_DATA_WIDTH is 32, 64 or 128 bit wide the AXI data width is the same and a memory
 * word holds 4, 8, or 16 bytes. When ATB_DATA_WIDTH is 64 or 128 bit wide multiple RWD
 * writes must be performed to write a full memory word. When a full memory width of
 * data has been written via the RWD register, the data is written to the trace memory
 * and the RWP register is incremented to the next memory word.  When the STS.MemErr
 * bit is set, writing to this register returns an error response on the APB interface
 * and the write data is discarded.
 */
union cavm_cst_shrd_etr_rwd
{
    uint32_t u;
    struct cavm_cst_shrd_etr_rwd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rwd                   : 32; /**< [ 31:  0](WO) Data written to this register is placed in the trace memory. */
#else /* Word 0 - Little Endian */
        uint32_t rwd                   : 32; /**< [ 31:  0](WO) Data written to this register is placed in the trace memory. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_rwd_s cn; */
};
typedef union cavm_cst_shrd_etr_rwd cavm_cst_shrd_etr_rwd_t;

#define CAVM_CST_SHRD_ETR_RWD CAVM_CST_SHRD_ETR_RWD_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_RWD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_RWD_FUNC(void)
{
    return 0x87a100060024ll;
}

#define typedef_CAVM_CST_SHRD_ETR_RWD cavm_cst_shrd_etr_rwd_t
#define bustype_CAVM_CST_SHRD_ETR_RWD CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_RWD "CST_SHRD_ETR_RWD"
#define busnum_CAVM_CST_SHRD_ETR_RWD 0
#define arguments_CAVM_CST_SHRD_ETR_RWD -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_rwp
 *
 * CST Shrd Etr Rwp Register
 * RAM Write Pointer Register sets the write pointer that is used to write entries into
 * the trace memory. Software must program it before enabling trace capture.
 */
union cavm_cst_shrd_etr_rwp
{
    uint32_t u;
    struct cavm_cst_shrd_etr_rwp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rwp                   : 32; /**< [ 31:  0](R/W) This register represents the lower 32 bits of the AXI address that is used to
                                                                 access the trace memory with RRD read acesses. When ATB_DATA_WIDTH is 32, 64 or
                                                                 128 bit wide the AXI data width is the same and a memory word holds 4, 8, or 16
                                                                 bytes. When a full memory width of data has been written via the RWD register,
                                                                 the RWP register is incremented to the next memory word. Some of the lower bits
                                                                 have access type RAZ/WI. The number of bits is calculated as
                                                                 log2(ATB_DATA_WIDTH/8). When the AXI_ADDR_WIDTH is 0, this register is reserved
                                                                 and access type is RAZ/WI. */
#else /* Word 0 - Little Endian */
        uint32_t rwp                   : 32; /**< [ 31:  0](R/W) This register represents the lower 32 bits of the AXI address that is used to
                                                                 access the trace memory with RRD read acesses. When ATB_DATA_WIDTH is 32, 64 or
                                                                 128 bit wide the AXI data width is the same and a memory word holds 4, 8, or 16
                                                                 bytes. When a full memory width of data has been written via the RWD register,
                                                                 the RWP register is incremented to the next memory word. Some of the lower bits
                                                                 have access type RAZ/WI. The number of bits is calculated as
                                                                 log2(ATB_DATA_WIDTH/8). When the AXI_ADDR_WIDTH is 0, this register is reserved
                                                                 and access type is RAZ/WI. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_rwp_s cn; */
};
typedef union cavm_cst_shrd_etr_rwp cavm_cst_shrd_etr_rwp_t;

#define CAVM_CST_SHRD_ETR_RWP CAVM_CST_SHRD_ETR_RWP_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_RWP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_RWP_FUNC(void)
{
    return 0x87a100060018ll;
}

#define typedef_CAVM_CST_SHRD_ETR_RWP cavm_cst_shrd_etr_rwp_t
#define bustype_CAVM_CST_SHRD_ETR_RWP CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_RWP "CST_SHRD_ETR_RWP"
#define busnum_CAVM_CST_SHRD_ETR_RWP 0
#define arguments_CAVM_CST_SHRD_ETR_RWP -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_rwphi
 *
 * CST Shrd Etr Rwphi Register
 * The RAM Write Pointer High register sets bits \>= bit[32] of the write pointer that
 * is used to write entries into the trace memory. Software must program it before
 * enabling trace capture.
 */
union cavm_cst_shrd_etr_rwphi
{
    uint32_t u;
    struct cavm_cst_shrd_etr_rwphi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 24; /**< [ 31:  8](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t rwphi                 : 8;  /**< [  7:  0](R/W) RAM Write Pointer High. Bits [32] and above of the RAM write pointer. */
#else /* Word 0 - Little Endian */
        uint32_t rwphi                 : 8;  /**< [  7:  0](R/W) RAM Write Pointer High. Bits [32] and above of the RAM write pointer. */
        uint32_t razwi_0               : 24; /**< [ 31:  8](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_rwphi_s cn; */
};
typedef union cavm_cst_shrd_etr_rwphi cavm_cst_shrd_etr_rwphi_t;

#define CAVM_CST_SHRD_ETR_RWPHI CAVM_CST_SHRD_ETR_RWPHI_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_RWPHI_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_RWPHI_FUNC(void)
{
    return 0x87a10006003cll;
}

#define typedef_CAVM_CST_SHRD_ETR_RWPHI cavm_cst_shrd_etr_rwphi_t
#define bustype_CAVM_CST_SHRD_ETR_RWPHI CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_RWPHI "CST_SHRD_ETR_RWPHI"
#define busnum_CAVM_CST_SHRD_ETR_RWPHI 0
#define arguments_CAVM_CST_SHRD_ETR_RWPHI -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_sts
 *
 * CST Shrd Etr Sts Register
 * Indicates the status of the Trace Memory Controller. After a reset, software must
 * ignore all the fields of this register except STS.TMCReady. The other fields have
 * meaning only when the TMC has left the Disabled state. Writes to all RO fields of
 * this register are ignored.
 */
union cavm_cst_shrd_etr_sts
{
    uint32_t u;
    struct cavm_cst_shrd_etr_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t razwi_0               : 26; /**< [ 31:  6](R/W) Read-As-Zero, Writes Ignored. */
        uint32_t memerr                : 1;  /**< [  5:  5](R/W) Memory error status. This bit indicates whether an error has occurred on the AXI
                                                                 master interface. The error could be due to an error response received from the
                                                                 connected AXI slave or due to attempted AXI transfers without proper
                                                                 authentication. */
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
                                                                 the trace memory, and reading from trace memory completed as a result of final
                                                                 AXI write completing */
        uint32_t triggered             : 1;  /**< [  1:  1](RO) TMC triggered. This bit is set when trace capture is in progress and the TMC has
                                                                 detected a trigger event. This bit is cleared to 0 when leaving the Disabled
                                                                 state and retains its value when entering the Disabled state. A trigger event is
                                                                 when the TMC has written a set number of data words, as programmed in the TRG
                                                                 register, into the trace memory after a rising edge of trigin input, or a
                                                                 trigger packet (atid_s = 0x7D) is received in the input trace. */
        uint32_t full                  : 1;  /**< [  0:  0](R/W) Trace memory full. This bit helps in determining the amount of valid data
                                                                 present in the trace memory. Writes to this bit are allowed in Disabled state.
                                                                 However, it is not affected by the reprogramming of pointer registers in this
                                                                 state. In Circular Buffer mode, this flag is set when the RAM write pointer
                                                                 wraps around the top of the buffer, and remains set until the TraceCaptEn bit is
                                                                 cleared and set. In Software FIFO mode, this flag indicates that the current
                                                                 space in the trace memory is less than or equal to the value programmed in the
                                                                 BUFWM Register, that is, Fill level \>= MEM_SIZE - BUFWM. The FULL output from
                                                                 the TMC reflects the value of this register bit, except when the Integration
                                                                 Mode bit in the ITCTRL Register, 0xF00, is set. */
#else /* Word 0 - Little Endian */
        uint32_t full                  : 1;  /**< [  0:  0](R/W) Trace memory full. This bit helps in determining the amount of valid data
                                                                 present in the trace memory. Writes to this bit are allowed in Disabled state.
                                                                 However, it is not affected by the reprogramming of pointer registers in this
                                                                 state. In Circular Buffer mode, this flag is set when the RAM write pointer
                                                                 wraps around the top of the buffer, and remains set until the TraceCaptEn bit is
                                                                 cleared and set. In Software FIFO mode, this flag indicates that the current
                                                                 space in the trace memory is less than or equal to the value programmed in the
                                                                 BUFWM Register, that is, Fill level \>= MEM_SIZE - BUFWM. The FULL output from
                                                                 the TMC reflects the value of this register bit, except when the Integration
                                                                 Mode bit in the ITCTRL Register, 0xF00, is set. */
        uint32_t triggered             : 1;  /**< [  1:  1](RO) TMC triggered. This bit is set when trace capture is in progress and the TMC has
                                                                 detected a trigger event. This bit is cleared to 0 when leaving the Disabled
                                                                 state and retains its value when entering the Disabled state. A trigger event is
                                                                 when the TMC has written a set number of data words, as programmed in the TRG
                                                                 register, into the trace memory after a rising edge of trigin input, or a
                                                                 trigger packet (atid_s = 0x7D) is received in the input trace. */
        uint32_t tmcready              : 1;  /**< [  2:  2](RO) Trace capture has been completed, all captured trace data has been written to
                                                                 the trace memory, and reading from trace memory completed as a result of final
                                                                 AXI write completing */
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
        uint32_t memerr                : 1;  /**< [  5:  5](R/W) Memory error status. This bit indicates whether an error has occurred on the AXI
                                                                 master interface. The error could be due to an error response received from the
                                                                 connected AXI slave or due to attempted AXI transfers without proper
                                                                 authentication. */
        uint32_t razwi_0               : 26; /**< [ 31:  6](R/W) Read-As-Zero, Writes Ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_sts_s cn; */
};
typedef union cavm_cst_shrd_etr_sts cavm_cst_shrd_etr_sts_t;

#define CAVM_CST_SHRD_ETR_STS CAVM_CST_SHRD_ETR_STS_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_STS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_STS_FUNC(void)
{
    return 0x87a10006000cll;
}

#define typedef_CAVM_CST_SHRD_ETR_STS cavm_cst_shrd_etr_sts_t
#define bustype_CAVM_CST_SHRD_ETR_STS CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_STS "CST_SHRD_ETR_STS"
#define busnum_CAVM_CST_SHRD_ETR_STS 0
#define arguments_CAVM_CST_SHRD_ETR_STS -1,-1,-1,-1

/**
 * Register (NCB32b) cst_shrd_etr_trg
 *
 * CST Shrd Etr Trg Register
 * In Circular Buffer mode, the Trigger Counter register specifies the number of 32-bit
 * words to capture in the trace memory, after detection of either a rising edge on the
 * trigin input or a trigger packet in the incoming trace stream, that is, where atid_s
 * = 0x7D. The value programmed must be aligned to the frame length of 128 bits.
 * Software must program this register before leaving Disabled state.
 */
union cavm_cst_shrd_etr_trg
{
    uint32_t u;
    struct cavm_cst_shrd_etr_trg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t trg                   : 32; /**< [ 31:  0](R/W) Trigger count. This count represents the number of 32-bit words of trace that
                                                                 are captured between a trigger packet and a trigger event. The lowest two bits
                                                                 have access type RAZ/WI. */
#else /* Word 0 - Little Endian */
        uint32_t trg                   : 32; /**< [ 31:  0](R/W) Trigger count. This count represents the number of 32-bit words of trace that
                                                                 are captured between a trigger packet and a trigger event. The lowest two bits
                                                                 have access type RAZ/WI. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_shrd_etr_trg_s cn; */
};
typedef union cavm_cst_shrd_etr_trg cavm_cst_shrd_etr_trg_t;

#define CAVM_CST_SHRD_ETR_TRG CAVM_CST_SHRD_ETR_TRG_FUNC()
static inline uint64_t CAVM_CST_SHRD_ETR_TRG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_SHRD_ETR_TRG_FUNC(void)
{
    return 0x87a10006001cll;
}

#define typedef_CAVM_CST_SHRD_ETR_TRG cavm_cst_shrd_etr_trg_t
#define bustype_CAVM_CST_SHRD_ETR_TRG CSR_TYPE_NCB32b
#define basename_CAVM_CST_SHRD_ETR_TRG "CST_SHRD_ETR_TRG"
#define busnum_CAVM_CST_SHRD_ETR_TRG 0
#define arguments_CAVM_CST_SHRD_ETR_TRG -1,-1,-1,-1

#endif /* __CAVM_CSRS_CST_SHRD_ETR_H__ */
