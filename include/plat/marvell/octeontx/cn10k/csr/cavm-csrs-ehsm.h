#ifndef __CAVM_CSRS_EHSM_H__
#define __CAVM_CSRS_EHSM_H__
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
 * OcteonTX EHSM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration ehsm_bar_e
 *
 * EHSM Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_EHSM_BAR_E_EHSM_PF_BAR0 (0x80b000000000ll)
#define CAVM_EHSM_BAR_E_EHSM_PF_BAR0_SIZE 0x100000ull
#define CAVM_EHSM_BAR_E_EHSM_PF_BAR4 (0x80b000100000ll)
#define CAVM_EHSM_BAR_E_EHSM_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration ehsm_int_vec_e
 *
 * EHSM MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_EHSM_INT_VEC_E_EHSM_HST_INTX(a) (0 + (a))

/**
 * Register (NCB32b) ehsm_eco
 *
 * INTERNAL: EHSM ECO Register
 *
 * This register is reset on chip reset.
 */
union cavm_ehsm_eco
{
    uint32_t u;
    struct cavm_ehsm_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint32_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved for ECO usage. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_eco_s cn; */
};
typedef union cavm_ehsm_eco cavm_ehsm_eco_t;

#define CAVM_EHSM_ECO CAVM_EHSM_ECO_FUNC()
static inline uint64_t CAVM_EHSM_ECO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_ECO_FUNC(void)
{
    return 0x80b000004200ll;
}

#define typedef_CAVM_EHSM_ECO cavm_ehsm_eco_t
#define bustype_CAVM_EHSM_ECO CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_ECO "EHSM_ECO"
#define device_bar_CAVM_EHSM_ECO 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_ECO 0
#define arguments_CAVM_EHSM_ECO -1,-1,-1,-1

/**
 * Register (NCB) ehsm_hst#_int_ena_w1c
 *
 * EHSM Host Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_ehsm_hstx_int_ena_w1c
{
    uint64_t u;
    struct cavm_ehsm_hstx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for EHSM_HST(0..1)_INT_W1C[INTR]. */
#else /* Word 0 - Little Endian */
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for EHSM_HST(0..1)_INT_W1C[INTR]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_hstx_int_ena_w1c_s cn; */
};
typedef union cavm_ehsm_hstx_int_ena_w1c cavm_ehsm_hstx_int_ena_w1c_t;

static inline uint64_t CAVM_EHSM_HSTX_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_HSTX_INT_ENA_W1C(uint64_t a)
{
    if (a<=1)
        return 0x80b000004110ll + 0x20ll * ((a) & 0x1);
    __cavm_csr_fatal("EHSM_HSTX_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_HSTX_INT_ENA_W1C(a) cavm_ehsm_hstx_int_ena_w1c_t
#define bustype_CAVM_EHSM_HSTX_INT_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_EHSM_HSTX_INT_ENA_W1C(a) "EHSM_HSTX_INT_ENA_W1C"
#define device_bar_CAVM_EHSM_HSTX_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_HSTX_INT_ENA_W1C(a) (a)
#define arguments_CAVM_EHSM_HSTX_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) ehsm_hst#_int_ena_w1s
 *
 * EHSM Host Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_ehsm_hstx_int_ena_w1s
{
    uint64_t u;
    struct cavm_ehsm_hstx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for EHSM_HST(0..1)_INT_W1C[INTR]. */
#else /* Word 0 - Little Endian */
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for EHSM_HST(0..1)_INT_W1C[INTR]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_hstx_int_ena_w1s_s cn; */
};
typedef union cavm_ehsm_hstx_int_ena_w1s cavm_ehsm_hstx_int_ena_w1s_t;

static inline uint64_t CAVM_EHSM_HSTX_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_HSTX_INT_ENA_W1S(uint64_t a)
{
    if (a<=1)
        return 0x80b000004118ll + 0x20ll * ((a) & 0x1);
    __cavm_csr_fatal("EHSM_HSTX_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_HSTX_INT_ENA_W1S(a) cavm_ehsm_hstx_int_ena_w1s_t
#define bustype_CAVM_EHSM_HSTX_INT_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_EHSM_HSTX_INT_ENA_W1S(a) "EHSM_HSTX_INT_ENA_W1S"
#define device_bar_CAVM_EHSM_HSTX_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_HSTX_INT_ENA_W1S(a) (a)
#define arguments_CAVM_EHSM_HSTX_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) ehsm_hst#_int_w1c
 *
 * EHSM Host Interrupt Register
 * This register indicate primitive execution done.
 */
union cavm_ehsm_hstx_int_w1c
{
    uint64_t u;
    struct cavm_ehsm_hstx_int_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1C/H) Interrupt to host processor, indicating primitive execution done. */
#else /* Word 0 - Little Endian */
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1C/H) Interrupt to host processor, indicating primitive execution done. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_hstx_int_w1c_s cn; */
};
typedef union cavm_ehsm_hstx_int_w1c cavm_ehsm_hstx_int_w1c_t;

static inline uint64_t CAVM_EHSM_HSTX_INT_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_HSTX_INT_W1C(uint64_t a)
{
    if (a<=1)
        return 0x80b000004100ll + 0x20ll * ((a) & 0x1);
    __cavm_csr_fatal("EHSM_HSTX_INT_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_HSTX_INT_W1C(a) cavm_ehsm_hstx_int_w1c_t
#define bustype_CAVM_EHSM_HSTX_INT_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_EHSM_HSTX_INT_W1C(a) "EHSM_HSTX_INT_W1C"
#define device_bar_CAVM_EHSM_HSTX_INT_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_HSTX_INT_W1C(a) (a)
#define arguments_CAVM_EHSM_HSTX_INT_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) ehsm_hst#_int_w1s
 *
 * EHSM Host Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_ehsm_hstx_int_w1s
{
    uint64_t u;
    struct cavm_ehsm_hstx_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets EHSM_HST(0..1)_INT_W1C[INTR]. */
#else /* Word 0 - Little Endian */
        uint64_t intr                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets EHSM_HST(0..1)_INT_W1C[INTR]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_hstx_int_w1s_s cn; */
};
typedef union cavm_ehsm_hstx_int_w1s cavm_ehsm_hstx_int_w1s_t;

static inline uint64_t CAVM_EHSM_HSTX_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_HSTX_INT_W1S(uint64_t a)
{
    if (a<=1)
        return 0x80b000004108ll + 0x20ll * ((a) & 0x1);
    __cavm_csr_fatal("EHSM_HSTX_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_HSTX_INT_W1S(a) cavm_ehsm_hstx_int_w1s_t
#define bustype_CAVM_EHSM_HSTX_INT_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_EHSM_HSTX_INT_W1S(a) "EHSM_HSTX_INT_W1S"
#define device_bar_CAVM_EHSM_HSTX_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_HSTX_INT_W1S(a) (a)
#define arguments_CAVM_EHSM_HSTX_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) ehsm_ip_regs#
 *
 * EHSM IP Internal Registers
 * These registers access the EHSM register space.
 */
union cavm_ehsm_ip_regsx
{
    uint64_t u;
    struct cavm_ehsm_ip_regsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](R/W) EHSM registers. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](R/W) EHSM registers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_ip_regsx_s cn; */
};
typedef union cavm_ehsm_ip_regsx cavm_ehsm_ip_regsx_t;

static inline uint64_t CAVM_EHSM_IP_REGSX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_IP_REGSX(uint64_t a)
{
    if (a<=2047)
        return 0x80b000000000ll + 4ll * ((a) & 0x7ff);
    __cavm_csr_fatal("EHSM_IP_REGSX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_IP_REGSX(a) cavm_ehsm_ip_regsx_t
#define bustype_CAVM_EHSM_IP_REGSX(a) CSR_TYPE_NCB
#define basename_CAVM_EHSM_IP_REGSX(a) "EHSM_IP_REGSX"
#define device_bar_CAVM_EHSM_IP_REGSX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_IP_REGSX(a) (a)
#define arguments_CAVM_EHSM_IP_REGSX(a) (a),-1,-1,-1

/**
 * Register (NCB) ehsm_msix_pba#
 *
 * EHSM MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table; the bit number is indexed by the EHSM_INT_VEC_E enumeration.
 *
 * This register is reset on EHSM domain reset.
 */
union cavm_ehsm_msix_pbax
{
    uint64_t u;
    struct cavm_ehsm_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated EHSM_MSIX_VEC()_CTL, enumerated by EHSM_INT_VEC_E. Bits
                                                                 that have no associated BCP_INT_VEC_E are 0. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated EHSM_MSIX_VEC()_CTL, enumerated by EHSM_INT_VEC_E. Bits
                                                                 that have no associated BCP_INT_VEC_E are 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_msix_pbax_s cn; */
};
typedef union cavm_ehsm_msix_pbax cavm_ehsm_msix_pbax_t;

static inline uint64_t CAVM_EHSM_MSIX_PBAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_MSIX_PBAX(uint64_t a)
{
    if (a==0)
        return 0x80b0001f0000ll + 8ll * ((a) & 0x0);
    __cavm_csr_fatal("EHSM_MSIX_PBAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_MSIX_PBAX(a) cavm_ehsm_msix_pbax_t
#define bustype_CAVM_EHSM_MSIX_PBAX(a) CSR_TYPE_NCB
#define basename_CAVM_EHSM_MSIX_PBAX(a) "EHSM_MSIX_PBAX"
#define device_bar_CAVM_EHSM_MSIX_PBAX(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_EHSM_MSIX_PBAX(a) (a)
#define arguments_CAVM_EHSM_MSIX_PBAX(a) (a),-1,-1,-1

/**
 * Register (NCB) ehsm_msix_vec#_addr
 *
 * EHSM MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the EHSM_INT_VEC_E enumeration.
 *
 * This register is reset on EHSM domain reset.
 */
union cavm_ehsm_msix_vecx_addr
{
    uint64_t u;
    struct cavm_ehsm_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's EHSM_MSIX_VEC()_ADDR, EHSM_MSIX_VEC()_CTL, and corresponding
                                                                 bit of EHSM_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_EHSM_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set.

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

                                                                 1 = This vector's EHSM_MSIX_VEC()_ADDR, EHSM_MSIX_VEC()_CTL, and corresponding
                                                                 bit of EHSM_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_EHSM_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set.

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
    /* struct cavm_ehsm_msix_vecx_addr_s cn; */
};
typedef union cavm_ehsm_msix_vecx_addr cavm_ehsm_msix_vecx_addr_t;

static inline uint64_t CAVM_EHSM_MSIX_VECX_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_MSIX_VECX_ADDR(uint64_t a)
{
    if (a<=1)
        return 0x80b000100000ll + 0x10ll * ((a) & 0x1);
    __cavm_csr_fatal("EHSM_MSIX_VECX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_MSIX_VECX_ADDR(a) cavm_ehsm_msix_vecx_addr_t
#define bustype_CAVM_EHSM_MSIX_VECX_ADDR(a) CSR_TYPE_NCB
#define basename_CAVM_EHSM_MSIX_VECX_ADDR(a) "EHSM_MSIX_VECX_ADDR"
#define device_bar_CAVM_EHSM_MSIX_VECX_ADDR(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_EHSM_MSIX_VECX_ADDR(a) (a)
#define arguments_CAVM_EHSM_MSIX_VECX_ADDR(a) (a),-1,-1,-1

/**
 * Register (NCB) ehsm_msix_vec#_ctl
 *
 * EHSM MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the EHSM_INT_VEC_E enumeration.
 *
 * This register is reset on EHSM domain reset.
 */
union cavm_ehsm_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_ehsm_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_msix_vecx_ctl_s cn; */
};
typedef union cavm_ehsm_msix_vecx_ctl cavm_ehsm_msix_vecx_ctl_t;

static inline uint64_t CAVM_EHSM_MSIX_VECX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_MSIX_VECX_CTL(uint64_t a)
{
    if (a<=1)
        return 0x80b000100008ll + 0x10ll * ((a) & 0x1);
    __cavm_csr_fatal("EHSM_MSIX_VECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_EHSM_MSIX_VECX_CTL(a) cavm_ehsm_msix_vecx_ctl_t
#define bustype_CAVM_EHSM_MSIX_VECX_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_EHSM_MSIX_VECX_CTL(a) "EHSM_MSIX_VECX_CTL"
#define device_bar_CAVM_EHSM_MSIX_VECX_CTL(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_EHSM_MSIX_VECX_CTL(a) (a)
#define arguments_CAVM_EHSM_MSIX_VECX_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) ehsm_ram_base_addr
 *
 * CPC RAM Base Address Register
 */
union cavm_ehsm_ram_base_addr
{
    uint64_t u;
    struct cavm_ehsm_ram_base_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 64; /**< [ 63:  0](R/W) CPC RAM base address as reflected to EHSM DMA. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 64; /**< [ 63:  0](R/W) CPC RAM base address as reflected to EHSM DMA. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_ram_base_addr_s cn; */
};
typedef union cavm_ehsm_ram_base_addr cavm_ehsm_ram_base_addr_t;

#define CAVM_EHSM_RAM_BASE_ADDR CAVM_EHSM_RAM_BASE_ADDR_FUNC()
static inline uint64_t CAVM_EHSM_RAM_BASE_ADDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_RAM_BASE_ADDR_FUNC(void)
{
    return 0x80b000004000ll;
}

#define typedef_CAVM_EHSM_RAM_BASE_ADDR cavm_ehsm_ram_base_addr_t
#define bustype_CAVM_EHSM_RAM_BASE_ADDR CSR_TYPE_NCB
#define basename_CAVM_EHSM_RAM_BASE_ADDR "EHSM_RAM_BASE_ADDR"
#define device_bar_CAVM_EHSM_RAM_BASE_ADDR 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_RAM_BASE_ADDR 0
#define arguments_CAVM_EHSM_RAM_BASE_ADDR -1,-1,-1,-1

/**
 * Register (NCB) ehsm_ram_dest_addr
 *
 * CPC RAM Destination Address Register
 */
union cavm_ehsm_ram_dest_addr
{
    uint64_t u;
    struct cavm_ehsm_ram_dest_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 45; /**< [ 63: 19](R/W) CPC RAM base address.
                                                                 Transaction will recieve that value if original address of the transaction
                                                                 is in the window that define by RAM_SIZE and RAM_BASE_ADDR registers.

                                                                 19 LSB are the address inside the RAM. */
        uint64_t reserved_0_18         : 19;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_18         : 19;
        uint64_t addr                  : 45; /**< [ 63: 19](R/W) CPC RAM base address.
                                                                 Transaction will recieve that value if original address of the transaction
                                                                 is in the window that define by RAM_SIZE and RAM_BASE_ADDR registers.

                                                                 19 LSB are the address inside the RAM. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_ram_dest_addr_s cn; */
};
typedef union cavm_ehsm_ram_dest_addr cavm_ehsm_ram_dest_addr_t;

#define CAVM_EHSM_RAM_DEST_ADDR CAVM_EHSM_RAM_DEST_ADDR_FUNC()
static inline uint64_t CAVM_EHSM_RAM_DEST_ADDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_RAM_DEST_ADDR_FUNC(void)
{
    return 0x80b000004010ll;
}

#define typedef_CAVM_EHSM_RAM_DEST_ADDR cavm_ehsm_ram_dest_addr_t
#define bustype_CAVM_EHSM_RAM_DEST_ADDR CSR_TYPE_NCB
#define basename_CAVM_EHSM_RAM_DEST_ADDR "EHSM_RAM_DEST_ADDR"
#define device_bar_CAVM_EHSM_RAM_DEST_ADDR 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_RAM_DEST_ADDR 0
#define arguments_CAVM_EHSM_RAM_DEST_ADDR -1,-1,-1,-1

/**
 * Register (NCB) ehsm_ram_size
 *
 * CPC RAM Size Register
 */
union cavm_ehsm_ram_size
{
    uint64_t u;
    struct cavm_ehsm_ram_size_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t size                  : 64; /**< [ 63:  0](R/W) CPC RAM size as reflected to EHSM DMA. */
#else /* Word 0 - Little Endian */
        uint64_t size                  : 64; /**< [ 63:  0](R/W) CPC RAM size as reflected to EHSM DMA. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_ram_size_s cn; */
};
typedef union cavm_ehsm_ram_size cavm_ehsm_ram_size_t;

#define CAVM_EHSM_RAM_SIZE CAVM_EHSM_RAM_SIZE_FUNC()
static inline uint64_t CAVM_EHSM_RAM_SIZE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_RAM_SIZE_FUNC(void)
{
    return 0x80b000004008ll;
}

#define typedef_CAVM_EHSM_RAM_SIZE cavm_ehsm_ram_size_t
#define bustype_CAVM_EHSM_RAM_SIZE CSR_TYPE_NCB
#define basename_CAVM_EHSM_RAM_SIZE "EHSM_RAM_SIZE"
#define device_bar_CAVM_EHSM_RAM_SIZE 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_RAM_SIZE 0
#define arguments_CAVM_EHSM_RAM_SIZE -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_s_eco
 *
 * INTERNAL: EHSM Secure ECO Register
 *
 * This register is reset on chip reset.
 */
union cavm_ehsm_s_eco
{
    uint32_t u;
    struct cavm_ehsm_s_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t eco_rw                : 32; /**< [ 31:  0](SR/W) Reserved for secure ECO usage. */
#else /* Word 0 - Little Endian */
        uint32_t eco_rw                : 32; /**< [ 31:  0](SR/W) Reserved for secure ECO usage. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_s_eco_s cn; */
};
typedef union cavm_ehsm_s_eco cavm_ehsm_s_eco_t;

#define CAVM_EHSM_S_ECO CAVM_EHSM_S_ECO_FUNC()
static inline uint64_t CAVM_EHSM_S_ECO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_S_ECO_FUNC(void)
{
    return 0x80b000004204ll;
}

#define typedef_CAVM_EHSM_S_ECO cavm_ehsm_s_eco_t
#define bustype_CAVM_EHSM_S_ECO CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_S_ECO "EHSM_S_ECO"
#define device_bar_CAVM_EHSM_S_ECO 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_S_ECO 0
#define arguments_CAVM_EHSM_S_ECO -1,-1,-1,-1

/**
 * Register (NCB32b) ehsm_sw_sensor
 *
 * CPC eHSM Software Sensor Register
 */
union cavm_ehsm_sw_sensor
{
    uint32_t u;
    struct cavm_ehsm_sw_sensor_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t sw_sense              : 1;  /**< [  0:  0](R/W) Set Once register.
                                                                 Reset on cold reset.
                                                                 Connect to eHSM sensor[0]. */
#else /* Word 0 - Little Endian */
        uint32_t sw_sense              : 1;  /**< [  0:  0](R/W) Set Once register.
                                                                 Reset on cold reset.
                                                                 Connect to eHSM sensor[0]. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ehsm_sw_sensor_s cn; */
};
typedef union cavm_ehsm_sw_sensor cavm_ehsm_sw_sensor_t;

#define CAVM_EHSM_SW_SENSOR CAVM_EHSM_SW_SENSOR_FUNC()
static inline uint64_t CAVM_EHSM_SW_SENSOR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_EHSM_SW_SENSOR_FUNC(void)
{
    return 0x80b000004020ll;
}

#define typedef_CAVM_EHSM_SW_SENSOR cavm_ehsm_sw_sensor_t
#define bustype_CAVM_EHSM_SW_SENSOR CSR_TYPE_NCB32b
#define basename_CAVM_EHSM_SW_SENSOR "EHSM_SW_SENSOR"
#define device_bar_CAVM_EHSM_SW_SENSOR 0x0 /* PF_BAR0 */
#define busnum_CAVM_EHSM_SW_SENSOR 0
#define arguments_CAVM_EHSM_SW_SENSOR -1,-1,-1,-1

#endif /* __CAVM_CSRS_EHSM_H__ */
