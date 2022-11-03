#ifndef __CAVM_CSRS_SAM_H__
#define __CAVM_CSRS_SAM_H__
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
 * OcteonTX SAM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration sam_bar_e
 *
 * SAM Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_SAM_BAR_E_SAM_PF_BAR0 (0x87e059000000ll)
#define CAVM_SAM_BAR_E_SAM_PF_BAR0_SIZE 0x10000ull

/**
 * Register (RSL) sam_asc_region#_attr
 *
 * SAM Address Space Control Region Attributes Registers
 */
union cavm_sam_asc_regionx_attr
{
    uint64_t u;
    struct cavm_sam_asc_regionx_attr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t s_en                  : 1;  /**< [ 21: 21](SR/W) Enables secure access to region.
                                                                 Undefined if both [S_EN] and [NS_EN] are set for the same region. */
        uint64_t ns_en                 : 1;  /**< [ 20: 20](SR/W) Enables nonsecure access to region.
                                                                 Undefined if both [S_EN] and [NS_EN] are set for the same region. */
        uint64_t f3                    : 1;  /**< [ 19: 19](SR/W) Specifies the number of factors of 3 in the striping group. */
        uint64_t f2                    : 3;  /**< [ 18: 16](SR/W) Specifies the number of factors of 2 in the striping group.  Values \> 4 are undefined. */
        uint64_t dmc_mask              : 16; /**< [ 15:  0](SR/W) Specifies which DMCs are used by this region. Each bit corresponds to one DMC,
                                                                 with bit \<0\> for DMC0. The number of bits set must be 3^[F3]*2^[F2] or none. No
                                                                 bits set indicates that this region is scratchpad memory. */
#else /* Word 0 - Little Endian */
        uint64_t dmc_mask              : 16; /**< [ 15:  0](SR/W) Specifies which DMCs are used by this region. Each bit corresponds to one DMC,
                                                                 with bit \<0\> for DMC0. The number of bits set must be 3^[F3]*2^[F2] or none. No
                                                                 bits set indicates that this region is scratchpad memory. */
        uint64_t f2                    : 3;  /**< [ 18: 16](SR/W) Specifies the number of factors of 2 in the striping group.  Values \> 4 are undefined. */
        uint64_t f3                    : 1;  /**< [ 19: 19](SR/W) Specifies the number of factors of 3 in the striping group. */
        uint64_t ns_en                 : 1;  /**< [ 20: 20](SR/W) Enables nonsecure access to region.
                                                                 Undefined if both [S_EN] and [NS_EN] are set for the same region. */
        uint64_t s_en                  : 1;  /**< [ 21: 21](SR/W) Enables secure access to region.
                                                                 Undefined if both [S_EN] and [NS_EN] are set for the same region. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_asc_regionx_attr_s cn; */
};
typedef union cavm_sam_asc_regionx_attr cavm_sam_asc_regionx_attr_t;

static inline uint64_t CAVM_SAM_ASC_REGIONX_ATTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_ASC_REGIONX_ATTR(uint64_t a)
{
    if (a<=31)
        return 0x87e059000018ll + 0x20ll * ((a) & 0x1f);
    __cavm_csr_fatal("SAM_ASC_REGIONX_ATTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_ASC_REGIONX_ATTR(a) cavm_sam_asc_regionx_attr_t
#define bustype_CAVM_SAM_ASC_REGIONX_ATTR(a) CSR_TYPE_RSL
#define basename_CAVM_SAM_ASC_REGIONX_ATTR(a) "SAM_ASC_REGIONX_ATTR"
#define device_bar_CAVM_SAM_ASC_REGIONX_ATTR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_ASC_REGIONX_ATTR(a) (a)
#define arguments_CAVM_SAM_ASC_REGIONX_ATTR(a) (a),-1,-1,-1

/**
 * Register (RSL) sam_asc_region#_end
 *
 * SAM Address Space Control Region End Address Registers
 */
union cavm_sam_asc_regionx_end
{
    uint64_t u;
    struct cavm_sam_asc_regionx_end_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_44_63        : 20;
        uint64_t addr                  : 20; /**< [ 43: 24](SR/W) Node-local physical address \<42:24\> marking the inclusive end of the
                                                                 corresponding ASC region, where bits \<23:0\> are implied to be all-ones. See
                                                                 SAM_ASC_REGION()_START[ADDR].

                                                                 The ending address must be a multiple (less 1) of the number of DMC's
                                                                 participating in the striping group or abut another region in the same striping
                                                                 group. */
        uint64_t reserved_0_23         : 24;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_23         : 24;
        uint64_t addr                  : 20; /**< [ 43: 24](SR/W) Node-local physical address \<42:24\> marking the inclusive end of the
                                                                 corresponding ASC region, where bits \<23:0\> are implied to be all-ones. See
                                                                 SAM_ASC_REGION()_START[ADDR].

                                                                 The ending address must be a multiple (less 1) of the number of DMC's
                                                                 participating in the striping group or abut another region in the same striping
                                                                 group. */
        uint64_t reserved_44_63        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_asc_regionx_end_s cn; */
};
typedef union cavm_sam_asc_regionx_end cavm_sam_asc_regionx_end_t;

static inline uint64_t CAVM_SAM_ASC_REGIONX_END(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_ASC_REGIONX_END(uint64_t a)
{
    if (a<=31)
        return 0x87e059000008ll + 0x20ll * ((a) & 0x1f);
    __cavm_csr_fatal("SAM_ASC_REGIONX_END", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_ASC_REGIONX_END(a) cavm_sam_asc_regionx_end_t
#define bustype_CAVM_SAM_ASC_REGIONX_END(a) CSR_TYPE_RSL
#define basename_CAVM_SAM_ASC_REGIONX_END(a) "SAM_ASC_REGIONX_END"
#define device_bar_CAVM_SAM_ASC_REGIONX_END(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_ASC_REGIONX_END(a) (a)
#define arguments_CAVM_SAM_ASC_REGIONX_END(a) (a),-1,-1,-1

/**
 * Register (RSL) sam_asc_region#_offset
 *
 * SAM Address Space Control Region Offset Address Registers
 */
union cavm_sam_asc_regionx_offset
{
    uint64_t u;
    struct cavm_sam_asc_regionx_offset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_35_63        : 29;
        uint64_t offset                : 18; /**< [ 34: 17](SR/W) For each region, the offset to add to the DRAM line address to get the final DMC
                                                                 address.  As this is an DRAM offset, the units of {OFFSET] depends on
                                                                 SAM_ASC_REGION()_ATTR[F2,F3]. */
        uint64_t reserved_0_16         : 17;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_16         : 17;
        uint64_t offset                : 18; /**< [ 34: 17](SR/W) For each region, the offset to add to the DRAM line address to get the final DMC
                                                                 address.  As this is an DRAM offset, the units of {OFFSET] depends on
                                                                 SAM_ASC_REGION()_ATTR[F2,F3]. */
        uint64_t reserved_35_63        : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_asc_regionx_offset_s cn; */
};
typedef union cavm_sam_asc_regionx_offset cavm_sam_asc_regionx_offset_t;

static inline uint64_t CAVM_SAM_ASC_REGIONX_OFFSET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_ASC_REGIONX_OFFSET(uint64_t a)
{
    if (a<=31)
        return 0x87e059000010ll + 0x20ll * ((a) & 0x1f);
    __cavm_csr_fatal("SAM_ASC_REGIONX_OFFSET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_ASC_REGIONX_OFFSET(a) cavm_sam_asc_regionx_offset_t
#define bustype_CAVM_SAM_ASC_REGIONX_OFFSET(a) CSR_TYPE_RSL
#define basename_CAVM_SAM_ASC_REGIONX_OFFSET(a) "SAM_ASC_REGIONX_OFFSET"
#define device_bar_CAVM_SAM_ASC_REGIONX_OFFSET(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_ASC_REGIONX_OFFSET(a) (a)
#define arguments_CAVM_SAM_ASC_REGIONX_OFFSET(a) (a),-1,-1,-1

/**
 * Register (RSL) sam_asc_region#_start
 *
 * SAM Address Space Control Region Start Address Registers
 */
union cavm_sam_asc_regionx_start
{
    uint64_t u;
    struct cavm_sam_asc_regionx_start_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_44_63        : 20;
        uint64_t addr                  : 20; /**< [ 43: 24](SR/W) Node-local physical address \<42:24\> marking the start of the corresponding ASC
                                                                 region, before applying SAM_ASC_REGION()_OFFSET[OFFSET]. The region will match
                                                                 if:

                                                                 _ SAM_ASC_REGION()_START[ADDR] \<= phys_addr\<42:24\> \<= SAM_ASC_REGION()_END[ADDR].

                                                                 Software must ensure that regions do not overlap.  The start address must be a
                                                                 multiple of the number of DMC's participating in the striping group or abut
                                                                 another region in the same striping group.

                                                                 To indicate an invalid region, clear both the corresponding SAM_ASC_REGION()_ATTR[S_EN] and
                                                                 SAM_ASC_REGION()_ATTR[NS_EN]. */
        uint64_t reserved_0_23         : 24;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_23         : 24;
        uint64_t addr                  : 20; /**< [ 43: 24](SR/W) Node-local physical address \<42:24\> marking the start of the corresponding ASC
                                                                 region, before applying SAM_ASC_REGION()_OFFSET[OFFSET]. The region will match
                                                                 if:

                                                                 _ SAM_ASC_REGION()_START[ADDR] \<= phys_addr\<42:24\> \<= SAM_ASC_REGION()_END[ADDR].

                                                                 Software must ensure that regions do not overlap.  The start address must be a
                                                                 multiple of the number of DMC's participating in the striping group or abut
                                                                 another region in the same striping group.

                                                                 To indicate an invalid region, clear both the corresponding SAM_ASC_REGION()_ATTR[S_EN] and
                                                                 SAM_ASC_REGION()_ATTR[NS_EN]. */
        uint64_t reserved_44_63        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_asc_regionx_start_s cn; */
};
typedef union cavm_sam_asc_regionx_start cavm_sam_asc_regionx_start_t;

static inline uint64_t CAVM_SAM_ASC_REGIONX_START(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_ASC_REGIONX_START(uint64_t a)
{
    if (a<=31)
        return 0x87e059000000ll + 0x20ll * ((a) & 0x1f);
    __cavm_csr_fatal("SAM_ASC_REGIONX_START", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_ASC_REGIONX_START(a) cavm_sam_asc_regionx_start_t
#define bustype_CAVM_SAM_ASC_REGIONX_START(a) CSR_TYPE_RSL
#define basename_CAVM_SAM_ASC_REGIONX_START(a) "SAM_ASC_REGIONX_START"
#define device_bar_CAVM_SAM_ASC_REGIONX_START(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_ASC_REGIONX_START(a) (a)
#define arguments_CAVM_SAM_ASC_REGIONX_START(a) (a),-1,-1,-1

/**
 * Register (RSL) sam_dmc_hash#
 *
 * SAM DMC hash matrix coefficients Registers
 * This hash matrix is used to spread addresses among DMC's.
 * HASH(0..3)[CO]\<10:7\> must form an invertible matrix.
 */
union cavm_sam_dmc_hashx
{
    uint64_t u;
    struct cavm_sam_dmc_hashx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_44_63        : 20;
        uint64_t co                    : 37; /**< [ 43:  7](SR/W) Hash matrix coefficient. */
        uint64_t reserved_0_6          : 7;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_6          : 7;
        uint64_t co                    : 37; /**< [ 43:  7](SR/W) Hash matrix coefficient. */
        uint64_t reserved_44_63        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_dmc_hashx_s cn; */
};
typedef union cavm_sam_dmc_hashx cavm_sam_dmc_hashx_t;

static inline uint64_t CAVM_SAM_DMC_HASHX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_DMC_HASHX(uint64_t a)
{
    if (a<=3)
        return 0x87e059000460ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("SAM_DMC_HASHX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_DMC_HASHX(a) cavm_sam_dmc_hashx_t
#define bustype_CAVM_SAM_DMC_HASHX(a) CSR_TYPE_RSL
#define basename_CAVM_SAM_DMC_HASHX(a) "SAM_DMC_HASHX"
#define device_bar_CAVM_SAM_DMC_HASHX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_DMC_HASHX(a) (a)
#define arguments_CAVM_SAM_DMC_HASHX(a) (a),-1,-1,-1

/**
 * Register (RSL) sam_mn_map
 *
 * SAM MN Map Register
 * This register specifies the location of MN.
 */
union cavm_sam_mn_map
{
    uint64_t u;
    struct cavm_sam_mn_map_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_36_63        : 28;
        uint64_t val3                  : 1;  /**< [ 35: 35](SR/W) Use this MN. */
        uint64_t x3                    : 4;  /**< [ 34: 31](SR/W) X location of 4th MN. */
        uint64_t y3                    : 4;  /**< [ 30: 27](SR/W) Y location of 4th MN. */
        uint64_t val2                  : 1;  /**< [ 26: 26](SR/W) Use this MN. */
        uint64_t x2                    : 4;  /**< [ 25: 22](SR/W) X location of 3rd MN. */
        uint64_t y2                    : 4;  /**< [ 21: 18](SR/W) Y location of 3rd MN. */
        uint64_t val1                  : 1;  /**< [ 17: 17](SR/W) Use this MN. */
        uint64_t x1                    : 4;  /**< [ 16: 13](SR/W) X location of 2nd MN. */
        uint64_t y1                    : 4;  /**< [ 12:  9](SR/W) Y location of 2nd MN. */
        uint64_t val0                  : 1;  /**< [  8:  8](SR/W) Use this MN. */
        uint64_t x0                    : 4;  /**< [  7:  4](SR/W) X location of 1st MN. */
        uint64_t y0                    : 4;  /**< [  3:  0](SR/W) Y location of 1st MN. */
#else /* Word 0 - Little Endian */
        uint64_t y0                    : 4;  /**< [  3:  0](SR/W) Y location of 1st MN. */
        uint64_t x0                    : 4;  /**< [  7:  4](SR/W) X location of 1st MN. */
        uint64_t val0                  : 1;  /**< [  8:  8](SR/W) Use this MN. */
        uint64_t y1                    : 4;  /**< [ 12:  9](SR/W) Y location of 2nd MN. */
        uint64_t x1                    : 4;  /**< [ 16: 13](SR/W) X location of 2nd MN. */
        uint64_t val1                  : 1;  /**< [ 17: 17](SR/W) Use this MN. */
        uint64_t y2                    : 4;  /**< [ 21: 18](SR/W) Y location of 3rd MN. */
        uint64_t x2                    : 4;  /**< [ 25: 22](SR/W) X location of 3rd MN. */
        uint64_t val2                  : 1;  /**< [ 26: 26](SR/W) Use this MN. */
        uint64_t y3                    : 4;  /**< [ 30: 27](SR/W) Y location of 4th MN. */
        uint64_t x3                    : 4;  /**< [ 34: 31](SR/W) X location of 4th MN. */
        uint64_t val3                  : 1;  /**< [ 35: 35](SR/W) Use this MN. */
        uint64_t reserved_36_63        : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_mn_map_s cn; */
};
typedef union cavm_sam_mn_map cavm_sam_mn_map_t;

#define CAVM_SAM_MN_MAP CAVM_SAM_MN_MAP_FUNC()
static inline uint64_t CAVM_SAM_MN_MAP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_MN_MAP_FUNC(void)
{
    return 0x87e059004280ll;
}

#define typedef_CAVM_SAM_MN_MAP cavm_sam_mn_map_t
#define bustype_CAVM_SAM_MN_MAP CSR_TYPE_RSL
#define basename_CAVM_SAM_MN_MAP "SAM_MN_MAP"
#define device_bar_CAVM_SAM_MN_MAP 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_MN_MAP 0
#define arguments_CAVM_SAM_MN_MAP -1,-1,-1,-1

/**
 * Register (RSL) sam_ncb#_const
 *
 * SAM Processor Number Routing Map Registers
 * A table of IOB routing destinations.
 *
 * \<pre\>
 *  Index a  bus  Bus index
 *  -------  ---  ---------
 *  00-3F    NCB  DID 00-3F
 *  40-5F    RVU  BLK 00-1F
 *  60-7F    NCB  DID 60-7F
 *  80-BF    ECAM DOM 00-3F
 *  C0-DF    NCB  DID E0-FF
 *  E0-EB    PEM  DID 00-0B
 *  EC-FF    Reserved
 * \</pre\>
 */
union cavm_sam_ncbx_const
{
    uint64_t u;
    struct cavm_sam_ncbx_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t arbid                 : 4;  /**< [ 11:  8](SRO) NCB bus ARBID. */
        uint64_t reserved_6_7          : 2;
        uint64_t ncb                   : 2;  /**< [  5:  4](SRO) Physical bus number. */
        uint64_t iob                   : 3;  /**< [  3:  1](SRO) IOB number. */
        uint64_t valid                 : 1;  /**< [  0:  0](SRO) This entry is valid. */
#else /* Word 0 - Little Endian */
        uint64_t valid                 : 1;  /**< [  0:  0](SRO) This entry is valid. */
        uint64_t iob                   : 3;  /**< [  3:  1](SRO) IOB number. */
        uint64_t ncb                   : 2;  /**< [  5:  4](SRO) Physical bus number. */
        uint64_t reserved_6_7          : 2;
        uint64_t arbid                 : 4;  /**< [ 11:  8](SRO) NCB bus ARBID. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_ncbx_const_s cn; */
};
typedef union cavm_sam_ncbx_const cavm_sam_ncbx_const_t;

static inline uint64_t CAVM_SAM_NCBX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_NCBX_CONST(uint64_t a)
{
    if (a<=255)
        return 0x87e059008800ll + 8ll * ((a) & 0xff);
    __cavm_csr_fatal("SAM_NCBX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_NCBX_CONST(a) cavm_sam_ncbx_const_t
#define bustype_CAVM_SAM_NCBX_CONST(a) CSR_TYPE_RSL
#define basename_CAVM_SAM_NCBX_CONST(a) "SAM_NCBX_CONST"
#define device_bar_CAVM_SAM_NCBX_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_NCBX_CONST(a) (a)
#define arguments_CAVM_SAM_NCBX_CONST(a) (a),-1,-1,-1

/**
 * Register (RSL) sam_pn_map#
 *
 * SAM Processor Number Routing Map Registers
 * A table of routing destinations indexed by virtual processor number.
 */
union cavm_sam_pn_mapx
{
    uint64_t u;
    struct cavm_sam_pn_mapx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t val                   : 1;  /**< [  8:  8](SR/W) Valid. */
        uint64_t x                     : 4;  /**< [  7:  4](SR/W) Mesh X. All tads/cores start at column 1. */
        uint64_t y                     : 4;  /**< [  3:  0](SR/W) Mesh Y. All tads/cores start at row 1. */
#else /* Word 0 - Little Endian */
        uint64_t y                     : 4;  /**< [  3:  0](SR/W) Mesh Y. All tads/cores start at row 1. */
        uint64_t x                     : 4;  /**< [  7:  4](SR/W) Mesh X. All tads/cores start at column 1. */
        uint64_t val                   : 1;  /**< [  8:  8](SR/W) Valid. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_pn_mapx_s cn; */
};
typedef union cavm_sam_pn_mapx cavm_sam_pn_mapx_t;

static inline uint64_t CAVM_SAM_PN_MAPX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_PN_MAPX(uint64_t a)
{
    if (a<=63)
        return 0x87e059008000ll + 8ll * ((a) & 0x3f);
    __cavm_csr_fatal("SAM_PN_MAPX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_PN_MAPX(a) cavm_sam_pn_mapx_t
#define bustype_CAVM_SAM_PN_MAPX(a) CSR_TYPE_RSL
#define basename_CAVM_SAM_PN_MAPX(a) "SAM_PN_MAPX"
#define device_bar_CAVM_SAM_PN_MAPX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_PN_MAPX(a) (a)
#define arguments_CAVM_SAM_PN_MAPX(a) (a),-1,-1,-1

/**
 * Register (RSL) sam_tile_hash#
 *
 * SAM TILE hash matrix coefficients Registers
 * This hash matrix is used to spread addresses among tiles/sets. HASH(15..0)[CO]\<22:7\>
 * must form an invertible matrix.
 * * SAM_TILE_HASH(15..10) - virtual tad pair index.
 * * SAM_TILE_HASH(9) - TAD number within a tile.
 * * SAM_TILE_HASH(8..0) - Set index.  [CO]\<15:7\> must form an invertible matrix.
 */
union cavm_sam_tile_hashx
{
    uint64_t u;
    struct cavm_sam_tile_hashx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_44_63        : 20;
        uint64_t co                    : 37; /**< [ 43:  7](SR/W) Hash matrix coefficient. */
        uint64_t reserved_0_6          : 7;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_6          : 7;
        uint64_t co                    : 37; /**< [ 43:  7](SR/W) Hash matrix coefficient. */
        uint64_t reserved_44_63        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_tile_hashx_s cn; */
};
typedef union cavm_sam_tile_hashx cavm_sam_tile_hashx_t;

static inline uint64_t CAVM_SAM_TILE_HASHX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_TILE_HASHX(uint64_t a)
{
    if (a<=15)
        return 0x87e059004200ll + 8ll * ((a) & 0xf);
    __cavm_csr_fatal("SAM_TILE_HASHX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_TILE_HASHX(a) cavm_sam_tile_hashx_t
#define bustype_CAVM_SAM_TILE_HASHX(a) CSR_TYPE_RSL
#define basename_CAVM_SAM_TILE_HASHX(a) "SAM_TILE_HASHX"
#define device_bar_CAVM_SAM_TILE_HASHX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_TILE_HASHX(a) (a)
#define arguments_CAVM_SAM_TILE_HASHX(a) (a),-1,-1,-1

/**
 * Register (RSL) sam_tile_ihash#
 *
 * SAM TILE hash matrix coefficients Registers
 * This matrix must be the inverse of SAM_TILE_HASH(0..8)[CO].
 */
union cavm_sam_tile_ihashx
{
    uint64_t u;
    struct cavm_sam_tile_ihashx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_44_63        : 20;
        uint64_t co                    : 37; /**< [ 43:  7](SR/W) Hash matrix coefficient. */
        uint64_t reserved_0_6          : 7;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_6          : 7;
        uint64_t co                    : 37; /**< [ 43:  7](SR/W) Hash matrix coefficient. */
        uint64_t reserved_44_63        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_tile_ihashx_s cn; */
};
typedef union cavm_sam_tile_ihashx cavm_sam_tile_ihashx_t;

static inline uint64_t CAVM_SAM_TILE_IHASHX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_TILE_IHASHX(uint64_t a)
{
    if (a<=8)
        return 0x87e059000400ll + 8ll * ((a) & 0xf);
    __cavm_csr_fatal("SAM_TILE_IHASHX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_TILE_IHASHX(a) cavm_sam_tile_ihashx_t
#define bustype_CAVM_SAM_TILE_IHASHX(a) CSR_TYPE_RSL
#define basename_CAVM_SAM_TILE_IHASHX(a) "SAM_TILE_IHASHX"
#define device_bar_CAVM_SAM_TILE_IHASHX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_TILE_IHASHX(a) (a)
#define arguments_CAVM_SAM_TILE_IHASHX(a) (a),-1,-1,-1

/**
 * Register (RSL) sam_vtadp_map#
 *
 * SAM Virtual Tad Pair Routing Map Registers
 * A table of routing destinations indexed by Virtual Tad Pair number.  If there are N
 * virtual tad pairs, and N \< 64, it is expected that software will map tad pair X+N
 * onto tad pair X, but with the valid bit cleared.
 */
union cavm_sam_vtadp_mapx
{
    uint64_t u;
    struct cavm_sam_vtadp_mapx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t val                   : 1;  /**< [  8:  8](SR/W) Valid. */
        uint64_t x                     : 4;  /**< [  7:  4](SR/W) Mesh X. All tads/cores start at column 1. */
        uint64_t y                     : 4;  /**< [  3:  0](SR/W) Mesh Y. All tads/cores start at row 1. */
#else /* Word 0 - Little Endian */
        uint64_t y                     : 4;  /**< [  3:  0](SR/W) Mesh Y. All tads/cores start at row 1. */
        uint64_t x                     : 4;  /**< [  7:  4](SR/W) Mesh X. All tads/cores start at column 1. */
        uint64_t val                   : 1;  /**< [  8:  8](SR/W) Valid. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_vtadp_mapx_s cn; */
};
typedef union cavm_sam_vtadp_mapx cavm_sam_vtadp_mapx_t;

static inline uint64_t CAVM_SAM_VTADP_MAPX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_VTADP_MAPX(uint64_t a)
{
    if (a<=63)
        return 0x87e059004000ll + 8ll * ((a) & 0x3f);
    __cavm_csr_fatal("SAM_VTADP_MAPX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_VTADP_MAPX(a) cavm_sam_vtadp_mapx_t
#define bustype_CAVM_SAM_VTADP_MAPX(a) CSR_TYPE_RSL
#define basename_CAVM_SAM_VTADP_MAPX(a) "SAM_VTADP_MAPX"
#define device_bar_CAVM_SAM_VTADP_MAPX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_VTADP_MAPX(a) (a)
#define arguments_CAVM_SAM_VTADP_MAPX(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_SAM_H__ */
