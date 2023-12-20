#ifndef __CAVM_CSRS_SAM_H__
#define __CAVM_CSRS_SAM_H__
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
 * SAM.
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
        uint64_t s_en                  : 1;  /**< [ 63: 63](SR/W) Enables secure access to region.  If both [S_EN] and [NS_EN] are set, the secure
                                                                 and non-secure region will alias in RAM and lead to coherence and security
                                                                 issues.  If neither [S_EN] or [NS_EN] is set, this region is invalid. */
        uint64_t ns_en                 : 1;  /**< [ 62: 62](SR/W) Enables nonsecure access to region. */
        uint64_t reserved_59_61        : 3;
        uint64_t f5                    : 1;  /**< [ 58: 58](SR/W) Specifies the number of factors of 5 in the number of RAM channels participating in this region. */
        uint64_t reserved_57           : 1;
        uint64_t f3                    : 1;  /**< [ 56: 56](SR/W) Specifies the number of factors of 3 in then umber of RAM channels participating in this region. */
        uint64_t reserved_55           : 1;
        uint64_t f2                    : 3;  /**< [ 54: 52](SR/W) Specifies the number of factors of 2 in the number of RAM channels participating
                                                                 in this region. Values \> 4 are undefined. */
        uint64_t chsize                : 4;  /**< [ 51: 48](SR/W) The per-channel size of this region, expressed as 2^(25+CHSIZE).  Generally, the
                                                                 ASC region size should equal the per-channel size multiplied by the channel
                                                                 count.  However, for the purposes of this constraint, two abutting ASC regions
                                                                 with identical configurations (other than security) can be combined. */
        uint64_t reserved_24_47        : 24;
        uint64_t dmc_mask              : 24; /**< [ 23:  0](SR/W) Specifies which DMCs are used by this region. Each bit corresponds to one DMC,
                                                                 with bit \<0\> for DMC0. The number of bits set must be 5^[F5]*3^[F3]*2^[F2]. */
#else /* Word 0 - Little Endian */
        uint64_t dmc_mask              : 24; /**< [ 23:  0](SR/W) Specifies which DMCs are used by this region. Each bit corresponds to one DMC,
                                                                 with bit \<0\> for DMC0. The number of bits set must be 5^[F5]*3^[F3]*2^[F2]. */
        uint64_t reserved_24_47        : 24;
        uint64_t chsize                : 4;  /**< [ 51: 48](SR/W) The per-channel size of this region, expressed as 2^(25+CHSIZE).  Generally, the
                                                                 ASC region size should equal the per-channel size multiplied by the channel
                                                                 count.  However, for the purposes of this constraint, two abutting ASC regions
                                                                 with identical configurations (other than security) can be combined. */
        uint64_t f2                    : 3;  /**< [ 54: 52](SR/W) Specifies the number of factors of 2 in the number of RAM channels participating
                                                                 in this region. Values \> 4 are undefined. */
        uint64_t reserved_55           : 1;
        uint64_t f3                    : 1;  /**< [ 56: 56](SR/W) Specifies the number of factors of 3 in then umber of RAM channels participating in this region. */
        uint64_t reserved_57           : 1;
        uint64_t f5                    : 1;  /**< [ 58: 58](SR/W) Specifies the number of factors of 5 in the number of RAM channels participating in this region. */
        uint64_t reserved_59_61        : 3;
        uint64_t ns_en                 : 1;  /**< [ 62: 62](SR/W) Enables nonsecure access to region. */
        uint64_t s_en                  : 1;  /**< [ 63: 63](SR/W) Enables secure access to region.  If both [S_EN] and [NS_EN] are set, the secure
                                                                 and non-secure region will alias in RAM and lead to coherence and security
                                                                 issues.  If neither [S_EN] or [NS_EN] is set, this region is invalid. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_asc_regionx_attr_s cn; */
};
typedef union cavm_sam_asc_regionx_attr cavm_sam_asc_regionx_attr_t;

static inline uint64_t CAVM_SAM_ASC_REGIONX_ATTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_ASC_REGIONX_ATTR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=23))
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
        uint64_t addr                  : 21; /**< [ 43: 23](SR/W) Physical address \<43:23\> marking the inclusive end of the
                                                                 corresponding ASC region, where bits \<22:0\> are implied to be all-ones. See
                                                                 SAM_ASC_REGION()_START[ADDR].

                                                                 The ending address must be a multiple (less 1) of the number of DMC's
                                                                 participating in the striping group or abut another region in the same striping
                                                                 group. */
        uint64_t reserved_0_22         : 23;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_22         : 23;
        uint64_t addr                  : 21; /**< [ 43: 23](SR/W) Physical address \<43:23\> marking the inclusive end of the
                                                                 corresponding ASC region, where bits \<22:0\> are implied to be all-ones. See
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
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=23))
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
        uint64_t reserved_40_63        : 24;
        uint64_t offset                : 10; /**< [ 39: 30](SR/W) For each region, the offset to add to the DRAM line address to get the final DMC
                                                                 address. */
        uint64_t reserved_0_29         : 30;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_29         : 30;
        uint64_t offset                : 10; /**< [ 39: 30](SR/W) For each region, the offset to add to the DRAM line address to get the final DMC
                                                                 address. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_asc_regionx_offset_s cn; */
};
typedef union cavm_sam_asc_regionx_offset cavm_sam_asc_regionx_offset_t;

static inline uint64_t CAVM_SAM_ASC_REGIONX_OFFSET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_ASC_REGIONX_OFFSET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=23))
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
        uint64_t addr                  : 21; /**< [ 43: 23](SR/W) Physical address \<43:23\> marking the start of the corresponding ASC
                                                                 region. The region will match if:

                                                                 _ SAM_ASC_REGION()_START[ADDR] \<= phys_addr\<43:23\> \<= SAM_ASC_REGION()_END[ADDR].
                                                                 and [S_EN] or [NS_EN] (depending on the security of the access) is set.

                                                                 Software must ensure that regions do not overlap.  The start address must be a
                                                                 multiple of the number of DMC's participating in the striping group or abut
                                                                 another region in the same striping group.

                                                                 To indicate an invalid region, clear both the corresponding SAM_ASC_REGION()_ATTR[S_EN] and
                                                                 SAM_ASC_REGION()_ATTR[NS_EN]. */
        uint64_t reserved_0_22         : 23;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_22         : 23;
        uint64_t addr                  : 21; /**< [ 43: 23](SR/W) Physical address \<43:23\> marking the start of the corresponding ASC
                                                                 region. The region will match if:

                                                                 _ SAM_ASC_REGION()_START[ADDR] \<= phys_addr\<43:23\> \<= SAM_ASC_REGION()_END[ADDR].
                                                                 and [S_EN] or [NS_EN] (depending on the security of the access) is set.

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
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=23))
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
 * Register (RSL) sam_hash#
 *
 * SAM hash matrix coefficients Registers
 * This hash matrix is used to spread addresses among tiles/sets. Each register
 * represents an output bit. Each coefficient bit represents inputs that are XOR'd to
 * create the output bit. bit. HASH(16..0)[CO]\<22:6\> must form an invertible
 * matrix. Input bit 6 must only affect output bit 6. Input bit 7 must only affect
 * output bits 6 and 7.
 */
union cavm_sam_hashx
{
    uint64_t u;
    struct cavm_sam_hashx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_44_63        : 20;
        uint64_t co                    : 38; /**< [ 43:  6](SR/W) Hash matrix coefficient. */
        uint64_t reserved_0_5          : 6;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_5          : 6;
        uint64_t co                    : 38; /**< [ 43:  6](SR/W) Hash matrix coefficient. */
        uint64_t reserved_44_63        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_hashx_s cn; */
};
typedef union cavm_sam_hashx cavm_sam_hashx_t;

static inline uint64_t CAVM_SAM_HASHX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_HASHX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=16))
        return 0x87e059005c00ll + 8ll * ((a) & 0x1f);
    __cavm_csr_fatal("SAM_HASHX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_HASHX(a) cavm_sam_hashx_t
#define bustype_CAVM_SAM_HASHX(a) CSR_TYPE_RSL
#define basename_CAVM_SAM_HASHX(a) "SAM_HASHX"
#define device_bar_CAVM_SAM_HASHX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_HASHX(a) (a)
#define arguments_CAVM_SAM_HASHX(a) (a),-1,-1,-1

/**
 * Register (RSL) sam_ihash#
 *
 * SAM inverse hash matrix coefficients Registers
 * This matrix must be the inverse of SAM_HASH
 */
union cavm_sam_ihashx
{
    uint64_t u;
    struct cavm_sam_ihashx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_44_63        : 20;
        uint64_t co                    : 38; /**< [ 43:  6](SR/W) Hash matrix coefficient. */
        uint64_t reserved_0_5          : 6;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_5          : 6;
        uint64_t co                    : 38; /**< [ 43:  6](SR/W) Hash matrix coefficient. */
        uint64_t reserved_44_63        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_ihashx_s cn; */
};
typedef union cavm_sam_ihashx cavm_sam_ihashx_t;

static inline uint64_t CAVM_SAM_IHASHX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_IHASHX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=16))
        return 0x87e059005d00ll + 8ll * ((a) & 0x1f);
    __cavm_csr_fatal("SAM_IHASHX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_IHASHX(a) cavm_sam_ihashx_t
#define bustype_CAVM_SAM_IHASHX(a) CSR_TYPE_RSL
#define basename_CAVM_SAM_IHASHX(a) "SAM_IHASHX"
#define device_bar_CAVM_SAM_IHASHX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_IHASHX(a) (a)
#define arguments_CAVM_SAM_IHASHX(a) (a),-1,-1,-1

/**
 * Register (RSL) sam_mn_map#
 *
 * SAM MN Map Registers
 * These registers specify the location of MN.  Note that it is illegal to provision an
 * MN on a tile with a TAD that is disabled for any reason.
 */
union cavm_sam_mn_mapx
{
    uint64_t u;
    struct cavm_sam_mn_mapx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t val                   : 1;  /**< [  8:  8](SR/W) Valid. */
        uint64_t x                     : 4;  /**< [  7:  4](SR/W) Mesh X location. */
        uint64_t y                     : 4;  /**< [  3:  0](SR/W) Mesh Y location. */
#else /* Word 0 - Little Endian */
        uint64_t y                     : 4;  /**< [  3:  0](SR/W) Mesh Y location. */
        uint64_t x                     : 4;  /**< [  7:  4](SR/W) Mesh X location. */
        uint64_t val                   : 1;  /**< [  8:  8](SR/W) Valid. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_mn_mapx_s cn; */
};
typedef union cavm_sam_mn_mapx cavm_sam_mn_mapx_t;

static inline uint64_t CAVM_SAM_MN_MAPX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_MN_MAPX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=7))
        return 0x87e059005f80ll + 8ll * ((a) & 0x7);
    __cavm_csr_fatal("SAM_MN_MAPX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_MN_MAPX(a) cavm_sam_mn_mapx_t
#define bustype_CAVM_SAM_MN_MAPX(a) CSR_TYPE_RSL
#define basename_CAVM_SAM_MN_MAPX(a) "SAM_MN_MAPX"
#define device_bar_CAVM_SAM_MN_MAPX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_MN_MAPX(a) (a)
#define arguments_CAVM_SAM_MN_MAPX(a) (a),-1,-1,-1

/**
 * Register (RSL) sam_ncb#_bridge_base
 *
 * SAM NCB Bridge Base Address Registers
 * Base of the NCB bridge.  Address bit 47 is always 0.  Address bits below 20 are
 * always 0.  Only NCBs with devices not
 * covered by other tables need to be included.
 */
union cavm_sam_ncbx_bridge_base
{
    uint64_t u;
    struct cavm_sam_ncbx_bridge_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t valid                 : 1;  /**< [ 63: 63](SR/W) This entry is valid. */
        uint64_t reserved_62           : 1;
        uint64_t ncb                   : 2;  /**< [ 61: 60](SR/W) The NCB within the IOB to route to. */
        uint64_t reserved_59           : 1;
        uint64_t iob                   : 3;  /**< [ 58: 56](SR/W) The IOB to route to. */
        uint64_t reserved_47_55        : 9;
        uint64_t addr                  : 27; /**< [ 46: 20](SR/W) Address. */
        uint64_t reserved_0_19         : 20;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_19         : 20;
        uint64_t addr                  : 27; /**< [ 46: 20](SR/W) Address. */
        uint64_t reserved_47_55        : 9;
        uint64_t iob                   : 3;  /**< [ 58: 56](SR/W) The IOB to route to. */
        uint64_t reserved_59           : 1;
        uint64_t ncb                   : 2;  /**< [ 61: 60](SR/W) The NCB within the IOB to route to. */
        uint64_t reserved_62           : 1;
        uint64_t valid                 : 1;  /**< [ 63: 63](SR/W) This entry is valid. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_ncbx_bridge_base_s cn; */
};
typedef union cavm_sam_ncbx_bridge_base cavm_sam_ncbx_bridge_base_t;

static inline uint64_t CAVM_SAM_NCBX_BRIDGE_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_NCBX_BRIDGE_BASE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=11))
        return 0x87e059005000ll + 0x10ll * ((a) & 0xf);
    __cavm_csr_fatal("SAM_NCBX_BRIDGE_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_NCBX_BRIDGE_BASE(a) cavm_sam_ncbx_bridge_base_t
#define bustype_CAVM_SAM_NCBX_BRIDGE_BASE(a) CSR_TYPE_RSL
#define basename_CAVM_SAM_NCBX_BRIDGE_BASE(a) "SAM_NCBX_BRIDGE_BASE"
#define device_bar_CAVM_SAM_NCBX_BRIDGE_BASE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_NCBX_BRIDGE_BASE(a) (a)
#define arguments_CAVM_SAM_NCBX_BRIDGE_BASE(a) (a),-1,-1,-1

/**
 * Register (RSL) sam_ncb#_bridge_limit
 *
 * SAM NCB Bridge Limit Registers
 * Inclusive Limit of the NCB bridge.  Address bit 47 is always 0.  Address bits below
 * 20 are treated as 1.
 */
union cavm_sam_ncbx_bridge_limit
{
    uint64_t u;
    struct cavm_sam_ncbx_bridge_limit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_47_63        : 17;
        uint64_t addr                  : 27; /**< [ 46: 20](SR/W) Address. */
        uint64_t reserved_0_19         : 20;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_19         : 20;
        uint64_t addr                  : 27; /**< [ 46: 20](SR/W) Address. */
        uint64_t reserved_47_63        : 17;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_ncbx_bridge_limit_s cn; */
};
typedef union cavm_sam_ncbx_bridge_limit cavm_sam_ncbx_bridge_limit_t;

static inline uint64_t CAVM_SAM_NCBX_BRIDGE_LIMIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_NCBX_BRIDGE_LIMIT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=11))
        return 0x87e059005008ll + 0x10ll * ((a) & 0xf);
    __cavm_csr_fatal("SAM_NCBX_BRIDGE_LIMIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_NCBX_BRIDGE_LIMIT(a) cavm_sam_ncbx_bridge_limit_t
#define bustype_CAVM_SAM_NCBX_BRIDGE_LIMIT(a) CSR_TYPE_RSL
#define basename_CAVM_SAM_NCBX_BRIDGE_LIMIT(a) "SAM_NCBX_BRIDGE_LIMIT"
#define device_bar_CAVM_SAM_NCBX_BRIDGE_LIMIT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_NCBX_BRIDGE_LIMIT(a) (a)
#define arguments_CAVM_SAM_NCBX_BRIDGE_LIMIT(a) (a),-1,-1,-1

/**
 * Register (RSL) sam_pci#_bridge_base
 *
 * SAM PCI Bridge Base Address Registers
 * Base of the PCI bridge.  Address bit 47 is always 0.  Address bits below 20 are always 0.
 */
union cavm_sam_pcix_bridge_base
{
    uint64_t u;
    struct cavm_sam_pcix_bridge_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t valid                 : 1;  /**< [ 63: 63](SR/W) This entry is valid. */
        uint64_t reserved_62           : 1;
        uint64_t ncb                   : 2;  /**< [ 61: 60](SR/W) The NCB within the IOB to route to. */
        uint64_t reserved_59           : 1;
        uint64_t iob                   : 3;  /**< [ 58: 56](SR/W) The IOB to route to. */
        uint64_t arbid                 : 4;  /**< [ 55: 52](SR/W) The ARB within the NCB to route to. */
        uint64_t reserved_47_51        : 5;
        uint64_t addr                  : 27; /**< [ 46: 20](SR/W) Address. */
        uint64_t reserved_0_19         : 20;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_19         : 20;
        uint64_t addr                  : 27; /**< [ 46: 20](SR/W) Address. */
        uint64_t reserved_47_51        : 5;
        uint64_t arbid                 : 4;  /**< [ 55: 52](SR/W) The ARB within the NCB to route to. */
        uint64_t iob                   : 3;  /**< [ 58: 56](SR/W) The IOB to route to. */
        uint64_t reserved_59           : 1;
        uint64_t ncb                   : 2;  /**< [ 61: 60](SR/W) The NCB within the IOB to route to. */
        uint64_t reserved_62           : 1;
        uint64_t valid                 : 1;  /**< [ 63: 63](SR/W) This entry is valid. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_pcix_bridge_base_s cn; */
};
typedef union cavm_sam_pcix_bridge_base cavm_sam_pcix_bridge_base_t;

static inline uint64_t CAVM_SAM_PCIX_BRIDGE_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_PCIX_BRIDGE_BASE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=11))
        return 0x87e059005400ll + 0x10ll * ((a) & 0xf);
    __cavm_csr_fatal("SAM_PCIX_BRIDGE_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_PCIX_BRIDGE_BASE(a) cavm_sam_pcix_bridge_base_t
#define bustype_CAVM_SAM_PCIX_BRIDGE_BASE(a) CSR_TYPE_RSL
#define basename_CAVM_SAM_PCIX_BRIDGE_BASE(a) "SAM_PCIX_BRIDGE_BASE"
#define device_bar_CAVM_SAM_PCIX_BRIDGE_BASE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_PCIX_BRIDGE_BASE(a) (a)
#define arguments_CAVM_SAM_PCIX_BRIDGE_BASE(a) (a),-1,-1,-1

/**
 * Register (RSL) sam_pci#_bridge_limit
 *
 * SAM NCB Bridge Limit Registers
 * Inclusive Limit of the PCI bridge.  Address bit 47 is always 0.  Address bits below
 * 20 are treated as 1.
 */
union cavm_sam_pcix_bridge_limit
{
    uint64_t u;
    struct cavm_sam_pcix_bridge_limit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_47_63        : 17;
        uint64_t addr                  : 27; /**< [ 46: 20](SR/W) Address. */
        uint64_t reserved_0_19         : 20;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_19         : 20;
        uint64_t addr                  : 27; /**< [ 46: 20](SR/W) Address. */
        uint64_t reserved_47_63        : 17;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_pcix_bridge_limit_s cn; */
};
typedef union cavm_sam_pcix_bridge_limit cavm_sam_pcix_bridge_limit_t;

static inline uint64_t CAVM_SAM_PCIX_BRIDGE_LIMIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_PCIX_BRIDGE_LIMIT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=11))
        return 0x87e059005408ll + 0x10ll * ((a) & 0xf);
    __cavm_csr_fatal("SAM_PCIX_BRIDGE_LIMIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_PCIX_BRIDGE_LIMIT(a) cavm_sam_pcix_bridge_limit_t
#define bustype_CAVM_SAM_PCIX_BRIDGE_LIMIT(a) CSR_TYPE_RSL
#define basename_CAVM_SAM_PCIX_BRIDGE_LIMIT(a) "SAM_PCIX_BRIDGE_LIMIT"
#define device_bar_CAVM_SAM_PCIX_BRIDGE_LIMIT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_PCIX_BRIDGE_LIMIT(a) (a)
#define arguments_CAVM_SAM_PCIX_BRIDGE_LIMIT(a) (a),-1,-1,-1

/**
 * Register (RSL) sam_pn_map#
 *
 * SAM Processor Number Routing Map Registers
 * A table of routing destinations indexed by logical processor number. The default
 * numbering is row-major.
 */
union cavm_sam_pn_mapx
{
    uint64_t u;
    struct cavm_sam_pn_mapx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t val                   : 1;  /**< [  8:  8](SR/W) Valid. */
        uint64_t x                     : 4;  /**< [  7:  4](SR/W) Mesh X location. */
        uint64_t y                     : 4;  /**< [  3:  0](SR/W) Mesh Y location. */
#else /* Word 0 - Little Endian */
        uint64_t y                     : 4;  /**< [  3:  0](SR/W) Mesh Y location. */
        uint64_t x                     : 4;  /**< [  7:  4](SR/W) Mesh X location. */
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
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=63))
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
 * Register (RSL) sam_rbh_bridge_base
 *
 * SAM PCI Bridge Base Address Register
 * Base of the RBH bridge.  Address bit 47 is always 0.  Address bits below 20 are always 0.
 */
union cavm_sam_rbh_bridge_base
{
    uint64_t u;
    struct cavm_sam_rbh_bridge_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t valid                 : 1;  /**< [ 63: 63](SR/W) This entry is valid. */
        uint64_t reserved_62           : 1;
        uint64_t ncb                   : 2;  /**< [ 61: 60](SR/W) The NCB within the IOB to route to. */
        uint64_t reserved_59           : 1;
        uint64_t iob                   : 3;  /**< [ 58: 56](SR/W) The IOB to route to. */
        uint64_t arbid                 : 4;  /**< [ 55: 52](SR/W) The ARB within the NCB to route to. */
        uint64_t reserved_47_51        : 5;
        uint64_t addr                  : 27; /**< [ 46: 20](SR/W) Address. */
        uint64_t reserved_0_19         : 20;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_19         : 20;
        uint64_t addr                  : 27; /**< [ 46: 20](SR/W) Address. */
        uint64_t reserved_47_51        : 5;
        uint64_t arbid                 : 4;  /**< [ 55: 52](SR/W) The ARB within the NCB to route to. */
        uint64_t iob                   : 3;  /**< [ 58: 56](SR/W) The IOB to route to. */
        uint64_t reserved_59           : 1;
        uint64_t ncb                   : 2;  /**< [ 61: 60](SR/W) The NCB within the IOB to route to. */
        uint64_t reserved_62           : 1;
        uint64_t valid                 : 1;  /**< [ 63: 63](SR/W) This entry is valid. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_rbh_bridge_base_s cn; */
};
typedef union cavm_sam_rbh_bridge_base cavm_sam_rbh_bridge_base_t;

#define CAVM_SAM_RBH_BRIDGE_BASE CAVM_SAM_RBH_BRIDGE_BASE_FUNC()
static inline uint64_t CAVM_SAM_RBH_BRIDGE_BASE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_RBH_BRIDGE_BASE_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e059005ff0ll;
    __cavm_csr_fatal("SAM_RBH_BRIDGE_BASE", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_RBH_BRIDGE_BASE cavm_sam_rbh_bridge_base_t
#define bustype_CAVM_SAM_RBH_BRIDGE_BASE CSR_TYPE_RSL
#define basename_CAVM_SAM_RBH_BRIDGE_BASE "SAM_RBH_BRIDGE_BASE"
#define device_bar_CAVM_SAM_RBH_BRIDGE_BASE 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_RBH_BRIDGE_BASE 0
#define arguments_CAVM_SAM_RBH_BRIDGE_BASE -1,-1,-1,-1

/**
 * Register (RSL) sam_rbh_bridge_limit
 *
 * SAM RBH Bridge Limit Address Register
 * Inclusive Limit of the RBH bridge.  Address bit 47 is always 0.  Address bits below
 * 20 are treated as 1.
 */
union cavm_sam_rbh_bridge_limit
{
    uint64_t u;
    struct cavm_sam_rbh_bridge_limit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_47_63        : 17;
        uint64_t addr                  : 27; /**< [ 46: 20](SR/W) Address. */
        uint64_t reserved_0_19         : 20;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_19         : 20;
        uint64_t addr                  : 27; /**< [ 46: 20](SR/W) Address. */
        uint64_t reserved_47_63        : 17;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_rbh_bridge_limit_s cn; */
};
typedef union cavm_sam_rbh_bridge_limit cavm_sam_rbh_bridge_limit_t;

#define CAVM_SAM_RBH_BRIDGE_LIMIT CAVM_SAM_RBH_BRIDGE_LIMIT_FUNC()
static inline uint64_t CAVM_SAM_RBH_BRIDGE_LIMIT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_RBH_BRIDGE_LIMIT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e059005ff8ll;
    __cavm_csr_fatal("SAM_RBH_BRIDGE_LIMIT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_RBH_BRIDGE_LIMIT cavm_sam_rbh_bridge_limit_t
#define bustype_CAVM_SAM_RBH_BRIDGE_LIMIT CSR_TYPE_RSL
#define basename_CAVM_SAM_RBH_BRIDGE_LIMIT "SAM_RBH_BRIDGE_LIMIT"
#define device_bar_CAVM_SAM_RBH_BRIDGE_LIMIT 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_RBH_BRIDGE_LIMIT 0
#define arguments_CAVM_SAM_RBH_BRIDGE_LIMIT -1,-1,-1,-1

/**
 * Register (RSL) sam_rvu_bar04_region#
 *
 * SAM RVU BAR0 BAR4 Base Address Registers
 * Base of the RVU BAR0/4 region.  Address bit 47 is always 0.  Address bits below 34 are always 0.
 */
union cavm_sam_rvu_bar04_regionx
{
    uint64_t u;
    struct cavm_sam_rvu_bar04_regionx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t valid                 : 1;  /**< [ 63: 63](SR/W) This entry is valid. */
        uint64_t reserved_62           : 1;
        uint64_t bar                   : 1;  /**< [ 61: 61](SR/W) 0 - BAR0
                                                                 1 - BAR4 */
        uint64_t lf                    : 5;  /**< [ 60: 56](SR/W) The LF number.  Must be 0 if BAR0. */
        uint64_t reserved_47_55        : 9;
        uint64_t addr                  : 13; /**< [ 46: 34](SR/W) Address. */
        uint64_t reserved_0_33         : 34;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_33         : 34;
        uint64_t addr                  : 13; /**< [ 46: 34](SR/W) Address. */
        uint64_t reserved_47_55        : 9;
        uint64_t lf                    : 5;  /**< [ 60: 56](SR/W) The LF number.  Must be 0 if BAR0. */
        uint64_t bar                   : 1;  /**< [ 61: 61](SR/W) 0 - BAR0
                                                                 1 - BAR4 */
        uint64_t reserved_62           : 1;
        uint64_t valid                 : 1;  /**< [ 63: 63](SR/W) This entry is valid. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_rvu_bar04_regionx_s cn; */
};
typedef union cavm_sam_rvu_bar04_regionx cavm_sam_rvu_bar04_regionx_t;

static inline uint64_t CAVM_SAM_RVU_BAR04_REGIONX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_RVU_BAR04_REGIONX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=8))
        return 0x87e059005a00ll + 8ll * ((a) & 0xf);
    __cavm_csr_fatal("SAM_RVU_BAR04_REGIONX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_RVU_BAR04_REGIONX(a) cavm_sam_rvu_bar04_regionx_t
#define bustype_CAVM_SAM_RVU_BAR04_REGIONX(a) CSR_TYPE_RSL
#define basename_CAVM_SAM_RVU_BAR04_REGIONX(a) "SAM_RVU_BAR04_REGIONX"
#define device_bar_CAVM_SAM_RVU_BAR04_REGIONX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_RVU_BAR04_REGIONX(a) (a)
#define arguments_CAVM_SAM_RVU_BAR04_REGIONX(a) (a),-1,-1,-1

/**
 * Register (RSL) sam_rvu_block#_info
 *
 * SAM RVU Block Information Registers
 * Information for each RVU block.
 */
union cavm_sam_rvu_blockx_info
{
    uint64_t u;
    struct cavm_sam_rvu_blockx_info_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t valid                 : 1;  /**< [ 63: 63](SR/W) This entry is valid. */
        uint64_t reserved_62           : 1;
        uint64_t ncb                   : 2;  /**< [ 61: 60](SR/W) The NCB within the IOB to route to. */
        uint64_t reserved_59           : 1;
        uint64_t iob                   : 3;  /**< [ 58: 56](SR/W) The IOB to route to. */
        uint64_t arbid                 : 4;  /**< [ 55: 52](SR/W) The ARB within the NCB to route to. */
        uint64_t clas                  : 1;  /**< [ 51: 51](SR/W) 0 - class A, 1 - class B */
        uint64_t reserved_50           : 1;
        uint64_t strm                  : 2;  /**< [ 49: 48](SR/W) stream */
        uint64_t reserved_0_47         : 48;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_47         : 48;
        uint64_t strm                  : 2;  /**< [ 49: 48](SR/W) stream */
        uint64_t reserved_50           : 1;
        uint64_t clas                  : 1;  /**< [ 51: 51](SR/W) 0 - class A, 1 - class B */
        uint64_t arbid                 : 4;  /**< [ 55: 52](SR/W) The ARB within the NCB to route to. */
        uint64_t iob                   : 3;  /**< [ 58: 56](SR/W) The IOB to route to. */
        uint64_t reserved_59           : 1;
        uint64_t ncb                   : 2;  /**< [ 61: 60](SR/W) The NCB within the IOB to route to. */
        uint64_t reserved_62           : 1;
        uint64_t valid                 : 1;  /**< [ 63: 63](SR/W) This entry is valid. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_rvu_blockx_info_s cn; */
};
typedef union cavm_sam_rvu_blockx_info cavm_sam_rvu_blockx_info_t;

static inline uint64_t CAVM_SAM_RVU_BLOCKX_INFO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_RVU_BLOCKX_INFO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=63))
        return 0x87e059005800ll + 8ll * ((a) & 0x3f);
    __cavm_csr_fatal("SAM_RVU_BLOCKX_INFO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_RVU_BLOCKX_INFO(a) cavm_sam_rvu_blockx_info_t
#define bustype_CAVM_SAM_RVU_BLOCKX_INFO(a) CSR_TYPE_RSL
#define basename_CAVM_SAM_RVU_BLOCKX_INFO(a) "SAM_RVU_BLOCKX_INFO"
#define device_bar_CAVM_SAM_RVU_BLOCKX_INFO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_RVU_BLOCKX_INFO(a) (a)
#define arguments_CAVM_SAM_RVU_BLOCKX_INFO(a) (a),-1,-1,-1

/**
 * Register (RSL) sam_rvu_bridge_base
 *
 * SAM RVU Bridge Base Address Register
 * Base of the RVU Bridge.  Address bit 47 is always 0.  Address bits below 20 are always 0.
 */
union cavm_sam_rvu_bridge_base
{
    uint64_t u;
    struct cavm_sam_rvu_bridge_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t valid                 : 1;  /**< [ 63: 63](SR/W) This entry is valid. */
        uint64_t reserved_47_62        : 16;
        uint64_t addr                  : 27; /**< [ 46: 20](SR/W) Address. */
        uint64_t reserved_0_19         : 20;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_19         : 20;
        uint64_t addr                  : 27; /**< [ 46: 20](SR/W) Address. */
        uint64_t reserved_47_62        : 16;
        uint64_t valid                 : 1;  /**< [ 63: 63](SR/W) This entry is valid. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_rvu_bridge_base_s cn; */
};
typedef union cavm_sam_rvu_bridge_base cavm_sam_rvu_bridge_base_t;

#define CAVM_SAM_RVU_BRIDGE_BASE CAVM_SAM_RVU_BRIDGE_BASE_FUNC()
static inline uint64_t CAVM_SAM_RVU_BRIDGE_BASE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_RVU_BRIDGE_BASE_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e059005fe0ll;
    __cavm_csr_fatal("SAM_RVU_BRIDGE_BASE", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_RVU_BRIDGE_BASE cavm_sam_rvu_bridge_base_t
#define bustype_CAVM_SAM_RVU_BRIDGE_BASE CSR_TYPE_RSL
#define basename_CAVM_SAM_RVU_BRIDGE_BASE "SAM_RVU_BRIDGE_BASE"
#define device_bar_CAVM_SAM_RVU_BRIDGE_BASE 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_RVU_BRIDGE_BASE 0
#define arguments_CAVM_SAM_RVU_BRIDGE_BASE -1,-1,-1,-1

/**
 * Register (RSL) sam_rvu_bridge_limit
 *
 * SAM RBH Bridge Limit Address Register
 * Inclusive Limit of the RBH bridge.  Address bit 47 is always 0.  Address bits below
 * 20 are treated as 1.
 */
union cavm_sam_rvu_bridge_limit
{
    uint64_t u;
    struct cavm_sam_rvu_bridge_limit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_47_63        : 17;
        uint64_t addr                  : 27; /**< [ 46: 20](SR/W) Address. */
        uint64_t reserved_0_19         : 20;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_19         : 20;
        uint64_t addr                  : 27; /**< [ 46: 20](SR/W) Address. */
        uint64_t reserved_47_63        : 17;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_rvu_bridge_limit_s cn; */
};
typedef union cavm_sam_rvu_bridge_limit cavm_sam_rvu_bridge_limit_t;

#define CAVM_SAM_RVU_BRIDGE_LIMIT CAVM_SAM_RVU_BRIDGE_LIMIT_FUNC()
static inline uint64_t CAVM_SAM_RVU_BRIDGE_LIMIT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_RVU_BRIDGE_LIMIT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e059005fe8ll;
    __cavm_csr_fatal("SAM_RVU_BRIDGE_LIMIT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_RVU_BRIDGE_LIMIT cavm_sam_rvu_bridge_limit_t
#define bustype_CAVM_SAM_RVU_BRIDGE_LIMIT CSR_TYPE_RSL
#define basename_CAVM_SAM_RVU_BRIDGE_LIMIT "SAM_RVU_BRIDGE_LIMIT"
#define device_bar_CAVM_SAM_RVU_BRIDGE_LIMIT 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_RVU_BRIDGE_LIMIT 0
#define arguments_CAVM_SAM_RVU_BRIDGE_LIMIT -1,-1,-1,-1

/**
 * Register (RSL) sam_rvu_pf#_bar2
 *
 * SAM RVU PFx BAR2 Register
 * Address of the RVU PF.  Address bit 47 is always 0.  Address bits below 26 are treated as 1.
 */
union cavm_sam_rvu_pfx_bar2
{
    uint64_t u;
    struct cavm_sam_rvu_pfx_bar2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t valid                 : 1;  /**< [ 63: 63](SR/W) This entry is valid. */
        uint64_t pf                    : 7;  /**< [ 62: 56](SR/W) PF */
        uint64_t func                  : 8;  /**< [ 55: 48](SR/W) FUNC */
        uint64_t reserved_47           : 1;
        uint64_t addr                  : 21; /**< [ 46: 26](SR/W) Address. */
        uint64_t reserved_0_25         : 26;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_25         : 26;
        uint64_t addr                  : 21; /**< [ 46: 26](SR/W) Address. */
        uint64_t reserved_47           : 1;
        uint64_t func                  : 8;  /**< [ 55: 48](SR/W) FUNC */
        uint64_t pf                    : 7;  /**< [ 62: 56](SR/W) PF */
        uint64_t valid                 : 1;  /**< [ 63: 63](SR/W) This entry is valid. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_rvu_pfx_bar2_s cn; */
};
typedef union cavm_sam_rvu_pfx_bar2 cavm_sam_rvu_pfx_bar2_t;

static inline uint64_t CAVM_SAM_RVU_PFX_BAR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_RVU_PFX_BAR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=95))
        return 0x87e05900d800ll + 8ll * ((a) & 0x7f);
    __cavm_csr_fatal("SAM_RVU_PFX_BAR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_RVU_PFX_BAR2(a) cavm_sam_rvu_pfx_bar2_t
#define bustype_CAVM_SAM_RVU_PFX_BAR2(a) CSR_TYPE_RSL
#define basename_CAVM_SAM_RVU_PFX_BAR2(a) "SAM_RVU_PFX_BAR2"
#define device_bar_CAVM_SAM_RVU_PFX_BAR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_RVU_PFX_BAR2(a) (a)
#define arguments_CAVM_SAM_RVU_PFX_BAR2(a) (a),-1,-1,-1

/**
 * Register (RSL) sam_rvu_vf#_bar2
 *
 * SAM RVU PFx BAR2 Register
 * Address of the RVU PF.  Address bit 47 is always 0.  Address bits below 26 are treated as 1.
 */
union cavm_sam_rvu_vfx_bar2
{
    uint64_t u;
    struct cavm_sam_rvu_vfx_bar2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t valid                 : 1;  /**< [ 63: 63](SR/W) This entry is valid. */
        uint64_t pf                    : 7;  /**< [ 62: 56](SR/W) PF */
        uint64_t func                  : 8;  /**< [ 55: 48](SR/W) FUNC */
        uint64_t reserved_47           : 1;
        uint64_t addr                  : 21; /**< [ 46: 26](SR/W) Address. */
        uint64_t reserved_0_25         : 26;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_25         : 26;
        uint64_t addr                  : 21; /**< [ 46: 26](SR/W) Address. */
        uint64_t reserved_47           : 1;
        uint64_t func                  : 8;  /**< [ 55: 48](SR/W) FUNC */
        uint64_t pf                    : 7;  /**< [ 62: 56](SR/W) PF */
        uint64_t valid                 : 1;  /**< [ 63: 63](SR/W) This entry is valid. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_rvu_vfx_bar2_s cn; */
};
typedef union cavm_sam_rvu_vfx_bar2 cavm_sam_rvu_vfx_bar2_t;

static inline uint64_t CAVM_SAM_RVU_VFX_BAR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_RVU_VFX_BAR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=95))
        return 0x87e05900dc00ll + 8ll * ((a) & 0x7f);
    __cavm_csr_fatal("SAM_RVU_VFX_BAR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_RVU_VFX_BAR2(a) cavm_sam_rvu_vfx_bar2_t
#define bustype_CAVM_SAM_RVU_VFX_BAR2(a) CSR_TYPE_RSL
#define basename_CAVM_SAM_RVU_VFX_BAR2(a) "SAM_RVU_VFX_BAR2"
#define device_bar_CAVM_SAM_RVU_VFX_BAR2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_RVU_VFX_BAR2(a) (a)
#define arguments_CAVM_SAM_RVU_VFX_BAR2(a) (a),-1,-1,-1

/**
 * Register (RSL) sam_tad_map#
 *
 * SAM Logical Tad Routing Map Registers
 * A table of routing destinations indexed by logical tad number. The default numbering
 * is row/column/tad.
 */
union cavm_sam_tad_mapx
{
    uint64_t u;
    struct cavm_sam_tad_mapx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t tad                   : 1;  /**< [  9:  9](SR/W) TAD number. */
        uint64_t val                   : 1;  /**< [  8:  8](SR/W) Valid. */
        uint64_t x                     : 4;  /**< [  7:  4](SR/W) Mesh X location. */
        uint64_t y                     : 4;  /**< [  3:  0](SR/W) Mesh Y location. */
#else /* Word 0 - Little Endian */
        uint64_t y                     : 4;  /**< [  3:  0](SR/W) Mesh Y location. */
        uint64_t x                     : 4;  /**< [  7:  4](SR/W) Mesh X location. */
        uint64_t val                   : 1;  /**< [  8:  8](SR/W) Valid. */
        uint64_t tad                   : 1;  /**< [  9:  9](SR/W) TAD number. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_sam_tad_mapx_s cn; */
};
typedef union cavm_sam_tad_mapx cavm_sam_tad_mapx_t;

static inline uint64_t CAVM_SAM_TAD_MAPX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_SAM_TAD_MAPX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=127))
        return 0x87e059004000ll + 8ll * ((a) & 0x7f);
    __cavm_csr_fatal("SAM_TAD_MAPX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_SAM_TAD_MAPX(a) cavm_sam_tad_mapx_t
#define bustype_CAVM_SAM_TAD_MAPX(a) CSR_TYPE_RSL
#define basename_CAVM_SAM_TAD_MAPX(a) "SAM_TAD_MAPX"
#define device_bar_CAVM_SAM_TAD_MAPX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_SAM_TAD_MAPX(a) (a)
#define arguments_CAVM_SAM_TAD_MAPX(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_SAM_H__ */
