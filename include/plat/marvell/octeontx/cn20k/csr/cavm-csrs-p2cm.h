#ifndef __CAVM_CSRS_P2CM_H__
#define __CAVM_CSRS_P2CM_H__
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
 * P2CM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration p2cm_bar_e
 *
 * P2CM Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_P2CM_BAR_E_P2CMX_PF_BAR0(a) (0x87e114000000ll + 0x1000000ll * (a))
#define CAVM_P2CM_BAR_E_P2CMX_PF_BAR0_SIZE 0x10000ull
#define CAVM_P2CM_BAR_E_P2CMX_PF_BAR4(a) (0x87e114f00000ll + 0x1000000ll * (a))
#define CAVM_P2CM_BAR_E_P2CMX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration p2cm_int_vec_e
 *
 * P2CM MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_P2CM_INT_VEC_E_INT_ST (0)

/**
 * Register (RSL) p2cm#_access_wdog
 *
 * P2CM Watch Dog Register
 * This register contains the watch dog control register.
 */
union cavm_p2cmx_access_wdog
{
    uint64_t u;
    struct cavm_p2cmx_access_wdog_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t wdog_cnt              : 32; /**< [ 31:  0](R/W) Number of maximum TCLK clocks (defined by P2CM_CLK control THP) allowed for the
                                                                 P2CM high-level controller (HLC) to stay in one state other than idle
                                                                 state. Hardware will halt the operation if HLC is stuck longer than this delay
                                                                 and P2CM()_INT[ST_INT] interrupt will be generated and error code 0xF0 also
                                                                 reported by P2CM()_SW_P2CM[DATA]. Setting [WDOG_CNT] to 0x0 disables the
                                                                 watch dog function. */
#else /* Word 0 - Little Endian */
        uint64_t wdog_cnt              : 32; /**< [ 31:  0](R/W) Number of maximum TCLK clocks (defined by P2CM_CLK control THP) allowed for the
                                                                 P2CM high-level controller (HLC) to stay in one state other than idle
                                                                 state. Hardware will halt the operation if HLC is stuck longer than this delay
                                                                 and P2CM()_INT[ST_INT] interrupt will be generated and error code 0xF0 also
                                                                 reported by P2CM()_SW_P2CM[DATA]. Setting [WDOG_CNT] to 0x0 disables the
                                                                 watch dog function. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_p2cmx_access_wdog_s cn; */
};
typedef union cavm_p2cmx_access_wdog cavm_p2cmx_access_wdog_t;

static inline uint64_t CAVM_P2CMX_ACCESS_WDOG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_P2CMX_ACCESS_WDOG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e114001040ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("P2CMX_ACCESS_WDOG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_P2CMX_ACCESS_WDOG(a) cavm_p2cmx_access_wdog_t
#define bustype_CAVM_P2CMX_ACCESS_WDOG(a) CSR_TYPE_RSL
#define basename_CAVM_P2CMX_ACCESS_WDOG(a) "P2CMX_ACCESS_WDOG"
#define device_bar_CAVM_P2CMX_ACCESS_WDOG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_P2CMX_ACCESS_WDOG(a) (a)
#define arguments_CAVM_P2CMX_ACCESS_WDOG(a) (a),-1,-1,-1

/**
 * Register (RSL) p2cm#_clken
 *
 * MIO Clock Enable Register
 * This register controls conditional clocks.
 */
union cavm_p2cmx_clken
{
    uint64_t u;
    struct cavm_p2cmx_clken_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t clken                 : 1;  /**< [  0:  0](R/W) Force the P2CM interface conditional clocking to be always on. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t clken                 : 1;  /**< [  0:  0](R/W) Force the P2CM interface conditional clocking to be always on. For diagnostic use only. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_p2cmx_clken_s cn; */
};
typedef union cavm_p2cmx_clken cavm_p2cmx_clken_t;

static inline uint64_t CAVM_P2CMX_CLKEN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_P2CMX_CLKEN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e114001078ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("P2CMX_CLKEN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_P2CMX_CLKEN(a) cavm_p2cmx_clken_t
#define bustype_CAVM_P2CMX_CLKEN(a) CSR_TYPE_RSL
#define basename_CAVM_P2CMX_CLKEN(a) "P2CMX_CLKEN"
#define device_bar_CAVM_P2CMX_CLKEN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_P2CMX_CLKEN(a) (a)
#define arguments_CAVM_P2CMX_CLKEN(a) (a),-1,-1,-1

/**
 * Register (RSL) p2cm#_const
 *
 * P2CM Constants Register
 * This register contains constants for software discovery.
 */
union cavm_p2cmx_const
{
    uint64_t u;
    struct cavm_p2cmx_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t ver                   : 8;  /**< [  7:  0](RO) P2CM version. */
#else /* Word 0 - Little Endian */
        uint64_t ver                   : 8;  /**< [  7:  0](RO) P2CM version. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_p2cmx_const_s cn; */
};
typedef union cavm_p2cmx_const cavm_p2cmx_const_t;

static inline uint64_t CAVM_P2CMX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_P2CMX_CONST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e114000000ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("P2CMX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_P2CMX_CONST(a) cavm_p2cmx_const_t
#define bustype_CAVM_P2CMX_CONST(a) CSR_TYPE_RSL
#define basename_CAVM_P2CMX_CONST(a) "P2CMX_CONST"
#define device_bar_CAVM_P2CMX_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_P2CMX_CONST(a) (a)
#define arguments_CAVM_P2CMX_CONST(a) (a),-1,-1,-1

/**
 * Register (RSL) p2cm#_int
 *
 * P2CM Interrupt Register
 * This register contains the P2CM interrupt-source bits and SDA/SCL override bits.
 */
union cavm_p2cmx_int
{
    uint64_t u;
    struct cavm_p2cmx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t scl                   : 1;  /**< [ 11: 11](RO/H) SCL signal. */
        uint64_t sda                   : 1;  /**< [ 10: 10](RO/H) SDA signal. */
        uint64_t scl_ovr               : 1;  /**< [  9:  9](R/W) SCL testing override:
                                                                 0 = Normal operation, SCL bus controlled by P2CM core.
                                                                 1 = Pull SCL low. */
        uint64_t sda_ovr               : 1;  /**< [  8:  8](R/W) SDA testing override:
                                                                 0 = Normal operation, SDA bus controlled by P2CM core.
                                                                 1 = Pull SDA low. */
        uint64_t reserved_4_7          : 4;
        uint64_t block_int             : 1;  /**< [  3:  3](R/W1C/H) BLOCK transaction threshold interrupt. Interrupt fires when the remaining
                                                                 bytes to be sent/received is less than threshold P2CM()_P2CM_BLOCK_CTL[BLOCK_THRESH].
                                                                 Only valid in HLC BlOCK_MODE. Ignored when BLOCK mode is disabled. */
        uint64_t core_int              : 1;  /**< [  2:  2](RO/H) P2CM core interrupt, whenever IFLG is set. Ignored when the HLC is enabled.
                                                                 In order to clear [CORE_INT], software needs to write 0 to P2CM_CTL[IFLG]. */
        uint64_t ts_int                : 1;  /**< [  1:  1](R/W1C/H) P2CM()_P2CM_SW register-update interrupt. Only valid in HLC mode.
                                                                 Ignored when HLC is disabled. */
        uint64_t st_int                : 1;  /**< [  0:  0](R/W1C/H) P2CM()_SW_P2CM register-update interrupt.  Only valid in HLC mode.
                                                                 Ignored when HLC is disabled. */
#else /* Word 0 - Little Endian */
        uint64_t st_int                : 1;  /**< [  0:  0](R/W1C/H) P2CM()_SW_P2CM register-update interrupt.  Only valid in HLC mode.
                                                                 Ignored when HLC is disabled. */
        uint64_t ts_int                : 1;  /**< [  1:  1](R/W1C/H) P2CM()_P2CM_SW register-update interrupt. Only valid in HLC mode.
                                                                 Ignored when HLC is disabled. */
        uint64_t core_int              : 1;  /**< [  2:  2](RO/H) P2CM core interrupt, whenever IFLG is set. Ignored when the HLC is enabled.
                                                                 In order to clear [CORE_INT], software needs to write 0 to P2CM_CTL[IFLG]. */
        uint64_t block_int             : 1;  /**< [  3:  3](R/W1C/H) BLOCK transaction threshold interrupt. Interrupt fires when the remaining
                                                                 bytes to be sent/received is less than threshold P2CM()_P2CM_BLOCK_CTL[BLOCK_THRESH].
                                                                 Only valid in HLC BlOCK_MODE. Ignored when BLOCK mode is disabled. */
        uint64_t reserved_4_7          : 4;
        uint64_t sda_ovr               : 1;  /**< [  8:  8](R/W) SDA testing override:
                                                                 0 = Normal operation, SDA bus controlled by P2CM core.
                                                                 1 = Pull SDA low. */
        uint64_t scl_ovr               : 1;  /**< [  9:  9](R/W) SCL testing override:
                                                                 0 = Normal operation, SCL bus controlled by P2CM core.
                                                                 1 = Pull SCL low. */
        uint64_t sda                   : 1;  /**< [ 10: 10](RO/H) SDA signal. */
        uint64_t scl                   : 1;  /**< [ 11: 11](RO/H) SCL signal. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_p2cmx_int_s cn; */
};
typedef union cavm_p2cmx_int cavm_p2cmx_int_t;

static inline uint64_t CAVM_P2CMX_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_P2CMX_INT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e114001010ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("P2CMX_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_P2CMX_INT(a) cavm_p2cmx_int_t
#define bustype_CAVM_P2CMX_INT(a) CSR_TYPE_RSL
#define basename_CAVM_P2CMX_INT(a) "P2CMX_INT"
#define device_bar_CAVM_P2CMX_INT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_P2CMX_INT(a) (a)
#define arguments_CAVM_P2CMX_INT(a) (a),-1,-1,-1

/**
 * Register (RSL) p2cm#_int_ena_w1c
 *
 * P2CM Interrupt Enable Clear Register
 */
union cavm_p2cmx_int_ena_w1c
{
    uint64_t u;
    struct cavm_p2cmx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t block_int             : 1;  /**< [  3:  3](R/W1C/H) Reads or clears P2CM()_INT[BLOCK_INT]. */
        uint64_t core_int              : 1;  /**< [  2:  2](R/W1C/H) Reads or clears P2CM()_INT[CORE_INT]. */
        uint64_t ts_int                : 1;  /**< [  1:  1](R/W1C/H) Reads or clears P2CM()_INT[TS_INT]. */
        uint64_t st_int                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears P2CM()_INT[ST_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t st_int                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears P2CM()_INT[ST_INT]. */
        uint64_t ts_int                : 1;  /**< [  1:  1](R/W1C/H) Reads or clears P2CM()_INT[TS_INT]. */
        uint64_t core_int              : 1;  /**< [  2:  2](R/W1C/H) Reads or clears P2CM()_INT[CORE_INT]. */
        uint64_t block_int             : 1;  /**< [  3:  3](R/W1C/H) Reads or clears P2CM()_INT[BLOCK_INT]. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_p2cmx_int_ena_w1c_s cn; */
};
typedef union cavm_p2cmx_int_ena_w1c cavm_p2cmx_int_ena_w1c_t;

static inline uint64_t CAVM_P2CMX_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_P2CMX_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e114001028ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("P2CMX_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_P2CMX_INT_ENA_W1C(a) cavm_p2cmx_int_ena_w1c_t
#define bustype_CAVM_P2CMX_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_P2CMX_INT_ENA_W1C(a) "P2CMX_INT_ENA_W1C"
#define device_bar_CAVM_P2CMX_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_P2CMX_INT_ENA_W1C(a) (a)
#define arguments_CAVM_P2CMX_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) p2cm#_int_ena_w1s
 *
 * P2CM Interrupt Enable Set Register
 */
union cavm_p2cmx_int_ena_w1s
{
    uint64_t u;
    struct cavm_p2cmx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t block_int             : 1;  /**< [  3:  3](R/W1S/H) Enables reporting of P2CM()_INT[BLOCK_INT]. */
        uint64_t core_int              : 1;  /**< [  2:  2](R/W1S/H) Enables reporting of P2CM()_INT[CORE_INT]. */
        uint64_t ts_int                : 1;  /**< [  1:  1](R/W1S/H) Enables reporting of P2CM()_INT[TS_INT]. */
        uint64_t st_int                : 1;  /**< [  0:  0](R/W1S/H) Enables reporting of P2CM()_INT[ST_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t st_int                : 1;  /**< [  0:  0](R/W1S/H) Enables reporting of P2CM()_INT[ST_INT]. */
        uint64_t ts_int                : 1;  /**< [  1:  1](R/W1S/H) Enables reporting of P2CM()_INT[TS_INT]. */
        uint64_t core_int              : 1;  /**< [  2:  2](R/W1S/H) Enables reporting of P2CM()_INT[CORE_INT]. */
        uint64_t block_int             : 1;  /**< [  3:  3](R/W1S/H) Enables reporting of P2CM()_INT[BLOCK_INT]. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_p2cmx_int_ena_w1s_s cn; */
};
typedef union cavm_p2cmx_int_ena_w1s cavm_p2cmx_int_ena_w1s_t;

static inline uint64_t CAVM_P2CMX_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_P2CMX_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e114001030ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("P2CMX_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_P2CMX_INT_ENA_W1S(a) cavm_p2cmx_int_ena_w1s_t
#define bustype_CAVM_P2CMX_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_P2CMX_INT_ENA_W1S(a) "P2CMX_INT_ENA_W1S"
#define device_bar_CAVM_P2CMX_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_P2CMX_INT_ENA_W1S(a) (a)
#define arguments_CAVM_P2CMX_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) p2cm#_int_w1s
 *
 * P2CM Interrupt Set Register
 */
union cavm_p2cmx_int_w1s
{
    uint64_t u;
    struct cavm_p2cmx_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t block_int             : 1;  /**< [  3:  3](R/W1S/H) Reads or sets P2CM()_INT[BLOCK_INT]. */
        uint64_t core_int              : 1;  /**< [  2:  2](RO/H) Reads P2CM()_INT[CORE_INT]. */
        uint64_t ts_int                : 1;  /**< [  1:  1](R/W1S/H) Reads or sets P2CM()_INT[TS_INT]. */
        uint64_t st_int                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets P2CM()_INT[ST_INT]. */
#else /* Word 0 - Little Endian */
        uint64_t st_int                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets P2CM()_INT[ST_INT]. */
        uint64_t ts_int                : 1;  /**< [  1:  1](R/W1S/H) Reads or sets P2CM()_INT[TS_INT]. */
        uint64_t core_int              : 1;  /**< [  2:  2](RO/H) Reads P2CM()_INT[CORE_INT]. */
        uint64_t block_int             : 1;  /**< [  3:  3](R/W1S/H) Reads or sets P2CM()_INT[BLOCK_INT]. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_p2cmx_int_w1s_s cn; */
};
typedef union cavm_p2cmx_int_w1s cavm_p2cmx_int_w1s_t;

static inline uint64_t CAVM_P2CMX_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_P2CMX_INT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e114001020ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("P2CMX_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_P2CMX_INT_W1S(a) cavm_p2cmx_int_w1s_t
#define bustype_CAVM_P2CMX_INT_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_P2CMX_INT_W1S(a) "P2CMX_INT_W1S"
#define device_bar_CAVM_P2CMX_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_P2CMX_INT_W1S(a) (a)
#define arguments_CAVM_P2CMX_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) p2cm#_io_ctl
 *
 * MIO P2CM IO Control Register
 * This register control the P2CM IO drive strength and slew rates. Index {a} of zero
 * (P2CM(0)_IO_CTL) is used to control all P2CM outputs on CNXXXX; other index
 * values have no effect.
 */
union cavm_p2cmx_io_ctl
{
    uint64_t u;
    struct cavm_p2cmx_io_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t drive                 : 2;  /**< [  3:  2](R/W) P2CM bus pin output impedance.
                                                                 0x0 = 55 ohm.
                                                                 0x1 = 45 ohm.
                                                                 0x2 = 33 ohm.
                                                                 0x3 = 20 ohm. */
        uint64_t slew                  : 2;  /**< [  1:  0](R/W) P2CM bus pins output slew rate control.
                                                                 0x0 = Weakest.
                                                                 _ ...
                                                                 0x3 = Strongest. */
#else /* Word 0 - Little Endian */
        uint64_t slew                  : 2;  /**< [  1:  0](R/W) P2CM bus pins output slew rate control.
                                                                 0x0 = Weakest.
                                                                 _ ...
                                                                 0x3 = Strongest. */
        uint64_t drive                 : 2;  /**< [  3:  2](R/W) P2CM bus pin output impedance.
                                                                 0x0 = 55 ohm.
                                                                 0x1 = 45 ohm.
                                                                 0x2 = 33 ohm.
                                                                 0x3 = 20 ohm. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_p2cmx_io_ctl_s cn; */
};
typedef union cavm_p2cmx_io_ctl cavm_p2cmx_io_ctl_t;

static inline uint64_t CAVM_P2CMX_IO_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_P2CMX_IO_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e114001070ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("P2CMX_IO_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_P2CMX_IO_CTL(a) cavm_p2cmx_io_ctl_t
#define bustype_CAVM_P2CMX_IO_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_P2CMX_IO_CTL(a) "P2CMX_IO_CTL"
#define device_bar_CAVM_P2CMX_IO_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_P2CMX_IO_CTL(a) (a)
#define arguments_CAVM_P2CMX_IO_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) p2cm#_mode
 *
 * P2CM Mode and Control Register
 */
union cavm_p2cmx_mode
{
    uint64_t u;
    struct cavm_p2cmx_mode_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t blk_arf_no_rsp        : 1;  /**< [  5:  5](R/W) No_response is generally used for broadcast writes where only one of the
                                                                 recipients of the write request issues a
                                                                 response, and all other recipients do not (ARF requires exactly one response be
                                                                 issued per request).
                                                                 Blocks that do not utilize broadcasts may tie this input low. */
        uint64_t refclk_src            : 1;  /**< [  4:  4](R/W) Reference clock source used to generate P2CM clock. See P2CM_CLK and P2CM_CLKCTL for
                                                                 details.
                                                                   0 = 100 MHz input reference generates P2CM clock.
                                                                   1 = Coprocessor clock generates P2CM clock. */
        uint64_t bus_mon_rst           : 1;  /**< [  3:  3](WO/H) Reset the P2CM bus monitor for both HLC and non-HLC mode.
                                                                 When P2CM bus in hang state with a timeout interrupt, it is possible that the P2CM bus
                                                                 monitor still waiting for STP on the bus before accepting any new commands.
                                                                 Write 1 to send a pulse to reset interface monitor back to the initial condition. */
        uint64_t block_mode            : 1;  /**< [  2:  2](R/W) Block transfer mode in HLC, only valid in HLC mode.
                                                                 When device is enabled to block transfer mode, software can access P2CM data through a
                                                                 FIFO interface.  Software needs to write to P2CM()_P2CM_BLOCK_CTL[BLOCK_SIZE] with
                                                                 the number of bytes to be transfered/received. */
        uint64_t stretch               : 1;  /**< [  1:  1](R/W) Clock stretching enable.
                                                                 When enabled and device in non-HLC master mode, it allows slave device
                                                                 to extend low period of the clock. During the clock extension period, the SCL output from
                                                                 master device is disabled. */
        uint64_t hs_mode               : 1;  /**< [  0:  0](R/W) I2C bus high-speed mode.

                                                                 0 = Open drain drive on P2CM_SCL. P2CM_SCL clock signal high-to-low ratio is 1 to 1.
                                                                 OSCL output frequency divisor is 10.

                                                                 1 = Current sourced circuit is used to drive P2CM_SCL pin when device is in master mode,
                                                                 but disabled after each repeated start condition
                                                                 and after each ACK or NACK to give a slave a chance to stretch the clock.
                                                                 P2CM_SCL clock signal high-to-low ratio is 1 to 2.
                                                                 OSCL output frequency divisor is 15. */
#else /* Word 0 - Little Endian */
        uint64_t hs_mode               : 1;  /**< [  0:  0](R/W) I2C bus high-speed mode.

                                                                 0 = Open drain drive on P2CM_SCL. P2CM_SCL clock signal high-to-low ratio is 1 to 1.
                                                                 OSCL output frequency divisor is 10.

                                                                 1 = Current sourced circuit is used to drive P2CM_SCL pin when device is in master mode,
                                                                 but disabled after each repeated start condition
                                                                 and after each ACK or NACK to give a slave a chance to stretch the clock.
                                                                 P2CM_SCL clock signal high-to-low ratio is 1 to 2.
                                                                 OSCL output frequency divisor is 15. */
        uint64_t stretch               : 1;  /**< [  1:  1](R/W) Clock stretching enable.
                                                                 When enabled and device in non-HLC master mode, it allows slave device
                                                                 to extend low period of the clock. During the clock extension period, the SCL output from
                                                                 master device is disabled. */
        uint64_t block_mode            : 1;  /**< [  2:  2](R/W) Block transfer mode in HLC, only valid in HLC mode.
                                                                 When device is enabled to block transfer mode, software can access P2CM data through a
                                                                 FIFO interface.  Software needs to write to P2CM()_P2CM_BLOCK_CTL[BLOCK_SIZE] with
                                                                 the number of bytes to be transfered/received. */
        uint64_t bus_mon_rst           : 1;  /**< [  3:  3](WO/H) Reset the P2CM bus monitor for both HLC and non-HLC mode.
                                                                 When P2CM bus in hang state with a timeout interrupt, it is possible that the P2CM bus
                                                                 monitor still waiting for STP on the bus before accepting any new commands.
                                                                 Write 1 to send a pulse to reset interface monitor back to the initial condition. */
        uint64_t refclk_src            : 1;  /**< [  4:  4](R/W) Reference clock source used to generate P2CM clock. See P2CM_CLK and P2CM_CLKCTL for
                                                                 details.
                                                                   0 = 100 MHz input reference generates P2CM clock.
                                                                   1 = Coprocessor clock generates P2CM clock. */
        uint64_t blk_arf_no_rsp        : 1;  /**< [  5:  5](R/W) No_response is generally used for broadcast writes where only one of the
                                                                 recipients of the write request issues a
                                                                 response, and all other recipients do not (ARF requires exactly one response be
                                                                 issued per request).
                                                                 Blocks that do not utilize broadcasts may tie this input low. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_p2cmx_mode_s cn; */
};
typedef union cavm_p2cmx_mode cavm_p2cmx_mode_t;

static inline uint64_t CAVM_P2CMX_MODE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_P2CMX_MODE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e114001038ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("P2CMX_MODE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_P2CMX_MODE(a) cavm_p2cmx_mode_t
#define bustype_CAVM_P2CMX_MODE(a) CSR_TYPE_RSL
#define basename_CAVM_P2CMX_MODE(a) "P2CMX_MODE"
#define device_bar_CAVM_P2CMX_MODE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_P2CMX_MODE(a) (a)
#define arguments_CAVM_P2CMX_MODE(a) (a),-1,-1,-1

/**
 * Register (RSL) p2cm#_msix_pba#
 *
 * P2CM MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the P2CM_INT_VEC_E
 * enumeration.
 */
union cavm_p2cmx_msix_pbax
{
    uint64_t u;
    struct cavm_p2cmx_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated P2CM()_MSIX_VEC()_CTL, enumerated by
                                                                 P2CM_INT_VEC_E. Bits that have no associated P2CM_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated P2CM()_MSIX_VEC()_CTL, enumerated by
                                                                 P2CM_INT_VEC_E. Bits that have no associated P2CM_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_p2cmx_msix_pbax_s cn; */
};
typedef union cavm_p2cmx_msix_pbax cavm_p2cmx_msix_pbax_t;

static inline uint64_t CAVM_P2CMX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_P2CMX_MSIX_PBAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b==0)))
        return 0x87e114ff0000ll + 0x1000000ll * ((a) & 0x3) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("P2CMX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_P2CMX_MSIX_PBAX(a,b) cavm_p2cmx_msix_pbax_t
#define bustype_CAVM_P2CMX_MSIX_PBAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_P2CMX_MSIX_PBAX(a,b) "P2CMX_MSIX_PBAX"
#define device_bar_CAVM_P2CMX_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_P2CMX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_P2CMX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) p2cm#_msix_vec#_addr
 *
 * P2CM MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the P2CM_INT_VEC_E enumeration.
 */
union cavm_p2cmx_msix_vecx_addr
{
    uint64_t u;
    struct cavm_p2cmx_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's P2CM()_MSIX_VEC()_ADDR, P2CM()_MSIX_VEC()_CTL, and corresponding
                                                                 bit of P2CM()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_P2CM()_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is set, all vectors are secure and function as if [SECVEC]
                                                                 was set.

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

                                                                 1 = This vector's P2CM()_MSIX_VEC()_ADDR, P2CM()_MSIX_VEC()_CTL, and corresponding
                                                                 bit of P2CM()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_P2CM()_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is set, all vectors are secure and function as if [SECVEC]
                                                                 was set.

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
    /* struct cavm_p2cmx_msix_vecx_addr_s cn; */
};
typedef union cavm_p2cmx_msix_vecx_addr cavm_p2cmx_msix_vecx_addr_t;

static inline uint64_t CAVM_P2CMX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_P2CMX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b==0)))
        return 0x87e114f00000ll + 0x1000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("P2CMX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_P2CMX_MSIX_VECX_ADDR(a,b) cavm_p2cmx_msix_vecx_addr_t
#define bustype_CAVM_P2CMX_MSIX_VECX_ADDR(a,b) CSR_TYPE_RSL
#define basename_CAVM_P2CMX_MSIX_VECX_ADDR(a,b) "P2CMX_MSIX_VECX_ADDR"
#define device_bar_CAVM_P2CMX_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_P2CMX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_P2CMX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) p2cm#_msix_vec#_ctl
 *
 * P2CM MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the P2CM_INT_VEC_E enumeration.
 */
union cavm_p2cmx_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_p2cmx_msix_vecx_ctl_s
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
    /* struct cavm_p2cmx_msix_vecx_ctl_s cn; */
};
typedef union cavm_p2cmx_msix_vecx_ctl cavm_p2cmx_msix_vecx_ctl_t;

static inline uint64_t CAVM_P2CMX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_P2CMX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=3) && (b==0)))
        return 0x87e114f00008ll + 0x1000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("P2CMX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_P2CMX_MSIX_VECX_CTL(a,b) cavm_p2cmx_msix_vecx_ctl_t
#define bustype_CAVM_P2CMX_MSIX_VECX_CTL(a,b) CSR_TYPE_RSL
#define basename_CAVM_P2CMX_MSIX_VECX_CTL(a,b) "P2CMX_MSIX_VECX_CTL"
#define device_bar_CAVM_P2CMX_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_P2CMX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_P2CMX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) p2cm#_p2cm_block_ctl
 *
 * P2CM Block Mode Control Register
 * This register contains the control bits when P2CM is in block mode. Data can be written/read
 * from P2CM()_P2CM_BLOCK_FIFO[DATA] sequentially in block mode.
 */
union cavm_p2cmx_p2cm_block_ctl
{
    uint64_t u;
    struct cavm_p2cmx_p2cm_block_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t slave_vbyte           : 1;  /**< [ 32: 32](R/W) Reserved. */
        uint64_t reserved_27_31        : 5;
        uint64_t block_thresh          : 11; /**< [ 26: 16](R/W) Block mode interrupt threshold, from 0-1024, 0x0 disables the
                                                                 interrupt. P2CM()_INT[BLOCK_INT] interrupt will fire when the number of
                                                                 remaining bytes to be sent/received is less than threshold. If the number of
                                                                 bytes to be sent/received is less than threshold [BLOCK_THRESH], the interrupt
                                                                 will fire immediately. This interrupt is enabled only in HLC block mode. */
        uint64_t reserved_10_15        : 6;
        uint64_t block_size            : 10; /**< [  9:  0](R/W) Block mode FIFO transmission/receiving data size minus one,
                                                                 valid value from 0-1023, corresponding to 1-1024 bytes to be sent/received. */
#else /* Word 0 - Little Endian */
        uint64_t block_size            : 10; /**< [  9:  0](R/W) Block mode FIFO transmission/receiving data size minus one,
                                                                 valid value from 0-1023, corresponding to 1-1024 bytes to be sent/received. */
        uint64_t reserved_10_15        : 6;
        uint64_t block_thresh          : 11; /**< [ 26: 16](R/W) Block mode interrupt threshold, from 0-1024, 0x0 disables the
                                                                 interrupt. P2CM()_INT[BLOCK_INT] interrupt will fire when the number of
                                                                 remaining bytes to be sent/received is less than threshold. If the number of
                                                                 bytes to be sent/received is less than threshold [BLOCK_THRESH], the interrupt
                                                                 will fire immediately. This interrupt is enabled only in HLC block mode. */
        uint64_t reserved_27_31        : 5;
        uint64_t slave_vbyte           : 1;  /**< [ 32: 32](R/W) Reserved. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_p2cmx_p2cm_block_ctl_s cn; */
};
typedef union cavm_p2cmx_p2cm_block_ctl cavm_p2cmx_p2cm_block_ctl_t;

static inline uint64_t CAVM_P2CMX_P2CM_BLOCK_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_P2CMX_P2CM_BLOCK_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e114001048ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("P2CMX_P2CM_BLOCK_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_P2CMX_P2CM_BLOCK_CTL(a) cavm_p2cmx_p2cm_block_ctl_t
#define bustype_CAVM_P2CMX_P2CM_BLOCK_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_P2CMX_P2CM_BLOCK_CTL(a) "P2CMX_P2CM_BLOCK_CTL"
#define device_bar_CAVM_P2CMX_P2CM_BLOCK_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_P2CMX_P2CM_BLOCK_CTL(a) (a)
#define arguments_CAVM_P2CMX_P2CM_BLOCK_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) p2cm#_p2cm_block_fifo
 *
 * P2CM Block Mode Data Register
 * This register is only valid in HLC block mode. This register allows software to
 * push or pop block of data (up to 1024 bytes) to/from P2CM device through FIFO interface.
 * For P2CM writes, software does a series of writes to fill up the FIFO before
 * starting the P2CM HLC transaction. For P2CM reads, software needs to do a serial of reads
 * after P2CM transaction finished indicated by P2CM()_P2CM_BLOCK_STS[BUSY] or interrupt.
 * The order of data transmitted on P2CM bus is:
 * _  {D1, D2, D3, D4, D5, ...., D[block_size]}, with MSB of each byte transmitted first.
 *
 * The FIFO pointer needs to be reset by writing 1 to P2CM()_P2CM_BLOCK_STS[RESET_PTR]
 * and waiting for it to become zero before software accesses.
 * The order of software writes or reads through P2CM()_P2CM_BLOCK_FIFO[DATA] is:
 *   _ 1st  push/pop {D1, D2, D3, D4, D5, D6, D7}.
 *   _ 2nd  push/pop {D8, D9, D10, D11, D12, D13, D14, D15}.
 *   _ 3rd ....
 *   _ last push/pop {D[block_size-1], D[block_size], 0, 0, 0, 0, 0, 0}.
 *
 * Where block_size is P2CM()_P2CM_BLOCK_CTL[BLOCK_SIZE].
 */
union cavm_p2cmx_p2cm_block_fifo
{
    uint64_t u;
    struct cavm_p2cmx_p2cm_block_fifo_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Data field that linked to the entries in FIFO based on current software pointer.
                                                                 [DATA] contains 8 bytes, corresponding to {Dn, Dn+1, Dn+2, Dn+3, Dn+4, Dn+5, Dn+6,
                                                                 Dn+7}. In case of less than 8 bytes based on P2CM()_P2CM_BLOCK_CTL[BLOCK_SIZE],
                                                                 lower bits will be ignored. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Data field that linked to the entries in FIFO based on current software pointer.
                                                                 [DATA] contains 8 bytes, corresponding to {Dn, Dn+1, Dn+2, Dn+3, Dn+4, Dn+5, Dn+6,
                                                                 Dn+7}. In case of less than 8 bytes based on P2CM()_P2CM_BLOCK_CTL[BLOCK_SIZE],
                                                                 lower bits will be ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_p2cmx_p2cm_block_fifo_s cn; */
};
typedef union cavm_p2cmx_p2cm_block_fifo cavm_p2cmx_p2cm_block_fifo_t;

static inline uint64_t CAVM_P2CMX_P2CM_BLOCK_FIFO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_P2CMX_P2CM_BLOCK_FIFO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e114001058ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("P2CMX_P2CM_BLOCK_FIFO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_P2CMX_P2CM_BLOCK_FIFO(a) cavm_p2cmx_p2cm_block_fifo_t
#define bustype_CAVM_P2CMX_P2CM_BLOCK_FIFO(a) CSR_TYPE_RSL
#define basename_CAVM_P2CMX_P2CM_BLOCK_FIFO(a) "P2CMX_P2CM_BLOCK_FIFO"
#define device_bar_CAVM_P2CMX_P2CM_BLOCK_FIFO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_P2CMX_P2CM_BLOCK_FIFO(a) (a)
#define arguments_CAVM_P2CMX_P2CM_BLOCK_FIFO(a) (a),-1,-1,-1

/**
 * Register (RSL) p2cm#_p2cm_block_sts
 *
 * P2CM Block Mode Status Register
 * This register contains maintenance and status in block mode.
 */
union cavm_p2cmx_p2cm_block_sts
{
    uint64_t u;
    struct cavm_p2cmx_p2cm_block_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t sw_ptr                : 7;  /**< [ 19: 13](RO/H) Latest software reading/writing pointer to P2CM()_P2CM_BLOCK_FIFO, valid from 0-127.
                                                                 For debugging purpose. */
        uint64_t count                 : 11; /**< [ 12:  2](RO/H) Remaining number of bytes waiting to be sent/received on P2CM bus in block mode.
                                                                 Value 0x0 is expected when no P2CM transaction pending. */
        uint64_t busy                  : 1;  /**< [  1:  1](RO/H) Reading back with value '1' means P2CM BLOCK transaction is still in progress, and
                                                                 0x0 is expected when no P2CM block transaction pending or in progress. */
        uint64_t reset_ptr             : 1;  /**< [  0:  0](R/W1/H) Reset software side.  FIFO pointer that accessible by P2CM()_P2CM_BLOCK_FIFO.
                                                                 This bit needs to be written with 1 before any software accesses to
                                                                 P2CM()_P2CM_BLOCK_FIFO.  Resetting the pointer won't affect the data
                                                                 stored in the FIFO as well as hardware side pointer. Reading back 0 indicates
                                                                 the software write/read pointers are reset to initial value zero. */
#else /* Word 0 - Little Endian */
        uint64_t reset_ptr             : 1;  /**< [  0:  0](R/W1/H) Reset software side.  FIFO pointer that accessible by P2CM()_P2CM_BLOCK_FIFO.
                                                                 This bit needs to be written with 1 before any software accesses to
                                                                 P2CM()_P2CM_BLOCK_FIFO.  Resetting the pointer won't affect the data
                                                                 stored in the FIFO as well as hardware side pointer. Reading back 0 indicates
                                                                 the software write/read pointers are reset to initial value zero. */
        uint64_t busy                  : 1;  /**< [  1:  1](RO/H) Reading back with value '1' means P2CM BLOCK transaction is still in progress, and
                                                                 0x0 is expected when no P2CM block transaction pending or in progress. */
        uint64_t count                 : 11; /**< [ 12:  2](RO/H) Remaining number of bytes waiting to be sent/received on P2CM bus in block mode.
                                                                 Value 0x0 is expected when no P2CM transaction pending. */
        uint64_t sw_ptr                : 7;  /**< [ 19: 13](RO/H) Latest software reading/writing pointer to P2CM()_P2CM_BLOCK_FIFO, valid from 0-127.
                                                                 For debugging purpose. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_p2cmx_p2cm_block_sts_s cn; */
};
typedef union cavm_p2cmx_p2cm_block_sts cavm_p2cmx_p2cm_block_sts_t;

static inline uint64_t CAVM_P2CMX_P2CM_BLOCK_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_P2CMX_P2CM_BLOCK_STS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e114001050ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("P2CMX_P2CM_BLOCK_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_P2CMX_P2CM_BLOCK_STS(a) cavm_p2cmx_p2cm_block_sts_t
#define bustype_CAVM_P2CMX_P2CM_BLOCK_STS(a) CSR_TYPE_RSL
#define basename_CAVM_P2CMX_P2CM_BLOCK_STS(a) "P2CMX_P2CM_BLOCK_STS"
#define device_bar_CAVM_P2CMX_P2CM_BLOCK_STS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_P2CMX_P2CM_BLOCK_STS(a) (a)
#define arguments_CAVM_P2CMX_P2CM_BLOCK_STS(a) (a),-1,-1,-1

/**
 * Register (RSL) p2cm#_p2cm_sw
 *
 * P2CM to Software Register
 * This register allows the P2CM device to transfer data to software and later check that
 * software has received the information.
 * This register should be read or written by the P2CM device, and read by software. The P2CM
 * device can use one-byte or four-byte payload write operations, and two-byte payload read
 * operations. The P2CM device considers this register valid when [V] = 1.
 */
union cavm_p2cmx_p2cm_sw
{
    uint64_t u;
    struct cavm_p2cmx_p2cm_sw_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t v                     : 2;  /**< [ 63: 62](RC/W/H) Valid bits. These bits are not directly writable. They are set to 11 on any write
                                                                 operation by the P2CM device. They are cleared to 00 on any read operation by software. */
        uint64_t reserved_32_61        : 30;
        uint64_t data                  : 32; /**< [ 31:  0](RO/H) Data field, bytes 3-7. Updated on a write operation by the P2CM device. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](RO/H) Data field, bytes 3-7. Updated on a write operation by the P2CM device. */
        uint64_t reserved_32_61        : 30;
        uint64_t v                     : 2;  /**< [ 63: 62](RC/W/H) Valid bits. These bits are not directly writable. They are set to 11 on any write
                                                                 operation by the P2CM device. They are cleared to 00 on any read operation by software. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_p2cmx_p2cm_sw_s cn; */
};
typedef union cavm_p2cmx_p2cm_sw cavm_p2cmx_p2cm_sw_t;

static inline uint64_t CAVM_P2CMX_P2CM_SW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_P2CMX_P2CM_SW(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e114001008ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("P2CMX_P2CM_SW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_P2CMX_P2CM_SW(a) cavm_p2cmx_p2cm_sw_t
#define bustype_CAVM_P2CMX_P2CM_SW(a) CSR_TYPE_RSL
#define basename_CAVM_P2CMX_P2CM_SW(a) "P2CMX_P2CM_SW"
#define device_bar_CAVM_P2CMX_P2CM_SW(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_P2CMX_P2CM_SW(a) (a)
#define arguments_CAVM_P2CMX_P2CM_SW(a) (a),-1,-1,-1

/**
 * Register (RSL) p2cm#_soft_reset
 *
 * SOFT RESET Register
 * This register is used as soft reset.
 */
union cavm_p2cmx_soft_reset
{
    uint64_t u;
    struct cavm_p2cmx_soft_reset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t soft_reset            : 1;  /**< [  0:  0](R/W) This register field is used as soft reset. */
#else /* Word 0 - Little Endian */
        uint64_t soft_reset            : 1;  /**< [  0:  0](R/W) This register field is used as soft reset. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_p2cmx_soft_reset_s cn; */
};
typedef union cavm_p2cmx_soft_reset cavm_p2cmx_soft_reset_t;

static inline uint64_t CAVM_P2CMX_SOFT_RESET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_P2CMX_SOFT_RESET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e114001088ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("P2CMX_SOFT_RESET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_P2CMX_SOFT_RESET(a) cavm_p2cmx_soft_reset_t
#define bustype_CAVM_P2CMX_SOFT_RESET(a) CSR_TYPE_RSL
#define basename_CAVM_P2CMX_SOFT_RESET(a) "P2CMX_SOFT_RESET"
#define device_bar_CAVM_P2CMX_SOFT_RESET(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_P2CMX_SOFT_RESET(a) (a)
#define arguments_CAVM_P2CMX_SOFT_RESET(a) (a),-1,-1,-1

/**
 * Register (RSL) p2cm#_sw_p2cm
 *
 * P2CM Software to P2CM Register
 * This register allows software to:
 * * Initiate master-mode operations with a write operation, and read the result with a
 * read operation.
 * * Load four bytes for later retrieval (slave mode) with a write operation and check validity
 * with a read operation.
 * * Launch a configuration read/write operation with a write operation and read the result with
 * a read operation.
 *
 * This register should be read or written by software, and read by the P2CM device. The P2CM
 * device can use either two-byte or five-byte read operations to reference this register.
 * The P2CM device considers this register valid when [V] = 1 and [SLONLY] = 1.
 */
union cavm_p2cmx_sw_p2cm
{
    uint64_t u;
    struct cavm_p2cmx_sw_p2cm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t v                     : 1;  /**< [ 63: 63](RC/W/H) Valid bit. Set on a write operation (should always be written with a 1). Cleared when a
                                                                 P2CM master-mode operation completes, a P2CM configuration register access completes, or
                                                                 when the P2CM device reads the register if [SLONLY] = 1. */
        uint64_t slonly                : 1;  /**< [ 62: 62](R/W) Slave only mode.

                                                                 When this bit is set, no operations are initiated with a write operation. Only the D field
                                                                 is updated in this case.

                                                                 When this bit is clear, a write operation initiates either a master-mode operation or a
                                                                 P2CM configuration register access. */
        uint64_t eia                   : 1;  /**< [ 61: 61](R/W) Extended internal address. Sends an additional internal address byte (the MSB of [IA] is
                                                                 from P2CM()_SW_P2CM_EXT[IA]). */
        uint64_t op                    : 4;  /**< [ 60: 57](R/W) Opcode field. When the register is written with [SLONLY] = 0, this field initiates one of
                                                                 the following read or write operations:
                                                                 0x0 = 7-bit byte master-mode operation.
                                                                 0x1 = 7-bit byte combined-read master-mode operation, 7-bit byte write-with-IA master-mode
                                                                 operation.
                                                                 0x2 = 10-bit byte master-mode operation.
                                                                 0x3 = 10-bit byte combined-read master-mode operation, 10-bit byte write-with-IA master-
                                                                 mode operation.
                                                                 0x4 = P2CM master-clock register, P2CM_CLK in P2CM Master Clock Register.
                                                                 0x6 = See [EOP_IA] field.
                                                                 0x8 = 7-bit 4-byte master-mode operation.
                                                                 0x9 = 7-bit 4-byte combined-read master-mode operation, 7-bit 4-byte write-with-IA master-
                                                                 mode operation.
                                                                 0xA = 10-bit 4-byte master-mode operation.
                                                                 0xB = 10-bit 4-byte combined-read master-mode operation, 10-bit 4-byte write-with-IA
                                                                 master-mode operation. */
        uint64_t r                     : 1;  /**< [ 56: 56](R/W/H) Read bit or result. If this bit is set on a CSR write when [SLONLY] = 0, the
                                                                 operation is a read operation (if clear, it is a write operation).
                                                                 On a CSR read, this bit returns the result indication for the most recent
                                                                 master-mode operation, 1 = success, 0 = failure. */
        uint64_t sovr                  : 1;  /**< [ 55: 55](R/W) Size override. If this bit is set, use the [SIZE] field to determine the master-mode
                                                                 operation size rather than what [OP] specifies. For operations greater than four bytes, the
                                                                 additional data is contained in P2CM()_SW_P2CM_EXT[DATA]. In block mode,
                                                                 all data can be accessible from FIFO interface P2CM()_P2CM_BLOCK_FIFO. */
        uint64_t size                  : 3;  /**< [ 54: 52](R/W) Size minus one for HLC non block mode. Specifies the size in bytes of the master-mode
                                                                 operation if [SOVR] = 1. (0 = 1 byte, 1 = 2 bytes, ... 7 = 8 bytes).
                                                                 block mode's block size is defined by P2CM()_P2CM_BLOCK_CTL[BLOCK_SIZE]. */
        uint64_t scr                   : 2;  /**< [ 51: 50](R/W) Scratch. Unused, but retain state. */
        uint64_t addr                  : 10; /**< [ 49: 40](R/W) Address field. The address of the remote device for a master-mode operation. ADDR\<9:7\> are
                                                                 only used for 10-bit addressing.

                                                                 Note that when mastering a 7-bit OP, ADDR\<6:0\> should not take any of the values 0x78,
                                                                 0x79, 0x7A nor 0x7B. (These 7-bit addresses are reserved to extend to 10-bit addressing). */
        uint64_t ia                    : 5;  /**< [ 39: 35](R/W) Internal address. Used when launching a combined master-mode operation. The lower 3
                                                                 address bits are contained in [EOP_IA]. */
        uint64_t eop_ia                : 3;  /**< [ 34: 32](R/W) Extra opcode, used when OP\<3:0\> = 0x6 and [SLONLY] = 0.
                                                                 0x0 = P2CM slave address register (P2CM_SLAVE_ADD).
                                                                 0x1 = P2CM data register (P2CM_DATA).
                                                                 0x2 = P2CM control register (P2CM_CTL).
                                                                 0x3 = (when [R] = 0) P2CM clock control register (P2CM_CLKCTL).
                                                                 0x3 = (when [R] = 1) P2CM status register (P2CM_STAT).
                                                                 0x4 = P2CM extended slave register (P2CM_SLAVE_ADD_EXT).
                                                                 0x7 = P2CM soft reset register (P2CM_RST).

                                                                 Also provides the lower three bits of internal address when launching a combined master-mode
                                                                 operation. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W/H) Data field, bytes 0-3.
                                                                 Used on a write operation when:
                                                                 * Initiating a master-mode write operation ([SLONLY] = 0).
                                                                 * Writing a P2CM configuration register ([SLONLY] = 0).
                                                                 * A slave-mode write operation ([SLONLY] = 1).

                                                                 The read value is updated by:
                                                                 * A write operation to this register.
                                                                 * Master-mode completion (contains error code).
                                                                 * P2CM configuration-register read (contains result). */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W/H) Data field, bytes 0-3.
                                                                 Used on a write operation when:
                                                                 * Initiating a master-mode write operation ([SLONLY] = 0).
                                                                 * Writing a P2CM configuration register ([SLONLY] = 0).
                                                                 * A slave-mode write operation ([SLONLY] = 1).

                                                                 The read value is updated by:
                                                                 * A write operation to this register.
                                                                 * Master-mode completion (contains error code).
                                                                 * P2CM configuration-register read (contains result). */
        uint64_t eop_ia                : 3;  /**< [ 34: 32](R/W) Extra opcode, used when OP\<3:0\> = 0x6 and [SLONLY] = 0.
                                                                 0x0 = P2CM slave address register (P2CM_SLAVE_ADD).
                                                                 0x1 = P2CM data register (P2CM_DATA).
                                                                 0x2 = P2CM control register (P2CM_CTL).
                                                                 0x3 = (when [R] = 0) P2CM clock control register (P2CM_CLKCTL).
                                                                 0x3 = (when [R] = 1) P2CM status register (P2CM_STAT).
                                                                 0x4 = P2CM extended slave register (P2CM_SLAVE_ADD_EXT).
                                                                 0x7 = P2CM soft reset register (P2CM_RST).

                                                                 Also provides the lower three bits of internal address when launching a combined master-mode
                                                                 operation. */
        uint64_t ia                    : 5;  /**< [ 39: 35](R/W) Internal address. Used when launching a combined master-mode operation. The lower 3
                                                                 address bits are contained in [EOP_IA]. */
        uint64_t addr                  : 10; /**< [ 49: 40](R/W) Address field. The address of the remote device for a master-mode operation. ADDR\<9:7\> are
                                                                 only used for 10-bit addressing.

                                                                 Note that when mastering a 7-bit OP, ADDR\<6:0\> should not take any of the values 0x78,
                                                                 0x79, 0x7A nor 0x7B. (These 7-bit addresses are reserved to extend to 10-bit addressing). */
        uint64_t scr                   : 2;  /**< [ 51: 50](R/W) Scratch. Unused, but retain state. */
        uint64_t size                  : 3;  /**< [ 54: 52](R/W) Size minus one for HLC non block mode. Specifies the size in bytes of the master-mode
                                                                 operation if [SOVR] = 1. (0 = 1 byte, 1 = 2 bytes, ... 7 = 8 bytes).
                                                                 block mode's block size is defined by P2CM()_P2CM_BLOCK_CTL[BLOCK_SIZE]. */
        uint64_t sovr                  : 1;  /**< [ 55: 55](R/W) Size override. If this bit is set, use the [SIZE] field to determine the master-mode
                                                                 operation size rather than what [OP] specifies. For operations greater than four bytes, the
                                                                 additional data is contained in P2CM()_SW_P2CM_EXT[DATA]. In block mode,
                                                                 all data can be accessible from FIFO interface P2CM()_P2CM_BLOCK_FIFO. */
        uint64_t r                     : 1;  /**< [ 56: 56](R/W/H) Read bit or result. If this bit is set on a CSR write when [SLONLY] = 0, the
                                                                 operation is a read operation (if clear, it is a write operation).
                                                                 On a CSR read, this bit returns the result indication for the most recent
                                                                 master-mode operation, 1 = success, 0 = failure. */
        uint64_t op                    : 4;  /**< [ 60: 57](R/W) Opcode field. When the register is written with [SLONLY] = 0, this field initiates one of
                                                                 the following read or write operations:
                                                                 0x0 = 7-bit byte master-mode operation.
                                                                 0x1 = 7-bit byte combined-read master-mode operation, 7-bit byte write-with-IA master-mode
                                                                 operation.
                                                                 0x2 = 10-bit byte master-mode operation.
                                                                 0x3 = 10-bit byte combined-read master-mode operation, 10-bit byte write-with-IA master-
                                                                 mode operation.
                                                                 0x4 = P2CM master-clock register, P2CM_CLK in P2CM Master Clock Register.
                                                                 0x6 = See [EOP_IA] field.
                                                                 0x8 = 7-bit 4-byte master-mode operation.
                                                                 0x9 = 7-bit 4-byte combined-read master-mode operation, 7-bit 4-byte write-with-IA master-
                                                                 mode operation.
                                                                 0xA = 10-bit 4-byte master-mode operation.
                                                                 0xB = 10-bit 4-byte combined-read master-mode operation, 10-bit 4-byte write-with-IA
                                                                 master-mode operation. */
        uint64_t eia                   : 1;  /**< [ 61: 61](R/W) Extended internal address. Sends an additional internal address byte (the MSB of [IA] is
                                                                 from P2CM()_SW_P2CM_EXT[IA]). */
        uint64_t slonly                : 1;  /**< [ 62: 62](R/W) Slave only mode.

                                                                 When this bit is set, no operations are initiated with a write operation. Only the D field
                                                                 is updated in this case.

                                                                 When this bit is clear, a write operation initiates either a master-mode operation or a
                                                                 P2CM configuration register access. */
        uint64_t v                     : 1;  /**< [ 63: 63](RC/W/H) Valid bit. Set on a write operation (should always be written with a 1). Cleared when a
                                                                 P2CM master-mode operation completes, a P2CM configuration register access completes, or
                                                                 when the P2CM device reads the register if [SLONLY] = 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_p2cmx_sw_p2cm_s cn; */
};
typedef union cavm_p2cmx_sw_p2cm cavm_p2cmx_sw_p2cm_t;

static inline uint64_t CAVM_P2CMX_SW_P2CM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_P2CMX_SW_P2CM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e114001000ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("P2CMX_SW_P2CM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_P2CMX_SW_P2CM(a) cavm_p2cmx_sw_p2cm_t
#define bustype_CAVM_P2CMX_SW_P2CM(a) CSR_TYPE_RSL
#define basename_CAVM_P2CMX_SW_P2CM(a) "P2CMX_SW_P2CM"
#define device_bar_CAVM_P2CMX_SW_P2CM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_P2CMX_SW_P2CM(a) (a)
#define arguments_CAVM_P2CMX_SW_P2CM(a) (a),-1,-1,-1

/**
 * Register (RSL) p2cm#_sw_p2cm_ext
 *
 * P2CM Software to P2CM Extension Register
 * This register contains an additional byte of internal address and four additional bytes of
 * data to be used with P2CM master-mode operations.
 *
 * The IA field is sent as the first byte of internal address when performing master-mode
 * combined-read/write-with-IA operations and P2CM()_SW_P2CM[EIA] is set. The D field
 * extends the data field of P2CM()_SW_P2CM for a total of 8 bytes (SOVR must be set to
 * perform operations greater than four bytes).
 */
union cavm_p2cmx_sw_p2cm_ext
{
    uint64_t u;
    struct cavm_p2cmx_sw_p2cm_ext_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t ia                    : 8;  /**< [ 39: 32](R/W) Extended internal address. Sent as the first byte of internal address when performing
                                                                 master-mode combined-read/write-with-IA operations and P2CM()_SW_P2CM[EIA] is set. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W/H) Extended data. Extends the data field of P2CM()_SW_P2CM for a total of eight bytes
                                                                 (P2CM()_SW_P2CM[SOVR] must be set to 1 to perform operations greater than four
                                                                 bytes). */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W/H) Extended data. Extends the data field of P2CM()_SW_P2CM for a total of eight bytes
                                                                 (P2CM()_SW_P2CM[SOVR] must be set to 1 to perform operations greater than four
                                                                 bytes). */
        uint64_t ia                    : 8;  /**< [ 39: 32](R/W) Extended internal address. Sent as the first byte of internal address when performing
                                                                 master-mode combined-read/write-with-IA operations and P2CM()_SW_P2CM[EIA] is set. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_p2cmx_sw_p2cm_ext_s cn; */
};
typedef union cavm_p2cmx_sw_p2cm_ext cavm_p2cmx_sw_p2cm_ext_t;

static inline uint64_t CAVM_P2CMX_SW_P2CM_EXT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_P2CMX_SW_P2CM_EXT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e114001018ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("P2CMX_SW_P2CM_EXT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_P2CMX_SW_P2CM_EXT(a) cavm_p2cmx_sw_p2cm_ext_t
#define bustype_CAVM_P2CMX_SW_P2CM_EXT(a) CSR_TYPE_RSL
#define basename_CAVM_P2CMX_SW_P2CM_EXT(a) "P2CMX_SW_P2CM_EXT"
#define device_bar_CAVM_P2CMX_SW_P2CM_EXT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_P2CMX_SW_P2CM_EXT(a) (a)
#define arguments_CAVM_P2CMX_SW_P2CM_EXT(a) (a),-1,-1,-1

/**
 * Register (RSL) p2cm#_tie_off
 *
 * TIE OFF Register
 * This register is used to tie any ports with '0' or '1'.
 */
union cavm_p2cmx_tie_off
{
    uint64_t u;
    struct cavm_p2cmx_tie_off_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tie_off_0             : 32; /**< [ 63: 32](R/W) This register field is used to tie any ports with '0'. */
        uint64_t tie_off_1             : 32; /**< [ 31:  0](R/W) This register field is used to tie any ports with '1'. */
#else /* Word 0 - Little Endian */
        uint64_t tie_off_1             : 32; /**< [ 31:  0](R/W) This register field is used to tie any ports with '1'. */
        uint64_t tie_off_0             : 32; /**< [ 63: 32](R/W) This register field is used to tie any ports with '0'. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_p2cmx_tie_off_s cn; */
};
typedef union cavm_p2cmx_tie_off cavm_p2cmx_tie_off_t;

static inline uint64_t CAVM_P2CMX_TIE_OFF(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_P2CMX_TIE_OFF(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e114001080ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("P2CMX_TIE_OFF", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_P2CMX_TIE_OFF(a) cavm_p2cmx_tie_off_t
#define bustype_CAVM_P2CMX_TIE_OFF(a) CSR_TYPE_RSL
#define basename_CAVM_P2CMX_TIE_OFF(a) "P2CMX_TIE_OFF"
#define device_bar_CAVM_P2CMX_TIE_OFF(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_P2CMX_TIE_OFF(a) (a)
#define arguments_CAVM_P2CMX_TIE_OFF(a) (a),-1,-1,-1

/**
 * Register (RSL) p2cm#_tstamp_rx
 *
 * MIO P2CM Receive Timestamp Register
 * This register contains the timestamp latched when P2CM device receives the first bit on P2CM
 * SCL falling edge. This function is only supported in non-block mode.
 */
union cavm_p2cmx_tstamp_rx
{
    uint64_t u;
    struct cavm_p2cmx_tstamp_rx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t nanosec               : 64; /**< [ 63:  0](RO/H) Timestamp in nanoseconds. */
#else /* Word 0 - Little Endian */
        uint64_t nanosec               : 64; /**< [ 63:  0](RO/H) Timestamp in nanoseconds. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_p2cmx_tstamp_rx_s cn; */
};
typedef union cavm_p2cmx_tstamp_rx cavm_p2cmx_tstamp_rx_t;

static inline uint64_t CAVM_P2CMX_TSTAMP_RX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_P2CMX_TSTAMP_RX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e114001068ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("P2CMX_TSTAMP_RX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_P2CMX_TSTAMP_RX(a) cavm_p2cmx_tstamp_rx_t
#define bustype_CAVM_P2CMX_TSTAMP_RX(a) CSR_TYPE_RSL
#define basename_CAVM_P2CMX_TSTAMP_RX(a) "P2CMX_TSTAMP_RX"
#define device_bar_CAVM_P2CMX_TSTAMP_RX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_P2CMX_TSTAMP_RX(a) (a)
#define arguments_CAVM_P2CMX_TSTAMP_RX(a) (a),-1,-1,-1

/**
 * Register (RSL) p2cm#_tstamp_tx
 *
 * MIO P2CM Transmit Timestamp Register
 * This register contains the timestamp latched when P2CM device drives the first bit on P2CM
 * SCL falling edge. This function is only supported in non-block mode.
 */
union cavm_p2cmx_tstamp_tx
{
    uint64_t u;
    struct cavm_p2cmx_tstamp_tx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t nanosec               : 64; /**< [ 63:  0](RO/H) Timestamp in nanoseconds. */
#else /* Word 0 - Little Endian */
        uint64_t nanosec               : 64; /**< [ 63:  0](RO/H) Timestamp in nanoseconds. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_p2cmx_tstamp_tx_s cn; */
};
typedef union cavm_p2cmx_tstamp_tx cavm_p2cmx_tstamp_tx_t;

static inline uint64_t CAVM_P2CMX_TSTAMP_TX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_P2CMX_TSTAMP_TX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e114001060ll + 0x1000000ll * ((a) & 0x3);
    __cavm_csr_fatal("P2CMX_TSTAMP_TX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_P2CMX_TSTAMP_TX(a) cavm_p2cmx_tstamp_tx_t
#define bustype_CAVM_P2CMX_TSTAMP_TX(a) CSR_TYPE_RSL
#define basename_CAVM_P2CMX_TSTAMP_TX(a) "P2CMX_TSTAMP_TX"
#define device_bar_CAVM_P2CMX_TSTAMP_TX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_P2CMX_TSTAMP_TX(a) (a)
#define arguments_CAVM_P2CMX_TSTAMP_TX(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_P2CM_H__ */
