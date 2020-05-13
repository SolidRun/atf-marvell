#ifndef __CAVM_CSRS_ML_H__
#define __CAVM_CSRS_ML_H__
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
 * OcteonTX ML.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration ml_bar_e
 *
 * ML Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_ML_BAR_E_MLX_PF_BAR0(a) (0x828000000000ll + 0x1000000000ll * (a))
#define CAVM_ML_BAR_E_MLX_PF_BAR0_SIZE 0x40000000ull
#define CAVM_ML_BAR_E_MLX_PF_BAR4(a) (0x828100000000ll + 0x1000000000ll * (a))
#define CAVM_ML_BAR_E_MLX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration ml_int_vec_e
 *
 * ML PF MSI-X Vector Enumeration
 * Enumerates the PF MSI-X interrupt vectors.
 */
#define CAVM_ML_INT_VEC_E_CORE_INT_HI (1)
#define CAVM_ML_INT_VEC_E_CORE_INT_LO (0)

/**
 * Register (NCB) ml#_clk_ctl
 *
 * ML Wrapper Clock Control Register
 */
union cavm_mlx_clk_ctl
{
    uint64_t u;
    struct cavm_mlx_clk_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t mlclk_force           : 1;  /**< [  3:  3](R/W) Force conditional ML IP clocks to be always enabled. For diagnostic use only. */
        uint64_t sclk_force            : 1;  /**< [  2:  2](R/W) Force conditional bus clocks to be always enabled. For diagnostic use only. */
        uint64_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_1          : 2;
        uint64_t sclk_force            : 1;  /**< [  2:  2](R/W) Force conditional bus clocks to be always enabled. For diagnostic use only. */
        uint64_t mlclk_force           : 1;  /**< [  3:  3](R/W) Force conditional ML IP clocks to be always enabled. For diagnostic use only. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_clk_ctl_s cn; */
};
typedef union cavm_mlx_clk_ctl cavm_mlx_clk_ctl_t;

static inline uint64_t CAVM_MLX_CLK_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_CLK_CTL(uint64_t a)
{
    if (a==0)
        return 0x828020000000ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_CLK_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_CLK_CTL(a) cavm_mlx_clk_ctl_t
#define bustype_CAVM_MLX_CLK_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_CLK_CTL(a) "MLX_CLK_CTL"
#define device_bar_CAVM_MLX_CLK_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_CLK_CTL(a) (a)
#define arguments_CAVM_MLX_CLK_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_core_int_hi
 *
 * ML PF Interrupt Register
 */
union cavm_mlx_core_int_hi
{
    uint64_t u;
    struct cavm_mlx_core_int_hi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1C/H) Data loaded had poison set. */
#else /* Word 0 - Little Endian */
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1C/H) Data loaded had poison set. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_core_int_hi_s cn; */
};
typedef union cavm_mlx_core_int_hi cavm_mlx_core_int_hi_t;

static inline uint64_t CAVM_MLX_CORE_INT_HI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_CORE_INT_HI(uint64_t a)
{
    if (a==0)
        return 0x828020000060ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_CORE_INT_HI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_CORE_INT_HI(a) cavm_mlx_core_int_hi_t
#define bustype_CAVM_MLX_CORE_INT_HI(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_CORE_INT_HI(a) "MLX_CORE_INT_HI"
#define device_bar_CAVM_MLX_CORE_INT_HI(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_CORE_INT_HI(a) (a)
#define arguments_CAVM_MLX_CORE_INT_HI(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_core_int_hi_ena_w1c
 *
 * ML PF Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_mlx_core_int_hi_ena_w1c
{
    uint64_t u;
    struct cavm_mlx_core_int_hi_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for ML(0)_CORE_INT_HI[INT_HI]. */
#else /* Word 0 - Little Endian */
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for ML(0)_CORE_INT_HI[INT_HI]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_core_int_hi_ena_w1c_s cn; */
};
typedef union cavm_mlx_core_int_hi_ena_w1c cavm_mlx_core_int_hi_ena_w1c_t;

static inline uint64_t CAVM_MLX_CORE_INT_HI_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_CORE_INT_HI_ENA_W1C(uint64_t a)
{
    if (a==0)
        return 0x828020000070ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_CORE_INT_HI_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_CORE_INT_HI_ENA_W1C(a) cavm_mlx_core_int_hi_ena_w1c_t
#define bustype_CAVM_MLX_CORE_INT_HI_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_CORE_INT_HI_ENA_W1C(a) "MLX_CORE_INT_HI_ENA_W1C"
#define device_bar_CAVM_MLX_CORE_INT_HI_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_CORE_INT_HI_ENA_W1C(a) (a)
#define arguments_CAVM_MLX_CORE_INT_HI_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_core_int_hi_ena_w1s
 *
 * ML PF Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_mlx_core_int_hi_ena_w1s
{
    uint64_t u;
    struct cavm_mlx_core_int_hi_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for ML(0)_CORE_INT_HI[INT_HI]. */
#else /* Word 0 - Little Endian */
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for ML(0)_CORE_INT_HI[INT_HI]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_core_int_hi_ena_w1s_s cn; */
};
typedef union cavm_mlx_core_int_hi_ena_w1s cavm_mlx_core_int_hi_ena_w1s_t;

static inline uint64_t CAVM_MLX_CORE_INT_HI_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_CORE_INT_HI_ENA_W1S(uint64_t a)
{
    if (a==0)
        return 0x828020000078ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_CORE_INT_HI_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_CORE_INT_HI_ENA_W1S(a) cavm_mlx_core_int_hi_ena_w1s_t
#define bustype_CAVM_MLX_CORE_INT_HI_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_CORE_INT_HI_ENA_W1S(a) "MLX_CORE_INT_HI_ENA_W1S"
#define device_bar_CAVM_MLX_CORE_INT_HI_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_CORE_INT_HI_ENA_W1S(a) (a)
#define arguments_CAVM_MLX_CORE_INT_HI_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_core_int_hi_w1s
 *
 * ML PF Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_mlx_core_int_hi_w1s
{
    uint64_t u;
    struct cavm_mlx_core_int_hi_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets ML(0)_CORE_INT_HI[INT_HI]. */
#else /* Word 0 - Little Endian */
        uint64_t int_hi                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets ML(0)_CORE_INT_HI[INT_HI]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_core_int_hi_w1s_s cn; */
};
typedef union cavm_mlx_core_int_hi_w1s cavm_mlx_core_int_hi_w1s_t;

static inline uint64_t CAVM_MLX_CORE_INT_HI_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_CORE_INT_HI_W1S(uint64_t a)
{
    if (a==0)
        return 0x828020000068ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_CORE_INT_HI_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_CORE_INT_HI_W1S(a) cavm_mlx_core_int_hi_w1s_t
#define bustype_CAVM_MLX_CORE_INT_HI_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_CORE_INT_HI_W1S(a) "MLX_CORE_INT_HI_W1S"
#define device_bar_CAVM_MLX_CORE_INT_HI_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_CORE_INT_HI_W1S(a) (a)
#define arguments_CAVM_MLX_CORE_INT_HI_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_core_int_lo
 *
 * ML PF Interrupt Register
 */
union cavm_mlx_core_int_lo
{
    uint64_t u;
    struct cavm_mlx_core_int_lo_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1C/H) Low priority interrupt set. */
#else /* Word 0 - Little Endian */
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1C/H) Low priority interrupt set. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_core_int_lo_s cn; */
};
typedef union cavm_mlx_core_int_lo cavm_mlx_core_int_lo_t;

static inline uint64_t CAVM_MLX_CORE_INT_LO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_CORE_INT_LO(uint64_t a)
{
    if (a==0)
        return 0x828020000040ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_CORE_INT_LO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_CORE_INT_LO(a) cavm_mlx_core_int_lo_t
#define bustype_CAVM_MLX_CORE_INT_LO(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_CORE_INT_LO(a) "MLX_CORE_INT_LO"
#define device_bar_CAVM_MLX_CORE_INT_LO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_CORE_INT_LO(a) (a)
#define arguments_CAVM_MLX_CORE_INT_LO(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_core_int_lo_ena_w1c
 *
 * ML PF Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_mlx_core_int_lo_ena_w1c
{
    uint64_t u;
    struct cavm_mlx_core_int_lo_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for ML(0)_CORE_INT_LO[INT_LO]. */
#else /* Word 0 - Little Endian */
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for ML(0)_CORE_INT_LO[INT_LO]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_core_int_lo_ena_w1c_s cn; */
};
typedef union cavm_mlx_core_int_lo_ena_w1c cavm_mlx_core_int_lo_ena_w1c_t;

static inline uint64_t CAVM_MLX_CORE_INT_LO_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_CORE_INT_LO_ENA_W1C(uint64_t a)
{
    if (a==0)
        return 0x828020000050ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_CORE_INT_LO_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_CORE_INT_LO_ENA_W1C(a) cavm_mlx_core_int_lo_ena_w1c_t
#define bustype_CAVM_MLX_CORE_INT_LO_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_CORE_INT_LO_ENA_W1C(a) "MLX_CORE_INT_LO_ENA_W1C"
#define device_bar_CAVM_MLX_CORE_INT_LO_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_CORE_INT_LO_ENA_W1C(a) (a)
#define arguments_CAVM_MLX_CORE_INT_LO_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_core_int_lo_ena_w1s
 *
 * ML PF Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_mlx_core_int_lo_ena_w1s
{
    uint64_t u;
    struct cavm_mlx_core_int_lo_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for ML(0)_CORE_INT_LO[INT_LO]. */
#else /* Word 0 - Little Endian */
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for ML(0)_CORE_INT_LO[INT_LO]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_core_int_lo_ena_w1s_s cn; */
};
typedef union cavm_mlx_core_int_lo_ena_w1s cavm_mlx_core_int_lo_ena_w1s_t;

static inline uint64_t CAVM_MLX_CORE_INT_LO_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_CORE_INT_LO_ENA_W1S(uint64_t a)
{
    if (a==0)
        return 0x828020000058ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_CORE_INT_LO_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_CORE_INT_LO_ENA_W1S(a) cavm_mlx_core_int_lo_ena_w1s_t
#define bustype_CAVM_MLX_CORE_INT_LO_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_CORE_INT_LO_ENA_W1S(a) "MLX_CORE_INT_LO_ENA_W1S"
#define device_bar_CAVM_MLX_CORE_INT_LO_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_CORE_INT_LO_ENA_W1S(a) (a)
#define arguments_CAVM_MLX_CORE_INT_LO_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_core_int_lo_w1s
 *
 * ML PF Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_mlx_core_int_lo_w1s
{
    uint64_t u;
    struct cavm_mlx_core_int_lo_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets ML(0)_CORE_INT_LO[INT_LO]. */
#else /* Word 0 - Little Endian */
        uint64_t int_lo                : 1;  /**< [  0:  0](R/W1S/H) Reads or sets ML(0)_CORE_INT_LO[INT_LO]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_core_int_lo_w1s_s cn; */
};
typedef union cavm_mlx_core_int_lo_w1s cavm_mlx_core_int_lo_w1s_t;

static inline uint64_t CAVM_MLX_CORE_INT_LO_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_CORE_INT_LO_W1S(uint64_t a)
{
    if (a==0)
        return 0x828020000048ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_CORE_INT_LO_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_CORE_INT_LO_W1S(a) cavm_mlx_core_int_lo_w1s_t
#define bustype_CAVM_MLX_CORE_INT_LO_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_CORE_INT_LO_W1S(a) "MLX_CORE_INT_LO_W1S"
#define device_bar_CAVM_MLX_CORE_INT_LO_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_CORE_INT_LO_W1S(a) (a)
#define arguments_CAVM_MLX_CORE_INT_LO_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_eco
 *
 * INTERNAL: ML ECO Register
 */
union cavm_mlx_eco
{
    uint64_t u;
    struct cavm_mlx_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved for ECO usage. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_eco_s cn; */
};
typedef union cavm_mlx_eco cavm_mlx_eco_t;

static inline uint64_t CAVM_MLX_ECO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_ECO(uint64_t a)
{
    if (a==0)
        return 0x8280200000f8ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_ECO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_ECO(a) cavm_mlx_eco_t
#define bustype_CAVM_MLX_ECO(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_ECO(a) "MLX_ECO"
#define device_bar_CAVM_MLX_ECO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_ECO(a) (a)
#define arguments_CAVM_MLX_ECO(a) (a),-1,-1,-1

/**
 * Register (NCB) ml#_ip_alias#
 *
 * ML Wrapper Clock Control Register
 */
union cavm_mlx_ip_aliasx
{
    uint64_t u;
    struct cavm_mlx_ip_aliasx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_ip_aliasx_s cn; */
};
typedef union cavm_mlx_ip_aliasx cavm_mlx_ip_aliasx_t;

static inline uint64_t CAVM_MLX_IP_ALIASX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_IP_ALIASX(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=1))
        return 0x828000000000ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("MLX_IP_ALIASX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_IP_ALIASX(a,b) cavm_mlx_ip_aliasx_t
#define bustype_CAVM_MLX_IP_ALIASX(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLX_IP_ALIASX(a,b) "MLX_IP_ALIASX"
#define device_bar_CAVM_MLX_IP_ALIASX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_IP_ALIASX(a,b) (a)
#define arguments_CAVM_MLX_IP_ALIASX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) ml#_msix_pba#
 *
 * ML MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table; the bit number is indexed by the ML_INT_VEC_E enumeration.
 *
 * This register is reset on ML domain reset.
 */
union cavm_mlx_msix_pbax
{
    uint64_t u;
    struct cavm_mlx_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated ML()_MSIX_VEC()_CTL, enumerated by ML_INT_VEC_E. Bits
                                                                 that have no associated ML_INT_VEC_E are 0. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated ML()_MSIX_VEC()_CTL, enumerated by ML_INT_VEC_E. Bits
                                                                 that have no associated ML_INT_VEC_E are 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_msix_pbax_s cn; */
};
typedef union cavm_mlx_msix_pbax cavm_mlx_msix_pbax_t;

static inline uint64_t CAVM_MLX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_MSIX_PBAX(uint64_t a, uint64_t b)
{
    if ((a==0) && (b==0))
        return 0x8281000f0000ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("MLX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_MSIX_PBAX(a,b) cavm_mlx_msix_pbax_t
#define bustype_CAVM_MLX_MSIX_PBAX(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLX_MSIX_PBAX(a,b) "MLX_MSIX_PBAX"
#define device_bar_CAVM_MLX_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_MLX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_MLX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) ml#_msix_vec#_addr
 *
 * ML MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the ML_INT_VEC_E enumeration.
 *
 * This register is reset on ML domain reset.
 */
union cavm_mlx_msix_vecx_addr
{
    uint64_t u;
    struct cavm_mlx_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's ML()_MSIX_VEC()_ADDR, ML()_MSIX_VEC()_CTL, and corresponding
                                                                 bit of ML()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_ML_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's ML()_MSIX_VEC()_ADDR, ML()_MSIX_VEC()_CTL, and corresponding
                                                                 bit of ML()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_ML_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_msix_vecx_addr_s cn; */
};
typedef union cavm_mlx_msix_vecx_addr cavm_mlx_msix_vecx_addr_t;

static inline uint64_t CAVM_MLX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=1))
        return 0x828100000000ll + 0x1000000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x1);
    __cavm_csr_fatal("MLX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_MSIX_VECX_ADDR(a,b) cavm_mlx_msix_vecx_addr_t
#define bustype_CAVM_MLX_MSIX_VECX_ADDR(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLX_MSIX_VECX_ADDR(a,b) "MLX_MSIX_VECX_ADDR"
#define device_bar_CAVM_MLX_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_MLX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_MLX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) ml#_msix_vec#_ctl
 *
 * ML MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the ML_INT_VEC_E enumeration
 *
 * This register is reset on ML domain reset.
 */
union cavm_mlx_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_mlx_msix_vecx_ctl_s
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
    /* struct cavm_mlx_msix_vecx_ctl_s cn; */
};
typedef union cavm_mlx_msix_vecx_ctl cavm_mlx_msix_vecx_ctl_t;

static inline uint64_t CAVM_MLX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=1))
        return 0x828100000008ll + 0x1000000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x1);
    __cavm_csr_fatal("MLX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_MSIX_VECX_CTL(a,b) cavm_mlx_msix_vecx_ctl_t
#define bustype_CAVM_MLX_MSIX_VECX_CTL(a,b) CSR_TYPE_NCB
#define basename_CAVM_MLX_MSIX_VECX_CTL(a,b) "MLX_MSIX_VECX_CTL"
#define device_bar_CAVM_MLX_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_MLX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_MLX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (NCB) ml#_scratch
 *
 * INTERNAL: ML Scratch Register
 */
union cavm_mlx_scratch
{
    uint64_t u;
    struct cavm_mlx_scratch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t scratch               : 64; /**< [ 63:  0](R/W) Scratch register. */
#else /* Word 0 - Little Endian */
        uint64_t scratch               : 64; /**< [ 63:  0](R/W) Scratch register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mlx_scratch_s cn; */
};
typedef union cavm_mlx_scratch cavm_mlx_scratch_t;

static inline uint64_t CAVM_MLX_SCRATCH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MLX_SCRATCH(uint64_t a)
{
    if (a==0)
        return 0x8280200000f0ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("MLX_SCRATCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MLX_SCRATCH(a) cavm_mlx_scratch_t
#define bustype_CAVM_MLX_SCRATCH(a) CSR_TYPE_NCB
#define basename_CAVM_MLX_SCRATCH(a) "MLX_SCRATCH"
#define device_bar_CAVM_MLX_SCRATCH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MLX_SCRATCH(a) (a)
#define arguments_CAVM_MLX_SCRATCH(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_ML_H__ */
