#ifndef __CAVM_CSRS_MSW_H__
#define __CAVM_CSRS_MSW_H__
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
 * MSW.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration msw_bar_e
 *
 * MSW Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_MSW_BAR_E_MSWX_PF_BAR0(a) (0xc60000000000ll + 0x1000000ll * (a))
#define CAVM_MSW_BAR_E_MSWX_PF_BAR0_SIZE 0x1000000ull

/**
 * Enumeration msw_chn_e
 *
 * MSW Channel Enumeration
 * Enumerates the different mesh channels in MSW.
 */
#define CAVM_MSW_CHN_E_DAT (0)
#define CAVM_MSW_CHN_E_REQ (1)
#define CAVM_MSW_CHN_E_RSP0 (2)
#define CAVM_MSW_CHN_E_RSP1 (4)
#define CAVM_MSW_CHN_E_SNP (3)

/**
 * Register (RSL) msw#_msh#_lcrdv_strv_pfc_dir#
 *
 * MSW Performance Counter Registers
 * Performance counters for number of cycles starved for credits out of this mesh port.
 * _ DIR(0) = Straight Travel
 * _ DIR(1) = Right Turn
 * _ DIR(2) = Left Turn
 * _ DIR(3) = Offboard to TAD0
 * _ DIR(4) = Offboard to TAD1
 * _ DIR(5) = Offboard to AP
 */
union cavm_mswx_mshx_lcrdv_strv_pfc_dirx
{
    uint64_t u;
    struct cavm_mswx_mshx_lcrdv_strv_pfc_dirx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Current counter value. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Current counter value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mswx_mshx_lcrdv_strv_pfc_dirx_s cn; */
};
typedef union cavm_mswx_mshx_lcrdv_strv_pfc_dirx cavm_mswx_mshx_lcrdv_strv_pfc_dirx_t;

static inline uint64_t CAVM_MSWX_MSHX_LCRDV_STRV_PFC_DIRX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MSWX_MSHX_LCRDV_STRV_PFC_DIRX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=23) && (b<=3) && (c<=5)))
        return 0xc60000010080ll + 0x1000000ll * ((a) & 0x1f) + 0x4000ll * ((b) & 0x3) + 8ll * ((c) & 0x7);
    __cavm_csr_fatal("MSWX_MSHX_LCRDV_STRV_PFC_DIRX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_MSWX_MSHX_LCRDV_STRV_PFC_DIRX(a,b,c) cavm_mswx_mshx_lcrdv_strv_pfc_dirx_t
#define bustype_CAVM_MSWX_MSHX_LCRDV_STRV_PFC_DIRX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_MSWX_MSHX_LCRDV_STRV_PFC_DIRX(a,b,c) "MSWX_MSHX_LCRDV_STRV_PFC_DIRX"
#define device_bar_CAVM_MSWX_MSHX_LCRDV_STRV_PFC_DIRX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MSWX_MSHX_LCRDV_STRV_PFC_DIRX(a,b,c) (a)
#define arguments_CAVM_MSWX_MSHX_LCRDV_STRV_PFC_DIRX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) msw#_msh#_pfc#
 *
 * MSW Performance Counter Registers
 */
union cavm_mswx_mshx_pfcx
{
    uint64_t u;
    struct cavm_mswx_mshx_pfcx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Current counter value. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Current counter value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mswx_mshx_pfcx_s cn; */
};
typedef union cavm_mswx_mshx_pfcx cavm_mswx_mshx_pfcx_t;

static inline uint64_t CAVM_MSWX_MSHX_PFCX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MSWX_MSHX_PFCX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=23) && (b<=3) && (c<=4)))
        return 0xc60000010000ll + 0x1000000ll * ((a) & 0x1f) + 0x4000ll * ((b) & 0x3) + 8ll * ((c) & 0x7);
    __cavm_csr_fatal("MSWX_MSHX_PFCX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_MSWX_MSHX_PFCX(a,b,c) cavm_mswx_mshx_pfcx_t
#define bustype_CAVM_MSWX_MSHX_PFCX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_MSWX_MSHX_PFCX(a,b,c) "MSWX_MSHX_PFCX"
#define device_bar_CAVM_MSWX_MSHX_PFCX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MSWX_MSHX_PFCX(a,b,c) (a)
#define arguments_CAVM_MSWX_MSHX_PFCX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) msw#_msh#_prf
 *
 * MSW Performance Counter Control Registers
 * This register controls measurement of the number of active cycles on each channel
 * out from MSW in one cardinal direction. Note a full cache line on the DAT channel
 * is counted as four active cycles.
 * _ MSH(0) = MSW to Mesh North.
 * _ MSH(1) = MSW to Mesh East.
 * _ MSH(2) = MSW to Mesh South.
 * _ MSH(3) = MSW to Mesh West.
 */
union cavm_mswx_mshx_prf
{
    uint64_t u;
    struct cavm_mswx_mshx_prf_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_14_63        : 50;
        uint64_t lcrdv_strv_en         : 1;  /**< [ 13: 13](R/W) Enable counting the number cycles starved for link credits for each mesh port in
                                                                 MSW_MTX()_LCRDV_STRV_PFC_DIR(). */
        uint64_t lcrdv_strv_chn_sel    : 3;  /**< [ 12: 10](R/W) Selects which mesh channel to use for the MSW_MTX()_LCRDV_STRV_PFC_DIR()
                                                                 counters. Enumerated by MSW_CHN_E. */
        uint64_t rx_rsp1_en            : 1;  /**< [  9:  9](R/W) Enable counting the number of active cycles into MSW on the RSP1 channel in MSW_MSH()_RX_PFC(4). */
        uint64_t rx_snp_en             : 1;  /**< [  8:  8](R/W) Enable counting the number of active cycles into MSW on the SNP channel in MSW_MSH()_RX_PFC(3). */
        uint64_t rx_rsp0_en            : 1;  /**< [  7:  7](R/W) Enable counting the number of active cycles into MSW on the RSP0 channel in MSW_MSH()_RX_PFC(2). */
        uint64_t rx_dat_en             : 1;  /**< [  6:  6](R/W) Enable counting the number of active cycles into MSW on the DAT channel in MSW_MSH()_RX_PFC(1). */
        uint64_t rx_req_en             : 1;  /**< [  5:  5](R/W) Enable counting the number of active cycles into MSW on the REQ channel in MSW_MSH()_RX_PFC(0). */
        uint64_t rsp1_en               : 1;  /**< [  4:  4](R/W) Enable counting the number of active cycles out of MSW on the RSP1 channel in MSW_MSH()_PFC(4). */
        uint64_t snp_en                : 1;  /**< [  3:  3](R/W) Enable counting the number of active cycles out of MSW on the SNP channel in MSW_MSH()_PFC(3). */
        uint64_t rsp_en                : 1;  /**< [  2:  2](R/W) Enable counting the number of active cycles out of MSW on the RSP0 channel in MSW_MSH()_PFC(2). */
        uint64_t dat_en                : 1;  /**< [  1:  1](R/W) Enable counting the number of active cycles out of MSW on the DAT channel in MSW_MSH()_PFC(1). */
        uint64_t req_en                : 1;  /**< [  0:  0](R/W) Enable counting the number of active cycles out of MSW on the REQ channel in MSW_MSH()_PFC(0). */
#else /* Word 0 - Little Endian */
        uint64_t req_en                : 1;  /**< [  0:  0](R/W) Enable counting the number of active cycles out of MSW on the REQ channel in MSW_MSH()_PFC(0). */
        uint64_t dat_en                : 1;  /**< [  1:  1](R/W) Enable counting the number of active cycles out of MSW on the DAT channel in MSW_MSH()_PFC(1). */
        uint64_t rsp_en                : 1;  /**< [  2:  2](R/W) Enable counting the number of active cycles out of MSW on the RSP0 channel in MSW_MSH()_PFC(2). */
        uint64_t snp_en                : 1;  /**< [  3:  3](R/W) Enable counting the number of active cycles out of MSW on the SNP channel in MSW_MSH()_PFC(3). */
        uint64_t rsp1_en               : 1;  /**< [  4:  4](R/W) Enable counting the number of active cycles out of MSW on the RSP1 channel in MSW_MSH()_PFC(4). */
        uint64_t rx_req_en             : 1;  /**< [  5:  5](R/W) Enable counting the number of active cycles into MSW on the REQ channel in MSW_MSH()_RX_PFC(0). */
        uint64_t rx_dat_en             : 1;  /**< [  6:  6](R/W) Enable counting the number of active cycles into MSW on the DAT channel in MSW_MSH()_RX_PFC(1). */
        uint64_t rx_rsp0_en            : 1;  /**< [  7:  7](R/W) Enable counting the number of active cycles into MSW on the RSP0 channel in MSW_MSH()_RX_PFC(2). */
        uint64_t rx_snp_en             : 1;  /**< [  8:  8](R/W) Enable counting the number of active cycles into MSW on the SNP channel in MSW_MSH()_RX_PFC(3). */
        uint64_t rx_rsp1_en            : 1;  /**< [  9:  9](R/W) Enable counting the number of active cycles into MSW on the RSP1 channel in MSW_MSH()_RX_PFC(4). */
        uint64_t lcrdv_strv_chn_sel    : 3;  /**< [ 12: 10](R/W) Selects which mesh channel to use for the MSW_MTX()_LCRDV_STRV_PFC_DIR()
                                                                 counters. Enumerated by MSW_CHN_E. */
        uint64_t lcrdv_strv_en         : 1;  /**< [ 13: 13](R/W) Enable counting the number cycles starved for link credits for each mesh port in
                                                                 MSW_MTX()_LCRDV_STRV_PFC_DIR(). */
        uint64_t reserved_14_63        : 50;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mswx_mshx_prf_s cn; */
};
typedef union cavm_mswx_mshx_prf cavm_mswx_mshx_prf_t;

static inline uint64_t CAVM_MSWX_MSHX_PRF(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MSWX_MSHX_PRF(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=23) && (b<=3)))
        return 0xc60000000058ll + 0x1000000ll * ((a) & 0x1f) + 0x4000ll * ((b) & 0x3);
    __cavm_csr_fatal("MSWX_MSHX_PRF", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MSWX_MSHX_PRF(a,b) cavm_mswx_mshx_prf_t
#define bustype_CAVM_MSWX_MSHX_PRF(a,b) CSR_TYPE_RSL
#define basename_CAVM_MSWX_MSHX_PRF(a,b) "MSWX_MSHX_PRF"
#define device_bar_CAVM_MSWX_MSHX_PRF(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MSWX_MSHX_PRF(a,b) (a)
#define arguments_CAVM_MSWX_MSHX_PRF(a,b) (a),(b),-1,-1

/**
 * Register (RSL) msw#_msh#_rx_pfc#
 *
 * MSW Performance Counter Registers
 */
union cavm_mswx_mshx_rx_pfcx
{
    uint64_t u;
    struct cavm_mswx_mshx_rx_pfcx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Current counter value. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Current counter value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mswx_mshx_rx_pfcx_s cn; */
};
typedef union cavm_mswx_mshx_rx_pfcx cavm_mswx_mshx_rx_pfcx_t;

static inline uint64_t CAVM_MSWX_MSHX_RX_PFCX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MSWX_MSHX_RX_PFCX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=23) && (b<=3) && (c<=4)))
        return 0xc60000010040ll + 0x1000000ll * ((a) & 0x1f) + 0x4000ll * ((b) & 0x3) + 8ll * ((c) & 0x7);
    __cavm_csr_fatal("MSWX_MSHX_RX_PFCX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_MSWX_MSHX_RX_PFCX(a,b,c) cavm_mswx_mshx_rx_pfcx_t
#define bustype_CAVM_MSWX_MSHX_RX_PFCX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_MSWX_MSHX_RX_PFCX(a,b,c) "MSWX_MSHX_RX_PFCX"
#define device_bar_CAVM_MSWX_MSHX_RX_PFCX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MSWX_MSHX_RX_PFCX(a,b,c) (a)
#define arguments_CAVM_MSWX_MSHX_RX_PFCX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) msw#_mtx#_chn#_arb
 *
 * MSW Arbiter Control and Weight Registers
 * This register provides a control mechanism for the arbiter used in the mtx channels.
 * Setting ARB_STATIC to 1 forces the arbiter to use the static weights set in this register.
 * Setting ARB_STATIC to 0 forces the arbiter to accept weights from the dynamic mechanism
 * _ MTX(0) = MTX North
 * _ MTX(1) = MTX East
 * _ MTX(2) = MTX South
 * _ MTX(3) = MTX West
 */
union cavm_mswx_mtxx_chnx_arb
{
    uint64_t u;
    struct cavm_mswx_mtxx_chnx_arb_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_46_63        : 18;
        uint64_t arb_shift             : 5;  /**< [ 45: 41](SR/W) Sets the amount to shift by for average distance calculations.
                                                                 For performance, recommended values are 6,7, or 8 */
        uint64_t weight_apa            : 8;  /**< [ 40: 33](SR/W) Static weight for APA MTX source */
        uint64_t weight_tad            : 8;  /**< [ 32: 25](SR/W) Static weight for TAD MTX source */
        uint64_t weight_l              : 8;  /**< [ 24: 17](SR/W) Static weight for left turn MTX source */
        uint64_t weight_r              : 8;  /**< [ 16:  9](SR/W) Static weight for the right turn MTX source */
        uint64_t weight_s              : 8;  /**< [  8:  1](SR/W) Static weight for the straight MTX source */
        uint64_t arb_static            : 1;  /**< [  0:  0](SR/W) Enable using static weights for the MTX channel arbiter */
#else /* Word 0 - Little Endian */
        uint64_t arb_static            : 1;  /**< [  0:  0](SR/W) Enable using static weights for the MTX channel arbiter */
        uint64_t weight_s              : 8;  /**< [  8:  1](SR/W) Static weight for the straight MTX source */
        uint64_t weight_r              : 8;  /**< [ 16:  9](SR/W) Static weight for the right turn MTX source */
        uint64_t weight_l              : 8;  /**< [ 24: 17](SR/W) Static weight for left turn MTX source */
        uint64_t weight_tad            : 8;  /**< [ 32: 25](SR/W) Static weight for TAD MTX source */
        uint64_t weight_apa            : 8;  /**< [ 40: 33](SR/W) Static weight for APA MTX source */
        uint64_t arb_shift             : 5;  /**< [ 45: 41](SR/W) Sets the amount to shift by for average distance calculations.
                                                                 For performance, recommended values are 6,7, or 8 */
        uint64_t reserved_46_63        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mswx_mtxx_chnx_arb_s cn; */
};
typedef union cavm_mswx_mtxx_chnx_arb cavm_mswx_mtxx_chnx_arb_t;

static inline uint64_t CAVM_MSWX_MTXX_CHNX_ARB(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MSWX_MTXX_CHNX_ARB(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=23) && (b<=3) && (c<=4)))
        return 0xc600000000c0ll + 0x1000000ll * ((a) & 0x1f) + 0x4000ll * ((b) & 0x3) + 8ll * ((c) & 0x7);
    __cavm_csr_fatal("MSWX_MTXX_CHNX_ARB", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_MSWX_MTXX_CHNX_ARB(a,b,c) cavm_mswx_mtxx_chnx_arb_t
#define bustype_CAVM_MSWX_MTXX_CHNX_ARB(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_MSWX_MTXX_CHNX_ARB(a,b,c) "MSWX_MTXX_CHNX_ARB"
#define device_bar_CAVM_MSWX_MTXX_CHNX_ARB(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MSWX_MTXX_CHNX_ARB(a,b,c) (a)
#define arguments_CAVM_MSWX_MTXX_CHNX_ARB(a,b,c) (a),(b),(c),-1

#endif /* __CAVM_CSRS_MSW_H__ */
