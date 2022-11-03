#ifndef __CAVM_CSRS_DSUUB_H__
#define __CAVM_CSRS_DSUUB_H__
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
 * OcteonTX DSUUB.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration dsuub_bar_e
 *
 * DSUUB Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_DSUUB_BAR_E_DSUUBX_PF_BAR0(a) (0x87e200000000ll + 0x1000000ll * (a))
#define CAVM_DSUUB_BAR_E_DSUUBX_PF_BAR0_SIZE 0x1000000ull

/**
 * Register (RSL32b) dsuub#_amcfgr
 *
 * Dsuub Activity Monitors Configuration Register
 * Global configuration register for the activity monitors.
 *
 * Provides information on supported features, the number of counter groups implemented, the total
 * number of activity monitor event counters implemented, and the size of the counters. AMCFGR is
 * applicable to both the architected and the auxiliary counter groups.
 */
union cavm_dsuubx_amcfgr
{
    uint32_t u;
    struct cavm_dsuubx_amcfgr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ncg                   : 4;  /**< [ 31: 28](RO) Defines the number of counter groups. The following value is
                                                                 specified for this product.

                                                                 0b0001 =
                                                                 Two counter groups are implemented */
        uint32_t reserved_25_27        : 3;
        uint32_t hdbg                  : 1;  /**< [ 24: 24](RO) Halt-on-debug supported.

                                                                 From Armv8, this feature must be supported, and so this bit is 0b1.

                                                                 0b1 =
                                                                 ext-AMCR.HDBG is read/write. */
        uint32_t reserved_14_23        : 10;
        uint32_t size                  : 6;  /**< [ 13:  8](RO) Defines the size of activity monitor event counters.

                                                                 The size of the activity monitor event counters implemented by the
                                                                 Activity Monitors Extension is defined as [AMCFGR.SIZE + 1].

                                                                 From Armv8, the counters are 64-bit, and so this field is 0b111111.

                                                                 Note:        Software also uses this field to determine the
                                                                 spacing of counters in the memory-map. From
                                                                 Armv8, the counters are at doubleword-aligned
                                                                 addresses.
                                                                 0b111111 =
                                                                 64 bits. */
        uint32_t n                     : 8;  /**< [  7:  0](RO) Defines the number of activity monitor event counters.

                                                                 The total number of counters implemented in all groups by the
                                                                 Activity Monitors Extension is defined as [AMCFGR.N + 1].

                                                                 0b00000110 =
                                                                 Seven activity monitor event counters */
#else /* Word 0 - Little Endian */
        uint32_t n                     : 8;  /**< [  7:  0](RO) Defines the number of activity monitor event counters.

                                                                 The total number of counters implemented in all groups by the
                                                                 Activity Monitors Extension is defined as [AMCFGR.N + 1].

                                                                 0b00000110 =
                                                                 Seven activity monitor event counters */
        uint32_t size                  : 6;  /**< [ 13:  8](RO) Defines the size of activity monitor event counters.

                                                                 The size of the activity monitor event counters implemented by the
                                                                 Activity Monitors Extension is defined as [AMCFGR.SIZE + 1].

                                                                 From Armv8, the counters are 64-bit, and so this field is 0b111111.

                                                                 Note:        Software also uses this field to determine the
                                                                 spacing of counters in the memory-map. From
                                                                 Armv8, the counters are at doubleword-aligned
                                                                 addresses.
                                                                 0b111111 =
                                                                 64 bits. */
        uint32_t reserved_14_23        : 10;
        uint32_t hdbg                  : 1;  /**< [ 24: 24](RO) Halt-on-debug supported.

                                                                 From Armv8, this feature must be supported, and so this bit is 0b1.

                                                                 0b1 =
                                                                 ext-AMCR.HDBG is read/write. */
        uint32_t reserved_25_27        : 3;
        uint32_t ncg                   : 4;  /**< [ 31: 28](RO) Defines the number of counter groups. The following value is
                                                                 specified for this product.

                                                                 0b0001 =
                                                                 Two counter groups are implemented */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amcfgr_s cn; */
};
typedef union cavm_dsuubx_amcfgr cavm_dsuubx_amcfgr_t;

static inline uint64_t CAVM_DSUUBX_AMCFGR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMCFGR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090e00ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090e00ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090e00ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090e00ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMCFGR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMCFGR(a) cavm_dsuubx_amcfgr_t
#define bustype_CAVM_DSUUBX_AMCFGR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMCFGR(a) "DSUUBX_AMCFGR"
#define device_bar_CAVM_DSUUBX_AMCFGR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMCFGR(a) (a)
#define arguments_CAVM_DSUUBX_AMCFGR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_amcgcr
 *
 * Dsuub Activity Monitors Counter Group Configuration Register
 * Provides information on the number of activity monitor event counters implemented within each
 * counter group.
 */
union cavm_dsuubx_amcgcr
{
    uint32_t u;
    struct cavm_dsuubx_amcgcr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t cg1nc                 : 8;  /**< [ 15:  8](RO) Counter Group 1 Number of Counters. The number of counters in
                                                                 the auxiliary counter group.

                                                                 In AMUv1, the permitted range of values is 0 to 16.

                                                                 0b00000011 =
                                                                 Three counters in the auxiliary counter group */
        uint32_t cg0nc                 : 8;  /**< [  7:  0](RO) Counter Group 0 Number of Counters. The number of counters in
                                                                 the architected counter group.

                                                                 In AMUv1, the value of this field is 4.

                                                                 0b00000100 =
                                                                 Four Counters in the architected counter group */
#else /* Word 0 - Little Endian */
        uint32_t cg0nc                 : 8;  /**< [  7:  0](RO) Counter Group 0 Number of Counters. The number of counters in
                                                                 the architected counter group.

                                                                 In AMUv1, the value of this field is 4.

                                                                 0b00000100 =
                                                                 Four Counters in the architected counter group */
        uint32_t cg1nc                 : 8;  /**< [ 15:  8](RO) Counter Group 1 Number of Counters. The number of counters in
                                                                 the auxiliary counter group.

                                                                 In AMUv1, the permitted range of values is 0 to 16.

                                                                 0b00000011 =
                                                                 Three counters in the auxiliary counter group */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amcgcr_s cn; */
};
typedef union cavm_dsuubx_amcgcr cavm_dsuubx_amcgcr_t;

static inline uint64_t CAVM_DSUUBX_AMCGCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMCGCR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090ce0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090ce0ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090ce0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090ce0ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMCGCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMCGCR(a) cavm_dsuubx_amcgcr_t
#define bustype_CAVM_DSUUBX_AMCGCR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMCGCR(a) "DSUUBX_AMCGCR"
#define device_bar_CAVM_DSUUBX_AMCGCR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMCGCR(a) (a)
#define arguments_CAVM_DSUUBX_AMCGCR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_amcidr0
 *
 * Dsuub Activity Monitors Component Identification Register 0
 * Provides information to identify an activity monitors component.
 *
 * For more information, see 'About the Component identification scheme'.
 */
union cavm_dsuubx_amcidr0
{
    uint32_t u;
    struct cavm_dsuubx_amcidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Must read as 0x0D.

                                                                 0b00001101 =
                                                                 Preamble */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. Must read as 0x0D.

                                                                 0b00001101 =
                                                                 Preamble */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amcidr0_s cn; */
};
typedef union cavm_dsuubx_amcidr0 cavm_dsuubx_amcidr0_t;

static inline uint64_t CAVM_DSUUBX_AMCIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMCIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090ff0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090ff0ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090ff0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090ff0ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMCIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMCIDR0(a) cavm_dsuubx_amcidr0_t
#define bustype_CAVM_DSUUBX_AMCIDR0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMCIDR0(a) "DSUUBX_AMCIDR0"
#define device_bar_CAVM_DSUUBX_AMCIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMCIDR0(a) (a)
#define arguments_CAVM_DSUUBX_AMCIDR0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_amcidr1
 *
 * Dsuub Activity Monitors Component Identification Register 1
 * Provides information to identify an activity monitors component.
 *
 * For more information, see 'About the Component identification scheme'.
 */
union cavm_dsuubx_amcidr1
{
    uint32_t u;
    struct cavm_dsuubx_amcidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t clas                  : 4;  /**< [  7:  4](RO) Component class. Reads as 0x9, CoreSight component.

                                                                 0b1001 =
                                                                 CoreSight component. */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](RO) Preamble. Reads as 0x0.

                                                                 0b0000 =
                                                                 Preamble */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](RO) Preamble. Reads as 0x0.

                                                                 0b0000 =
                                                                 Preamble */
        uint32_t clas                  : 4;  /**< [  7:  4](RO) Component class. Reads as 0x9, CoreSight component.

                                                                 0b1001 =
                                                                 CoreSight component. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amcidr1_s cn; */
};
typedef union cavm_dsuubx_amcidr1 cavm_dsuubx_amcidr1_t;

static inline uint64_t CAVM_DSUUBX_AMCIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMCIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090ff4ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090ff4ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090ff4ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090ff4ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMCIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMCIDR1(a) cavm_dsuubx_amcidr1_t
#define bustype_CAVM_DSUUBX_AMCIDR1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMCIDR1(a) "DSUUBX_AMCIDR1"
#define device_bar_CAVM_DSUUBX_AMCIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMCIDR1(a) (a)
#define arguments_CAVM_DSUUBX_AMCIDR1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_amcidr2
 *
 * Dsuub Activity Monitors Component Identification Register 2
 * Provides information to identify an activity monitors component.
 *
 * For more information, see 'About the Component identification scheme'.
 */
union cavm_dsuubx_amcidr2
{
    uint32_t u;
    struct cavm_dsuubx_amcidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Reads as 0x05.

                                                                 0b00000101 =
                                                                 Preamble byte 2 */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. Reads as 0x05.

                                                                 0b00000101 =
                                                                 Preamble byte 2 */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amcidr2_s cn; */
};
typedef union cavm_dsuubx_amcidr2 cavm_dsuubx_amcidr2_t;

static inline uint64_t CAVM_DSUUBX_AMCIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMCIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090ff8ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090ff8ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090ff8ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090ff8ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMCIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMCIDR2(a) cavm_dsuubx_amcidr2_t
#define bustype_CAVM_DSUUBX_AMCIDR2(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMCIDR2(a) "DSUUBX_AMCIDR2"
#define device_bar_CAVM_DSUUBX_AMCIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMCIDR2(a) (a)
#define arguments_CAVM_DSUUBX_AMCIDR2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_amcidr3
 *
 * Dsuub Activity Monitors Component Identification Register 2
 * Provides information to identify an activity monitors component.
 *
 * For more information, see 'About the Component identification scheme'.
 */
union cavm_dsuubx_amcidr3
{
    uint32_t u;
    struct cavm_dsuubx_amcidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Reads as 0xB1.

                                                                 0b00000101 =
                                                                 Preamble byte 3 */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. Reads as 0xB1.

                                                                 0b00000101 =
                                                                 Preamble byte 3 */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amcidr3_s cn; */
};
typedef union cavm_dsuubx_amcidr3 cavm_dsuubx_amcidr3_t;

static inline uint64_t CAVM_DSUUBX_AMCIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMCIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090ffcll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090ffcll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090ffcll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090ffcll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMCIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMCIDR3(a) cavm_dsuubx_amcidr3_t
#define bustype_CAVM_DSUUBX_AMCIDR3(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMCIDR3(a) "DSUUBX_AMCIDR3"
#define device_bar_CAVM_DSUUBX_AMCIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMCIDR3(a) (a)
#define arguments_CAVM_DSUUBX_AMCIDR3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_amcntenclr0
 *
 * Dsuub Activity Monitors Count Enable Clear Register 0
 * Disable control bits for the architected activity monitors event counters, AMEVCNTR0\<n\>.
 */
union cavm_dsuubx_amcntenclr0
{
    uint32_t u;
    struct cavm_dsuubx_amcntenclr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t p                     : 32; /**< [ 31:  0](RO) Activity monitor event counter disable bit for AMEVCNTR0\<n\>.
                                                                 Bits [31:N] are RAZ/WI. N is the value in AMCGCR.CG0NC.
                                                                 Possible values of each bit are:
                                                                 0b0 = When read, means that AMEVCNTR0\<n\> is disabled. When written, has no effect.
                                                                 0b1 = When read, means that AMEVCNTR0\<n\> is enabled. When written, disables
                                                                 AMEVCNTR0\<n\>.
                                                                 On a Cold reset, this field resets to 0. */
#else /* Word 0 - Little Endian */
        uint32_t p                     : 32; /**< [ 31:  0](RO) Activity monitor event counter disable bit for AMEVCNTR0\<n\>.
                                                                 Bits [31:N] are RAZ/WI. N is the value in AMCGCR.CG0NC.
                                                                 Possible values of each bit are:
                                                                 0b0 = When read, means that AMEVCNTR0\<n\> is disabled. When written, has no effect.
                                                                 0b1 = When read, means that AMEVCNTR0\<n\> is enabled. When written, disables
                                                                 AMEVCNTR0\<n\>.
                                                                 On a Cold reset, this field resets to 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amcntenclr0_s cn; */
};
typedef union cavm_dsuubx_amcntenclr0 cavm_dsuubx_amcntenclr0_t;

static inline uint64_t CAVM_DSUUBX_AMCNTENCLR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMCNTENCLR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090c20ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090c20ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090c20ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090c20ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMCNTENCLR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMCNTENCLR0(a) cavm_dsuubx_amcntenclr0_t
#define bustype_CAVM_DSUUBX_AMCNTENCLR0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMCNTENCLR0(a) "DSUUBX_AMCNTENCLR0"
#define device_bar_CAVM_DSUUBX_AMCNTENCLR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMCNTENCLR0(a) (a)
#define arguments_CAVM_DSUUBX_AMCNTENCLR0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_amcntenclr1
 *
 * Dsuub Activity Monitors Count Enable Clear Register 1
 * Disable control bits for the architected activity monitors event counters, AMEVCNTR1\<n\>.
 */
union cavm_dsuubx_amcntenclr1
{
    uint32_t u;
    struct cavm_dsuubx_amcntenclr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t p                     : 32; /**< [ 31:  0](RO) Activity monitor event counter disable bit for AMEVCNTR1\<n\>.
                                                                 Bits [31:N] are RAZ/WI. N is the value in AMCGCR.CG0NC.
                                                                 Possible values of each bit are:
                                                                 0b0 = When read, means that AMEVCNTR1\<n\> is disabled. When written, has no effect.
                                                                 0b1 = When read, means that AMEVCNTR1\<n\> is enabled. When written, disables
                                                                 AMEVCNTR1\<n\>.
                                                                 On a Cold reset, this field resets to 0. */
#else /* Word 0 - Little Endian */
        uint32_t p                     : 32; /**< [ 31:  0](RO) Activity monitor event counter disable bit for AMEVCNTR1\<n\>.
                                                                 Bits [31:N] are RAZ/WI. N is the value in AMCGCR.CG0NC.
                                                                 Possible values of each bit are:
                                                                 0b0 = When read, means that AMEVCNTR1\<n\> is disabled. When written, has no effect.
                                                                 0b1 = When read, means that AMEVCNTR1\<n\> is enabled. When written, disables
                                                                 AMEVCNTR1\<n\>.
                                                                 On a Cold reset, this field resets to 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amcntenclr1_s cn; */
};
typedef union cavm_dsuubx_amcntenclr1 cavm_dsuubx_amcntenclr1_t;

static inline uint64_t CAVM_DSUUBX_AMCNTENCLR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMCNTENCLR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090c24ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090c24ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090c24ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090c24ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMCNTENCLR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMCNTENCLR1(a) cavm_dsuubx_amcntenclr1_t
#define bustype_CAVM_DSUUBX_AMCNTENCLR1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMCNTENCLR1(a) "DSUUBX_AMCNTENCLR1"
#define device_bar_CAVM_DSUUBX_AMCNTENCLR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMCNTENCLR1(a) (a)
#define arguments_CAVM_DSUUBX_AMCNTENCLR1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_amcntenset0
 *
 * Dsuub Activity Monitors Count Enable Set Register 0
 * Enable control bits for the architected activity monitors event counters, AMEVCNTR0\<n\>.
 */
union cavm_dsuubx_amcntenset0
{
    uint32_t u;
    struct cavm_dsuubx_amcntenset0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t p                     : 32; /**< [ 31:  0](RO) Activity monitor event counter enable bit for AMEVCNTR0\<n\>.
                                                                 Bits [31:N] are RAZ/WI. N is the value in AMCGCR.CG0NC.
                                                                 Possible values of each bit are:
                                                                 0b0 = When read, means that AMEVCNTR0\<n\> is disabled. When written, has no effect.
                                                                 0b1 = When read, means that AMEVCNTR0\<n\> is enabled. When written, enables
                                                                 AMEVCNTR0\<n\>.
                                                                 On a Cold reset, this field resets to 0. */
#else /* Word 0 - Little Endian */
        uint32_t p                     : 32; /**< [ 31:  0](RO) Activity monitor event counter enable bit for AMEVCNTR0\<n\>.
                                                                 Bits [31:N] are RAZ/WI. N is the value in AMCGCR.CG0NC.
                                                                 Possible values of each bit are:
                                                                 0b0 = When read, means that AMEVCNTR0\<n\> is disabled. When written, has no effect.
                                                                 0b1 = When read, means that AMEVCNTR0\<n\> is enabled. When written, enables
                                                                 AMEVCNTR0\<n\>.
                                                                 On a Cold reset, this field resets to 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amcntenset0_s cn; */
};
typedef union cavm_dsuubx_amcntenset0 cavm_dsuubx_amcntenset0_t;

static inline uint64_t CAVM_DSUUBX_AMCNTENSET0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMCNTENSET0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090c00ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090c00ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090c00ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090c00ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMCNTENSET0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMCNTENSET0(a) cavm_dsuubx_amcntenset0_t
#define bustype_CAVM_DSUUBX_AMCNTENSET0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMCNTENSET0(a) "DSUUBX_AMCNTENSET0"
#define device_bar_CAVM_DSUUBX_AMCNTENSET0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMCNTENSET0(a) (a)
#define arguments_CAVM_DSUUBX_AMCNTENSET0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_amcntenset1
 *
 * Dsuub Activity Monitors Count Enable Set Register 1
 * Enable control bits for the auxiliary activity monitors event counters, AMEVCNTR1\<n\>.
 */
union cavm_dsuubx_amcntenset1
{
    uint32_t u;
    struct cavm_dsuubx_amcntenset1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t p                     : 32; /**< [ 31:  0](RO) Activity monitor event counter enable bit for AMEVCNTR1\<n\>.
                                                                 Bits [31:N] are RAZ/WI. N is the value in AMCGCR.CG0NC.
                                                                 Possible values of each bit are:
                                                                 0b0 = When read, means that AMEVCNTR1\<n\> is disabled. When written, has no effect.
                                                                 0b1 = When read, means that AMEVCNTR1\<n\> is enabled. When written, enables
                                                                 AMEVCNTR1\<n\>.
                                                                 On a Cold reset, this field resets to 0. */
#else /* Word 0 - Little Endian */
        uint32_t p                     : 32; /**< [ 31:  0](RO) Activity monitor event counter enable bit for AMEVCNTR1\<n\>.
                                                                 Bits [31:N] are RAZ/WI. N is the value in AMCGCR.CG0NC.
                                                                 Possible values of each bit are:
                                                                 0b0 = When read, means that AMEVCNTR1\<n\> is disabled. When written, has no effect.
                                                                 0b1 = When read, means that AMEVCNTR1\<n\> is enabled. When written, enables
                                                                 AMEVCNTR1\<n\>.
                                                                 On a Cold reset, this field resets to 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amcntenset1_s cn; */
};
typedef union cavm_dsuubx_amcntenset1 cavm_dsuubx_amcntenset1_t;

static inline uint64_t CAVM_DSUUBX_AMCNTENSET1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMCNTENSET1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090c04ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090c04ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090c04ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090c04ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMCNTENSET1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMCNTENSET1(a) cavm_dsuubx_amcntenset1_t
#define bustype_CAVM_DSUUBX_AMCNTENSET1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMCNTENSET1(a) "DSUUBX_AMCNTENSET1"
#define device_bar_CAVM_DSUUBX_AMCNTENSET1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMCNTENSET1(a) (a)
#define arguments_CAVM_DSUUBX_AMCNTENSET1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_amcr
 *
 * Dsuub Activity Monitors Control Register
 * Global control register for the activity monitors implementation. AMCR is applicable to both the
 * architected and the auxiliary counter groups.
 */
union cavm_dsuubx_amcr
{
    uint32_t u;
    struct cavm_dsuubx_amcr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_11_31        : 21;
        uint32_t hdbg                  : 1;  /**< [ 10: 10](R/W) This bit controls whether activity monitor counting is halted when the PE is halted in Debug state.
                                                                 0b0 = Activity monitors do not halt counting when the PE is halted in Debug state.
                                                                 0b1 = Activity monitors halt counting when the PE is halted in Debug state. */
        uint32_t reserved_0_9          : 10;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_9          : 10;
        uint32_t hdbg                  : 1;  /**< [ 10: 10](R/W) This bit controls whether activity monitor counting is halted when the PE is halted in Debug state.
                                                                 0b0 = Activity monitors do not halt counting when the PE is halted in Debug state.
                                                                 0b1 = Activity monitors halt counting when the PE is halted in Debug state. */
        uint32_t reserved_11_31        : 21;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amcr_s cn; */
};
typedef union cavm_dsuubx_amcr cavm_dsuubx_amcr_t;

static inline uint64_t CAVM_DSUUBX_AMCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMCR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090e04ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090e04ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090e04ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090e04ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMCR(a) cavm_dsuubx_amcr_t
#define bustype_CAVM_DSUUBX_AMCR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMCR(a) "DSUUBX_AMCR"
#define device_bar_CAVM_DSUUBX_AMCR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMCR(a) (a)
#define arguments_CAVM_DSUUBX_AMCR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_amdevaff0
 *
 * Dsuub Activity Monitors Device Affinity Register 0
 * Copy of the low half of the PE MPIDR_EL1 register that allows a debugger to determine which PE
 * in a multiprocessor system the AMU component relates to.
 */
union cavm_dsuubx_amdevaff0
{
    uint32_t u;
    struct cavm_dsuubx_amdevaff0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t mpidrel1lo            : 32; /**< [ 31:  0](RO) MPIDR_EL1 low half. Read-only copy of the low half of MPIDR_EL1, as seen from the highest
                                                                 implemented Exception level. */
#else /* Word 0 - Little Endian */
        uint32_t mpidrel1lo            : 32; /**< [ 31:  0](RO) MPIDR_EL1 low half. Read-only copy of the low half of MPIDR_EL1, as seen from the highest
                                                                 implemented Exception level. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amdevaff0_s cn; */
};
typedef union cavm_dsuubx_amdevaff0 cavm_dsuubx_amdevaff0_t;

static inline uint64_t CAVM_DSUUBX_AMDEVAFF0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMDEVAFF0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090fa8ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090fa8ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090fa8ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090fa8ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMDEVAFF0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMDEVAFF0(a) cavm_dsuubx_amdevaff0_t
#define bustype_CAVM_DSUUBX_AMDEVAFF0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMDEVAFF0(a) "DSUUBX_AMDEVAFF0"
#define device_bar_CAVM_DSUUBX_AMDEVAFF0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMDEVAFF0(a) (a)
#define arguments_CAVM_DSUUBX_AMDEVAFF0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_amdevaff1
 *
 * Dsuub Activity Monitors Device Affinity Register 1
 * Copy of the high half of the PE MPIDR_EL1 register that allows a debugger to determine which PE
 * in a multiprocessor system the AMU component relates to.
 */
union cavm_dsuubx_amdevaff1
{
    uint32_t u;
    struct cavm_dsuubx_amdevaff1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t mpidrel1hi            : 32; /**< [ 31:  0](RO) MPIDR_EL1 high half. Read-only copy of the low half of MPIDR_EL1, as seen from the highest
                                                                 implemented Exception level. */
#else /* Word 0 - Little Endian */
        uint32_t mpidrel1hi            : 32; /**< [ 31:  0](RO) MPIDR_EL1 high half. Read-only copy of the low half of MPIDR_EL1, as seen from the highest
                                                                 implemented Exception level. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amdevaff1_s cn; */
};
typedef union cavm_dsuubx_amdevaff1 cavm_dsuubx_amdevaff1_t;

static inline uint64_t CAVM_DSUUBX_AMDEVAFF1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMDEVAFF1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090facll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090facll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090facll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090facll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMDEVAFF1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMDEVAFF1(a) cavm_dsuubx_amdevaff1_t
#define bustype_CAVM_DSUUBX_AMDEVAFF1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMDEVAFF1(a) "DSUUBX_AMDEVAFF1"
#define device_bar_CAVM_DSUUBX_AMDEVAFF1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMDEVAFF1(a) (a)
#define arguments_CAVM_DSUUBX_AMDEVAFF1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_amdevarch
 *
 * Dsuub Activity Monitors Device Architecture Register
 * Identifies the programmers' model architecture of the AMU component.
 */
union cavm_dsuubx_amdevarch
{
    uint32_t u;
    struct cavm_dsuubx_amdevarch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t architect             : 11; /**< [ 31: 21](RO) Defines the architecture of the component. For AMU, this is
                                                                 Arm Limited.
                                                                 Bits [31:28] are the JEP106 continuation code, 0x4.
                                                                 Bits [27:21] are the JEP106 ID code, 0x3B. */
        uint32_t present               : 1;  /**< [ 20: 20](RO) When set to 1, indicates that the DEVARCH is present.

                                                                 0b1 =
                                                                 DEVARCH is present */
        uint32_t revision              : 4;  /**< [ 19: 16](RO) Defines the architecture revision. For architectures defined
                                                                 by Arm this is the minor revision.

                                                                 0b0000 =
                                                                 Architecture revision is AMUv1. */
        uint32_t archid                : 16; /**< [ 15:  0](RO) Defines this part to be an AMU component. For
                                                                 architectures defined by Arm this is further subdivided.

                                                                 For AMU:

                                                                 *     Bits [15:12] are the architecture version, 0x0.
                                                                 *     Bits [11:0] are the architecture part number, 0xA66.
                                                                 This corresponds to AMU architecture version AMUv1. */
#else /* Word 0 - Little Endian */
        uint32_t archid                : 16; /**< [ 15:  0](RO) Defines this part to be an AMU component. For
                                                                 architectures defined by Arm this is further subdivided.

                                                                 For AMU:

                                                                 *     Bits [15:12] are the architecture version, 0x0.
                                                                 *     Bits [11:0] are the architecture part number, 0xA66.
                                                                 This corresponds to AMU architecture version AMUv1. */
        uint32_t revision              : 4;  /**< [ 19: 16](RO) Defines the architecture revision. For architectures defined
                                                                 by Arm this is the minor revision.

                                                                 0b0000 =
                                                                 Architecture revision is AMUv1. */
        uint32_t present               : 1;  /**< [ 20: 20](RO) When set to 1, indicates that the DEVARCH is present.

                                                                 0b1 =
                                                                 DEVARCH is present */
        uint32_t architect             : 11; /**< [ 31: 21](RO) Defines the architecture of the component. For AMU, this is
                                                                 Arm Limited.
                                                                 Bits [31:28] are the JEP106 continuation code, 0x4.
                                                                 Bits [27:21] are the JEP106 ID code, 0x3B. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amdevarch_s cn; */
};
typedef union cavm_dsuubx_amdevarch cavm_dsuubx_amdevarch_t;

static inline uint64_t CAVM_DSUUBX_AMDEVARCH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMDEVARCH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090fbcll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090fbcll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090fbcll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090fbcll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMDEVARCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMDEVARCH(a) cavm_dsuubx_amdevarch_t
#define bustype_CAVM_DSUUBX_AMDEVARCH(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMDEVARCH(a) "DSUUBX_AMDEVARCH"
#define device_bar_CAVM_DSUUBX_AMDEVARCH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMDEVARCH(a) (a)
#define arguments_CAVM_DSUUBX_AMDEVARCH(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_amdevtype
 *
 * Dsuub Activity Monitors Device Type Register
 * Indicates to a debugger that this component is part of a PE's performance monitor interface.
 */
union cavm_dsuubx_amdevtype
{
    uint32_t u;
    struct cavm_dsuubx_amdevtype_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Subtype. Reads as 0x1, to indicate this is a component within a PE. */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major type. Reads as 0x6, to indicate this is a performance monitor
                                                                 component. */
#else /* Word 0 - Little Endian */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major type. Reads as 0x6, to indicate this is a performance monitor
                                                                 component. */
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Subtype. Reads as 0x1, to indicate this is a component within a PE. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amdevtype_s cn; */
};
typedef union cavm_dsuubx_amdevtype cavm_dsuubx_amdevtype_t;

static inline uint64_t CAVM_DSUUBX_AMDEVTYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMDEVTYPE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090fccll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090fccll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090fccll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090fccll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMDEVTYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMDEVTYPE(a) cavm_dsuubx_amdevtype_t
#define bustype_CAVM_DSUUBX_AMDEVTYPE(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMDEVTYPE(a) "DSUUBX_AMDEVTYPE"
#define device_bar_CAVM_DSUUBX_AMDEVTYPE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMDEVTYPE(a) (a)
#define arguments_CAVM_DSUUBX_AMDEVTYPE(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_amevcntr00
 *
 * Dsuub Activity Monitors Event Type Registers 00
 * Provides access to the architected activity monitor event counters.
 */
union cavm_dsuubx_amevcntr00
{
    uint64_t u;
    struct cavm_dsuubx_amevcntr00_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t acnt                  : 64; /**< [ 63:  0](RO) Architected activity monitor event counter n.
                                                                 Value of architected activity monitor event counter n, where n is the number of
                                                                 this register and is
                                                                 a number from 0 to 15.
                                                                 If the counter is enabled, writes to this register have UNPREDICTABLE results.
                                                                 On a Cold reset, this field resets to 0.

                                                                 This activity monitor counts event number 0x0011: CPU_CYCLES
                                                                 Core frequency cycles */
#else /* Word 0 - Little Endian */
        uint64_t acnt                  : 64; /**< [ 63:  0](RO) Architected activity monitor event counter n.
                                                                 Value of architected activity monitor event counter n, where n is the number of
                                                                 this register and is
                                                                 a number from 0 to 15.
                                                                 If the counter is enabled, writes to this register have UNPREDICTABLE results.
                                                                 On a Cold reset, this field resets to 0.

                                                                 This activity monitor counts event number 0x0011: CPU_CYCLES
                                                                 Core frequency cycles */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amevcntr00_s cn; */
};
typedef union cavm_dsuubx_amevcntr00 cavm_dsuubx_amevcntr00_t;

static inline uint64_t CAVM_DSUUBX_AMEVCNTR00(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMEVCNTR00(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090000ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090000ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090000ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090000ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMEVCNTR00", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMEVCNTR00(a) cavm_dsuubx_amevcntr00_t
#define bustype_CAVM_DSUUBX_AMEVCNTR00(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_AMEVCNTR00(a) "DSUUBX_AMEVCNTR00"
#define device_bar_CAVM_DSUUBX_AMEVCNTR00(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMEVCNTR00(a) (a)
#define arguments_CAVM_DSUUBX_AMEVCNTR00(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_amevcntr01
 *
 * Dsuub Activity Monitors Event Type Registers 01
 * Provides access to the architected activity monitor event counters.
 */
union cavm_dsuubx_amevcntr01
{
    uint64_t u;
    struct cavm_dsuubx_amevcntr01_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t acnt                  : 64; /**< [ 63:  0](RO) Architected activity monitor event counter n.
                                                                 Value of architected activity monitor event counter n, where n is the number of
                                                                 this register and is
                                                                 a number from 0 to 15.
                                                                 If the counter is enabled, writes to this register have UNPREDICTABLE results.
                                                                 On a Cold reset, this field resets to 0.

                                                                 This activity monitor counts event number 0x4004: CNT_CYCLES
                                                                 Constant frequency cycles */
#else /* Word 0 - Little Endian */
        uint64_t acnt                  : 64; /**< [ 63:  0](RO) Architected activity monitor event counter n.
                                                                 Value of architected activity monitor event counter n, where n is the number of
                                                                 this register and is
                                                                 a number from 0 to 15.
                                                                 If the counter is enabled, writes to this register have UNPREDICTABLE results.
                                                                 On a Cold reset, this field resets to 0.

                                                                 This activity monitor counts event number 0x4004: CNT_CYCLES
                                                                 Constant frequency cycles */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amevcntr01_s cn; */
};
typedef union cavm_dsuubx_amevcntr01 cavm_dsuubx_amevcntr01_t;

static inline uint64_t CAVM_DSUUBX_AMEVCNTR01(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMEVCNTR01(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090008ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090008ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090008ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090008ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMEVCNTR01", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMEVCNTR01(a) cavm_dsuubx_amevcntr01_t
#define bustype_CAVM_DSUUBX_AMEVCNTR01(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_AMEVCNTR01(a) "DSUUBX_AMEVCNTR01"
#define device_bar_CAVM_DSUUBX_AMEVCNTR01(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMEVCNTR01(a) (a)
#define arguments_CAVM_DSUUBX_AMEVCNTR01(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_amevcntr02
 *
 * Dsuub Activity Monitors Event Type Registers 02
 * Provides access to the architected activity monitor event counters.
 */
union cavm_dsuubx_amevcntr02
{
    uint64_t u;
    struct cavm_dsuubx_amevcntr02_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t acnt                  : 64; /**< [ 63:  0](RO) Architected activity monitor event counter n.
                                                                 Value of architected activity monitor event counter n, where n is the number of
                                                                 this register and is
                                                                 a number from 0 to 15.
                                                                 If the counter is enabled, writes to this register have UNPREDICTABLE results.
                                                                 On a Cold reset, this field resets to 0.

                                                                 This activity monitor counts event number 0x4005: STALL_BACKEND_MEM
                                                                 Memory stall cycles
                                                                 This counter counts cycles in
                                                                 which the core is unable to
                                                                 dispatch instructions from the
                                                                 front end to the back end due to
                                                                 a back end stall caused by a miss
                                                                 in the last level of cache within
                                                                 the core clock domain. */
#else /* Word 0 - Little Endian */
        uint64_t acnt                  : 64; /**< [ 63:  0](RO) Architected activity monitor event counter n.
                                                                 Value of architected activity monitor event counter n, where n is the number of
                                                                 this register and is
                                                                 a number from 0 to 15.
                                                                 If the counter is enabled, writes to this register have UNPREDICTABLE results.
                                                                 On a Cold reset, this field resets to 0.

                                                                 This activity monitor counts event number 0x4005: STALL_BACKEND_MEM
                                                                 Memory stall cycles
                                                                 This counter counts cycles in
                                                                 which the core is unable to
                                                                 dispatch instructions from the
                                                                 front end to the back end due to
                                                                 a back end stall caused by a miss
                                                                 in the last level of cache within
                                                                 the core clock domain. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amevcntr02_s cn10; */
    /* struct cavm_dsuubx_amevcntr02_s cn10ka; */
    struct cavm_dsuubx_amevcntr02_cn10kb
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t acnt                  : 64; /**< [ 63:  0](RO) Architected activity monitor event counter n.
                                                                 Value of architected activity monitor event counter n, where n is the number of
                                                                 this register and is
                                                                 a number from 0 to 15.
                                                                 If the counter is enabled, writes to this register have UNPREDICTABLE results.
                                                                 On a Cold reset, this field resets to 0.

                                                                 This activity monitor counts event number 0x0008: Instructions retired
                                                                 Instruction architecturally executed
                                                                 This counter increments for
                                                                 every instruction that is executed
                                                                 architecturally, including
                                                                 instructions that fail their
                                                                 condition code check. */
#else /* Word 0 - Little Endian */
        uint64_t acnt                  : 64; /**< [ 63:  0](RO) Architected activity monitor event counter n.
                                                                 Value of architected activity monitor event counter n, where n is the number of
                                                                 this register and is
                                                                 a number from 0 to 15.
                                                                 If the counter is enabled, writes to this register have UNPREDICTABLE results.
                                                                 On a Cold reset, this field resets to 0.

                                                                 This activity monitor counts event number 0x0008: Instructions retired
                                                                 Instruction architecturally executed
                                                                 This counter increments for
                                                                 every instruction that is executed
                                                                 architecturally, including
                                                                 instructions that fail their
                                                                 condition code check. */
#endif /* Word 0 - End */
    } cn10kb;
    /* struct cavm_dsuubx_amevcntr02_s cnf10ka; */
    /* struct cavm_dsuubx_amevcntr02_s cnf10kb; */
};
typedef union cavm_dsuubx_amevcntr02 cavm_dsuubx_amevcntr02_t;

static inline uint64_t CAVM_DSUUBX_AMEVCNTR02(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMEVCNTR02(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090010ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090010ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090010ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090010ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMEVCNTR02", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMEVCNTR02(a) cavm_dsuubx_amevcntr02_t
#define bustype_CAVM_DSUUBX_AMEVCNTR02(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_AMEVCNTR02(a) "DSUUBX_AMEVCNTR02"
#define device_bar_CAVM_DSUUBX_AMEVCNTR02(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMEVCNTR02(a) (a)
#define arguments_CAVM_DSUUBX_AMEVCNTR02(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_amevcntr03
 *
 * Dsuub Activity Monitors Event Type Registers 03
 * Provides access to the architected activity monitor event counters.
 */
union cavm_dsuubx_amevcntr03
{
    uint64_t u;
    struct cavm_dsuubx_amevcntr03_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t acnt                  : 64; /**< [ 63:  0](RO) Architected activity monitor event counter n.
                                                                 Value of architected activity monitor event counter n, where n is the number of
                                                                 this register and is
                                                                 a number from 0 to 15.
                                                                 If the counter is enabled, writes to this register have UNPREDICTABLE results.
                                                                 On a Cold reset, this field resets to 0.

                                                                 This activity monitor counts event number 0x4005: STALL_BACKEND_MEM
                                                                 Memory stall cycles
                                                                 This counter counts cycles in
                                                                 which the core is unable to
                                                                 dispatch instructions from the
                                                                 front end to the back end due to
                                                                 a back end stall caused by a miss
                                                                 in the last level of cache within
                                                                 the core clock domain. */
#else /* Word 0 - Little Endian */
        uint64_t acnt                  : 64; /**< [ 63:  0](RO) Architected activity monitor event counter n.
                                                                 Value of architected activity monitor event counter n, where n is the number of
                                                                 this register and is
                                                                 a number from 0 to 15.
                                                                 If the counter is enabled, writes to this register have UNPREDICTABLE results.
                                                                 On a Cold reset, this field resets to 0.

                                                                 This activity monitor counts event number 0x4005: STALL_BACKEND_MEM
                                                                 Memory stall cycles
                                                                 This counter counts cycles in
                                                                 which the core is unable to
                                                                 dispatch instructions from the
                                                                 front end to the back end due to
                                                                 a back end stall caused by a miss
                                                                 in the last level of cache within
                                                                 the core clock domain. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amevcntr03_s cn; */
};
typedef union cavm_dsuubx_amevcntr03 cavm_dsuubx_amevcntr03_t;

static inline uint64_t CAVM_DSUUBX_AMEVCNTR03(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMEVCNTR03(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090018ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090018ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090018ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090018ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMEVCNTR03", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMEVCNTR03(a) cavm_dsuubx_amevcntr03_t
#define bustype_CAVM_DSUUBX_AMEVCNTR03(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_AMEVCNTR03(a) "DSUUBX_AMEVCNTR03"
#define device_bar_CAVM_DSUUBX_AMEVCNTR03(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMEVCNTR03(a) (a)
#define arguments_CAVM_DSUUBX_AMEVCNTR03(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_amevcntr10
 *
 * Dsuub Activity Monitors Event Type Registers 10
 * Provides access to the auxiliary activity monitor event counters.
 */
union cavm_dsuubx_amevcntr10
{
    uint64_t u;
    struct cavm_dsuubx_amevcntr10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t acnt                  : 64; /**< [ 63:  0](RO) External register AMEVCNTR1\<n\>[63:0] is architecturally mapped to AArch64 System register
                                                                 AMEVCNTR1\<n\>_EL0[63:0].
                                                                 External register AMEVCNTR1\<n\>[63:0] is architecturally mapped to AArch32 System register
                                                                 AMEVCNTR1\<n\>[63:0].
                                                                 The power domain of AMEVCNTR1\<n\> is IMPLEMENTATION DEFINED.
                                                                 This register is present only when FEAT_AMUv1 is implemented. Otherwise, direct accesses to
                                                                 AMEVCNTR1\<n\> are RES0.

                                                                 This activity monitor counts event number 0x0300: Reserved */
#else /* Word 0 - Little Endian */
        uint64_t acnt                  : 64; /**< [ 63:  0](RO) External register AMEVCNTR1\<n\>[63:0] is architecturally mapped to AArch64 System register
                                                                 AMEVCNTR1\<n\>_EL0[63:0].
                                                                 External register AMEVCNTR1\<n\>[63:0] is architecturally mapped to AArch32 System register
                                                                 AMEVCNTR1\<n\>[63:0].
                                                                 The power domain of AMEVCNTR1\<n\> is IMPLEMENTATION DEFINED.
                                                                 This register is present only when FEAT_AMUv1 is implemented. Otherwise, direct accesses to
                                                                 AMEVCNTR1\<n\> are RES0.

                                                                 This activity monitor counts event number 0x0300: Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amevcntr10_s cn; */
};
typedef union cavm_dsuubx_amevcntr10 cavm_dsuubx_amevcntr10_t;

static inline uint64_t CAVM_DSUUBX_AMEVCNTR10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMEVCNTR10(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090100ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090100ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090100ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090100ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMEVCNTR10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMEVCNTR10(a) cavm_dsuubx_amevcntr10_t
#define bustype_CAVM_DSUUBX_AMEVCNTR10(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_AMEVCNTR10(a) "DSUUBX_AMEVCNTR10"
#define device_bar_CAVM_DSUUBX_AMEVCNTR10(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMEVCNTR10(a) (a)
#define arguments_CAVM_DSUUBX_AMEVCNTR10(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_amevcntr11
 *
 * Dsuub Activity Monitors Event Type Registers 11
 * Provides access to the auxiliary activity monitor event counters.
 */
union cavm_dsuubx_amevcntr11
{
    uint64_t u;
    struct cavm_dsuubx_amevcntr11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t acnt                  : 64; /**< [ 63:  0](RO) External register AMEVCNTR1\<n\>[63:0] is architecturally mapped to AArch64 System register
                                                                 AMEVCNTR1\<n\>_EL0[63:0].
                                                                 External register AMEVCNTR1\<n\>[63:0] is architecturally mapped to AArch32 System register
                                                                 AMEVCNTR1\<n\>[63:0].
                                                                 The power domain of AMEVCNTR1\<n\> is IMPLEMENTATION DEFINED.
                                                                 This register is present only when FEAT_AMUv1 is implemented. Otherwise, direct accesses to
                                                                 AMEVCNTR1\<n\> are RES0.

                                                                 This activity monitor counts event number 0x0301: Reserved */
#else /* Word 0 - Little Endian */
        uint64_t acnt                  : 64; /**< [ 63:  0](RO) External register AMEVCNTR1\<n\>[63:0] is architecturally mapped to AArch64 System register
                                                                 AMEVCNTR1\<n\>_EL0[63:0].
                                                                 External register AMEVCNTR1\<n\>[63:0] is architecturally mapped to AArch32 System register
                                                                 AMEVCNTR1\<n\>[63:0].
                                                                 The power domain of AMEVCNTR1\<n\> is IMPLEMENTATION DEFINED.
                                                                 This register is present only when FEAT_AMUv1 is implemented. Otherwise, direct accesses to
                                                                 AMEVCNTR1\<n\> are RES0.

                                                                 This activity monitor counts event number 0x0301: Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amevcntr11_s cn; */
};
typedef union cavm_dsuubx_amevcntr11 cavm_dsuubx_amevcntr11_t;

static inline uint64_t CAVM_DSUUBX_AMEVCNTR11(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMEVCNTR11(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090108ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090108ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090108ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090108ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMEVCNTR11", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMEVCNTR11(a) cavm_dsuubx_amevcntr11_t
#define bustype_CAVM_DSUUBX_AMEVCNTR11(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_AMEVCNTR11(a) "DSUUBX_AMEVCNTR11"
#define device_bar_CAVM_DSUUBX_AMEVCNTR11(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMEVCNTR11(a) (a)
#define arguments_CAVM_DSUUBX_AMEVCNTR11(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_amevcntr12
 *
 * Dsuub Activity Monitors Event Type Registers 12
 * Provides access to the auxiliary activity monitor event counters.
 */
union cavm_dsuubx_amevcntr12
{
    uint64_t u;
    struct cavm_dsuubx_amevcntr12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t acnt                  : 64; /**< [ 63:  0](RO) External register AMEVCNTR1\<n\>[63:0] is architecturally mapped to AArch64 System register
                                                                 AMEVCNTR1\<n\>_EL0[63:0].
                                                                 External register AMEVCNTR1\<n\>[63:0] is architecturally mapped to AArch32 System register
                                                                 AMEVCNTR1\<n\>[63:0].
                                                                 The power domain of AMEVCNTR1\<n\> is IMPLEMENTATION DEFINED.
                                                                 This register is present only when FEAT_AMUv1 is implemented. Otherwise, direct accesses to
                                                                 AMEVCNTR1\<n\> are RES0.

                                                                 This activity monitor counts event number 0x0302: Reserved */
#else /* Word 0 - Little Endian */
        uint64_t acnt                  : 64; /**< [ 63:  0](RO) External register AMEVCNTR1\<n\>[63:0] is architecturally mapped to AArch64 System register
                                                                 AMEVCNTR1\<n\>_EL0[63:0].
                                                                 External register AMEVCNTR1\<n\>[63:0] is architecturally mapped to AArch32 System register
                                                                 AMEVCNTR1\<n\>[63:0].
                                                                 The power domain of AMEVCNTR1\<n\> is IMPLEMENTATION DEFINED.
                                                                 This register is present only when FEAT_AMUv1 is implemented. Otherwise, direct accesses to
                                                                 AMEVCNTR1\<n\> are RES0.

                                                                 This activity monitor counts event number 0x0302: Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amevcntr12_s cn; */
};
typedef union cavm_dsuubx_amevcntr12 cavm_dsuubx_amevcntr12_t;

static inline uint64_t CAVM_DSUUBX_AMEVCNTR12(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMEVCNTR12(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090110ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090110ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090110ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090110ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMEVCNTR12", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMEVCNTR12(a) cavm_dsuubx_amevcntr12_t
#define bustype_CAVM_DSUUBX_AMEVCNTR12(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_AMEVCNTR12(a) "DSUUBX_AMEVCNTR12"
#define device_bar_CAVM_DSUUBX_AMEVCNTR12(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMEVCNTR12(a) (a)
#define arguments_CAVM_DSUUBX_AMEVCNTR12(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_amevtyper00
 *
 * Dsuub Activity Monitors Event Type Registers 00
 * Provides information on the events that an architected activity monitor event counter AArch64-
 * AMEVCNTR00_EL0 counts.
 */
union cavm_dsuubx_amevtyper00
{
    uint32_t u;
    struct cavm_dsuubx_amevtyper00_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the architected activity monitor event counter
                                                                 ext-AMEVCNTR0\<n\>. The value of this field is architecturally
                                                                 mandated for each architected counter.

                                                                 This activity monitor counts event number 0x0011: CPU_CYCLES
                                                                 Core frequency cycles */
#else /* Word 0 - Little Endian */
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the architected activity monitor event counter
                                                                 ext-AMEVCNTR0\<n\>. The value of this field is architecturally
                                                                 mandated for each architected counter.

                                                                 This activity monitor counts event number 0x0011: CPU_CYCLES
                                                                 Core frequency cycles */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    struct cavm_dsuubx_amevtyper00_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t reserved_16_24        : 9;
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the architected activity monitor event counter
                                                                 ext-AMEVCNTR0\<n\>. The value of this field is architecturally
                                                                 mandated for each architected counter.

                                                                 This activity monitor counts event number 0x0011: CPU_CYCLES
                                                                 Core frequency cycles */
#else /* Word 0 - Little Endian */
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the architected activity monitor event counter
                                                                 ext-AMEVCNTR0\<n\>. The value of this field is architecturally
                                                                 mandated for each architected counter.

                                                                 This activity monitor counts event number 0x0011: CPU_CYCLES
                                                                 Core frequency cycles */
        uint32_t reserved_16_24        : 9;
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_dsuubx_amevtyper00 cavm_dsuubx_amevtyper00_t;

static inline uint64_t CAVM_DSUUBX_AMEVTYPER00(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMEVTYPER00(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090400ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090400ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090400ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090400ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMEVTYPER00", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMEVTYPER00(a) cavm_dsuubx_amevtyper00_t
#define bustype_CAVM_DSUUBX_AMEVTYPER00(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMEVTYPER00(a) "DSUUBX_AMEVTYPER00"
#define device_bar_CAVM_DSUUBX_AMEVTYPER00(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMEVTYPER00(a) (a)
#define arguments_CAVM_DSUUBX_AMEVTYPER00(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_amevtyper01
 *
 * Dsuub Activity Monitors Event Type Registers 01
 * Provides information on the events that an architected activity monitor event counter AArch64-
 * AMEVCNTR01_EL0 counts.
 */
union cavm_dsuubx_amevtyper01
{
    uint32_t u;
    struct cavm_dsuubx_amevtyper01_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the architected activity monitor event counter
                                                                 ext-AMEVCNTR0\<n\>. The value of this field is architecturally
                                                                 mandated for each architected counter.

                                                                 This activity monitor counts event number 0x4004: CNT_CYCLES
                                                                 Constant frequency cycles */
#else /* Word 0 - Little Endian */
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the architected activity monitor event counter
                                                                 ext-AMEVCNTR0\<n\>. The value of this field is architecturally
                                                                 mandated for each architected counter.

                                                                 This activity monitor counts event number 0x4004: CNT_CYCLES
                                                                 Constant frequency cycles */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    struct cavm_dsuubx_amevtyper01_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t reserved_16_24        : 9;
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the architected activity monitor event counter
                                                                 ext-AMEVCNTR0\<n\>. The value of this field is architecturally
                                                                 mandated for each architected counter.

                                                                 This activity monitor counts event number 0x4004: CNT_CYCLES
                                                                 Constant frequency cycles */
#else /* Word 0 - Little Endian */
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the architected activity monitor event counter
                                                                 ext-AMEVCNTR0\<n\>. The value of this field is architecturally
                                                                 mandated for each architected counter.

                                                                 This activity monitor counts event number 0x4004: CNT_CYCLES
                                                                 Constant frequency cycles */
        uint32_t reserved_16_24        : 9;
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_dsuubx_amevtyper01 cavm_dsuubx_amevtyper01_t;

static inline uint64_t CAVM_DSUUBX_AMEVTYPER01(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMEVTYPER01(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090404ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090404ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090404ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090404ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMEVTYPER01", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMEVTYPER01(a) cavm_dsuubx_amevtyper01_t
#define bustype_CAVM_DSUUBX_AMEVTYPER01(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMEVTYPER01(a) "DSUUBX_AMEVTYPER01"
#define device_bar_CAVM_DSUUBX_AMEVTYPER01(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMEVTYPER01(a) (a)
#define arguments_CAVM_DSUUBX_AMEVTYPER01(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_amevtyper02
 *
 * Dsuub Activity Monitors Event Type Registers 02
 * Provides information on the events that an architected activity monitor event counter AArch64-
 * AMEVCNTR02_EL0 counts.
 */
union cavm_dsuubx_amevtyper02
{
    uint32_t u;
    struct cavm_dsuubx_amevtyper02_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the architected activity monitor event counter
                                                                 ext-AMEVCNTR0\<n\>. The value of this field is architecturally
                                                                 mandated for each architected counter.

                                                                 This activity monitor counts event number 0x0008: Instructions Retired
                                                                 Instruction architecturally
                                                                 executed
                                                                 This counter increments for
                                                                 every instruction that is executed
                                                                 architecturally, including
                                                                 instructions that fail their
                                                                 condition code check. */
#else /* Word 0 - Little Endian */
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the architected activity monitor event counter
                                                                 ext-AMEVCNTR0\<n\>. The value of this field is architecturally
                                                                 mandated for each architected counter.

                                                                 This activity monitor counts event number 0x0008: Instructions Retired
                                                                 Instruction architecturally
                                                                 executed
                                                                 This counter increments for
                                                                 every instruction that is executed
                                                                 architecturally, including
                                                                 instructions that fail their
                                                                 condition code check. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    struct cavm_dsuubx_amevtyper02_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t reserved_16_24        : 9;
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the architected activity monitor event counter
                                                                 ext-AMEVCNTR0\<n\>. The value of this field is architecturally
                                                                 mandated for each architected counter.

                                                                 This activity monitor counts event number 0x0008: Instructions Retired
                                                                 Instruction architecturally
                                                                 executed
                                                                 This counter increments for
                                                                 every instruction that is executed
                                                                 architecturally, including
                                                                 instructions that fail their
                                                                 condition code check. */
#else /* Word 0 - Little Endian */
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the architected activity monitor event counter
                                                                 ext-AMEVCNTR0\<n\>. The value of this field is architecturally
                                                                 mandated for each architected counter.

                                                                 This activity monitor counts event number 0x0008: Instructions Retired
                                                                 Instruction architecturally
                                                                 executed
                                                                 This counter increments for
                                                                 every instruction that is executed
                                                                 architecturally, including
                                                                 instructions that fail their
                                                                 condition code check. */
        uint32_t reserved_16_24        : 9;
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_dsuubx_amevtyper02 cavm_dsuubx_amevtyper02_t;

static inline uint64_t CAVM_DSUUBX_AMEVTYPER02(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMEVTYPER02(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090408ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090408ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090408ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090408ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMEVTYPER02", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMEVTYPER02(a) cavm_dsuubx_amevtyper02_t
#define bustype_CAVM_DSUUBX_AMEVTYPER02(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMEVTYPER02(a) "DSUUBX_AMEVTYPER02"
#define device_bar_CAVM_DSUUBX_AMEVTYPER02(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMEVTYPER02(a) (a)
#define arguments_CAVM_DSUUBX_AMEVTYPER02(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_amevtyper03
 *
 * Dsuub Activity Monitors Event Type Registers 03
 * Provides information on the events that an architected activity monitor event counter AArch64-
 * AMEVCNTR03_EL0 counts.
 */
union cavm_dsuubx_amevtyper03
{
    uint32_t u;
    struct cavm_dsuubx_amevtyper03_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the architected activity monitor event counter
                                                                 ext-AMEVCNTR0\<n\>. The value of this field is architecturally
                                                                 mandated for each architected counter.

                                                                 This activity monitor counts event number 0x4005: STALL_BACKEND_MEM
                                                                 Memory stall cycles
                                                                 This counter counts cycles in
                                                                 which the core is unable to
                                                                 dispatch instructions from the
                                                                 front end to the back end due to
                                                                 a back end stall caused by a miss
                                                                 in the last level of cache within
                                                                 the core clock domain. */
#else /* Word 0 - Little Endian */
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the architected activity monitor event counter
                                                                 ext-AMEVCNTR0\<n\>. The value of this field is architecturally
                                                                 mandated for each architected counter.

                                                                 This activity monitor counts event number 0x4005: STALL_BACKEND_MEM
                                                                 Memory stall cycles
                                                                 This counter counts cycles in
                                                                 which the core is unable to
                                                                 dispatch instructions from the
                                                                 front end to the back end due to
                                                                 a back end stall caused by a miss
                                                                 in the last level of cache within
                                                                 the core clock domain. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    struct cavm_dsuubx_amevtyper03_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t reserved_16_24        : 9;
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the architected activity monitor event counter
                                                                 ext-AMEVCNTR0\<n\>. The value of this field is architecturally
                                                                 mandated for each architected counter.

                                                                 This activity monitor counts event number 0x4005: STALL_BACKEND_MEM
                                                                 Memory stall cycles
                                                                 This counter counts cycles in
                                                                 which the core is unable to
                                                                 dispatch instructions from the
                                                                 front end to the back end due to
                                                                 a back end stall caused by a miss
                                                                 in the last level of cache within
                                                                 the core clock domain. */
#else /* Word 0 - Little Endian */
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the architected activity monitor event counter
                                                                 ext-AMEVCNTR0\<n\>. The value of this field is architecturally
                                                                 mandated for each architected counter.

                                                                 This activity monitor counts event number 0x4005: STALL_BACKEND_MEM
                                                                 Memory stall cycles
                                                                 This counter counts cycles in
                                                                 which the core is unable to
                                                                 dispatch instructions from the
                                                                 front end to the back end due to
                                                                 a back end stall caused by a miss
                                                                 in the last level of cache within
                                                                 the core clock domain. */
        uint32_t reserved_16_24        : 9;
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_dsuubx_amevtyper03 cavm_dsuubx_amevtyper03_t;

static inline uint64_t CAVM_DSUUBX_AMEVTYPER03(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMEVTYPER03(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e20009040cll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e20009040cll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e20009040cll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e20009040cll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMEVTYPER03", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMEVTYPER03(a) cavm_dsuubx_amevtyper03_t
#define bustype_CAVM_DSUUBX_AMEVTYPER03(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMEVTYPER03(a) "DSUUBX_AMEVTYPER03"
#define device_bar_CAVM_DSUUBX_AMEVTYPER03(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMEVTYPER03(a) (a)
#define arguments_CAVM_DSUUBX_AMEVTYPER03(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_amevtyper10
 *
 * Dsuub Activity Monitors Event Type Registers 10
 * Provides information on the events that an architected activity monitor event counter AArch64-
 * AMEVCNTR10_EL0 counts.
 */
union cavm_dsuubx_amevtyper10
{
    uint32_t u;
    struct cavm_dsuubx_amevtyper10_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the auxiliary activity monitor event counter ext-
                                                                 AMEVCNTR1\<n\>.[15:0]

                                                                 It is IMPLEMENTATION DEFINED what values are supported by each
                                                                 counter.

                                                                 If software writes a value to this field which is not supported by
                                                                 the corresponding counter ext-AMEVCNTR1\<n\>, then:

                                                                 *   It is UNPREDICTABLE which event will be counted.
                                                                 *   The value read back is UNKNOWN.
                                                                 Note:       The event counted by ext-
                                                                 AMEVCNTR1\<n\> might be fixed at
                                                                 implementation. In this case, the field is
                                                                 read-only and writes are UNDEFINED.
                                                                 If the corresponding counter ext-AMEVCNTR1\<n\> is
                                                                 enabled, writes to this register have UNPREDICTABLE
                                                                 results.

                                                                 This activity monitor counts event number 0x0300: Reserved */
#else /* Word 0 - Little Endian */
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the auxiliary activity monitor event counter ext-
                                                                 AMEVCNTR1\<n\>.[15:0]

                                                                 It is IMPLEMENTATION DEFINED what values are supported by each
                                                                 counter.

                                                                 If software writes a value to this field which is not supported by
                                                                 the corresponding counter ext-AMEVCNTR1\<n\>, then:

                                                                 *   It is UNPREDICTABLE which event will be counted.
                                                                 *   The value read back is UNKNOWN.
                                                                 Note:       The event counted by ext-
                                                                 AMEVCNTR1\<n\> might be fixed at
                                                                 implementation. In this case, the field is
                                                                 read-only and writes are UNDEFINED.
                                                                 If the corresponding counter ext-AMEVCNTR1\<n\> is
                                                                 enabled, writes to this register have UNPREDICTABLE
                                                                 results.

                                                                 This activity monitor counts event number 0x0300: Reserved */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    struct cavm_dsuubx_amevtyper10_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t reserved_16_24        : 9;
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the auxiliary activity monitor event counter ext-
                                                                 AMEVCNTR1\<n\>.[15:0]

                                                                 It is IMPLEMENTATION DEFINED what values are supported by each
                                                                 counter.

                                                                 If software writes a value to this field which is not supported by
                                                                 the corresponding counter ext-AMEVCNTR1\<n\>, then:

                                                                 *   It is UNPREDICTABLE which event will be counted.
                                                                 *   The value read back is UNKNOWN.
                                                                 Note:       The event counted by ext-
                                                                 AMEVCNTR1\<n\> might be fixed at
                                                                 implementation. In this case, the field is
                                                                 read-only and writes are UNDEFINED.
                                                                 If the corresponding counter ext-AMEVCNTR1\<n\> is
                                                                 enabled, writes to this register have UNPREDICTABLE
                                                                 results.

                                                                 This activity monitor counts event number 0x0300: Reserved */
#else /* Word 0 - Little Endian */
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the auxiliary activity monitor event counter ext-
                                                                 AMEVCNTR1\<n\>.[15:0]

                                                                 It is IMPLEMENTATION DEFINED what values are supported by each
                                                                 counter.

                                                                 If software writes a value to this field which is not supported by
                                                                 the corresponding counter ext-AMEVCNTR1\<n\>, then:

                                                                 *   It is UNPREDICTABLE which event will be counted.
                                                                 *   The value read back is UNKNOWN.
                                                                 Note:       The event counted by ext-
                                                                 AMEVCNTR1\<n\> might be fixed at
                                                                 implementation. In this case, the field is
                                                                 read-only and writes are UNDEFINED.
                                                                 If the corresponding counter ext-AMEVCNTR1\<n\> is
                                                                 enabled, writes to this register have UNPREDICTABLE
                                                                 results.

                                                                 This activity monitor counts event number 0x0300: Reserved */
        uint32_t reserved_16_24        : 9;
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_dsuubx_amevtyper10 cavm_dsuubx_amevtyper10_t;

static inline uint64_t CAVM_DSUUBX_AMEVTYPER10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMEVTYPER10(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090480ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090480ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090480ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090480ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMEVTYPER10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMEVTYPER10(a) cavm_dsuubx_amevtyper10_t
#define bustype_CAVM_DSUUBX_AMEVTYPER10(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMEVTYPER10(a) "DSUUBX_AMEVTYPER10"
#define device_bar_CAVM_DSUUBX_AMEVTYPER10(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMEVTYPER10(a) (a)
#define arguments_CAVM_DSUUBX_AMEVTYPER10(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_amevtyper11
 *
 * Dsuub Activity Monitors Event Type Registers 11
 * Provides information on the events that an architected activity monitor event counter AArch64-
 * AMEVCNTR11_EL0 counts.
 */
union cavm_dsuubx_amevtyper11
{
    uint32_t u;
    struct cavm_dsuubx_amevtyper11_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the auxiliary activity monitor event counter ext-
                                                                 AMEVCNTR1\<n\>.

                                                                 It is IMPLEMENTATION DEFINED what values are supported by each
                                                                 counter.

                                                                 If software writes a value to this field which is not supported by
                                                                 the corresponding counter ext-AMEVCNTR1\<n\>, then:

                                                                 *   It is UNPREDICTABLE which event will be counted.
                                                                 *   The value read back is UNKNOWN.
                                                                 Note:       The event counted by ext-
                                                                 AMEVCNTR1\<n\> might be fixed at
                                                                 implementation. In this case, the field is
                                                                 read-only and writes are UNDEFINED.
                                                                 If the corresponding counter ext-AMEVCNTR1\<n\> is
                                                                 enabled, writes to this register have UNPREDICTABLE
                                                                 results.

                                                                 This activity monitor counts event number 0x0301: Reserved */
#else /* Word 0 - Little Endian */
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the auxiliary activity monitor event counter ext-
                                                                 AMEVCNTR1\<n\>.

                                                                 It is IMPLEMENTATION DEFINED what values are supported by each
                                                                 counter.

                                                                 If software writes a value to this field which is not supported by
                                                                 the corresponding counter ext-AMEVCNTR1\<n\>, then:

                                                                 *   It is UNPREDICTABLE which event will be counted.
                                                                 *   The value read back is UNKNOWN.
                                                                 Note:       The event counted by ext-
                                                                 AMEVCNTR1\<n\> might be fixed at
                                                                 implementation. In this case, the field is
                                                                 read-only and writes are UNDEFINED.
                                                                 If the corresponding counter ext-AMEVCNTR1\<n\> is
                                                                 enabled, writes to this register have UNPREDICTABLE
                                                                 results.

                                                                 This activity monitor counts event number 0x0301: Reserved */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    struct cavm_dsuubx_amevtyper11_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t reserved_16_24        : 9;
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the auxiliary activity monitor event counter ext-
                                                                 AMEVCNTR1\<n\>.

                                                                 It is IMPLEMENTATION DEFINED what values are supported by each
                                                                 counter.

                                                                 If software writes a value to this field which is not supported by
                                                                 the corresponding counter ext-AMEVCNTR1\<n\>, then:

                                                                 *   It is UNPREDICTABLE which event will be counted.
                                                                 *   The value read back is UNKNOWN.
                                                                 Note:       The event counted by ext-
                                                                 AMEVCNTR1\<n\> might be fixed at
                                                                 implementation. In this case, the field is
                                                                 read-only and writes are UNDEFINED.
                                                                 If the corresponding counter ext-AMEVCNTR1\<n\> is
                                                                 enabled, writes to this register have UNPREDICTABLE
                                                                 results.

                                                                 This activity monitor counts event number 0x0301: Reserved */
#else /* Word 0 - Little Endian */
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the auxiliary activity monitor event counter ext-
                                                                 AMEVCNTR1\<n\>.

                                                                 It is IMPLEMENTATION DEFINED what values are supported by each
                                                                 counter.

                                                                 If software writes a value to this field which is not supported by
                                                                 the corresponding counter ext-AMEVCNTR1\<n\>, then:

                                                                 *   It is UNPREDICTABLE which event will be counted.
                                                                 *   The value read back is UNKNOWN.
                                                                 Note:       The event counted by ext-
                                                                 AMEVCNTR1\<n\> might be fixed at
                                                                 implementation. In this case, the field is
                                                                 read-only and writes are UNDEFINED.
                                                                 If the corresponding counter ext-AMEVCNTR1\<n\> is
                                                                 enabled, writes to this register have UNPREDICTABLE
                                                                 results.

                                                                 This activity monitor counts event number 0x0301: Reserved */
        uint32_t reserved_16_24        : 9;
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_dsuubx_amevtyper11 cavm_dsuubx_amevtyper11_t;

static inline uint64_t CAVM_DSUUBX_AMEVTYPER11(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMEVTYPER11(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090484ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090484ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090484ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090484ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMEVTYPER11", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMEVTYPER11(a) cavm_dsuubx_amevtyper11_t
#define bustype_CAVM_DSUUBX_AMEVTYPER11(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMEVTYPER11(a) "DSUUBX_AMEVTYPER11"
#define device_bar_CAVM_DSUUBX_AMEVTYPER11(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMEVTYPER11(a) (a)
#define arguments_CAVM_DSUUBX_AMEVTYPER11(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_amevtyper12
 *
 * Dsuub Activity Monitors Event Type Registers 12
 * Provides information on the events that an architected activity monitor event counter AArch64-
 * AMEVCNTR12_EL0 counts.
 */
union cavm_dsuubx_amevtyper12
{
    uint32_t u;
    struct cavm_dsuubx_amevtyper12_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the auxiliary activity monitor event counter ext-
                                                                 AMEVCNTR1\<n\>.

                                                                 It is IMPLEMENTATION DEFINED what values are supported by each
                                                                 counter.

                                                                 If software writes a value to this field which is not supported by
                                                                 the corresponding counter ext-AMEVCNTR1\<n\>, then:

                                                                 *   It is UNPREDICTABLE which event will be counted.
                                                                 *   The value read back is UNKNOWN.
                                                                 Note:       The event counted by ext-
                                                                 AMEVCNTR1\<n\> might be fixed at
                                                                 implementation. In this case, the field is
                                                                 read-only and writes are UNDEFINED.
                                                                 If the corresponding counter ext-AMEVCNTR1\<n\> is
                                                                 enabled, writes to this register have UNPREDICTABLE
                                                                 results.

                                                                 This activity monitor counts event number 0x0302: Reserved */
#else /* Word 0 - Little Endian */
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the auxiliary activity monitor event counter ext-
                                                                 AMEVCNTR1\<n\>.

                                                                 It is IMPLEMENTATION DEFINED what values are supported by each
                                                                 counter.

                                                                 If software writes a value to this field which is not supported by
                                                                 the corresponding counter ext-AMEVCNTR1\<n\>, then:

                                                                 *   It is UNPREDICTABLE which event will be counted.
                                                                 *   The value read back is UNKNOWN.
                                                                 Note:       The event counted by ext-
                                                                 AMEVCNTR1\<n\> might be fixed at
                                                                 implementation. In this case, the field is
                                                                 read-only and writes are UNDEFINED.
                                                                 If the corresponding counter ext-AMEVCNTR1\<n\> is
                                                                 enabled, writes to this register have UNPREDICTABLE
                                                                 results.

                                                                 This activity monitor counts event number 0x0302: Reserved */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    struct cavm_dsuubx_amevtyper12_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t reserved_16_24        : 9;
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the auxiliary activity monitor event counter ext-
                                                                 AMEVCNTR1\<n\>.

                                                                 It is IMPLEMENTATION DEFINED what values are supported by each
                                                                 counter.

                                                                 If software writes a value to this field which is not supported by
                                                                 the corresponding counter ext-AMEVCNTR1\<n\>, then:

                                                                 *   It is UNPREDICTABLE which event will be counted.
                                                                 *   The value read back is UNKNOWN.
                                                                 Note:       The event counted by ext-
                                                                 AMEVCNTR1\<n\> might be fixed at
                                                                 implementation. In this case, the field is
                                                                 read-only and writes are UNDEFINED.
                                                                 If the corresponding counter ext-AMEVCNTR1\<n\> is
                                                                 enabled, writes to this register have UNPREDICTABLE
                                                                 results.

                                                                 This activity monitor counts event number 0x0302: Reserved */
#else /* Word 0 - Little Endian */
        uint32_t evtcount              : 16; /**< [ 15:  0](RO) Event to count. The event number of the event that is
                                                                 counted by the auxiliary activity monitor event counter ext-
                                                                 AMEVCNTR1\<n\>.

                                                                 It is IMPLEMENTATION DEFINED what values are supported by each
                                                                 counter.

                                                                 If software writes a value to this field which is not supported by
                                                                 the corresponding counter ext-AMEVCNTR1\<n\>, then:

                                                                 *   It is UNPREDICTABLE which event will be counted.
                                                                 *   The value read back is UNKNOWN.
                                                                 Note:       The event counted by ext-
                                                                 AMEVCNTR1\<n\> might be fixed at
                                                                 implementation. In this case, the field is
                                                                 read-only and writes are UNDEFINED.
                                                                 If the corresponding counter ext-AMEVCNTR1\<n\> is
                                                                 enabled, writes to this register have UNPREDICTABLE
                                                                 results.

                                                                 This activity monitor counts event number 0x0302: Reserved */
        uint32_t reserved_16_24        : 9;
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_dsuubx_amevtyper12 cavm_dsuubx_amevtyper12_t;

static inline uint64_t CAVM_DSUUBX_AMEVTYPER12(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMEVTYPER12(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090488ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090488ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090488ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090488ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMEVTYPER12", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMEVTYPER12(a) cavm_dsuubx_amevtyper12_t
#define bustype_CAVM_DSUUBX_AMEVTYPER12(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMEVTYPER12(a) "DSUUBX_AMEVTYPER12"
#define device_bar_CAVM_DSUUBX_AMEVTYPER12(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMEVTYPER12(a) (a)
#define arguments_CAVM_DSUUBX_AMEVTYPER12(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_amiidr
 *
 * Dsuub Activity Monitors Implementation Identification Register
 * Defines the implementer and revisions of the AMU.
 */
union cavm_dsuubx_amiidr
{
    uint32_t u;
    struct cavm_dsuubx_amiidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t productid             : 12; /**< [ 31: 20](RO) This field is an AMU part identifier.

                                                                 0b110101001001 =
                                                                 AMU Part Identifier */
        uint32_t variant               : 4;  /**< [ 19: 16](RO) This field distinguishes product variants or major revisions of
                                                                 the product.

                                                                 0b0000 =
                                                                 r0p0 */
        uint32_t revision              : 4;  /**< [ 15: 12](RO) This field distinguishes minor revisions of the product.

                                                                 0b0000 =
                                                                 r0p0 */
        uint32_t implementer           : 12; /**< [ 11:  0](RO) Contains the JEP106 code of the company that implemented
                                                                 the AMU.

                                                                 For an Arm implementation, this field reads as 0x43B. */
#else /* Word 0 - Little Endian */
        uint32_t implementer           : 12; /**< [ 11:  0](RO) Contains the JEP106 code of the company that implemented
                                                                 the AMU.

                                                                 For an Arm implementation, this field reads as 0x43B. */
        uint32_t revision              : 4;  /**< [ 15: 12](RO) This field distinguishes minor revisions of the product.

                                                                 0b0000 =
                                                                 r0p0 */
        uint32_t variant               : 4;  /**< [ 19: 16](RO) This field distinguishes product variants or major revisions of
                                                                 the product.

                                                                 0b0000 =
                                                                 r0p0 */
        uint32_t productid             : 12; /**< [ 31: 20](RO) This field is an AMU part identifier.

                                                                 0b110101001001 =
                                                                 AMU Part Identifier */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_amiidr_s cn; */
};
typedef union cavm_dsuubx_amiidr cavm_dsuubx_amiidr_t;

static inline uint64_t CAVM_DSUUBX_AMIIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMIIDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090e08ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090e08ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090e08ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090e08ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMIIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMIIDR(a) cavm_dsuubx_amiidr_t
#define bustype_CAVM_DSUUBX_AMIIDR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMIIDR(a) "DSUUBX_AMIIDR"
#define device_bar_CAVM_DSUUBX_AMIIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMIIDR(a) (a)
#define arguments_CAVM_DSUUBX_AMIIDR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_ampidr0
 *
 * Dsuub Activity Monitors Peripheral Identification Register 0
 * Provides information to identify an activity monitors component.
 *
 * For more information, see 'About the Peripheral identification scheme'.
 */
union cavm_dsuubx_ampidr0
{
    uint32_t u;
    struct cavm_dsuubx_ampidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number, least significant byte.

                                                                 The value of this field is IMPLEMENTATION DEFINED.

                                                                 0b01001001 =
                                                                 Part number, least significant byte. */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number, least significant byte.

                                                                 The value of this field is IMPLEMENTATION DEFINED.

                                                                 0b01001001 =
                                                                 Part number, least significant byte. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_ampidr0_s cn; */
};
typedef union cavm_dsuubx_ampidr0 cavm_dsuubx_ampidr0_t;

static inline uint64_t CAVM_DSUUBX_AMPIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMPIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090fe0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090fe0ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090fe0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090fe0ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMPIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMPIDR0(a) cavm_dsuubx_ampidr0_t
#define bustype_CAVM_DSUUBX_AMPIDR0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMPIDR0(a) "DSUUBX_AMPIDR0"
#define device_bar_CAVM_DSUUBX_AMPIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMPIDR0(a) (a)
#define arguments_CAVM_DSUUBX_AMPIDR0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_ampidr1
 *
 * Dsuub Activity Monitors Peripheral Identification Register 1
 * Provides information to identify an activity monitors component.
 *
 * For more information, see 'About the Peripheral identification scheme'.
 */
union cavm_dsuubx_ampidr1
{
    uint32_t u;
    struct cavm_dsuubx_ampidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t des_0                 : 4;  /**< [  7:  4](RO) Designer, least significant nibble of JEP106 ID code.

                                                                 The value of this field is IMPLEMENTATION DEFINED. For Arm Limited,
                                                                 this field is 0b1011.

                                                                 0b1011 =
                                                                 Designer, least significant nibble of JEP106 ID code. */
        uint32_t part_1                : 4;  /**< [  3:  0](RO) Part number, most significant nibble.

                                                                 The value of this field is IMPLEMENTATION DEFINED.

                                                                 0b1101 =
                                                                 Part number, most significant nibble. */
#else /* Word 0 - Little Endian */
        uint32_t part_1                : 4;  /**< [  3:  0](RO) Part number, most significant nibble.

                                                                 The value of this field is IMPLEMENTATION DEFINED.

                                                                 0b1101 =
                                                                 Part number, most significant nibble. */
        uint32_t des_0                 : 4;  /**< [  7:  4](RO) Designer, least significant nibble of JEP106 ID code.

                                                                 The value of this field is IMPLEMENTATION DEFINED. For Arm Limited,
                                                                 this field is 0b1011.

                                                                 0b1011 =
                                                                 Designer, least significant nibble of JEP106 ID code. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_ampidr1_s cn; */
};
typedef union cavm_dsuubx_ampidr1 cavm_dsuubx_ampidr1_t;

static inline uint64_t CAVM_DSUUBX_AMPIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMPIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090fe4ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090fe4ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090fe4ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090fe4ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMPIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMPIDR1(a) cavm_dsuubx_ampidr1_t
#define bustype_CAVM_DSUUBX_AMPIDR1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMPIDR1(a) "DSUUBX_AMPIDR1"
#define device_bar_CAVM_DSUUBX_AMPIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMPIDR1(a) (a)
#define arguments_CAVM_DSUUBX_AMPIDR1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_ampidr2
 *
 * Dsuub Activity Monitors Peripheral Identification Register 2
 * Provides information to identify an activity monitors component.
 *
 * For more information, see 'About the Peripheral identification scheme'.
 */
union cavm_dsuubx_ampidr2
{
    uint32_t u;
    struct cavm_dsuubx_ampidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revision              : 4;  /**< [  7:  4](RO) Part major revision. Parts can also use this field to extend Part
                                                                 number to 16-bits.

                                                                 The value of this field is IMPLEMENTATION DEFINED.

                                                                 0b0000 =
                                                                 r0p0 */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) RAO. Indicates a JEP106 identity code is used.

                                                                 0b1 =
                                                                 RAO. Indicates a JEP106 identity code is used. */
        uint32_t des_1                 : 3;  /**< [  2:  0](RO) Designer, most significant bits of JEP106 ID code.

                                                                 The value of this field is IMPLEMENTATION DEFINED. For Arm
                                                                 Limited, this field is 0b011.

                                                                 0b011 =
                                                                 Arm Limited. This is bits[6:4] of the JEP106 ID code. */
#else /* Word 0 - Little Endian */
        uint32_t des_1                 : 3;  /**< [  2:  0](RO) Designer, most significant bits of JEP106 ID code.

                                                                 The value of this field is IMPLEMENTATION DEFINED. For Arm
                                                                 Limited, this field is 0b011.

                                                                 0b011 =
                                                                 Arm Limited. This is bits[6:4] of the JEP106 ID code. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) RAO. Indicates a JEP106 identity code is used.

                                                                 0b1 =
                                                                 RAO. Indicates a JEP106 identity code is used. */
        uint32_t revision              : 4;  /**< [  7:  4](RO) Part major revision. Parts can also use this field to extend Part
                                                                 number to 16-bits.

                                                                 The value of this field is IMPLEMENTATION DEFINED.

                                                                 0b0000 =
                                                                 r0p0 */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_ampidr2_s cn; */
};
typedef union cavm_dsuubx_ampidr2 cavm_dsuubx_ampidr2_t;

static inline uint64_t CAVM_DSUUBX_AMPIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMPIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090fe8ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090fe8ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090fe8ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090fe8ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMPIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMPIDR2(a) cavm_dsuubx_ampidr2_t
#define bustype_CAVM_DSUUBX_AMPIDR2(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMPIDR2(a) "DSUUBX_AMPIDR2"
#define device_bar_CAVM_DSUUBX_AMPIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMPIDR2(a) (a)
#define arguments_CAVM_DSUUBX_AMPIDR2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_ampidr3
 *
 * Dsuub Activity Monitors Peripheral Identification Register 3
 * Provides information to identify an activity monitors component.
 *
 * For more information, see 'About the Peripheral identification scheme'.
 */
union cavm_dsuubx_ampidr3
{
    uint32_t u;
    struct cavm_dsuubx_ampidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revand                : 4;  /**< [  7:  4](RO) Part minor revision. Parts using ext-AMPIDR2.REVISION as an
                                                                 extension to the Part number must use this field as a major revision
                                                                 number.

                                                                 The value of this field is IMPLEMENTATION DEFINED.

                                                                 0b0000 =
                                                                 No ECO fixes */
        uint32_t cmod                  : 4;  /**< [  3:  0](RO) Customer modified. Indicates someone other than the Designer
                                                                 has modified the component.

                                                                 The value of this field is IMPLEMENTATION DEFINED.

                                                                 0b0000 =
                                                                 The component is not modified from the original design. */
#else /* Word 0 - Little Endian */
        uint32_t cmod                  : 4;  /**< [  3:  0](RO) Customer modified. Indicates someone other than the Designer
                                                                 has modified the component.

                                                                 The value of this field is IMPLEMENTATION DEFINED.

                                                                 0b0000 =
                                                                 The component is not modified from the original design. */
        uint32_t revand                : 4;  /**< [  7:  4](RO) Part minor revision. Parts using ext-AMPIDR2.REVISION as an
                                                                 extension to the Part number must use this field as a major revision
                                                                 number.

                                                                 The value of this field is IMPLEMENTATION DEFINED.

                                                                 0b0000 =
                                                                 No ECO fixes */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_ampidr3_s cn; */
};
typedef union cavm_dsuubx_ampidr3 cavm_dsuubx_ampidr3_t;

static inline uint64_t CAVM_DSUUBX_AMPIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMPIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090fecll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090fecll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090fecll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090fecll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMPIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMPIDR3(a) cavm_dsuubx_ampidr3_t
#define bustype_CAVM_DSUUBX_AMPIDR3(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMPIDR3(a) "DSUUBX_AMPIDR3"
#define device_bar_CAVM_DSUUBX_AMPIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMPIDR3(a) (a)
#define arguments_CAVM_DSUUBX_AMPIDR3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_ampidr4
 *
 * Dsuub Activity Monitors Peripheral Identification Register 4
 * Provides information to identify an activity monitors component.
 *
 * For more information, see 'About the Peripheral identification scheme'.
 */
union cavm_dsuubx_ampidr4
{
    uint32_t u;
    struct cavm_dsuubx_ampidr4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t size                  : 4;  /**< [  7:  4](RO) 4KB count.

                                                                 0b0000 =
                                                                 The component uses a single 4KB block. */
        uint32_t des_2                 : 4;  /**< [  3:  0](RO) Designer. JEP106 continuation code, least significant nibble.

                                                                 The value of this field is IMPLEMENTATION DEFINED. For Arm Limited, this
                                                                 field is 0b0100.

                                                                 0b0100 =
                                                                 Arm Limited. This is bits[3:0] of the JEP106 continuation code. */
#else /* Word 0 - Little Endian */
        uint32_t des_2                 : 4;  /**< [  3:  0](RO) Designer. JEP106 continuation code, least significant nibble.

                                                                 The value of this field is IMPLEMENTATION DEFINED. For Arm Limited, this
                                                                 field is 0b0100.

                                                                 0b0100 =
                                                                 Arm Limited. This is bits[3:0] of the JEP106 continuation code. */
        uint32_t size                  : 4;  /**< [  7:  4](RO) 4KB count.

                                                                 0b0000 =
                                                                 The component uses a single 4KB block. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_ampidr4_s cn; */
};
typedef union cavm_dsuubx_ampidr4 cavm_dsuubx_ampidr4_t;

static inline uint64_t CAVM_DSUUBX_AMPIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_AMPIDR4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200090fd0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200090fd0ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200090fd0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200090fd0ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_AMPIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_AMPIDR4(a) cavm_dsuubx_ampidr4_t
#define bustype_CAVM_DSUUBX_AMPIDR4(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_AMPIDR4(a) "DSUUBX_AMPIDR4"
#define device_bar_CAVM_DSUUBX_AMPIDR4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_AMPIDR4(a) (a)
#define arguments_CAVM_DSUUBX_AMPIDR4(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_aidr
 *
 * DSUUB Cluster Architecture Identification Register
 * This register identifies the PPU architecture revision.
 */
union cavm_dsuubx_cluster_ppu_aidr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_aidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t arch_rev_major        : 4;  /**< [  7:  4](SRO) PPU architecture major revision.

                                                                 0b0001 = PPU architecture major revision 1. */
        uint32_t arch_rev_minor        : 4;  /**< [  3:  0](SRO) PPU architecture minor revision.

                                                                 0b0001 = PPU architecture minor revision 1. */
#else /* Word 0 - Little Endian */
        uint32_t arch_rev_minor        : 4;  /**< [  3:  0](SRO) PPU architecture minor revision.

                                                                 0b0001 = PPU architecture minor revision 1. */
        uint32_t arch_rev_major        : 4;  /**< [  7:  4](SRO) PPU architecture major revision.

                                                                 0b0001 = PPU architecture major revision 1. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_aidr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_aidr cavm_dsuubx_cluster_ppu_aidr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_AIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_AIDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030fccll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030fccll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030fccll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030fccll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_AIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_AIDR(a) cavm_dsuubx_cluster_ppu_aidr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_AIDR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_AIDR(a) "DSUUBX_CLUSTER_PPU_AIDR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_AIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_AIDR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_AIDR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_aimr
 *
 * DSUUB Cluster Additional Interrupt Mask Register
 * This register controls the events that assert the interrupt output. Additional event
 * masking controls
 * are in the Interrupt Mask Register (DSUUB_PPU_IMR), Input Edge Sensitivity Register
 * (DSUUB_PPU_IESR),
 * and the Operating Mode Active Edge Sensitivity Register (DSUUB_PPU_OPSR).
 *
 * When an interrupt event is masked an occurrence of the event does not set the corresponding bit
 * in the interrupt status register.
 */
union cavm_dsuubx_cluster_ppu_aimr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_aimr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_5_31         : 27;
        uint32_t sta_policy_op_irq_mask : 1; /**< [  4:  4](SR/W) Static operating policy transition completion
                                                                 event mask

                                                                 0 = Static operating policy transition
                                                                 completion event enabled.

                                                                 1 = Static operating policy transition
                                                                 completion event masked. */
        uint32_t sta_policy_pwr_irq_mask : 1;/**< [  3:  3](SR/W) Static power policy transition completion event
                                                                 mask

                                                                 0 = Static power policy transition completion
                                                                 event enabled.

                                                                 1 = Static power policy transition completion
                                                                 event masked. */
        uint32_t dyn_deny_irq_mask     : 1;  /**< [  2:  2](SR/W) Dynamic transition denial event mask

                                                                 0 = Dynamic transition denial event enabled.

                                                                 1 = Dynamic transition denial event masked. */
        uint32_t dyn_accept_irq_mask   : 1;  /**< [  1:  1](SR/W) Dynamic transition acceptance event mask

                                                                 0 = Dynamic transition acceptance event
                                                                 enabled.

                                                                 1 = Dynamic transition acceptance event
                                                                 masked. */
        uint32_t unspt_policy_irq_mask : 1;  /**< [  0:  0](SR/W) Unsupported policy event mask

                                                                 0 = Unsupported policy event enabled.

                                                                 1 = Unsupported policy event masked. */
#else /* Word 0 - Little Endian */
        uint32_t unspt_policy_irq_mask : 1;  /**< [  0:  0](SR/W) Unsupported policy event mask

                                                                 0 = Unsupported policy event enabled.

                                                                 1 = Unsupported policy event masked. */
        uint32_t dyn_accept_irq_mask   : 1;  /**< [  1:  1](SR/W) Dynamic transition acceptance event mask

                                                                 0 = Dynamic transition acceptance event
                                                                 enabled.

                                                                 1 = Dynamic transition acceptance event
                                                                 masked. */
        uint32_t dyn_deny_irq_mask     : 1;  /**< [  2:  2](SR/W) Dynamic transition denial event mask

                                                                 0 = Dynamic transition denial event enabled.

                                                                 1 = Dynamic transition denial event masked. */
        uint32_t sta_policy_pwr_irq_mask : 1;/**< [  3:  3](SR/W) Static power policy transition completion event
                                                                 mask

                                                                 0 = Static power policy transition completion
                                                                 event enabled.

                                                                 1 = Static power policy transition completion
                                                                 event masked. */
        uint32_t sta_policy_op_irq_mask : 1; /**< [  4:  4](SR/W) Static operating policy transition completion
                                                                 event mask

                                                                 0 = Static operating policy transition
                                                                 completion event enabled.

                                                                 1 = Static operating policy transition
                                                                 completion event masked. */
        uint32_t reserved_5_31         : 27;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_aimr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_aimr cavm_dsuubx_cluster_ppu_aimr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_AIMR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_AIMR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030034ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030034ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030034ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030034ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_AIMR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_AIMR(a) cavm_dsuubx_cluster_ppu_aimr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_AIMR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_AIMR(a) "DSUUBX_CLUSTER_PPU_AIMR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_AIMR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_AIMR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_AIMR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_aisr
 *
 * DSUUB Cluster Additional Interrupt Status Register
 * This register contains information about events causing the assertion of the
 * interrupt output. It is
 * also used to clear interrupt events.
 *
 * A bit set to 1 indicates the event asserted the interrupt output. Multiple events
 * can be active at
 * the same time. When an interrupt event is masked an occurrence of that event does not set the
 * status bit.
 * A write of 1 to an event bit clears that event. A write of 0 has no effect. The
 * interrupt output
 * stays HIGH until all status bits in the Interrupt Status Register (DSUUB_PPU_ISR)
 * and the Additional
 * Interrupt Status Register (PPU_AISR) are set to 0b0.
 *
 * When an interrupt status is set to 1 in this register it sets the OTHER_IRQ bit in the Interrupt
 * Status Register (DSUUB_PPU_ISR). Status bits in this register are only cleared by
 * writing to this register.
 */
union cavm_dsuubx_cluster_ppu_aisr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_aisr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_5_31         : 27;
        uint32_t sta_policy_op_irq     : 1;  /**< [  4:  4](SR/W1C/H) Static operating policy transition completion event
                                                                 status

                                                                 0 = No static operating policy transition
                                                                 completion event.

                                                                 1 = A static operating policy transition
                                                                 completion event asserted the interrupt
                                                                 output. */
        uint32_t sta_policy_pwr_irq    : 1;  /**< [  3:  3](SR/W1C/H) Static power policy transition completion event
                                                                 status

                                                                 0 = No static power policy transition
                                                                 completion event.

                                                                 1 = A static power policy transition completion
                                                                 event asserted the interrupt output. */
        uint32_t dyn_deny_irq          : 1;  /**< [  2:  2](SR/W1C/H) Dynamic transition denial event status

                                                                 0 = No dynamic transition denial event.

                                                                 1 = A dynamic transition denial event asserted
                                                                 the interrupt output. */
        uint32_t dyn_accept_irq        : 1;  /**< [  1:  1](SR/W1C/H) Dynamic transition acceptance event status

                                                                 0 = No dynamic transition acceptance event.

                                                                 1 = A dynamic transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t unspt_policy_irq      : 1;  /**< [  0:  0](SR/W1C/H) Unsupported policy event status

                                                                 0 = No unsupported policy event.

                                                                 1 = An unsupported policy event asserted the
                                                                 interrupt output. */
#else /* Word 0 - Little Endian */
        uint32_t unspt_policy_irq      : 1;  /**< [  0:  0](SR/W1C/H) Unsupported policy event status

                                                                 0 = No unsupported policy event.

                                                                 1 = An unsupported policy event asserted the
                                                                 interrupt output. */
        uint32_t dyn_accept_irq        : 1;  /**< [  1:  1](SR/W1C/H) Dynamic transition acceptance event status

                                                                 0 = No dynamic transition acceptance event.

                                                                 1 = A dynamic transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t dyn_deny_irq          : 1;  /**< [  2:  2](SR/W1C/H) Dynamic transition denial event status

                                                                 0 = No dynamic transition denial event.

                                                                 1 = A dynamic transition denial event asserted
                                                                 the interrupt output. */
        uint32_t sta_policy_pwr_irq    : 1;  /**< [  3:  3](SR/W1C/H) Static power policy transition completion event
                                                                 status

                                                                 0 = No static power policy transition
                                                                 completion event.

                                                                 1 = A static power policy transition completion
                                                                 event asserted the interrupt output. */
        uint32_t sta_policy_op_irq     : 1;  /**< [  4:  4](SR/W1C/H) Static operating policy transition completion event
                                                                 status

                                                                 0 = No static operating policy transition
                                                                 completion event.

                                                                 1 = A static operating policy transition
                                                                 completion event asserted the interrupt
                                                                 output. */
        uint32_t reserved_5_31         : 27;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_aisr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_aisr cavm_dsuubx_cluster_ppu_aisr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_AISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_AISR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e20003003cll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e20003003cll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e20003003cll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e20003003cll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_AISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_AISR(a) cavm_dsuubx_cluster_ppu_aisr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_AISR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_AISR(a) "DSUUBX_CLUSTER_PPU_AISR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_AISR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_AISR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_AISR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_cidr0
 *
 * DSUUB Cluster PPU Component Identification Register 0
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_cluster_ppu_cidr0
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_cidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](SRO) CoreSight component identification preamble.

                                                                 0b00001101 = CoreSight component identification preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](SRO) CoreSight component identification preamble.

                                                                 0b00001101 = CoreSight component identification preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_cidr0_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_cidr0 cavm_dsuubx_cluster_ppu_cidr0_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_CIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_CIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030ff0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030ff0ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030ff0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030ff0ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_CIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_CIDR0(a) cavm_dsuubx_cluster_ppu_cidr0_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_CIDR0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_CIDR0(a) "DSUUBX_CLUSTER_PPU_CIDR0"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_CIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_CIDR0(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_CIDR0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_cidr1
 *
 * DSUUB Cluster PPU Component Identification Register 1
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_cluster_ppu_cidr1
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_cidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t clas                  : 4;  /**< [  7:  4](SRO) CoreSight component class.

                                                                 0b1111 = CoreLink component. */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](SRO) CoreSight component identification preamble.

                                                                 0b0000 = CoreSight component identification preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](SRO) CoreSight component identification preamble.

                                                                 0b0000 = CoreSight component identification preamble. */
        uint32_t clas                  : 4;  /**< [  7:  4](SRO) CoreSight component class.

                                                                 0b1111 = CoreLink component. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_cidr1_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_cidr1 cavm_dsuubx_cluster_ppu_cidr1_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_CIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_CIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030ff4ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030ff4ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030ff4ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030ff4ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_CIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_CIDR1(a) cavm_dsuubx_cluster_ppu_cidr1_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_CIDR1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_CIDR1(a) "DSUUBX_CLUSTER_PPU_CIDR1"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_CIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_CIDR1(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_CIDR1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_cidr2
 *
 * DSUUB Cluster PPU Component Identification Register 2
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_cluster_ppu_cidr2
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_cidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](SRO) CoreSight component identification preamble.

                                                                 0b00000101 = CoreSight component identification preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](SRO) CoreSight component identification preamble.

                                                                 0b00000101 = CoreSight component identification preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_cidr2_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_cidr2 cavm_dsuubx_cluster_ppu_cidr2_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_CIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_CIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030ff8ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030ff8ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030ff8ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030ff8ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_CIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_CIDR2(a) cavm_dsuubx_cluster_ppu_cidr2_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_CIDR2(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_CIDR2(a) "DSUUBX_CLUSTER_PPU_CIDR2"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_CIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_CIDR2(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_CIDR2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_dcdr0
 *
 * DSUUB Cluster Device Control Delay Configuration Register 0
 * This register is used to program device control delay parameters.
 */
union cavm_dsuubx_cluster_ppu_dcdr0
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_dcdr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t rst_hwstat_dly        : 8;  /**< [ 23: 16](SR/W) Delay from reset de-assertion to HWSTAT update. */
        uint32_t iso_clken_dly         : 8;  /**< [ 15:  8](SR/W) Delay from isolation enable de-assertion to clock
                                                                 enable assertion. */
        uint32_t clken_rst_dly         : 8;  /**< [  7:  0](SR/W) Delay from clock enable assertion to reset de-
                                                                 assertion. */
#else /* Word 0 - Little Endian */
        uint32_t clken_rst_dly         : 8;  /**< [  7:  0](SR/W) Delay from clock enable assertion to reset de-
                                                                 assertion. */
        uint32_t iso_clken_dly         : 8;  /**< [ 15:  8](SR/W) Delay from isolation enable de-assertion to clock
                                                                 enable assertion. */
        uint32_t rst_hwstat_dly        : 8;  /**< [ 23: 16](SR/W) Delay from reset de-assertion to HWSTAT update. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_dcdr0_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_dcdr0 cavm_dsuubx_cluster_ppu_dcdr0_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_DCDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_DCDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030170ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030170ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030170ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030170ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_DCDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_DCDR0(a) cavm_dsuubx_cluster_ppu_dcdr0_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_DCDR0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_DCDR0(a) "DSUUBX_CLUSTER_PPU_DCDR0"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_DCDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_DCDR0(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_DCDR0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_dcdr1
 *
 * DSUUB Cluster Device Control Delay Configuration Register 1
 * This register is used to program device control delay parameters.
 */
union cavm_dsuubx_cluster_ppu_dcdr1
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_dcdr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t clken_iso_dly         : 8;  /**< [ 15:  8](SR/W) Delay from clock enable de-assertion to isolation enable
                                                                 assertion. */
        uint32_t iso_rst_dly           : 8;  /**< [  7:  0](SR/W) Delay from isolation enable assertion to reset assertion. */
#else /* Word 0 - Little Endian */
        uint32_t iso_rst_dly           : 8;  /**< [  7:  0](SR/W) Delay from isolation enable assertion to reset assertion. */
        uint32_t clken_iso_dly         : 8;  /**< [ 15:  8](SR/W) Delay from clock enable de-assertion to isolation enable
                                                                 assertion. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_dcdr1_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_dcdr1 cavm_dsuubx_cluster_ppu_dcdr1_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_DCDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_DCDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030174ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030174ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030174ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030174ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_DCDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_DCDR1(a) cavm_dsuubx_cluster_ppu_dcdr1_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_DCDR1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_DCDR1(a) "DSUUBX_CLUSTER_PPU_DCDR1"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_DCDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_DCDR1(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_DCDR1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_disr
 *
 * DSUUB Cluster Device Interface Input Current Status Register
 * This read-only register contains status reflecting the values of the device interface inputs.
 */
union cavm_dsuubx_cluster_ppu_disr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_disr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t op_devactive_status   : 3;  /**< [ 26: 24](SRO/H) Status of the operating mode DEVPACTIVE
                                                                 inputs.

                                                                 0b000 = Request for OPMODE_00, ONE_SLICE_
                                                                 SF_ONLY_ON.

                                                                 0b001 = Request for OPMODE_01, ONE_SLICE_
                                                                 HALF_RAM_ON.

                                                                 0b100 = Request for OPMODE_04, ALL_SLICE_
                                                                 SF_ONLY_ON.

                                                                 0b101 = Request for OPMODE_05, ALL_SLICE_
                                                                 HALF_RAM_ON.

                                                                 0b01x = Request for OPMODE_03, ONE_SLICE_
                                                                 FULL_RAM_ON.

                                                                 0b11x = Request for OPMODE_07, ALL_SLICE_
                                                                 FULL_RAM_ON. */
        uint32_t reserved_11_23        : 13;
        uint32_t pwr_devactive_status  : 11; /**< [ 10:  0](SRO/H) Status of the power mode DEVPACTIVE inputs.

                                                                 0b00000000000 = Request for OFF.

                                                                 0b0000000001x = Request for OFF_EMU.

                                                                 0b000000001xx = Request for MEM_RET.

                                                                 0b00000001xxx = Request for MEM_RET_EMU.

                                                                 0b0001xxxxxxx = Request for FUNC_RET.

                                                                 0b001xxxxxxxx = Request for ON.

                                                                 0b01xxxxxxxxx = Request for WARM_RST.

                                                                 0b1xxxxxxxxxx = Request for DBG_RECOV. */
#else /* Word 0 - Little Endian */
        uint32_t pwr_devactive_status  : 11; /**< [ 10:  0](SRO/H) Status of the power mode DEVPACTIVE inputs.

                                                                 0b00000000000 = Request for OFF.

                                                                 0b0000000001x = Request for OFF_EMU.

                                                                 0b000000001xx = Request for MEM_RET.

                                                                 0b00000001xxx = Request for MEM_RET_EMU.

                                                                 0b0001xxxxxxx = Request for FUNC_RET.

                                                                 0b001xxxxxxxx = Request for ON.

                                                                 0b01xxxxxxxxx = Request for WARM_RST.

                                                                 0b1xxxxxxxxxx = Request for DBG_RECOV. */
        uint32_t reserved_11_23        : 13;
        uint32_t op_devactive_status   : 3;  /**< [ 26: 24](SRO/H) Status of the operating mode DEVPACTIVE
                                                                 inputs.

                                                                 0b000 = Request for OPMODE_00, ONE_SLICE_
                                                                 SF_ONLY_ON.

                                                                 0b001 = Request for OPMODE_01, ONE_SLICE_
                                                                 HALF_RAM_ON.

                                                                 0b100 = Request for OPMODE_04, ALL_SLICE_
                                                                 SF_ONLY_ON.

                                                                 0b101 = Request for OPMODE_05, ALL_SLICE_
                                                                 HALF_RAM_ON.

                                                                 0b01x = Request for OPMODE_03, ONE_SLICE_
                                                                 FULL_RAM_ON.

                                                                 0b11x = Request for OPMODE_07, ALL_SLICE_
                                                                 FULL_RAM_ON. */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_disr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_disr cavm_dsuubx_cluster_ppu_disr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_DISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_DISR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030010ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030010ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030010ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030010ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_DISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_DISR(a) cavm_dsuubx_cluster_ppu_disr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_DISR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_DISR(a) "DSUUBX_CLUSTER_PPU_DISR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_DISR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_DISR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_DISR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_fulrr
 *
 * DSUUB Cluster Full Retention RAM Configuration Register
 * This register controls bits [15:8] of the PCSMPSTATE output when in FULL_RET mode. These
 * outputs are used by the PCSM to configure the logic regions and RAMs that are retained.
 */
union cavm_dsuubx_cluster_ppu_fulrr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_fulrr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t full_ret_ram_cfg      : 8;  /**< [  7:  0](SR/W) FULL_RET RAM configuration bits. */
#else /* Word 0 - Little Endian */
        uint32_t full_ret_ram_cfg      : 8;  /**< [  7:  0](SR/W) FULL_RET RAM configuration bits. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_fulrr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_fulrr cavm_dsuubx_cluster_ppu_fulrr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_FULRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_FULRR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030054ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030054ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030054ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030054ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_FULRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_FULRR(a) cavm_dsuubx_cluster_ppu_fulrr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_FULRR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_FULRR(a) "DSUUBX_CLUSTER_PPU_FULRR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_FULRR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_FULRR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_FULRR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_funrr
 *
 * DSUUB Cluster Functional Retention RAM Configuration Register
 * This register is reserved.
 */
union cavm_dsuubx_cluster_ppu_funrr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_funrr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t func_ret_ram_cfg      : 8;  /**< [  7:  0](SR/W) FUNC_RET RAM configuration bits. If FUNC_RET
                                                                 is not supported, or FUNC_RET_RAM_REG_CFG is
                                                                 set to 0b0, this field is reserved.

                                                                 0b00000000 = Reserved */
#else /* Word 0 - Little Endian */
        uint32_t func_ret_ram_cfg      : 8;  /**< [  7:  0](SR/W) FUNC_RET RAM configuration bits. If FUNC_RET
                                                                 is not supported, or FUNC_RET_RAM_REG_CFG is
                                                                 set to 0b0, this field is reserved.

                                                                 0b00000000 = Reserved */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_funrr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_funrr cavm_dsuubx_cluster_ppu_funrr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_FUNRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_FUNRR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030050ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030050ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030050ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030050ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_FUNRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_FUNRR(a) cavm_dsuubx_cluster_ppu_funrr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_FUNRR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_FUNRR(a) "DSUUBX_CLUSTER_PPU_FUNRR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_FUNRR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_FUNRR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_FUNRR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_idr0
 *
 * DSUUB Cluster PPU Identification Register 0
 * This read-only register contains information on the type and number of channels on the device
 * interface and power and operating modes supported.
 *
 * Additional information on optional features can be found in the PPU Identification
 * Register 1 (DSUUB_
 * PPU_IDR1).
 */
union cavm_dsuubx_cluster_ppu_idr0
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_idr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t dyn_wrm_rst_spt       : 1;  /**< [ 29: 29](SRO) Dynamic WARM_RST support.

                                                                 1 = Dynamic WARM_RST supported. */
        uint32_t dyn_on_spt            : 1;  /**< [ 28: 28](SRO) Dynamic ON support.

                                                                 1 = Dynamic ON supported. */
        uint32_t dyn_func_ret_spt      : 1;  /**< [ 27: 27](SRO) Dynamic DYN_FUNC_RET_SPT support.

                                                                 1 = Dynamic DYN_FUNC_RET_SPT
                                                                 supported. */
        uint32_t dyn_full_ret_spt      : 1;  /**< [ 26: 26](SRO) Dynamic DYN_FULL_RET_SPT support.

                                                                 0 = Dynamic DYN_FULL_RET_SPT not
                                                                 supported. */
        uint32_t dyn_mem_off_spt       : 1;  /**< [ 25: 25](SRO) Dynamic MEM_OFF support.

                                                                 0 = Dynamic MEM_OFF not supported. */
        uint32_t dyn_lgc_ret_spt       : 1;  /**< [ 24: 24](SRO) Dynamic LOGIC_RET support.

                                                                 0 = Dynamic LOGIC_RET not supported. */
        uint32_t dyn_mem_ret_emu_spt   : 1;  /**< [ 23: 23](SRO) Dynamic DYN_MEM_RET_EMU_SPT support.

                                                                 1 = Dynamic DYN_MEM_RET_EMU_SPT
                                                                 supported. */
        uint32_t dyn_mem_ret_spt       : 1;  /**< [ 22: 22](SRO) Dynamic DYN_MEM_RET_SPT support.

                                                                 1 = Dynamic DYN_MEM_RET_SPT
                                                                 supported. */
        uint32_t dyn_off_emu_spt       : 1;  /**< [ 21: 21](SRO) Dynamic OFF_EMU support.

                                                                 1 = Dynamic OFF_EMU supported. */
        uint32_t dyn_off_spt           : 1;  /**< [ 20: 20](SRO) Dynamic OFF support.

                                                                 1 = Dynamic OFF supported. */
        uint32_t reserved_19           : 1;
        uint32_t sta_dbg_recov_spt     : 1;  /**< [ 18: 18](SRO) DBG_RECOV support.

                                                                 1 = DBG_RECOV supported. */
        uint32_t sta_wrm_rst_spt       : 1;  /**< [ 17: 17](SRO) WARM_RST support.

                                                                 1 = WRM_RST supported. */
        uint32_t sta_on_spt            : 1;  /**< [ 16: 16](SRO) ON support.

                                                                 1 = ON supported. */
        uint32_t sta_func_ret_spt      : 1;  /**< [ 15: 15](SRO) FUNC_RET support.

                                                                 1 = FUNC_RET supported. */
        uint32_t sta_full_ret_spt      : 1;  /**< [ 14: 14](SRO) FULL_RET support.

                                                                 0 = FULL_RET not supported. */
        uint32_t sta_mem_off_spt       : 1;  /**< [ 13: 13](SRO) MEM_OFF support.

                                                                 0 = MEM_OFF not supported. */
        uint32_t sta_lgc_ret_spt       : 1;  /**< [ 12: 12](SRO) LOGIC_RET support.

                                                                 0 = LOGIC_RET not supported. */
        uint32_t sta_mem_ret_emu_spt   : 1;  /**< [ 11: 11](SRO) MEM_RET_EMU support.

                                                                 1 = MEM_RET_EMU supported. */
        uint32_t sta_mem_ret_spt       : 1;  /**< [ 10: 10](SRO) MEM_RET support.

                                                                 1 = MEM_RET supported. */
        uint32_t sta_off_emu_spt       : 1;  /**< [  9:  9](SRO) OFF_EMU support.

                                                                 1 = OFF_EMU supported. */
        uint32_t sta_off_spt           : 1;  /**< [  8:  8](SRO) OFF support.

                                                                 1 = OFF supported. */
        uint32_t num_opmode            : 4;  /**< [  7:  4](SRO) No. of operating modes supported, minus 1.

                                                                 0b0101 = 6 operating modes supported. */
        uint32_t devchan               : 4;  /**< [  3:  0](SRO) No. of Device Interface Channels.

                                                                 0b0000 = 0 (P-channel PPU). */
#else /* Word 0 - Little Endian */
        uint32_t devchan               : 4;  /**< [  3:  0](SRO) No. of Device Interface Channels.

                                                                 0b0000 = 0 (P-channel PPU). */
        uint32_t num_opmode            : 4;  /**< [  7:  4](SRO) No. of operating modes supported, minus 1.

                                                                 0b0101 = 6 operating modes supported. */
        uint32_t sta_off_spt           : 1;  /**< [  8:  8](SRO) OFF support.

                                                                 1 = OFF supported. */
        uint32_t sta_off_emu_spt       : 1;  /**< [  9:  9](SRO) OFF_EMU support.

                                                                 1 = OFF_EMU supported. */
        uint32_t sta_mem_ret_spt       : 1;  /**< [ 10: 10](SRO) MEM_RET support.

                                                                 1 = MEM_RET supported. */
        uint32_t sta_mem_ret_emu_spt   : 1;  /**< [ 11: 11](SRO) MEM_RET_EMU support.

                                                                 1 = MEM_RET_EMU supported. */
        uint32_t sta_lgc_ret_spt       : 1;  /**< [ 12: 12](SRO) LOGIC_RET support.

                                                                 0 = LOGIC_RET not supported. */
        uint32_t sta_mem_off_spt       : 1;  /**< [ 13: 13](SRO) MEM_OFF support.

                                                                 0 = MEM_OFF not supported. */
        uint32_t sta_full_ret_spt      : 1;  /**< [ 14: 14](SRO) FULL_RET support.

                                                                 0 = FULL_RET not supported. */
        uint32_t sta_func_ret_spt      : 1;  /**< [ 15: 15](SRO) FUNC_RET support.

                                                                 1 = FUNC_RET supported. */
        uint32_t sta_on_spt            : 1;  /**< [ 16: 16](SRO) ON support.

                                                                 1 = ON supported. */
        uint32_t sta_wrm_rst_spt       : 1;  /**< [ 17: 17](SRO) WARM_RST support.

                                                                 1 = WRM_RST supported. */
        uint32_t sta_dbg_recov_spt     : 1;  /**< [ 18: 18](SRO) DBG_RECOV support.

                                                                 1 = DBG_RECOV supported. */
        uint32_t reserved_19           : 1;
        uint32_t dyn_off_spt           : 1;  /**< [ 20: 20](SRO) Dynamic OFF support.

                                                                 1 = Dynamic OFF supported. */
        uint32_t dyn_off_emu_spt       : 1;  /**< [ 21: 21](SRO) Dynamic OFF_EMU support.

                                                                 1 = Dynamic OFF_EMU supported. */
        uint32_t dyn_mem_ret_spt       : 1;  /**< [ 22: 22](SRO) Dynamic DYN_MEM_RET_SPT support.

                                                                 1 = Dynamic DYN_MEM_RET_SPT
                                                                 supported. */
        uint32_t dyn_mem_ret_emu_spt   : 1;  /**< [ 23: 23](SRO) Dynamic DYN_MEM_RET_EMU_SPT support.

                                                                 1 = Dynamic DYN_MEM_RET_EMU_SPT
                                                                 supported. */
        uint32_t dyn_lgc_ret_spt       : 1;  /**< [ 24: 24](SRO) Dynamic LOGIC_RET support.

                                                                 0 = Dynamic LOGIC_RET not supported. */
        uint32_t dyn_mem_off_spt       : 1;  /**< [ 25: 25](SRO) Dynamic MEM_OFF support.

                                                                 0 = Dynamic MEM_OFF not supported. */
        uint32_t dyn_full_ret_spt      : 1;  /**< [ 26: 26](SRO) Dynamic DYN_FULL_RET_SPT support.

                                                                 0 = Dynamic DYN_FULL_RET_SPT not
                                                                 supported. */
        uint32_t dyn_func_ret_spt      : 1;  /**< [ 27: 27](SRO) Dynamic DYN_FUNC_RET_SPT support.

                                                                 1 = Dynamic DYN_FUNC_RET_SPT
                                                                 supported. */
        uint32_t dyn_on_spt            : 1;  /**< [ 28: 28](SRO) Dynamic ON support.

                                                                 1 = Dynamic ON supported. */
        uint32_t dyn_wrm_rst_spt       : 1;  /**< [ 29: 29](SRO) Dynamic WARM_RST support.

                                                                 1 = Dynamic WARM_RST supported. */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_idr0_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_idr0 cavm_dsuubx_cluster_ppu_idr0_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_IDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_IDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030fb0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030fb0ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030fb0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030fb0ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_IDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_IDR0(a) cavm_dsuubx_cluster_ppu_idr0_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_IDR0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_IDR0(a) "DSUUBX_CLUSTER_PPU_IDR0"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_IDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_IDR0(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_IDR0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_idr1
 *
 * DSUUB Cluster PPU Identification Register 1
 * This read-only register contains information on the optional features and configurations that are
 * supported by this PPU.
 *
 * Additional information on optional features can be found in the PPU Identification
 * Register 0 (DSUUB_
 * PPU_IDR0).
 */
union cavm_dsuubx_cluster_ppu_idr1
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_idr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t off_mem_ret_trans     : 1;  /**< [ 12: 12](SRO) OFF to MEM_RET direct transition. Indicates
                                                                 if direct transitions from OFF to MEM_RET
                                                                 and from OFF_EMU to MEM_RET_EMU are
                                                                 supported.

                                                                 1 = OFF to MEM_RET direct transition
                                                                 supported. */
        uint32_t reserved_11           : 1;
        uint32_t op_active             : 1;  /**< [ 10: 10](SRO) Operating mode use model for dynamic
                                                                 transitions.

                                                                 0 = Ladder use model. */
        uint32_t sta_policy_op_irq_spt : 1;  /**< [  9:  9](SRO) Operating policy transition completion event
                                                                 status.

                                                                 1 = Operating policy transition completion
                                                                 events supported. */
        uint32_t sta_policy_pwr_irq_spt : 1; /**< [  8:  8](SRO) Power policy transition completion event
                                                                 status.

                                                                 1 = Power policy transition completion
                                                                 events supported. */
        uint32_t reserved_7            : 1;
        uint32_t func_ret_ram_reg      : 1;  /**< [  6:  6](SRO) Indicates if the DSUUB_PPU_FUNRR register is
                                                                 present or reserved.

                                                                 0 = DSUUB_PPU_FUNRR is reserved. */
        uint32_t full_ret_ram_reg      : 1;  /**< [  5:  5](SRO) Indicates if the DSUUB_PPU_FULRR register is
                                                                 present or reserved.

                                                                 0 = DSUUB_PPU_FULRR is reserved. */
        uint32_t mem_ret_ram_reg       : 1;  /**< [  4:  4](SRO) Indicates if the DSUUB_PPU_MEMRR register is
                                                                 present or reserved.

                                                                 1 = DSUUB_PPU_MEMRR is present. */
        uint32_t reserved_3            : 1;
        uint32_t lock_spt              : 1;  /**< [  2:  2](SRO) Indicates if the lock and the lock interrupt
                                                                 event are supported.

                                                                 1 = Lock and the lock interrupt event are
                                                                 supported. */
        uint32_t sw_dev_del_spt        : 1;  /**< [  1:  1](SRO) Software device delay control configuration
                                                                 support.

                                                                 1 = Software device delay control
                                                                 configuration supported. */
        uint32_t pwr_mode_entry_del_spt : 1; /**< [  0:  0](SRO) Power mode entry delay support.

                                                                 0 = Power mode entry delay not supported. */
#else /* Word 0 - Little Endian */
        uint32_t pwr_mode_entry_del_spt : 1; /**< [  0:  0](SRO) Power mode entry delay support.

                                                                 0 = Power mode entry delay not supported. */
        uint32_t sw_dev_del_spt        : 1;  /**< [  1:  1](SRO) Software device delay control configuration
                                                                 support.

                                                                 1 = Software device delay control
                                                                 configuration supported. */
        uint32_t lock_spt              : 1;  /**< [  2:  2](SRO) Indicates if the lock and the lock interrupt
                                                                 event are supported.

                                                                 1 = Lock and the lock interrupt event are
                                                                 supported. */
        uint32_t reserved_3            : 1;
        uint32_t mem_ret_ram_reg       : 1;  /**< [  4:  4](SRO) Indicates if the DSUUB_PPU_MEMRR register is
                                                                 present or reserved.

                                                                 1 = DSUUB_PPU_MEMRR is present. */
        uint32_t full_ret_ram_reg      : 1;  /**< [  5:  5](SRO) Indicates if the DSUUB_PPU_FULRR register is
                                                                 present or reserved.

                                                                 0 = DSUUB_PPU_FULRR is reserved. */
        uint32_t func_ret_ram_reg      : 1;  /**< [  6:  6](SRO) Indicates if the DSUUB_PPU_FUNRR register is
                                                                 present or reserved.

                                                                 0 = DSUUB_PPU_FUNRR is reserved. */
        uint32_t reserved_7            : 1;
        uint32_t sta_policy_pwr_irq_spt : 1; /**< [  8:  8](SRO) Power policy transition completion event
                                                                 status.

                                                                 1 = Power policy transition completion
                                                                 events supported. */
        uint32_t sta_policy_op_irq_spt : 1;  /**< [  9:  9](SRO) Operating policy transition completion event
                                                                 status.

                                                                 1 = Operating policy transition completion
                                                                 events supported. */
        uint32_t op_active             : 1;  /**< [ 10: 10](SRO) Operating mode use model for dynamic
                                                                 transitions.

                                                                 0 = Ladder use model. */
        uint32_t reserved_11           : 1;
        uint32_t off_mem_ret_trans     : 1;  /**< [ 12: 12](SRO) OFF to MEM_RET direct transition. Indicates
                                                                 if direct transitions from OFF to MEM_RET
                                                                 and from OFF_EMU to MEM_RET_EMU are
                                                                 supported.

                                                                 1 = OFF to MEM_RET direct transition
                                                                 supported. */
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_idr1_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_idr1 cavm_dsuubx_cluster_ppu_idr1_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_IDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_IDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030fb4ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030fb4ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030fb4ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030fb4ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_IDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_IDR1(a) cavm_dsuubx_cluster_ppu_idr1_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_IDR1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_IDR1(a) "DSUUBX_CLUSTER_PPU_IDR1"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_IDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_IDR1(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_IDR1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_iesr
 *
 * DSUUB Cluster Input Edge Sensitivity Register
 * This register configures the transitions on the power mode DEVPACTIVE inputs that generate an
 * Input Edge interrupt event.
 *
 * When an event is masked an occurrence of the event does not set the corresponding bit in the
 * interrupt status register.
 */
union cavm_dsuubx_cluster_ppu_iesr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_iesr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_22_31        : 10;
        uint32_t devactive10_edge      : 2;  /**< [ 21: 20](SR/W) Configures the transitions on the DEVPACTIVE[10]
                                                                 input (DBG_RECOV) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive09_edge      : 2;  /**< [ 19: 18](SR/W) Configures the transitions on the DEVPACTIVE[9]
                                                                 input (WARM_RST) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive08_edge      : 2;  /**< [ 17: 16](SR/W) Configures the transitions on the DEVPACTIVE[8]
                                                                 input (ON) that generate an Input Edge interrupt
                                                                 event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive07_edge      : 2;  /**< [ 15: 14](SR/W) Configures the transitions on the DEVPACTIVE[7]
                                                                 input (FUNC_RET) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t reserved_8_13         : 6;
        uint32_t devactive03_edge      : 2;  /**< [  7:  6](SR/W) Configures the transitions on the DEVPACTIVE[3]
                                                                 input (MEM_RET_EMU) that generate an Input
                                                                 Edge interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive02_edge      : 2;  /**< [  5:  4](SR/W) Configures the transitions on the DEVPACTIVE[2]
                                                                 input (MEM_RET) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive01_edge      : 2;  /**< [  3:  2](SR/W) Configures the transitions on the DEVPACTIVE[1]
                                                                 input (OFF_EMU) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_1          : 2;
        uint32_t devactive01_edge      : 2;  /**< [  3:  2](SR/W) Configures the transitions on the DEVPACTIVE[1]
                                                                 input (OFF_EMU) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive02_edge      : 2;  /**< [  5:  4](SR/W) Configures the transitions on the DEVPACTIVE[2]
                                                                 input (MEM_RET) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive03_edge      : 2;  /**< [  7:  6](SR/W) Configures the transitions on the DEVPACTIVE[3]
                                                                 input (MEM_RET_EMU) that generate an Input
                                                                 Edge interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t reserved_8_13         : 6;
        uint32_t devactive07_edge      : 2;  /**< [ 15: 14](SR/W) Configures the transitions on the DEVPACTIVE[7]
                                                                 input (FUNC_RET) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive08_edge      : 2;  /**< [ 17: 16](SR/W) Configures the transitions on the DEVPACTIVE[8]
                                                                 input (ON) that generate an Input Edge interrupt
                                                                 event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive09_edge      : 2;  /**< [ 19: 18](SR/W) Configures the transitions on the DEVPACTIVE[9]
                                                                 input (WARM_RST) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive10_edge      : 2;  /**< [ 21: 20](SR/W) Configures the transitions on the DEVPACTIVE[10]
                                                                 input (DBG_RECOV) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t reserved_22_31        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_iesr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_iesr cavm_dsuubx_cluster_ppu_iesr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_IESR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_IESR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030040ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030040ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030040ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030040ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_IESR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_IESR(a) cavm_dsuubx_cluster_ppu_iesr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_IESR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_IESR(a) "DSUUBX_CLUSTER_PPU_IESR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_IESR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_IESR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_IESR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_iidr
 *
 * DSUUB Cluster Implementation Identification Register
 * This register provides information about the implementer and implementation of the PPU.
 */
union cavm_dsuubx_cluster_ppu_iidr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_iidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t product_id            : 12; /**< [ 31: 20](SRO) Value identifying the PPU part.

                                                                 0b010011101000 = Theodul Power Policy Unit. */
        uint32_t variant               : 4;  /**< [ 19: 16](SRO) Value used to distinguish product variants, or
                                                                 major revisions of the product.

                                                                 0b0000 = Product variant r0p0. */
        uint32_t revision              : 4;  /**< [ 15: 12](SRO) Value used to distinguish minor revisions of
                                                                 the product.

                                                                 0b0000 = No ECO fixes. */
        uint32_t implementer           : 12; /**< [ 11:  0](SRO) Implementer identification.

                                                                 0b010000111011 = Arm Limited. */
#else /* Word 0 - Little Endian */
        uint32_t implementer           : 12; /**< [ 11:  0](SRO) Implementer identification.

                                                                 0b010000111011 = Arm Limited. */
        uint32_t revision              : 4;  /**< [ 15: 12](SRO) Value used to distinguish minor revisions of
                                                                 the product.

                                                                 0b0000 = No ECO fixes. */
        uint32_t variant               : 4;  /**< [ 19: 16](SRO) Value used to distinguish product variants, or
                                                                 major revisions of the product.

                                                                 0b0000 = Product variant r0p0. */
        uint32_t product_id            : 12; /**< [ 31: 20](SRO) Value identifying the PPU part.

                                                                 0b010011101000 = Theodul Power Policy Unit. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_iidr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_iidr cavm_dsuubx_cluster_ppu_iidr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_IIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_IIDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030fc8ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030fc8ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030fc8ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030fc8ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_IIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_IIDR(a) cavm_dsuubx_cluster_ppu_iidr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_IIDR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_IIDR(a) "DSUUBX_CLUSTER_PPU_IIDR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_IIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_IIDR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_IIDR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_imr
 *
 * DSUUB Cluster Interrupt Mask Register
 * This register controls the events that assert the interrupt output. Additional event
 * masking controls
 * are in the Additional Interrupt Mask Register (DSUUB_PPU_AIMR), Input Edge
 * Sensitivity Register (DSUUB_
 * PPU_IESR), and the Operating Mode Active Edge Sensitivity Register (DSUUB_PPU_OPSR).
 *
 * When an interrupt event is masked an occurrence of the event does not set the corresponding bit
 * in the interrupt status register.
 */
union cavm_dsuubx_cluster_ppu_imr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_imr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t locked_irq_mask       : 1;  /**< [  5:  5](SR/W) Locked event mask

                                                                 0 = Locked event enabled.

                                                                 1 = Locked event masked. */
        uint32_t emu_deny_irq_mask     : 1;  /**< [  4:  4](SR/W) Emulation transition denial event mask

                                                                 0 = Emulation transition denial event enabled.

                                                                 1 = Emulation transition denial event masked. */
        uint32_t emu_accept_irq_mask   : 1;  /**< [  3:  3](SR/W) Emulation transition acceptance event mask

                                                                 0 = Emulation transition acceptance event
                                                                 enabled.

                                                                 1 = Emulation transition acceptance event
                                                                 masked. */
        uint32_t sta_deny_irq_mask     : 1;  /**< [  2:  2](SR/W) Static transition denial event mask

                                                                 0 = Static transition denial event enabled.

                                                                 1 = Static transition denial event masked. */
        uint32_t sta_accept_irq_mask   : 1;  /**< [  1:  1](SR/W) Static transition acceptance event mask

                                                                 0 = Static transition acceptance event
                                                                 enabled.

                                                                 1 = Static transition acceptance event
                                                                 masked. */
        uint32_t sta_policy_trn_irq_mask : 1;/**< [  0:  0](SR/W) Static full policy transition completion event
                                                                 mask

                                                                 0 = Static full policy transition completion
                                                                 event enabled.

                                                                 1 = Static full policy transition completion
                                                                 event masked. */
#else /* Word 0 - Little Endian */
        uint32_t sta_policy_trn_irq_mask : 1;/**< [  0:  0](SR/W) Static full policy transition completion event
                                                                 mask

                                                                 0 = Static full policy transition completion
                                                                 event enabled.

                                                                 1 = Static full policy transition completion
                                                                 event masked. */
        uint32_t sta_accept_irq_mask   : 1;  /**< [  1:  1](SR/W) Static transition acceptance event mask

                                                                 0 = Static transition acceptance event
                                                                 enabled.

                                                                 1 = Static transition acceptance event
                                                                 masked. */
        uint32_t sta_deny_irq_mask     : 1;  /**< [  2:  2](SR/W) Static transition denial event mask

                                                                 0 = Static transition denial event enabled.

                                                                 1 = Static transition denial event masked. */
        uint32_t emu_accept_irq_mask   : 1;  /**< [  3:  3](SR/W) Emulation transition acceptance event mask

                                                                 0 = Emulation transition acceptance event
                                                                 enabled.

                                                                 1 = Emulation transition acceptance event
                                                                 masked. */
        uint32_t emu_deny_irq_mask     : 1;  /**< [  4:  4](SR/W) Emulation transition denial event mask

                                                                 0 = Emulation transition denial event enabled.

                                                                 1 = Emulation transition denial event masked. */
        uint32_t locked_irq_mask       : 1;  /**< [  5:  5](SR/W) Locked event mask

                                                                 0 = Locked event enabled.

                                                                 1 = Locked event masked. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_imr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_imr cavm_dsuubx_cluster_ppu_imr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_IMR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_IMR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030030ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030030ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030030ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030030ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_IMR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_IMR(a) cavm_dsuubx_cluster_ppu_imr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_IMR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_IMR(a) "DSUUBX_CLUSTER_PPU_IMR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_IMR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_IMR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_IMR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_isr
 *
 * DSUUB Cluster Interrupt Status Register
 * This register contains information about events causing the assertion of the
 * interrupt output. It is
 * also used to clear interrupt events.
 *
 * A bit set to 1 indicates the event asserted the interrupt output. Multiple events
 * can be active at
 * the same time. When an interrupt event is masked an occurrence of that event does not set the
 * status bit.
 *
 * A write of 1 to an event bit clears that event. A write of 0 to a bit has no
 * effect. The interrupt
 * output stays HIGH until all status bits in the Interrupt Status Register (PPU_ISR)
 * and the Additional
 * Interrupt Status Register (DSUUB_PPU_AISR) are 0b0.
 *
 * When the OTHER_IRQ bit is set, this indicates an event from the Additional Interrupt Status
 * Register (PPU_AISR) has caused the interrupt output to be asserted. This bit cannot be cleared by
 * writing to this register. It must be cleared by writing to the active event in the
 * Additional Interrupt
 * Status Register (DSUUB_PPU_AISR).
 */
union cavm_dsuubx_cluster_ppu_isr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_isr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t op_active_edge_irq2   : 1;  /**< [ 26: 26](SR/W1C/H) Indicates if operating mode DEVPACTIVE[18]
                                                                 input caused the input edge event.

                                                                 0 = DEVPACTIVE[18] input (All L3 Cache
                                                                 Slices active) did not assert the interrupt
                                                                 output.

                                                                 1 = DEVPACTIVE[18] input (All L3 Cache
                                                                 Slices active) asserted the interrupt
                                                                 output. */
        uint32_t op_active_edge_irq1   : 1;  /**< [ 25: 25](SR/W1C/H) Indicates if operating mode DEVPACTIVE[17]
                                                                 input caused the input edge event.

                                                                 0 = DEVPACTIVE[17] input (Upper L3
                                                                 Cache RAMs active) did not assert the
                                                                 interrupt output.

                                                                 1 = DEVPACTIVE[17] input (Upper L3
                                                                 Cache RAMs active) asserted the
                                                                 interrupt output. */
        uint32_t op_active_edge_irq0   : 1;  /**< [ 24: 24](SR/W1C/H) Indicates if operating mode DEVPACTIVE[16]
                                                                 input caused the input edge event.

                                                                 0 = DEVPACTIVE[16] input (Lower L3
                                                                 Cache RAMs active) did not assert the
                                                                 interrupt output.

                                                                 1 = DEVPACTIVE[16] input (Lower L3
                                                                 Cache RAMs active) asserted the
                                                                 interrupt output. */
        uint32_t reserved_19_23        : 5;
        uint32_t pwr_active_edge_irq10 : 1;  /**< [ 18: 18](SR/W1C/H) Indicates if power mode DEVPACTIVE[10]
                                                                 input caused the input edge event.

                                                                 0 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 did not assert the interrupt output.

                                                                 1 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 asserted the interrupt output. */
        uint32_t pwr_active_edge_irq9  : 1;  /**< [ 17: 17](SR/W1C/H) Indicates if power mode DEVPACTIVE[9] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[9] input (WARM_RST) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[9] input (WARM_RST)
                                                                 asserted the interrupt output. */
        uint32_t pwr_active_edge_irq8  : 1;  /**< [ 16: 16](SR/W1C/H) Indicates if power mode DEVPACTIVE[8] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[8] input (ON) did not
                                                                 assert the interrupt output.

                                                                 1 = DEVPACTIVE[8] input (ON) asserted the
                                                                 interrupt output. */
        uint32_t pwr_active_edge_irq7  : 1;  /**< [ 15: 15](SR/W1C/H) Indicates if power mode DEVPACTIVE[7] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[7] input (FUNC_RET) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 asserted the interrupt output. */
        uint32_t reserved_12_14        : 3;
        uint32_t pwr_active_edge_irq3  : 1;  /**< [ 11: 11](SR/W1C/H) Indicates if power mode DEVPACTIVE[3] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[3] input (MEM_RET_
                                                                 EMU) did not assert the interrupt
                                                                 output.

                                                                 1 = DEVPACTIVE[3] input (MEM_RET_
                                                                 EMU) asserted the interrupt output. */
        uint32_t pwr_active_edge_irq2  : 1;  /**< [ 10: 10](SR/W1C/H) Indicates if power mode DEVPACTIVE[2] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[2] input (MEM_RET) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[2] input (MEM_RET)
                                                                 asserted the interrupt output. */
        uint32_t pwr_active_edge_irq1  : 1;  /**< [  9:  9](SR/W1C/H) Indicates if power mode DEVPACTIVE[1] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[1] input (OFF_EMU) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 asserted the interrupt output. */
        uint32_t reserved_8            : 1;
        uint32_t other_irq             : 1;  /**< [  7:  7](SRO/H) Indicates there is an interrupt event pending
                                                                 in the Additional Interrupt Status Register (DSUUB_
                                                                 PPU_AISR).

                                                                 0 = No interrupt pending in DSUUB_PPU_AISR.

                                                                 1 = Interrupt pending in DSUUB_PPU_AISR. */
        uint32_t reserved_6            : 1;
        uint32_t locked_irq            : 1;  /**< [  5:  5](SR/W1C/H) Locked event status.

                                                                 0 = No locked event.

                                                                 1 = A locked event asserted the interrupt
                                                                 output. */
        uint32_t emu_deny_irq          : 1;  /**< [  4:  4](SR/W1C/H) Emulated transition denial event status.

                                                                 0 = No emulated transition denial event.

                                                                 1 = An emulated transition denial event
                                                                 asserted the interrupt output. */
        uint32_t emu_accept_irq        : 1;  /**< [  3:  3](SR/W1C/H) Emulated transition acceptance event status.

                                                                 0 = No emulated transition acceptance
                                                                 event.

                                                                 1 = An emulated transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t sta_deny_irq          : 1;  /**< [  2:  2](SR/W1C/H) Static transition denial event status.

                                                                 0 = No static transition denial event.

                                                                 1 = An static transition denial event asserted
                                                                 the interrupt output. */
        uint32_t sta_accept_irq        : 1;  /**< [  1:  1](SR/W1C/H) Static transition acceptance event status.

                                                                 0 = No static transition acceptance event.

                                                                 1 = An static transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t sta_policy_trn_irq    : 1;  /**< [  0:  0](SR/W1C/H) Static full policy transition completion event
                                                                 status.

                                                                 0 = No static full policy transition
                                                                 completion event.

                                                                 1 = An static full policy transition completion
                                                                 event asserted the interrupt output. */
#else /* Word 0 - Little Endian */
        uint32_t sta_policy_trn_irq    : 1;  /**< [  0:  0](SR/W1C/H) Static full policy transition completion event
                                                                 status.

                                                                 0 = No static full policy transition
                                                                 completion event.

                                                                 1 = An static full policy transition completion
                                                                 event asserted the interrupt output. */
        uint32_t sta_accept_irq        : 1;  /**< [  1:  1](SR/W1C/H) Static transition acceptance event status.

                                                                 0 = No static transition acceptance event.

                                                                 1 = An static transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t sta_deny_irq          : 1;  /**< [  2:  2](SR/W1C/H) Static transition denial event status.

                                                                 0 = No static transition denial event.

                                                                 1 = An static transition denial event asserted
                                                                 the interrupt output. */
        uint32_t emu_accept_irq        : 1;  /**< [  3:  3](SR/W1C/H) Emulated transition acceptance event status.

                                                                 0 = No emulated transition acceptance
                                                                 event.

                                                                 1 = An emulated transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t emu_deny_irq          : 1;  /**< [  4:  4](SR/W1C/H) Emulated transition denial event status.

                                                                 0 = No emulated transition denial event.

                                                                 1 = An emulated transition denial event
                                                                 asserted the interrupt output. */
        uint32_t locked_irq            : 1;  /**< [  5:  5](SR/W1C/H) Locked event status.

                                                                 0 = No locked event.

                                                                 1 = A locked event asserted the interrupt
                                                                 output. */
        uint32_t reserved_6            : 1;
        uint32_t other_irq             : 1;  /**< [  7:  7](SRO/H) Indicates there is an interrupt event pending
                                                                 in the Additional Interrupt Status Register (DSUUB_
                                                                 PPU_AISR).

                                                                 0 = No interrupt pending in DSUUB_PPU_AISR.

                                                                 1 = Interrupt pending in DSUUB_PPU_AISR. */
        uint32_t reserved_8            : 1;
        uint32_t pwr_active_edge_irq1  : 1;  /**< [  9:  9](SR/W1C/H) Indicates if power mode DEVPACTIVE[1] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[1] input (OFF_EMU) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 asserted the interrupt output. */
        uint32_t pwr_active_edge_irq2  : 1;  /**< [ 10: 10](SR/W1C/H) Indicates if power mode DEVPACTIVE[2] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[2] input (MEM_RET) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[2] input (MEM_RET)
                                                                 asserted the interrupt output. */
        uint32_t pwr_active_edge_irq3  : 1;  /**< [ 11: 11](SR/W1C/H) Indicates if power mode DEVPACTIVE[3] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[3] input (MEM_RET_
                                                                 EMU) did not assert the interrupt
                                                                 output.

                                                                 1 = DEVPACTIVE[3] input (MEM_RET_
                                                                 EMU) asserted the interrupt output. */
        uint32_t reserved_12_14        : 3;
        uint32_t pwr_active_edge_irq7  : 1;  /**< [ 15: 15](SR/W1C/H) Indicates if power mode DEVPACTIVE[7] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[7] input (FUNC_RET) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 asserted the interrupt output. */
        uint32_t pwr_active_edge_irq8  : 1;  /**< [ 16: 16](SR/W1C/H) Indicates if power mode DEVPACTIVE[8] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[8] input (ON) did not
                                                                 assert the interrupt output.

                                                                 1 = DEVPACTIVE[8] input (ON) asserted the
                                                                 interrupt output. */
        uint32_t pwr_active_edge_irq9  : 1;  /**< [ 17: 17](SR/W1C/H) Indicates if power mode DEVPACTIVE[9] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[9] input (WARM_RST) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[9] input (WARM_RST)
                                                                 asserted the interrupt output. */
        uint32_t pwr_active_edge_irq10 : 1;  /**< [ 18: 18](SR/W1C/H) Indicates if power mode DEVPACTIVE[10]
                                                                 input caused the input edge event.

                                                                 0 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 did not assert the interrupt output.

                                                                 1 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 asserted the interrupt output. */
        uint32_t reserved_19_23        : 5;
        uint32_t op_active_edge_irq0   : 1;  /**< [ 24: 24](SR/W1C/H) Indicates if operating mode DEVPACTIVE[16]
                                                                 input caused the input edge event.

                                                                 0 = DEVPACTIVE[16] input (Lower L3
                                                                 Cache RAMs active) did not assert the
                                                                 interrupt output.

                                                                 1 = DEVPACTIVE[16] input (Lower L3
                                                                 Cache RAMs active) asserted the
                                                                 interrupt output. */
        uint32_t op_active_edge_irq1   : 1;  /**< [ 25: 25](SR/W1C/H) Indicates if operating mode DEVPACTIVE[17]
                                                                 input caused the input edge event.

                                                                 0 = DEVPACTIVE[17] input (Upper L3
                                                                 Cache RAMs active) did not assert the
                                                                 interrupt output.

                                                                 1 = DEVPACTIVE[17] input (Upper L3
                                                                 Cache RAMs active) asserted the
                                                                 interrupt output. */
        uint32_t op_active_edge_irq2   : 1;  /**< [ 26: 26](SR/W1C/H) Indicates if operating mode DEVPACTIVE[18]
                                                                 input caused the input edge event.

                                                                 0 = DEVPACTIVE[18] input (All L3 Cache
                                                                 Slices active) did not assert the interrupt
                                                                 output.

                                                                 1 = DEVPACTIVE[18] input (All L3 Cache
                                                                 Slices active) asserted the interrupt
                                                                 output. */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_isr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_isr cavm_dsuubx_cluster_ppu_isr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_ISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_ISR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030038ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030038ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030038ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030038ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_ISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_ISR(a) cavm_dsuubx_cluster_ppu_isr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_ISR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_ISR(a) "DSUUBX_CLUSTER_PPU_ISR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_ISR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_ISR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_ISR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_memrr
 *
 * DSUUB Cluster Memory Retention RAM Configuration Register
 * This register controls bits [15:8] of the PCSMPSTATE output when in MEM_RET mode. These
 * outputs are used by the PCSM to configure the RAMs that are retained.
 */
union cavm_dsuubx_cluster_ppu_memrr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_memrr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t mem_ret_ram_cfg       : 8;  /**< [  7:  0](SR/W) MEM_RET RAM configuration bits. */
#else /* Word 0 - Little Endian */
        uint32_t mem_ret_ram_cfg       : 8;  /**< [  7:  0](SR/W) MEM_RET RAM configuration bits. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_memrr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_memrr cavm_dsuubx_cluster_ppu_memrr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_MEMRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_MEMRR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030058ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030058ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030058ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030058ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_MEMRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_MEMRR(a) cavm_dsuubx_cluster_ppu_memrr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_MEMRR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_MEMRR(a) "DSUUBX_CLUSTER_PPU_MEMRR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_MEMRR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_MEMRR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_MEMRR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_misr
 *
 * DSUUB Cluster Miscellaneous Input Current Status Register
 * This read-only register contains status reflecting the values of miscellaneous inputs.
 */
union cavm_dsuubx_cluster_ppu_misr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_misr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t devdeny_status        : 1;  /**< [ 16: 16](SRO/H) Status of the device interface DEVPDENY
                                                                 inputs.

                                                                 0 = DEVPDENY deasserted.

                                                                 1 = DEVPDENY asserted. */
        uint32_t reserved_9_15         : 7;
        uint32_t devaccept_status      : 1;  /**< [  8:  8](SRO/H) Status of the device interface DEVPACCEPT
                                                                 inputs.

                                                                 0 = DEVPACCEPT deasserted.

                                                                 1 = DEVPACCEPT asserted. */
        uint32_t reserved_1_7          : 7;
        uint32_t pcsmpaccept_status    : 1;  /**< [  0:  0](SRO/H) Status of the PCSMPACCEPT inputs.

                                                                 0 = PCSMPACCEPT deasserted.

                                                                 1 = PCSMPACCEPT asserted. */
#else /* Word 0 - Little Endian */
        uint32_t pcsmpaccept_status    : 1;  /**< [  0:  0](SRO/H) Status of the PCSMPACCEPT inputs.

                                                                 0 = PCSMPACCEPT deasserted.

                                                                 1 = PCSMPACCEPT asserted. */
        uint32_t reserved_1_7          : 7;
        uint32_t devaccept_status      : 1;  /**< [  8:  8](SRO/H) Status of the device interface DEVPACCEPT
                                                                 inputs.

                                                                 0 = DEVPACCEPT deasserted.

                                                                 1 = DEVPACCEPT asserted. */
        uint32_t reserved_9_15         : 7;
        uint32_t devdeny_status        : 1;  /**< [ 16: 16](SRO/H) Status of the device interface DEVPDENY
                                                                 inputs.

                                                                 0 = DEVPDENY deasserted.

                                                                 1 = DEVPDENY asserted. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_misr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_misr cavm_dsuubx_cluster_ppu_misr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_MISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_MISR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030014ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030014ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030014ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030014ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_MISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_MISR(a) cavm_dsuubx_cluster_ppu_misr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_MISR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_MISR(a) "DSUUBX_CLUSTER_PPU_MISR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_MISR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_MISR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_MISR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_opsr
 *
 * DSUUB Cluster Input Edge Sensitivity Register
 * This register configures the transitions on the operating mode DEVPACTIVE inputs that generate
 * an Input Edge interrupt event.
 *
 * When an event is masked an occurrence of the event does not set the corresponding bit in the
 * interrupt status register.
 */
union cavm_dsuubx_cluster_ppu_opsr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_opsr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t devactive18_edge      : 2;  /**< [  5:  4](SR/W) Configures the transitions on the DEVPACTIVE[18]
                                                                 input (All L3 Cache Slices active) that generate an
                                                                 Input Edge interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive17_edge      : 2;  /**< [  3:  2](SR/W) Configures the transitions on the DEVPACTIVE[17]
                                                                 input (Upper L3 Cache RAMs active) that generate
                                                                 an Input Edge interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive16_edge      : 2;  /**< [  1:  0](SR/W) Configures the transitions on the DEVPACTIVE[16]
                                                                 input (Lower L3 Cache RAMs active) that generate
                                                                 an Input Edge interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
#else /* Word 0 - Little Endian */
        uint32_t devactive16_edge      : 2;  /**< [  1:  0](SR/W) Configures the transitions on the DEVPACTIVE[16]
                                                                 input (Lower L3 Cache RAMs active) that generate
                                                                 an Input Edge interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive17_edge      : 2;  /**< [  3:  2](SR/W) Configures the transitions on the DEVPACTIVE[17]
                                                                 input (Upper L3 Cache RAMs active) that generate
                                                                 an Input Edge interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive18_edge      : 2;  /**< [  5:  4](SR/W) Configures the transitions on the DEVPACTIVE[18]
                                                                 input (All L3 Cache Slices active) that generate an
                                                                 Input Edge interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_opsr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_opsr cavm_dsuubx_cluster_ppu_opsr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_OPSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_OPSR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030044ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030044ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030044ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030044ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_OPSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_OPSR(a) cavm_dsuubx_cluster_ppu_opsr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_OPSR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_OPSR(a) "DSUUBX_CLUSTER_PPU_OPSR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_OPSR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_OPSR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_OPSR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr0
 *
 * DSUUB Cluster PPU Peripheral Identification Register 0
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_cluster_ppu_pidr0
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t part_0                : 8;  /**< [  7:  0](SRO) Part number bits [7:0].

                                                                 0b11101000 = Theodul Power Policy Unit. Bits [7:0] of part
                                                                 number 0x4E8. */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](SRO) Part number bits [7:0].

                                                                 0b11101000 = Theodul Power Policy Unit. Bits [7:0] of part
                                                                 number 0x4E8. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pidr0_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pidr0 cavm_dsuubx_cluster_ppu_pidr0_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030fe0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030fe0ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030fe0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030fe0ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PIDR0(a) cavm_dsuubx_cluster_ppu_pidr0_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PIDR0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PIDR0(a) "DSUUBX_CLUSTER_PPU_PIDR0"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PIDR0(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PIDR0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr1
 *
 * DSUUB Cluster PPU Peripheral Identification Register 1
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_cluster_ppu_pidr1
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t des_0                 : 4;  /**< [  7:  4](SRO) JEP106 identification code bits [3:0].

                                                                 0b1011 = Arm Limited. Bits [3:0] of JEP106 identification code
                                                                 0x3B. */
        uint32_t part_1                : 4;  /**< [  3:  0](SRO) Part number bits [11:8].

                                                                 0b0100 = Theodul Power Policy Unit. Bits [11:8] of part number
                                                                 0x4E8. */
#else /* Word 0 - Little Endian */
        uint32_t part_1                : 4;  /**< [  3:  0](SRO) Part number bits [11:8].

                                                                 0b0100 = Theodul Power Policy Unit. Bits [11:8] of part number
                                                                 0x4E8. */
        uint32_t des_0                 : 4;  /**< [  7:  4](SRO) JEP106 identification code bits [3:0].

                                                                 0b1011 = Arm Limited. Bits [3:0] of JEP106 identification code
                                                                 0x3B. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pidr1_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pidr1 cavm_dsuubx_cluster_ppu_pidr1_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030fe4ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030fe4ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030fe4ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030fe4ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PIDR1(a) cavm_dsuubx_cluster_ppu_pidr1_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PIDR1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PIDR1(a) "DSUUBX_CLUSTER_PPU_PIDR1"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PIDR1(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PIDR1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr2
 *
 * DSUUB Cluster PPU Peripheral Identification Register 2
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_cluster_ppu_pidr2
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revision              : 4;  /**< [  7:  4](SRO) Component revision.

                                                                 0b0000 = Revision r0p0. */
        uint32_t jedec                 : 1;  /**< [  3:  3](SRO) JEDEC assignee.

                                                                 1 = JEDEC-assignee values is used. */
        uint32_t des_1                 : 3;  /**< [  2:  0](SRO) JEP106 identification code bits [6:4].

                                                                 0b011 = Arm Limited. Bits [6:4] of JEP106 identification code
                                                                 0x3B. */
#else /* Word 0 - Little Endian */
        uint32_t des_1                 : 3;  /**< [  2:  0](SRO) JEP106 identification code bits [6:4].

                                                                 0b011 = Arm Limited. Bits [6:4] of JEP106 identification code
                                                                 0x3B. */
        uint32_t jedec                 : 1;  /**< [  3:  3](SRO) JEDEC assignee.

                                                                 1 = JEDEC-assignee values is used. */
        uint32_t revision              : 4;  /**< [  7:  4](SRO) Component revision.

                                                                 0b0000 = Revision r0p0. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pidr2_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pidr2 cavm_dsuubx_cluster_ppu_pidr2_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030fe8ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030fe8ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030fe8ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030fe8ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PIDR2(a) cavm_dsuubx_cluster_ppu_pidr2_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PIDR2(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PIDR2(a) "DSUUBX_CLUSTER_PPU_PIDR2"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PIDR2(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PIDR2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr3
 *
 * DSUUB Cluster PPU Peripheral Identification Register 3
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_cluster_ppu_pidr3
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revand                : 4;  /**< [  7:  4](SRO) Minor errata fixes.

                                                                 0b0000 = No ECO fixes. */
        uint32_t cmod                  : 4;  /**< [  3:  0](SRO) Customer Modified.

                                                                 0b0000 = The component is not modified from the original
                                                                 design. */
#else /* Word 0 - Little Endian */
        uint32_t cmod                  : 4;  /**< [  3:  0](SRO) Customer Modified.

                                                                 0b0000 = The component is not modified from the original
                                                                 design. */
        uint32_t revand                : 4;  /**< [  7:  4](SRO) Minor errata fixes.

                                                                 0b0000 = No ECO fixes. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pidr3_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pidr3 cavm_dsuubx_cluster_ppu_pidr3_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030fecll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030fecll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030fecll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030fecll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PIDR3(a) cavm_dsuubx_cluster_ppu_pidr3_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PIDR3(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PIDR3(a) "DSUUBX_CLUSTER_PPU_PIDR3"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PIDR3(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PIDR3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr4
 *
 * DSUUB Cluster PPU Peripheral Identification Register 4
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_cluster_ppu_pidr4
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pidr4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t size                  : 4;  /**< [  7:  4](SRO) 4KB count.

                                                                 0b0000 = The component uses a single 4KB block. */
        uint32_t des_2                 : 4;  /**< [  3:  0](SRO) JEP106 continuation code.

                                                                 0b0100 = Arm Limited. Number of 0x7F bytes in full JEP106 code 0x7F
                                                                 0x7F 0x7F 0x7F 0x3B. */
#else /* Word 0 - Little Endian */
        uint32_t des_2                 : 4;  /**< [  3:  0](SRO) JEP106 continuation code.

                                                                 0b0100 = Arm Limited. Number of 0x7F bytes in full JEP106 code 0x7F
                                                                 0x7F 0x7F 0x7F 0x3B. */
        uint32_t size                  : 4;  /**< [  7:  4](SRO) 4KB count.

                                                                 0b0000 = The component uses a single 4KB block. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pidr4_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pidr4 cavm_dsuubx_cluster_ppu_pidr4_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030fd0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030fd0ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030fd0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030fd0ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PIDR4(a) cavm_dsuubx_cluster_ppu_pidr4_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PIDR4(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PIDR4(a) "DSUUBX_CLUSTER_PPU_PIDR4"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PIDR4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PIDR4(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PIDR4(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr5
 *
 * DSUUB Cluster PPU Peripheral Identification Register 5
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_cluster_ppu_pidr5
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pidr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pidr5_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pidr5 cavm_dsuubx_cluster_ppu_pidr5_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030fd4ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030fd4ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030fd4ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030fd4ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PIDR5(a) cavm_dsuubx_cluster_ppu_pidr5_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PIDR5(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PIDR5(a) "DSUUBX_CLUSTER_PPU_PIDR5"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PIDR5(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PIDR5(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PIDR5(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr6
 *
 * DSUUB Cluster PPU Peripheral Identification Register 6
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_cluster_ppu_pidr6
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pidr6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pidr6_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pidr6 cavm_dsuubx_cluster_ppu_pidr6_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR6(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030fd8ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030fd8ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030fd8ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030fd8ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PIDR6(a) cavm_dsuubx_cluster_ppu_pidr6_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PIDR6(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PIDR6(a) "DSUUBX_CLUSTER_PPU_PIDR6"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PIDR6(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PIDR6(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PIDR6(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pidr7
 *
 * DSUUB Cluster PPU Peripheral Identification Register 7
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_cluster_ppu_pidr7
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pidr7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pidr7_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pidr7 cavm_dsuubx_cluster_ppu_pidr7_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PIDR7(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030fdcll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030fdcll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030fdcll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030fdcll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PIDR7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PIDR7(a) cavm_dsuubx_cluster_ppu_pidr7_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PIDR7(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PIDR7(a) "DSUUBX_CLUSTER_PPU_PIDR7"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PIDR7(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PIDR7(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PIDR7(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pmer
 *
 * DSUUB Cluster Power Mode Emulation Enable Register
 * This register allows software to enable entry into emulated modes.
 */
union cavm_dsuubx_cluster_ppu_pmer
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pmer_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t emu_en                : 1;  /**< [  0:  0](SR/W) Power mode emulation enable.

                                                                 0 = Power mode emulation disabled.

                                                                 1 = Power mode emulation enabled. Transitions to OFF
                                                                 and MEM_RET instead transition to OFF_EMU and
                                                                 MEM_RET_EMU. */
#else /* Word 0 - Little Endian */
        uint32_t emu_en                : 1;  /**< [  0:  0](SR/W) Power mode emulation enable.

                                                                 0 = Power mode emulation disabled.

                                                                 1 = Power mode emulation enabled. Transitions to OFF
                                                                 and MEM_RET instead transition to OFF_EMU and
                                                                 MEM_RET_EMU. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pmer_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pmer cavm_dsuubx_cluster_ppu_pmer_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PMER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PMER(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030004ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030004ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030004ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030004ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PMER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PMER(a) cavm_dsuubx_cluster_ppu_pmer_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PMER(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PMER(a) "DSUUBX_CLUSTER_PPU_PMER"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PMER(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PMER(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PMER(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_ptcr
 *
 * DSUUB Cluster Power Mode Transition Register
 * This register contains settings which affect the behaviour of certain power mode transitions.
 */
union cavm_dsuubx_cluster_ppu_ptcr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_ptcr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t dbg_recov_porst_en    : 1;  /**< [  1:  1](SR/W) Power-on reset behavior in DBG_RECOV.

                                                                 This bit should not be modified when the PPU
                                                                 is in DBG_RECOV or if the PPU is performing
                                                                 a transition, otherwise PPU behavior is
                                                                 UNPREDICTABLE.

                                                                 0 = DEVPORESETn is not asserted when in
                                                                 DBG_RECOV.

                                                                 1 = DEVPORESETn is asserted when in DBG_
                                                                 RECOV. */
        uint32_t warm_rst_devreqen     : 1;  /**< [  0:  0](SR/W) Device interface handshake behavior.

                                                                 This bit should not be modified when the PPU
                                                                 is in WARM_RST, or if the PPU is performing
                                                                 a transition, otherwise PPU behavior is
                                                                 UNPREDICTABLE.

                                                                 0 = The PPU does not perform a device
                                                                 interface handshake when transitioning
                                                                 between ON and WARM_RST.

                                                                 1 = The PPU performs a device interface
                                                                 handshake when transitioning between
                                                                 ON and WARM_RST. */
#else /* Word 0 - Little Endian */
        uint32_t warm_rst_devreqen     : 1;  /**< [  0:  0](SR/W) Device interface handshake behavior.

                                                                 This bit should not be modified when the PPU
                                                                 is in WARM_RST, or if the PPU is performing
                                                                 a transition, otherwise PPU behavior is
                                                                 UNPREDICTABLE.

                                                                 0 = The PPU does not perform a device
                                                                 interface handshake when transitioning
                                                                 between ON and WARM_RST.

                                                                 1 = The PPU performs a device interface
                                                                 handshake when transitioning between
                                                                 ON and WARM_RST. */
        uint32_t dbg_recov_porst_en    : 1;  /**< [  1:  1](SR/W) Power-on reset behavior in DBG_RECOV.

                                                                 This bit should not be modified when the PPU
                                                                 is in DBG_RECOV or if the PPU is performing
                                                                 a transition, otherwise PPU behavior is
                                                                 UNPREDICTABLE.

                                                                 0 = DEVPORESETn is not asserted when in
                                                                 DBG_RECOV.

                                                                 1 = DEVPORESETn is asserted when in DBG_
                                                                 RECOV. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_ptcr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_ptcr cavm_dsuubx_cluster_ppu_ptcr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PTCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PTCR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030024ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030024ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030024ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030024ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PTCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PTCR(a) cavm_dsuubx_cluster_ppu_ptcr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PTCR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PTCR(a) "DSUUBX_CLUSTER_PPU_PTCR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PTCR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PTCR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PTCR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pwcr
 *
 * DSUUB Cluster Power Configuration Register
 * This register controls enabling and disabling of hardware control inputs to the PPU.
 *
 * Before software programs the DEVREQEN bits it must configure the PPU for static
 * transitions and ensure the requested power mode has been reached, this means that no
 * further transitions can occur, otherwise behavior is UNPREDICTABLE.
 *
 * The PWR_DEVACTIVEEN and OP_DEVACTIVEEN fields in this register control the ability of the
 * DEVACTIVE inputs to initiate power mode transitions, but not the ability to generate input edge
 * interrupt events.
 */
union cavm_dsuubx_cluster_ppu_pwcr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pwcr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t op_devactiveen2       : 1;  /**< [ 26: 26](SR/W) Enables the operating mode DEVPACTIVE[18]
                                                                 input.

                                                                 0 = DEVPACTIVE[18] input (All L3 Cache
                                                                 Slices active) disabled.

                                                                 1 = DEVPACTIVE[18] input (All L3 Cache
                                                                 Slices active) enabled. */
        uint32_t op_devactiveen1       : 1;  /**< [ 25: 25](SR/W) Enables the operating mode DEVPACTIVE[17]
                                                                 input.

                                                                 0 = DEVPACTIVE[17] input (Upper L3 Cache
                                                                 RAMs active) disabled.

                                                                 1 = DEVPACTIVE[17] input (Upper L3 Cache
                                                                 RAMs active) enabled. */
        uint32_t op_devactiveen0       : 1;  /**< [ 24: 24](SR/W) Enables the operating mode DEVPACTIVE[16]
                                                                 input.

                                                                 0 = DEVPACTIVE[16] input (Lower L3 Cache
                                                                 RAMs active) disabled.

                                                                 1 = DEVPACTIVE[16] input (Lower L3 Cache
                                                                 RAMs active) enabled. */
        uint32_t reserved_19_23        : 5;
        uint32_t pwr_devactiveen10     : 1;  /**< [ 18: 18](SR/W) Enables the operating mode DEVPACTIVE[10]
                                                                 input.

                                                                 0 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 enabled. */
        uint32_t pwr_devactiveen9      : 1;  /**< [ 17: 17](SR/W) Enables the operating mode DEVPACTIVE[9]
                                                                 input.

                                                                 0 = DEVPACTIVE[9] input (WARM_RST)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[9] input (WARM_RST)
                                                                 enabled. */
        uint32_t pwr_devactiveen8      : 1;  /**< [ 16: 16](SR/W) Enables the operating mode DEVPACTIVE[8]
                                                                 input.

                                                                 0 = DEVPACTIVE[8] input (ON) disabled.

                                                                 1 = DEVPACTIVE[8] input (ON) enabled. */
        uint32_t pwr_devactiveen7      : 1;  /**< [ 15: 15](SR/W) Enables the operating mode DEVPACTIVE[7]
                                                                 input.

                                                                 0 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 enabled. */
        uint32_t reserved_14           : 1;
        uint32_t pwr_devactiveen5      : 1;  /**< [ 13: 13](SR/W) Enables the operating mode DEVPACTIVE[5]
                                                                 input.

                                                                 0 = DEVPACTIVE[5] input (FULL_RET)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[5] input (FULL_RET)
                                                                 enabled. */
        uint32_t reserved_12           : 1;
        uint32_t pwr_devactiveen3      : 1;  /**< [ 11: 11](SR/W) Enables the operating mode DEVPACTIVE[3]
                                                                 input.

                                                                 0 = DEVPACTIVE[3] input (MEM_RET_EMU)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[3] input (MEM_RET_EMU)
                                                                 enabled. */
        uint32_t pwr_devactiveen2      : 1;  /**< [ 10: 10](SR/W) Enables the operating mode DEVPACTIVE[2]
                                                                 input.

                                                                 0 = DEVPACTIVE[2] input (MEM_RET)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[2] input (MEM_RET)
                                                                 enabled. */
        uint32_t pwr_devactiveen1      : 1;  /**< [  9:  9](SR/W) Enables the operating mode DEVPACTIVE[1]
                                                                 input.

                                                                 0 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 enabled. */
        uint32_t reserved_1_8          : 8;
        uint32_t devreqen              : 1;  /**< [  0:  0](SR/W) Device interface handshake enable.

                                                                 0 = Device interface handshake disabled for
                                                                 transitions.

                                                                 1 = Device interface handshake enabled for
                                                                 transitions. */
#else /* Word 0 - Little Endian */
        uint32_t devreqen              : 1;  /**< [  0:  0](SR/W) Device interface handshake enable.

                                                                 0 = Device interface handshake disabled for
                                                                 transitions.

                                                                 1 = Device interface handshake enabled for
                                                                 transitions. */
        uint32_t reserved_1_8          : 8;
        uint32_t pwr_devactiveen1      : 1;  /**< [  9:  9](SR/W) Enables the operating mode DEVPACTIVE[1]
                                                                 input.

                                                                 0 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 enabled. */
        uint32_t pwr_devactiveen2      : 1;  /**< [ 10: 10](SR/W) Enables the operating mode DEVPACTIVE[2]
                                                                 input.

                                                                 0 = DEVPACTIVE[2] input (MEM_RET)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[2] input (MEM_RET)
                                                                 enabled. */
        uint32_t pwr_devactiveen3      : 1;  /**< [ 11: 11](SR/W) Enables the operating mode DEVPACTIVE[3]
                                                                 input.

                                                                 0 = DEVPACTIVE[3] input (MEM_RET_EMU)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[3] input (MEM_RET_EMU)
                                                                 enabled. */
        uint32_t reserved_12           : 1;
        uint32_t pwr_devactiveen5      : 1;  /**< [ 13: 13](SR/W) Enables the operating mode DEVPACTIVE[5]
                                                                 input.

                                                                 0 = DEVPACTIVE[5] input (FULL_RET)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[5] input (FULL_RET)
                                                                 enabled. */
        uint32_t reserved_14           : 1;
        uint32_t pwr_devactiveen7      : 1;  /**< [ 15: 15](SR/W) Enables the operating mode DEVPACTIVE[7]
                                                                 input.

                                                                 0 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 enabled. */
        uint32_t pwr_devactiveen8      : 1;  /**< [ 16: 16](SR/W) Enables the operating mode DEVPACTIVE[8]
                                                                 input.

                                                                 0 = DEVPACTIVE[8] input (ON) disabled.

                                                                 1 = DEVPACTIVE[8] input (ON) enabled. */
        uint32_t pwr_devactiveen9      : 1;  /**< [ 17: 17](SR/W) Enables the operating mode DEVPACTIVE[9]
                                                                 input.

                                                                 0 = DEVPACTIVE[9] input (WARM_RST)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[9] input (WARM_RST)
                                                                 enabled. */
        uint32_t pwr_devactiveen10     : 1;  /**< [ 18: 18](SR/W) Enables the operating mode DEVPACTIVE[10]
                                                                 input.

                                                                 0 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 enabled. */
        uint32_t reserved_19_23        : 5;
        uint32_t op_devactiveen0       : 1;  /**< [ 24: 24](SR/W) Enables the operating mode DEVPACTIVE[16]
                                                                 input.

                                                                 0 = DEVPACTIVE[16] input (Lower L3 Cache
                                                                 RAMs active) disabled.

                                                                 1 = DEVPACTIVE[16] input (Lower L3 Cache
                                                                 RAMs active) enabled. */
        uint32_t op_devactiveen1       : 1;  /**< [ 25: 25](SR/W) Enables the operating mode DEVPACTIVE[17]
                                                                 input.

                                                                 0 = DEVPACTIVE[17] input (Upper L3 Cache
                                                                 RAMs active) disabled.

                                                                 1 = DEVPACTIVE[17] input (Upper L3 Cache
                                                                 RAMs active) enabled. */
        uint32_t op_devactiveen2       : 1;  /**< [ 26: 26](SR/W) Enables the operating mode DEVPACTIVE[18]
                                                                 input.

                                                                 0 = DEVPACTIVE[18] input (All L3 Cache
                                                                 Slices active) disabled.

                                                                 1 = DEVPACTIVE[18] input (All L3 Cache
                                                                 Slices active) enabled. */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pwcr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pwcr cavm_dsuubx_cluster_ppu_pwcr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PWCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PWCR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030020ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030020ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030020ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030020ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PWCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PWCR(a) cavm_dsuubx_cluster_ppu_pwcr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PWCR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PWCR(a) "DSUUBX_CLUSTER_PPU_PWCR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PWCR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PWCR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PWCR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pwpr
 *
 * DSUUB Cluster Power Policy Register
 * This register enables software to program both power and operating mode policy. It also contains
 * related settings including the enable for dynamic transitions and the lock enable.
 *
 * This register does not reflect the current power mode value. The current power mode of the
 * domain is reflected in the Power Status Register (DSUUB_PPU_PWSR).
 */
union cavm_dsuubx_cluster_ppu_pwpr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pwpr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t op_dyn_en             : 1;  /**< [ 24: 24](SR/W) Operating mode dynamic transition enable.

                                                                 0 = Dynamic transitions disabled for operating modes.

                                                                 1 = Dynamic transitions enabled for operating modes,
                                                                 allowing transitions to be initiated by changes on
                                                                 operating mode DEVACTIVE inputs. */
        uint32_t reserved_20_23        : 4;
        uint32_t op_policy             : 4;  /**< [ 19: 16](SR/W) Operating mode policy.

                                                                 When static operating mode transitions are enabled, OP_
                                                                 DYN_EN is set to 0b0, then this is the target operating
                                                                 mode for the PPU.

                                                                 When dynamic operating mode transitions are enabled,
                                                                 OP_DYN_EN is set to 0b1, then this is the minimum
                                                                 operating mode for the PPU.

                                                                 0b0000 = OPMODE_00: ONE_SLICE_SF_ONLY_ON: One
                                                                 L3 Cache slice is operational, the Cache RAM is
                                                                 powered down.

                                                                 0b0001 = OPMODE_01: ONE_SLICE_HALF_RAM_ON: One
                                                                 L3 Cache slice is operational, half of the Cache
                                                                 RAMs are powered on.

                                                                 0b0011 = OPMODE_03: ONE_SLICE_FULL_RAM_ON: One
                                                                 L3 Cache slice is operational, all of the Cache RAMs
                                                                 are powered on.

                                                                 0b0100 = OPMODE_04: ALL_SLICE_SF_ONLY_ON: All L3
                                                                 Cache slices are operational, the Cache RAMs in
                                                                 each slice are powered down.

                                                                 0b0101 = OPMODE_05: ALL_SLICE_HALF_RAM_ON: All
                                                                 L3 Cache slices are operational, half of the Cache
                                                                 RAMs are powered on.

                                                                 0b0111 = OPMODE_07: ALL_SLICE_FULL_RAM_ON: All L3
                                                                 Cache slices are operational, all of the Cache RAMs
                                                                 are powered on. */
        uint32_t reserved_13_15        : 3;
        uint32_t lock_en               : 1;  /**< [ 12: 12](SR/W) Lock enable bit.

                                                                 0 = Lock feature disabled.

                                                                 1 = Lock feature enabled. */
        uint32_t reserved_9_11         : 3;
        uint32_t pwr_dyn_en            : 1;  /**< [  8:  8](SR/W) Power mode dynamic transition enable.

                                                                 0 = Dynamic transitions disabled for power modes.

                                                                 1 = Dynamic transitions enabled for power modes,
                                                                 allowing transitions to be initiated by changes on
                                                                 power mode DEVACTIVE inputs. */
        uint32_t reserved_4_7          : 4;
        uint32_t pwr_policy            : 4;  /**< [  3:  0](SR/W) Power mode policy.

                                                                 When static power mode transitions are enabled, PWR_
                                                                 DYN_EN is set to 0b0, this is the target power mode for
                                                                 the PPU.

                                                                 When dynamic power mode transitions are enabled, PWR_
                                                                 DYN_EN is set to 0b1, this is the minimum power mode
                                                                 for the PPU.

                                                                 0b0000 = OFF. Logic off and RAM off.

                                                                 0b0001 = OFF_EMU. Emulated Off. Logic on with RAM
                                                                 on. This mode is used to emulate the functional
                                                                 condition of OFF without removing power.

                                                                 0b0010 = MEM_RET. Memory Retention. Logic off with RAM
                                                                 retained.

                                                                 0b0011 = MEM_RET_EMU. Emulated Memory Retention.
                                                                 Logic on with RAM on. This mode is used to
                                                                 emulate the functional condition of MEM_RET
                                                                 without removing power.

                                                                 0b0111 = FUNC_RET. Functional Retention. Logic on with L3
                                                                 Cache and Snoop Filter retained.

                                                                 0b1000 = ON. Logic on with RAM on, cluster is functional.

                                                                 0b1001 = WARM_RST. Warm Reset. Warm reset application
                                                                 with logic and RAM on.

                                                                 0b1010 = DBG_RECOV. Debug Recovery Reset. Warm reset
                                                                 application with logic and RAM on. */
#else /* Word 0 - Little Endian */
        uint32_t pwr_policy            : 4;  /**< [  3:  0](SR/W) Power mode policy.

                                                                 When static power mode transitions are enabled, PWR_
                                                                 DYN_EN is set to 0b0, this is the target power mode for
                                                                 the PPU.

                                                                 When dynamic power mode transitions are enabled, PWR_
                                                                 DYN_EN is set to 0b1, this is the minimum power mode
                                                                 for the PPU.

                                                                 0b0000 = OFF. Logic off and RAM off.

                                                                 0b0001 = OFF_EMU. Emulated Off. Logic on with RAM
                                                                 on. This mode is used to emulate the functional
                                                                 condition of OFF without removing power.

                                                                 0b0010 = MEM_RET. Memory Retention. Logic off with RAM
                                                                 retained.

                                                                 0b0011 = MEM_RET_EMU. Emulated Memory Retention.
                                                                 Logic on with RAM on. This mode is used to
                                                                 emulate the functional condition of MEM_RET
                                                                 without removing power.

                                                                 0b0111 = FUNC_RET. Functional Retention. Logic on with L3
                                                                 Cache and Snoop Filter retained.

                                                                 0b1000 = ON. Logic on with RAM on, cluster is functional.

                                                                 0b1001 = WARM_RST. Warm Reset. Warm reset application
                                                                 with logic and RAM on.

                                                                 0b1010 = DBG_RECOV. Debug Recovery Reset. Warm reset
                                                                 application with logic and RAM on. */
        uint32_t reserved_4_7          : 4;
        uint32_t pwr_dyn_en            : 1;  /**< [  8:  8](SR/W) Power mode dynamic transition enable.

                                                                 0 = Dynamic transitions disabled for power modes.

                                                                 1 = Dynamic transitions enabled for power modes,
                                                                 allowing transitions to be initiated by changes on
                                                                 power mode DEVACTIVE inputs. */
        uint32_t reserved_9_11         : 3;
        uint32_t lock_en               : 1;  /**< [ 12: 12](SR/W) Lock enable bit.

                                                                 0 = Lock feature disabled.

                                                                 1 = Lock feature enabled. */
        uint32_t reserved_13_15        : 3;
        uint32_t op_policy             : 4;  /**< [ 19: 16](SR/W) Operating mode policy.

                                                                 When static operating mode transitions are enabled, OP_
                                                                 DYN_EN is set to 0b0, then this is the target operating
                                                                 mode for the PPU.

                                                                 When dynamic operating mode transitions are enabled,
                                                                 OP_DYN_EN is set to 0b1, then this is the minimum
                                                                 operating mode for the PPU.

                                                                 0b0000 = OPMODE_00: ONE_SLICE_SF_ONLY_ON: One
                                                                 L3 Cache slice is operational, the Cache RAM is
                                                                 powered down.

                                                                 0b0001 = OPMODE_01: ONE_SLICE_HALF_RAM_ON: One
                                                                 L3 Cache slice is operational, half of the Cache
                                                                 RAMs are powered on.

                                                                 0b0011 = OPMODE_03: ONE_SLICE_FULL_RAM_ON: One
                                                                 L3 Cache slice is operational, all of the Cache RAMs
                                                                 are powered on.

                                                                 0b0100 = OPMODE_04: ALL_SLICE_SF_ONLY_ON: All L3
                                                                 Cache slices are operational, the Cache RAMs in
                                                                 each slice are powered down.

                                                                 0b0101 = OPMODE_05: ALL_SLICE_HALF_RAM_ON: All
                                                                 L3 Cache slices are operational, half of the Cache
                                                                 RAMs are powered on.

                                                                 0b0111 = OPMODE_07: ALL_SLICE_FULL_RAM_ON: All L3
                                                                 Cache slices are operational, all of the Cache RAMs
                                                                 are powered on. */
        uint32_t reserved_20_23        : 4;
        uint32_t op_dyn_en             : 1;  /**< [ 24: 24](SR/W) Operating mode dynamic transition enable.

                                                                 0 = Dynamic transitions disabled for operating modes.

                                                                 1 = Dynamic transitions enabled for operating modes,
                                                                 allowing transitions to be initiated by changes on
                                                                 operating mode DEVACTIVE inputs. */
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pwpr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pwpr cavm_dsuubx_cluster_ppu_pwpr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PWPR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PWPR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030000ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030000ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030000ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030000ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PWPR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PWPR(a) cavm_dsuubx_cluster_ppu_pwpr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PWPR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PWPR(a) "DSUUBX_CLUSTER_PPU_PWPR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PWPR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PWPR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PWPR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_pwsr
 *
 * DSUUB Cluster Power Status Register
 * This read-only register contains status information for the power mode, operating mode, dynamic
 * transitions, and lock feature.
 */
union cavm_dsuubx_cluster_ppu_pwsr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_pwsr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t op_dyn_status         : 1;  /**< [ 24: 24](SRO/H) Operating mode dynamic transition status.

                                                                 There might be a delay in dynamic transitions
                                                                 becoming active or inactive if the PPU is transitioning
                                                                 when DSUUB_PPU_PWPR.OP_DYN_EN is programmed.

                                                                 0 = Dynamic transitions disabled for operating
                                                                 modes.

                                                                 1 = Dynamic transitions enabled for operating
                                                                 modes. */
        uint32_t reserved_20_23        : 4;
        uint32_t op_status             : 4;  /**< [ 19: 16](SRO/H) Operating mode status.

                                                                 These bits reflect the current operating mode of the
                                                                 PPU.

                                                                 In the OFF, OFF_EMU, DBG_RECOV, and WARM_
                                                                 RST power modes, this field reflects the current
                                                                 programmed OP_POLICY even though the operating
                                                                 mode DEVPSTATE output bits are set to zero.

                                                                 0b0000 = OPMODE_00: ONE_SLICE_SF_ONLY_ON:
                                                                 One L3 Cache slice is operational, the Cache
                                                                 RAM is powered down.

                                                                 0b0001 = OPMODE_01: ONE_SLICE_HALF_RAM_ON:
                                                                 One L3 Cache slice is operational, half of the
                                                                 Cache RAMs are powered on.

                                                                 0b0011 = OPMODE_03: ONE_SLICE_FULL_RAM_ON:
                                                                 One L3 Cache slice is operational, all of the
                                                                 Cache RAMs are powered on.

                                                                 0b0100 = OPMODE_04: ALL_SLICE_SF_ONLY_ON: All
                                                                 L3 Cache slices are operational, the Cache
                                                                 RAMs in each slice are powered down.

                                                                 0b0101 = OPMODE_05: ALL_SLICE_HALF_RAM_ON:
                                                                 All L3 Cache slices are operational, half of the
                                                                 Cache RAMs are powered on.

                                                                 0b0111 = OPMODE_07: ALL_SLICE_FULL_RAM_ON:
                                                                 All L3 Cache slices are operational, all of the
                                                                 Cache RAMs are powered on. */
        uint32_t reserved_13_15        : 3;
        uint32_t lock_status           : 1;  /**< [ 12: 12](SRO/H) Lock status.

                                                                 0 = The PPU is not locked in the current mode.

                                                                 1 = The PPU is locked in the current mode. */
        uint32_t reserved_9_11         : 3;
        uint32_t pwr_dyn_status        : 1;  /**< [  8:  8](SRO/H) Power mode dynamic transition status.

                                                                 There might be a delay in dynamic transitions
                                                                 becoming active or inactive if the PPU is transitioning
                                                                 when DSUUB_PPU_PWPR.DYN_EN is programmed.

                                                                 0 = Dynamic transitions disabled for power
                                                                 modes.

                                                                 1 = Dynamic transitions enabled for power modes. */
        uint32_t reserved_4_7          : 4;
        uint32_t pwr_status            : 4;  /**< [  3:  0](SRO/H) Power mode status.

                                                                 These bits reflect the current power mode of the
                                                                 PPU.

                                                                 0b0000 = OFF. Logic off and RAM off.

                                                                 0b0001 = OFF_EMU. Emulated Off. Logic on with
                                                                 RAM on. This mode is used to emulate the
                                                                 functional condition of OFF without removing
                                                                 power.

                                                                 0b0010 = MEM_RET. Memory Retention. Logic off with
                                                                 RAM retained.

                                                                 0b0011 = MEM_RET_EMU. Emulated Memory
                                                                 Retention. Logic on with RAM on. This mode
                                                                 is used to emulate the functional condition of
                                                                 MEM_RET without removing power.

                                                                 0b0111 = FUNC_RET. Functional Retention. Logic on
                                                                 with L3 Cache and Snoop Filter retained.

                                                                 0b1000 = ON. Logic on with RAM on, cluster is
                                                                 functional.

                                                                 0b1001 = WARM_RST. Warm Reset. Warm reset
                                                                 application with logic and RAM on.

                                                                 0b1010 = DBG_RECOV. Debug Recovery Reset. Warm
                                                                 reset application with logic and RAM on. */
#else /* Word 0 - Little Endian */
        uint32_t pwr_status            : 4;  /**< [  3:  0](SRO/H) Power mode status.

                                                                 These bits reflect the current power mode of the
                                                                 PPU.

                                                                 0b0000 = OFF. Logic off and RAM off.

                                                                 0b0001 = OFF_EMU. Emulated Off. Logic on with
                                                                 RAM on. This mode is used to emulate the
                                                                 functional condition of OFF without removing
                                                                 power.

                                                                 0b0010 = MEM_RET. Memory Retention. Logic off with
                                                                 RAM retained.

                                                                 0b0011 = MEM_RET_EMU. Emulated Memory
                                                                 Retention. Logic on with RAM on. This mode
                                                                 is used to emulate the functional condition of
                                                                 MEM_RET without removing power.

                                                                 0b0111 = FUNC_RET. Functional Retention. Logic on
                                                                 with L3 Cache and Snoop Filter retained.

                                                                 0b1000 = ON. Logic on with RAM on, cluster is
                                                                 functional.

                                                                 0b1001 = WARM_RST. Warm Reset. Warm reset
                                                                 application with logic and RAM on.

                                                                 0b1010 = DBG_RECOV. Debug Recovery Reset. Warm
                                                                 reset application with logic and RAM on. */
        uint32_t reserved_4_7          : 4;
        uint32_t pwr_dyn_status        : 1;  /**< [  8:  8](SRO/H) Power mode dynamic transition status.

                                                                 There might be a delay in dynamic transitions
                                                                 becoming active or inactive if the PPU is transitioning
                                                                 when DSUUB_PPU_PWPR.DYN_EN is programmed.

                                                                 0 = Dynamic transitions disabled for power
                                                                 modes.

                                                                 1 = Dynamic transitions enabled for power modes. */
        uint32_t reserved_9_11         : 3;
        uint32_t lock_status           : 1;  /**< [ 12: 12](SRO/H) Lock status.

                                                                 0 = The PPU is not locked in the current mode.

                                                                 1 = The PPU is locked in the current mode. */
        uint32_t reserved_13_15        : 3;
        uint32_t op_status             : 4;  /**< [ 19: 16](SRO/H) Operating mode status.

                                                                 These bits reflect the current operating mode of the
                                                                 PPU.

                                                                 In the OFF, OFF_EMU, DBG_RECOV, and WARM_
                                                                 RST power modes, this field reflects the current
                                                                 programmed OP_POLICY even though the operating
                                                                 mode DEVPSTATE output bits are set to zero.

                                                                 0b0000 = OPMODE_00: ONE_SLICE_SF_ONLY_ON:
                                                                 One L3 Cache slice is operational, the Cache
                                                                 RAM is powered down.

                                                                 0b0001 = OPMODE_01: ONE_SLICE_HALF_RAM_ON:
                                                                 One L3 Cache slice is operational, half of the
                                                                 Cache RAMs are powered on.

                                                                 0b0011 = OPMODE_03: ONE_SLICE_FULL_RAM_ON:
                                                                 One L3 Cache slice is operational, all of the
                                                                 Cache RAMs are powered on.

                                                                 0b0100 = OPMODE_04: ALL_SLICE_SF_ONLY_ON: All
                                                                 L3 Cache slices are operational, the Cache
                                                                 RAMs in each slice are powered down.

                                                                 0b0101 = OPMODE_05: ALL_SLICE_HALF_RAM_ON:
                                                                 All L3 Cache slices are operational, half of the
                                                                 Cache RAMs are powered on.

                                                                 0b0111 = OPMODE_07: ALL_SLICE_FULL_RAM_ON:
                                                                 All L3 Cache slices are operational, all of the
                                                                 Cache RAMs are powered on. */
        uint32_t reserved_20_23        : 4;
        uint32_t op_dyn_status         : 1;  /**< [ 24: 24](SRO/H) Operating mode dynamic transition status.

                                                                 There might be a delay in dynamic transitions
                                                                 becoming active or inactive if the PPU is transitioning
                                                                 when DSUUB_PPU_PWPR.OP_DYN_EN is programmed.

                                                                 0 = Dynamic transitions disabled for operating
                                                                 modes.

                                                                 1 = Dynamic transitions enabled for operating
                                                                 modes. */
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_pwsr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_pwsr cavm_dsuubx_cluster_ppu_pwsr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PWSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_PWSR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030008ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030008ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030008ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030008ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_PWSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_PWSR(a) cavm_dsuubx_cluster_ppu_pwsr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_PWSR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_PWSR(a) "DSUUBX_CLUSTER_PPU_PWSR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_PWSR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_PWSR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_PWSR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_stsr
 *
 * DSUUB Cluster Stored Status Register
 * This register is reserved for P-Channel PPUs.
 */
union cavm_dsuubx_cluster_ppu_stsr
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_stsr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t stored_devdeny        : 8;  /**< [  7:  0](SRO/H) Status of the DEVDENY signals from the last device
                                                                 interface Q-Channel transition. This field is reserved.

                                                                 0b00000000 = Reserved for P-Channel PPUs. */
#else /* Word 0 - Little Endian */
        uint32_t stored_devdeny        : 8;  /**< [  7:  0](SRO/H) Status of the DEVDENY signals from the last device
                                                                 interface Q-Channel transition. This field is reserved.

                                                                 0b00000000 = Reserved for P-Channel PPUs. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_stsr_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_stsr cavm_dsuubx_cluster_ppu_stsr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_STSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_STSR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200030018ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200030018ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200030018ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200030018ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_STSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_STSR(a) cavm_dsuubx_cluster_ppu_stsr_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_STSR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_STSR(a) "DSUUBX_CLUSTER_PPU_STSR"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_STSR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_STSR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_STSR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_cluster_ppu_unlk
 *
 * DSUUB Cluster Unlock Register
 * This register allows software to unlock the PPU from a locked power mode.
 */
union cavm_dsuubx_cluster_ppu_unlk
{
    uint32_t u;
    struct cavm_dsuubx_cluster_ppu_unlk_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t unlock                : 1;  /**< [  0:  0](SR/W) When is written to this bit the PPU is unlocked from a locked
                                                                 power mode. A read always returns 0b0. */
#else /* Word 0 - Little Endian */
        uint32_t unlock                : 1;  /**< [  0:  0](SR/W) When is written to this bit the PPU is unlocked from a locked
                                                                 power mode. A read always returns 0b0. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cluster_ppu_unlk_s cn; */
};
typedef union cavm_dsuubx_cluster_ppu_unlk cavm_dsuubx_cluster_ppu_unlk_t;

static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_UNLK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTER_PPU_UNLK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e20003001cll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e20003001cll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e20003001cll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e20003001cll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTER_PPU_UNLK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTER_PPU_UNLK(a) cavm_dsuubx_cluster_ppu_unlk_t
#define bustype_CAVM_DSUUBX_CLUSTER_PPU_UNLK(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CLUSTER_PPU_UNLK(a) "DSUUBX_CLUSTER_PPU_UNLK"
#define device_bar_CAVM_DSUUBX_CLUSTER_PPU_UNLK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTER_PPU_UNLK(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTER_PPU_UNLK(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterbusqos
 *
 * DSUUB Cluster Bus QoS Control Register
 * Determines the value driven on the CHI bus QoS field.
 */
union cavm_dsuubx_clusterbusqos
{
    uint64_t u;
    struct cavm_dsuubx_clusterbusqos_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t qos                   : 4;  /**< [  3:  0](SR/W) Valid driven on the CHI bus QoS field. */
#else /* Word 0 - Little Endian */
        uint64_t qos                   : 4;  /**< [  3:  0](SR/W) Valid driven on the CHI bus QoS field. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterbusqos_s cn; */
};
typedef union cavm_dsuubx_clusterbusqos cavm_dsuubx_clusterbusqos_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERBUSQOS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERBUSQOS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200000048ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200000048ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200000048ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200000048ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTERBUSQOS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERBUSQOS(a) cavm_dsuubx_clusterbusqos_t
#define bustype_CAVM_DSUUBX_CLUSTERBUSQOS(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERBUSQOS(a) "DSUUBX_CLUSTERBUSQOS"
#define device_bar_CAVM_DSUUBX_CLUSTERBUSQOS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERBUSQOS(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERBUSQOS(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clustercfr
 *
 * DSUUB Cluster Configuration Register
 * Contains details of the hardware configuration of the cluster.
 */
union cavm_dsuubx_clustercfr
{
    uint64_t u;
    struct cavm_dsuubx_clustercfr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t nodes                 : 3;  /**< [ 63: 61](SRO) Number of transport nodes.
                                                                 0b000 = Direct connect.
                                                                 0b001 = One node.
                                                                 0b010 = Two nodes.
                                                                 0b011 = Three nodes.
                                                                 0b100 = Four nodes.
                                                                 0b101 = Eight nodes. */
        uint64_t sfway                 : 2;  /**< [ 60: 59](SRO) Number of Snoop Filter ways.
                                                                 0b00 = 4 ways.
                                                                 0b01 = 6 ways.
                                                                 0b10 = 8 ways
                                                                 0b11 = 12 ways. */
        uint64_t sfidx                 : 4;  /**< [ 58: 55](SRO) Log2 of the number of snoop filter indexes. */
        uint64_t reserved_54           : 1;
        uint64_t l3slc                 : 3;  /**< [ 53: 51](SRO) Number of L3 cache slices.
                                                                 0b000 = Eight L3 cache slices.
                                                                 0b001 = One L3 cache slice.
                                                                 0b010 = Two L3 cache slices.
                                                                 0b100 = Four L3 cache slices. */
        uint64_t reserved_45_50        : 6;
        uint64_t crs                   : 16; /**< [ 44: 29](SRO) Core register slices. Each pair of bits represents a core with
                                                                 [30:29] for core 0 up to [44:43] for core 7.
                                                                 0b0000000000000000 = No register slices.
                                                                 0b0000000000000001 = One register slice.
                                                                 0b0000000000000010 = Two register slices. */
        uint64_t trsv                  : 2;  /**< [ 28: 27](SRO) Transport register slices, vertical.
                                                                 0b00 = No register slices.
                                                                 0b01 = One register slice.
                                                                 0b10 = Two register slices. */
        uint64_t trsh                  : 2;  /**< [ 26: 25](SRO) Transport register slices, horizontal.
                                                                 0b00 = No register slices.
                                                                 0b01 = One register slice.
                                                                 0b10 = Two register slices. */
        uint64_t reserved_24           : 1;
        uint64_t pp                    : 1;  /**< [ 23: 23](SRO) Peripheral port presence.
                                                                 0 = No peripheral port present.
                                                                 1 = Peripheral port present. */
        uint64_t ppw                   : 1;  /**< [ 22: 22](SRO) Peripheral port width.
                                                                 0 = 64 bit data width.
                                                                 1 = 256 bit data width. */
        uint64_t reserved_21           : 1;
        uint64_t acp                   : 1;  /**< [ 20: 20](SRO) ACP interface presence.
                                                                 0 = No ACP interface present.
                                                                 1 = ACP interface present. */
        uint64_t acpw                  : 1;  /**< [ 19: 19](SRO) ACP interface width.
                                                                 0 = 128 bit data width.
                                                                 1 = 256 bit data width. */
        uint64_t reserved_18           : 1;
        uint64_t mas                   : 1;  /**< [ 17: 17](SRO) Master bus interface type.
                                                                 0 = AXI interface.
                                                                 1 = CHI interface. */
        uint64_t nummas                : 2;  /**< [ 16: 15](SRO) Number of Master interfaces.
                                                                 0b00 = One master.
                                                                 0b01 = Two masters.
                                                                 0b10 = Three masters.
                                                                 0b11 = Four masters. */
        uint64_t ecc                   : 1;  /**< [ 14: 14](SRO) SCU-L3 ECC configuration.
                                                                 0 = SCU-L3 is configured with no ECC.
                                                                 1 = SCU-L3 is configured with ECC. */
        uint64_t rdslc                 : 1;  /**< [ 13: 13](SRO) L3 data RAM read register slice.
                                                                 0 = No register slice present.
                                                                 1 = Register slice present. */
        uint64_t rdlat                 : 1;  /**< [ 12: 12](SRO) L3 Data RAM read latency.
                                                                 0 = Two cycle output delay from L3 data RAMs.
                                                                 1 = Three cycle output delay from L3 data RAMs. */
        uint64_t wrlat                 : 2;  /**< [ 11: 10](SRO) L3 Data RAM write latency.
                                                                 0b00 = One cycle input delay from L3 data RAMs.
                                                                 0b01 = Two cycle input delay from L3 data RAMs.
                                                                 0b11 = Two cycle input delay plus a one cycle hold. */
        uint64_t l3                    : 1;  /**< [  9:  9](SRO) L3 cache presence.
                                                                 0 = No L3 cache present.
                                                                 1 = L3 cache present. */
        uint64_t reserved_8            : 1;
        uint64_t numpe                 : 4;  /**< [  7:  4](SRO) Number of PEs present in the cluster. For single threaded
                                                                 cores, this number will be the same as bits [2:0]; for multithreaded
                                                                 cores it will be larger. */
        uint64_t reserved_3            : 1;
        uint64_t numcore               : 3;  /**< [  2:  0](SRO) Number of cores present in the cluster.
                                                                 0b000 = One core.
                                                                 0b001 = Two cores.
                                                                 0b010 = Three cores.
                                                                 0b011 = Four cores.
                                                                 0b100 = Five cores.
                                                                 0b101 = Six cores.
                                                                 0b110 = Seven cores.
                                                                 0b111 = Eight cores. */
#else /* Word 0 - Little Endian */
        uint64_t numcore               : 3;  /**< [  2:  0](SRO) Number of cores present in the cluster.
                                                                 0b000 = One core.
                                                                 0b001 = Two cores.
                                                                 0b010 = Three cores.
                                                                 0b011 = Four cores.
                                                                 0b100 = Five cores.
                                                                 0b101 = Six cores.
                                                                 0b110 = Seven cores.
                                                                 0b111 = Eight cores. */
        uint64_t reserved_3            : 1;
        uint64_t numpe                 : 4;  /**< [  7:  4](SRO) Number of PEs present in the cluster. For single threaded
                                                                 cores, this number will be the same as bits [2:0]; for multithreaded
                                                                 cores it will be larger. */
        uint64_t reserved_8            : 1;
        uint64_t l3                    : 1;  /**< [  9:  9](SRO) L3 cache presence.
                                                                 0 = No L3 cache present.
                                                                 1 = L3 cache present. */
        uint64_t wrlat                 : 2;  /**< [ 11: 10](SRO) L3 Data RAM write latency.
                                                                 0b00 = One cycle input delay from L3 data RAMs.
                                                                 0b01 = Two cycle input delay from L3 data RAMs.
                                                                 0b11 = Two cycle input delay plus a one cycle hold. */
        uint64_t rdlat                 : 1;  /**< [ 12: 12](SRO) L3 Data RAM read latency.
                                                                 0 = Two cycle output delay from L3 data RAMs.
                                                                 1 = Three cycle output delay from L3 data RAMs. */
        uint64_t rdslc                 : 1;  /**< [ 13: 13](SRO) L3 data RAM read register slice.
                                                                 0 = No register slice present.
                                                                 1 = Register slice present. */
        uint64_t ecc                   : 1;  /**< [ 14: 14](SRO) SCU-L3 ECC configuration.
                                                                 0 = SCU-L3 is configured with no ECC.
                                                                 1 = SCU-L3 is configured with ECC. */
        uint64_t nummas                : 2;  /**< [ 16: 15](SRO) Number of Master interfaces.
                                                                 0b00 = One master.
                                                                 0b01 = Two masters.
                                                                 0b10 = Three masters.
                                                                 0b11 = Four masters. */
        uint64_t mas                   : 1;  /**< [ 17: 17](SRO) Master bus interface type.
                                                                 0 = AXI interface.
                                                                 1 = CHI interface. */
        uint64_t reserved_18           : 1;
        uint64_t acpw                  : 1;  /**< [ 19: 19](SRO) ACP interface width.
                                                                 0 = 128 bit data width.
                                                                 1 = 256 bit data width. */
        uint64_t acp                   : 1;  /**< [ 20: 20](SRO) ACP interface presence.
                                                                 0 = No ACP interface present.
                                                                 1 = ACP interface present. */
        uint64_t reserved_21           : 1;
        uint64_t ppw                   : 1;  /**< [ 22: 22](SRO) Peripheral port width.
                                                                 0 = 64 bit data width.
                                                                 1 = 256 bit data width. */
        uint64_t pp                    : 1;  /**< [ 23: 23](SRO) Peripheral port presence.
                                                                 0 = No peripheral port present.
                                                                 1 = Peripheral port present. */
        uint64_t reserved_24           : 1;
        uint64_t trsh                  : 2;  /**< [ 26: 25](SRO) Transport register slices, horizontal.
                                                                 0b00 = No register slices.
                                                                 0b01 = One register slice.
                                                                 0b10 = Two register slices. */
        uint64_t trsv                  : 2;  /**< [ 28: 27](SRO) Transport register slices, vertical.
                                                                 0b00 = No register slices.
                                                                 0b01 = One register slice.
                                                                 0b10 = Two register slices. */
        uint64_t crs                   : 16; /**< [ 44: 29](SRO) Core register slices. Each pair of bits represents a core with
                                                                 [30:29] for core 0 up to [44:43] for core 7.
                                                                 0b0000000000000000 = No register slices.
                                                                 0b0000000000000001 = One register slice.
                                                                 0b0000000000000010 = Two register slices. */
        uint64_t reserved_45_50        : 6;
        uint64_t l3slc                 : 3;  /**< [ 53: 51](SRO) Number of L3 cache slices.
                                                                 0b000 = Eight L3 cache slices.
                                                                 0b001 = One L3 cache slice.
                                                                 0b010 = Two L3 cache slices.
                                                                 0b100 = Four L3 cache slices. */
        uint64_t reserved_54           : 1;
        uint64_t sfidx                 : 4;  /**< [ 58: 55](SRO) Log2 of the number of snoop filter indexes. */
        uint64_t sfway                 : 2;  /**< [ 60: 59](SRO) Number of Snoop Filter ways.
                                                                 0b00 = 4 ways.
                                                                 0b01 = 6 ways.
                                                                 0b10 = 8 ways
                                                                 0b11 = 12 ways. */
        uint64_t nodes                 : 3;  /**< [ 63: 61](SRO) Number of transport nodes.
                                                                 0b000 = Direct connect.
                                                                 0b001 = One node.
                                                                 0b010 = Two nodes.
                                                                 0b011 = Three nodes.
                                                                 0b100 = Four nodes.
                                                                 0b101 = Eight nodes. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clustercfr_s cn; */
};
typedef union cavm_dsuubx_clustercfr cavm_dsuubx_clustercfr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERCFR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERCFR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200000050ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200000050ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200000050ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200000050ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTERCFR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERCFR(a) cavm_dsuubx_clustercfr_t
#define bustype_CAVM_DSUUBX_CLUSTERCFR(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERCFR(a) "DSUUBX_CLUSTERCFR"
#define device_bar_CAVM_DSUUBX_CLUSTERCFR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERCFR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERCFR(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterectlr
 *
 * DSUUB Cluster Extended Control Register
 * This register should be used for dynamically changing implementation specific
 * control bits.
 */
union cavm_dsuubx_clusterectlr
{
    uint64_t u;
    struct cavm_dsuubx_clusterectlr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_46_63        : 18;
        uint64_t dcc                   : 2;  /**< [ 45: 44](SR/W) Downstream cache control. Controls whether evictions of
                                                                 clean cachelines send data on the CHI interface. Set this
                                                                 based on whether there is a cache on the path to memory.
                                                                 0b00 = Disables sending data when clean cachelines are evicted.
                                                                 0b01 = Enables sending WriteEvictFull transactions when
                                                                 Unique Clean cachelines are evicted. Shared Clean
                                                                 cacheline evictions do not send data.
                                                                 0b10 = Enables sending WriteEvictOrEvict transactions
                                                                 when Unique Clean or Shared Clean cachelines
                                                                 are evicted. This is the reset value for non-Direct
                                                                 Connect configurations. */
        uint64_t efc                   : 1;  /**< [ 43: 43](SR/W) Eviction flush control. Controls whether hardware cache
                                                                 flushes and DC CISW instructions send data when evicting
                                                                 clean cachelines on the CHI interface.
                                                                 0 = Disables sending data when hardware cache flushes
                                                                 or DC CISW instructions evict a clean cacheline.
                                                                 Sending of Evict transactions is controlled by
                                                                 Downstream Snoop Filter Present (DSFP). This is the
                                                                 reset value.
                                                                 1 = Sending of data when hardware cache flushes or
                                                                 DC CISW instructions evict clean cachelines is
                                                                 controlled by Downstream Cache Control (DCC).
                                                                 Sending of Evict transactions is controlled by
                                                                 Downstream Snoop Filter Present (DSFP). */
        uint64_t dsfp                  : 1;  /**< [ 42: 42](SR/W) Downstream snoop filter present. Enables sending Evict
                                                                 transactions on the CHI interface when clean cachelines
                                                                 are evicted without data. Enable this if there is at least one
                                                                 snoop filter in the path to memory.
                                                                 0 = Disables sending Evict transactions when clean
                                                                 cachelines are evicted without data.
                                                                 1 = Enables sending of Evict transactions when clean
                                                                 cachelines are evicted without data. This is the reset
                                                                 value. */
        uint64_t reserved_18_41        : 24;
        uint64_t l3rdlat               : 1;  /**< [ 17: 17](SR/W) L3 data RAM read (output) latency.
                                                                 0 = The L3 data RAM output latency is 2 cycles.
                                                                 1 = The L3 data RAM output latency is 3 cycles. */
        uint64_t l3wrlat               : 2;  /**< [ 16: 15](SR/W) L3 data RAM write (input) latency.
                                                                 0b00 = The L3 data RAM input latency is 1 cycle with an
                                                                 additional hold cycle.
                                                                 0b01 = The L3 data RAM input latency is 2 cycles without
                                                                 an additional hold cycle.
                                                                 0b10 = The L3 data RAM input latency is 2 cycles with an
                                                                 additional hold cycle. This is only usable if the L3
                                                                 data RAM output latency is 3 cycles. */
        uint64_t reserved_11_14        : 4;
        uint64_t pfmtch                : 3;  /**< [ 10:  8](SR/W) Prefetch matching delay. Controls the amount of tie a
                                                                 prefetch waits for a possible match with a later read.
                                                                 Encoded as powers of 2, from 1-128.
                                                                 0b000 = Wait for 1 cycle.
                                                                 0b001 = Wait for 2 cycles.
                                                                 0b010 = Wait for 4 cycles.
                                                                 0b011 = Wait for 8 cycles.
                                                                 0b100 = Wait for 16 cycles.
                                                                 0b101 = Wait for 32 cycles.
                                                                 0b110 = Wait for 64 cycles.
                                                                 0b111 = Wait for 128 cycles. */
        uint64_t disatom               : 1;  /**< [  7:  7](SR/W) Disable cacheable atomics being sent to the interconnect.
                                                                 0 = Cacheable atomics will be sent to the interconnect if
                                                                 the BROADCASTATOMIC pin is set.
                                                                 1 = Cacheable atomics will be handled inside the cluster */
        uint64_t nol3stash             : 2;  /**< [  6:  5](SR/W) CPU StashOnce request behavior when L3 is not present
                                                                 or powered down.
                                                                 0b00 = Stashes are sent out to the interconnect, if supported.
                                                                 0b01 = Normal read request sent to interconnect.
                                                                 0b10 = StashOnce has no effect. */
        uint64_t enpoisn               : 1;  /**< [  4:  4](SR/W) Interconnect data poisoning support for the CHI Master(s).
                                                                 This bit is ignored for AXI configurations, which never
                                                                 support poisoning.
                                                                 0 = Interconnect does not support data poisoning, so
                                                                 nCLUSTERERRIREQ will be asserted when poisoned
                                                                 data is evicted from the cluster or returned on a
                                                                 snoop.
                                                                 1 = Interconnect supports data poisoning, so no error
                                                                 recovery interrupt will be generated when poisoned
                                                                 data is evicted from the cluster or returned on a
                                                                 snoop. */
        uint64_t disevict              : 1;  /**< [  3:  3](SR/W) Clean line eviction notification disable.
                                                                 0 = Enables notification to the interconnect of clean
                                                                 lines being evicted.
                                                                 1 = Disables notification when clean lines are evicted.
                                                                 For use only when the interconnect does not
                                                                 contain a system cache or snoop filter. */
        uint64_t disevpwr              : 1;  /**< [  2:  2](SR/W) WriteEvict disable on cache powerdown.
                                                                 0 = Allow WriteEvicts to occur when powering down the cache.
                                                                 1 = Do not allow WriteEvicts to occur when powering down the cache. */
        uint64_t enpoisnpp             : 1;  /**< [  1:  1](SR/W) Interconnect data poisoning support for the CHI Peripheral
                                                                 Port. This bit is ignored for AXI configurations, which never
                                                                 support poisoning.
                                                                 0 = Interconnect does not support data poisoning, so
                                                                 nCLUSTERERRIREQ will be asserted when poisoned
                                                                 data is evicted from the cluster or returned on a
                                                                 snoop.
                                                                 1 = Interconnect supports data poisoning, so no error
                                                                 recovery interrupt will be generated when poisoned
                                                                 data is evicted from the cluster or returned on a
                                                                 snoop. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t enpoisnpp             : 1;  /**< [  1:  1](SR/W) Interconnect data poisoning support for the CHI Peripheral
                                                                 Port. This bit is ignored for AXI configurations, which never
                                                                 support poisoning.
                                                                 0 = Interconnect does not support data poisoning, so
                                                                 nCLUSTERERRIREQ will be asserted when poisoned
                                                                 data is evicted from the cluster or returned on a
                                                                 snoop.
                                                                 1 = Interconnect supports data poisoning, so no error
                                                                 recovery interrupt will be generated when poisoned
                                                                 data is evicted from the cluster or returned on a
                                                                 snoop. */
        uint64_t disevpwr              : 1;  /**< [  2:  2](SR/W) WriteEvict disable on cache powerdown.
                                                                 0 = Allow WriteEvicts to occur when powering down the cache.
                                                                 1 = Do not allow WriteEvicts to occur when powering down the cache. */
        uint64_t disevict              : 1;  /**< [  3:  3](SR/W) Clean line eviction notification disable.
                                                                 0 = Enables notification to the interconnect of clean
                                                                 lines being evicted.
                                                                 1 = Disables notification when clean lines are evicted.
                                                                 For use only when the interconnect does not
                                                                 contain a system cache or snoop filter. */
        uint64_t enpoisn               : 1;  /**< [  4:  4](SR/W) Interconnect data poisoning support for the CHI Master(s).
                                                                 This bit is ignored for AXI configurations, which never
                                                                 support poisoning.
                                                                 0 = Interconnect does not support data poisoning, so
                                                                 nCLUSTERERRIREQ will be asserted when poisoned
                                                                 data is evicted from the cluster or returned on a
                                                                 snoop.
                                                                 1 = Interconnect supports data poisoning, so no error
                                                                 recovery interrupt will be generated when poisoned
                                                                 data is evicted from the cluster or returned on a
                                                                 snoop. */
        uint64_t nol3stash             : 2;  /**< [  6:  5](SR/W) CPU StashOnce request behavior when L3 is not present
                                                                 or powered down.
                                                                 0b00 = Stashes are sent out to the interconnect, if supported.
                                                                 0b01 = Normal read request sent to interconnect.
                                                                 0b10 = StashOnce has no effect. */
        uint64_t disatom               : 1;  /**< [  7:  7](SR/W) Disable cacheable atomics being sent to the interconnect.
                                                                 0 = Cacheable atomics will be sent to the interconnect if
                                                                 the BROADCASTATOMIC pin is set.
                                                                 1 = Cacheable atomics will be handled inside the cluster */
        uint64_t pfmtch                : 3;  /**< [ 10:  8](SR/W) Prefetch matching delay. Controls the amount of tie a
                                                                 prefetch waits for a possible match with a later read.
                                                                 Encoded as powers of 2, from 1-128.
                                                                 0b000 = Wait for 1 cycle.
                                                                 0b001 = Wait for 2 cycles.
                                                                 0b010 = Wait for 4 cycles.
                                                                 0b011 = Wait for 8 cycles.
                                                                 0b100 = Wait for 16 cycles.
                                                                 0b101 = Wait for 32 cycles.
                                                                 0b110 = Wait for 64 cycles.
                                                                 0b111 = Wait for 128 cycles. */
        uint64_t reserved_11_14        : 4;
        uint64_t l3wrlat               : 2;  /**< [ 16: 15](SR/W) L3 data RAM write (input) latency.
                                                                 0b00 = The L3 data RAM input latency is 1 cycle with an
                                                                 additional hold cycle.
                                                                 0b01 = The L3 data RAM input latency is 2 cycles without
                                                                 an additional hold cycle.
                                                                 0b10 = The L3 data RAM input latency is 2 cycles with an
                                                                 additional hold cycle. This is only usable if the L3
                                                                 data RAM output latency is 3 cycles. */
        uint64_t l3rdlat               : 1;  /**< [ 17: 17](SR/W) L3 data RAM read (output) latency.
                                                                 0 = The L3 data RAM output latency is 2 cycles.
                                                                 1 = The L3 data RAM output latency is 3 cycles. */
        uint64_t reserved_18_41        : 24;
        uint64_t dsfp                  : 1;  /**< [ 42: 42](SR/W) Downstream snoop filter present. Enables sending Evict
                                                                 transactions on the CHI interface when clean cachelines
                                                                 are evicted without data. Enable this if there is at least one
                                                                 snoop filter in the path to memory.
                                                                 0 = Disables sending Evict transactions when clean
                                                                 cachelines are evicted without data.
                                                                 1 = Enables sending of Evict transactions when clean
                                                                 cachelines are evicted without data. This is the reset
                                                                 value. */
        uint64_t efc                   : 1;  /**< [ 43: 43](SR/W) Eviction flush control. Controls whether hardware cache
                                                                 flushes and DC CISW instructions send data when evicting
                                                                 clean cachelines on the CHI interface.
                                                                 0 = Disables sending data when hardware cache flushes
                                                                 or DC CISW instructions evict a clean cacheline.
                                                                 Sending of Evict transactions is controlled by
                                                                 Downstream Snoop Filter Present (DSFP). This is the
                                                                 reset value.
                                                                 1 = Sending of data when hardware cache flushes or
                                                                 DC CISW instructions evict clean cachelines is
                                                                 controlled by Downstream Cache Control (DCC).
                                                                 Sending of Evict transactions is controlled by
                                                                 Downstream Snoop Filter Present (DSFP). */
        uint64_t dcc                   : 2;  /**< [ 45: 44](SR/W) Downstream cache control. Controls whether evictions of
                                                                 clean cachelines send data on the CHI interface. Set this
                                                                 based on whether there is a cache on the path to memory.
                                                                 0b00 = Disables sending data when clean cachelines are evicted.
                                                                 0b01 = Enables sending WriteEvictFull transactions when
                                                                 Unique Clean cachelines are evicted. Shared Clean
                                                                 cacheline evictions do not send data.
                                                                 0b10 = Enables sending WriteEvictOrEvict transactions
                                                                 when Unique Clean or Shared Clean cachelines
                                                                 are evicted. This is the reset value for non-Direct
                                                                 Connect configurations. */
        uint64_t reserved_46_63        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterectlr_s cn; */
};
typedef union cavm_dsuubx_clusterectlr cavm_dsuubx_clusterectlr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERECTLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERECTLR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200000060ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200000060ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200000060ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200000060ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTERECTLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERECTLR(a) cavm_dsuubx_clusterectlr_t
#define bustype_CAVM_DSUUBX_CLUSTERECTLR(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERECTLR(a) "DSUUBX_CLUSTERECTLR"
#define device_bar_CAVM_DSUUBX_CLUSTERECTLR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERECTLR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERECTLR(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusteridr
 *
 * DSUUB Cluster Main Revision Register
 * Holds the revision and patch level of the cluster.
 */
union cavm_dsuubx_clusteridr
{
    uint64_t u;
    struct cavm_dsuubx_clusteridr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t variant               : 4;  /**< [  7:  4](SRO) An IMPLEMENTATION DEFINED variant number for the device. */
        uint64_t revision              : 4;  /**< [  3:  0](SRO) An IMPLEMENTATION DEFINED revision number for the device. */
#else /* Word 0 - Little Endian */
        uint64_t revision              : 4;  /**< [  3:  0](SRO) An IMPLEMENTATION DEFINED revision number for the device. */
        uint64_t variant               : 4;  /**< [  7:  4](SRO) An IMPLEMENTATION DEFINED variant number for the device. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusteridr_s cn; */
};
typedef union cavm_dsuubx_clusteridr cavm_dsuubx_clusteridr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERIDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200000000ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200000000ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200000000ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200000000ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTERIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERIDR(a) cavm_dsuubx_clusteridr_t
#define bustype_CAVM_DSUUBX_CLUSTERIDR(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERIDR(a) "DSUUBX_CLUSTERIDR"
#define device_bar_CAVM_DSUUBX_CLUSTERIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERIDR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERIDR(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterl3dnth0
 *
 * DSUUB Cluster L3 Downsize Threshold0 Register
 * This register is intended for use in algorithms for determining when to power up or
 * down cache portions.
 */
union cavm_dsuubx_clusterl3dnth0
{
    uint64_t u;
    struct cavm_dsuubx_clusterl3dnth0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t dnth0                 : 32; /**< [ 31:  0](SR/W) If all L3 ways are powered and the cache hit bandwidth falls below
                                                                 this threshold then the cache is downsized to half the ways. The
                                                                 value in this register is compared with the change in the cluster L3
                                                                 hit counter since the last time period. */
#else /* Word 0 - Little Endian */
        uint64_t dnth0                 : 32; /**< [ 31:  0](SR/W) If all L3 ways are powered and the cache hit bandwidth falls below
                                                                 this threshold then the cache is downsized to half the ways. The
                                                                 value in this register is compared with the change in the cluster L3
                                                                 hit counter since the last time period. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterl3dnth0_s cn; */
};
typedef union cavm_dsuubx_clusterl3dnth0 cavm_dsuubx_clusterl3dnth0_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERL3DNTH0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERL3DNTH0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200000028ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200000028ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200000028ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200000028ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTERL3DNTH0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERL3DNTH0(a) cavm_dsuubx_clusterl3dnth0_t
#define bustype_CAVM_DSUUBX_CLUSTERL3DNTH0(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERL3DNTH0(a) "DSUUBX_CLUSTERL3DNTH0"
#define device_bar_CAVM_DSUUBX_CLUSTERL3DNTH0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERL3DNTH0(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERL3DNTH0(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterl3dnth1
 *
 * DSUUB Cluster L3 Downsize Threshold1 Register
 * This register is intended for use in algorithms for determining when to power up or
 * down cache portions.
 */
union cavm_dsuubx_clusterl3dnth1
{
    uint64_t u;
    struct cavm_dsuubx_clusterl3dnth1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t dnth0                 : 32; /**< [ 31:  0](SR/W) If all L3 ways are powered and the cache hit bandwidth falls below
                                                                 this threshold then the cache is downsized to none the ways. The
                                                                 value in this register is compared with the change in the cluster L3
                                                                 hit counter since the last time period. */
#else /* Word 0 - Little Endian */
        uint64_t dnth0                 : 32; /**< [ 31:  0](SR/W) If all L3 ways are powered and the cache hit bandwidth falls below
                                                                 this threshold then the cache is downsized to none the ways. The
                                                                 value in this register is compared with the change in the cluster L3
                                                                 hit counter since the last time period. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterl3dnth1_s cn; */
};
typedef union cavm_dsuubx_clusterl3dnth1 cavm_dsuubx_clusterl3dnth1_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERL3DNTH1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERL3DNTH1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200000030ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200000030ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200000030ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200000030ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTERL3DNTH1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERL3DNTH1(a) cavm_dsuubx_clusterl3dnth1_t
#define bustype_CAVM_DSUUBX_CLUSTERL3DNTH1(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERL3DNTH1(a) "DSUUBX_CLUSTERL3DNTH1"
#define device_bar_CAVM_DSUUBX_CLUSTERL3DNTH1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERL3DNTH1(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERL3DNTH1(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterl3hit
 *
 * DSUUB Cluster L3 Hit Counter Register
 * This register is intended for use in algorithms for determining when to power up or
 * down cache portions.
 */
union cavm_dsuubx_clusterl3hit
{
    uint64_t u;
    struct cavm_dsuubx_clusterl3hit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t hitcnt                : 32; /**< [ 31:  0](SRO/H) Count of number of L3 hits, for use in portion control calculations. */
#else /* Word 0 - Little Endian */
        uint64_t hitcnt                : 32; /**< [ 31:  0](SRO/H) Count of number of L3 hits, for use in portion control calculations. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterl3hit_s cn; */
};
typedef union cavm_dsuubx_clusterl3hit cavm_dsuubx_clusterl3hit_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERL3HIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERL3HIT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200000018ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200000018ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200000018ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200000018ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTERL3HIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERL3HIT(a) cavm_dsuubx_clusterl3hit_t
#define bustype_CAVM_DSUUBX_CLUSTERL3HIT(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERL3HIT(a) "DSUUBX_CLUSTERL3HIT"
#define device_bar_CAVM_DSUUBX_CLUSTERL3HIT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERL3HIT(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERL3HIT(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterl3miss
 *
 * DSUUB Cluster L3 Miss Counter Register
 * This register is intended for use in algorithms for determining when to power up or
 * down cache portions.
 */
union cavm_dsuubx_clusterl3miss
{
    uint64_t u;
    struct cavm_dsuubx_clusterl3miss_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t misscnt               : 32; /**< [ 31:  0](SRO/H) Count of number of L3 misses, for use in portion control calculations. */
#else /* Word 0 - Little Endian */
        uint64_t misscnt               : 32; /**< [ 31:  0](SRO/H) Count of number of L3 misses, for use in portion control calculations. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterl3miss_s cn; */
};
typedef union cavm_dsuubx_clusterl3miss cavm_dsuubx_clusterl3miss_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERL3MISS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERL3MISS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200000020ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200000020ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200000020ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200000020ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTERL3MISS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERL3MISS(a) cavm_dsuubx_clusterl3miss_t
#define bustype_CAVM_DSUUBX_CLUSTERL3MISS(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERL3MISS(a) "DSUUBX_CLUSTERL3MISS"
#define device_bar_CAVM_DSUUBX_CLUSTERL3MISS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERL3MISS(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERL3MISS(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterl3upth0
 *
 * DSUUB Cluster L3 Upsize Threshold0 Register
 * This register is intended for use in algorithms for determining when to power up or
 * down cache portions.
 */
union cavm_dsuubx_clusterl3upth0
{
    uint64_t u;
    struct cavm_dsuubx_clusterl3upth0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t upth0                 : 32; /**< [ 31:  0](SR/W) If no L3 ways are powered and the cache miss bandwidth rises
                                                                 above this threshold then the cache is upsized to half the ways.
                                                                 The value in this register is compared with the change in the
                                                                 cluster L3 hit counter since the last time period. */
#else /* Word 0 - Little Endian */
        uint64_t upth0                 : 32; /**< [ 31:  0](SR/W) If no L3 ways are powered and the cache miss bandwidth rises
                                                                 above this threshold then the cache is upsized to half the ways.
                                                                 The value in this register is compared with the change in the
                                                                 cluster L3 hit counter since the last time period. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterl3upth0_s cn; */
};
typedef union cavm_dsuubx_clusterl3upth0 cavm_dsuubx_clusterl3upth0_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERL3UPTH0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERL3UPTH0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200000038ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200000038ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200000038ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200000038ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTERL3UPTH0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERL3UPTH0(a) cavm_dsuubx_clusterl3upth0_t
#define bustype_CAVM_DSUUBX_CLUSTERL3UPTH0(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERL3UPTH0(a) "DSUUBX_CLUSTERL3UPTH0"
#define device_bar_CAVM_DSUUBX_CLUSTERL3UPTH0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERL3UPTH0(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERL3UPTH0(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterl3upth1
 *
 * DSUUB Cluster L3 Upsize Threshold1 Register
 * This register is intended for use in algorithms for determining when to power up or
 * down cache portions.
 */
union cavm_dsuubx_clusterl3upth1
{
    uint64_t u;
    struct cavm_dsuubx_clusterl3upth1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t upth1                 : 32; /**< [ 31:  0](SR/W) If no L3 ways are powered and the cache miss bandwidth rises
                                                                 above this threshold then the cache is upsized to all of the ways.
                                                                 The value in this register is compared with the change in the
                                                                 cluster L3 hit counter since the last time period. */
#else /* Word 0 - Little Endian */
        uint64_t upth1                 : 32; /**< [ 31:  0](SR/W) If no L3 ways are powered and the cache miss bandwidth rises
                                                                 above this threshold then the cache is upsized to all of the ways.
                                                                 The value in this register is compared with the change in the
                                                                 cluster L3 hit counter since the last time period. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterl3upth1_s cn; */
};
typedef union cavm_dsuubx_clusterl3upth1 cavm_dsuubx_clusterl3upth1_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERL3UPTH1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERL3UPTH1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200000040ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200000040ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200000040ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200000040ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTERL3UPTH1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERL3UPTH1(a) cavm_dsuubx_clusterl3upth1_t
#define bustype_CAVM_DSUUBX_CLUSTERL3UPTH1(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERL3UPTH1(a) "DSUUBX_CLUSTERL3UPTH1"
#define device_bar_CAVM_DSUUBX_CLUSTERL3UPTH1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERL3UPTH1(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERL3UPTH1(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterpwrctlr
 *
 * DSUUB Cluster Power Control Register
 * This register controls power features of the cluster.
 */
union cavm_dsuubx_clusterpwrctlr
{
    uint64_t u;
    struct cavm_dsuubx_clusterpwrctlr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_19_63        : 45;
        uint64_t lslp                  : 1;  /**< [ 18: 18](SR/W) Enable L3 RAM light sleep. */
        uint64_t reserved_15_17        : 3;
        uint64_t autoprtn              : 3;  /**< [ 14: 12](SR/W) Enable automatic RAM power down and configure
                                                                 evaluation time period. Note that a shorter time period
                                                                 allows better responsiveness to changing workloads,
                                                                 however if it is too short then the cost of frequent resizing
                                                                 can be too high.
                                                                 0b000 = Disabled.
                                                                 0x1 = 8,192 architectural timer ticks, time period of 164us-819us.
                                                                 0x2 = 16,384 architectural timer ticks, time period of 328us-1.6ms.
                                                                 0x3 = 32,768 architectural timer ticks, time period of 655us-3.3ms.
                                                                 0x4 = 65,536 architectural timer ticks, time period of 1.3ms-6.6ms.
                                                                 0x5 = 131,072 architectural timer ticks, time period of 2.6ms-13ms.
                                                                 0x6 = 262,144 architectural timer ticks, time period of 5.2ms-26ms.
                                                                 0x7 = 524,288 architectural timer ticks, time period of 10ms-52ms. */
        uint64_t reserved_7_11         : 5;
        uint64_t slcrq                 : 1;  /**< [  6:  6](SR/W) Cache slice power request. These bits are passed to the PPU
                                                                 as an advisory request for which slices to power.
                                                                 0 = Request that one L3 cache slice is powered on.
                                                                 1 = Request that all L3 cache slices are powered on. */
        uint64_t prtnrq                : 2;  /**< [  5:  4](SR/W) Cache portion power request. These bits are passed to the
                                                                 PPU as an advisory request for which portions to power.
                                                                 Note that these bits are only used when AUTOPRTN bits are
                                                                 3'b000.
                                                                 0b00 = Request that none of the L3 cache portions in each slice is powered on.
                                                                 0b01 = Request that half of the L3 cache portions in each slice are powered on.
                                                                 0b11 = Request that both of the L3 cache portions in each slice are powered on. */
        uint64_t reserved_3            : 1;
        uint64_t retctl                : 3;  /**< [  2:  0](SR/W) L3 Data RAM retention control.
                                                                 0b000 = Disable the retention circuit.
                                                                 0b001 = 2 architectural timer ticks, 40ns-200ns minimum delay before retention.
                                                                 0b010 = 8 architectural timer ticks, 160ns-800ns minimum delay before retention.
                                                                 0b011 = 32 architectural timer ticks, 640ns-3,200ns minimum delay before retention.
                                                                 0b100 = 64 architectural timer ticks, 1280ns-6,400ns minimum delay before retention.
                                                                 0b101 = 128 architectural timer ticks, 2,560ns-12,800ns minimum delay before retention.
                                                                 0b110 = 256 architectural timer ticks, 5,120ns-25,600ns minimum delay before retention.
                                                                 0b111 = 512 architectural timer ticks, 10,240ns-51,200ns minimum delay before retention. */
#else /* Word 0 - Little Endian */
        uint64_t retctl                : 3;  /**< [  2:  0](SR/W) L3 Data RAM retention control.
                                                                 0b000 = Disable the retention circuit.
                                                                 0b001 = 2 architectural timer ticks, 40ns-200ns minimum delay before retention.
                                                                 0b010 = 8 architectural timer ticks, 160ns-800ns minimum delay before retention.
                                                                 0b011 = 32 architectural timer ticks, 640ns-3,200ns minimum delay before retention.
                                                                 0b100 = 64 architectural timer ticks, 1280ns-6,400ns minimum delay before retention.
                                                                 0b101 = 128 architectural timer ticks, 2,560ns-12,800ns minimum delay before retention.
                                                                 0b110 = 256 architectural timer ticks, 5,120ns-25,600ns minimum delay before retention.
                                                                 0b111 = 512 architectural timer ticks, 10,240ns-51,200ns minimum delay before retention. */
        uint64_t reserved_3            : 1;
        uint64_t prtnrq                : 2;  /**< [  5:  4](SR/W) Cache portion power request. These bits are passed to the
                                                                 PPU as an advisory request for which portions to power.
                                                                 Note that these bits are only used when AUTOPRTN bits are
                                                                 3'b000.
                                                                 0b00 = Request that none of the L3 cache portions in each slice is powered on.
                                                                 0b01 = Request that half of the L3 cache portions in each slice are powered on.
                                                                 0b11 = Request that both of the L3 cache portions in each slice are powered on. */
        uint64_t slcrq                 : 1;  /**< [  6:  6](SR/W) Cache slice power request. These bits are passed to the PPU
                                                                 as an advisory request for which slices to power.
                                                                 0 = Request that one L3 cache slice is powered on.
                                                                 1 = Request that all L3 cache slices are powered on. */
        uint64_t reserved_7_11         : 5;
        uint64_t autoprtn              : 3;  /**< [ 14: 12](SR/W) Enable automatic RAM power down and configure
                                                                 evaluation time period. Note that a shorter time period
                                                                 allows better responsiveness to changing workloads,
                                                                 however if it is too short then the cost of frequent resizing
                                                                 can be too high.
                                                                 0b000 = Disabled.
                                                                 0x1 = 8,192 architectural timer ticks, time period of 164us-819us.
                                                                 0x2 = 16,384 architectural timer ticks, time period of 328us-1.6ms.
                                                                 0x3 = 32,768 architectural timer ticks, time period of 655us-3.3ms.
                                                                 0x4 = 65,536 architectural timer ticks, time period of 1.3ms-6.6ms.
                                                                 0x5 = 131,072 architectural timer ticks, time period of 2.6ms-13ms.
                                                                 0x6 = 262,144 architectural timer ticks, time period of 5.2ms-26ms.
                                                                 0x7 = 524,288 architectural timer ticks, time period of 10ms-52ms. */
        uint64_t reserved_15_17        : 3;
        uint64_t lslp                  : 1;  /**< [ 18: 18](SR/W) Enable L3 RAM light sleep. */
        uint64_t reserved_19_63        : 45;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterpwrctlr_s cn; */
};
typedef union cavm_dsuubx_clusterpwrctlr cavm_dsuubx_clusterpwrctlr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERPWRCTLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERPWRCTLR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200000010ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200000010ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200000010ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200000010ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTERPWRCTLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERPWRCTLR(a) cavm_dsuubx_clusterpwrctlr_t
#define bustype_CAVM_DSUUBX_CLUSTERPWRCTLR(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERPWRCTLR(a) "DSUUBX_CLUSTERPWRCTLR"
#define device_bar_CAVM_DSUUBX_CLUSTERPWRCTLR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERPWRCTLR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERPWRCTLR(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_clusterrevidr
 *
 * DSUUB Cluster ECO ID Register
 * Enables ECO patches to be applied to the cluster level to be identified by software.
 */
union cavm_dsuubx_clusterrevidr
{
    uint64_t u;
    struct cavm_dsuubx_clusterrevidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ecoid                 : 64; /**< [ 63:  0](SRO) Contains ECO information. Refer to the errata documentation for any
                                                                 bit allocations. */
#else /* Word 0 - Little Endian */
        uint64_t ecoid                 : 64; /**< [ 63:  0](SRO) Contains ECO information. Refer to the errata documentation for any
                                                                 bit allocations. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_clusterrevidr_s cn; */
};
typedef union cavm_dsuubx_clusterrevidr cavm_dsuubx_clusterrevidr_t;

static inline uint64_t CAVM_DSUUBX_CLUSTERREVIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CLUSTERREVIDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200000008ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200000008ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200000008ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200000008ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CLUSTERREVIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CLUSTERREVIDR(a) cavm_dsuubx_clusterrevidr_t
#define bustype_CAVM_DSUUBX_CLUSTERREVIDR(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CLUSTERREVIDR(a) "DSUUBX_CLUSTERREVIDR"
#define device_bar_CAVM_DSUUBX_CLUSTERREVIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CLUSTERREVIDR(a) (a)
#define arguments_CAVM_DSUUBX_CLUSTERREVIDR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_aidr
 *
 * DSUUB Core Architecture Identification Register
 * This register identifies the PPU architecture revision.
 */
union cavm_dsuubx_core_ppu_aidr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_aidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t arch_rev_major        : 4;  /**< [  7:  4](SRO) PPU architecture major revision.

                                                                 0b0001 = PPU architecture major revision 1. */
        uint32_t arch_rev_minor        : 4;  /**< [  3:  0](SRO) PPU architecture minor revision.

                                                                 0b0001 = PPU architecture minor revision 1. */
#else /* Word 0 - Little Endian */
        uint32_t arch_rev_minor        : 4;  /**< [  3:  0](SRO) PPU architecture minor revision.

                                                                 0b0001 = PPU architecture minor revision 1. */
        uint32_t arch_rev_major        : 4;  /**< [  7:  4](SRO) PPU architecture major revision.

                                                                 0b0001 = PPU architecture major revision 1. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_aidr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_aidr cavm_dsuubx_core_ppu_aidr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_AIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_AIDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080fccll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080fccll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080fccll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080fccll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_AIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_AIDR(a) cavm_dsuubx_core_ppu_aidr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_AIDR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_AIDR(a) "DSUUBX_CORE_PPU_AIDR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_AIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_AIDR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_AIDR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_aimr
 *
 * DSUUB Core Additional Interrupt Mask Register
 * This register controls the events that assert the interrupt output. Additional event
 * masking controls
 * are in the Interrupt Mask Register (PPU_IMR), Input Edge Sensitivity Register (PPU_IESR), and the
 * Operating Mode Active Edge Sensitivity Register (PPU_OPSR).
 *
 * When an interrupt event is masked an occurrence of the event does not set the corresponding bit
 * in the interrupt status register.
 */
union cavm_dsuubx_core_ppu_aimr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_aimr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t dyn_deny_irq_mask     : 1;  /**< [  2:  2](SR/W) Dynamic transition denial event mask

                                                                 0 = Dynamic transition denial event enabled.

                                                                 1 = Dynamic transition denial event masked. */
        uint32_t dyn_accept_irq_mask   : 1;  /**< [  1:  1](SR/W) Dynamic transition acceptance event mask

                                                                 0 = Dynamic transition acceptance event
                                                                 enabled.

                                                                 1 = Dynamic transition acceptance event
                                                                 masked. */
        uint32_t unspt_policy_irq_mask : 1;  /**< [  0:  0](SR/W) Unsupported policy event mask

                                                                 0 = Unsupported policy event enabled.

                                                                 1 = Unsupported policy event masked. */
#else /* Word 0 - Little Endian */
        uint32_t unspt_policy_irq_mask : 1;  /**< [  0:  0](SR/W) Unsupported policy event mask

                                                                 0 = Unsupported policy event enabled.

                                                                 1 = Unsupported policy event masked. */
        uint32_t dyn_accept_irq_mask   : 1;  /**< [  1:  1](SR/W) Dynamic transition acceptance event mask

                                                                 0 = Dynamic transition acceptance event
                                                                 enabled.

                                                                 1 = Dynamic transition acceptance event
                                                                 masked. */
        uint32_t dyn_deny_irq_mask     : 1;  /**< [  2:  2](SR/W) Dynamic transition denial event mask

                                                                 0 = Dynamic transition denial event enabled.

                                                                 1 = Dynamic transition denial event masked. */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_aimr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_aimr cavm_dsuubx_core_ppu_aimr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_AIMR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_AIMR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080034ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080034ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080034ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080034ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_AIMR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_AIMR(a) cavm_dsuubx_core_ppu_aimr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_AIMR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_AIMR(a) "DSUUBX_CORE_PPU_AIMR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_AIMR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_AIMR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_AIMR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_aisr
 *
 * DSUUB Core Additional Interrupt Status Register
 * This register contains information about events causing the assertion of the
 * interrupt output. It is
 * also used to clear interrupt events.
 *
 * A bit set to 1 indicates the event asserted the interrupt output. Multiple events can be active
 * at the same time. When an interrupt event is masked by the corresponding bit in PPU_AIMR, an
 * occurrence of that event does not set the status bit.
 * A write of 1 to a set event bit clears that event. A write of 0 has no effect. The interrupt
 * output stays HIGH until all status bits in the Interrupt Status Register (PPU_ISR)
 * and the Additional
 * Interrupt Status Register (PPU_AISR) are set to 0b0.
 *
 * When an interrupt status is set to 1 in this register it sets the OTHER_IRQ bit in the Interrupt
 * Status Register (PPU_ISR). Status bits in this register (PPU_AISR) are only cleared
 * by writing to this
 * register.
 */
union cavm_dsuubx_core_ppu_aisr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_aisr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t dyn_deny_irq          : 1;  /**< [  2:  2](SR/W1C/H) Dynamic transition denial event status

                                                                 0 = No dynamic transition denial event.

                                                                 1 = A dynamic transition denial event asserted
                                                                 the interrupt output. */
        uint32_t dyn_accept_irq        : 1;  /**< [  1:  1](SR/W1C/H) Dynamic transition acceptance event status

                                                                 0 = No dynamic transition acceptance event.

                                                                 1 = A dynamic transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t unspt_policy_irq      : 1;  /**< [  0:  0](SR/W1C/H) Unsupported policy event status

                                                                 0 = No unsupported policy event.

                                                                 1 = An unsupported policy event asserted the
                                                                 interrupt output. */
#else /* Word 0 - Little Endian */
        uint32_t unspt_policy_irq      : 1;  /**< [  0:  0](SR/W1C/H) Unsupported policy event status

                                                                 0 = No unsupported policy event.

                                                                 1 = An unsupported policy event asserted the
                                                                 interrupt output. */
        uint32_t dyn_accept_irq        : 1;  /**< [  1:  1](SR/W1C/H) Dynamic transition acceptance event status

                                                                 0 = No dynamic transition acceptance event.

                                                                 1 = A dynamic transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t dyn_deny_irq          : 1;  /**< [  2:  2](SR/W1C/H) Dynamic transition denial event status

                                                                 0 = No dynamic transition denial event.

                                                                 1 = A dynamic transition denial event asserted
                                                                 the interrupt output. */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_aisr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_aisr cavm_dsuubx_core_ppu_aisr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_AISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_AISR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e20008003cll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e20008003cll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e20008003cll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e20008003cll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_AISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_AISR(a) cavm_dsuubx_core_ppu_aisr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_AISR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_AISR(a) "DSUUBX_CORE_PPU_AISR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_AISR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_AISR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_AISR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_cidr0
 *
 * DSUUB Core PPU Component Identification Register 0
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_core_ppu_cidr0
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_cidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](SRO) CoreSight component identification preamble.

                                                                 0b00001101 = CoreSight component identification preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](SRO) CoreSight component identification preamble.

                                                                 0b00001101 = CoreSight component identification preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_cidr0_s cn; */
};
typedef union cavm_dsuubx_core_ppu_cidr0 cavm_dsuubx_core_ppu_cidr0_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_CIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_CIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080ff0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080ff0ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080ff0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080ff0ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_CIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_CIDR0(a) cavm_dsuubx_core_ppu_cidr0_t
#define bustype_CAVM_DSUUBX_CORE_PPU_CIDR0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_CIDR0(a) "DSUUBX_CORE_PPU_CIDR0"
#define device_bar_CAVM_DSUUBX_CORE_PPU_CIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_CIDR0(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_CIDR0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_cidr1
 *
 * DSUUB Core PPU Component Identification Register 1
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_core_ppu_cidr1
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_cidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t clas                  : 4;  /**< [  7:  4](SRO) CoreSight component class.

                                                                 0b1111 = CoreLink component. */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](SRO) CoreSight component identification preamble.

                                                                 0b0000 = CoreSight component identification preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](SRO) CoreSight component identification preamble.

                                                                 0b0000 = CoreSight component identification preamble. */
        uint32_t clas                  : 4;  /**< [  7:  4](SRO) CoreSight component class.

                                                                 0b1111 = CoreLink component. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_cidr1_s cn; */
};
typedef union cavm_dsuubx_core_ppu_cidr1 cavm_dsuubx_core_ppu_cidr1_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_CIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_CIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080ff4ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080ff4ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080ff4ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080ff4ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_CIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_CIDR1(a) cavm_dsuubx_core_ppu_cidr1_t
#define bustype_CAVM_DSUUBX_CORE_PPU_CIDR1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_CIDR1(a) "DSUUBX_CORE_PPU_CIDR1"
#define device_bar_CAVM_DSUUBX_CORE_PPU_CIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_CIDR1(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_CIDR1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_cidr2
 *
 * DSUUB Core PPU Component Identification Register 2
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_core_ppu_cidr2
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_cidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](SRO) CoreSight component identification preamble.

                                                                 0b00000101 = CoreSight component identification preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](SRO) CoreSight component identification preamble.

                                                                 0b00000101 = CoreSight component identification preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_cidr2_s cn; */
};
typedef union cavm_dsuubx_core_ppu_cidr2 cavm_dsuubx_core_ppu_cidr2_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_CIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_CIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080ff8ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080ff8ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080ff8ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080ff8ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_CIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_CIDR2(a) cavm_dsuubx_core_ppu_cidr2_t
#define bustype_CAVM_DSUUBX_CORE_PPU_CIDR2(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_CIDR2(a) "DSUUBX_CORE_PPU_CIDR2"
#define device_bar_CAVM_DSUUBX_CORE_PPU_CIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_CIDR2(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_CIDR2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_dcdr0
 *
 * DSUUB Core Device Control Delay Configuration Register 0
 * This register is used to program device control delay parameters.
 */
union cavm_dsuubx_core_ppu_dcdr0
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_dcdr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t rst_hwstat_dly        : 8;  /**< [ 23: 16](SR/W) Delay from reset de-assertion to HWSTAT update. */
        uint32_t iso_clken_dly         : 8;  /**< [ 15:  8](SR/W) Delay from isolation enable de-assertion to clock
                                                                 enable assertion. */
        uint32_t clken_rst_dly         : 8;  /**< [  7:  0](SR/W) Delay from clock enable assertion to reset de-
                                                                 assertion. */
#else /* Word 0 - Little Endian */
        uint32_t clken_rst_dly         : 8;  /**< [  7:  0](SR/W) Delay from clock enable assertion to reset de-
                                                                 assertion. */
        uint32_t iso_clken_dly         : 8;  /**< [ 15:  8](SR/W) Delay from isolation enable de-assertion to clock
                                                                 enable assertion. */
        uint32_t rst_hwstat_dly        : 8;  /**< [ 23: 16](SR/W) Delay from reset de-assertion to HWSTAT update. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_dcdr0_s cn; */
};
typedef union cavm_dsuubx_core_ppu_dcdr0 cavm_dsuubx_core_ppu_dcdr0_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_DCDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_DCDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080170ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080170ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080170ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080170ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_DCDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_DCDR0(a) cavm_dsuubx_core_ppu_dcdr0_t
#define bustype_CAVM_DSUUBX_CORE_PPU_DCDR0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_DCDR0(a) "DSUUBX_CORE_PPU_DCDR0"
#define device_bar_CAVM_DSUUBX_CORE_PPU_DCDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_DCDR0(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_DCDR0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_dcdr1
 *
 * DSUUB Core Device Control Delay Configuration Register 1
 * This register is used to program device control delay parameters.
 */
union cavm_dsuubx_core_ppu_dcdr1
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_dcdr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t clken_iso_dly         : 8;  /**< [ 15:  8](SR/W) Delay from clock enable de-assertion to isolation enable
                                                                 assertion. */
        uint32_t iso_rst_dly           : 8;  /**< [  7:  0](SR/W) Delay from isolation enable assertion to reset assertion. */
#else /* Word 0 - Little Endian */
        uint32_t iso_rst_dly           : 8;  /**< [  7:  0](SR/W) Delay from isolation enable assertion to reset assertion. */
        uint32_t clken_iso_dly         : 8;  /**< [ 15:  8](SR/W) Delay from clock enable de-assertion to isolation enable
                                                                 assertion. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_dcdr1_s cn; */
};
typedef union cavm_dsuubx_core_ppu_dcdr1 cavm_dsuubx_core_ppu_dcdr1_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_DCDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_DCDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080174ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080174ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080174ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080174ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_DCDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_DCDR1(a) cavm_dsuubx_core_ppu_dcdr1_t
#define bustype_CAVM_DSUUBX_CORE_PPU_DCDR1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_DCDR1(a) "DSUUBX_CORE_PPU_DCDR1"
#define device_bar_CAVM_DSUUBX_CORE_PPU_DCDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_DCDR1(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_DCDR1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_disr
 *
 * DSUUB Core Device Interface Input Current Status Register
 * This read-only register contains status reflecting the values of the device interface inputs.
 */
union cavm_dsuubx_core_ppu_disr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_disr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_11_31        : 21;
        uint32_t pwr_devactive_status  : 11; /**< [ 10:  0](SRO/H) Status of the power mode DEVPACTIVE
                                                                 inputs.

                                                                 0b00000000000 = Minimum mode OFF.

                                                                 0b0000000001x = Minimum mode OFF_EMU.

                                                                 0b000001xxxxx = Minimum mode FULL_RET.

                                                                 0b0001xxxxxxx = Minimum mode FUNC_RET.

                                                                 0b001xxxxxxxx = Minimum mode ON.

                                                                 0b01xxxxxxxxx = Minimum mode WARM_RST.

                                                                 0b1xxxxxxxxxx = Minimum mode DBG_RECOV. */
#else /* Word 0 - Little Endian */
        uint32_t pwr_devactive_status  : 11; /**< [ 10:  0](SRO/H) Status of the power mode DEVPACTIVE
                                                                 inputs.

                                                                 0b00000000000 = Minimum mode OFF.

                                                                 0b0000000001x = Minimum mode OFF_EMU.

                                                                 0b000001xxxxx = Minimum mode FULL_RET.

                                                                 0b0001xxxxxxx = Minimum mode FUNC_RET.

                                                                 0b001xxxxxxxx = Minimum mode ON.

                                                                 0b01xxxxxxxxx = Minimum mode WARM_RST.

                                                                 0b1xxxxxxxxxx = Minimum mode DBG_RECOV. */
        uint32_t reserved_11_31        : 21;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_disr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_disr cavm_dsuubx_core_ppu_disr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_DISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_DISR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080010ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080010ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080010ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080010ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_DISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_DISR(a) cavm_dsuubx_core_ppu_disr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_DISR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_DISR(a) "DSUUBX_CORE_PPU_DISR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_DISR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_DISR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_DISR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_fulrr
 *
 * DSUUB Core Full Retention RAM Configuration Register
 * This register controls bits [15:8] of the PCSMPSTATE output when in FULL_RET mode. These
 * outputs are used by the PCSM to configure the logic regions and RAMs that are retained.
 */
union cavm_dsuubx_core_ppu_fulrr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_fulrr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t full_ret_ram_cfg      : 8;  /**< [  7:  0](SR/W) FULL_RET RAM configuration bits. */
#else /* Word 0 - Little Endian */
        uint32_t full_ret_ram_cfg      : 8;  /**< [  7:  0](SR/W) FULL_RET RAM configuration bits. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_fulrr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_fulrr cavm_dsuubx_core_ppu_fulrr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_FULRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_FULRR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080054ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080054ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080054ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080054ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_FULRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_FULRR(a) cavm_dsuubx_core_ppu_fulrr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_FULRR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_FULRR(a) "DSUUBX_CORE_PPU_FULRR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_FULRR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_FULRR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_FULRR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_funrr
 *
 * DSUUB Core Functional Retention RAM Configuration Register
 * This register is reserved.
 */
union cavm_dsuubx_core_ppu_funrr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_funrr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t func_ret_ram_cfg      : 8;  /**< [  7:  0](SR/W) FUNC_RET RAM configuration bits. If FUNC_RET
                                                                 is not supported, or FUNC_RET_RAM_REG_CFG is
                                                                 set to 0b0, this field is reserved.

                                                                 0b00000000 = Reserved */
#else /* Word 0 - Little Endian */
        uint32_t func_ret_ram_cfg      : 8;  /**< [  7:  0](SR/W) FUNC_RET RAM configuration bits. If FUNC_RET
                                                                 is not supported, or FUNC_RET_RAM_REG_CFG is
                                                                 set to 0b0, this field is reserved.

                                                                 0b00000000 = Reserved */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_funrr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_funrr cavm_dsuubx_core_ppu_funrr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_FUNRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_FUNRR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080050ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080050ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080050ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080050ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_FUNRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_FUNRR(a) cavm_dsuubx_core_ppu_funrr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_FUNRR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_FUNRR(a) "DSUUBX_CORE_PPU_FUNRR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_FUNRR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_FUNRR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_FUNRR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_idr0
 *
 * DSUUB Core PPU Identification Register 0
 * This read-only register contains information on the type and number of channels on the device
 * interface and power and operating modes supported.
 *
 * Additional information on optional features can be found in the PPU Identification Register 1
 * (PPU_IDR1).
 */
union cavm_dsuubx_core_ppu_idr0
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_idr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t dyn_wrm_rst_spt       : 1;  /**< [ 29: 29](SRO) Dynamic WARM_RST support.

                                                                 1 = Dynamic WARM_RST supported. */
        uint32_t dyn_on_spt            : 1;  /**< [ 28: 28](SRO) Dynamic ON support.

                                                                 1 = Dynamic ON supported. */
        uint32_t dyn_func_ret_spt      : 1;  /**< [ 27: 27](SRO) Dynamic DYN_FUNC_RET_SPT support.

                                                                 1 = Dynamic DYN_FUNC_RET_SPT
                                                                 supported. */
        uint32_t dyn_full_ret_spt      : 1;  /**< [ 26: 26](SRO) Dynamic DYN_FULL_RET_SPT support.

                                                                 1 = Dynamic DYN_FULL_RET_SPT
                                                                 supported. */
        uint32_t dyn_mem_off_spt       : 1;  /**< [ 25: 25](SRO) Dynamic MEM_OFF support.

                                                                 0 = Dynamic MEM_OFF not supported. */
        uint32_t dyn_lgc_ret_spt       : 1;  /**< [ 24: 24](SRO) Dynamic LOGIC_RET support.

                                                                 0 = Dynamic LOGIC_RET not supported. */
        uint32_t dyn_mem_ret_emu_spt   : 1;  /**< [ 23: 23](SRO) Dynamic DYN_MEM_RET_EMU_SPT support.

                                                                 0 = Dynamic DYN_MEM_RET_EMU_SPT
                                                                 not supported. */
        uint32_t dyn_mem_ret_spt       : 1;  /**< [ 22: 22](SRO) Dynamic DYN_MEM_RET_SPT support.

                                                                 0 = Dynamic DYN_MEM_RET_SPT not
                                                                 supported. */
        uint32_t dyn_off_emu_spt       : 1;  /**< [ 21: 21](SRO) Dynamic OFF_EMU support.

                                                                 1 = Dynamic OFF_EMU supported. */
        uint32_t dyn_off_spt           : 1;  /**< [ 20: 20](SRO) Dynamic OFF support.

                                                                 1 = Dynamic OFF supported. */
        uint32_t reserved_19           : 1;
        uint32_t sta_dbg_recov_spt     : 1;  /**< [ 18: 18](SRO) DBG_RECOV support.

                                                                 1 = DBG_RECOV supported. */
        uint32_t sta_wrm_rst_spt       : 1;  /**< [ 17: 17](SRO) WARM_RST support.

                                                                 1 = WRM_RST supported. */
        uint32_t sta_on_spt            : 1;  /**< [ 16: 16](SRO) ON support.

                                                                 1 = ON supported. */
        uint32_t sta_func_ret_spt      : 1;  /**< [ 15: 15](SRO) FUNC_RET support.

                                                                 1 = FUNC_RET supported. */
        uint32_t sta_full_ret_spt      : 1;  /**< [ 14: 14](SRO) FULL_RET support.

                                                                 1 = FULL_RET supported. */
        uint32_t sta_mem_off_spt       : 1;  /**< [ 13: 13](SRO) MEM_OFF support.

                                                                 0 = MEM_OFF not supported. */
        uint32_t sta_lgc_ret_spt       : 1;  /**< [ 12: 12](SRO) LOGIC_RET support.

                                                                 0 = LOGIC_RET not supported. */
        uint32_t sta_mem_ret_emu_spt   : 1;  /**< [ 11: 11](SRO) MEM_RET_EMU support.

                                                                 0 = MEM_RET_EMU not supported. */
        uint32_t sta_mem_ret_spt       : 1;  /**< [ 10: 10](SRO) MEM_RET support.

                                                                 0 = MEM_RET not supported. */
        uint32_t sta_off_emu_spt       : 1;  /**< [  9:  9](SRO) OFF_EMU support.

                                                                 1 = OFF_EMU supported. */
        uint32_t sta_off_spt           : 1;  /**< [  8:  8](SRO) OFF support.

                                                                 1 = OFF supported. */
        uint32_t num_opmode            : 4;  /**< [  7:  4](SRO) No. of operating modes supported, minus 1.

                                                                 0b0000 = 1 operating mode supported. */
        uint32_t devchan               : 4;  /**< [  3:  0](SRO) No. of Device Interface Channels.

                                                                 0b0000 = 0 (P-channel PPU). */
#else /* Word 0 - Little Endian */
        uint32_t devchan               : 4;  /**< [  3:  0](SRO) No. of Device Interface Channels.

                                                                 0b0000 = 0 (P-channel PPU). */
        uint32_t num_opmode            : 4;  /**< [  7:  4](SRO) No. of operating modes supported, minus 1.

                                                                 0b0000 = 1 operating mode supported. */
        uint32_t sta_off_spt           : 1;  /**< [  8:  8](SRO) OFF support.

                                                                 1 = OFF supported. */
        uint32_t sta_off_emu_spt       : 1;  /**< [  9:  9](SRO) OFF_EMU support.

                                                                 1 = OFF_EMU supported. */
        uint32_t sta_mem_ret_spt       : 1;  /**< [ 10: 10](SRO) MEM_RET support.

                                                                 0 = MEM_RET not supported. */
        uint32_t sta_mem_ret_emu_spt   : 1;  /**< [ 11: 11](SRO) MEM_RET_EMU support.

                                                                 0 = MEM_RET_EMU not supported. */
        uint32_t sta_lgc_ret_spt       : 1;  /**< [ 12: 12](SRO) LOGIC_RET support.

                                                                 0 = LOGIC_RET not supported. */
        uint32_t sta_mem_off_spt       : 1;  /**< [ 13: 13](SRO) MEM_OFF support.

                                                                 0 = MEM_OFF not supported. */
        uint32_t sta_full_ret_spt      : 1;  /**< [ 14: 14](SRO) FULL_RET support.

                                                                 1 = FULL_RET supported. */
        uint32_t sta_func_ret_spt      : 1;  /**< [ 15: 15](SRO) FUNC_RET support.

                                                                 1 = FUNC_RET supported. */
        uint32_t sta_on_spt            : 1;  /**< [ 16: 16](SRO) ON support.

                                                                 1 = ON supported. */
        uint32_t sta_wrm_rst_spt       : 1;  /**< [ 17: 17](SRO) WARM_RST support.

                                                                 1 = WRM_RST supported. */
        uint32_t sta_dbg_recov_spt     : 1;  /**< [ 18: 18](SRO) DBG_RECOV support.

                                                                 1 = DBG_RECOV supported. */
        uint32_t reserved_19           : 1;
        uint32_t dyn_off_spt           : 1;  /**< [ 20: 20](SRO) Dynamic OFF support.

                                                                 1 = Dynamic OFF supported. */
        uint32_t dyn_off_emu_spt       : 1;  /**< [ 21: 21](SRO) Dynamic OFF_EMU support.

                                                                 1 = Dynamic OFF_EMU supported. */
        uint32_t dyn_mem_ret_spt       : 1;  /**< [ 22: 22](SRO) Dynamic DYN_MEM_RET_SPT support.

                                                                 0 = Dynamic DYN_MEM_RET_SPT not
                                                                 supported. */
        uint32_t dyn_mem_ret_emu_spt   : 1;  /**< [ 23: 23](SRO) Dynamic DYN_MEM_RET_EMU_SPT support.

                                                                 0 = Dynamic DYN_MEM_RET_EMU_SPT
                                                                 not supported. */
        uint32_t dyn_lgc_ret_spt       : 1;  /**< [ 24: 24](SRO) Dynamic LOGIC_RET support.

                                                                 0 = Dynamic LOGIC_RET not supported. */
        uint32_t dyn_mem_off_spt       : 1;  /**< [ 25: 25](SRO) Dynamic MEM_OFF support.

                                                                 0 = Dynamic MEM_OFF not supported. */
        uint32_t dyn_full_ret_spt      : 1;  /**< [ 26: 26](SRO) Dynamic DYN_FULL_RET_SPT support.

                                                                 1 = Dynamic DYN_FULL_RET_SPT
                                                                 supported. */
        uint32_t dyn_func_ret_spt      : 1;  /**< [ 27: 27](SRO) Dynamic DYN_FUNC_RET_SPT support.

                                                                 1 = Dynamic DYN_FUNC_RET_SPT
                                                                 supported. */
        uint32_t dyn_on_spt            : 1;  /**< [ 28: 28](SRO) Dynamic ON support.

                                                                 1 = Dynamic ON supported. */
        uint32_t dyn_wrm_rst_spt       : 1;  /**< [ 29: 29](SRO) Dynamic WARM_RST support.

                                                                 1 = Dynamic WARM_RST supported. */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_idr0_s cn; */
};
typedef union cavm_dsuubx_core_ppu_idr0 cavm_dsuubx_core_ppu_idr0_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_IDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_IDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080fb0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080fb0ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080fb0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080fb0ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_IDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_IDR0(a) cavm_dsuubx_core_ppu_idr0_t
#define bustype_CAVM_DSUUBX_CORE_PPU_IDR0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_IDR0(a) "DSUUBX_CORE_PPU_IDR0"
#define device_bar_CAVM_DSUUBX_CORE_PPU_IDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_IDR0(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_IDR0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_idr1
 *
 * DSUUB Core PPU Identification Register 1
 * This read-only register contains information on the optional features and configurations that are
 * supported by this PPU.
 *
 * Additional information on optional features can be found in the PPU Identification Register 0
 * (PPU_IDR0).
 */
union cavm_dsuubx_core_ppu_idr1
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_idr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t off_mem_ret_trans     : 1;  /**< [ 12: 12](SRO) OFF to MEM_RET direct transition. Indicates
                                                                 if direct transitions from OFF to MEM_RET
                                                                 and from OFF_EMU to MEM_RET_EMU are
                                                                 supported.

                                                                 0 = OFF to MEM_RET direct transition not
                                                                 supported. */
        uint32_t reserved_9_11         : 3;
        uint32_t sta_policy_pwr_irq_spt : 1; /**< [  8:  8](SRO) Power policy transition completion event
                                                                 status.

                                                                 1 = Power policy transition completion
                                                                 events supported. */
        uint32_t reserved_7            : 1;
        uint32_t func_ret_ram_reg      : 1;  /**< [  6:  6](SRO) Indicates if the PPU_FUNRR register is present
                                                                 or reserved.

                                                                 0 = PPU_FUNRR is reserved. */
        uint32_t full_ret_ram_reg      : 1;  /**< [  5:  5](SRO) Indicates if the PPU_FULRR register is present
                                                                 or reserved.

                                                                 1 = PPU_FULRR is present. */
        uint32_t mem_ret_ram_reg       : 1;  /**< [  4:  4](SRO) Indicates if the PPU_MEMRR register is present
                                                                 or reserved.

                                                                 0 = PPU_MEMRR is present. */
        uint32_t reserved_3            : 1;
        uint32_t lock_spt              : 1;  /**< [  2:  2](SRO) Indicates if the lock and the lock interrupt
                                                                 event are supported.

                                                                 1 = Lock and the lock interrupt event are
                                                                 supported. */
        uint32_t sw_dev_del_spt        : 1;  /**< [  1:  1](SRO) Software device delay control configuration
                                                                 support.

                                                                 1 = Software device delay control
                                                                 configuration supported. */
        uint32_t pwr_mode_entry_del_spt : 1; /**< [  0:  0](SRO) Power mode entry delay support.

                                                                 0 = Power mode entry delay not supported. */
#else /* Word 0 - Little Endian */
        uint32_t pwr_mode_entry_del_spt : 1; /**< [  0:  0](SRO) Power mode entry delay support.

                                                                 0 = Power mode entry delay not supported. */
        uint32_t sw_dev_del_spt        : 1;  /**< [  1:  1](SRO) Software device delay control configuration
                                                                 support.

                                                                 1 = Software device delay control
                                                                 configuration supported. */
        uint32_t lock_spt              : 1;  /**< [  2:  2](SRO) Indicates if the lock and the lock interrupt
                                                                 event are supported.

                                                                 1 = Lock and the lock interrupt event are
                                                                 supported. */
        uint32_t reserved_3            : 1;
        uint32_t mem_ret_ram_reg       : 1;  /**< [  4:  4](SRO) Indicates if the PPU_MEMRR register is present
                                                                 or reserved.

                                                                 0 = PPU_MEMRR is present. */
        uint32_t full_ret_ram_reg      : 1;  /**< [  5:  5](SRO) Indicates if the PPU_FULRR register is present
                                                                 or reserved.

                                                                 1 = PPU_FULRR is present. */
        uint32_t func_ret_ram_reg      : 1;  /**< [  6:  6](SRO) Indicates if the PPU_FUNRR register is present
                                                                 or reserved.

                                                                 0 = PPU_FUNRR is reserved. */
        uint32_t reserved_7            : 1;
        uint32_t sta_policy_pwr_irq_spt : 1; /**< [  8:  8](SRO) Power policy transition completion event
                                                                 status.

                                                                 1 = Power policy transition completion
                                                                 events supported. */
        uint32_t reserved_9_11         : 3;
        uint32_t off_mem_ret_trans     : 1;  /**< [ 12: 12](SRO) OFF to MEM_RET direct transition. Indicates
                                                                 if direct transitions from OFF to MEM_RET
                                                                 and from OFF_EMU to MEM_RET_EMU are
                                                                 supported.

                                                                 0 = OFF to MEM_RET direct transition not
                                                                 supported. */
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_idr1_s cn; */
};
typedef union cavm_dsuubx_core_ppu_idr1 cavm_dsuubx_core_ppu_idr1_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_IDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_IDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080fb4ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080fb4ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080fb4ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080fb4ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_IDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_IDR1(a) cavm_dsuubx_core_ppu_idr1_t
#define bustype_CAVM_DSUUBX_CORE_PPU_IDR1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_IDR1(a) "DSUUBX_CORE_PPU_IDR1"
#define device_bar_CAVM_DSUUBX_CORE_PPU_IDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_IDR1(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_IDR1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_iesr
 *
 * DSUUB Core Input Edge Sensitivity Register
 * This register configures the transitions on the power mode DEVPACTIVE inputs that generate an
 * Input Edge interrupt event.
 *
 * When an event is masked an occurrence of the event does not set the corresponding bit in the
 * interrupt status register.
 */
union cavm_dsuubx_core_ppu_iesr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_iesr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_22_31        : 10;
        uint32_t devactive10_edge      : 2;  /**< [ 21: 20](SR/W) Configures the transitions on the
                                                                 DEVPACTIVE[10] input (DBG_RECOV) that
                                                                 generate an Input Edge interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive09_edge      : 2;  /**< [ 19: 18](SR/W) Configures the transitions on the DEVPACTIVE[9]
                                                                 input (WARM_RST) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive08_edge      : 2;  /**< [ 17: 16](SR/W) Configures the transitions on the DEVPACTIVE[8]
                                                                 input (ON) that generate an Input Edge interrupt
                                                                 event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive07_edge      : 2;  /**< [ 15: 14](SR/W) Configures the transitions on the DEVPACTIVE[7]
                                                                 input (ON) that generate an Input Edge interrupt
                                                                 event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t reserved_12_13        : 2;
        uint32_t devactive05_edge      : 2;  /**< [ 11: 10](SR/W) Configures the transitions on the DEVPACTIVE[5]
                                                                 input (ON) that generate an Input Edge interrupt
                                                                 event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t reserved_4_9          : 6;
        uint32_t devactive01_edge      : 2;  /**< [  3:  2](SR/W) Configures the transitions on the DEVPACTIVE[1]
                                                                 input (OFF_EMU) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_1          : 2;
        uint32_t devactive01_edge      : 2;  /**< [  3:  2](SR/W) Configures the transitions on the DEVPACTIVE[1]
                                                                 input (OFF_EMU) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t reserved_4_9          : 6;
        uint32_t devactive05_edge      : 2;  /**< [ 11: 10](SR/W) Configures the transitions on the DEVPACTIVE[5]
                                                                 input (ON) that generate an Input Edge interrupt
                                                                 event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t reserved_12_13        : 2;
        uint32_t devactive07_edge      : 2;  /**< [ 15: 14](SR/W) Configures the transitions on the DEVPACTIVE[7]
                                                                 input (ON) that generate an Input Edge interrupt
                                                                 event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive08_edge      : 2;  /**< [ 17: 16](SR/W) Configures the transitions on the DEVPACTIVE[8]
                                                                 input (ON) that generate an Input Edge interrupt
                                                                 event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive09_edge      : 2;  /**< [ 19: 18](SR/W) Configures the transitions on the DEVPACTIVE[9]
                                                                 input (WARM_RST) that generate an Input Edge
                                                                 interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t devactive10_edge      : 2;  /**< [ 21: 20](SR/W) Configures the transitions on the
                                                                 DEVPACTIVE[10] input (DBG_RECOV) that
                                                                 generate an Input Edge interrupt event.

                                                                 0b00 = Event masked.

                                                                 0b01 = Rising edge of event generates an interrupt.

                                                                 0b10 = Falling edge of event generates an
                                                                 interrupt.

                                                                 0b11 = Both edges of event generate an interrupt. */
        uint32_t reserved_22_31        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_iesr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_iesr cavm_dsuubx_core_ppu_iesr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_IESR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_IESR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080040ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080040ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080040ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080040ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_IESR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_IESR(a) cavm_dsuubx_core_ppu_iesr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_IESR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_IESR(a) "DSUUBX_CORE_PPU_IESR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_IESR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_IESR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_IESR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_iidr
 *
 * DSUUB Core Implementation Identification Register
 * This register provides information about the implementer and implementation of the PPU.
 */
union cavm_dsuubx_core_ppu_iidr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_iidr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t product_id            : 12; /**< [ 31: 20](SRO) Value identifying the PPU part.

                                                                 0b000010110110 = Core Power Policy Unit. */
        uint32_t variant               : 4;  /**< [ 19: 16](SRO) Value used to distinguish product variants, or
                                                                 major revisions of the product.

                                                                 0b0000 = Product variant r0p0.

                                                                 0b0001 = Product variant r1p0. */
        uint32_t revision              : 4;  /**< [ 15: 12](SRO) Value used to distinguish minor revisions of
                                                                 the product.

                                                                 0b0000 = No ECO fixes. */
        uint32_t implementer           : 12; /**< [ 11:  0](SRO) Implementer identification.

                                                                 0b010000111011 = Arm Limited. */
#else /* Word 0 - Little Endian */
        uint32_t implementer           : 12; /**< [ 11:  0](SRO) Implementer identification.

                                                                 0b010000111011 = Arm Limited. */
        uint32_t revision              : 4;  /**< [ 15: 12](SRO) Value used to distinguish minor revisions of
                                                                 the product.

                                                                 0b0000 = No ECO fixes. */
        uint32_t variant               : 4;  /**< [ 19: 16](SRO) Value used to distinguish product variants, or
                                                                 major revisions of the product.

                                                                 0b0000 = Product variant r0p0.

                                                                 0b0001 = Product variant r1p0. */
        uint32_t product_id            : 12; /**< [ 31: 20](SRO) Value identifying the PPU part.

                                                                 0b000010110110 = Core Power Policy Unit. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_iidr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_iidr cavm_dsuubx_core_ppu_iidr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_IIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_IIDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080fc8ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080fc8ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080fc8ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080fc8ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_IIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_IIDR(a) cavm_dsuubx_core_ppu_iidr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_IIDR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_IIDR(a) "DSUUBX_CORE_PPU_IIDR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_IIDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_IIDR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_IIDR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_imr
 *
 * DSUUB Core Interrupt Mask Register
 * This register controls the events that assert the interrupt output. Additional event
 * masking controls
 * are in the Additional Interrupt Mask Register (DSUUB_PPU_AIMR), Input Edge
 * Sensitivity Register (DSUUB_
 * PPU_IESR), and the Operating Mode Active Edge Sensitivity Register (DSUUB_PPU_OPSR).
 *
 * When an interrupt event is masked an occurrence of the event does not set the corresponding bit
 * in the interrupt status register.
 */
union cavm_dsuubx_core_ppu_imr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_imr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t locked_irq_mask       : 1;  /**< [  5:  5](SR/W) Locked event mask

                                                                 0 = Locked event enabled.

                                                                 1 = Locked event masked. */
        uint32_t emu_deny_irq_mask     : 1;  /**< [  4:  4](SR/W) Emulation transition denial event mask

                                                                 0 = Emulation transition denial event enabled.

                                                                 1 = Emulation transition denial event masked. */
        uint32_t emu_accept_irq_mask   : 1;  /**< [  3:  3](SR/W) Emulation transition acceptance event mask

                                                                 0 = Emulation transition acceptance event
                                                                 enabled.

                                                                 1 = Emulation transition acceptance event
                                                                 masked. */
        uint32_t sta_deny_irq_mask     : 1;  /**< [  2:  2](SR/W) Static transition denial event mask

                                                                 0 = Static transition denial event enabled.

                                                                 1 = Static transition denial event masked. */
        uint32_t sta_accept_irq_mask   : 1;  /**< [  1:  1](SR/W) Static transition acceptance event mask

                                                                 0 = Static transition acceptance event
                                                                 enabled.

                                                                 1 = Static transition acceptance event
                                                                 masked. */
        uint32_t sta_policy_trn_irq_mask : 1;/**< [  0:  0](SR/W) Static full policy transition completion event
                                                                 mask

                                                                 0 = Static full policy transition completion
                                                                 event enabled.

                                                                 1 = Static full policy transition completion
                                                                 event masked. */
#else /* Word 0 - Little Endian */
        uint32_t sta_policy_trn_irq_mask : 1;/**< [  0:  0](SR/W) Static full policy transition completion event
                                                                 mask

                                                                 0 = Static full policy transition completion
                                                                 event enabled.

                                                                 1 = Static full policy transition completion
                                                                 event masked. */
        uint32_t sta_accept_irq_mask   : 1;  /**< [  1:  1](SR/W) Static transition acceptance event mask

                                                                 0 = Static transition acceptance event
                                                                 enabled.

                                                                 1 = Static transition acceptance event
                                                                 masked. */
        uint32_t sta_deny_irq_mask     : 1;  /**< [  2:  2](SR/W) Static transition denial event mask

                                                                 0 = Static transition denial event enabled.

                                                                 1 = Static transition denial event masked. */
        uint32_t emu_accept_irq_mask   : 1;  /**< [  3:  3](SR/W) Emulation transition acceptance event mask

                                                                 0 = Emulation transition acceptance event
                                                                 enabled.

                                                                 1 = Emulation transition acceptance event
                                                                 masked. */
        uint32_t emu_deny_irq_mask     : 1;  /**< [  4:  4](SR/W) Emulation transition denial event mask

                                                                 0 = Emulation transition denial event enabled.

                                                                 1 = Emulation transition denial event masked. */
        uint32_t locked_irq_mask       : 1;  /**< [  5:  5](SR/W) Locked event mask

                                                                 0 = Locked event enabled.

                                                                 1 = Locked event masked. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_imr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_imr cavm_dsuubx_core_ppu_imr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_IMR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_IMR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080030ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080030ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080030ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080030ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_IMR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_IMR(a) cavm_dsuubx_core_ppu_imr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_IMR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_IMR(a) "DSUUBX_CORE_PPU_IMR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_IMR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_IMR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_IMR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_isr
 *
 * DSUUB Core Interrupt Status Register
 * This register contains information about events causing the assertion of the
 * interrupt output. It is
 * also used to clear interrupt events.
 *
 * A bit set to 1 indicates the event asserted the interrupt output. Multiple events
 * can be active at
 * the same time. When an interrupt event is masked an occurrence of that event does not set the
 * status bit.
 *
 * A write of 1 to an event bit clears that event. A write of 0 to a bit has no
 * effect. The interrupt
 * output stays HIGH until all status bits in the Interrupt Status Register (PPU_ISR)
 * and the Additional
 * Interrupt Status Register (PPU_AISR) are 0b0.
 *
 * When the OTHER_IRQ bit is set, this indicates an event from the Additional Interrupt Status
 * Register (PPU_AISR) has caused the interrupt output to be asserted. This bit cannot be cleared by
 * writing to this register. It must be cleared by writing to the active event in the
 * Additional Interrupt
 * Status Register (PPU_AISR).
 */
union cavm_dsuubx_core_ppu_isr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_isr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_19_31        : 13;
        uint32_t pwr_active_edge_irq10 : 1;  /**< [ 18: 18](SR/W1C/H) Indicates if power mode DEVPACTIVE[10]
                                                                 input caused the input edge event.

                                                                 0 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 did not assert the interrupt output.

                                                                 1 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 asserted the interrupt output. */
        uint32_t pwr_active_edge_irq9  : 1;  /**< [ 17: 17](SR/W1C/H) Indicates if power mode DEVPACTIVE[9] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[9] input (WARM_RST) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[9] input (WARM_RST)
                                                                 asserted the interrupt output. */
        uint32_t pwr_active_edge_irq8  : 1;  /**< [ 16: 16](SR/W1C/H) Indicates if power mode DEVPACTIVE[8] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[8] input (ON) did not
                                                                 assert the interrupt output.

                                                                 1 = DEVPACTIVE[8] input (ON) asserted the
                                                                 interrupt output. */
        uint32_t pwr_active_edge_irq7  : 1;  /**< [ 15: 15](SR/W1C/H) Indicates if power mode DEVPACTIVE[7] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[7] input (FUNC_RET) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 asserted the interrupt output. */
        uint32_t reserved_14           : 1;
        uint32_t pwr_active_edge_irq5  : 1;  /**< [ 13: 13](SR/W1C/H) Indicates if power mode DEVPACTIVE[5] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[5] input (FULL_RET) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[5] input (FULL_RET)
                                                                 asserted the interrupt output. */
        uint32_t reserved_10_12        : 3;
        uint32_t pwr_active_edge_irq1  : 1;  /**< [  9:  9](SR/W1C/H) Indicates if power mode DEVPACTIVE[1] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[1] input (OFF_EMU) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 asserted the interrupt output. */
        uint32_t reserved_8            : 1;
        uint32_t other_irq             : 1;  /**< [  7:  7](SRO/H) Indicates there is an interrupt event pending in
                                                                 the Additional Interrupt Status Register (PPU_
                                                                 AISR).

                                                                 0 = No interrupt pending in PPU_AISR.

                                                                 1 = Interrupt pending in PPU_AISR. */
        uint32_t reserved_6            : 1;
        uint32_t locked_irq            : 1;  /**< [  5:  5](SR/W1C/H) Locked event status.

                                                                 0 = No locked event.

                                                                 1 = A locked event asserted the interrupt
                                                                 output. */
        uint32_t emu_deny_irq          : 1;  /**< [  4:  4](SR/W1C/H) Emulated transition denial event status.

                                                                 0 = No emulated transition denial event.

                                                                 1 = An emulated transition denial event
                                                                 asserted the interrupt output. */
        uint32_t emu_accept_irq        : 1;  /**< [  3:  3](SR/W1C/H) Emulated transition acceptance event status.

                                                                 0 = No emulated transition acceptance
                                                                 event.

                                                                 1 = An emulated transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t sta_deny_irq          : 1;  /**< [  2:  2](SR/W1C/H) Static transition denial event status.

                                                                 0 = No static transition denial event.

                                                                 1 = A static transition denial event asserted
                                                                 the interrupt output. */
        uint32_t sta_accept_irq        : 1;  /**< [  1:  1](SR/W1C/H) Static transition acceptance event status.

                                                                 0 = No static transition acceptance event.

                                                                 1 = A static transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t sta_policy_trn_irq    : 1;  /**< [  0:  0](SR/W1C/H) Static full policy transition completion event
                                                                 status.

                                                                 0 = No static full policy transition
                                                                 completion event.

                                                                 1 = A static full policy transition completion
                                                                 event asserted the interrupt output. */
#else /* Word 0 - Little Endian */
        uint32_t sta_policy_trn_irq    : 1;  /**< [  0:  0](SR/W1C/H) Static full policy transition completion event
                                                                 status.

                                                                 0 = No static full policy transition
                                                                 completion event.

                                                                 1 = A static full policy transition completion
                                                                 event asserted the interrupt output. */
        uint32_t sta_accept_irq        : 1;  /**< [  1:  1](SR/W1C/H) Static transition acceptance event status.

                                                                 0 = No static transition acceptance event.

                                                                 1 = A static transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t sta_deny_irq          : 1;  /**< [  2:  2](SR/W1C/H) Static transition denial event status.

                                                                 0 = No static transition denial event.

                                                                 1 = A static transition denial event asserted
                                                                 the interrupt output. */
        uint32_t emu_accept_irq        : 1;  /**< [  3:  3](SR/W1C/H) Emulated transition acceptance event status.

                                                                 0 = No emulated transition acceptance
                                                                 event.

                                                                 1 = An emulated transition acceptance event
                                                                 asserted the interrupt output. */
        uint32_t emu_deny_irq          : 1;  /**< [  4:  4](SR/W1C/H) Emulated transition denial event status.

                                                                 0 = No emulated transition denial event.

                                                                 1 = An emulated transition denial event
                                                                 asserted the interrupt output. */
        uint32_t locked_irq            : 1;  /**< [  5:  5](SR/W1C/H) Locked event status.

                                                                 0 = No locked event.

                                                                 1 = A locked event asserted the interrupt
                                                                 output. */
        uint32_t reserved_6            : 1;
        uint32_t other_irq             : 1;  /**< [  7:  7](SRO/H) Indicates there is an interrupt event pending in
                                                                 the Additional Interrupt Status Register (PPU_
                                                                 AISR).

                                                                 0 = No interrupt pending in PPU_AISR.

                                                                 1 = Interrupt pending in PPU_AISR. */
        uint32_t reserved_8            : 1;
        uint32_t pwr_active_edge_irq1  : 1;  /**< [  9:  9](SR/W1C/H) Indicates if power mode DEVPACTIVE[1] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[1] input (OFF_EMU) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 asserted the interrupt output. */
        uint32_t reserved_10_12        : 3;
        uint32_t pwr_active_edge_irq5  : 1;  /**< [ 13: 13](SR/W1C/H) Indicates if power mode DEVPACTIVE[5] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[5] input (FULL_RET) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[5] input (FULL_RET)
                                                                 asserted the interrupt output. */
        uint32_t reserved_14           : 1;
        uint32_t pwr_active_edge_irq7  : 1;  /**< [ 15: 15](SR/W1C/H) Indicates if power mode DEVPACTIVE[7] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[7] input (FUNC_RET) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 asserted the interrupt output. */
        uint32_t pwr_active_edge_irq8  : 1;  /**< [ 16: 16](SR/W1C/H) Indicates if power mode DEVPACTIVE[8] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[8] input (ON) did not
                                                                 assert the interrupt output.

                                                                 1 = DEVPACTIVE[8] input (ON) asserted the
                                                                 interrupt output. */
        uint32_t pwr_active_edge_irq9  : 1;  /**< [ 17: 17](SR/W1C/H) Indicates if power mode DEVPACTIVE[9] input
                                                                 caused the input edge event.

                                                                 0 = DEVPACTIVE[9] input (WARM_RST) did
                                                                 not assert the interrupt output.

                                                                 1 = DEVPACTIVE[9] input (WARM_RST)
                                                                 asserted the interrupt output. */
        uint32_t pwr_active_edge_irq10 : 1;  /**< [ 18: 18](SR/W1C/H) Indicates if power mode DEVPACTIVE[10]
                                                                 input caused the input edge event.

                                                                 0 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 did not assert the interrupt output.

                                                                 1 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 asserted the interrupt output. */
        uint32_t reserved_19_31        : 13;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_isr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_isr cavm_dsuubx_core_ppu_isr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_ISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_ISR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080038ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080038ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080038ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080038ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_ISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_ISR(a) cavm_dsuubx_core_ppu_isr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_ISR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_ISR(a) "DSUUBX_CORE_PPU_ISR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_ISR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_ISR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_ISR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_memrr
 *
 * DSUUB Core Memory Retention RAM Configuration Register
 * This register controls bits [15:8] of the PCSMPSTATE output when in MEM_RET mode. These
 * outputs are used by the PCSM to configure the RAMs that are retained.
 */
union cavm_dsuubx_core_ppu_memrr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_memrr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_memrr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_memrr cavm_dsuubx_core_ppu_memrr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_MEMRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_MEMRR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080058ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080058ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080058ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080058ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_MEMRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_MEMRR(a) cavm_dsuubx_core_ppu_memrr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_MEMRR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_MEMRR(a) "DSUUBX_CORE_PPU_MEMRR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_MEMRR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_MEMRR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_MEMRR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_misr
 *
 * DSUUB Core Miscellaneous Input Current Status Register
 * This read-only register contains status reflecting the values of miscellaneous inputs.
 */
union cavm_dsuubx_core_ppu_misr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_misr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t devdeny_status        : 1;  /**< [ 16: 16](SRO/H) Status of the device interface DEVPDENY
                                                                 inputs.

                                                                 0 = DEVPDENY deasserted.

                                                                 1 = DEVPDENY asserted. */
        uint32_t reserved_9_15         : 7;
        uint32_t devaccept_status      : 1;  /**< [  8:  8](SRO/H) Status of the device interface DEVPACCEPT
                                                                 inputs.

                                                                 0 = DEVPACCEPT deasserted.

                                                                 1 = DEVPACCEPT asserted. */
        uint32_t reserved_1_7          : 7;
        uint32_t pcsmpaccept_status    : 1;  /**< [  0:  0](SRO/H) Status of the PCSMPACCEPT inputs.

                                                                 0 = PCSMPACCEPT deasserted.

                                                                 1 = PCSMPACCEPT asserted. */
#else /* Word 0 - Little Endian */
        uint32_t pcsmpaccept_status    : 1;  /**< [  0:  0](SRO/H) Status of the PCSMPACCEPT inputs.

                                                                 0 = PCSMPACCEPT deasserted.

                                                                 1 = PCSMPACCEPT asserted. */
        uint32_t reserved_1_7          : 7;
        uint32_t devaccept_status      : 1;  /**< [  8:  8](SRO/H) Status of the device interface DEVPACCEPT
                                                                 inputs.

                                                                 0 = DEVPACCEPT deasserted.

                                                                 1 = DEVPACCEPT asserted. */
        uint32_t reserved_9_15         : 7;
        uint32_t devdeny_status        : 1;  /**< [ 16: 16](SRO/H) Status of the device interface DEVPDENY
                                                                 inputs.

                                                                 0 = DEVPDENY deasserted.

                                                                 1 = DEVPDENY asserted. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_misr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_misr cavm_dsuubx_core_ppu_misr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_MISR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_MISR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080014ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080014ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080014ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080014ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_MISR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_MISR(a) cavm_dsuubx_core_ppu_misr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_MISR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_MISR(a) "DSUUBX_CORE_PPU_MISR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_MISR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_MISR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_MISR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_opsr
 *
 * DSUUB Core Input Edge Sensitivity Register
 * This register configures the transitions on the operating mode DEVPACTIVE inputs that generate
 * an Input Edge interrupt event.
 *
 * When an event is masked an occurrence of the event does not set the corresponding bit in the
 * interrupt status register.
 */
union cavm_dsuubx_core_ppu_opsr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_opsr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_opsr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_opsr cavm_dsuubx_core_ppu_opsr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_OPSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_OPSR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080044ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080044ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080044ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080044ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_OPSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_OPSR(a) cavm_dsuubx_core_ppu_opsr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_OPSR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_OPSR(a) "DSUUBX_CORE_PPU_OPSR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_OPSR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_OPSR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_OPSR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr0
 *
 * DSUUB Core PPU Peripheral Identification Register 0
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_core_ppu_pidr0
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t part_0                : 8;  /**< [  7:  0](SRO) Part number bits [7:0].

                                                                 0b11101000 = Core Power Policy Unit. Bits [7:0] of part
                                                                 number 0x4E8. */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](SRO) Part number bits [7:0].

                                                                 0b11101000 = Core Power Policy Unit. Bits [7:0] of part
                                                                 number 0x4E8. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pidr0_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pidr0 cavm_dsuubx_core_ppu_pidr0_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080fe0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080fe0ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080fe0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080fe0ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PIDR0(a) cavm_dsuubx_core_ppu_pidr0_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PIDR0(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PIDR0(a) "DSUUBX_CORE_PPU_PIDR0"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PIDR0(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PIDR0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr1
 *
 * DSUUB Core PPU Peripheral Identification Register 1
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_core_ppu_pidr1
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t des_0                 : 4;  /**< [  7:  4](SRO) JEP106 identification code bits [3:0].

                                                                 0b1011 = Arm Limited. Bits [3:0] of JEP106 identification code
                                                                 0x3B. */
        uint32_t part_1                : 4;  /**< [  3:  0](SRO) Part number bits [11:8].

                                                                 0b0100 = Core Power Policy Unit. Bits [11:8] of part number
                                                                 0x4E8. */
#else /* Word 0 - Little Endian */
        uint32_t part_1                : 4;  /**< [  3:  0](SRO) Part number bits [11:8].

                                                                 0b0100 = Core Power Policy Unit. Bits [11:8] of part number
                                                                 0x4E8. */
        uint32_t des_0                 : 4;  /**< [  7:  4](SRO) JEP106 identification code bits [3:0].

                                                                 0b1011 = Arm Limited. Bits [3:0] of JEP106 identification code
                                                                 0x3B. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pidr1_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pidr1 cavm_dsuubx_core_ppu_pidr1_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080fe4ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080fe4ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080fe4ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080fe4ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PIDR1(a) cavm_dsuubx_core_ppu_pidr1_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PIDR1(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PIDR1(a) "DSUUBX_CORE_PPU_PIDR1"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PIDR1(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PIDR1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr2
 *
 * DSUUB Core PPU Peripheral Identification Register 2
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_core_ppu_pidr2
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revision              : 4;  /**< [  7:  4](SRO) Component revision.

                                                                 0b0000 = Revision r0p0.

                                                                 0b0001 = Revision r1p0. */
        uint32_t jedec                 : 1;  /**< [  3:  3](SRO) JEDEC assignee.

                                                                 1 = JEDEC-assignee values is used. */
        uint32_t des_1                 : 3;  /**< [  2:  0](SRO) JEP106 identification code bits [6:4].

                                                                 0b011 = Arm Limited. Bits [6:4] of JEP106 identification code
                                                                 0x3B. */
#else /* Word 0 - Little Endian */
        uint32_t des_1                 : 3;  /**< [  2:  0](SRO) JEP106 identification code bits [6:4].

                                                                 0b011 = Arm Limited. Bits [6:4] of JEP106 identification code
                                                                 0x3B. */
        uint32_t jedec                 : 1;  /**< [  3:  3](SRO) JEDEC assignee.

                                                                 1 = JEDEC-assignee values is used. */
        uint32_t revision              : 4;  /**< [  7:  4](SRO) Component revision.

                                                                 0b0000 = Revision r0p0.

                                                                 0b0001 = Revision r1p0. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pidr2_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pidr2 cavm_dsuubx_core_ppu_pidr2_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080fe8ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080fe8ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080fe8ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080fe8ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PIDR2(a) cavm_dsuubx_core_ppu_pidr2_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PIDR2(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PIDR2(a) "DSUUBX_CORE_PPU_PIDR2"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PIDR2(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PIDR2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr3
 *
 * DSUUB Core PPU Peripheral Identification Register 3
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_core_ppu_pidr3
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revand                : 4;  /**< [  7:  4](SRO) Minor errata fixes.

                                                                 0b0000 = No ECO fixes. */
        uint32_t cmod                  : 4;  /**< [  3:  0](SRO) Customer Modified.

                                                                 0b0000 = The component is not modified from the original
                                                                 design. */
#else /* Word 0 - Little Endian */
        uint32_t cmod                  : 4;  /**< [  3:  0](SRO) Customer Modified.

                                                                 0b0000 = The component is not modified from the original
                                                                 design. */
        uint32_t revand                : 4;  /**< [  7:  4](SRO) Minor errata fixes.

                                                                 0b0000 = No ECO fixes. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pidr3_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pidr3 cavm_dsuubx_core_ppu_pidr3_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080fecll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080fecll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080fecll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080fecll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PIDR3(a) cavm_dsuubx_core_ppu_pidr3_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PIDR3(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PIDR3(a) "DSUUBX_CORE_PPU_PIDR3"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PIDR3(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PIDR3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr4
 *
 * DSUUB Core PPU Peripheral Identification Register 4
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_core_ppu_pidr4
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pidr4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t size                  : 4;  /**< [  7:  4](SRO) 4KB count.

                                                                 0b0000 = The component uses a single 4KB block. */
        uint32_t des_2                 : 4;  /**< [  3:  0](SRO) JEP106 continuation code.

                                                                 0b0100 = Arm Limited. Number of 0x7F bytes in full JEP106 code 0x7F
                                                                 0x7F 0x7F 0x7F 0x3B. */
#else /* Word 0 - Little Endian */
        uint32_t des_2                 : 4;  /**< [  3:  0](SRO) JEP106 continuation code.

                                                                 0b0100 = Arm Limited. Number of 0x7F bytes in full JEP106 code 0x7F
                                                                 0x7F 0x7F 0x7F 0x3B. */
        uint32_t size                  : 4;  /**< [  7:  4](SRO) 4KB count.

                                                                 0b0000 = The component uses a single 4KB block. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pidr4_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pidr4 cavm_dsuubx_core_ppu_pidr4_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080fd0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080fd0ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080fd0ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080fd0ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PIDR4(a) cavm_dsuubx_core_ppu_pidr4_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PIDR4(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PIDR4(a) "DSUUBX_CORE_PPU_PIDR4"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PIDR4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PIDR4(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PIDR4(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr5
 *
 * DSUUB Core PPU Peripheral Identification Register 5
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_core_ppu_pidr5
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pidr5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pidr5_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pidr5 cavm_dsuubx_core_ppu_pidr5_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080fd4ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080fd4ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080fd4ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080fd4ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PIDR5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PIDR5(a) cavm_dsuubx_core_ppu_pidr5_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PIDR5(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PIDR5(a) "DSUUBX_CORE_PPU_PIDR5"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PIDR5(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PIDR5(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PIDR5(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr6
 *
 * DSUUB Core PPU Peripheral Identification Register 6
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_core_ppu_pidr6
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pidr6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pidr6_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pidr6 cavm_dsuubx_core_ppu_pidr6_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR6(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080fd8ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080fd8ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080fd8ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080fd8ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PIDR6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PIDR6(a) cavm_dsuubx_core_ppu_pidr6_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PIDR6(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PIDR6(a) "DSUUBX_CORE_PPU_PIDR6"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PIDR6(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PIDR6(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PIDR6(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pidr7
 *
 * DSUUB Core PPU Peripheral Identification Register 7
 * Provides CoreSight discovery information.
 */
union cavm_dsuubx_core_ppu_pidr7
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pidr7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pidr7_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pidr7 cavm_dsuubx_core_ppu_pidr7_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PIDR7(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080fdcll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080fdcll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080fdcll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080fdcll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PIDR7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PIDR7(a) cavm_dsuubx_core_ppu_pidr7_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PIDR7(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PIDR7(a) "DSUUBX_CORE_PPU_PIDR7"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PIDR7(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PIDR7(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PIDR7(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pmer
 *
 * DSUUB Core Power Mode Emulation Enable Register
 * This register allows software to enable entry into emulated modes.
 */
union cavm_dsuubx_core_ppu_pmer
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pmer_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t emu_en                : 1;  /**< [  0:  0](SR/W) Power mode emulation enable.

                                                                 0 = Power mode emulation disabled.

                                                                 1 = Power mode emulation enabled. Transitions to OFF
                                                                 and MEM_RET instead transition to OFF_EMU and
                                                                 MEM_RET_EMU. */
#else /* Word 0 - Little Endian */
        uint32_t emu_en                : 1;  /**< [  0:  0](SR/W) Power mode emulation enable.

                                                                 0 = Power mode emulation disabled.

                                                                 1 = Power mode emulation enabled. Transitions to OFF
                                                                 and MEM_RET instead transition to OFF_EMU and
                                                                 MEM_RET_EMU. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pmer_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pmer cavm_dsuubx_core_ppu_pmer_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PMER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PMER(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080004ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080004ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080004ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080004ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PMER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PMER(a) cavm_dsuubx_core_ppu_pmer_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PMER(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PMER(a) "DSUUBX_CORE_PPU_PMER"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PMER(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PMER(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PMER(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_ptcr
 *
 * DSUUB Core Power Mode Transition Register
 * This register contains settings which affect the behaviour of certain power mode transitions.
 */
union cavm_dsuubx_core_ppu_ptcr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_ptcr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t dbg_recov_porst_en    : 1;  /**< [  1:  1](SR/W) Power-on reset behavior in DBG_RECOV.

                                                                 This bit should not be modified when the PPU
                                                                 is in DBG_RECOV or if the PPU is performing
                                                                 a transition, otherwise PPU behavior is
                                                                 UNPREDICTABLE.

                                                                 0 = DEVPORESETn is not asserted when in
                                                                 DBG_RECOV.

                                                                 1 = DEVPORESETn is asserted when in DBG_
                                                                 RECOV. */
        uint32_t warm_rst_devreqen     : 1;  /**< [  0:  0](SR/W) Device interface handshake behavior.

                                                                 This bit should not be modified when the PPU
                                                                 is in WARM_RST, or if the PPU is performing
                                                                 a transition, otherwise PPU behavior is
                                                                 UNPREDICTABLE.

                                                                 0 = The PPU does not perform a device
                                                                 interface handshake when transitioning
                                                                 between ON and WARM_RST.

                                                                 1 = The PPU performs a device interface
                                                                 handshake when transitioning between
                                                                 ON and WARM_RST. */
#else /* Word 0 - Little Endian */
        uint32_t warm_rst_devreqen     : 1;  /**< [  0:  0](SR/W) Device interface handshake behavior.

                                                                 This bit should not be modified when the PPU
                                                                 is in WARM_RST, or if the PPU is performing
                                                                 a transition, otherwise PPU behavior is
                                                                 UNPREDICTABLE.

                                                                 0 = The PPU does not perform a device
                                                                 interface handshake when transitioning
                                                                 between ON and WARM_RST.

                                                                 1 = The PPU performs a device interface
                                                                 handshake when transitioning between
                                                                 ON and WARM_RST. */
        uint32_t dbg_recov_porst_en    : 1;  /**< [  1:  1](SR/W) Power-on reset behavior in DBG_RECOV.

                                                                 This bit should not be modified when the PPU
                                                                 is in DBG_RECOV or if the PPU is performing
                                                                 a transition, otherwise PPU behavior is
                                                                 UNPREDICTABLE.

                                                                 0 = DEVPORESETn is not asserted when in
                                                                 DBG_RECOV.

                                                                 1 = DEVPORESETn is asserted when in DBG_
                                                                 RECOV. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_ptcr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_ptcr cavm_dsuubx_core_ppu_ptcr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PTCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PTCR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080024ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080024ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080024ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080024ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PTCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PTCR(a) cavm_dsuubx_core_ppu_ptcr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PTCR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PTCR(a) "DSUUBX_CORE_PPU_PTCR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PTCR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PTCR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PTCR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pwcr
 *
 * DSUUB Core Power Configuration Register
 * This register controls enabling and disabling of hardware control inputs to the PPU.
 *
 * Before software programs the DEVREQEN bits it must configure the PPU for static
 * transitions and ensure the requested power mode has been reached, this means that no
 * further transitions can occur, otherwise behavior is UNPREDICTABLE.
 *
 * The PWR_DEVACTIVEEN and OP_DEVACTIVEEN fields in this register control the ability of the
 * DEVACTIVE inputs to initiate power mode transitions, but not the ability to generate input edge
 * interrupt events.
 */
union cavm_dsuubx_core_ppu_pwcr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pwcr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_19_31        : 13;
        uint32_t pwr_devactiveen10     : 1;  /**< [ 18: 18](SR/W) Enables the operating mode DEVPACTIVE[10]
                                                                 input.

                                                                 0 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 enabled. */
        uint32_t pwr_devactiveen9      : 1;  /**< [ 17: 17](SR/W) Enables the operating mode DEVPACTIVE[9]
                                                                 input.

                                                                 0 = DEVPACTIVE[9] input (WARM_RST)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[9] input (WARM_RST)
                                                                 enabled. */
        uint32_t pwr_devactiveen8      : 1;  /**< [ 16: 16](SR/W) Enables the operating mode DEVPACTIVE[8]
                                                                 input.

                                                                 0 = DEVPACTIVE[8] input (ON) disabled.

                                                                 1 = DEVPACTIVE[8] input (ON) enabled. */
        uint32_t pwr_devactiveen7      : 1;  /**< [ 15: 15](SR/W) Enables the operating mode DEVPACTIVE[7]
                                                                 input.

                                                                 0 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 enabled. */
        uint32_t reserved_14           : 1;
        uint32_t pwr_devactiveen5      : 1;  /**< [ 13: 13](SR/W) Enables the operating mode DEVPACTIVE[5]
                                                                 input.

                                                                 0 = DEVPACTIVE[5] input (FULL_RET)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[5] input (FULL_RET)
                                                                 enabled. */
        uint32_t reserved_10_12        : 3;
        uint32_t pwr_devactiveen1      : 1;  /**< [  9:  9](SR/W) Enables the operating mode DEVPACTIVE[1]
                                                                 input.

                                                                 0 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 enabled. */
        uint32_t reserved_1_8          : 8;
        uint32_t devreqen              : 1;  /**< [  0:  0](SR/W) Device interface handshake enable.

                                                                 0 = Device interface handshake disabled for
                                                                 transitions.

                                                                 1 = Device interface handshake enabled for
                                                                 transitions. */
#else /* Word 0 - Little Endian */
        uint32_t devreqen              : 1;  /**< [  0:  0](SR/W) Device interface handshake enable.

                                                                 0 = Device interface handshake disabled for
                                                                 transitions.

                                                                 1 = Device interface handshake enabled for
                                                                 transitions. */
        uint32_t reserved_1_8          : 8;
        uint32_t pwr_devactiveen1      : 1;  /**< [  9:  9](SR/W) Enables the operating mode DEVPACTIVE[1]
                                                                 input.

                                                                 0 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[1] input (OFF_EMU)
                                                                 enabled. */
        uint32_t reserved_10_12        : 3;
        uint32_t pwr_devactiveen5      : 1;  /**< [ 13: 13](SR/W) Enables the operating mode DEVPACTIVE[5]
                                                                 input.

                                                                 0 = DEVPACTIVE[5] input (FULL_RET)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[5] input (FULL_RET)
                                                                 enabled. */
        uint32_t reserved_14           : 1;
        uint32_t pwr_devactiveen7      : 1;  /**< [ 15: 15](SR/W) Enables the operating mode DEVPACTIVE[7]
                                                                 input.

                                                                 0 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[7] input (FUNC_RET)
                                                                 enabled. */
        uint32_t pwr_devactiveen8      : 1;  /**< [ 16: 16](SR/W) Enables the operating mode DEVPACTIVE[8]
                                                                 input.

                                                                 0 = DEVPACTIVE[8] input (ON) disabled.

                                                                 1 = DEVPACTIVE[8] input (ON) enabled. */
        uint32_t pwr_devactiveen9      : 1;  /**< [ 17: 17](SR/W) Enables the operating mode DEVPACTIVE[9]
                                                                 input.

                                                                 0 = DEVPACTIVE[9] input (WARM_RST)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[9] input (WARM_RST)
                                                                 enabled. */
        uint32_t pwr_devactiveen10     : 1;  /**< [ 18: 18](SR/W) Enables the operating mode DEVPACTIVE[10]
                                                                 input.

                                                                 0 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 disabled.

                                                                 1 = DEVPACTIVE[10] input (DBG_RECOV)
                                                                 enabled. */
        uint32_t reserved_19_31        : 13;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pwcr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pwcr cavm_dsuubx_core_ppu_pwcr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PWCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PWCR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080020ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080020ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080020ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080020ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PWCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PWCR(a) cavm_dsuubx_core_ppu_pwcr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PWCR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PWCR(a) "DSUUBX_CORE_PPU_PWCR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PWCR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PWCR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PWCR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pwpr
 *
 * DSUUB Core Power Policy Register
 * This register enables software to program both power and operating mode policy. It also contains
 * related settings including the enable for dynamic transitions and the lock enable.
 *
 * This register does not reflect the current power mode value. The current power mode of the
 * domain is reflected in the Power Status Register (PPU_PWSR).
 */
union cavm_dsuubx_core_ppu_pwpr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pwpr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t lock_en               : 1;  /**< [ 12: 12](SR/W) Lock enable bit.

                                                                 0 = Lock feature disabled.

                                                                 1 = Lock feature enabled. */
        uint32_t reserved_9_11         : 3;
        uint32_t pwr_dyn_en            : 1;  /**< [  8:  8](SR/W) Power mode dynamic transition enable.

                                                                 0 = Dynamic transitions disabled for power modes.

                                                                 1 = Dynamic transitions enabled for power modes,
                                                                 allowing transitions to be initiated by changes on
                                                                 power mode DEVACTIVE inputs. */
        uint32_t reserved_4_7          : 4;
        uint32_t pwr_policy            : 4;  /**< [  3:  0](SR/W) Power mode policy.

                                                                 When static power mode transitions are enabled, PWR_
                                                                 DYN_EN is set to 0b0, this is the target power mode for
                                                                 the PPU.

                                                                 When dynamic power mode transitions are enabled, PWR_
                                                                 DYN_EN is set to 0b1, this is the minimum power mode
                                                                 for the PPU.

                                                                 0b0000 = OFF. Logic off and RAM off.

                                                                 0b0001 = OFF_EMU. Emulated Off. Logic on with RAM
                                                                 on. This mode is used to emulate the functional
                                                                 condition of OFF without removing power.

                                                                 0b0101 = FULL_RET. Full Retention. Logic and RAM in
                                                                 retention.

                                                                 0b0111 = FUNC_RET. Functional Retention. Floating-point/
                                                                 Vector logic retained, rest of the core logic and
                                                                 RAM on, core is functional.

                                                                 0b1000 = ON. Logic on with RAM on, core is functional.

                                                                 0b1001 = WARM_RST. Warm Reset. Warm reset application
                                                                 with logic and RAM on.

                                                                 0b1010 = DBG_RECOV. Debug Recovery Reset. Warm reset
                                                                 application with logic and RAM on. */
#else /* Word 0 - Little Endian */
        uint32_t pwr_policy            : 4;  /**< [  3:  0](SR/W) Power mode policy.

                                                                 When static power mode transitions are enabled, PWR_
                                                                 DYN_EN is set to 0b0, this is the target power mode for
                                                                 the PPU.

                                                                 When dynamic power mode transitions are enabled, PWR_
                                                                 DYN_EN is set to 0b1, this is the minimum power mode
                                                                 for the PPU.

                                                                 0b0000 = OFF. Logic off and RAM off.

                                                                 0b0001 = OFF_EMU. Emulated Off. Logic on with RAM
                                                                 on. This mode is used to emulate the functional
                                                                 condition of OFF without removing power.

                                                                 0b0101 = FULL_RET. Full Retention. Logic and RAM in
                                                                 retention.

                                                                 0b0111 = FUNC_RET. Functional Retention. Floating-point/
                                                                 Vector logic retained, rest of the core logic and
                                                                 RAM on, core is functional.

                                                                 0b1000 = ON. Logic on with RAM on, core is functional.

                                                                 0b1001 = WARM_RST. Warm Reset. Warm reset application
                                                                 with logic and RAM on.

                                                                 0b1010 = DBG_RECOV. Debug Recovery Reset. Warm reset
                                                                 application with logic and RAM on. */
        uint32_t reserved_4_7          : 4;
        uint32_t pwr_dyn_en            : 1;  /**< [  8:  8](SR/W) Power mode dynamic transition enable.

                                                                 0 = Dynamic transitions disabled for power modes.

                                                                 1 = Dynamic transitions enabled for power modes,
                                                                 allowing transitions to be initiated by changes on
                                                                 power mode DEVACTIVE inputs. */
        uint32_t reserved_9_11         : 3;
        uint32_t lock_en               : 1;  /**< [ 12: 12](SR/W) Lock enable bit.

                                                                 0 = Lock feature disabled.

                                                                 1 = Lock feature enabled. */
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pwpr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pwpr cavm_dsuubx_core_ppu_pwpr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PWPR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PWPR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080000ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080000ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080000ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080000ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PWPR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PWPR(a) cavm_dsuubx_core_ppu_pwpr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PWPR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PWPR(a) "DSUUBX_CORE_PPU_PWPR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PWPR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PWPR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PWPR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_pwsr
 *
 * DSUUB Core Power Status Register
 * This read-only register contains status information for the power mode, operating mode, dynamic
 * transitions, and lock feature.
 */
union cavm_dsuubx_core_ppu_pwsr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_pwsr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t lock_status           : 1;  /**< [ 12: 12](SRO/H) Lock status.

                                                                 0 = The PPU is not locked in the current mode.

                                                                 1 = The PPU is locked in the current mode. */
        uint32_t reserved_9_11         : 3;
        uint32_t pwr_dyn_status        : 1;  /**< [  8:  8](SRO/H) Power mode dynamic transition status.

                                                                 There might be a delay in dynamic transitions
                                                                 becoming active or inactive if the PPU is
                                                                 transitioning when PPU_PWPR.DYN_EN is
                                                                 programmed.

                                                                 0 = Dynamic transitions disabled for power
                                                                 modes.

                                                                 1 = Dynamic transitions enabled for power
                                                                 modes. */
        uint32_t reserved_4_7          : 4;
        uint32_t pwr_status            : 4;  /**< [  3:  0](SRO/H) Power mode status.

                                                                 These bits reflect the current power mode of the
                                                                 PPU.

                                                                 0b0000 = OFF. Logic off and RAM off.

                                                                 0b0001 = OFF_EMU. Emulated Off. Logic on with
                                                                 RAM on. This mode is used to emulate
                                                                 the functional condition of OFF without
                                                                 removing power.

                                                                 0b0101 = FULL_RET. Full Retention. Logic and RAM in
                                                                 retention.

                                                                 0b0111 = FUNC_RET. Functional Retention. Floating-
                                                                 point/Vector logic retained, rest of the core
                                                                 logic and RAM on, core is functional.

                                                                 0b1000 = ON. Logic on with RAM on, core is functional.

                                                                 0b1001 = WARM_RST. Warm Reset. Warm reset
                                                                 application with logic and RAM on.

                                                                 0b1010 = DBG_RECOV. Debug Recovery Reset. Warm
                                                                 reset application with logic and RAM on. */
#else /* Word 0 - Little Endian */
        uint32_t pwr_status            : 4;  /**< [  3:  0](SRO/H) Power mode status.

                                                                 These bits reflect the current power mode of the
                                                                 PPU.

                                                                 0b0000 = OFF. Logic off and RAM off.

                                                                 0b0001 = OFF_EMU. Emulated Off. Logic on with
                                                                 RAM on. This mode is used to emulate
                                                                 the functional condition of OFF without
                                                                 removing power.

                                                                 0b0101 = FULL_RET. Full Retention. Logic and RAM in
                                                                 retention.

                                                                 0b0111 = FUNC_RET. Functional Retention. Floating-
                                                                 point/Vector logic retained, rest of the core
                                                                 logic and RAM on, core is functional.

                                                                 0b1000 = ON. Logic on with RAM on, core is functional.

                                                                 0b1001 = WARM_RST. Warm Reset. Warm reset
                                                                 application with logic and RAM on.

                                                                 0b1010 = DBG_RECOV. Debug Recovery Reset. Warm
                                                                 reset application with logic and RAM on. */
        uint32_t reserved_4_7          : 4;
        uint32_t pwr_dyn_status        : 1;  /**< [  8:  8](SRO/H) Power mode dynamic transition status.

                                                                 There might be a delay in dynamic transitions
                                                                 becoming active or inactive if the PPU is
                                                                 transitioning when PPU_PWPR.DYN_EN is
                                                                 programmed.

                                                                 0 = Dynamic transitions disabled for power
                                                                 modes.

                                                                 1 = Dynamic transitions enabled for power
                                                                 modes. */
        uint32_t reserved_9_11         : 3;
        uint32_t lock_status           : 1;  /**< [ 12: 12](SRO/H) Lock status.

                                                                 0 = The PPU is not locked in the current mode.

                                                                 1 = The PPU is locked in the current mode. */
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_pwsr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_pwsr cavm_dsuubx_core_ppu_pwsr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_PWSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_PWSR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080008ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080008ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080008ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080008ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_PWSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_PWSR(a) cavm_dsuubx_core_ppu_pwsr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_PWSR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_PWSR(a) "DSUUBX_CORE_PPU_PWSR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_PWSR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_PWSR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_PWSR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_stsr
 *
 * DSUUB Core Stored Status Register
 * This register is reserved for P-Channel PPUs.
 */
union cavm_dsuubx_core_ppu_stsr
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_stsr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t stored_devdeny        : 8;  /**< [  7:  0](SRO/H) Status of the DEVDENY signals from the last device
                                                                 interface Q-Channel transition. This field is reserved.

                                                                 0b00000000 = Reserved for P-Channel PPUs. */
#else /* Word 0 - Little Endian */
        uint32_t stored_devdeny        : 8;  /**< [  7:  0](SRO/H) Status of the DEVDENY signals from the last device
                                                                 interface Q-Channel transition. This field is reserved.

                                                                 0b00000000 = Reserved for P-Channel PPUs. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_stsr_s cn; */
};
typedef union cavm_dsuubx_core_ppu_stsr cavm_dsuubx_core_ppu_stsr_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_STSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_STSR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e200080018ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e200080018ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e200080018ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e200080018ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_STSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_STSR(a) cavm_dsuubx_core_ppu_stsr_t
#define bustype_CAVM_DSUUBX_CORE_PPU_STSR(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_STSR(a) "DSUUBX_CORE_PPU_STSR"
#define device_bar_CAVM_DSUUBX_CORE_PPU_STSR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_STSR(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_STSR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) dsuub#_core_ppu_unlk
 *
 * DSUUB Core Unlock Register
 * This register allows software to unlock the PPU from a locked power mode.
 */
union cavm_dsuubx_core_ppu_unlk
{
    uint32_t u;
    struct cavm_dsuubx_core_ppu_unlk_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t unlock                : 1;  /**< [  0:  0](SR/W) When is written to this bit the PPU is unlocked from a locked
                                                                 power mode. A read always returns 0b0. */
#else /* Word 0 - Little Endian */
        uint32_t unlock                : 1;  /**< [  0:  0](SR/W) When is written to this bit the PPU is unlocked from a locked
                                                                 power mode. A read always returns 0b0. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_core_ppu_unlk_s cn; */
};
typedef union cavm_dsuubx_core_ppu_unlk cavm_dsuubx_core_ppu_unlk_t;

static inline uint64_t CAVM_DSUUBX_CORE_PPU_UNLK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CORE_PPU_UNLK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e20008001cll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e20008001cll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e20008001cll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e20008001cll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CORE_PPU_UNLK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CORE_PPU_UNLK(a) cavm_dsuubx_core_ppu_unlk_t
#define bustype_CAVM_DSUUBX_CORE_PPU_UNLK(a) CSR_TYPE_RSL32b
#define basename_CAVM_DSUUBX_CORE_PPU_UNLK(a) "DSUUBX_CORE_PPU_UNLK"
#define device_bar_CAVM_DSUUBX_CORE_PPU_UNLK(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CORE_PPU_UNLK(a) (a)
#define arguments_CAVM_DSUUBX_CORE_PPU_UNLK(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_cpumpmmcr_el3
 *
 * Dsuub MPMM Control Register
 * This register controls whether MPMM is enabled and selects the currently active MPMM "gear."
 */
union cavm_dsuubx_cpumpmmcr_el3
{
    uint64_t u;
    struct cavm_dsuubx_cpumpmmcr_el3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t mpmm_gear             : 2;  /**< [  2:  1](SR/W) MPMM gear select.

                                                                 0b00 = Throttle medium and high bandwidth vector and viruses.
                                                                 0b01 = Throttle high bandwidth vector and viruses.
                                                                 0b10 = Throttle power viruses only.
                                                                 0b11 = Do not throttle. */
        uint64_t mpmm_en               : 1;  /**< [  0:  0](SR/W) MPMM master enable.

                                                                 0b0 = MPMM is completely disabled
                                                                 0b1 = MPMM is enabled */
#else /* Word 0 - Little Endian */
        uint64_t mpmm_en               : 1;  /**< [  0:  0](SR/W) MPMM master enable.

                                                                 0b0 = MPMM is completely disabled
                                                                 0b1 = MPMM is enabled */
        uint64_t mpmm_gear             : 2;  /**< [  2:  1](SR/W) MPMM gear select.

                                                                 0b00 = Throttle medium and high bandwidth vector and viruses.
                                                                 0b01 = Throttle high bandwidth vector and viruses.
                                                                 0b10 = Throttle power viruses only.
                                                                 0b11 = Do not throttle. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cpumpmmcr_el3_s cn; */
};
typedef union cavm_dsuubx_cpumpmmcr_el3 cavm_dsuubx_cpumpmmcr_el3_t;

static inline uint64_t CAVM_DSUUBX_CPUMPMMCR_EL3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CPUMPMMCR_EL3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e2000b0010ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e2000b0010ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e2000b0010ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e2000b0010ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CPUMPMMCR_EL3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CPUMPMMCR_EL3(a) cavm_dsuubx_cpumpmmcr_el3_t
#define bustype_CAVM_DSUUBX_CPUMPMMCR_EL3(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CPUMPMMCR_EL3(a) "DSUUBX_CPUMPMMCR_EL3"
#define device_bar_CAVM_DSUUBX_CPUMPMMCR_EL3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CPUMPMMCR_EL3(a) (a)
#define arguments_CAVM_DSUUBX_CPUMPMMCR_EL3(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_cpuppmcr_el3
 *
 * Dsuub Global PPM Configuration Register
 * This register controls global PPM features and allows discovery of the PPM implementation details.
 */
union cavm_dsuubx_cpuppmcr_el3
{
    uint64_t u;
    struct cavm_dsuubx_cpuppmcr_el3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_19_63        : 45;
        uint64_t pdp_extms             : 1;  /**< [ 18: 18](SRO) Whether independent external memory system PDP control is implemented.

                                                                 0b1 = PDP has separate core and external memory system PDP controls. */
        uint64_t pdp_setps             : 2;  /**< [ 17: 16](SRO) Number of PDP setpoints implemented.

                                                                 0b11 = Three PDP setpoints are defined. */
        uint64_t reserved_11_15        : 5;
        uint64_t mpmm_gears            : 3;  /**< [ 10:  8](SRO) Number of MPMM gears implemented.

                                                                 0b011 = Three MPMM gears are defined. */
        uint64_t reserved_2_7          : 6;
        uint64_t pdppinctl             : 1;  /**< [  1:  1](SR/W) PDP Pin Control Enabled. */
        uint64_t mpmmpinctl            : 1;  /**< [  0:  0](SR/W) MPMM Pin Control Enabled. */
#else /* Word 0 - Little Endian */
        uint64_t mpmmpinctl            : 1;  /**< [  0:  0](SR/W) MPMM Pin Control Enabled. */
        uint64_t pdppinctl             : 1;  /**< [  1:  1](SR/W) PDP Pin Control Enabled. */
        uint64_t reserved_2_7          : 6;
        uint64_t mpmm_gears            : 3;  /**< [ 10:  8](SRO) Number of MPMM gears implemented.

                                                                 0b011 = Three MPMM gears are defined. */
        uint64_t reserved_11_15        : 5;
        uint64_t pdp_setps             : 2;  /**< [ 17: 16](SRO) Number of PDP setpoints implemented.

                                                                 0b11 = Three PDP setpoints are defined. */
        uint64_t pdp_extms             : 1;  /**< [ 18: 18](SRO) Whether independent external memory system PDP control is implemented.

                                                                 0b1 = PDP has separate core and external memory system PDP controls. */
        uint64_t reserved_19_63        : 45;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cpuppmcr_el3_s cn; */
};
typedef union cavm_dsuubx_cpuppmcr_el3 cavm_dsuubx_cpuppmcr_el3_t;

static inline uint64_t CAVM_DSUUBX_CPUPPMCR_EL3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CPUPPMCR_EL3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e2000b0000ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e2000b0000ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e2000b0000ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e2000b0000ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CPUPPMCR_EL3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CPUPPMCR_EL3(a) cavm_dsuubx_cpuppmcr_el3_t
#define bustype_CAVM_DSUUBX_CPUPPMCR_EL3(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CPUPPMCR_EL3(a) "DSUUBX_CPUPPMCR_EL3"
#define device_bar_CAVM_DSUUBX_CPUPPMCR_EL3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CPUPPMCR_EL3(a) (a)
#define arguments_CAVM_DSUUBX_CPUPPMCR_EL3(a) (a),-1,-1,-1

/**
 * Register (RSL) dsuub#_cpuppmpdpcr_el1
 *
 * Dsuub PDP Control Register
 * This register controls the aggressiveness of the PDP feature. The core and external memory
 * system reduction features may be independently controlled.
 */
union cavm_dsuubx_cpuppmpdpcr_el1
{
    uint64_t u;
    struct cavm_dsuubx_cpuppmpdpcr_el1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t pdp_extms_set         : 2;  /**< [ 33: 32](SR/W) External memory system PDP aggressiveness.

                                                                 0b00 = Disable PDP.
                                                                 0b01 = Engage PDP at low aggressiveness.
                                                                 0b10 = Engage PDP at medium aggressiveness.
                                                                 0b11 = Engage PDP at high aggressiveness.

                                                                 0b00 = Disable PDP.
                                                                 0b01 = Engage PDP at low aggressiveness.
                                                                 0b10 = Engage PDP at medium aggressiveness.
                                                                 0b11 = Engage PDP at high aggressiveness. */
        uint64_t reserved_2_31         : 30;
        uint64_t pdp_core_set          : 2;  /**< [  1:  0](SR/W) MPMM master enable.

                                                                 0b00 = Disable PDP.
                                                                 0b01 = Engage PDP at low aggressiveness.
                                                                 0b10 = Engage PDP at medium aggressiveness.
                                                                 0b11 = Engage PDP at high aggressiveness. */
#else /* Word 0 - Little Endian */
        uint64_t pdp_core_set          : 2;  /**< [  1:  0](SR/W) MPMM master enable.

                                                                 0b00 = Disable PDP.
                                                                 0b01 = Engage PDP at low aggressiveness.
                                                                 0b10 = Engage PDP at medium aggressiveness.
                                                                 0b11 = Engage PDP at high aggressiveness. */
        uint64_t reserved_2_31         : 30;
        uint64_t pdp_extms_set         : 2;  /**< [ 33: 32](SR/W) External memory system PDP aggressiveness.

                                                                 0b00 = Disable PDP.
                                                                 0b01 = Engage PDP at low aggressiveness.
                                                                 0b10 = Engage PDP at medium aggressiveness.
                                                                 0b11 = Engage PDP at high aggressiveness.

                                                                 0b00 = Disable PDP.
                                                                 0b01 = Engage PDP at low aggressiveness.
                                                                 0b10 = Engage PDP at medium aggressiveness.
                                                                 0b11 = Engage PDP at high aggressiveness. */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsuubx_cpuppmpdpcr_el1_s cn; */
};
typedef union cavm_dsuubx_cpuppmpdpcr_el1 cavm_dsuubx_cpuppmpdpcr_el1_t;

static inline uint64_t CAVM_DSUUBX_CPUPPMPDPCR_EL1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSUUBX_CPUPPMPDPCR_EL1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87e2000b0020ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87e2000b0020ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87e2000b0020ll + 0x1000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87e2000b0020ll + 0x1000000ll * ((a) & 0xf);
    __cavm_csr_fatal("DSUUBX_CPUPPMPDPCR_EL1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_DSUUBX_CPUPPMPDPCR_EL1(a) cavm_dsuubx_cpuppmpdpcr_el1_t
#define bustype_CAVM_DSUUBX_CPUPPMPDPCR_EL1(a) CSR_TYPE_RSL
#define basename_CAVM_DSUUBX_CPUPPMPDPCR_EL1(a) "DSUUBX_CPUPPMPDPCR_EL1"
#define device_bar_CAVM_DSUUBX_CPUPPMPDPCR_EL1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_DSUUBX_CPUPPMPDPCR_EL1(a) (a)
#define arguments_CAVM_DSUUBX_CPUPPMPDPCR_EL1(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_DSUUB_H__ */
