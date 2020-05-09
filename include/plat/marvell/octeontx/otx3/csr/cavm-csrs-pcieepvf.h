#ifndef __CAVM_CSRS_PCIEEPVF_H__
#define __CAVM_CSRS_PCIEEPVF_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2020 Marvell International Ltd.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX PCIEEPVF.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (PCICONFIGEPVF) pcieepvf_acs_cap_ctl
 *
 * PCIe VF ACS Capability and Control Register
 */
union cavm_pcieepvf_acs_cap_ctl
{
    uint32_t u;
    struct cavm_pcieepvf_acs_cap_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_23_31        : 9;
        uint32_t dte                   : 1;  /**< [ 22: 22](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[DTE]. */
        uint32_t ece                   : 1;  /**< [ 21: 21](R/W) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[ECE]. */
        uint32_t ufe                   : 1;  /**< [ 20: 20](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[UFE]. */
        uint32_t cre                   : 1;  /**< [ 19: 19](R/W) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[CRE]. */
        uint32_t rre                   : 1;  /**< [ 18: 18](R/W) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[RRE]. */
        uint32_t tbe                   : 1;  /**< [ 17: 17](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[TBE]. */
        uint32_t sve                   : 1;  /**< [ 16: 16](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[SVE]. */
        uint32_t ecvs                  : 8;  /**< [ 15:  8](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[ECVS]. */
        uint32_t reserved_7            : 1;
        uint32_t dt                    : 1;  /**< [  6:  6](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[DT]. */
        uint32_t ec                    : 1;  /**< [  5:  5](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[EC]. */
        uint32_t uf                    : 1;  /**< [  4:  4](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[UF]. */
        uint32_t cr                    : 1;  /**< [  3:  3](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[CR]. */
        uint32_t rr                    : 1;  /**< [  2:  2](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[RR]. */
        uint32_t tb                    : 1;  /**< [  1:  1](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[TB]. */
        uint32_t sv                    : 1;  /**< [  0:  0](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[SV]. */
#else /* Word 0 - Little Endian */
        uint32_t sv                    : 1;  /**< [  0:  0](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[SV]. */
        uint32_t tb                    : 1;  /**< [  1:  1](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[TB]. */
        uint32_t rr                    : 1;  /**< [  2:  2](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[RR]. */
        uint32_t cr                    : 1;  /**< [  3:  3](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[CR]. */
        uint32_t uf                    : 1;  /**< [  4:  4](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[UF]. */
        uint32_t ec                    : 1;  /**< [  5:  5](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[EC]. */
        uint32_t dt                    : 1;  /**< [  6:  6](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[DT]. */
        uint32_t reserved_7            : 1;
        uint32_t ecvs                  : 8;  /**< [ 15:  8](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[ECVS]. */
        uint32_t sve                   : 1;  /**< [ 16: 16](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[SVE]. */
        uint32_t tbe                   : 1;  /**< [ 17: 17](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[TBE]. */
        uint32_t rre                   : 1;  /**< [ 18: 18](R/W) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[RRE]. */
        uint32_t cre                   : 1;  /**< [ 19: 19](R/W) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[CRE]. */
        uint32_t ufe                   : 1;  /**< [ 20: 20](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[UFE]. */
        uint32_t ece                   : 1;  /**< [ 21: 21](R/W) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[ECE]. */
        uint32_t dte                   : 1;  /**< [ 22: 22](RO) Read-only copy of the associated PF's PCIEEP_ACS_CAP_CTL[DTE]. */
        uint32_t reserved_23_31        : 9;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_acs_cap_ctl_s cn; */
};
typedef union cavm_pcieepvf_acs_cap_ctl cavm_pcieepvf_acs_cap_ctl_t;

#define CAVM_PCIEEPVF_ACS_CAP_CTL CAVM_PCIEEPVF_ACS_CAP_CTL_FUNC()
static inline uint64_t CAVM_PCIEEPVF_ACS_CAP_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_ACS_CAP_CTL_FUNC(void)
{
    return 0x114;
}

#define typedef_CAVM_PCIEEPVF_ACS_CAP_CTL cavm_pcieepvf_acs_cap_ctl_t
#define bustype_CAVM_PCIEEPVF_ACS_CAP_CTL CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_ACS_CAP_CTL "PCIEEPVF_ACS_CAP_CTL"
#define busnum_CAVM_PCIEEPVF_ACS_CAP_CTL 0
#define arguments_CAVM_PCIEEPVF_ACS_CAP_CTL -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_acs_cap_hdr
 *
 * PCIe VF PCI Express ACS Extended Capability Header Register
 */
union cavm_pcieepvf_acs_cap_hdr
{
    uint32_t u;
    struct cavm_pcieepvf_acs_cap_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_WR. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_WR. */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_WR. */
#else /* Word 0 - Little Endian */
        uint32_t pcieec                : 16; /**< [ 15:  0](RO/WRSL) PCI Express extended capability.
                                                                 Writable through PEM()_CFG_WR. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_WR. */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_WR. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_acs_cap_hdr_s cn; */
};
typedef union cavm_pcieepvf_acs_cap_hdr cavm_pcieepvf_acs_cap_hdr_t;

#define CAVM_PCIEEPVF_ACS_CAP_HDR CAVM_PCIEEPVF_ACS_CAP_HDR_FUNC()
static inline uint64_t CAVM_PCIEEPVF_ACS_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_ACS_CAP_HDR_FUNC(void)
{
    return 0x110;
}

#define typedef_CAVM_PCIEEPVF_ACS_CAP_HDR cavm_pcieepvf_acs_cap_hdr_t
#define bustype_CAVM_PCIEEPVF_ACS_CAP_HDR CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_ACS_CAP_HDR "PCIEEPVF_ACS_CAP_HDR"
#define busnum_CAVM_PCIEEPVF_ACS_CAP_HDR 0
#define arguments_CAVM_PCIEEPVF_ACS_CAP_HDR -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_acs_egr_ctl_vec
 *
 * PCIe VF Egress Control Vector Register
 */
union cavm_pcieepvf_acs_egr_ctl_vec
{
    uint32_t u;
    struct cavm_pcieepvf_acs_egr_ctl_vec_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t ecv                   : 8;  /**< [  7:  0](R/W) Egress control vector. */
#else /* Word 0 - Little Endian */
        uint32_t ecv                   : 8;  /**< [  7:  0](R/W) Egress control vector. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_acs_egr_ctl_vec_s cn; */
};
typedef union cavm_pcieepvf_acs_egr_ctl_vec cavm_pcieepvf_acs_egr_ctl_vec_t;

#define CAVM_PCIEEPVF_ACS_EGR_CTL_VEC CAVM_PCIEEPVF_ACS_EGR_CTL_VEC_FUNC()
static inline uint64_t CAVM_PCIEEPVF_ACS_EGR_CTL_VEC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_ACS_EGR_CTL_VEC_FUNC(void)
{
    return 0x118;
}

#define typedef_CAVM_PCIEEPVF_ACS_EGR_CTL_VEC cavm_pcieepvf_acs_egr_ctl_vec_t
#define bustype_CAVM_PCIEEPVF_ACS_EGR_CTL_VEC CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_ACS_EGR_CTL_VEC "PCIEEPVF_ACS_EGR_CTL_VEC"
#define busnum_CAVM_PCIEEPVF_ACS_EGR_CTL_VEC 0
#define arguments_CAVM_PCIEEPVF_ACS_EGR_CTL_VEC -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_ari_cap_ctl
 *
 * PCIe VF PCI Express ARI Capability Register/PCI Express ARI Control Register
 */
union cavm_pcieepvf_ari_cap_ctl
{
    uint32_t u;
    struct cavm_pcieepvf_ari_cap_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_23_31        : 9;
        uint32_t fg                    : 3;  /**< [ 22: 20](RO) Function group. */
        uint32_t reserved_18_19        : 2;
        uint32_t acsfge                : 1;  /**< [ 17: 17](RO) ACS function groups enable (A). */
        uint32_t mfvcfge               : 1;  /**< [ 16: 16](RO) MFVC function groups enable (M). */
        uint32_t nfn                   : 8;  /**< [ 15:  8](RO) Next function number. */
        uint32_t reserved_2_7          : 6;
        uint32_t acsfgc                : 1;  /**< [  1:  1](RO) ACS function groups capability. */
        uint32_t mfvcfgc               : 1;  /**< [  0:  0](RO) MFVC function groups capability. */
#else /* Word 0 - Little Endian */
        uint32_t mfvcfgc               : 1;  /**< [  0:  0](RO) MFVC function groups capability. */
        uint32_t acsfgc                : 1;  /**< [  1:  1](RO) ACS function groups capability. */
        uint32_t reserved_2_7          : 6;
        uint32_t nfn                   : 8;  /**< [ 15:  8](RO) Next function number. */
        uint32_t mfvcfge               : 1;  /**< [ 16: 16](RO) MFVC function groups enable (M). */
        uint32_t acsfge                : 1;  /**< [ 17: 17](RO) ACS function groups enable (A). */
        uint32_t reserved_18_19        : 2;
        uint32_t fg                    : 3;  /**< [ 22: 20](RO) Function group. */
        uint32_t reserved_23_31        : 9;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_ari_cap_ctl_s cn; */
};
typedef union cavm_pcieepvf_ari_cap_ctl cavm_pcieepvf_ari_cap_ctl_t;

#define CAVM_PCIEEPVF_ARI_CAP_CTL CAVM_PCIEEPVF_ARI_CAP_CTL_FUNC()
static inline uint64_t CAVM_PCIEEPVF_ARI_CAP_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_ARI_CAP_CTL_FUNC(void)
{
    return 0x104;
}

#define typedef_CAVM_PCIEEPVF_ARI_CAP_CTL cavm_pcieepvf_ari_cap_ctl_t
#define bustype_CAVM_PCIEEPVF_ARI_CAP_CTL CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_ARI_CAP_CTL "PCIEEPVF_ARI_CAP_CTL"
#define busnum_CAVM_PCIEEPVF_ARI_CAP_CTL 0
#define arguments_CAVM_PCIEEPVF_ARI_CAP_CTL -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_bar0l
 *
 * PCIe VF Base Address 0 Low Register
 */
union cavm_pcieepvf_bar0l
{
    uint32_t u;
    struct cavm_pcieepvf_bar0l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_bar0l_s cn; */
};
typedef union cavm_pcieepvf_bar0l cavm_pcieepvf_bar0l_t;

#define CAVM_PCIEEPVF_BAR0L CAVM_PCIEEPVF_BAR0L_FUNC()
static inline uint64_t CAVM_PCIEEPVF_BAR0L_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_BAR0L_FUNC(void)
{
    return 0x10;
}

#define typedef_CAVM_PCIEEPVF_BAR0L cavm_pcieepvf_bar0l_t
#define bustype_CAVM_PCIEEPVF_BAR0L CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_BAR0L "PCIEEPVF_BAR0L"
#define busnum_CAVM_PCIEEPVF_BAR0L 0
#define arguments_CAVM_PCIEEPVF_BAR0L -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_bar0u
 *
 * PCIe VF Base Address 0 High Register
 */
union cavm_pcieepvf_bar0u
{
    uint32_t u;
    struct cavm_pcieepvf_bar0u_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_bar0u_s cn; */
};
typedef union cavm_pcieepvf_bar0u cavm_pcieepvf_bar0u_t;

#define CAVM_PCIEEPVF_BAR0U CAVM_PCIEEPVF_BAR0U_FUNC()
static inline uint64_t CAVM_PCIEEPVF_BAR0U_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_BAR0U_FUNC(void)
{
    return 0x14;
}

#define typedef_CAVM_PCIEEPVF_BAR0U cavm_pcieepvf_bar0u_t
#define bustype_CAVM_PCIEEPVF_BAR0U CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_BAR0U "PCIEEPVF_BAR0U"
#define busnum_CAVM_PCIEEPVF_BAR0U 0
#define arguments_CAVM_PCIEEPVF_BAR0U -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_bar2l
 *
 * PCIe VF Base Address 1 Low Register
 */
union cavm_pcieepvf_bar2l
{
    uint32_t u;
    struct cavm_pcieepvf_bar2l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_bar2l_s cn; */
};
typedef union cavm_pcieepvf_bar2l cavm_pcieepvf_bar2l_t;

#define CAVM_PCIEEPVF_BAR2L CAVM_PCIEEPVF_BAR2L_FUNC()
static inline uint64_t CAVM_PCIEEPVF_BAR2L_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_BAR2L_FUNC(void)
{
    return 0x18;
}

#define typedef_CAVM_PCIEEPVF_BAR2L cavm_pcieepvf_bar2l_t
#define bustype_CAVM_PCIEEPVF_BAR2L CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_BAR2L "PCIEEPVF_BAR2L"
#define busnum_CAVM_PCIEEPVF_BAR2L 0
#define arguments_CAVM_PCIEEPVF_BAR2L -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_bar2u
 *
 * PCIe VF Base Address 1 High Register
 */
union cavm_pcieepvf_bar2u
{
    uint32_t u;
    struct cavm_pcieepvf_bar2u_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_bar2u_s cn; */
};
typedef union cavm_pcieepvf_bar2u cavm_pcieepvf_bar2u_t;

#define CAVM_PCIEEPVF_BAR2U CAVM_PCIEEPVF_BAR2U_FUNC()
static inline uint64_t CAVM_PCIEEPVF_BAR2U_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_BAR2U_FUNC(void)
{
    return 0x1c;
}

#define typedef_CAVM_PCIEEPVF_BAR2U cavm_pcieepvf_bar2u_t
#define bustype_CAVM_PCIEEPVF_BAR2U CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_BAR2U "PCIEEPVF_BAR2U"
#define busnum_CAVM_PCIEEPVF_BAR2U 0
#define arguments_CAVM_PCIEEPVF_BAR2U -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_bar4l
 *
 * PCIe VF Base Address 2 Low Register
 */
union cavm_pcieepvf_bar4l
{
    uint32_t u;
    struct cavm_pcieepvf_bar4l_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_bar4l_s cn; */
};
typedef union cavm_pcieepvf_bar4l cavm_pcieepvf_bar4l_t;

#define CAVM_PCIEEPVF_BAR4L CAVM_PCIEEPVF_BAR4L_FUNC()
static inline uint64_t CAVM_PCIEEPVF_BAR4L_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_BAR4L_FUNC(void)
{
    return 0x20;
}

#define typedef_CAVM_PCIEEPVF_BAR4L cavm_pcieepvf_bar4l_t
#define bustype_CAVM_PCIEEPVF_BAR4L CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_BAR4L "PCIEEPVF_BAR4L"
#define busnum_CAVM_PCIEEPVF_BAR4L 0
#define arguments_CAVM_PCIEEPVF_BAR4L -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_bar4u
 *
 * PCIe VF Base Address Register 2 - High Register
 */
union cavm_pcieepvf_bar4u
{
    uint32_t u;
    struct cavm_pcieepvf_bar4u_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_bar4u_s cn; */
};
typedef union cavm_pcieepvf_bar4u cavm_pcieepvf_bar4u_t;

#define CAVM_PCIEEPVF_BAR4U CAVM_PCIEEPVF_BAR4U_FUNC()
static inline uint64_t CAVM_PCIEEPVF_BAR4U_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_BAR4U_FUNC(void)
{
    return 0x24;
}

#define typedef_CAVM_PCIEEPVF_BAR4U cavm_pcieepvf_bar4u_t
#define bustype_CAVM_PCIEEPVF_BAR4U CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_BAR4U "PCIEEPVF_BAR4U"
#define busnum_CAVM_PCIEEPVF_BAR4U 0
#define arguments_CAVM_PCIEEPVF_BAR4U -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_cap_ptr
 *
 * PCIe VF Capability Pointer Register
 */
union cavm_pcieepvf_cap_ptr
{
    uint32_t u;
    struct cavm_pcieepvf_cap_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t cp                    : 8;  /**< [  7:  0](RO) First capability pointer. Points to the PCI Express capability pointer structure (VF's). */
#else /* Word 0 - Little Endian */
        uint32_t cp                    : 8;  /**< [  7:  0](RO) First capability pointer. Points to the PCI Express capability pointer structure (VF's). */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_cap_ptr_s cn; */
};
typedef union cavm_pcieepvf_cap_ptr cavm_pcieepvf_cap_ptr_t;

#define CAVM_PCIEEPVF_CAP_PTR CAVM_PCIEEPVF_CAP_PTR_FUNC()
static inline uint64_t CAVM_PCIEEPVF_CAP_PTR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_CAP_PTR_FUNC(void)
{
    return 0x34;
}

#define typedef_CAVM_PCIEEPVF_CAP_PTR cavm_pcieepvf_cap_ptr_t
#define bustype_CAVM_PCIEEPVF_CAP_PTR CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_CAP_PTR "PCIEEPVF_CAP_PTR"
#define busnum_CAVM_PCIEEPVF_CAP_PTR 0
#define arguments_CAVM_PCIEEPVF_CAP_PTR -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_cardbus
 *
 * PCIe VF Card Bus CIS Pointer Register
 */
union cavm_pcieepvf_cardbus
{
    uint32_t u;
    struct cavm_pcieepvf_cardbus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cisp                  : 32; /**< [ 31:  0](RO) Read-only copy of the associated PF's PCIEEP_CARDBUS[CISP]. */
#else /* Word 0 - Little Endian */
        uint32_t cisp                  : 32; /**< [ 31:  0](RO) Read-only copy of the associated PF's PCIEEP_CARDBUS[CISP]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_cardbus_s cn; */
};
typedef union cavm_pcieepvf_cardbus cavm_pcieepvf_cardbus_t;

#define CAVM_PCIEEPVF_CARDBUS CAVM_PCIEEPVF_CARDBUS_FUNC()
static inline uint64_t CAVM_PCIEEPVF_CARDBUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_CARDBUS_FUNC(void)
{
    return 0x28;
}

#define typedef_CAVM_PCIEEPVF_CARDBUS cavm_pcieepvf_cardbus_t
#define bustype_CAVM_PCIEEPVF_CARDBUS CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_CARDBUS "PCIEEPVF_CARDBUS"
#define busnum_CAVM_PCIEEPVF_CARDBUS 0
#define arguments_CAVM_PCIEEPVF_CARDBUS -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_clsize
 *
 * PCIe VF BIST, Header Type, Master Latency Timer, Cache Line Size Register
 */
union cavm_pcieepvf_clsize
{
    uint32_t u;
    struct cavm_pcieepvf_clsize_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bist                  : 8;  /**< [ 31: 24](RO) The BIST register functions are not supported. All 8 bits of the BIST register are
                                                                 hardwired to 0x0. */
        uint32_t mfd                   : 1;  /**< [ 23: 23](RO) Read-only copy of the associated PF's PCIEEP_CLSIZE[MFD]. */
        uint32_t chf                   : 7;  /**< [ 22: 16](RO) Configuration header format. Hardwired to 0x0 for type 0. */
        uint32_t lt                    : 8;  /**< [ 15:  8](RO) Master latency timer. Not applicable for PCI Express, hardwired to 0x0. */
        uint32_t cls                   : 8;  /**< [  7:  0](RO) Read-only copy of the associated PF's PCIEEP_CLSIZE[CLS].
                                                                 The cache line size register is R/W for legacy compatibility purposes and
                                                                 is not applicable to PCI Express device functionality. Writing to the cache line size
                                                                 register does not impact functionality of the PCI Express bus. */
#else /* Word 0 - Little Endian */
        uint32_t cls                   : 8;  /**< [  7:  0](RO) Read-only copy of the associated PF's PCIEEP_CLSIZE[CLS].
                                                                 The cache line size register is R/W for legacy compatibility purposes and
                                                                 is not applicable to PCI Express device functionality. Writing to the cache line size
                                                                 register does not impact functionality of the PCI Express bus. */
        uint32_t lt                    : 8;  /**< [ 15:  8](RO) Master latency timer. Not applicable for PCI Express, hardwired to 0x0. */
        uint32_t chf                   : 7;  /**< [ 22: 16](RO) Configuration header format. Hardwired to 0x0 for type 0. */
        uint32_t mfd                   : 1;  /**< [ 23: 23](RO) Read-only copy of the associated PF's PCIEEP_CLSIZE[MFD]. */
        uint32_t bist                  : 8;  /**< [ 31: 24](RO) The BIST register functions are not supported. All 8 bits of the BIST register are
                                                                 hardwired to 0x0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_clsize_s cn; */
};
typedef union cavm_pcieepvf_clsize cavm_pcieepvf_clsize_t;

#define CAVM_PCIEEPVF_CLSIZE CAVM_PCIEEPVF_CLSIZE_FUNC()
static inline uint64_t CAVM_PCIEEPVF_CLSIZE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_CLSIZE_FUNC(void)
{
    return 0xc;
}

#define typedef_CAVM_PCIEEPVF_CLSIZE cavm_pcieepvf_clsize_t
#define bustype_CAVM_PCIEEPVF_CLSIZE CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_CLSIZE "PCIEEPVF_CLSIZE"
#define busnum_CAVM_PCIEEPVF_CLSIZE 0
#define arguments_CAVM_PCIEEPVF_CLSIZE -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_cmd
 *
 * PCIe VF Command/Status Register
 */
union cavm_pcieepvf_cmd
{
    uint32_t u;
    struct cavm_pcieepvf_cmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dpe                   : 1;  /**< [ 31: 31](R/W1C/H) Detected parity error. */
        uint32_t sse                   : 1;  /**< [ 30: 30](R/W1C/H) Signaled system error. */
        uint32_t rma                   : 1;  /**< [ 29: 29](R/W1C/H) Received master abort. */
        uint32_t rta                   : 1;  /**< [ 28: 28](R/W1C/H) Received target abort. */
        uint32_t sta                   : 1;  /**< [ 27: 27](R/W1C/H) Signaled target abort. */
        uint32_t devt                  : 2;  /**< [ 26: 25](RO) DEVSEL timing. Not applicable for PCI Express. Hardwired to 0x0. */
        uint32_t mdpe                  : 1;  /**< [ 24: 24](R/W1C/H) Master data parity error. */
        uint32_t fbb                   : 1;  /**< [ 23: 23](RO) Fast back-to-back capable. Not applicable for PCI Express. Hardwired to 0. */
        uint32_t reserved_22           : 1;
        uint32_t m66                   : 1;  /**< [ 21: 21](RO) 66 MHz capable. Not applicable for PCI Express. Hardwired to 0. */
        uint32_t cl                    : 1;  /**< [ 20: 20](RO) Capabilities list. Indicates presence of an extended capability item. Hardwired to 1. */
        uint32_t i_stat                : 1;  /**< [ 19: 19](RO/H) INTx status. Not applicable for SR-IOV.  Hardwired to 0. */
        uint32_t reserved_17_18        : 2;
        uint32_t imm_readiness         : 1;  /**< [ 16: 16](RO/H) Immediate readiness. */
        uint32_t pci_type_reserv       : 5;  /**< [ 15: 11](RO) Reserved. */
        uint32_t i_dis                 : 1;  /**< [ 10: 10](RO) VF read-only zero. */
        uint32_t fbbe                  : 1;  /**< [  9:  9](RO) Fast back-to-back transaction enable. Not applicable for PCI Express. Must be hardwired to 0. */
        uint32_t see                   : 1;  /**< [  8:  8](RAZ) VF RsvdP. */
        uint32_t ids_wcc               : 1;  /**< [  7:  7](RO) IDSEL stepping/wait cycle control. Not applicable for PCI Express. Must be hardwired to 0. */
        uint32_t per                   : 1;  /**< [  6:  6](RAZ) VF RsvdP. */
        uint32_t vps                   : 1;  /**< [  5:  5](RO) VGA palette snoop. Not applicable for PCI Express. Must be hardwired to 0. */
        uint32_t mwice                 : 1;  /**< [  4:  4](RO) Memory write and invalidate. Not applicable for PCI Express. Must be hardwired to 0. */
        uint32_t scse                  : 1;  /**< [  3:  3](RO) Special cycle enable. Not applicable for PCI Express. Must be hardwired to 0. */
        uint32_t me                    : 1;  /**< [  2:  2](R/W) Bus master enable. If the VF tries to master the bus when this bit is not set,
                                                                 the request is discarded. A interrupt will be generated setting
                                                                 PEM()_DBG_INFO[BMD_E].
                                                                 Transactions are dropped in the client.  Non-posted transactions returns a
                                                                 response error to NCB/DPI soon thereafter.
                                                                 Bus master enable mimics the behavior of PEM()_FLR_PF()_STOPREQ. */
        uint32_t msae                  : 1;  /**< [  1:  1](RO) VF read-only zero. */
        uint32_t isae                  : 1;  /**< [  0:  0](RO) VF read-only zero. */
#else /* Word 0 - Little Endian */
        uint32_t isae                  : 1;  /**< [  0:  0](RO) VF read-only zero. */
        uint32_t msae                  : 1;  /**< [  1:  1](RO) VF read-only zero. */
        uint32_t me                    : 1;  /**< [  2:  2](R/W) Bus master enable. If the VF tries to master the bus when this bit is not set,
                                                                 the request is discarded. A interrupt will be generated setting
                                                                 PEM()_DBG_INFO[BMD_E].
                                                                 Transactions are dropped in the client.  Non-posted transactions returns a
                                                                 response error to NCB/DPI soon thereafter.
                                                                 Bus master enable mimics the behavior of PEM()_FLR_PF()_STOPREQ. */
        uint32_t scse                  : 1;  /**< [  3:  3](RO) Special cycle enable. Not applicable for PCI Express. Must be hardwired to 0. */
        uint32_t mwice                 : 1;  /**< [  4:  4](RO) Memory write and invalidate. Not applicable for PCI Express. Must be hardwired to 0. */
        uint32_t vps                   : 1;  /**< [  5:  5](RO) VGA palette snoop. Not applicable for PCI Express. Must be hardwired to 0. */
        uint32_t per                   : 1;  /**< [  6:  6](RAZ) VF RsvdP. */
        uint32_t ids_wcc               : 1;  /**< [  7:  7](RO) IDSEL stepping/wait cycle control. Not applicable for PCI Express. Must be hardwired to 0. */
        uint32_t see                   : 1;  /**< [  8:  8](RAZ) VF RsvdP. */
        uint32_t fbbe                  : 1;  /**< [  9:  9](RO) Fast back-to-back transaction enable. Not applicable for PCI Express. Must be hardwired to 0. */
        uint32_t i_dis                 : 1;  /**< [ 10: 10](RO) VF read-only zero. */
        uint32_t pci_type_reserv       : 5;  /**< [ 15: 11](RO) Reserved. */
        uint32_t imm_readiness         : 1;  /**< [ 16: 16](RO/H) Immediate readiness. */
        uint32_t reserved_17_18        : 2;
        uint32_t i_stat                : 1;  /**< [ 19: 19](RO/H) INTx status. Not applicable for SR-IOV.  Hardwired to 0. */
        uint32_t cl                    : 1;  /**< [ 20: 20](RO) Capabilities list. Indicates presence of an extended capability item. Hardwired to 1. */
        uint32_t m66                   : 1;  /**< [ 21: 21](RO) 66 MHz capable. Not applicable for PCI Express. Hardwired to 0. */
        uint32_t reserved_22           : 1;
        uint32_t fbb                   : 1;  /**< [ 23: 23](RO) Fast back-to-back capable. Not applicable for PCI Express. Hardwired to 0. */
        uint32_t mdpe                  : 1;  /**< [ 24: 24](R/W1C/H) Master data parity error. */
        uint32_t devt                  : 2;  /**< [ 26: 25](RO) DEVSEL timing. Not applicable for PCI Express. Hardwired to 0x0. */
        uint32_t sta                   : 1;  /**< [ 27: 27](R/W1C/H) Signaled target abort. */
        uint32_t rta                   : 1;  /**< [ 28: 28](R/W1C/H) Received target abort. */
        uint32_t rma                   : 1;  /**< [ 29: 29](R/W1C/H) Received master abort. */
        uint32_t sse                   : 1;  /**< [ 30: 30](R/W1C/H) Signaled system error. */
        uint32_t dpe                   : 1;  /**< [ 31: 31](R/W1C/H) Detected parity error. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_cmd_s cn; */
};
typedef union cavm_pcieepvf_cmd cavm_pcieepvf_cmd_t;

#define CAVM_PCIEEPVF_CMD CAVM_PCIEEPVF_CMD_FUNC()
static inline uint64_t CAVM_PCIEEPVF_CMD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_CMD_FUNC(void)
{
    return 4;
}

#define typedef_CAVM_PCIEEPVF_CMD cavm_pcieepvf_cmd_t
#define bustype_CAVM_PCIEEPVF_CMD CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_CMD "PCIEEPVF_CMD"
#define busnum_CAVM_PCIEEPVF_CMD 0
#define arguments_CAVM_PCIEEPVF_CMD -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_dev_cap
 *
 * PCIe VF Device Capabilities Register
 */
union cavm_pcieepvf_dev_cap
{
    uint32_t u;
    struct cavm_pcieepvf_dev_cap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t flr_cap               : 1;  /**< [ 28: 28](RO) Function level reset capability. Set to 1 for SR-IOV core. */
        uint32_t cspls                 : 2;  /**< [ 27: 26](RO/H) VF undefined. */
        uint32_t csplv                 : 8;  /**< [ 25: 18](RO/H) VF undefined. */
        uint32_t reserved_16_17        : 2;
        uint32_t rber                  : 1;  /**< [ 15: 15](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[RBER]. */
        uint32_t reserved_12_14        : 3;
        uint32_t el1al                 : 3;  /**< [ 11:  9](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[EL1AL]. */
        uint32_t el0al                 : 3;  /**< [  8:  6](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[EL0AL]. */
        uint32_t etfs                  : 1;  /**< [  5:  5](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[ETFS]. */
        uint32_t pfs                   : 2;  /**< [  4:  3](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[PFS]. */
        uint32_t mpss                  : 3;  /**< [  2:  0](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[MPSS]. */
#else /* Word 0 - Little Endian */
        uint32_t mpss                  : 3;  /**< [  2:  0](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[MPSS]. */
        uint32_t pfs                   : 2;  /**< [  4:  3](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[PFS]. */
        uint32_t etfs                  : 1;  /**< [  5:  5](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[ETFS]. */
        uint32_t el0al                 : 3;  /**< [  8:  6](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[EL0AL]. */
        uint32_t el1al                 : 3;  /**< [ 11:  9](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[EL1AL]. */
        uint32_t reserved_12_14        : 3;
        uint32_t rber                  : 1;  /**< [ 15: 15](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP[RBER]. */
        uint32_t reserved_16_17        : 2;
        uint32_t csplv                 : 8;  /**< [ 25: 18](RO/H) VF undefined. */
        uint32_t cspls                 : 2;  /**< [ 27: 26](RO/H) VF undefined. */
        uint32_t flr_cap               : 1;  /**< [ 28: 28](RO) Function level reset capability. Set to 1 for SR-IOV core. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_dev_cap_s cn; */
};
typedef union cavm_pcieepvf_dev_cap cavm_pcieepvf_dev_cap_t;

#define CAVM_PCIEEPVF_DEV_CAP CAVM_PCIEEPVF_DEV_CAP_FUNC()
static inline uint64_t CAVM_PCIEEPVF_DEV_CAP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_DEV_CAP_FUNC(void)
{
    return 0x74;
}

#define typedef_CAVM_PCIEEPVF_DEV_CAP cavm_pcieepvf_dev_cap_t
#define bustype_CAVM_PCIEEPVF_DEV_CAP CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_DEV_CAP "PCIEEPVF_DEV_CAP"
#define busnum_CAVM_PCIEEPVF_DEV_CAP 0
#define arguments_CAVM_PCIEEPVF_DEV_CAP -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_dev_cap2
 *
 * PCIe VF Device Capabilities 2 Register
 */
union cavm_pcieepvf_dev_cap2
{
    uint32_t u;
    struct cavm_pcieepvf_dev_cap2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t meetp                 : 2;  /**< [ 23: 22](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP2[MEETP]. */
        uint32_t eetps                 : 1;  /**< [ 21: 21](RO) End-end TLP prefix supported (not supported). */
        uint32_t effs                  : 1;  /**< [ 20: 20](RO) Extended fmt field supported. */
        uint32_t obffs                 : 2;  /**< [ 19: 18](RO) Optimized buffer flush fill (OBFF) supported (both message and wake). */
        uint32_t tag10b_req_supp       : 1;  /**< [ 17: 17](RO) 10-bit tag requestor supported. */
        uint32_t tag10b_cpl_supp       : 1;  /**< [ 16: 16](RO) 10-bit tag completer supported. */
        uint32_t ln_sys_cls            : 2;  /**< [ 15: 14](RO) LN system CLS (not applicable for EP). */
        uint32_t tphs                  : 2;  /**< [ 13: 12](RO) TPH completer supported. */
        uint32_t ltrs                  : 1;  /**< [ 11: 11](RO) Latency tolerance reporting (LTR) mechanism supported. */
        uint32_t noroprpr              : 1;  /**< [ 10: 10](RO/H) No RO-enabled PR-PR passing. (This bit applies to RCs.) */
        uint32_t atom128s              : 1;  /**< [  9:  9](RO/H) 128-bit AtomicOp supported.
                                                                 Note that inbound AtomicOps targeting BAR0 are not supported and are dropped as an
                                                                 unsupported request.
                                                                 Since VF's are tied to BAR0, all AtomicOp's will be dropped as unsupported requests.
                                                                 ATOM128S is set as an inherited attribute from the PF. */
        uint32_t atom64s               : 1;  /**< [  8:  8](RO/H) 64-bit AtomicOp supported.
                                                                 Note that inbound AtomicOps targeting BAR0 are not supported and are dropped as an
                                                                 unsupported request.
                                                                 Since VF's are tied to BAR0, all AtomicOp's will be dropped as unsupported requests.
                                                                 ATOM64S is set as an inherited attribute from the PF. */
        uint32_t atom32s               : 1;  /**< [  7:  7](RO) 32-bit AtomicOp supported.
                                                                 Note that inbound AtomicOps targeting BAR0 are not supported and are dropped as an
                                                                 unsupported request.
                                                                 Since VF's are tied to BAR0, all AtomicOp's will be dropped as unsupported requests.
                                                                 ATOM64S is set as an inherited attribute from the PF. */
        uint32_t atom_ops              : 1;  /**< [  6:  6](RAZ) VF RsvdP. */
        uint32_t ari                   : 1;  /**< [  5:  5](RO) Alternate routing ID forwarding supported (not applicable for EP). */
        uint32_t ctds                  : 1;  /**< [  4:  4](RO) Completion timeout disable supported. */
        uint32_t ctrs                  : 4;  /**< [  3:  0](RO/H) Completion timeout ranges supported. */
#else /* Word 0 - Little Endian */
        uint32_t ctrs                  : 4;  /**< [  3:  0](RO/H) Completion timeout ranges supported. */
        uint32_t ctds                  : 1;  /**< [  4:  4](RO) Completion timeout disable supported. */
        uint32_t ari                   : 1;  /**< [  5:  5](RO) Alternate routing ID forwarding supported (not applicable for EP). */
        uint32_t atom_ops              : 1;  /**< [  6:  6](RAZ) VF RsvdP. */
        uint32_t atom32s               : 1;  /**< [  7:  7](RO) 32-bit AtomicOp supported.
                                                                 Note that inbound AtomicOps targeting BAR0 are not supported and are dropped as an
                                                                 unsupported request.
                                                                 Since VF's are tied to BAR0, all AtomicOp's will be dropped as unsupported requests.
                                                                 ATOM64S is set as an inherited attribute from the PF. */
        uint32_t atom64s               : 1;  /**< [  8:  8](RO/H) 64-bit AtomicOp supported.
                                                                 Note that inbound AtomicOps targeting BAR0 are not supported and are dropped as an
                                                                 unsupported request.
                                                                 Since VF's are tied to BAR0, all AtomicOp's will be dropped as unsupported requests.
                                                                 ATOM64S is set as an inherited attribute from the PF. */
        uint32_t atom128s              : 1;  /**< [  9:  9](RO/H) 128-bit AtomicOp supported.
                                                                 Note that inbound AtomicOps targeting BAR0 are not supported and are dropped as an
                                                                 unsupported request.
                                                                 Since VF's are tied to BAR0, all AtomicOp's will be dropped as unsupported requests.
                                                                 ATOM128S is set as an inherited attribute from the PF. */
        uint32_t noroprpr              : 1;  /**< [ 10: 10](RO/H) No RO-enabled PR-PR passing. (This bit applies to RCs.) */
        uint32_t ltrs                  : 1;  /**< [ 11: 11](RO) Latency tolerance reporting (LTR) mechanism supported. */
        uint32_t tphs                  : 2;  /**< [ 13: 12](RO) TPH completer supported. */
        uint32_t ln_sys_cls            : 2;  /**< [ 15: 14](RO) LN system CLS (not applicable for EP). */
        uint32_t tag10b_cpl_supp       : 1;  /**< [ 16: 16](RO) 10-bit tag completer supported. */
        uint32_t tag10b_req_supp       : 1;  /**< [ 17: 17](RO) 10-bit tag requestor supported. */
        uint32_t obffs                 : 2;  /**< [ 19: 18](RO) Optimized buffer flush fill (OBFF) supported (both message and wake). */
        uint32_t effs                  : 1;  /**< [ 20: 20](RO) Extended fmt field supported. */
        uint32_t eetps                 : 1;  /**< [ 21: 21](RO) End-end TLP prefix supported (not supported). */
        uint32_t meetp                 : 2;  /**< [ 23: 22](RO) Read-only copy of the associated PF's PCIEEP_DEV_CAP2[MEETP]. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_dev_cap2_s cn; */
};
typedef union cavm_pcieepvf_dev_cap2 cavm_pcieepvf_dev_cap2_t;

#define CAVM_PCIEEPVF_DEV_CAP2 CAVM_PCIEEPVF_DEV_CAP2_FUNC()
static inline uint64_t CAVM_PCIEEPVF_DEV_CAP2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_DEV_CAP2_FUNC(void)
{
    return 0x94;
}

#define typedef_CAVM_PCIEEPVF_DEV_CAP2 cavm_pcieepvf_dev_cap2_t
#define bustype_CAVM_PCIEEPVF_DEV_CAP2 CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_DEV_CAP2 "PCIEEPVF_DEV_CAP2"
#define busnum_CAVM_PCIEEPVF_DEV_CAP2 0
#define arguments_CAVM_PCIEEPVF_DEV_CAP2 -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_dev_ctl
 *
 * PCIe VF Device Control/Device Status Register
 */
union cavm_pcieepvf_dev_ctl
{
    uint32_t u;
    struct cavm_pcieepvf_dev_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_22_31        : 10;
        uint32_t tp                    : 1;  /**< [ 21: 21](RO/H) Transaction pending. Set to 1 when nonposted requests are not yet completed and set to 0
                                                                 when they are completed. */
        uint32_t ap_d                  : 1;  /**< [ 20: 20](RO) VF's read-only zeros. */
        uint32_t ur_d                  : 1;  /**< [ 19: 19](RO/H) Unsupported request detected. Errors are logged in this register regardless of whether or
                                                                 not error reporting is enabled in the device control register. [UR_D] occurs when we
                                                                 receive
                                                                 something unsupported. Unsupported requests are nonfatal errors, so [UR_D] should cause
                                                                 [NFE_D]. Receiving a vendor-defined message should cause an unsupported request. */
        uint32_t fe_d                  : 1;  /**< [ 18: 18](RO/H) Fatal error detected. Errors are logged in this register regardless of whether or not
                                                                 error reporting is enabled in the device control register. This field is set if we receive
                                                                 any of the errors in PCIEEP_UCOR_ERR_MSK that has a severity set to fatal. Malformed
                                                                 TLPs
                                                                 generally fit into this category. */
        uint32_t nfe_d                 : 1;  /**< [ 17: 17](RO/H) Nonfatal error detected. Errors are logged in this register regardless of whether or not
                                                                 error reporting is enabled in the device control register. This field is set if we receive
                                                                 any of the errors in PCIEEP_UCOR_ERR_MSK that has a severity set to nonfatal and does
                                                                 not
                                                                 meet advisory nonfatal criteria, which most poisoned TLPs should. */
        uint32_t ce_d                  : 1;  /**< [ 16: 16](RO/H) Correctable error detected. Errors are logged in this register regardless of whether or
                                                                 not error reporting is enabled in the device control register. This field is set if we
                                                                 receive any of the errors in PCIEEPVF_COR_ERR_STAT, for example a replay-timer timeout.
                                                                 Also, it can be set if we get any of the errors in PCIEEP_UCOR_ERR_MSK that has a
                                                                 severity
                                                                 set to Nonfatal and meets the Advisory Nonfatal criteria, which most ECRC errors should. */
        uint32_t i_flr                 : 1;  /**< [ 15: 15](WO) Initiate function level reset when written to one.

                                                                 [I_FLR] must not be written to one via the indirect PEM()_CFG_WR. It should only ever
                                                                 be written to one via a direct PCIe access. */
        uint32_t mrrs                  : 3;  /**< [ 14: 12](RAZ) VF RsvdP. */
        uint32_t ns_en                 : 1;  /**< [ 11: 11](RAZ) VF RsvdP. */
        uint32_t ap_en                 : 1;  /**< [ 10: 10](RAZ) VF RsvdP. */
        uint32_t pf_en                 : 1;  /**< [  9:  9](RAZ) VF RsvdP. */
        uint32_t etf_en                : 1;  /**< [  8:  8](RAZ) VF RsvdP. */
        uint32_t mps                   : 3;  /**< [  7:  5](RAZ) VF RsvdP. */
        uint32_t ro_en                 : 1;  /**< [  4:  4](RAZ) VF RsvdP. */
        uint32_t ur_en                 : 1;  /**< [  3:  3](RAZ) VF RsvdP. */
        uint32_t fe_en                 : 1;  /**< [  2:  2](RAZ) VF RsvdP. */
        uint32_t nfe_en                : 1;  /**< [  1:  1](RAZ) VF RsvdP. */
        uint32_t ce_en                 : 1;  /**< [  0:  0](RAZ) VF RsvdP. */
#else /* Word 0 - Little Endian */
        uint32_t ce_en                 : 1;  /**< [  0:  0](RAZ) VF RsvdP. */
        uint32_t nfe_en                : 1;  /**< [  1:  1](RAZ) VF RsvdP. */
        uint32_t fe_en                 : 1;  /**< [  2:  2](RAZ) VF RsvdP. */
        uint32_t ur_en                 : 1;  /**< [  3:  3](RAZ) VF RsvdP. */
        uint32_t ro_en                 : 1;  /**< [  4:  4](RAZ) VF RsvdP. */
        uint32_t mps                   : 3;  /**< [  7:  5](RAZ) VF RsvdP. */
        uint32_t etf_en                : 1;  /**< [  8:  8](RAZ) VF RsvdP. */
        uint32_t pf_en                 : 1;  /**< [  9:  9](RAZ) VF RsvdP. */
        uint32_t ap_en                 : 1;  /**< [ 10: 10](RAZ) VF RsvdP. */
        uint32_t ns_en                 : 1;  /**< [ 11: 11](RAZ) VF RsvdP. */
        uint32_t mrrs                  : 3;  /**< [ 14: 12](RAZ) VF RsvdP. */
        uint32_t i_flr                 : 1;  /**< [ 15: 15](WO) Initiate function level reset when written to one.

                                                                 [I_FLR] must not be written to one via the indirect PEM()_CFG_WR. It should only ever
                                                                 be written to one via a direct PCIe access. */
        uint32_t ce_d                  : 1;  /**< [ 16: 16](RO/H) Correctable error detected. Errors are logged in this register regardless of whether or
                                                                 not error reporting is enabled in the device control register. This field is set if we
                                                                 receive any of the errors in PCIEEPVF_COR_ERR_STAT, for example a replay-timer timeout.
                                                                 Also, it can be set if we get any of the errors in PCIEEP_UCOR_ERR_MSK that has a
                                                                 severity
                                                                 set to Nonfatal and meets the Advisory Nonfatal criteria, which most ECRC errors should. */
        uint32_t nfe_d                 : 1;  /**< [ 17: 17](RO/H) Nonfatal error detected. Errors are logged in this register regardless of whether or not
                                                                 error reporting is enabled in the device control register. This field is set if we receive
                                                                 any of the errors in PCIEEP_UCOR_ERR_MSK that has a severity set to nonfatal and does
                                                                 not
                                                                 meet advisory nonfatal criteria, which most poisoned TLPs should. */
        uint32_t fe_d                  : 1;  /**< [ 18: 18](RO/H) Fatal error detected. Errors are logged in this register regardless of whether or not
                                                                 error reporting is enabled in the device control register. This field is set if we receive
                                                                 any of the errors in PCIEEP_UCOR_ERR_MSK that has a severity set to fatal. Malformed
                                                                 TLPs
                                                                 generally fit into this category. */
        uint32_t ur_d                  : 1;  /**< [ 19: 19](RO/H) Unsupported request detected. Errors are logged in this register regardless of whether or
                                                                 not error reporting is enabled in the device control register. [UR_D] occurs when we
                                                                 receive
                                                                 something unsupported. Unsupported requests are nonfatal errors, so [UR_D] should cause
                                                                 [NFE_D]. Receiving a vendor-defined message should cause an unsupported request. */
        uint32_t ap_d                  : 1;  /**< [ 20: 20](RO) VF's read-only zeros. */
        uint32_t tp                    : 1;  /**< [ 21: 21](RO/H) Transaction pending. Set to 1 when nonposted requests are not yet completed and set to 0
                                                                 when they are completed. */
        uint32_t reserved_22_31        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_dev_ctl_s cn; */
};
typedef union cavm_pcieepvf_dev_ctl cavm_pcieepvf_dev_ctl_t;

#define CAVM_PCIEEPVF_DEV_CTL CAVM_PCIEEPVF_DEV_CTL_FUNC()
static inline uint64_t CAVM_PCIEEPVF_DEV_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_DEV_CTL_FUNC(void)
{
    return 0x78;
}

#define typedef_CAVM_PCIEEPVF_DEV_CTL cavm_pcieepvf_dev_ctl_t
#define bustype_CAVM_PCIEEPVF_DEV_CTL CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_DEV_CTL "PCIEEPVF_DEV_CTL"
#define busnum_CAVM_PCIEEPVF_DEV_CTL 0
#define arguments_CAVM_PCIEEPVF_DEV_CTL -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_dev_ctl2
 *
 * PCIe VF Device Control 2 Register/Device Status 2 Register
 */
union cavm_pcieepvf_dev_ctl2
{
    uint32_t u;
    struct cavm_pcieepvf_dev_ctl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t eetpb                 : 1;  /**< [ 15: 15](RO) Unsupported end-end TLP prefix blocking. */
        uint32_t obffe                 : 2;  /**< [ 14: 13](RO) Optimized buffer flush fill (OBFF) enable. */
        uint32_t tag10b_req_en         : 1;  /**< [ 12: 12](RO) 10-bit tag requestor enable. */
        uint32_t reserved_11           : 1;
        uint32_t ltre                  : 1;  /**< [ 10: 10](RAZ) Latency tolerance reporting (LTR) mechanism enable */
        uint32_t id0_cp                : 1;  /**< [  9:  9](RAZ) VF RsvdP. */
        uint32_t id0_rq                : 1;  /**< [  8:  8](RAZ) VF RsvdP. */
        uint32_t reserved_7            : 1;
        uint32_t atom_op               : 1;  /**< [  6:  6](RAZ) VF RsvdP. */
        uint32_t ari                   : 1;  /**< [  5:  5](RO) Alternate routing ID forwarding supported (not supported). */
        uint32_t ctd                   : 1;  /**< [  4:  4](RAZ) VF RsvdP. */
        uint32_t ctv                   : 4;  /**< [  3:  0](RAZ) VF RsvdP. */
#else /* Word 0 - Little Endian */
        uint32_t ctv                   : 4;  /**< [  3:  0](RAZ) VF RsvdP. */
        uint32_t ctd                   : 1;  /**< [  4:  4](RAZ) VF RsvdP. */
        uint32_t ari                   : 1;  /**< [  5:  5](RO) Alternate routing ID forwarding supported (not supported). */
        uint32_t atom_op               : 1;  /**< [  6:  6](RAZ) VF RsvdP. */
        uint32_t reserved_7            : 1;
        uint32_t id0_rq                : 1;  /**< [  8:  8](RAZ) VF RsvdP. */
        uint32_t id0_cp                : 1;  /**< [  9:  9](RAZ) VF RsvdP. */
        uint32_t ltre                  : 1;  /**< [ 10: 10](RAZ) Latency tolerance reporting (LTR) mechanism enable */
        uint32_t reserved_11           : 1;
        uint32_t tag10b_req_en         : 1;  /**< [ 12: 12](RO) 10-bit tag requestor enable. */
        uint32_t obffe                 : 2;  /**< [ 14: 13](RO) Optimized buffer flush fill (OBFF) enable. */
        uint32_t eetpb                 : 1;  /**< [ 15: 15](RO) Unsupported end-end TLP prefix blocking. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_dev_ctl2_s cn; */
};
typedef union cavm_pcieepvf_dev_ctl2 cavm_pcieepvf_dev_ctl2_t;

#define CAVM_PCIEEPVF_DEV_CTL2 CAVM_PCIEEPVF_DEV_CTL2_FUNC()
static inline uint64_t CAVM_PCIEEPVF_DEV_CTL2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_DEV_CTL2_FUNC(void)
{
    return 0x98;
}

#define typedef_CAVM_PCIEEPVF_DEV_CTL2 cavm_pcieepvf_dev_ctl2_t
#define bustype_CAVM_PCIEEPVF_DEV_CTL2 CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_DEV_CTL2 "PCIEEPVF_DEV_CTL2"
#define busnum_CAVM_PCIEEPVF_DEV_CTL2 0
#define arguments_CAVM_PCIEEPVF_DEV_CTL2 -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_e_cap_list
 *
 * PCIe VF PCIe Capabilities/PCIe Capabilities List Register
 */
union cavm_pcieepvf_e_cap_list
{
    uint32_t u;
    struct cavm_pcieepvf_e_cap_list_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t imn                   : 5;  /**< [ 29: 25](RO) Read-only copy of the associated PF's PCIEEP_E_CAP_LIST[IMN]. */
        uint32_t si                    : 1;  /**< [ 24: 24](RO) Read-only copy of the associated PF's PCIEEP_E_CAP_LIST[SI]. */
        uint32_t dpt                   : 4;  /**< [ 23: 20](RO) Read-only copy of the associated PF's PCIEEP_E_CAP_LIST[DPT]. */
        uint32_t pciecv                : 4;  /**< [ 19: 16](RO) Read-only copy of the associated PF's PCIEEP_E_CAP_LIST[PCIECV]. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO) Next capability pointer. Points to the MSI-X capabilities by default. */
        uint32_t pcieid                : 8;  /**< [  7:  0](RO) PCI Express capability ID. */
#else /* Word 0 - Little Endian */
        uint32_t pcieid                : 8;  /**< [  7:  0](RO) PCI Express capability ID. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO) Next capability pointer. Points to the MSI-X capabilities by default. */
        uint32_t pciecv                : 4;  /**< [ 19: 16](RO) Read-only copy of the associated PF's PCIEEP_E_CAP_LIST[PCIECV]. */
        uint32_t dpt                   : 4;  /**< [ 23: 20](RO) Read-only copy of the associated PF's PCIEEP_E_CAP_LIST[DPT]. */
        uint32_t si                    : 1;  /**< [ 24: 24](RO) Read-only copy of the associated PF's PCIEEP_E_CAP_LIST[SI]. */
        uint32_t imn                   : 5;  /**< [ 29: 25](RO) Read-only copy of the associated PF's PCIEEP_E_CAP_LIST[IMN]. */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_e_cap_list_s cn; */
};
typedef union cavm_pcieepvf_e_cap_list cavm_pcieepvf_e_cap_list_t;

#define CAVM_PCIEEPVF_E_CAP_LIST CAVM_PCIEEPVF_E_CAP_LIST_FUNC()
static inline uint64_t CAVM_PCIEEPVF_E_CAP_LIST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_E_CAP_LIST_FUNC(void)
{
    return 0x70;
}

#define typedef_CAVM_PCIEEPVF_E_CAP_LIST cavm_pcieepvf_e_cap_list_t
#define bustype_CAVM_PCIEEPVF_E_CAP_LIST CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_E_CAP_LIST "PCIEEPVF_E_CAP_LIST"
#define busnum_CAVM_PCIEEPVF_E_CAP_LIST 0
#define arguments_CAVM_PCIEEPVF_E_CAP_LIST -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_ebar
 *
 * PCIe VF Expansion ROM Base Address Register
 */
union cavm_pcieepvf_ebar
{
    uint32_t u;
    struct cavm_pcieepvf_ebar_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t eraddr                : 13; /**< [ 31: 19](RO) Read-only copy of the associated PF's PCIEEP_EBAR[ERADDR]. */
        uint32_t reserved_1_18         : 18;
        uint32_t er_en                 : 1;  /**< [  0:  0](RO) Read-only copy of the associated PF's PCIEEP_EBAR[ER_EN]. */
#else /* Word 0 - Little Endian */
        uint32_t er_en                 : 1;  /**< [  0:  0](RO) Read-only copy of the associated PF's PCIEEP_EBAR[ER_EN]. */
        uint32_t reserved_1_18         : 18;
        uint32_t eraddr                : 13; /**< [ 31: 19](RO) Read-only copy of the associated PF's PCIEEP_EBAR[ERADDR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_ebar_s cn; */
};
typedef union cavm_pcieepvf_ebar cavm_pcieepvf_ebar_t;

#define CAVM_PCIEEPVF_EBAR CAVM_PCIEEPVF_EBAR_FUNC()
static inline uint64_t CAVM_PCIEEPVF_EBAR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_EBAR_FUNC(void)
{
    return 0x30;
}

#define typedef_CAVM_PCIEEPVF_EBAR cavm_pcieepvf_ebar_t
#define bustype_CAVM_PCIEEPVF_EBAR CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_EBAR "PCIEEPVF_EBAR"
#define busnum_CAVM_PCIEEPVF_EBAR 0
#define arguments_CAVM_PCIEEPVF_EBAR -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_ext_cap
 *
 * PCIe VF PCI Express ARI Extended Capability Register
 */
union cavm_pcieepvf_ext_cap
{
    uint32_t u;
    struct cavm_pcieepvf_ext_cap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_WR. */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_WR. */
        uint32_t ariid                 : 16; /**< [ 15:  0](RO/WRSL) PCIE Express extended capability */
#else /* Word 0 - Little Endian */
        uint32_t ariid                 : 16; /**< [ 15:  0](RO/WRSL) PCIE Express extended capability */
        uint32_t cv                    : 4;  /**< [ 19: 16](RO/WRSL) Capability version.
                                                                 Writable through PEM()_CFG_WR. */
        uint32_t nco                   : 12; /**< [ 31: 20](RO/WRSL) Next capability offset.
                                                                 Writable through PEM()_CFG_WR. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_ext_cap_s cn; */
};
typedef union cavm_pcieepvf_ext_cap cavm_pcieepvf_ext_cap_t;

#define CAVM_PCIEEPVF_EXT_CAP CAVM_PCIEEPVF_EXT_CAP_FUNC()
static inline uint64_t CAVM_PCIEEPVF_EXT_CAP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_EXT_CAP_FUNC(void)
{
    return 0x100;
}

#define typedef_CAVM_PCIEEPVF_EXT_CAP cavm_pcieepvf_ext_cap_t
#define bustype_CAVM_PCIEEPVF_EXT_CAP CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_EXT_CAP "PCIEEPVF_EXT_CAP"
#define busnum_CAVM_PCIEEPVF_EXT_CAP 0
#define arguments_CAVM_PCIEEPVF_EXT_CAP -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_id
 *
 * PCIe VF Vendor and Device Register
 */
union cavm_pcieepvf_id
{
    uint32_t u;
    struct cavm_pcieepvf_id_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t devid                 : 16; /**< [ 31: 16](RO) Device ID. For SR-IOV VFs always 0xFFFF. */
        uint32_t vendid                : 16; /**< [ 15:  0](RO) Vendor ID. For SR-IOV VFs always 0xFFFF. */
#else /* Word 0 - Little Endian */
        uint32_t vendid                : 16; /**< [ 15:  0](RO) Vendor ID. For SR-IOV VFs always 0xFFFF. */
        uint32_t devid                 : 16; /**< [ 31: 16](RO) Device ID. For SR-IOV VFs always 0xFFFF. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_id_s cn; */
};
typedef union cavm_pcieepvf_id cavm_pcieepvf_id_t;

#define CAVM_PCIEEPVF_ID CAVM_PCIEEPVF_ID_FUNC()
static inline uint64_t CAVM_PCIEEPVF_ID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_ID_FUNC(void)
{
    return 0;
}

#define typedef_CAVM_PCIEEPVF_ID cavm_pcieepvf_id_t
#define bustype_CAVM_PCIEEPVF_ID CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_ID "PCIEEPVF_ID"
#define busnum_CAVM_PCIEEPVF_ID 0
#define arguments_CAVM_PCIEEPVF_ID -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_int
 *
 * PCIe VF Interrupt Line/Interrupt Pin/Bridge Control Register
 */
union cavm_pcieepvf_int
{
    uint32_t u;
    struct cavm_pcieepvf_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ml                    : 8;  /**< [ 31: 24](RO/H) VF's read-only zeros. */
        uint32_t mg                    : 8;  /**< [ 23: 16](RO/H) VF's read-only zeros. */
        uint32_t inta                  : 8;  /**< [ 15:  8](RO) VF's read-only zeros. */
        uint32_t il                    : 8;  /**< [  7:  0](RO) VF's read-only zeros. */
#else /* Word 0 - Little Endian */
        uint32_t il                    : 8;  /**< [  7:  0](RO) VF's read-only zeros. */
        uint32_t inta                  : 8;  /**< [ 15:  8](RO) VF's read-only zeros. */
        uint32_t mg                    : 8;  /**< [ 23: 16](RO/H) VF's read-only zeros. */
        uint32_t ml                    : 8;  /**< [ 31: 24](RO/H) VF's read-only zeros. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_int_s cn; */
};
typedef union cavm_pcieepvf_int cavm_pcieepvf_int_t;

#define CAVM_PCIEEPVF_INT CAVM_PCIEEPVF_INT_FUNC()
static inline uint64_t CAVM_PCIEEPVF_INT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_INT_FUNC(void)
{
    return 0x3c;
}

#define typedef_CAVM_PCIEEPVF_INT cavm_pcieepvf_int_t
#define bustype_CAVM_PCIEEPVF_INT CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_INT "PCIEEPVF_INT"
#define busnum_CAVM_PCIEEPVF_INT 0
#define arguments_CAVM_PCIEEPVF_INT -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_link_cap
 *
 * PCIe VF Link Capabilities Register
 */
union cavm_pcieepvf_link_cap
{
    uint32_t u;
    struct cavm_pcieepvf_link_cap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pnum                  : 8;  /**< [ 31: 24](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[PNUM]. */
        uint32_t reserved_23           : 1;
        uint32_t aspm                  : 1;  /**< [ 22: 22](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[ASPM]. */
        uint32_t lbnc                  : 1;  /**< [ 21: 21](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[LBNC]. */
        uint32_t dllarc                : 1;  /**< [ 20: 20](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[DLLARC]. */
        uint32_t sderc                 : 1;  /**< [ 19: 19](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[SDERC]. */
        uint32_t cpm                   : 1;  /**< [ 18: 18](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[CPM]. */
        uint32_t l1el                  : 3;  /**< [ 17: 15](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[L1EL]. */
        uint32_t l0el                  : 3;  /**< [ 14: 12](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[L0EL]. */
        uint32_t aslpms                : 2;  /**< [ 11: 10](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[ASLPMS]. */
        uint32_t mlw                   : 6;  /**< [  9:  4](RO/H) Read-only copy of the associated PF's PCIEEP_LINK_CAP[MLW]. */
        uint32_t mls                   : 4;  /**< [  3:  0](RO/H) Read-only copy of the associated PF's PCIEEP_LINK_CAP[MLS]. */
#else /* Word 0 - Little Endian */
        uint32_t mls                   : 4;  /**< [  3:  0](RO/H) Read-only copy of the associated PF's PCIEEP_LINK_CAP[MLS]. */
        uint32_t mlw                   : 6;  /**< [  9:  4](RO/H) Read-only copy of the associated PF's PCIEEP_LINK_CAP[MLW]. */
        uint32_t aslpms                : 2;  /**< [ 11: 10](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[ASLPMS]. */
        uint32_t l0el                  : 3;  /**< [ 14: 12](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[L0EL]. */
        uint32_t l1el                  : 3;  /**< [ 17: 15](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[L1EL]. */
        uint32_t cpm                   : 1;  /**< [ 18: 18](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[CPM]. */
        uint32_t sderc                 : 1;  /**< [ 19: 19](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[SDERC]. */
        uint32_t dllarc                : 1;  /**< [ 20: 20](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[DLLARC]. */
        uint32_t lbnc                  : 1;  /**< [ 21: 21](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[LBNC]. */
        uint32_t aspm                  : 1;  /**< [ 22: 22](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[ASPM]. */
        uint32_t reserved_23           : 1;
        uint32_t pnum                  : 8;  /**< [ 31: 24](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP[PNUM]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_link_cap_s cn; */
};
typedef union cavm_pcieepvf_link_cap cavm_pcieepvf_link_cap_t;

#define CAVM_PCIEEPVF_LINK_CAP CAVM_PCIEEPVF_LINK_CAP_FUNC()
static inline uint64_t CAVM_PCIEEPVF_LINK_CAP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_LINK_CAP_FUNC(void)
{
    return 0x7c;
}

#define typedef_CAVM_PCIEEPVF_LINK_CAP cavm_pcieepvf_link_cap_t
#define bustype_CAVM_PCIEEPVF_LINK_CAP CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_LINK_CAP "PCIEEPVF_LINK_CAP"
#define busnum_CAVM_PCIEEPVF_LINK_CAP 0
#define arguments_CAVM_PCIEEPVF_LINK_CAP -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_link_cap2
 *
 * PCIe VF Link Capabilities 2 Register
 */
union cavm_pcieepvf_link_cap2
{
    uint32_t u;
    struct cavm_pcieepvf_link_cap2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t trtds                 : 1;  /**< [ 24: 24](RO) Two retimers presence detect supported. */
        uint32_t rtds                  : 1;  /**< [ 23: 23](RO) Retimer presence detect supported. */
        uint32_t reserved_9_22         : 14;
        uint32_t cls                   : 1;  /**< [  8:  8](RO) Crosslink supported. */
        uint32_t slsv                  : 7;  /**< [  7:  1](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP2[SLSV]. */
        uint32_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0            : 1;
        uint32_t slsv                  : 7;  /**< [  7:  1](RO) Read-only copy of the associated PF's PCIEEP_LINK_CAP2[SLSV]. */
        uint32_t cls                   : 1;  /**< [  8:  8](RO) Crosslink supported. */
        uint32_t reserved_9_22         : 14;
        uint32_t rtds                  : 1;  /**< [ 23: 23](RO) Retimer presence detect supported. */
        uint32_t trtds                 : 1;  /**< [ 24: 24](RO) Two retimers presence detect supported. */
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_link_cap2_s cn; */
};
typedef union cavm_pcieepvf_link_cap2 cavm_pcieepvf_link_cap2_t;

#define CAVM_PCIEEPVF_LINK_CAP2 CAVM_PCIEEPVF_LINK_CAP2_FUNC()
static inline uint64_t CAVM_PCIEEPVF_LINK_CAP2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_LINK_CAP2_FUNC(void)
{
    return 0x9c;
}

#define typedef_CAVM_PCIEEPVF_LINK_CAP2 cavm_pcieepvf_link_cap2_t
#define bustype_CAVM_PCIEEPVF_LINK_CAP2 CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_LINK_CAP2 "PCIEEPVF_LINK_CAP2"
#define busnum_CAVM_PCIEEPVF_LINK_CAP2 0
#define arguments_CAVM_PCIEEPVF_LINK_CAP2 -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_link_ctl
 *
 * PCIe VF Link Control/Link Status Register
 */
union cavm_pcieepvf_link_ctl
{
    uint32_t u;
    struct cavm_pcieepvf_link_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lab                   : 1;  /**< [ 31: 31](RO/H) Link autonomous bandwdith status. */
        uint32_t lbm                   : 1;  /**< [ 30: 30](RO/H) Link bandwidth management status. */
        uint32_t dlla                  : 1;  /**< [ 29: 29](RO) Data link layer active. Not applicable for an upstream port or endpoint device, hardwired to 0. */
        uint32_t scc                   : 1;  /**< [ 28: 28](RO) Slot clock configuration. Indicates that the component uses the same physical reference
                                                                 clock that the platform provides on the connector. Writable through PEM()_CFG_WR. */
        uint32_t lt                    : 1;  /**< [ 27: 27](RO) Link training. Not applicable for an upstream port or endpoint device, hardwired to 0. */
        uint32_t reserved_26           : 1;
        uint32_t nlw                   : 6;  /**< [ 25: 20](RO/H) Negotiated link width. Set automatically by hardware after link initialization. Value is
                                                                 undefined when link is not up. */
        uint32_t ls                    : 4;  /**< [ 19: 16](RO/H) Current link speed. The encoded value specifies a bit location in the supported link
                                                                 speeds vector (in the link capabilities 2 register) that corresponds to the current link
                                                                 speed.
                                                                 0x1 = Supported link speeds vector field bit 0.
                                                                 0x2 = Supported link speeds vector field bit 1.
                                                                 0x3 = Supported link speeds vector field bit 2. */
        uint32_t drs_sc                : 2;  /**< [ 15: 14](RO) DRS signaling control. */
        uint32_t reserved_12_13        : 2;
        uint32_t lab_int_enb           : 1;  /**< [ 11: 11](RO) Link autonomous bandwidth interrupt enable. This bit is not applicable and is reserved for
                                                                 endpoints. */
        uint32_t lbm_int_enb           : 1;  /**< [ 10: 10](RO) Link bandwidth management interrupt enable. This bit is not applicable and is reserved for
                                                                 endpoints. */
        uint32_t hawd                  : 1;  /**< [  9:  9](RAZ) VF RsvdP. */
        uint32_t ecpm                  : 1;  /**< [  8:  8](RAZ) VF RsvdP. */
        uint32_t es                    : 1;  /**< [  7:  7](RAZ) VF RsvdP. */
        uint32_t ccc                   : 1;  /**< [  6:  6](RAZ) VF RsvdP. */
        uint32_t rl                    : 1;  /**< [  5:  5](RO) Retrain link. Not applicable for an upstream port or endpoint device. Hardwired to 0. */
        uint32_t ld                    : 1;  /**< [  4:  4](RO) Link disable. Not applicable for an upstream port or endpoint device. Hardwired to 0. */
        uint32_t rcb                   : 1;  /**< [  3:  3](RAZ) VF RsvdP. */
        uint32_t reserved_2            : 1;
        uint32_t aslpc                 : 2;  /**< [  1:  0](RAZ) VF RsvdP. */
#else /* Word 0 - Little Endian */
        uint32_t aslpc                 : 2;  /**< [  1:  0](RAZ) VF RsvdP. */
        uint32_t reserved_2            : 1;
        uint32_t rcb                   : 1;  /**< [  3:  3](RAZ) VF RsvdP. */
        uint32_t ld                    : 1;  /**< [  4:  4](RO) Link disable. Not applicable for an upstream port or endpoint device. Hardwired to 0. */
        uint32_t rl                    : 1;  /**< [  5:  5](RO) Retrain link. Not applicable for an upstream port or endpoint device. Hardwired to 0. */
        uint32_t ccc                   : 1;  /**< [  6:  6](RAZ) VF RsvdP. */
        uint32_t es                    : 1;  /**< [  7:  7](RAZ) VF RsvdP. */
        uint32_t ecpm                  : 1;  /**< [  8:  8](RAZ) VF RsvdP. */
        uint32_t hawd                  : 1;  /**< [  9:  9](RAZ) VF RsvdP. */
        uint32_t lbm_int_enb           : 1;  /**< [ 10: 10](RO) Link bandwidth management interrupt enable. This bit is not applicable and is reserved for
                                                                 endpoints. */
        uint32_t lab_int_enb           : 1;  /**< [ 11: 11](RO) Link autonomous bandwidth interrupt enable. This bit is not applicable and is reserved for
                                                                 endpoints. */
        uint32_t reserved_12_13        : 2;
        uint32_t drs_sc                : 2;  /**< [ 15: 14](RO) DRS signaling control. */
        uint32_t ls                    : 4;  /**< [ 19: 16](RO/H) Current link speed. The encoded value specifies a bit location in the supported link
                                                                 speeds vector (in the link capabilities 2 register) that corresponds to the current link
                                                                 speed.
                                                                 0x1 = Supported link speeds vector field bit 0.
                                                                 0x2 = Supported link speeds vector field bit 1.
                                                                 0x3 = Supported link speeds vector field bit 2. */
        uint32_t nlw                   : 6;  /**< [ 25: 20](RO/H) Negotiated link width. Set automatically by hardware after link initialization. Value is
                                                                 undefined when link is not up. */
        uint32_t reserved_26           : 1;
        uint32_t lt                    : 1;  /**< [ 27: 27](RO) Link training. Not applicable for an upstream port or endpoint device, hardwired to 0. */
        uint32_t scc                   : 1;  /**< [ 28: 28](RO) Slot clock configuration. Indicates that the component uses the same physical reference
                                                                 clock that the platform provides on the connector. Writable through PEM()_CFG_WR. */
        uint32_t dlla                  : 1;  /**< [ 29: 29](RO) Data link layer active. Not applicable for an upstream port or endpoint device, hardwired to 0. */
        uint32_t lbm                   : 1;  /**< [ 30: 30](RO/H) Link bandwidth management status. */
        uint32_t lab                   : 1;  /**< [ 31: 31](RO/H) Link autonomous bandwdith status. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_link_ctl_s cn; */
};
typedef union cavm_pcieepvf_link_ctl cavm_pcieepvf_link_ctl_t;

#define CAVM_PCIEEPVF_LINK_CTL CAVM_PCIEEPVF_LINK_CTL_FUNC()
static inline uint64_t CAVM_PCIEEPVF_LINK_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_LINK_CTL_FUNC(void)
{
    return 0x80;
}

#define typedef_CAVM_PCIEEPVF_LINK_CTL cavm_pcieepvf_link_ctl_t
#define bustype_CAVM_PCIEEPVF_LINK_CTL CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_LINK_CTL "PCIEEPVF_LINK_CTL"
#define busnum_CAVM_PCIEEPVF_LINK_CTL 0
#define arguments_CAVM_PCIEEPVF_LINK_CTL -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_link_ctl2
 *
 * PCIe VF Link Control 2 Register/Link Status 2 Register
 */
union cavm_pcieepvf_link_ctl2
{
    uint32_t u;
    struct cavm_pcieepvf_link_ctl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t drs_mr                : 1;  /**< [ 31: 31](RO) DRS message received. */
        uint32_t dcp                   : 3;  /**< [ 30: 28](RO) Downstream component presence. */
        uint32_t reserved_26_27        : 2;
        uint32_t clr                   : 2;  /**< [ 25: 24](RO) Crosslink resolution (not supported). */
        uint32_t trtd                  : 1;  /**< [ 23: 23](RO) Two retimers presence detected. */
        uint32_t rtd                   : 1;  /**< [ 22: 22](RO) Retimer presence detected. */
        uint32_t ler                   : 1;  /**< [ 21: 21](RO) 8.0 GT/s Link Equalization Request. */
        uint32_t ep3s                  : 1;  /**< [ 20: 20](RO/H) Equalization 8.0 GT/s phase 3 successful. */
        uint32_t ep2s                  : 1;  /**< [ 19: 19](RO/H) Equalization 8.0 GT/s phase 2 successful. */
        uint32_t ep1s                  : 1;  /**< [ 18: 18](RO/H) Equalization 8.0 GT/s phase 2 successful. */
        uint32_t eqc                   : 1;  /**< [ 17: 17](RO/H) Equalization 8.0 GT/s complete. */
        uint32_t cdl                   : 1;  /**< [ 16: 16](RO/H) Read-only copy of the associated PF's PCIEEP_LINK_CTL2[CDL]. */
        uint32_t cde                   : 4;  /**< [ 15: 12](RO) VF's read-only zeros. */
        uint32_t csos                  : 1;  /**< [ 11: 11](RO) VF's read-only zeros. */
        uint32_t emc                   : 1;  /**< [ 10: 10](RO) VF's read-only zeros. */
        uint32_t tm                    : 3;  /**< [  9:  7](RO/H) VF's read-only zeros. */
        uint32_t sde                   : 1;  /**< [  6:  6](RO) VF's read-only zeros. */
        uint32_t hasd                  : 1;  /**< [  5:  5](RO/H) VF's read-only zeros. */
        uint32_t ec                    : 1;  /**< [  4:  4](RO) VF's read-only zeros. */
        uint32_t tls                   : 4;  /**< [  3:  0](RO/H) VF's read-only zeros. */
#else /* Word 0 - Little Endian */
        uint32_t tls                   : 4;  /**< [  3:  0](RO/H) VF's read-only zeros. */
        uint32_t ec                    : 1;  /**< [  4:  4](RO) VF's read-only zeros. */
        uint32_t hasd                  : 1;  /**< [  5:  5](RO/H) VF's read-only zeros. */
        uint32_t sde                   : 1;  /**< [  6:  6](RO) VF's read-only zeros. */
        uint32_t tm                    : 3;  /**< [  9:  7](RO/H) VF's read-only zeros. */
        uint32_t emc                   : 1;  /**< [ 10: 10](RO) VF's read-only zeros. */
        uint32_t csos                  : 1;  /**< [ 11: 11](RO) VF's read-only zeros. */
        uint32_t cde                   : 4;  /**< [ 15: 12](RO) VF's read-only zeros. */
        uint32_t cdl                   : 1;  /**< [ 16: 16](RO/H) Read-only copy of the associated PF's PCIEEP_LINK_CTL2[CDL]. */
        uint32_t eqc                   : 1;  /**< [ 17: 17](RO/H) Equalization 8.0 GT/s complete. */
        uint32_t ep1s                  : 1;  /**< [ 18: 18](RO/H) Equalization 8.0 GT/s phase 2 successful. */
        uint32_t ep2s                  : 1;  /**< [ 19: 19](RO/H) Equalization 8.0 GT/s phase 2 successful. */
        uint32_t ep3s                  : 1;  /**< [ 20: 20](RO/H) Equalization 8.0 GT/s phase 3 successful. */
        uint32_t ler                   : 1;  /**< [ 21: 21](RO) 8.0 GT/s Link Equalization Request. */
        uint32_t rtd                   : 1;  /**< [ 22: 22](RO) Retimer presence detected. */
        uint32_t trtd                  : 1;  /**< [ 23: 23](RO) Two retimers presence detected. */
        uint32_t clr                   : 2;  /**< [ 25: 24](RO) Crosslink resolution (not supported). */
        uint32_t reserved_26_27        : 2;
        uint32_t dcp                   : 3;  /**< [ 30: 28](RO) Downstream component presence. */
        uint32_t drs_mr                : 1;  /**< [ 31: 31](RO) DRS message received. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_link_ctl2_s cn; */
};
typedef union cavm_pcieepvf_link_ctl2 cavm_pcieepvf_link_ctl2_t;

#define CAVM_PCIEEPVF_LINK_CTL2 CAVM_PCIEEPVF_LINK_CTL2_FUNC()
static inline uint64_t CAVM_PCIEEPVF_LINK_CTL2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_LINK_CTL2_FUNC(void)
{
    return 0xa0;
}

#define typedef_CAVM_PCIEEPVF_LINK_CTL2 cavm_pcieepvf_link_ctl2_t
#define bustype_CAVM_PCIEEPVF_LINK_CTL2 CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_LINK_CTL2 "PCIEEPVF_LINK_CTL2"
#define busnum_CAVM_PCIEEPVF_LINK_CTL2 0
#define arguments_CAVM_PCIEEPVF_LINK_CTL2 -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_msix_cap_cntrl
 *
 * PCIe VF PCI Express MSI-X Capability ID/MSI-X Next Item Pointer/MSI-X Control Register
 */
union cavm_pcieepvf_msix_cap_cntrl
{
    uint32_t u;
    struct cavm_pcieepvf_msix_cap_cntrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msixen                : 1;  /**< [ 31: 31](R/W) MSI-X enable. */
        uint32_t funm                  : 1;  /**< [ 30: 30](R/W) Function mask.
                                                                 0 = Each vectors mask bit determines whether the vector is masked or not.
                                                                 1 = All vectors associated with the function are masked, regardless of their respective
                                                                 per-vector mask bits. */
        uint32_t reserved_27_29        : 3;
        uint32_t msixts                : 11; /**< [ 26: 16](RO) MSI-X table size encoded as (table size - 1).

                                                                 This field is writable through PEM()_CFG_WR to PCIEEP_MSIX_CAP_CNTRL when
                                                                 PEM()_CFG_WR[ADDR[16]] (CS2) is set

                                                                 Reads to this field will always return the value of its associated PF. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO) Next capability pointer. */
        uint32_t msixcid               : 8;  /**< [  7:  0](RO) MSI-X capability ID. */
#else /* Word 0 - Little Endian */
        uint32_t msixcid               : 8;  /**< [  7:  0](RO) MSI-X capability ID. */
        uint32_t ncp                   : 8;  /**< [ 15:  8](RO) Next capability pointer. */
        uint32_t msixts                : 11; /**< [ 26: 16](RO) MSI-X table size encoded as (table size - 1).

                                                                 This field is writable through PEM()_CFG_WR to PCIEEP_MSIX_CAP_CNTRL when
                                                                 PEM()_CFG_WR[ADDR[16]] (CS2) is set

                                                                 Reads to this field will always return the value of its associated PF. */
        uint32_t reserved_27_29        : 3;
        uint32_t funm                  : 1;  /**< [ 30: 30](R/W) Function mask.
                                                                 0 = Each vectors mask bit determines whether the vector is masked or not.
                                                                 1 = All vectors associated with the function are masked, regardless of their respective
                                                                 per-vector mask bits. */
        uint32_t msixen                : 1;  /**< [ 31: 31](R/W) MSI-X enable. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_msix_cap_cntrl_s cn; */
};
typedef union cavm_pcieepvf_msix_cap_cntrl cavm_pcieepvf_msix_cap_cntrl_t;

#define CAVM_PCIEEPVF_MSIX_CAP_CNTRL CAVM_PCIEEPVF_MSIX_CAP_CNTRL_FUNC()
static inline uint64_t CAVM_PCIEEPVF_MSIX_CAP_CNTRL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_MSIX_CAP_CNTRL_FUNC(void)
{
    return 0xb0;
}

#define typedef_CAVM_PCIEEPVF_MSIX_CAP_CNTRL cavm_pcieepvf_msix_cap_cntrl_t
#define bustype_CAVM_PCIEEPVF_MSIX_CAP_CNTRL CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_MSIX_CAP_CNTRL "PCIEEPVF_MSIX_CAP_CNTRL"
#define busnum_CAVM_PCIEEPVF_MSIX_CAP_CNTRL 0
#define arguments_CAVM_PCIEEPVF_MSIX_CAP_CNTRL -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_msix_pba
 *
 * PCIe VF PCI Express MSI-X PBA Offset and BIR Register
 */
union cavm_pcieepvf_msix_pba
{
    uint32_t u;
    struct cavm_pcieepvf_msix_pba_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msixpoffs             : 29; /**< [ 31:  3](RO) MSI-X table offset register. Base address of the MSI-X PBA, as an offset from the base
                                                                 address of the BAR indicated by the table PBA bits. */
        uint32_t msixpbir              : 3;  /**< [  2:  0](RO) Read-only copy of the associated PF's PCIEEP_MSIX_PBA[MSIXPBIR]. */
#else /* Word 0 - Little Endian */
        uint32_t msixpbir              : 3;  /**< [  2:  0](RO) Read-only copy of the associated PF's PCIEEP_MSIX_PBA[MSIXPBIR]. */
        uint32_t msixpoffs             : 29; /**< [ 31:  3](RO) MSI-X table offset register. Base address of the MSI-X PBA, as an offset from the base
                                                                 address of the BAR indicated by the table PBA bits. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_msix_pba_s cn; */
};
typedef union cavm_pcieepvf_msix_pba cavm_pcieepvf_msix_pba_t;

#define CAVM_PCIEEPVF_MSIX_PBA CAVM_PCIEEPVF_MSIX_PBA_FUNC()
static inline uint64_t CAVM_PCIEEPVF_MSIX_PBA_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_MSIX_PBA_FUNC(void)
{
    return 0xb8;
}

#define typedef_CAVM_PCIEEPVF_MSIX_PBA cavm_pcieepvf_msix_pba_t
#define bustype_CAVM_PCIEEPVF_MSIX_PBA CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_MSIX_PBA "PCIEEPVF_MSIX_PBA"
#define busnum_CAVM_PCIEEPVF_MSIX_PBA 0
#define arguments_CAVM_PCIEEPVF_MSIX_PBA -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_msix_table
 *
 * PCIe VF PCI Express MSI-X Table Offset and BIR Register
 */
union cavm_pcieepvf_msix_table
{
    uint32_t u;
    struct cavm_pcieepvf_msix_table_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msixtoffs             : 29; /**< [ 31:  3](RO) Read-only copy of the associated PF's PCIEEP_MSIX_TABLE[MSIXTOFFS]. */
        uint32_t msixtbir              : 3;  /**< [  2:  0](RO) Read-only copy of the associated PF's PCIEEP_MSIX_TABLE[MSIXTBIR]. */
#else /* Word 0 - Little Endian */
        uint32_t msixtbir              : 3;  /**< [  2:  0](RO) Read-only copy of the associated PF's PCIEEP_MSIX_TABLE[MSIXTBIR]. */
        uint32_t msixtoffs             : 29; /**< [ 31:  3](RO) Read-only copy of the associated PF's PCIEEP_MSIX_TABLE[MSIXTOFFS]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_msix_table_s cn; */
};
typedef union cavm_pcieepvf_msix_table cavm_pcieepvf_msix_table_t;

#define CAVM_PCIEEPVF_MSIX_TABLE CAVM_PCIEEPVF_MSIX_TABLE_FUNC()
static inline uint64_t CAVM_PCIEEPVF_MSIX_TABLE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_MSIX_TABLE_FUNC(void)
{
    return 0xb4;
}

#define typedef_CAVM_PCIEEPVF_MSIX_TABLE cavm_pcieepvf_msix_table_t
#define bustype_CAVM_PCIEEPVF_MSIX_TABLE CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_MSIX_TABLE "PCIEEPVF_MSIX_TABLE"
#define busnum_CAVM_PCIEEPVF_MSIX_TABLE 0
#define arguments_CAVM_PCIEEPVF_MSIX_TABLE -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_rev
 *
 * PCIe VF Class Code/Revision ID Register
 */
union cavm_pcieepvf_rev
{
    uint32_t u;
    struct cavm_pcieepvf_rev_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bcc                   : 8;  /**< [ 31: 24](RO) Read-only copy of the associated PF's PCIEEP_REV[BCC]. */
        uint32_t sc                    : 8;  /**< [ 23: 16](RO) Read-only copy of the associated PF's PCIEEP_REV[SC]. */
        uint32_t pi                    : 8;  /**< [ 15:  8](RO) Read-only copy of the associated PF's PCIEEP_REV[PI]. */
        uint32_t rid                   : 8;  /**< [  7:  0](RO) Read-only copy of the associated PF's PCIEEP_REV[RID]. */
#else /* Word 0 - Little Endian */
        uint32_t rid                   : 8;  /**< [  7:  0](RO) Read-only copy of the associated PF's PCIEEP_REV[RID]. */
        uint32_t pi                    : 8;  /**< [ 15:  8](RO) Read-only copy of the associated PF's PCIEEP_REV[PI]. */
        uint32_t sc                    : 8;  /**< [ 23: 16](RO) Read-only copy of the associated PF's PCIEEP_REV[SC]. */
        uint32_t bcc                   : 8;  /**< [ 31: 24](RO) Read-only copy of the associated PF's PCIEEP_REV[BCC]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_rev_s cn; */
};
typedef union cavm_pcieepvf_rev cavm_pcieepvf_rev_t;

#define CAVM_PCIEEPVF_REV CAVM_PCIEEPVF_REV_FUNC()
static inline uint64_t CAVM_PCIEEPVF_REV_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_REV_FUNC(void)
{
    return 8;
}

#define typedef_CAVM_PCIEEPVF_REV cavm_pcieepvf_rev_t
#define bustype_CAVM_PCIEEPVF_REV CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_REV "PCIEEPVF_REV"
#define busnum_CAVM_PCIEEPVF_REV 0
#define arguments_CAVM_PCIEEPVF_REV -1,-1,-1,-1

/**
 * Register (PCICONFIGEPVF) pcieepvf_subsys
 *
 * PCIe VF SubSystem ID/Subsystem Vendor ID Register
 */
union cavm_pcieepvf_subsys
{
    uint32_t u;
    struct cavm_pcieepvf_subsys_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ssid                  : 16; /**< [ 31: 16](RO) Read-only copy of the associated PF's PCIEEP_SUBSYS[SSID]. */
        uint32_t ssvid                 : 16; /**< [ 15:  0](RO) Read-only copy of the associated PF's PCIEEP_SUBSYS[SSVID]. */
#else /* Word 0 - Little Endian */
        uint32_t ssvid                 : 16; /**< [ 15:  0](RO) Read-only copy of the associated PF's PCIEEP_SUBSYS[SSVID]. */
        uint32_t ssid                  : 16; /**< [ 31: 16](RO) Read-only copy of the associated PF's PCIEEP_SUBSYS[SSID]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pcieepvf_subsys_s cn; */
};
typedef union cavm_pcieepvf_subsys cavm_pcieepvf_subsys_t;

#define CAVM_PCIEEPVF_SUBSYS CAVM_PCIEEPVF_SUBSYS_FUNC()
static inline uint64_t CAVM_PCIEEPVF_SUBSYS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCIEEPVF_SUBSYS_FUNC(void)
{
    return 0x2c;
}

#define typedef_CAVM_PCIEEPVF_SUBSYS cavm_pcieepvf_subsys_t
#define bustype_CAVM_PCIEEPVF_SUBSYS CSR_TYPE_PCICONFIGEPVF
#define basename_CAVM_PCIEEPVF_SUBSYS "PCIEEPVF_SUBSYS"
#define busnum_CAVM_PCIEEPVF_SUBSYS 0
#define arguments_CAVM_PCIEEPVF_SUBSYS -1,-1,-1,-1

#endif /* __CAVM_CSRS_PCIEEPVF_H__ */
