#ifndef __CAVM_CSRS_USBH_H__
#define __CAVM_CSRS_USBH_H__
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
 * OcteonTX USBH.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration uctl_dma_read_cmd_e
 *
 * USB UCTL DMA Read Command Enumeration
 * Enumerate NCB inbound command selections for DMA read operations.
 */
#define CAVM_UCTL_DMA_READ_CMD_E_LDI (0)
#define CAVM_UCTL_DMA_READ_CMD_E_LDT (1)
#define CAVM_UCTL_DMA_READ_CMD_E_LDY (2)

/**
 * Enumeration uctl_dma_write_cmd_e
 *
 * USB UCTL DMA Write Command Enumeration
 * Enumerate NCB inbound command selections for DMA write operations.
 */
#define CAVM_UCTL_DMA_WRITE_CMD_E_RSTP (1)
#define CAVM_UCTL_DMA_WRITE_CMD_E_STP (0)

/**
 * Enumeration uctl_endian_mode_e
 *
 * USB UCTL Endian-Mode Enumeration
 * Enumerate endian mode selections.
 */
#define CAVM_UCTL_ENDIAN_MODE_E_BIG (1)
#define CAVM_UCTL_ENDIAN_MODE_E_LITTLE (0)
#define CAVM_UCTL_ENDIAN_MODE_E_RSVD2 (2)
#define CAVM_UCTL_ENDIAN_MODE_E_RSVD3 (3)

/**
 * Enumeration uctl_xm_bad_dma_type_e
 *
 * USB UCTL XM Bad DMA Type Enumeration
 * Enumerate type of DMA error seen.
 */
#define CAVM_UCTL_XM_BAD_DMA_TYPE_E_ADDR_OOB (1)
#define CAVM_UCTL_XM_BAD_DMA_TYPE_E_LEN_GT_16 (2)
#define CAVM_UCTL_XM_BAD_DMA_TYPE_E_MULTIBEAT_BYTE (3)
#define CAVM_UCTL_XM_BAD_DMA_TYPE_E_MULTIBEAT_HALFWORD (4)
#define CAVM_UCTL_XM_BAD_DMA_TYPE_E_MULTIBEAT_QWORD (6)
#define CAVM_UCTL_XM_BAD_DMA_TYPE_E_MULTIBEAT_WORD (5)
#define CAVM_UCTL_XM_BAD_DMA_TYPE_E_NONE (0)

/**
 * Enumeration usbh_bar_e
 *
 * USB Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_USBH_BAR_E_USBHX_PF_BAR0(a) (0x868000000000ll + 0x1000000000ll * (a))
#define CAVM_USBH_BAR_E_USBHX_PF_BAR0_SIZE 0x200000ull
#define CAVM_USBH_BAR_E_USBHX_PF_BAR4(a) (0x868000200000ll + 0x1000000000ll * (a))
#define CAVM_USBH_BAR_E_USBHX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration usbh_int_vec_e
 *
 * USB MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_USBH_INT_VEC_E_UAHC_IMAN_IP (0)
#define CAVM_USBH_INT_VEC_E_UAHC_USBSTS_HSE (2)
#define CAVM_USBH_INT_VEC_E_UAHC_USBSTS_HSE_CLEAR (3)
#define CAVM_USBH_INT_VEC_E_UCTL_INTSTAT (1)
#define CAVM_USBH_INT_VEC_E_UCTL_RAS (4)

/**
 * Enumeration usbh_uahc_dgcmd_cmdtype_e
 *
 * USB UAHC Device Generic Command Enumeration
 * Commands for USBH()_UAHC_DGCMD[CMDTYPE].
 * Any command encodings that are not present are considered Reserved.
 */
#define CAVM_USBH_UAHC_DGCMD_CMDTYPE_E_ALL_FIFO_FLUSH (0xa)
#define CAVM_USBH_UAHC_DGCMD_CMDTYPE_E_RUN_SOC_BUS_LOOPBACK_TEST (0x10)
#define CAVM_USBH_UAHC_DGCMD_CMDTYPE_E_SELECTED_FIFO_FLUSH (9)
#define CAVM_USBH_UAHC_DGCMD_CMDTYPE_E_SET_ENDPOINT_NRDY (0xc)
#define CAVM_USBH_UAHC_DGCMD_CMDTYPE_E_SET_PERIODIC_PARAMETERS (2)
#define CAVM_USBH_UAHC_DGCMD_CMDTYPE_E_SET_SCRATCHPAD_BUFFER_ARRAY_ADDR_H (5)
#define CAVM_USBH_UAHC_DGCMD_CMDTYPE_E_SET_SCRATCHPAD_BUFFER_ARRAY_ADDR_L (4)
#define CAVM_USBH_UAHC_DGCMD_CMDTYPE_E_TRANSMIT_DEVICE_NOTIFICATION (7)

/**
 * Register (NCB) usbh#_const
 *
 * USB Constants Register
 */
union cavm_usbhx_const
{
    uint64_t u;
    struct cavm_usbhx_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_const_s cn; */
};
typedef union cavm_usbhx_const cavm_usbhx_const_t;

static inline uint64_t CAVM_USBHX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_CONST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000100078ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100078ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_CONST(a) cavm_usbhx_const_t
#define bustype_CAVM_USBHX_CONST(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_CONST(a) "USBHX_CONST"
#define device_bar_CAVM_USBHX_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_CONST(a) (a)
#define arguments_CAVM_USBHX_CONST(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_msix_pba#
 *
 * USB MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the USBH_INT_VEC_E
 * enumeration.
 */
union cavm_usbhx_msix_pbax
{
    uint64_t u;
    struct cavm_usbhx_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated USBH()_MSIX_VEC()_CTL, enumerated by
                                                                 USBH_INT_VEC_E.
                                                                 Bits that have no associated USBH_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated USBH()_MSIX_VEC()_CTL, enumerated by
                                                                 USBH_INT_VEC_E.
                                                                 Bits that have no associated USBH_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_msix_pbax_s cn; */
};
typedef union cavm_usbhx_msix_pbax cavm_usbhx_msix_pbax_t;

static inline uint64_t CAVM_USBHX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_MSIX_PBAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b==0)))
        return 0x8680002f0000ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b==0)))
        return 0x8680002f0000ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("USBHX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_MSIX_PBAX(a,b) cavm_usbhx_msix_pbax_t
#define bustype_CAVM_USBHX_MSIX_PBAX(a,b) CSR_TYPE_NCB
#define basename_CAVM_USBHX_MSIX_PBAX(a,b) "USBHX_MSIX_PBAX"
#define device_bar_CAVM_USBHX_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_USBHX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_USBHX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) usbh#_msix_vec#_addr
 *
 * USB MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the USBH_INT_VEC_E enumeration.
 */
union cavm_usbhx_msix_vecx_addr
{
    uint64_t u;
    struct cavm_usbhx_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) Address to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's USBH()_MSIX_VEC()_ADDR, USBH()_MSIX_VEC()_CTL, and
                                                                 corresponding
                                                                 bit of USBH()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_USBH()_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
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

                                                                 1 = This vector's USBH()_MSIX_VEC()_ADDR, USBH()_MSIX_VEC()_CTL, and
                                                                 corresponding
                                                                 bit of USBH()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_USBH()_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set.

                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) Address to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_msix_vecx_addr_s cn; */
};
typedef union cavm_usbhx_msix_vecx_addr cavm_usbhx_msix_vecx_addr_t;

static inline uint64_t CAVM_USBHX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b<=4)))
        return 0x868000200000ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b<=4)))
        return 0x868000200000ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("USBHX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_MSIX_VECX_ADDR(a,b) cavm_usbhx_msix_vecx_addr_t
#define bustype_CAVM_USBHX_MSIX_VECX_ADDR(a,b) CSR_TYPE_NCB
#define basename_CAVM_USBHX_MSIX_VECX_ADDR(a,b) "USBHX_MSIX_VECX_ADDR"
#define device_bar_CAVM_USBHX_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_USBHX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_USBHX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) usbh#_msix_vec#_ctl
 *
 * USB MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the USBH_INT_VEC_E enumeration.
 */
union cavm_usbhx_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_usbhx_msix_vecx_ctl_s
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
    /* struct cavm_usbhx_msix_vecx_ctl_s cn; */
};
typedef union cavm_usbhx_msix_vecx_ctl cavm_usbhx_msix_vecx_ctl_t;

static inline uint64_t CAVM_USBHX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b<=4)))
        return 0x868000200008ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b<=4)))
        return 0x868000200008ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x7);
    __cavm_csr_fatal("USBHX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_MSIX_VECX_CTL(a,b) cavm_usbhx_msix_vecx_ctl_t
#define bustype_CAVM_USBHX_MSIX_VECX_CTL(a,b) CSR_TYPE_NCB
#define basename_CAVM_USBHX_MSIX_VECX_CTL(a,b) "USBHX_MSIX_VECX_CTL"
#define device_bar_CAVM_USBHX_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_USBHX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_USBHX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) usbh#_uahc_async
 *
 * USBH UAHC Async Register
 * Global Number of Async Outstanding DMA Register
 */
union cavm_usbhx_uahc_async
{
    uint32_t u;
    struct cavm_usbhx_uahc_async_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ostdrx_async          : 8;  /**< [ 31: 24](R/W) Number of outstanding async RX DMA */
        uint32_t ostdtx_async_active   : 8;  /**< [ 23: 16](R/W) Number of outstanding async TX DMA for active FIFO/BI on USB */
        uint32_t ostdtx_async_inactive : 8;  /**< [ 15:  8](R/W) Number of outstanding async TX DMA for inactive FIFO/BI on USB */
        uint32_t ostdtx_async          : 8;  /**< [  7:  0](R/W) Number of outstanding async TX DMA */
#else /* Word 0 - Little Endian */
        uint32_t ostdtx_async          : 8;  /**< [  7:  0](R/W) Number of outstanding async TX DMA */
        uint32_t ostdtx_async_inactive : 8;  /**< [ 15:  8](R/W) Number of outstanding async TX DMA for inactive FIFO/BI on USB */
        uint32_t ostdtx_async_active   : 8;  /**< [ 23: 16](R/W) Number of outstanding async TX DMA for active FIFO/BI on USB */
        uint32_t ostdrx_async          : 8;  /**< [ 31: 24](R/W) Number of outstanding async RX DMA */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_async_s cn; */
};
typedef union cavm_usbhx_uahc_async cavm_usbhx_uahc_async_t;

static inline uint64_t CAVM_USBHX_UAHC_ASYNC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_ASYNC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c628ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c628ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_ASYNC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_ASYNC(a) cavm_usbhx_uahc_async_t
#define bustype_CAVM_USBHX_UAHC_ASYNC(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_ASYNC(a) "USBHX_UAHC_ASYNC"
#define device_bar_CAVM_USBHX_UAHC_ASYNC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_ASYNC(a) (a)
#define arguments_CAVM_USBHX_UAHC_ASYNC(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bbistctrl
 *
 * USBH UAHC Bbistctrl Register
 * BIST Control Register
 * Used only in BIST MODE
 */
union cavm_usbhx_uahc_bbistctrl
{
    uint32_t u;
    struct cavm_usbhx_uahc_bbistctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t start_bist_test       : 1;  /**< [ 31: 31](R/W) 1'b0 : Stop Test.
                                                                 1'b1 : Start Test.
                                                                 This bit is cleared when the test is completed. */
        uint32_t bist_test_type        : 1;  /**< [ 30: 30](R/W) - 1'b0 : BIST Transfer loopback test.
                                                                 - 1'b1 : BIST Register/RAM test. */
        uint32_t fail                  : 1;  /**< [ 29: 29](R/W) Fail */
        uint32_t reserved_27_28        : 2;
        uint32_t bist_pattern          : 3;  /**< [ 26: 24](R/W) - 3'b000: Use same pattern
                                                                 - 3'b001: Alternate Invert (If start will AA, then it will perform AA/55 BIST pattern)
                                                                 - 3'b010: Increment Pattern
                                                                 - 3'b011: LSFR
                                                                 - 3'b100: Shift right (Walking 1 and Walking 0 testing)
                                                                 - others: Reserved */
        uint32_t bist_iteration_cnt    : 24; /**< [ 23:  0](R/W) 0 = Continuous till stop/fail.
                                                                 _ Else = Iteration till count x stop/fail. */
#else /* Word 0 - Little Endian */
        uint32_t bist_iteration_cnt    : 24; /**< [ 23:  0](R/W) 0 = Continuous till stop/fail.
                                                                 _ Else = Iteration till count x stop/fail. */
        uint32_t bist_pattern          : 3;  /**< [ 26: 24](R/W) - 3'b000: Use same pattern
                                                                 - 3'b001: Alternate Invert (If start will AA, then it will perform AA/55 BIST pattern)
                                                                 - 3'b010: Increment Pattern
                                                                 - 3'b011: LSFR
                                                                 - 3'b100: Shift right (Walking 1 and Walking 0 testing)
                                                                 - others: Reserved */
        uint32_t reserved_27_28        : 2;
        uint32_t fail                  : 1;  /**< [ 29: 29](R/W) Fail */
        uint32_t bist_test_type        : 1;  /**< [ 30: 30](R/W) - 1'b0 : BIST Transfer loopback test.
                                                                 - 1'b1 : BIST Register/RAM test. */
        uint32_t start_bist_test       : 1;  /**< [ 31: 31](R/W) 1'b0 : Stop Test.
                                                                 1'b1 : Start Test.
                                                                 This bit is cleared when the test is completed. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_bbistctrl_s cn; */
};
typedef union cavm_usbhx_uahc_bbistctrl cavm_usbhx_uahc_bbistctrl_t;

static inline uint64_t CAVM_USBHX_UAHC_BBISTCTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BBISTCTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d90cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d90cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BBISTCTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BBISTCTRL(a) cavm_usbhx_uahc_bbistctrl_t
#define bustype_CAVM_USBHX_UAHC_BBISTCTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BBISTCTRL(a) "USBHX_UAHC_BBISTCTRL"
#define device_bar_CAVM_USBHX_UAHC_BBISTCTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BBISTCTRL(a) (a)
#define arguments_CAVM_USBHX_UAHC_BBISTCTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bbistdatapatseed
 *
 * USBH UAHC Bbistdatapatseed Register
 * BIST Data Pattern Seed Register
 *  - Used only in BIST MODE
 */
union cavm_usbhx_uahc_bbistdatapatseed
{
    uint32_t u;
    struct cavm_usbhx_uahc_bbistdatapatseed_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bist_pattern_seed     : 32; /**< [ 31:  0](R/W) Data is repeated or inverted or incremented or used as seed for LSFR */
#else /* Word 0 - Little Endian */
        uint32_t bist_pattern_seed     : 32; /**< [ 31:  0](R/W) Data is repeated or inverted or incremented or used as seed for LSFR */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_bbistdatapatseed_s cn; */
};
typedef union cavm_usbhx_uahc_bbistdatapatseed cavm_usbhx_uahc_bbistdatapatseed_t;

static inline uint64_t CAVM_USBHX_UAHC_BBISTDATAPATSEED(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BBISTDATAPATSEED(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d908ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d908ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BBISTDATAPATSEED", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BBISTDATAPATSEED(a) cavm_usbhx_uahc_bbistdatapatseed_t
#define bustype_CAVM_USBHX_UAHC_BBISTDATAPATSEED(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BBISTDATAPATSEED(a) "USBHX_UAHC_BBISTDATAPATSEED"
#define device_bar_CAVM_USBHX_UAHC_BBISTDATAPATSEED(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BBISTDATAPATSEED(a) (a)
#define arguments_CAVM_USBHX_UAHC_BBISTDATAPATSEED(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bbistexpdatasts0
 *
 * USBH UAHC Bbistexpdatasts0 Register
 * Note = BIST Expected Data Status indicates the expected data when BIST fails which
 * is contained in 4 DWORD distributed over four 32 bit register
 * BBISTEXPDATASTS0,BBISTEXPDATASTS1,BBISTEXPDATASTS2,BBISTEXPDATASTS3
 * Only Expected Data [DWC_USB31_MDWIDTH-1:0] is valid, other bits are don't care if any.
 */
union cavm_usbhx_uahc_bbistexpdatasts0
{
    uint32_t u;
    struct cavm_usbhx_uahc_bbistexpdatasts0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t exp_data              : 32; /**< [ 31:  0](RO/H) Expected Data-0. */
#else /* Word 0 - Little Endian */
        uint32_t exp_data              : 32; /**< [ 31:  0](RO/H) Expected Data-0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_bbistexpdatasts0_s cn; */
};
typedef union cavm_usbhx_uahc_bbistexpdatasts0 cavm_usbhx_uahc_bbistexpdatasts0_t;

static inline uint64_t CAVM_USBHX_UAHC_BBISTEXPDATASTS0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BBISTEXPDATASTS0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d920ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d920ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BBISTEXPDATASTS0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BBISTEXPDATASTS0(a) cavm_usbhx_uahc_bbistexpdatasts0_t
#define bustype_CAVM_USBHX_UAHC_BBISTEXPDATASTS0(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BBISTEXPDATASTS0(a) "USBHX_UAHC_BBISTEXPDATASTS0"
#define device_bar_CAVM_USBHX_UAHC_BBISTEXPDATASTS0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BBISTEXPDATASTS0(a) (a)
#define arguments_CAVM_USBHX_UAHC_BBISTEXPDATASTS0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bbistexpdatasts1
 *
 * USBH UAHC Bbistexpdatasts1 Register
 * Note : BIST Expected Data Status indicates the expected data when BIST fails which
 * is contained in 4 DWORD distributed over four 32 bit register
 * BBISTEXPDATASTS0,BBISTEXPDATASTS1,BBISTEXPDATASTS2,BBISTEXPDATASTS3
 *
 *  - Only Expected Data [DWC_USB31_MDWIDTH-1:0] is valid, other bits are don't care if any.
 */
union cavm_usbhx_uahc_bbistexpdatasts1
{
    uint32_t u;
    struct cavm_usbhx_uahc_bbistexpdatasts1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t exp_data              : 32; /**< [ 31:  0](RO/H) Expected Data-1. */
#else /* Word 0 - Little Endian */
        uint32_t exp_data              : 32; /**< [ 31:  0](RO/H) Expected Data-1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_bbistexpdatasts1_s cn; */
};
typedef union cavm_usbhx_uahc_bbistexpdatasts1 cavm_usbhx_uahc_bbistexpdatasts1_t;

static inline uint64_t CAVM_USBHX_UAHC_BBISTEXPDATASTS1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BBISTEXPDATASTS1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d924ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d924ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BBISTEXPDATASTS1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BBISTEXPDATASTS1(a) cavm_usbhx_uahc_bbistexpdatasts1_t
#define bustype_CAVM_USBHX_UAHC_BBISTEXPDATASTS1(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BBISTEXPDATASTS1(a) "USBHX_UAHC_BBISTEXPDATASTS1"
#define device_bar_CAVM_USBHX_UAHC_BBISTEXPDATASTS1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BBISTEXPDATASTS1(a) (a)
#define arguments_CAVM_USBHX_UAHC_BBISTEXPDATASTS1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bbistexpdatasts2
 *
 * USBH UAHC Bbistexpdatasts2 Register
 * Note : BIST Expected Data Status indicates the expected data when BIST fails which
 * is contained in 4 DWORD distributed over four 32 bit register
 * BBISTEXPDATASTS0,BBISTEXPDATASTS1,BBISTEXPDATASTS2,BBISTEXPDATASTS3
 *
 *  - Only Expected Data [DWC_USB31_MDWIDTH-1:0] is valid, other bits are don't care if any.
 */
union cavm_usbhx_uahc_bbistexpdatasts2
{
    uint32_t u;
    struct cavm_usbhx_uahc_bbistexpdatasts2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t exp_data              : 32; /**< [ 31:  0](RO/H) Expected Data-2 */
#else /* Word 0 - Little Endian */
        uint32_t exp_data              : 32; /**< [ 31:  0](RO/H) Expected Data-2 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_bbistexpdatasts2_s cn; */
};
typedef union cavm_usbhx_uahc_bbistexpdatasts2 cavm_usbhx_uahc_bbistexpdatasts2_t;

static inline uint64_t CAVM_USBHX_UAHC_BBISTEXPDATASTS2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BBISTEXPDATASTS2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d928ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d928ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BBISTEXPDATASTS2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BBISTEXPDATASTS2(a) cavm_usbhx_uahc_bbistexpdatasts2_t
#define bustype_CAVM_USBHX_UAHC_BBISTEXPDATASTS2(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BBISTEXPDATASTS2(a) "USBHX_UAHC_BBISTEXPDATASTS2"
#define device_bar_CAVM_USBHX_UAHC_BBISTEXPDATASTS2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BBISTEXPDATASTS2(a) (a)
#define arguments_CAVM_USBHX_UAHC_BBISTEXPDATASTS2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bbistexpdatasts3
 *
 * USBH UAHC Bbistexpdatasts3 Register
 * Note : BIST Expected Data Status indicates the expected data when BIST fails which
 * is contained in 4 DWORD distributed over four 32 bit register
 * BBISTEXPDATASTS0,BBISTEXPDATASTS1,BBISTEXPDATASTS2,BBISTEXPDATASTS3
 *
 *  - Only Expected Data [DWC_USB31_MDWIDTH-1:0] is valid, other bits are don't care if any.
 */
union cavm_usbhx_uahc_bbistexpdatasts3
{
    uint32_t u;
    struct cavm_usbhx_uahc_bbistexpdatasts3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t exp_data              : 32; /**< [ 31:  0](RO/H) Expected Data-3 */
#else /* Word 0 - Little Endian */
        uint32_t exp_data              : 32; /**< [ 31:  0](RO/H) Expected Data-3 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_bbistexpdatasts3_s cn; */
};
typedef union cavm_usbhx_uahc_bbistexpdatasts3 cavm_usbhx_uahc_bbistexpdatasts3_t;

static inline uint64_t CAVM_USBHX_UAHC_BBISTEXPDATASTS3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BBISTEXPDATASTS3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d92cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d92cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BBISTEXPDATASTS3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BBISTEXPDATASTS3(a) cavm_usbhx_uahc_bbistexpdatasts3_t
#define bustype_CAVM_USBHX_UAHC_BBISTEXPDATASTS3(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BBISTEXPDATASTS3(a) "USBHX_UAHC_BBISTEXPDATASTS3"
#define device_bar_CAVM_USBHX_UAHC_BBISTEXPDATASTS3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BBISTEXPDATASTS3(a) (a)
#define arguments_CAVM_USBHX_UAHC_BBISTEXPDATASTS3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bbistrcvddatasts0
 *
 * USBH UAHC Bbistrcvddatasts0 Register
 * Note : BIST Received Data Status indicates the received data when BIST fails which
 * is contained in 4 DWORD distributed over four 32 bit register
 * BBISTRCVDDATASTS0,BBISTRCVDDATASTS1,BBISTRCVDDATASTS2,BBISTRCVDDATASTS3
 *
 *  - Only Received Data [DWC_USB31_MDWIDTH-1:0] is valid, other bits are don't care if any.
 */
union cavm_usbhx_uahc_bbistrcvddatasts0
{
    uint32_t u;
    struct cavm_usbhx_uahc_bbistrcvddatasts0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t received_data         : 32; /**< [ 31:  0](RO/H) Received Data-0 */
#else /* Word 0 - Little Endian */
        uint32_t received_data         : 32; /**< [ 31:  0](RO/H) Received Data-0 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_bbistrcvddatasts0_s cn; */
};
typedef union cavm_usbhx_uahc_bbistrcvddatasts0 cavm_usbhx_uahc_bbistrcvddatasts0_t;

static inline uint64_t CAVM_USBHX_UAHC_BBISTRCVDDATASTS0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BBISTRCVDDATASTS0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d930ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d930ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BBISTRCVDDATASTS0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BBISTRCVDDATASTS0(a) cavm_usbhx_uahc_bbistrcvddatasts0_t
#define bustype_CAVM_USBHX_UAHC_BBISTRCVDDATASTS0(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BBISTRCVDDATASTS0(a) "USBHX_UAHC_BBISTRCVDDATASTS0"
#define device_bar_CAVM_USBHX_UAHC_BBISTRCVDDATASTS0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BBISTRCVDDATASTS0(a) (a)
#define arguments_CAVM_USBHX_UAHC_BBISTRCVDDATASTS0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bbistrcvddatasts1
 *
 * USBH UAHC Bbistrcvddatasts1 Register
 * Note : BIST Received Data Status indicates the received data when BIST fails which
 * is contained in 4 DWORD distributed over four 32 bit register
 * BBISTRCVDDATASTS0,BBISTRCVDDATASTS1,BBISTRCVDDATASTS2,BBISTRCVDDATASTS3
 *
 *  - Only Received Data [DWC_USB31_MDWIDTH-1:0] is valid, other bits are don't care if any.
 */
union cavm_usbhx_uahc_bbistrcvddatasts1
{
    uint32_t u;
    struct cavm_usbhx_uahc_bbistrcvddatasts1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t received_data         : 32; /**< [ 31:  0](RO/H) Received Data-1 */
#else /* Word 0 - Little Endian */
        uint32_t received_data         : 32; /**< [ 31:  0](RO/H) Received Data-1 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_bbistrcvddatasts1_s cn; */
};
typedef union cavm_usbhx_uahc_bbistrcvddatasts1 cavm_usbhx_uahc_bbistrcvddatasts1_t;

static inline uint64_t CAVM_USBHX_UAHC_BBISTRCVDDATASTS1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BBISTRCVDDATASTS1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d934ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d934ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BBISTRCVDDATASTS1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BBISTRCVDDATASTS1(a) cavm_usbhx_uahc_bbistrcvddatasts1_t
#define bustype_CAVM_USBHX_UAHC_BBISTRCVDDATASTS1(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BBISTRCVDDATASTS1(a) "USBHX_UAHC_BBISTRCVDDATASTS1"
#define device_bar_CAVM_USBHX_UAHC_BBISTRCVDDATASTS1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BBISTRCVDDATASTS1(a) (a)
#define arguments_CAVM_USBHX_UAHC_BBISTRCVDDATASTS1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bbistrcvddatasts2
 *
 * USBH UAHC Bbistrcvddatasts2 Register
 * Note = BIST Received Data Status indicates the received data when BIST fails which
 * is contained in 4 DWORD distributed over four 32 bit register
 * BBISTRCVDDATASTS0,BBISTRCVDDATASTS1,BBISTRCVDDATASTS2,BBISTRCVDDATASTS3
 * Only Received Data [DWC_USB31_MDWIDTH-1:0] is valid, other bits are don't care if any.
 */
union cavm_usbhx_uahc_bbistrcvddatasts2
{
    uint32_t u;
    struct cavm_usbhx_uahc_bbistrcvddatasts2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t received_data         : 32; /**< [ 31:  0](RO/H) Received Data-2. */
#else /* Word 0 - Little Endian */
        uint32_t received_data         : 32; /**< [ 31:  0](RO/H) Received Data-2. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_bbistrcvddatasts2_s cn; */
};
typedef union cavm_usbhx_uahc_bbistrcvddatasts2 cavm_usbhx_uahc_bbistrcvddatasts2_t;

static inline uint64_t CAVM_USBHX_UAHC_BBISTRCVDDATASTS2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BBISTRCVDDATASTS2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d938ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d938ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BBISTRCVDDATASTS2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BBISTRCVDDATASTS2(a) cavm_usbhx_uahc_bbistrcvddatasts2_t
#define bustype_CAVM_USBHX_UAHC_BBISTRCVDDATASTS2(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BBISTRCVDDATASTS2(a) "USBHX_UAHC_BBISTRCVDDATASTS2"
#define device_bar_CAVM_USBHX_UAHC_BBISTRCVDDATASTS2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BBISTRCVDDATASTS2(a) (a)
#define arguments_CAVM_USBHX_UAHC_BBISTRCVDDATASTS2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bbistrcvddatasts3
 *
 * USBH UAHC Bbistrcvddatasts3 Register
 * Note = BIST Received Data Status indicates the received data when BIST fails which
 * is contained in 4 DWORD distributed over four 32 bit register
 * BBISTRCVDDATASTS0,BBISTRCVDDATASTS1,BBISTRCVDDATASTS2,BBISTRCVDDATASTS3
 *
 * - Only Received Data [DWC_USB31_MDWIDTH-1:0] is valid, other bits are don't care if any.
 */
union cavm_usbhx_uahc_bbistrcvddatasts3
{
    uint32_t u;
    struct cavm_usbhx_uahc_bbistrcvddatasts3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t received_data         : 32; /**< [ 31:  0](RO/H) Received Data-3. */
#else /* Word 0 - Little Endian */
        uint32_t received_data         : 32; /**< [ 31:  0](RO/H) Received Data-3. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_bbistrcvddatasts3_s cn; */
};
typedef union cavm_usbhx_uahc_bbistrcvddatasts3 cavm_usbhx_uahc_bbistrcvddatasts3_t;

static inline uint64_t CAVM_USBHX_UAHC_BBISTRCVDDATASTS3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BBISTRCVDDATASTS3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d93cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d93cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BBISTRCVDDATASTS3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BBISTRCVDDATASTS3(a) cavm_usbhx_uahc_bbistrcvddatasts3_t
#define bustype_CAVM_USBHX_UAHC_BBISTRCVDDATASTS3(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BBISTRCVDDATASTS3(a) "USBHX_UAHC_BBISTRCVDDATASTS3"
#define device_bar_CAVM_USBHX_UAHC_BBISTRCVDDATASTS3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BBISTRCVDDATASTS3(a) (a)
#define arguments_CAVM_USBHX_UAHC_BBISTRCVDDATASTS3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bbistxfersts0
 *
 * USBH UAHC Bbistxfersts0 Register
 * Note : BIST Transfer Status contains 4 DWORD distributed over four 32 bit register
 * BBISTXFERSTS0,BBISTXFERSTS1,BBISTXFERSTS2,BBISTXFERSTS3.
 */
union cavm_usbhx_uahc_bbistxfersts0
{
    uint32_t u;
    struct cavm_usbhx_uahc_bbistxfersts0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t bist_pending_trans_size : 24;/**< [ 23:  0](RO/H) BIST Pending Transfer Size. */
#else /* Word 0 - Little Endian */
        uint32_t bist_pending_trans_size : 24;/**< [ 23:  0](RO/H) BIST Pending Transfer Size. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_bbistxfersts0_s cn; */
};
typedef union cavm_usbhx_uahc_bbistxfersts0 cavm_usbhx_uahc_bbistxfersts0_t;

static inline uint64_t CAVM_USBHX_UAHC_BBISTXFERSTS0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BBISTXFERSTS0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d910ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d910ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BBISTXFERSTS0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BBISTXFERSTS0(a) cavm_usbhx_uahc_bbistxfersts0_t
#define bustype_CAVM_USBHX_UAHC_BBISTXFERSTS0(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BBISTXFERSTS0(a) "USBHX_UAHC_BBISTXFERSTS0"
#define device_bar_CAVM_USBHX_UAHC_BBISTXFERSTS0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BBISTXFERSTS0(a) (a)
#define arguments_CAVM_USBHX_UAHC_BBISTXFERSTS0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bbistxfersts1
 *
 * USBH UAHC Bbistxfersts1 Register
 * Note : BIST Transfer Status contains 4 DWORD distributed over four 32 bit register
 * BBISTXFERSTS0,BBISTXFERSTS1,BBISTXFERSTS2,BBISTXFERSTS3.
 */
union cavm_usbhx_uahc_bbistxfersts1
{
    uint32_t u;
    struct cavm_usbhx_uahc_bbistxfersts1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t failed_pending_trans_size : 24;/**< [ 23:  0](RO/H) Failed Pending Transfer Size */
#else /* Word 0 - Little Endian */
        uint32_t failed_pending_trans_size : 24;/**< [ 23:  0](RO/H) Failed Pending Transfer Size */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_bbistxfersts1_s cn; */
};
typedef union cavm_usbhx_uahc_bbistxfersts1 cavm_usbhx_uahc_bbistxfersts1_t;

static inline uint64_t CAVM_USBHX_UAHC_BBISTXFERSTS1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BBISTXFERSTS1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d914ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d914ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BBISTXFERSTS1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BBISTXFERSTS1(a) cavm_usbhx_uahc_bbistxfersts1_t
#define bustype_CAVM_USBHX_UAHC_BBISTXFERSTS1(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BBISTXFERSTS1(a) "USBHX_UAHC_BBISTXFERSTS1"
#define device_bar_CAVM_USBHX_UAHC_BBISTXFERSTS1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BBISTXFERSTS1(a) (a)
#define arguments_CAVM_USBHX_UAHC_BBISTXFERSTS1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bbistxfersts2
 *
 * USBH UAHC Bbistxfersts2 Register
 * Note : BIST Transfer Status contains 4 DWORD distributed over four 32 bit register
 * BBISTXFERSTS0,BBISTXFERSTS1,BBISTXFERSTS2,BBISTXFERSTS3
 */
union cavm_usbhx_uahc_bbistxfersts2
{
    uint32_t u;
    struct cavm_usbhx_uahc_bbistxfersts2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t failed_iteration      : 24; /**< [ 23:  0](RO/H) Failed Iteration Count. */
#else /* Word 0 - Little Endian */
        uint32_t failed_iteration      : 24; /**< [ 23:  0](RO/H) Failed Iteration Count. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_bbistxfersts2_s cn; */
};
typedef union cavm_usbhx_uahc_bbistxfersts2 cavm_usbhx_uahc_bbistxfersts2_t;

static inline uint64_t CAVM_USBHX_UAHC_BBISTXFERSTS2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BBISTXFERSTS2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d918ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d918ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BBISTXFERSTS2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BBISTXFERSTS2(a) cavm_usbhx_uahc_bbistxfersts2_t
#define bustype_CAVM_USBHX_UAHC_BBISTXFERSTS2(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BBISTXFERSTS2(a) "USBHX_UAHC_BBISTXFERSTS2"
#define device_bar_CAVM_USBHX_UAHC_BBISTXFERSTS2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BBISTXFERSTS2(a) (a)
#define arguments_CAVM_USBHX_UAHC_BBISTXFERSTS2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bbistxfersts3
 *
 * USBH UAHC Bbistxfersts3 Register
 * Note : BIST Transfer Status contains 4 DWORD distributed over four 32 bit register
 * BBISTXFERSTS0,BBISTXFERSTS1,BBISTXFERSTS2,BBISTXFERSTS3
 */
union cavm_usbhx_uahc_bbistxfersts3
{
    uint32_t u;
    struct cavm_usbhx_uahc_bbistxfersts3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t loopback_statemachine : 4;  /**< [  3:  0](RO/H) Loopback state machine. */
#else /* Word 0 - Little Endian */
        uint32_t loopback_statemachine : 4;  /**< [  3:  0](RO/H) Loopback state machine. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_bbistxfersts3_s cn; */
};
typedef union cavm_usbhx_uahc_bbistxfersts3 cavm_usbhx_uahc_bbistxfersts3_t;

static inline uint64_t CAVM_USBHX_UAHC_BBISTXFERSTS3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BBISTXFERSTS3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d91cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d91cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BBISTXFERSTS3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BBISTXFERSTS3(a) cavm_usbhx_uahc_bbistxfersts3_t
#define bustype_CAVM_USBHX_UAHC_BBISTXFERSTS3(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BBISTXFERSTS3(a) "USBHX_UAHC_BBISTXFERSTS3"
#define device_bar_CAVM_USBHX_UAHC_BBISTXFERSTS3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BBISTXFERSTS3(a) (a)
#define arguments_CAVM_USBHX_UAHC_BBISTXFERSTS3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bloopbckctrl
 *
 * USBH UAHC Bloopbckctrl Register
 * Loopback Control Register
 */
union cavm_usbhx_uahc_bloopbckctrl
{
    uint32_t u;
    struct cavm_usbhx_uahc_bloopbckctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t loopback_prtnum       : 4;  /**< [  7:  4](R/W) Valid for Host Mode Loopback */
        uint32_t loopback_level        : 2;  /**< [  3:  2](R/W) - 2'b00 : SSP PIPE
                                                                 - 2'b01 : SSP PHY
                                                                 - 2'b10 : Reserved
                                                                 - 2'b11 : Reserved */
        uint32_t loopback_mode         : 1;  /**< [  1:  1](R/W) - 1'b0 :SW loopback Mode
                                                                 - 1'b1 :BIST HW Loopback Mode */
        uint32_t loopback_mode_en      : 1;  /**< [  0:  0](R/W) Enable Loopback Mode. */
#else /* Word 0 - Little Endian */
        uint32_t loopback_mode_en      : 1;  /**< [  0:  0](R/W) Enable Loopback Mode. */
        uint32_t loopback_mode         : 1;  /**< [  1:  1](R/W) - 1'b0 :SW loopback Mode
                                                                 - 1'b1 :BIST HW Loopback Mode */
        uint32_t loopback_level        : 2;  /**< [  3:  2](R/W) - 2'b00 : SSP PIPE
                                                                 - 2'b01 : SSP PHY
                                                                 - 2'b10 : Reserved
                                                                 - 2'b11 : Reserved */
        uint32_t loopback_prtnum       : 4;  /**< [  7:  4](R/W) Valid for Host Mode Loopback */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    struct cavm_usbhx_uahc_bloopbckctrl_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_11_31        : 21;
        uint32_t reserved_8_10         : 3;
        uint32_t loopback_prtnum       : 4;  /**< [  7:  4](R/W) Valid for Host Mode Loopback */
        uint32_t loopback_level        : 2;  /**< [  3:  2](R/W) - 2'b00 : SSP PIPE
                                                                 - 2'b01 : SSP PHY
                                                                 - 2'b10 : Reserved
                                                                 - 2'b11 : Reserved */
        uint32_t loopback_mode         : 1;  /**< [  1:  1](R/W) - 1'b0 :SW loopback Mode
                                                                 - 1'b1 :BIST HW Loopback Mode */
        uint32_t loopback_mode_en      : 1;  /**< [  0:  0](R/W) Enable Loopback Mode. */
#else /* Word 0 - Little Endian */
        uint32_t loopback_mode_en      : 1;  /**< [  0:  0](R/W) Enable Loopback Mode. */
        uint32_t loopback_mode         : 1;  /**< [  1:  1](R/W) - 1'b0 :SW loopback Mode
                                                                 - 1'b1 :BIST HW Loopback Mode */
        uint32_t loopback_level        : 2;  /**< [  3:  2](R/W) - 2'b00 : SSP PIPE
                                                                 - 2'b01 : SSP PHY
                                                                 - 2'b10 : Reserved
                                                                 - 2'b11 : Reserved */
        uint32_t loopback_prtnum       : 4;  /**< [  7:  4](R/W) Valid for Host Mode Loopback */
        uint32_t reserved_8_10         : 3;
        uint32_t reserved_11_31        : 21;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_usbhx_uahc_bloopbckctrl cavm_usbhx_uahc_bloopbckctrl_t;

static inline uint64_t CAVM_USBHX_UAHC_BLOOPBCKCTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BLOOPBCKCTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d900ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d900ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BLOOPBCKCTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BLOOPBCKCTRL(a) cavm_usbhx_uahc_bloopbckctrl_t
#define bustype_CAVM_USBHX_UAHC_BLOOPBCKCTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BLOOPBCKCTRL(a) "USBHX_UAHC_BLOOPBCKCTRL"
#define device_bar_CAVM_USBHX_UAHC_BLOOPBCKCTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BLOOPBCKCTRL(a) (a)
#define arguments_CAVM_USBHX_UAHC_BLOOPBCKCTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bloopbcktfersz
 *
 * USBH UAHC Bloopbcktfersz Register
 * Loopback Transfer Size Register
 */
union cavm_usbhx_uahc_bloopbcktfersz
{
    uint32_t u;
    struct cavm_usbhx_uahc_bloopbcktfersz_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t loopback_xfer_sz      : 24; /**< [ 23:  0](R/W) The loopback logic uses this field information for size of data to transfer.
                                                                 In SW mode, the transfer size in TRB and loopback transfer size should match
                                                                 MAX_PACKET_SIZE value.
                                                                 In BIST mode, the loopback transfer size should match MAX_PACKET_SIZE value configured. */
#else /* Word 0 - Little Endian */
        uint32_t loopback_xfer_sz      : 24; /**< [ 23:  0](R/W) The loopback logic uses this field information for size of data to transfer.
                                                                 In SW mode, the transfer size in TRB and loopback transfer size should match
                                                                 MAX_PACKET_SIZE value.
                                                                 In BIST mode, the loopback transfer size should match MAX_PACKET_SIZE value configured. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_bloopbcktfersz_s cn; */
};
typedef union cavm_usbhx_uahc_bloopbcktfersz cavm_usbhx_uahc_bloopbcktfersz_t;

static inline uint64_t CAVM_USBHX_UAHC_BLOOPBCKTFERSZ(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BLOOPBCKTFERSZ(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d904ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d904ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BLOOPBCKTFERSZ", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BLOOPBCKTFERSZ(a) cavm_usbhx_uahc_bloopbcktfersz_t
#define bustype_CAVM_USBHX_UAHC_BLOOPBCKTFERSZ(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BLOOPBCKTFERSZ(a) "USBHX_UAHC_BLOOPBCKTFERSZ"
#define device_bar_CAVM_USBHX_UAHC_BLOOPBCKTFERSZ(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BLOOPBCKTFERSZ(a) (a)
#define arguments_CAVM_USBHX_UAHC_BLOOPBCKTFERSZ(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bram0addrerr
 *
 * USBH UAHC Bram0addrerr Register
 * Address of RAM0 which had uncorrectable error
 */
union cavm_usbhx_uahc_bram0addrerr
{
    uint32_t u;
    struct cavm_usbhx_uahc_bram0addrerr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t ram0errloc            : 16; /**< [ 15:  0](RO/H) RAM0 Address Error Location */
#else /* Word 0 - Little Endian */
        uint32_t ram0errloc            : 16; /**< [ 15:  0](RO/H) RAM0 Address Error Location */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_bram0addrerr_s cn; */
};
typedef union cavm_usbhx_uahc_bram0addrerr cavm_usbhx_uahc_bram0addrerr_t;

static inline uint64_t CAVM_USBHX_UAHC_BRAM0ADDRERR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BRAM0ADDRERR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d860ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d860ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BRAM0ADDRERR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BRAM0ADDRERR(a) cavm_usbhx_uahc_bram0addrerr_t
#define bustype_CAVM_USBHX_UAHC_BRAM0ADDRERR(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BRAM0ADDRERR(a) "USBHX_UAHC_BRAM0ADDRERR"
#define device_bar_CAVM_USBHX_UAHC_BRAM0ADDRERR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BRAM0ADDRERR(a) (a)
#define arguments_CAVM_USBHX_UAHC_BRAM0ADDRERR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bram1addrerr
 *
 * USBH UAHC Bram1addrerr Register
 * RAM1 Address Error Register
 */
union cavm_usbhx_uahc_bram1addrerr
{
    uint32_t u;
    struct cavm_usbhx_uahc_bram1addrerr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t ram1errloc            : 16; /**< [ 15:  0](RO/H) RAM1 address error location */
#else /* Word 0 - Little Endian */
        uint32_t ram1errloc            : 16; /**< [ 15:  0](RO/H) RAM1 address error location */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_bram1addrerr_s cn; */
};
typedef union cavm_usbhx_uahc_bram1addrerr cavm_usbhx_uahc_bram1addrerr_t;

static inline uint64_t CAVM_USBHX_UAHC_BRAM1ADDRERR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BRAM1ADDRERR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d864ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d864ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BRAM1ADDRERR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BRAM1ADDRERR(a) cavm_usbhx_uahc_bram1addrerr_t
#define bustype_CAVM_USBHX_UAHC_BRAM1ADDRERR(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BRAM1ADDRERR(a) "USBHX_UAHC_BRAM1ADDRERR"
#define device_bar_CAVM_USBHX_UAHC_BRAM1ADDRERR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BRAM1ADDRERR(a) (a)
#define arguments_CAVM_USBHX_UAHC_BRAM1ADDRERR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bram2addrerr
 *
 * USBH UAHC Bram2addrerr Register
 * RAM2 Address Error Register
 */
union cavm_usbhx_uahc_bram2addrerr
{
    uint32_t u;
    struct cavm_usbhx_uahc_bram2addrerr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t ram2errloc            : 16; /**< [ 15:  0](RO/H) RAM2 address error location */
#else /* Word 0 - Little Endian */
        uint32_t ram2errloc            : 16; /**< [ 15:  0](RO/H) RAM2 address error location */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_bram2addrerr_s cn; */
};
typedef union cavm_usbhx_uahc_bram2addrerr cavm_usbhx_uahc_bram2addrerr_t;

static inline uint64_t CAVM_USBHX_UAHC_BRAM2ADDRERR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BRAM2ADDRERR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d868ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d868ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BRAM2ADDRERR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BRAM2ADDRERR(a) cavm_usbhx_uahc_bram2addrerr_t
#define bustype_CAVM_USBHX_UAHC_BRAM2ADDRERR(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BRAM2ADDRERR(a) "USBHX_UAHC_BRAM2ADDRERR"
#define device_bar_CAVM_USBHX_UAHC_BRAM2ADDRERR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BRAM2ADDRERR(a) (a)
#define arguments_CAVM_USBHX_UAHC_BRAM2ADDRERR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bram3addrerr
 *
 * USBH UAHC Bram3addrerr Register
 * RAM3 Address Error Register
 */
union cavm_usbhx_uahc_bram3addrerr
{
    uint32_t u;
    struct cavm_usbhx_uahc_bram3addrerr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t ram3errloc            : 16; /**< [ 15:  0](RO/H) RAM3 address error location */
#else /* Word 0 - Little Endian */
        uint32_t ram3errloc            : 16; /**< [ 15:  0](RO/H) RAM3 address error location */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_bram3addrerr_s cn; */
};
typedef union cavm_usbhx_uahc_bram3addrerr cavm_usbhx_uahc_bram3addrerr_t;

static inline uint64_t CAVM_USBHX_UAHC_BRAM3ADDRERR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BRAM3ADDRERR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d86cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d86cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BRAM3ADDRERR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BRAM3ADDRERR(a) cavm_usbhx_uahc_bram3addrerr_t
#define bustype_CAVM_USBHX_UAHC_BRAM3ADDRERR(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BRAM3ADDRERR(a) "USBHX_UAHC_BRAM3ADDRERR"
#define device_bar_CAVM_USBHX_UAHC_BRAM3ADDRERR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BRAM3ADDRERR(a) (a)
#define arguments_CAVM_USBHX_UAHC_BRAM3ADDRERR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bram4addrerr
 *
 * USBH BRAM4 Bram4addrerr Register
 * RAM4 Address Error Register
 */
union cavm_usbhx_uahc_bram4addrerr
{
    uint32_t u;
    struct cavm_usbhx_uahc_bram4addrerr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t ram4errloc            : 16; /**< [ 15:  0](RO/H) RAM4 address error location */
#else /* Word 0 - Little Endian */
        uint32_t ram4errloc            : 16; /**< [ 15:  0](RO/H) RAM4 address error location */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_bram4addrerr_s cn; */
};
typedef union cavm_usbhx_uahc_bram4addrerr cavm_usbhx_uahc_bram4addrerr_t;

static inline uint64_t CAVM_USBHX_UAHC_BRAM4ADDRERR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BRAM4ADDRERR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d870ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d870ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BRAM4ADDRERR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BRAM4ADDRERR(a) cavm_usbhx_uahc_bram4addrerr_t
#define bustype_CAVM_USBHX_UAHC_BRAM4ADDRERR(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BRAM4ADDRERR(a) "USBHX_UAHC_BRAM4ADDRERR"
#define device_bar_CAVM_USBHX_UAHC_BRAM4ADDRERR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BRAM4ADDRERR(a) (a)
#define arguments_CAVM_USBHX_UAHC_BRAM4ADDRERR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_brameccerr
 *
 * USBH UAHC Brameccerr Register
 * RAM ECC Error Register
 */
union cavm_usbhx_uahc_brameccerr
{
    uint32_t u;
    struct cavm_usbhx_uahc_brameccerr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_12_31        : 20;
        uint32_t ramserr               : 1;  /**< [ 11: 11](R/W) RAM Single Error */
        uint32_t rammerr               : 1;  /**< [ 10: 10](R/W) RAM Multiple Error */
        uint32_t ramserrvec            : 5;  /**< [  9:  5](R/W) RAM0 Single Error Vector */
        uint32_t rammerrvec            : 5;  /**< [  4:  0](R/W) RAM Multiple Error Vector */
#else /* Word 0 - Little Endian */
        uint32_t rammerrvec            : 5;  /**< [  4:  0](R/W) RAM Multiple Error Vector */
        uint32_t ramserrvec            : 5;  /**< [  9:  5](R/W) RAM0 Single Error Vector */
        uint32_t rammerr               : 1;  /**< [ 10: 10](R/W) RAM Multiple Error */
        uint32_t ramserr               : 1;  /**< [ 11: 11](R/W) RAM Single Error */
        uint32_t reserved_12_31        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_brameccerr_s cn; */
};
typedef union cavm_usbhx_uahc_brameccerr cavm_usbhx_uahc_brameccerr_t;

static inline uint64_t CAVM_USBHX_UAHC_BRAMECCERR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BRAMECCERR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d858ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d858ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BRAMECCERR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BRAMECCERR(a) cavm_usbhx_uahc_brameccerr_t
#define bustype_CAVM_USBHX_UAHC_BRAMECCERR(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BRAMECCERR(a) "USBHX_UAHC_BRAMECCERR"
#define device_bar_CAVM_USBHX_UAHC_BRAMECCERR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BRAMECCERR(a) (a)
#define arguments_CAVM_USBHX_UAHC_BRAMECCERR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bramhiaddr
 *
 * USBH UAHC Bramhiaddr Register
 * RAM HIGHER ADDRESS REGISTER
 */
union cavm_usbhx_uahc_bramhiaddr
{
    uint32_t u;
    struct cavm_usbhx_uahc_bramhiaddr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_21_31        : 11;
        uint32_t ram_select            : 3;  /**< [ 20: 18](R/W) Chip select for RAM 0-4 */
        uint32_t ramhiaddr             : 6;  /**< [ 17: 12](R/W) Partial decoding bits for RAM higher address */
        uint32_t reserved_0_11         : 12;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_11         : 12;
        uint32_t ramhiaddr             : 6;  /**< [ 17: 12](R/W) Partial decoding bits for RAM higher address */
        uint32_t ram_select            : 3;  /**< [ 20: 18](R/W) Chip select for RAM 0-4 */
        uint32_t reserved_21_31        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_bramhiaddr_s cn; */
};
typedef union cavm_usbhx_uahc_bramhiaddr cavm_usbhx_uahc_bramhiaddr_t;

static inline uint64_t CAVM_USBHX_UAHC_BRAMHIADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BRAMHIADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d84cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d84cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BRAMHIADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BRAMHIADDR(a) cavm_usbhx_uahc_bramhiaddr_t
#define bustype_CAVM_USBHX_UAHC_BRAMHIADDR(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BRAMHIADDR(a) "USBHX_UAHC_BRAMHIADDR"
#define device_bar_CAVM_USBHX_UAHC_BRAMHIADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BRAMHIADDR(a) (a)
#define arguments_CAVM_USBHX_UAHC_BRAMHIADDR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_brerrctl
 *
 * USBH UAHC Brerrctl Register
 * RAM ERROR CONTROL REGISTER
 */
union cavm_usbhx_uahc_brerrctl
{
    uint32_t u;
    struct cavm_usbhx_uahc_brerrctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t rserrclr              : 1;  /**< [  1:  1](R/W) RAM Single Error Clear */
        uint32_t rmerrclr              : 1;  /**< [  0:  0](R/W) RAM Multiple Error Clear */
#else /* Word 0 - Little Endian */
        uint32_t rmerrclr              : 1;  /**< [  0:  0](R/W) RAM Multiple Error Clear */
        uint32_t rserrclr              : 1;  /**< [  1:  1](R/W) RAM Single Error Clear */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_brerrctl_s cn; */
};
typedef union cavm_usbhx_uahc_brerrctl cavm_usbhx_uahc_brerrctl_t;

static inline uint64_t CAVM_USBHX_UAHC_BRERRCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BRERRCTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d85cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d85cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BRERRCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BRERRCTL(a) cavm_usbhx_uahc_brerrctl_t
#define bustype_CAVM_USBHX_UAHC_BRERRCTL(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BRERRCTL(a) "USBHX_UAHC_BRERRCTL"
#define device_bar_CAVM_USBHX_UAHC_BRERRCTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BRERRCTL(a) (a)
#define arguments_CAVM_USBHX_UAHC_BRERRCTL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_brmerrcnt
 *
 * USBH UAHC Brmerrcnt Register
 * RAM Multiple Error Count. 6 bit count for each od 5 RAMS
 */
union cavm_usbhx_uahc_brmerrcnt
{
    uint32_t u;
    struct cavm_usbhx_uahc_brmerrcnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t ram4merrcnt           : 6;  /**< [ 29: 24](R/W) RAM4 Multiple Error Count */
        uint32_t ram3merrcnt           : 6;  /**< [ 23: 18](R/W) RAM3 Multiple Error Count */
        uint32_t ram2merrcnt           : 6;  /**< [ 17: 12](R/W) RAM2 Multiple Error Count */
        uint32_t ram1merrcnt           : 6;  /**< [ 11:  6](R/W) RAM1 Multiple Error Count */
        uint32_t ram0merrcnt           : 6;  /**< [  5:  0](R/W) RAM0 Multiple Error Count */
#else /* Word 0 - Little Endian */
        uint32_t ram0merrcnt           : 6;  /**< [  5:  0](R/W) RAM0 Multiple Error Count */
        uint32_t ram1merrcnt           : 6;  /**< [ 11:  6](R/W) RAM1 Multiple Error Count */
        uint32_t ram2merrcnt           : 6;  /**< [ 17: 12](R/W) RAM2 Multiple Error Count */
        uint32_t ram3merrcnt           : 6;  /**< [ 23: 18](R/W) RAM3 Multiple Error Count */
        uint32_t ram4merrcnt           : 6;  /**< [ 29: 24](R/W) RAM4 Multiple Error Count */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_brmerrcnt_s cn; */
};
typedef union cavm_usbhx_uahc_brmerrcnt cavm_usbhx_uahc_brmerrcnt_t;

static inline uint64_t CAVM_USBHX_UAHC_BRMERRCNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BRMERRCNT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d854ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d854ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BRMERRCNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BRMERRCNT(a) cavm_usbhx_uahc_brmerrcnt_t
#define bustype_CAVM_USBHX_UAHC_BRMERRCNT(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BRMERRCNT(a) "USBHX_UAHC_BRMERRCNT"
#define device_bar_CAVM_USBHX_UAHC_BRMERRCNT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BRMERRCNT(a) (a)
#define arguments_CAVM_USBHX_UAHC_BRMERRCNT(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_brserrcnt
 *
 * USBH UAHC Brserrcnt Register
 * RAM Single Error Count. 6 bit count for each od 5 RAMS
 */
union cavm_usbhx_uahc_brserrcnt
{
    uint32_t u;
    struct cavm_usbhx_uahc_brserrcnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t ram4serrcnt           : 6;  /**< [ 29: 24](R/W) RAM4 Single Error Count */
        uint32_t ram3serrcnt           : 6;  /**< [ 23: 18](R/W) RAM3 Single Error Count */
        uint32_t ram2serrcnt           : 6;  /**< [ 17: 12](R/W) RAM2 Single Error Count */
        uint32_t ram1serrcnt           : 6;  /**< [ 11:  6](R/W) RAM1 Single Error Count */
        uint32_t ram0serrcnt           : 6;  /**< [  5:  0](R/W) RAM0 Single Error Count */
#else /* Word 0 - Little Endian */
        uint32_t ram0serrcnt           : 6;  /**< [  5:  0](R/W) RAM0 Single Error Count */
        uint32_t ram1serrcnt           : 6;  /**< [ 11:  6](R/W) RAM1 Single Error Count */
        uint32_t ram2serrcnt           : 6;  /**< [ 17: 12](R/W) RAM2 Single Error Count */
        uint32_t ram3serrcnt           : 6;  /**< [ 23: 18](R/W) RAM3 Single Error Count */
        uint32_t ram4serrcnt           : 6;  /**< [ 29: 24](R/W) RAM4 Single Error Count */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_brserrcnt_s cn; */
};
typedef union cavm_usbhx_uahc_brserrcnt cavm_usbhx_uahc_brserrcnt_t;

static inline uint64_t CAVM_USBHX_UAHC_BRSERRCNT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BRSERRCNT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d850ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d850ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BRSERRCNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BRSERRCNT(a) cavm_usbhx_uahc_brserrcnt_t
#define bustype_CAVM_USBHX_UAHC_BRSERRCNT(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BRSERRCNT(a) "USBHX_UAHC_BRSERRCNT"
#define device_bar_CAVM_USBHX_UAHC_BRSERRCNT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BRSERRCNT(a) (a)
#define arguments_CAVM_USBHX_UAHC_BRSERRCNT(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_bu31rhbdbg
 *
 * USBH UAHC Bu31rhbdbg Register
 * U31 ROOT HUB DEBUG REG
 */
union cavm_usbhx_uahc_bu31rhbdbg
{
    uint32_t u;
    struct cavm_usbhx_uahc_bu31rhbdbg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t tpcfg_tout_ctrl       : 1;  /**< [  3:  3](R/W) This bit controls the 3.x port configuration timeout duration.
                                                                  0 = The port configuration timeout counter does not reset if the link goes to
                                                                 recovery or exits U0.
                                                                  1 = The port configuration timeout counter resets when the link is not in U0. */
        uint32_t pcap                  : 2;  /**< [  2:  1](R/W) This field is used for Synopsys debugging purposes only. */
        uint32_t ovrcur                : 1;  /**< [  0:  0](R/W) Overcurrent injection. This field is used for Synopsys debugging purposes only. */
#else /* Word 0 - Little Endian */
        uint32_t ovrcur                : 1;  /**< [  0:  0](R/W) Overcurrent injection. This field is used for Synopsys debugging purposes only. */
        uint32_t pcap                  : 2;  /**< [  2:  1](R/W) This field is used for Synopsys debugging purposes only. */
        uint32_t tpcfg_tout_ctrl       : 1;  /**< [  3:  3](R/W) This bit controls the 3.x port configuration timeout duration.
                                                                  0 = The port configuration timeout counter does not reset if the link goes to
                                                                 recovery or exits U0.
                                                                  1 = The port configuration timeout counter resets when the link is not in U0. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    struct cavm_usbhx_uahc_bu31rhbdbg_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_10_31        : 22;
        uint32_t reserved_4_9          : 6;
        uint32_t tpcfg_tout_ctrl       : 1;  /**< [  3:  3](R/W) This bit controls the 3.x port configuration timeout duration.
                                                                  0 = The port configuration timeout counter does not reset if the link goes to
                                                                 recovery or exits U0.
                                                                  1 = The port configuration timeout counter resets when the link is not in U0. */
        uint32_t pcap                  : 2;  /**< [  2:  1](R/W) This field is used for Synopsys debugging purposes only. */
        uint32_t ovrcur                : 1;  /**< [  0:  0](R/W) Overcurrent injection. This field is used for Synopsys debugging purposes only. */
#else /* Word 0 - Little Endian */
        uint32_t ovrcur                : 1;  /**< [  0:  0](R/W) Overcurrent injection. This field is used for Synopsys debugging purposes only. */
        uint32_t pcap                  : 2;  /**< [  2:  1](R/W) This field is used for Synopsys debugging purposes only. */
        uint32_t tpcfg_tout_ctrl       : 1;  /**< [  3:  3](R/W) This bit controls the 3.x port configuration timeout duration.
                                                                  0 = The port configuration timeout counter does not reset if the link goes to
                                                                 recovery or exits U0.
                                                                  1 = The port configuration timeout counter resets when the link is not in U0. */
        uint32_t reserved_4_9          : 6;
        uint32_t reserved_10_31        : 22;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_usbhx_uahc_bu31rhbdbg cavm_usbhx_uahc_bu31rhbdbg_t;

static inline uint64_t CAVM_USBHX_UAHC_BU31RHBDBG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_BU31RHBDBG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d800ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d800ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_BU31RHBDBG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_BU31RHBDBG(a) cavm_usbhx_uahc_bu31rhbdbg_t
#define bustype_CAVM_USBHX_UAHC_BU31RHBDBG(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_BU31RHBDBG(a) "USBHX_UAHC_BU31RHBDBG"
#define device_bar_CAVM_USBHX_UAHC_BU31RHBDBG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_BU31RHBDBG(a) (a)
#define arguments_CAVM_USBHX_UAHC_BU31RHBDBG(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_caplength
 *
 * USB XHCI Capability Length Register
 * This register is used as an offset to add to register base to find the beginning of the
 * operational register
 * space. For information on this register, refer to the xHCI Specification, v1.2, section 5.3.1.
 */
union cavm_usbhx_uahc_caplength
{
    uint32_t u;
    struct cavm_usbhx_uahc_caplength_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t hciversion            : 16; /**< [ 31: 16](RO) Host controller interface version number. */
        uint32_t reserved_8_15         : 8;
        uint32_t caplength             : 8;  /**< [  7:  0](RO) Capability registers length. */
#else /* Word 0 - Little Endian */
        uint32_t caplength             : 8;  /**< [  7:  0](RO) Capability registers length. */
        uint32_t reserved_8_15         : 8;
        uint32_t hciversion            : 16; /**< [ 31: 16](RO) Host controller interface version number. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_caplength_s cn; */
};
typedef union cavm_usbhx_uahc_caplength cavm_usbhx_uahc_caplength_t;

static inline uint64_t CAVM_USBHX_UAHC_CAPLENGTH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_CAPLENGTH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000000ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000000ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_CAPLENGTH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_CAPLENGTH(a) cavm_usbhx_uahc_caplength_t
#define bustype_CAVM_USBHX_UAHC_CAPLENGTH(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_CAPLENGTH(a) "USBHX_UAHC_CAPLENGTH"
#define device_bar_CAVM_USBHX_UAHC_CAPLENGTH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_CAPLENGTH(a) (a)
#define arguments_CAVM_USBHX_UAHC_CAPLENGTH(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_config
 *
 * USB XHCI Configuration Register
 * This register defines runtime xHC configuration parameters.
 * For information on this register, refer to the xHCI Specification, v1.2, section 5.4.7.
 *
 * This register can be reset by core domain reset,
 * or USBH()_UCTL_CTL[UAHC_RST],
 * or USBH()_UAHC_GCTL[CORESOFTRESET],
 * or USBH()_UAHC_USBCMD[HCRST], or USBH()_UAHC_USBCMD[LHCRST].
 */
union cavm_usbhx_uahc_config
{
    uint32_t u;
    struct cavm_usbhx_uahc_config_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_10_31        : 22;
        uint32_t cie                   : 1;  /**< [  9:  9](R/W) Configuration Information Enable */
        uint32_t u3e                   : 1;  /**< [  8:  8](R/W) U3 Entry Enable */
        uint32_t maxslotsen            : 8;  /**< [  7:  0](R/W) Maximum device slots enabled. */
#else /* Word 0 - Little Endian */
        uint32_t maxslotsen            : 8;  /**< [  7:  0](R/W) Maximum device slots enabled. */
        uint32_t u3e                   : 1;  /**< [  8:  8](R/W) U3 Entry Enable */
        uint32_t cie                   : 1;  /**< [  9:  9](R/W) Configuration Information Enable */
        uint32_t reserved_10_31        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_config_s cn; */
};
typedef union cavm_usbhx_uahc_config cavm_usbhx_uahc_config_t;

static inline uint64_t CAVM_USBHX_UAHC_CONFIG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_CONFIG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000058ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000058ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_CONFIG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_CONFIG(a) cavm_usbhx_uahc_config_t
#define bustype_CAVM_USBHX_UAHC_CONFIG(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_CONFIG(a) "USBHX_UAHC_CONFIG"
#define device_bar_CAVM_USBHX_UAHC_CONFIG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_CONFIG(a) (a)
#define arguments_CAVM_USBHX_UAHC_CONFIG(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uahc_crcr
 *
 * USB XHCI Command Ring Control Register
 * For information on this register, refer to the xHCI Specification, v1.2, section 5.4.5.
 * This register can be reset by core domain reset,
 * or USBH()_UCTL_CTL[UAHC_RST],
 * or USBH()_UAHC_GCTL[CORESOFTRESET],
 * or USBH()_UAHC_USBCMD[HCRST], or USBH()_UAHC_USBCMD[LHCRST].
 */
union cavm_usbhx_uahc_crcr
{
    uint64_t u;
    struct cavm_usbhx_uahc_crcr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t cmd_ring_ptr          : 58; /**< [ 63:  6](WO) Command ring pointer. */
        uint64_t reserved_4_5          : 2;
        uint64_t crr                   : 1;  /**< [  3:  3](RO/H) Command ring running. */
        uint64_t ca                    : 1;  /**< [  2:  2](WO) Command abort. */
        uint64_t cs                    : 1;  /**< [  1:  1](WO) Command stop. */
        uint64_t rcs                   : 1;  /**< [  0:  0](WO) Ring cycle state. */
#else /* Word 0 - Little Endian */
        uint64_t rcs                   : 1;  /**< [  0:  0](WO) Ring cycle state. */
        uint64_t cs                    : 1;  /**< [  1:  1](WO) Command stop. */
        uint64_t ca                    : 1;  /**< [  2:  2](WO) Command abort. */
        uint64_t crr                   : 1;  /**< [  3:  3](RO/H) Command ring running. */
        uint64_t reserved_4_5          : 2;
        uint64_t cmd_ring_ptr          : 58; /**< [ 63:  6](WO) Command ring pointer. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_crcr_s cn; */
};
typedef union cavm_usbhx_uahc_crcr cavm_usbhx_uahc_crcr_t;

static inline uint64_t CAVM_USBHX_UAHC_CRCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_CRCR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000038ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000038ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_CRCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_CRCR(a) cavm_usbhx_uahc_crcr_t
#define bustype_CAVM_USBHX_UAHC_CRCR(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UAHC_CRCR(a) "USBHX_UAHC_CRCR"
#define device_bar_CAVM_USBHX_UAHC_CRCR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_CRCR(a) (a)
#define arguments_CAVM_USBHX_UAHC_CRCR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_db#
 *
 * USB XHCI Doorbell Registers
 * For information on this register, refer to the xHCI Specification, v1.2, section 5.6.
 *
 * This register can be reset by core domain reset,
 * or USBH()_UCTL_CTL[UAHC_RST],
 * or USBH()_UAHC_GCTL[CORESOFTRESET],
 * or USBH()_UAHC_USBCMD[HCRST], or USBH()_UAHC_USBCMD[LHCRST].
 */
union cavm_usbhx_uahc_dbx
{
    uint32_t u;
    struct cavm_usbhx_uahc_dbx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dbstreamid            : 16; /**< [ 31: 16](WO) Doorbell stream ID. */
        uint32_t reserved_8_15         : 8;
        uint32_t dbtarget              : 8;  /**< [  7:  0](WO) Doorbell target. */
#else /* Word 0 - Little Endian */
        uint32_t dbtarget              : 8;  /**< [  7:  0](WO) Doorbell target. */
        uint32_t reserved_8_15         : 8;
        uint32_t dbstreamid            : 16; /**< [ 31: 16](WO) Doorbell stream ID. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_dbx_s cn; */
};
typedef union cavm_usbhx_uahc_dbx cavm_usbhx_uahc_dbx_t;

static inline uint64_t CAVM_USBHX_UAHC_DBX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_DBX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b<=64)))
        return 0x868000002000ll + 0x1000000000ll * ((a) & 0x1) + 4ll * ((b) & 0x7f);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b<=64)))
        return 0x868000002000ll + 0x1000000000ll * ((a) & 0x1) + 4ll * ((b) & 0x7f);
    __cavm_csr_fatal("USBHX_UAHC_DBX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_DBX(a,b) cavm_usbhx_uahc_dbx_t
#define bustype_CAVM_USBHX_UAHC_DBX(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_DBX(a,b) "USBHX_UAHC_DBX"
#define device_bar_CAVM_USBHX_UAHC_DBX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_DBX(a,b) (a)
#define arguments_CAVM_USBHX_UAHC_DBX(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) usbh#_uahc_dboff
 *
 * USB XHCI Doorbell Array Offset Register
 * This register defines the offset of the doorbell array base address from the base. For
 * information on this register, refer to the xHCI        Specification, v1.2, section 5.3.7.
 */
union cavm_usbhx_uahc_dboff
{
    uint32_t u;
    struct cavm_usbhx_uahc_dboff_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dboff                 : 30; /**< [ 31:  2](RO) Doorbell array offset. */
        uint32_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_1          : 2;
        uint32_t dboff                 : 30; /**< [ 31:  2](RO) Doorbell array offset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_dboff_s cn; */
};
typedef union cavm_usbhx_uahc_dboff cavm_usbhx_uahc_dboff_t;

static inline uint64_t CAVM_USBHX_UAHC_DBOFF(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_DBOFF(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000014ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000014ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_DBOFF", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_DBOFF(a) cavm_usbhx_uahc_dboff_t
#define bustype_CAVM_USBHX_UAHC_DBOFF(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_DBOFF(a) "USBHX_UAHC_DBOFF"
#define device_bar_CAVM_USBHX_UAHC_DBOFF(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_DBOFF(a) (a)
#define arguments_CAVM_USBHX_UAHC_DBOFF(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uahc_dcbaap
 *
 * USB XHCI Device Context Base-Address-Array Pointer Register
 * The device context base address array pointer register identifies the base address of the
 * device
 * context base address array.
 * For information on this register, refer to the xHCI Specification, v1.2, section 5.4.6.
 *
 * This register can be reset by core domain reset,
 * or USBH()_UCTL_CTL[UAHC_RST],
 * or USBH()_UAHC_GCTL[CORESOFTRESET],
 * or USBH()_UAHC_USBCMD[HCRST], or USBH()_UAHC_USBCMD[LHCRST].
 */
union cavm_usbhx_uahc_dcbaap
{
    uint64_t u;
    struct cavm_usbhx_uahc_dcbaap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dcbaap                : 58; /**< [ 63:  6](R/W) Device context base address array pointer. */
        uint64_t reserved_0_5          : 6;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_5          : 6;
        uint64_t dcbaap                : 58; /**< [ 63:  6](R/W) Device context base address array pointer. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_dcbaap_s cn; */
};
typedef union cavm_usbhx_uahc_dcbaap cavm_usbhx_uahc_dcbaap_t;

static inline uint64_t CAVM_USBHX_UAHC_DCBAAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_DCBAAP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000050ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000050ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_DCBAAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_DCBAAP(a) cavm_usbhx_uahc_dcbaap_t
#define bustype_CAVM_USBHX_UAHC_DCBAAP(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UAHC_DCBAAP(a) "USBHX_UAHC_DCBAAP"
#define device_bar_CAVM_USBHX_UAHC_DCBAAP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_DCBAAP(a) (a)
#define arguments_CAVM_USBHX_UAHC_DCBAAP(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_dnctrl
 *
 * USB XHCI Device Notification Control Register
 * This register is used by software to enable or disable the reporting of the reception of
 * specific USB device
 * notification transaction packets.
 * For information on this register, refer to the xHCI Specification, v1.2, section 5.4.4.
 *
 * This register can be reset by core domain reset,
 * or USBH()_UCTL_CTL[UAHC_RST],
 * or USBH()_UAHC_GCTL[CORESOFTRESET],
 * or USBH()_UAHC_USBCMD[HCRST], or USBH()_UAHC_USBCMD[LHCRST].
 */
union cavm_usbhx_uahc_dnctrl
{
    uint32_t u;
    struct cavm_usbhx_uahc_dnctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t n                     : 16; /**< [ 15:  0](R/W) Notification enable. */
#else /* Word 0 - Little Endian */
        uint32_t n                     : 16; /**< [ 15:  0](R/W) Notification enable. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_dnctrl_s cn; */
};
typedef union cavm_usbhx_uahc_dnctrl cavm_usbhx_uahc_dnctrl_t;

static inline uint64_t CAVM_USBHX_UAHC_DNCTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_DNCTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000034ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000034ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_DNCTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_DNCTRL(a) cavm_usbhx_uahc_dnctrl_t
#define bustype_CAVM_USBHX_UAHC_DNCTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_DNCTRL(a) "USBHX_UAHC_DNCTRL"
#define device_bar_CAVM_USBHX_UAHC_DNCTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_DNCTRL(a) (a)
#define arguments_CAVM_USBHX_UAHC_DNCTRL(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uahc_erdp#
 *
 * USB XHCI Event Ring Dequeue Pointer Register
 * For information on this register, refer to the xHCI Specification, v1.2, section 5.5.2.3.3.
 *
 * This register can be reset by core domain reset,
 * or USBH()_UCTL_CTL[UAHC_RST],
 * or USBH()_UAHC_GCTL[CORESOFTRESET],
 * or USBH()_UAHC_USBCMD[HCRST], or USBH()_UAHC_USBCMD[LHCRST].
 */
union cavm_usbhx_uahc_erdpx
{
    uint64_t u;
    struct cavm_usbhx_uahc_erdpx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t erdp                  : 60; /**< [ 63:  4](R/W) Event ring dequeue pointer bits \<63:4\>. */
        uint64_t ehb                   : 1;  /**< [  3:  3](R/W1C/H) Event handler busy */
        uint64_t desi                  : 3;  /**< [  2:  0](R/W) Dequeue ERST segment index. */
#else /* Word 0 - Little Endian */
        uint64_t desi                  : 3;  /**< [  2:  0](R/W) Dequeue ERST segment index. */
        uint64_t ehb                   : 1;  /**< [  3:  3](R/W1C/H) Event handler busy */
        uint64_t erdp                  : 60; /**< [ 63:  4](R/W) Event ring dequeue pointer bits \<63:4\>. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_erdpx_s cn; */
};
typedef union cavm_usbhx_uahc_erdpx cavm_usbhx_uahc_erdpx_t;

static inline uint64_t CAVM_USBHX_UAHC_ERDPX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_ERDPX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b==0)))
        return 0x868000001038ll + 0x1000000000ll * ((a) & 0x1) + 0ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b==0)))
        return 0x868000001038ll + 0x1000000000ll * ((a) & 0x1) + 0ll * ((b) & 0x0);
    __cavm_csr_fatal("USBHX_UAHC_ERDPX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_ERDPX(a,b) cavm_usbhx_uahc_erdpx_t
#define bustype_CAVM_USBHX_UAHC_ERDPX(a,b) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UAHC_ERDPX(a,b) "USBHX_UAHC_ERDPX"
#define device_bar_CAVM_USBHX_UAHC_ERDPX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_ERDPX(a,b) (a)
#define arguments_CAVM_USBHX_UAHC_ERDPX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) usbh#_uahc_erstba#
 *
 * USB XHCI Event-Ring Segment-Table Base-Address Register
 * For information on this register, refer to the xHCI Specification, v1.2, section 5.5.2.3.2.
 *
 * This register can be reset by core domain reset,
 * or USBH()_UCTL_CTL[UAHC_RST],
 * or USBH()_UAHC_GCTL[CORESOFTRESET],
 * or USBH()_UAHC_USBCMD[HCRST], or USBH()_UAHC_USBCMD[LHCRST].
 */
union cavm_usbhx_uahc_erstbax
{
    uint64_t u;
    struct cavm_usbhx_uahc_erstbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t erstba                : 58; /**< [ 63:  6](R/W) ERS_TABLE_BAR */
        uint64_t reserved_0_5          : 6;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_5          : 6;
        uint64_t erstba                : 58; /**< [ 63:  6](R/W) ERS_TABLE_BAR */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_erstbax_s cn; */
};
typedef union cavm_usbhx_uahc_erstbax cavm_usbhx_uahc_erstbax_t;

static inline uint64_t CAVM_USBHX_UAHC_ERSTBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_ERSTBAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b==0)))
        return 0x868000001030ll + 0x1000000000ll * ((a) & 0x1) + 0ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b==0)))
        return 0x868000001030ll + 0x1000000000ll * ((a) & 0x1) + 0ll * ((b) & 0x0);
    __cavm_csr_fatal("USBHX_UAHC_ERSTBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_ERSTBAX(a,b) cavm_usbhx_uahc_erstbax_t
#define bustype_CAVM_USBHX_UAHC_ERSTBAX(a,b) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UAHC_ERSTBAX(a,b) "USBHX_UAHC_ERSTBAX"
#define device_bar_CAVM_USBHX_UAHC_ERSTBAX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_ERSTBAX(a,b) (a)
#define arguments_CAVM_USBHX_UAHC_ERSTBAX(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) usbh#_uahc_erstsz#
 *
 * USB XHCI Event-Ring Segment-Table Size Register
 * For information on this register, refer to the xHCI Specification, v1.2, section 5.5.2.3.1.
 *
 * This register can be reset by core domain reset,
 * or USBH()_UCTL_CTL[UAHC_RST],
 * or USBH()_UAHC_GCTL[CORESOFTRESET],
 * or USBH()_UAHC_USBCMD[HCRST], or USBH()_UAHC_USBCMD[LHCRST].
 */
union cavm_usbhx_uahc_erstszx
{
    uint32_t u;
    struct cavm_usbhx_uahc_erstszx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t erstsz                : 16; /**< [ 15:  0](R/W) Event-ring segment-table size. */
#else /* Word 0 - Little Endian */
        uint32_t erstsz                : 16; /**< [ 15:  0](R/W) Event-ring segment-table size. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_erstszx_s cn; */
};
typedef union cavm_usbhx_uahc_erstszx cavm_usbhx_uahc_erstszx_t;

static inline uint64_t CAVM_USBHX_UAHC_ERSTSZX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_ERSTSZX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b==0)))
        return 0x868000001028ll + 0x1000000000ll * ((a) & 0x1) + 0ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b==0)))
        return 0x868000001028ll + 0x1000000000ll * ((a) & 0x1) + 0ll * ((b) & 0x0);
    __cavm_csr_fatal("USBHX_UAHC_ERSTSZX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_ERSTSZX(a,b) cavm_usbhx_uahc_erstszx_t
#define bustype_CAVM_USBHX_UAHC_ERSTSZX(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_ERSTSZX(a,b) "USBHX_UAHC_ERSTSZX"
#define device_bar_CAVM_USBHX_UAHC_ERSTSZX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_ERSTSZX(a,b) (a)
#define arguments_CAVM_USBHX_UAHC_ERSTSZX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) usbh#_uahc_gbuserraddr
 *
 * USB UAHC Bus-Error-Address Register
 * When the AXI master bus returns error response, the SoC bus error is generated. In the host
 * mode, the host_system_err port indicates this condition. In addition, it is also indicated in
 * USBH()_UAHC_USBSTS[HSE]. Due to the nature of AXI, it is possible that multiple AXI
 * transactions
 * are active at a time. The host controller does not keep track of the start address of all
 * outstanding transactions. Instead, it keeps track of the start address of the DMA transfer
 * associated with all active transactions. It is this address that is reported in
 * USBH()_UAHC_GBUSERRADDR when a bus error occurs. For example, if the host controller
 * initiates
 * a DMA
 * transfer to write 1k of packet data starting at buffer address 0xABCD0000, and this DMA is
 * broken up into multiple 256B bursts on the AXI, then if a bus error occurs on any of these
 * associated AXI transfers, USBH()_UAHC_GBUSERRADDR reflects the DMA start address of
 * 0xABCD0000
 * regardless of which AXI transaction received the error.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_gbuserraddr
{
    uint64_t u;
    struct cavm_usbhx_uahc_gbuserraddr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t buserraddr            : 64; /**< [ 63:  0](RO/H) Bus address - Low (BusAddrLo). Contains the first bus address that encountered
                                                                 an SoC bus error. It is valid
                                                                 when the USBH()_UAHC_GSTS[BUSERRADDRVLD] = 1. It can only be cleared by resetting the
                                                                 core. */
#else /* Word 0 - Little Endian */
        uint64_t buserraddr            : 64; /**< [ 63:  0](RO/H) Bus address - Low (BusAddrLo). Contains the first bus address that encountered
                                                                 an SoC bus error. It is valid
                                                                 when the USBH()_UAHC_GSTS[BUSERRADDRVLD] = 1. It can only be cleared by resetting the
                                                                 core. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gbuserraddr_s cn; */
};
typedef union cavm_usbhx_uahc_gbuserraddr cavm_usbhx_uahc_gbuserraddr_t;

static inline uint64_t CAVM_USBHX_UAHC_GBUSERRADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GBUSERRADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c130ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c130ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GBUSERRADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GBUSERRADDR(a) cavm_usbhx_uahc_gbuserraddr_t
#define bustype_CAVM_USBHX_UAHC_GBUSERRADDR(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UAHC_GBUSERRADDR(a) "USBHX_UAHC_GBUSERRADDR"
#define device_bar_CAVM_USBHX_UAHC_GBUSERRADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GBUSERRADDR(a) (a)
#define arguments_CAVM_USBHX_UAHC_GBUSERRADDR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gctl
 *
 * USB UAHC Control Register
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_gctl
{
    uint32_t u;
    struct cavm_usbhx_uahc_gctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pwrdnscale            : 13; /**< [ 31: 19](R/W) Power down scale. The USB3 suspend-clock input replaces pipe3_rx_pclk as a clock source to
                                                                 a small part of the USB3 core that operates when the SuperSpeedPlus PHY is in its lowest power
                                                                 (P3) state, and therefore does not provide a clock. This field specifies how many suspend-
                                                                 clock periods fit into a 16 kHz clock period. When performing the division, round up the
                                                                 remainder.

                                                                 For example, when using an 32-bit PHY and 25-MHz suspend clock, PWRDNSCALE = 25000 kHz/16
                                                                 kHz = 1563 (rounded up).

                                                                 The minimum suspend-clock frequency is 32 KHz, and maximum suspend-clock frequency is 125
                                                                 MHz.

                                                                 The LTSSM uses suspend clock for 12-ms and 100-ms timers during suspend mode. According to
                                                                 the USB 3.1 specification, the accuracy on these timers is 0% to +50%. 12 ms + 0~+50%
                                                                 accuracy = 18 ms (Range is 12 ms - 18 ms)
                                                                 100 ms + 0~+50% accuracy = 150 ms (Range is 100 ms - 150 ms).

                                                                 The suspend clock accuracy requirement is:
                                                                 _ (12,000/62.5) * (GCTL[31:19]) * actual suspend_clk_period should be between 12,000 and
                                                                 18,000
                                                                 _ (100,000/62.5) * (GCTL[31:19]) * actual suspend_clk_period should be between 100,000 and
                                                                 150,000

                                                                 For example, if your suspend_clk frequency varies from 7.5 MHz to 10.5 MHz, then the value
                                                                 needs to programmed is: power down scale = 10500/16 = 657 (rounded up; and fastest
                                                                 frequency used). */
        uint32_t masterfiltbypass      : 1;  /**< [ 18: 18](R/W) Master filter bypass. Not relevant for Marvell's configuration. */
        uint32_t bypssetaddr           : 1;  /**< [ 17: 17](R/W) Bypass SetAddress in device mode Always set to 0. */
        uint32_t u2rstecn              : 1;  /**< [ 16: 16](R/W) If the SuperSpeedPlus connection fails during POLL or LMP exchange, the device connects
                                                                 at non-SuperSpeedPlus mode. If this bit is set, then the device attempts three more times to
                                                                 connect at SuperSpeedPlus, even if it previously failed to operate in SuperSpeedPlus mode.
                                                                 This bit is only applicable in device mode. */
        uint32_t frmscldwn             : 2;  /**< [ 15: 14](R/W) Frame scale down. Scales down device view of a SOF/USOF/ITP duration.
                                                                 For ESS/HS mode:
                                                                 0x0 = Interval is 125 us.
                                                                 0x1 = Interval is 62.5 us.
                                                                 0x2 = Interval is 31.25 us.
                                                                 0x3 = Interval is 15.625 us.

                                                                 For full speed mode, the scale down value is multiplied by 8. */
        uint32_t prtcapdir             : 2;  /**< [ 13: 12](R/W) 0x1 = for Host configurations.
                                                                 0x2 = for Device configurations. */
        uint32_t coresoftreset         : 1;  /**< [ 11: 11](R/W) Core soft reset: 1 = soft reset to core, 0 = no soft reset.
                                                                 Clears the interrupts and all the USBH()_UAHC_* CSRs except the
                                                                 following registers: USBH()_UAHC_GCTL, USBH()_UAHC_GUCTL, USBH()_UAHC_GSTS,
                                                                 USBH()_UAHC_GRLSID, USBH()_UAHC_GGPIO, USBH()_UAHC_GUID,
                                                                 USBH()_UAHC_GUSB2PHYCFG(),
                                                                 USBH()_UAHC_GUSB3PIPECTL().

                                                                 When you reset PHYs (using USBH()_UAHC_GUSB2PHYCFG() or
                                                                 USBH()_UAHC_GUSB3PIPECTL()), you must keep the core in reset state until PHY
                                                                 clocks are stable. This controls the bus, RAM, and MAC domain resets. */
        uint32_t reserved_10           : 1;
        uint32_t u1u2timerscale        : 1;  /**< [  9:  9](R/W) Disable U1/U2 timer scaledown. If set to 1, along with SCALEDOWN = 0x1, disables the scale
                                                                 down of U1/U2 inactive timer values.
                                                                 This is for simulation mode only. */
        uint32_t debugattach           : 1;  /**< [  8:  8](R/W) Debug attach. When this bit is set:
                                                                 * SuperSpeedPlus link proceeds directly to the polling-link state (USBH()_UAHC_DCTL[RS] = 1)
                                                                 without checking remote termination.
                                                                 * Link LFPS polling timeout is infinite.
                                                                 * Polling timeout during TS1 is infinite (in case link is waiting for TXEQ to finish). */
        uint32_t ramclksel             : 2;  /**< [  7:  6](R/W) RAM clock select. Always keep set to 0x0. */
        uint32_t scaledown             : 2;  /**< [  5:  4](R/W) Scale-down mode. When scale-down mode is enabled for simulation, the core uses scaled-down
                                                                 timing values, resulting in faster simulations. When scale-down mode is disabled, actual
                                                                 timing values are used. This is required for hardware operation.

                                                                 High-speed/full-speed/low-speed modes:
                                                                 0x0 = Disables all scale-downs. Actual timing values are used.
                                                                 0x1 = Enables scale-down of all timing values. These include:
                                                                 * Speed enumeration.
                                                                 * HNP/SRP.
                                                                 * Suspend and resume.

                                                                 0x2 = N/A
                                                                 0x3 = Enables bits \<0\> and \<1\> scale-down timing values.

                                                                 SuperSpeedPlus mode:
                                                                 0x0 = Disables all scale-downs. Actual timing values are used.
                                                                 0x1 = Enables scaled down SuperSpeedPlus timing and repeat values including:
                                                                 * Number of TxEq training sequences reduce to eight.
                                                                 * LFPS polling burst time reduce to 100 ns.
                                                                 * LFPS warm reset receive reduce to 30 us. */
        uint32_t disscramble           : 1;  /**< [  3:  3](R/W) Disable scrambling. Transmit request to link partner on next transition to recovery or polling. */
        uint32_t u2exit_lfps           : 1;  /**< [  2:  2](R/W) LFPS U2 exit.
                                                                 0 = The link treats 248 ns LFPS as a valid U2 exit.
                                                                 1 = The link waits for 8 us of LFPS before it detects a valid U2 exit.

                                                                 This bit is added to improve interoperability with a third party host controller. This
                                                                 host controller in U2 state while performing receiver detection generates an LFPS glitch
                                                                 of about 4s duration. This causes the device to exit from U2 state because the LFPS filter
                                                                 value is 248 ns. With the new functionality enabled, the device can stay in U2 while
                                                                 ignoring this glitch from the host controller. */
        uint32_t gblhibernationen      : 1;  /**< [  1:  1](RO) This bit enables hibernation at the global level. */
        uint32_t dsblclkgtng           : 1;  /**< [  0:  0](R/W) Disable clock gating. When set to 1 and the core is in low power mode, internal clock
                                                                 gating is disabled, which means the clocks are always running. This bit can be set to 1
                                                                 after power-up reset. */
#else /* Word 0 - Little Endian */
        uint32_t dsblclkgtng           : 1;  /**< [  0:  0](R/W) Disable clock gating. When set to 1 and the core is in low power mode, internal clock
                                                                 gating is disabled, which means the clocks are always running. This bit can be set to 1
                                                                 after power-up reset. */
        uint32_t gblhibernationen      : 1;  /**< [  1:  1](RO) This bit enables hibernation at the global level. */
        uint32_t u2exit_lfps           : 1;  /**< [  2:  2](R/W) LFPS U2 exit.
                                                                 0 = The link treats 248 ns LFPS as a valid U2 exit.
                                                                 1 = The link waits for 8 us of LFPS before it detects a valid U2 exit.

                                                                 This bit is added to improve interoperability with a third party host controller. This
                                                                 host controller in U2 state while performing receiver detection generates an LFPS glitch
                                                                 of about 4s duration. This causes the device to exit from U2 state because the LFPS filter
                                                                 value is 248 ns. With the new functionality enabled, the device can stay in U2 while
                                                                 ignoring this glitch from the host controller. */
        uint32_t disscramble           : 1;  /**< [  3:  3](R/W) Disable scrambling. Transmit request to link partner on next transition to recovery or polling. */
        uint32_t scaledown             : 2;  /**< [  5:  4](R/W) Scale-down mode. When scale-down mode is enabled for simulation, the core uses scaled-down
                                                                 timing values, resulting in faster simulations. When scale-down mode is disabled, actual
                                                                 timing values are used. This is required for hardware operation.

                                                                 High-speed/full-speed/low-speed modes:
                                                                 0x0 = Disables all scale-downs. Actual timing values are used.
                                                                 0x1 = Enables scale-down of all timing values. These include:
                                                                 * Speed enumeration.
                                                                 * HNP/SRP.
                                                                 * Suspend and resume.

                                                                 0x2 = N/A
                                                                 0x3 = Enables bits \<0\> and \<1\> scale-down timing values.

                                                                 SuperSpeedPlus mode:
                                                                 0x0 = Disables all scale-downs. Actual timing values are used.
                                                                 0x1 = Enables scaled down SuperSpeedPlus timing and repeat values including:
                                                                 * Number of TxEq training sequences reduce to eight.
                                                                 * LFPS polling burst time reduce to 100 ns.
                                                                 * LFPS warm reset receive reduce to 30 us. */
        uint32_t ramclksel             : 2;  /**< [  7:  6](R/W) RAM clock select. Always keep set to 0x0. */
        uint32_t debugattach           : 1;  /**< [  8:  8](R/W) Debug attach. When this bit is set:
                                                                 * SuperSpeedPlus link proceeds directly to the polling-link state (USBH()_UAHC_DCTL[RS] = 1)
                                                                 without checking remote termination.
                                                                 * Link LFPS polling timeout is infinite.
                                                                 * Polling timeout during TS1 is infinite (in case link is waiting for TXEQ to finish). */
        uint32_t u1u2timerscale        : 1;  /**< [  9:  9](R/W) Disable U1/U2 timer scaledown. If set to 1, along with SCALEDOWN = 0x1, disables the scale
                                                                 down of U1/U2 inactive timer values.
                                                                 This is for simulation mode only. */
        uint32_t reserved_10           : 1;
        uint32_t coresoftreset         : 1;  /**< [ 11: 11](R/W) Core soft reset: 1 = soft reset to core, 0 = no soft reset.
                                                                 Clears the interrupts and all the USBH()_UAHC_* CSRs except the
                                                                 following registers: USBH()_UAHC_GCTL, USBH()_UAHC_GUCTL, USBH()_UAHC_GSTS,
                                                                 USBH()_UAHC_GRLSID, USBH()_UAHC_GGPIO, USBH()_UAHC_GUID,
                                                                 USBH()_UAHC_GUSB2PHYCFG(),
                                                                 USBH()_UAHC_GUSB3PIPECTL().

                                                                 When you reset PHYs (using USBH()_UAHC_GUSB2PHYCFG() or
                                                                 USBH()_UAHC_GUSB3PIPECTL()), you must keep the core in reset state until PHY
                                                                 clocks are stable. This controls the bus, RAM, and MAC domain resets. */
        uint32_t prtcapdir             : 2;  /**< [ 13: 12](R/W) 0x1 = for Host configurations.
                                                                 0x2 = for Device configurations. */
        uint32_t frmscldwn             : 2;  /**< [ 15: 14](R/W) Frame scale down. Scales down device view of a SOF/USOF/ITP duration.
                                                                 For ESS/HS mode:
                                                                 0x0 = Interval is 125 us.
                                                                 0x1 = Interval is 62.5 us.
                                                                 0x2 = Interval is 31.25 us.
                                                                 0x3 = Interval is 15.625 us.

                                                                 For full speed mode, the scale down value is multiplied by 8. */
        uint32_t u2rstecn              : 1;  /**< [ 16: 16](R/W) If the SuperSpeedPlus connection fails during POLL or LMP exchange, the device connects
                                                                 at non-SuperSpeedPlus mode. If this bit is set, then the device attempts three more times to
                                                                 connect at SuperSpeedPlus, even if it previously failed to operate in SuperSpeedPlus mode.
                                                                 This bit is only applicable in device mode. */
        uint32_t bypssetaddr           : 1;  /**< [ 17: 17](R/W) Bypass SetAddress in device mode Always set to 0. */
        uint32_t masterfiltbypass      : 1;  /**< [ 18: 18](R/W) Master filter bypass. Not relevant for Marvell's configuration. */
        uint32_t pwrdnscale            : 13; /**< [ 31: 19](R/W) Power down scale. The USB3 suspend-clock input replaces pipe3_rx_pclk as a clock source to
                                                                 a small part of the USB3 core that operates when the SuperSpeedPlus PHY is in its lowest power
                                                                 (P3) state, and therefore does not provide a clock. This field specifies how many suspend-
                                                                 clock periods fit into a 16 kHz clock period. When performing the division, round up the
                                                                 remainder.

                                                                 For example, when using an 32-bit PHY and 25-MHz suspend clock, PWRDNSCALE = 25000 kHz/16
                                                                 kHz = 1563 (rounded up).

                                                                 The minimum suspend-clock frequency is 32 KHz, and maximum suspend-clock frequency is 125
                                                                 MHz.

                                                                 The LTSSM uses suspend clock for 12-ms and 100-ms timers during suspend mode. According to
                                                                 the USB 3.1 specification, the accuracy on these timers is 0% to +50%. 12 ms + 0~+50%
                                                                 accuracy = 18 ms (Range is 12 ms - 18 ms)
                                                                 100 ms + 0~+50% accuracy = 150 ms (Range is 100 ms - 150 ms).

                                                                 The suspend clock accuracy requirement is:
                                                                 _ (12,000/62.5) * (GCTL[31:19]) * actual suspend_clk_period should be between 12,000 and
                                                                 18,000
                                                                 _ (100,000/62.5) * (GCTL[31:19]) * actual suspend_clk_period should be between 100,000 and
                                                                 150,000

                                                                 For example, if your suspend_clk frequency varies from 7.5 MHz to 10.5 MHz, then the value
                                                                 needs to programmed is: power down scale = 10500/16 = 657 (rounded up; and fastest
                                                                 frequency used). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gctl_s cn; */
};
typedef union cavm_usbhx_uahc_gctl cavm_usbhx_uahc_gctl_t;

static inline uint64_t CAVM_USBHX_UAHC_GCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GCTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c110ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c110ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GCTL(a) cavm_usbhx_uahc_gctl_t
#define bustype_CAVM_USBHX_UAHC_GCTL(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GCTL(a) "USBHX_UAHC_GCTL"
#define device_bar_CAVM_USBHX_UAHC_GCTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GCTL(a) (a)
#define arguments_CAVM_USBHX_UAHC_GCTL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gdbgbmu
 *
 * USB UAHC BMU Debug Register
 * See description in USBH()_UAHC_GDBGFIFOSPACE.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_gdbgbmu
{
    uint32_t u;
    struct cavm_usbhx_uahc_gdbgbmu_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bmu_bcu_dbg           : 24; /**< [ 31:  8](RO/H) BMU_BCU debug information. */
        uint32_t bmu_dcu_dbg           : 4;  /**< [  7:  4](RO/H) BMU_DCU debug information. */
        uint32_t bmu_ccu_dbg           : 4;  /**< [  3:  0](RO/H) BMU_CCU debug information. */
#else /* Word 0 - Little Endian */
        uint32_t bmu_ccu_dbg           : 4;  /**< [  3:  0](RO/H) BMU_CCU debug information. */
        uint32_t bmu_dcu_dbg           : 4;  /**< [  7:  4](RO/H) BMU_DCU debug information. */
        uint32_t bmu_bcu_dbg           : 24; /**< [ 31:  8](RO/H) BMU_BCU debug information. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gdbgbmu_s cn; */
};
typedef union cavm_usbhx_uahc_gdbgbmu cavm_usbhx_uahc_gdbgbmu_t;

static inline uint64_t CAVM_USBHX_UAHC_GDBGBMU(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GDBGBMU(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c16cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c16cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GDBGBMU", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GDBGBMU(a) cavm_usbhx_uahc_gdbgbmu_t
#define bustype_CAVM_USBHX_UAHC_GDBGBMU(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GDBGBMU(a) "USBHX_UAHC_GDBGBMU"
#define device_bar_CAVM_USBHX_UAHC_GDBGBMU(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GDBGBMU(a) (a)
#define arguments_CAVM_USBHX_UAHC_GDBGBMU(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uahc_gdbgepinfo
 *
 * USB UAHC Endpoint Information Debug Register
 * See description in USBH()_UAHC_GDBGFIFOSPACE.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_gdbgepinfo
{
    uint64_t u;
    struct cavm_usbhx_uahc_gdbgepinfo_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t endpt_dbg             : 64; /**< [ 63:  0](RO/H) Endpoint debug information. */
#else /* Word 0 - Little Endian */
        uint64_t endpt_dbg             : 64; /**< [ 63:  0](RO/H) Endpoint debug information. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gdbgepinfo_s cn; */
};
typedef union cavm_usbhx_uahc_gdbgepinfo cavm_usbhx_uahc_gdbgepinfo_t;

static inline uint64_t CAVM_USBHX_UAHC_GDBGEPINFO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GDBGEPINFO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c178ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c178ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GDBGEPINFO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GDBGEPINFO(a) cavm_usbhx_uahc_gdbgepinfo_t
#define bustype_CAVM_USBHX_UAHC_GDBGEPINFO(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UAHC_GDBGEPINFO(a) "USBHX_UAHC_GDBGEPINFO"
#define device_bar_CAVM_USBHX_UAHC_GDBGEPINFO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GDBGEPINFO(a) (a)
#define arguments_CAVM_USBHX_UAHC_GDBGEPINFO(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gdbgfifospace
 *
 * USB UAHC Debug FIFO Space Available Register
 * This register is for debug purposes. It provides debug information on the internal status and
 * state machines. Global debug registers have design-specific information, and are used by state
 * machines. Global debug registers have design-specific information, and are used for debugging
 * purposes. These registers are not intended to be used by the customer. If any debug assistance
 * is needed for the silicon, contact customer support with a dump of these registers.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_gdbgfifospace
{
    uint32_t u;
    struct cavm_usbhx_uahc_gdbgfifospace_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t spaceavailable        : 16; /**< [ 31: 16](RO/H) Space available in the selected FIFO. */
        uint32_t reserved_9_15         : 7;
        uint32_t select                : 9;  /**< [  8:  0](R/W) FIFO/queue select: \<8:5\> indicates the FIFO/queue type; \<4:0\> indicates the FIFO/queue
                                                                 number.
                                                                 For example, 0x21 refers to RxFIFO_1, and 0x5E refers to TxReqQ_30.
                                                                 0x1F-0x0: TxFIFO_31 to TxFIFO_0.
                                                                 0x3F-0x20: RxFIFO_31 to RxFIFO_0.
                                                                 0x5F-0x40: TxReqQ_31 to TxReqQ_0.
                                                                 0x7F-0x60: RxReqQ_31 to RxReqQ_0.
                                                                 0x9F-0x80: RxInfoQ_31 to RxInfoQ_0.
                                                                 0xA0: DescFetchQ.
                                                                 0xA1: EventQ.
                                                                 0xA2: ProtocolStatusQ.
                                                                 0xDF-0xE0: DescFetchQ_31 to DescFetchQ_0.
                                                                 0xFF-0xE0: WriteBackEventQ_31 to WriteBackEventQ_0.
                                                                 0x107-0x100: AuxEventQ_31 to AuxEventQ_0.

                                                                 Port-select: \<3:0\> selects the port-number when accessing USBH()_UAHC_GDBGLTSSM. */
#else /* Word 0 - Little Endian */
        uint32_t select                : 9;  /**< [  8:  0](R/W) FIFO/queue select: \<8:5\> indicates the FIFO/queue type; \<4:0\> indicates the FIFO/queue
                                                                 number.
                                                                 For example, 0x21 refers to RxFIFO_1, and 0x5E refers to TxReqQ_30.
                                                                 0x1F-0x0: TxFIFO_31 to TxFIFO_0.
                                                                 0x3F-0x20: RxFIFO_31 to RxFIFO_0.
                                                                 0x5F-0x40: TxReqQ_31 to TxReqQ_0.
                                                                 0x7F-0x60: RxReqQ_31 to RxReqQ_0.
                                                                 0x9F-0x80: RxInfoQ_31 to RxInfoQ_0.
                                                                 0xA0: DescFetchQ.
                                                                 0xA1: EventQ.
                                                                 0xA2: ProtocolStatusQ.
                                                                 0xDF-0xE0: DescFetchQ_31 to DescFetchQ_0.
                                                                 0xFF-0xE0: WriteBackEventQ_31 to WriteBackEventQ_0.
                                                                 0x107-0x100: AuxEventQ_31 to AuxEventQ_0.

                                                                 Port-select: \<3:0\> selects the port-number when accessing USBH()_UAHC_GDBGLTSSM. */
        uint32_t reserved_9_15         : 7;
        uint32_t spaceavailable        : 16; /**< [ 31: 16](RO/H) Space available in the selected FIFO. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gdbgfifospace_s cn; */
};
typedef union cavm_usbhx_uahc_gdbgfifospace cavm_usbhx_uahc_gdbgfifospace_t;

static inline uint64_t CAVM_USBHX_UAHC_GDBGFIFOSPACE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GDBGFIFOSPACE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c160ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c160ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GDBGFIFOSPACE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GDBGFIFOSPACE(a) cavm_usbhx_uahc_gdbgfifospace_t
#define bustype_CAVM_USBHX_UAHC_GDBGFIFOSPACE(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GDBGFIFOSPACE(a) "USBHX_UAHC_GDBGFIFOSPACE"
#define device_bar_CAVM_USBHX_UAHC_GDBGFIFOSPACE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GDBGFIFOSPACE(a) (a)
#define arguments_CAVM_USBHX_UAHC_GDBGFIFOSPACE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gdbglnmcc
 *
 * USBH UAHC Gdbglnmcc Register
 * Bit Bash test should not be done on this debug register.
 */
union cavm_usbhx_uahc_gdbglnmcc
{
    uint32_t u;
    struct cavm_usbhx_uahc_gdbglnmcc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lnmcc_lserc           : 16; /**< [ 31: 16](RO/H) This field indicates the value of link soft error counter for the port selected
                                                                 in the GDBGFIFOSPACE.PortSelect field.
                                                                 This field is for debug purposes only. */
        uint32_t reserved_9_15         : 7;
        uint32_t lnmcc_berc            : 9;  /**< [  8:  0](RO/H) This field indicates the bit error rate information for the port selected in the
                                                                 GDBGFIFOSPACE.PortSelect field.
                                                                 This field is for debug purposes only. */
#else /* Word 0 - Little Endian */
        uint32_t lnmcc_berc            : 9;  /**< [  8:  0](RO/H) This field indicates the bit error rate information for the port selected in the
                                                                 GDBGFIFOSPACE.PortSelect field.
                                                                 This field is for debug purposes only. */
        uint32_t reserved_9_15         : 7;
        uint32_t lnmcc_lserc           : 16; /**< [ 31: 16](RO/H) This field indicates the value of link soft error counter for the port selected
                                                                 in the GDBGFIFOSPACE.PortSelect field.
                                                                 This field is for debug purposes only. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gdbglnmcc_s cn; */
};
typedef union cavm_usbhx_uahc_gdbglnmcc cavm_usbhx_uahc_gdbglnmcc_t;

static inline uint64_t CAVM_USBHX_UAHC_GDBGLNMCC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GDBGLNMCC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d054ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d054ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GDBGLNMCC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GDBGLNMCC(a) cavm_usbhx_uahc_gdbglnmcc_t
#define bustype_CAVM_USBHX_UAHC_GDBGLNMCC(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GDBGLNMCC(a) "USBHX_UAHC_GDBGLNMCC"
#define device_bar_CAVM_USBHX_UAHC_GDBGLNMCC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GDBGLNMCC(a) (a)
#define arguments_CAVM_USBHX_UAHC_GDBGLNMCC(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gdbglsp
 *
 * USB UAHC LSP Debug Register
 * See description in USBH()_UAHC_GDBGFIFOSPACE.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_gdbglsp
{
    uint32_t u;
    struct cavm_usbhx_uahc_gdbglsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lsp_dbg               : 32; /**< [ 31:  0](RO/H) LSP debug information. */
#else /* Word 0 - Little Endian */
        uint32_t lsp_dbg               : 32; /**< [ 31:  0](RO/H) LSP debug information. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gdbglsp_s cn; */
};
typedef union cavm_usbhx_uahc_gdbglsp cavm_usbhx_uahc_gdbglsp_t;

static inline uint64_t CAVM_USBHX_UAHC_GDBGLSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GDBGLSP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c174ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c174ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GDBGLSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GDBGLSP(a) cavm_usbhx_uahc_gdbglsp_t
#define bustype_CAVM_USBHX_UAHC_GDBGLSP(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GDBGLSP(a) "USBHX_UAHC_GDBGLSP"
#define device_bar_CAVM_USBHX_UAHC_GDBGLSP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GDBGLSP(a) (a)
#define arguments_CAVM_USBHX_UAHC_GDBGLSP(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gdbglspmux
 *
 * USB UAHC LSP Multiplexer Debug Register
 * See description in USBH()_UAHC_GDBGFIFOSPACE.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_gdbglspmux
{
    uint32_t u;
    struct cavm_usbhx_uahc_gdbglspmux_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t latraceportmuxselect  : 8;  /**< [ 23: 16](R/W) logic_analyzer_trace port multiplexer select. Only bits\<21:16\> are used. For details on
                                                                 how the mux controls the debug traces, refer to the Verilog file.
                                                                 A value of 0x3F drives 0s on the logic_analyzer_trace signal. If you plan to OR (instead
                                                                 using a mux) this signal with other trace signals in your system to generate a common
                                                                 trace signal, you can use this feature. */
        uint32_t reserved_15           : 1;
        uint32_t lspselect             : 15; /**< [ 14:  0](R/W) In host mode:
                                                                  - [14:0] - Selects the LSP debug information presented in the GDBGLSP register.

                                                                 In device mode:
                                                                  - [3:0] - Device Endpoint Select (EPSELECT)

                                                                 Selects the Endpoint debug information presented in the GDBGEPINFO registers in device mode
                                                                  - [7:4] - Device LSP Select (DEVSELECT)

                                                                 Selects the LSP debug information presented in the GDBGLSP register
                                                                  - [14:8] - Host LSP Select

                                                                 Selects the LSP debug information presented in the GDBGLSP register */
#else /* Word 0 - Little Endian */
        uint32_t lspselect             : 15; /**< [ 14:  0](R/W) In host mode:
                                                                  - [14:0] - Selects the LSP debug information presented in the GDBGLSP register.

                                                                 In device mode:
                                                                  - [3:0] - Device Endpoint Select (EPSELECT)

                                                                 Selects the Endpoint debug information presented in the GDBGEPINFO registers in device mode
                                                                  - [7:4] - Device LSP Select (DEVSELECT)

                                                                 Selects the LSP debug information presented in the GDBGLSP register
                                                                  - [14:8] - Host LSP Select

                                                                 Selects the LSP debug information presented in the GDBGLSP register */
        uint32_t reserved_15           : 1;
        uint32_t latraceportmuxselect  : 8;  /**< [ 23: 16](R/W) logic_analyzer_trace port multiplexer select. Only bits\<21:16\> are used. For details on
                                                                 how the mux controls the debug traces, refer to the Verilog file.
                                                                 A value of 0x3F drives 0s on the logic_analyzer_trace signal. If you plan to OR (instead
                                                                 using a mux) this signal with other trace signals in your system to generate a common
                                                                 trace signal, you can use this feature. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gdbglspmux_s cn; */
};
typedef union cavm_usbhx_uahc_gdbglspmux cavm_usbhx_uahc_gdbglspmux_t;

static inline uint64_t CAVM_USBHX_UAHC_GDBGLSPMUX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GDBGLSPMUX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c170ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c170ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GDBGLSPMUX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GDBGLSPMUX(a) cavm_usbhx_uahc_gdbglspmux_t
#define bustype_CAVM_USBHX_UAHC_GDBGLSPMUX(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GDBGLSPMUX(a) "USBHX_UAHC_GDBGLSPMUX"
#define device_bar_CAVM_USBHX_UAHC_GDBGLSPMUX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GDBGLSPMUX(a) (a)
#define arguments_CAVM_USBHX_UAHC_GDBGLSPMUX(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gdbgltssm
 *
 * USBH UAHC Gdbgltssm Register
 * In multiport host configuration, the port number is defined by
 * USBH()_UAHC_GDBGFIFOSPACE[SELECT]\<3:0\>. Value of this register may change immediately after
 * reset.
 * See description in USBH()_UAHC_GDBGFIFOSPACE.
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 * Global Debug LTSSM Register
 * Note: GDBGLTSSM register is not applicable for USB 2.0-only mode.
 * Bit Bash test should not be done on this debug register.
 */
union cavm_usbhx_uahc_gdbgltssm
{
    uint32_t u;
    struct cavm_usbhx_uahc_gdbgltssm_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t rxelecidle            : 1;  /**< [ 30: 30](RO/H) For description of RxElecIdle, see table 5-4, "Status Interface Signals" of the
                                                                 PIPE4 Specification. */
        uint32_t reserved_27_29        : 3;
        uint32_t ltdbtimeout           : 1;  /**< [ 26: 26](RO/H) LTDB Timeout (LTDBTimeout) */
        uint32_t ltdblinkstate         : 4;  /**< [ 25: 22](RO/H) LTDB Link State (LTDBLinkState) */
        uint32_t ltdbsubstate          : 4;  /**< [ 21: 18](RO/H) LTDB Sub-State (LTDBSubState) */
        uint32_t elasticbuffermode     : 1;  /**< [ 17: 17](RO/H) For field definition, refer to Table 5-3 of the PIPE specification. */
        uint32_t txelecldle            : 1;  /**< [ 16: 16](RO/H) For field definition, refer to Table 5-3 of the PIPE specification. */
        uint32_t rxpolarity            : 1;  /**< [ 15: 15](RO/H) For field definition, refer to Table 5-3 of the PIPE specification. */
        uint32_t txdetrxloopback       : 1;  /**< [ 14: 14](RO/H) For field definition, refer to Table 5-3 of the PIPE specification. */
        uint32_t ltdbphycmdstate       : 3;  /**< [ 13: 11](RO/H) LTSSM PHY command State (LTDBPhyCmdState)
                                                                  - 000: PHY_IDLE (PHY command state is in IDLE. No PHY request pending)
                                                                  - 001: PHY_DET (Request to start Receiver detection)
                                                                  - 010: PHY_DET_3 (Wait for Phy_Status (Receiver detection))
                                                                  - 011: PHY_PWR_DLY (Delay Pipe3_PowerDown P0 -\> P1/P2/P3 request)
                                                                  - 100: PHY_PWR_A (Delay for internal logic)
                                                                  - 101: PHY_PWR_B (Wait for Phy_Status(Power state change request)) */
        uint32_t powerdown             : 2;  /**< [ 10:  9](RO/H) For field definition, refer to Table 5-3 of the PIPE Specification. */
        uint32_t rxeqtrain             : 1;  /**< [  8:  8](RO/H) For field definition, refer to Table 5-3 of the PIPE Specification. */
        uint32_t txdeemphasis          : 2;  /**< [  7:  6](RO/H) For field definition, refer to Table 5-3 of the PIPE Specification. */
        uint32_t ltdbclkstate          : 3;  /**< [  5:  3](RO/H) In multi-port host configuration, the port number is defined by Port-Select[3:0]
                                                                 field in the GDBGFIFOSPACE register.  Note: GDBGLTSSM register is not applicable
                                                                 for USB 2.0-only mode.
                                                                  - 000: CLK_NORM (PHY is in non-P3 state and PCLK is running)
                                                                  - 001: CLK_TO_P3 (P3 entry request to PHY);
                                                                  - 010: CLK_WAIT1 (Wait for Phy_Status (P3 request));
                                                                  - 011: CLK_P3 (PHY is in P3 and PCLK is not running);
                                                                  - 100: CLK_TO_P0 (P3 exit request to PHY);
                                                                  - 101: CLK_WAIT2 (Wait for Phy_Status (P3 exit request)) */
        uint32_t txswing               : 1;  /**< [  2:  2](RO/H) For field definition, refer to Table 5-3 of the PIPE Specification. */
        uint32_t rxtermination         : 1;  /**< [  1:  1](RO/H) For details on DWC_USB31_PIPE_RXTERM_RESET_VAL, refer to \<workspace\>/src/DWC_usb31_params.svh */
        uint32_t txoneszeros           : 1;  /**< [  0:  0](RO/H) For field definition, refer to Table 5-3 of the PIPE Specification. */
#else /* Word 0 - Little Endian */
        uint32_t txoneszeros           : 1;  /**< [  0:  0](RO/H) For field definition, refer to Table 5-3 of the PIPE Specification. */
        uint32_t rxtermination         : 1;  /**< [  1:  1](RO/H) For details on DWC_USB31_PIPE_RXTERM_RESET_VAL, refer to \<workspace\>/src/DWC_usb31_params.svh */
        uint32_t txswing               : 1;  /**< [  2:  2](RO/H) For field definition, refer to Table 5-3 of the PIPE Specification. */
        uint32_t ltdbclkstate          : 3;  /**< [  5:  3](RO/H) In multi-port host configuration, the port number is defined by Port-Select[3:0]
                                                                 field in the GDBGFIFOSPACE register.  Note: GDBGLTSSM register is not applicable
                                                                 for USB 2.0-only mode.
                                                                  - 000: CLK_NORM (PHY is in non-P3 state and PCLK is running)
                                                                  - 001: CLK_TO_P3 (P3 entry request to PHY);
                                                                  - 010: CLK_WAIT1 (Wait for Phy_Status (P3 request));
                                                                  - 011: CLK_P3 (PHY is in P3 and PCLK is not running);
                                                                  - 100: CLK_TO_P0 (P3 exit request to PHY);
                                                                  - 101: CLK_WAIT2 (Wait for Phy_Status (P3 exit request)) */
        uint32_t txdeemphasis          : 2;  /**< [  7:  6](RO/H) For field definition, refer to Table 5-3 of the PIPE Specification. */
        uint32_t rxeqtrain             : 1;  /**< [  8:  8](RO/H) For field definition, refer to Table 5-3 of the PIPE Specification. */
        uint32_t powerdown             : 2;  /**< [ 10:  9](RO/H) For field definition, refer to Table 5-3 of the PIPE Specification. */
        uint32_t ltdbphycmdstate       : 3;  /**< [ 13: 11](RO/H) LTSSM PHY command State (LTDBPhyCmdState)
                                                                  - 000: PHY_IDLE (PHY command state is in IDLE. No PHY request pending)
                                                                  - 001: PHY_DET (Request to start Receiver detection)
                                                                  - 010: PHY_DET_3 (Wait for Phy_Status (Receiver detection))
                                                                  - 011: PHY_PWR_DLY (Delay Pipe3_PowerDown P0 -\> P1/P2/P3 request)
                                                                  - 100: PHY_PWR_A (Delay for internal logic)
                                                                  - 101: PHY_PWR_B (Wait for Phy_Status(Power state change request)) */
        uint32_t txdetrxloopback       : 1;  /**< [ 14: 14](RO/H) For field definition, refer to Table 5-3 of the PIPE specification. */
        uint32_t rxpolarity            : 1;  /**< [ 15: 15](RO/H) For field definition, refer to Table 5-3 of the PIPE specification. */
        uint32_t txelecldle            : 1;  /**< [ 16: 16](RO/H) For field definition, refer to Table 5-3 of the PIPE specification. */
        uint32_t elasticbuffermode     : 1;  /**< [ 17: 17](RO/H) For field definition, refer to Table 5-3 of the PIPE specification. */
        uint32_t ltdbsubstate          : 4;  /**< [ 21: 18](RO/H) LTDB Sub-State (LTDBSubState) */
        uint32_t ltdblinkstate         : 4;  /**< [ 25: 22](RO/H) LTDB Link State (LTDBLinkState) */
        uint32_t ltdbtimeout           : 1;  /**< [ 26: 26](RO/H) LTDB Timeout (LTDBTimeout) */
        uint32_t reserved_27_29        : 3;
        uint32_t rxelecidle            : 1;  /**< [ 30: 30](RO/H) For description of RxElecIdle, see table 5-4, "Status Interface Signals" of the
                                                                 PIPE4 Specification. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gdbgltssm_s cn; */
};
typedef union cavm_usbhx_uahc_gdbgltssm cavm_usbhx_uahc_gdbgltssm_t;

static inline uint64_t CAVM_USBHX_UAHC_GDBGLTSSM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GDBGLTSSM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d050ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d050ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GDBGLTSSM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GDBGLTSSM(a) cavm_usbhx_uahc_gdbgltssm_t
#define bustype_CAVM_USBHX_UAHC_GDBGLTSSM(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GDBGLTSSM(a) "USBHX_UAHC_GDBGLTSSM"
#define device_bar_CAVM_USBHX_UAHC_GDBGLTSSM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GDBGLTSSM(a) (a)
#define arguments_CAVM_USBHX_UAHC_GDBGLTSSM(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gdbmuctl
 *
 * USB UAHC Gbmuctl Register
 * Global BMU Control Register
 */
union cavm_usbhx_uahc_gdbmuctl
{
    uint32_t u;
    struct cavm_usbhx_uahc_gdbmuctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t separate_psq_en       : 1;  /**< [  5:  5](R/W) When DWC_USB31_EN_SEPARATE_PSQ_PER_DIR is enabled Separate internal process
                                                                 queue and state machine per direction is enabled
                                                                  0- BMU will ignore the plr_msg_type[PSQ_DIR] bit for
                                                                 all message types and pushes the messages to single PSQ to retain the legacy
                                                                 mode of operation.
                                                                  1- BMU will process the plr_msg_type[PSQ_DIR] bit and
                                                                 pushes the messages to separate PSQ based on direction including special
                                                                 handling of control endpoint messages. */
        uint32_t reserved_3_4          : 2;
        uint32_t axi_storder_en        : 1;  /**< [  2:  2](R/W) When DWC_USB31_AXI_STRICT_ORDER_EN parameter is enabled, both descriptor and
                                                                 data RxDMAs should be configured to use non-posted commands. For a given BI,
                                                                 descriptor/event RxDMA won't be issued until the previous issued data RxDMA is
                                                                 completed on the bus */
        uint32_t active_id_en          : 1;  /**< [  1:  1](R/W) Active Id enabled */
        uint32_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0            : 1;
        uint32_t active_id_en          : 1;  /**< [  1:  1](R/W) Active Id enabled */
        uint32_t axi_storder_en        : 1;  /**< [  2:  2](R/W) When DWC_USB31_AXI_STRICT_ORDER_EN parameter is enabled, both descriptor and
                                                                 data RxDMAs should be configured to use non-posted commands. For a given BI,
                                                                 descriptor/event RxDMA won't be issued until the previous issued data RxDMA is
                                                                 completed on the bus */
        uint32_t reserved_3_4          : 2;
        uint32_t separate_psq_en       : 1;  /**< [  5:  5](R/W) When DWC_USB31_EN_SEPARATE_PSQ_PER_DIR is enabled Separate internal process
                                                                 queue and state machine per direction is enabled
                                                                  0- BMU will ignore the plr_msg_type[PSQ_DIR] bit for
                                                                 all message types and pushes the messages to single PSQ to retain the legacy
                                                                 mode of operation.
                                                                  1- BMU will process the plr_msg_type[PSQ_DIR] bit and
                                                                 pushes the messages to separate PSQ based on direction including special
                                                                 handling of control endpoint messages. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    struct cavm_usbhx_uahc_gdbmuctl_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t reserved_6_15         : 10;
        uint32_t separate_psq_en       : 1;  /**< [  5:  5](R/W) When DWC_USB31_EN_SEPARATE_PSQ_PER_DIR is enabled Separate internal process
                                                                 queue and state machine per direction is enabled
                                                                  0- BMU will ignore the plr_msg_type[PSQ_DIR] bit for
                                                                 all message types and pushes the messages to single PSQ to retain the legacy
                                                                 mode of operation.
                                                                  1- BMU will process the plr_msg_type[PSQ_DIR] bit and
                                                                 pushes the messages to separate PSQ based on direction including special
                                                                 handling of control endpoint messages. */
        uint32_t reserved_3_4          : 2;
        uint32_t axi_storder_en        : 1;  /**< [  2:  2](R/W) When DWC_USB31_AXI_STRICT_ORDER_EN parameter is enabled, both descriptor and
                                                                 data RxDMAs should be configured to use non-posted commands. For a given BI,
                                                                 descriptor/event RxDMA won't be issued until the previous issued data RxDMA is
                                                                 completed on the bus */
        uint32_t active_id_en          : 1;  /**< [  1:  1](R/W) Active Id enabled */
        uint32_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0            : 1;
        uint32_t active_id_en          : 1;  /**< [  1:  1](R/W) Active Id enabled */
        uint32_t axi_storder_en        : 1;  /**< [  2:  2](R/W) When DWC_USB31_AXI_STRICT_ORDER_EN parameter is enabled, both descriptor and
                                                                 data RxDMAs should be configured to use non-posted commands. For a given BI,
                                                                 descriptor/event RxDMA won't be issued until the previous issued data RxDMA is
                                                                 completed on the bus */
        uint32_t reserved_3_4          : 2;
        uint32_t separate_psq_en       : 1;  /**< [  5:  5](R/W) When DWC_USB31_EN_SEPARATE_PSQ_PER_DIR is enabled Separate internal process
                                                                 queue and state machine per direction is enabled
                                                                  0- BMU will ignore the plr_msg_type[PSQ_DIR] bit for
                                                                 all message types and pushes the messages to single PSQ to retain the legacy
                                                                 mode of operation.
                                                                  1- BMU will process the plr_msg_type[PSQ_DIR] bit and
                                                                 pushes the messages to separate PSQ based on direction including special
                                                                 handling of control endpoint messages. */
        uint32_t reserved_6_15         : 10;
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_usbhx_uahc_gdbmuctl cavm_usbhx_uahc_gdbmuctl_t;

static inline uint64_t CAVM_USBHX_UAHC_GDBMUCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GDBMUCTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c164ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c164ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GDBMUCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GDBMUCTL(a) cavm_usbhx_uahc_gdbmuctl_t
#define bustype_CAVM_USBHX_UAHC_GDBMUCTL(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GDBMUCTL(a) "USBHX_UAHC_GDBMUCTL"
#define device_bar_CAVM_USBHX_UAHC_GDBMUCTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GDBMUCTL(a) (a)
#define arguments_CAVM_USBHX_UAHC_GDBMUCTL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gdmahlratio
 *
 * USB UAHC DMA High/Low Ratio Register
 * This register specifies the relative priority of the SuperSpeedPlus FIFOs with respect to the
 * high-speed/full-speed/low-speed FIFOs. The DMA arbiter prioritizes the high-speed/full-speed
 * /low-speed round-robin arbiter group every DMA high-low priority ratio grants as indicated in
 * the register separately for TX and RX.
 *
 * To illustrate, consider that all FIFOs are requesting access simultaneously, and the ratio is
 * 4. SuperSpeedPlus gets priority for four packets, high-speed/full-speed/low-speed gets priority
 * for one packet, SuperSpeedPlus gets priority for four packets, high-speed/full-speed/low-speed
 * gets priority for one packet, and so on.
 *
 * If FIFOs from both speed groups are not requesting access simultaneously then:
 * * If SuperSpeedPlus got grants four out of the last four times, then high-speed/full-speed/
 * low-speed get the priority on any future request.
 * * If high-speed/full-speed/low-speed got the grant last time, SuperSpeedPlus gets the priority on
 * the next request.
 *
 * If there is a valid request on either SuperSpeedPlus or high-speed/full-speed/low-speed, a grant
 * is always awarded; there is no idle.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_gdmahlratio
{
    uint32_t u;
    struct cavm_usbhx_uahc_gdmahlratio_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t hstrxfifo_mac         : 5;  /**< [ 28: 24](R/W) RX MAC ESS Priority Count

                                                                  Specifies the Global Host FIFO MAC access Ratio Register's (GDMAHLRATIO) RX
                                                                 SS:HSFSLS Ratio power-on initialization value (bit[28:24]).

                                                                  This register specifies MAC write access count relation between ESS FIFOs vs
                                                                 HS+FSLS FIFOs. Specifically, FIFO access arbiter prioritizes the HS+FSLS FIFOs
                                                                 for one clock after the specified number of write access to the SS FIFOs.

                                                                 Do not change the default value set by coreConsultant for your configuration. */
        uint32_t reserved_21_23        : 3;
        uint32_t hsttxfifo_mac         : 5;  /**< [ 20: 16](R/W) TX MAC ESS Priority Count

                                                                  Specifies the Global Host FIFO MAC access Ratio Register's (GDMAHLRATIO) TX
                                                                 SS:HSFSLS Ratio power-on initialization value (bit[20:16]).

                                                                  This register specifies MAC read access count relation between ESS FIFOs vs
                                                                 HS+FSLS FIFOs. Specifically, FIFO read access arbiter prioritizes the HS+FSLS
                                                                 FIFOs for one clock after the specified number of read access to the SS FIFOs.

                                                                 Do not change the default value set by coreConsultant for your configuration. */
        uint32_t reserved_13_15        : 3;
        uint32_t hstrxfifo_dma         : 5;  /**< [ 12:  8](R/W) RX DMA ESS Priority Count

                                                                  Specifies the Global Host FIFO DMA access Ratio Register's (GDMAHLRATIO) RX
                                                                 SS:HSFSLS Ratio power-on initialization value (bit[12:8]).

                                                                  This register specifies the relative priority of the SS FIFOs vs. the HS+FSLS
                                                                 FIFOs. Specifically, the DMA arbiter prioritizes the HS/FSLS round-robin arbiter
                                                                 group for one packet after the specified number of packet grants to the ESS
                                                                 round-robin arbiter group. For more information, see the "GDMAHLRATIO" section
                                                                 in the \<link:ext\>DWC_usb31_databook:Title,Databook\</link\>.

                                                                  When a standard driver is used, such as the xHCI driver from Microsoft, this
                                                                 register must be initialized to meet system requirements before synthesizing the
                                                                 controller.

                                                                 If you are developing your own xHCI host driver, then this register can be
                                                                 configured by your driver. It is recommended to keep this value as 1 so that
                                                                 HS/FSLS gets same priority as ESS. The HS/FSLS bandwidth requirement is
                                                                 negligible compared to ESS, so keeping this value as 1 ensures USB 2.0 operation
                                                                 is not affected by high bandwidth ESS.
                                                                  - Enabled : (DWC_USB31_MODE == 1 || DWC_USB31_MODE == 2) &&
                                                                 DWC_USB31_MBUS_TYPE!=4 && (DWC_USB31_EN_USB2_ONLY==0) */
        uint32_t reserved_5_7          : 3;
        uint32_t hsttxfifo_dma         : 5;  /**< [  4:  0](R/W) Specifies the Global Host FIFO DMA access Ratio Register's (GDMAHLRATIO) TX
                                                                 SS:HSFSLS Ratio power-on initialization value (bit[4:0]).

                                                                 This register specifies the access weight of the SS FIFOs vs. the HS+FSLS
                                                                 FIFOs. Specifically, the DMA arbiter prioritizes the HS/FSLS round-robin arbiter
                                                                 group for one packet after the specified number of packet grants to the ESS
                                                                 round-robin arbiter group.For more information, see the "GDMAHLRATIO" section.

                                                                 When a standard driver is used, such as the xHCI driver from Microsoft, this
                                                                 register must be initialized to meet system requirements before synthesizing the
                                                                 controller.

                                                                 If you are developing your own xHCI host driver, then this register can be
                                                                 configured by your driver. It is recommended to keep this value as 1 so that
                                                                 HS/FSLS gets same priority as ESS. The HS/FSLS bandwidth requirement is
                                                                 negligible compared to ESS, so keeping this value as 1 ensures USB 2.0 operation
                                                                 is not affected by high bandwidth ESS.
                                                                  -Enabled : (DWC_USB31_MODE == 1 || DWC_USB31_MODE == 2) &&
                                                                 DWC_USB31_MBUS_TYPE!=4 && (DWC_USB31_EN_USB2_ONLY==0) */
#else /* Word 0 - Little Endian */
        uint32_t hsttxfifo_dma         : 5;  /**< [  4:  0](R/W) Specifies the Global Host FIFO DMA access Ratio Register's (GDMAHLRATIO) TX
                                                                 SS:HSFSLS Ratio power-on initialization value (bit[4:0]).

                                                                 This register specifies the access weight of the SS FIFOs vs. the HS+FSLS
                                                                 FIFOs. Specifically, the DMA arbiter prioritizes the HS/FSLS round-robin arbiter
                                                                 group for one packet after the specified number of packet grants to the ESS
                                                                 round-robin arbiter group.For more information, see the "GDMAHLRATIO" section.

                                                                 When a standard driver is used, such as the xHCI driver from Microsoft, this
                                                                 register must be initialized to meet system requirements before synthesizing the
                                                                 controller.

                                                                 If you are developing your own xHCI host driver, then this register can be
                                                                 configured by your driver. It is recommended to keep this value as 1 so that
                                                                 HS/FSLS gets same priority as ESS. The HS/FSLS bandwidth requirement is
                                                                 negligible compared to ESS, so keeping this value as 1 ensures USB 2.0 operation
                                                                 is not affected by high bandwidth ESS.
                                                                  -Enabled : (DWC_USB31_MODE == 1 || DWC_USB31_MODE == 2) &&
                                                                 DWC_USB31_MBUS_TYPE!=4 && (DWC_USB31_EN_USB2_ONLY==0) */
        uint32_t reserved_5_7          : 3;
        uint32_t hstrxfifo_dma         : 5;  /**< [ 12:  8](R/W) RX DMA ESS Priority Count

                                                                  Specifies the Global Host FIFO DMA access Ratio Register's (GDMAHLRATIO) RX
                                                                 SS:HSFSLS Ratio power-on initialization value (bit[12:8]).

                                                                  This register specifies the relative priority of the SS FIFOs vs. the HS+FSLS
                                                                 FIFOs. Specifically, the DMA arbiter prioritizes the HS/FSLS round-robin arbiter
                                                                 group for one packet after the specified number of packet grants to the ESS
                                                                 round-robin arbiter group. For more information, see the "GDMAHLRATIO" section
                                                                 in the \<link:ext\>DWC_usb31_databook:Title,Databook\</link\>.

                                                                  When a standard driver is used, such as the xHCI driver from Microsoft, this
                                                                 register must be initialized to meet system requirements before synthesizing the
                                                                 controller.

                                                                 If you are developing your own xHCI host driver, then this register can be
                                                                 configured by your driver. It is recommended to keep this value as 1 so that
                                                                 HS/FSLS gets same priority as ESS. The HS/FSLS bandwidth requirement is
                                                                 negligible compared to ESS, so keeping this value as 1 ensures USB 2.0 operation
                                                                 is not affected by high bandwidth ESS.
                                                                  - Enabled : (DWC_USB31_MODE == 1 || DWC_USB31_MODE == 2) &&
                                                                 DWC_USB31_MBUS_TYPE!=4 && (DWC_USB31_EN_USB2_ONLY==0) */
        uint32_t reserved_13_15        : 3;
        uint32_t hsttxfifo_mac         : 5;  /**< [ 20: 16](R/W) TX MAC ESS Priority Count

                                                                  Specifies the Global Host FIFO MAC access Ratio Register's (GDMAHLRATIO) TX
                                                                 SS:HSFSLS Ratio power-on initialization value (bit[20:16]).

                                                                  This register specifies MAC read access count relation between ESS FIFOs vs
                                                                 HS+FSLS FIFOs. Specifically, FIFO read access arbiter prioritizes the HS+FSLS
                                                                 FIFOs for one clock after the specified number of read access to the SS FIFOs.

                                                                 Do not change the default value set by coreConsultant for your configuration. */
        uint32_t reserved_21_23        : 3;
        uint32_t hstrxfifo_mac         : 5;  /**< [ 28: 24](R/W) RX MAC ESS Priority Count

                                                                  Specifies the Global Host FIFO MAC access Ratio Register's (GDMAHLRATIO) RX
                                                                 SS:HSFSLS Ratio power-on initialization value (bit[28:24]).

                                                                  This register specifies MAC write access count relation between ESS FIFOs vs
                                                                 HS+FSLS FIFOs. Specifically, FIFO access arbiter prioritizes the HS+FSLS FIFOs
                                                                 for one clock after the specified number of write access to the SS FIFOs.

                                                                 Do not change the default value set by coreConsultant for your configuration. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gdmahlratio_s cn; */
};
typedef union cavm_usbhx_uahc_gdmahlratio cavm_usbhx_uahc_gdmahlratio_t;

static inline uint64_t CAVM_USBHX_UAHC_GDMAHLRATIO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GDMAHLRATIO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c624ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c624ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GDMAHLRATIO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GDMAHLRATIO(a) cavm_usbhx_uahc_gdmahlratio_t
#define bustype_CAVM_USBHX_UAHC_GDMAHLRATIO(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GDMAHLRATIO(a) "USBHX_UAHC_GDMAHLRATIO"
#define device_bar_CAVM_USBHX_UAHC_GDMAHLRATIO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GDMAHLRATIO(a) (a)
#define arguments_CAVM_USBHX_UAHC_GDMAHLRATIO(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gfladj
 *
 * USB UAHC Global Frame Length Adjustment Register
 * This register provides options for the software to control the core behavior with respect to
 * SOF (start of frame) and ITP (isochronous timestamp packet) timers and frame timer
 * functionality. It provides the option to override the sideband signal fladj_30mhz_reg. In
 * addition, it enables running SOF or ITP frame timer counters completely off of the REF_CLK.
 * This facilitates hardware LPM in host mode with the SOF or ITP counters being run off of the
 * REF_CLK signal.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_gfladj
{
    uint32_t u;
    struct cavm_usbhx_uahc_gfladj_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t gfladj_refclk_240mhzdecr_pls1 : 1;/**< [ 31: 31](R/W) This field indicates that the decrement value that the controller applies for each REF_CLK
                                                                 must be GFLADJ_REFCLK_240MHZ_DECR and GFLADJ_REFCLK_240MHZ_DECR +1 alternatively on each
                                                                 REF_CLK. Set this bit to 1 only if [GFLADJ_REFCLK_LPM_SEL] is set to 1 and the fractional
                                                                 component of 240/ref_frequency is greater than or equal to 0.5.

                                                                 Example:

                                                                 If the REF_CLK is 19.2 MHz then:
                                                                 * USBH()_UAHC_GUCTL[REFCLKPER] = 52.
                                                                 * [GFLADJ_REFCLK_240MHZ_DECR] = (240/19.2) = 12.5.
                                                                 * [GFLADJ_REFCLK_240MHZDECR_PLS1] = 1.

                                                                 If the REF_CLK is 24 MHz then:
                                                                 * USBH()_UAHC_GUCTL[REFCLKPER] = 41.
                                                                 * [GFLADJ_REFCLK_240MHZ_DECR] = (240/24) = 10.
                                                                 * [GFLADJ_REFCLK_240MHZDECR_PLS1] = 0. */
        uint32_t gfladj_refclk_240mhz_decr : 7;/**< [ 30: 24](R/W) This field indicates the decrement value that the controller applies for each REF_CLK in
                                                                 order to derive a frame timer in terms of a 240-MHz clock. This field must be programmed
                                                                 to a nonzero value only if [GFLADJ_REFCLK_LPM_SEL] is set to 1.

                                                                 The value is derived as follows:
                                                                 _ [GFLADJ_REFCLK_240MHZ_DECR] = 240/ref_clk_frequency

                                                                 Examples:

                                                                 If the REF_CLK is 24 MHz then:
                                                                 * USBH()_UAHC_GUCTL[REFCLKPER] = 41.
                                                                 * [GFLADJ_REFCLK_240MHZ_DECR] = 240/24 = 10.

                                                                 If the REF_CLK is 48 MHz then:
                                                                 * USBH()_UAHC_GUCTL[REFCLKPER] = 20.
                                                                 * [GFLADJ_REFCLK_240MHZ_DECR] = 240/48 = 5.

                                                                 If the REF_CLK is 17 MHz then:
                                                                 * USBH()_UAHC_GUCTL[REFCLKPER] = 58.
                                                                 * [GFLADJ_REFCLK_240MHZ_DECR] = 240/17 = 14. */
        uint32_t gfladj_refclk_lpm_sel : 1;  /**< [ 23: 23](R/W) This bit enables the functionality of running SOF/ITP counters on the REF_CLK.
                                                                 This bit must not be set to 1 if USBH()_UAHC_GCTL[SOFITPSYNC] = 1. Similarly, if
                                                                 [GFLADJ_REFCLK_LPM_SEL] = 1, USBH()_UAHC_GCTL[SOFITPSYNC] must not be set to 1.
                                                                 When [GFLADJ_REFCLK_LPM_SEL] = 1 the overloading of the suspend control of the USB 2.0
                                                                 first
                                                                 port PHY (UTMI) with USB 3.1 port states is removed. Note that the REF_CLK frequencies
                                                                 supported in this mode are 16/17/19.2/20/24/39.7/40 MHz. */
        uint32_t reserved_22           : 1;
        uint32_t gfladj_refclk_fladj   : 14; /**< [ 21:  8](R/W) This field indicates the frame length adjustment to be applied when SOF/ITP counter is
                                                                 running off of the REF_CLK. This register value is used to adjust:.
                                                                 * ITP interval when USBH()_UAHC_GCTL[SOFITPSYNC] = 1
                                                                 * both SOF and ITP interval when [GFLADJ_REFCLK_LPM_SEL] = 1.

                                                                 This field must be programmed to a nonzero value only if [GFLADJ_REFCLK_LPM_SEL] = 1 or
                                                                 USBH()_UAHC_GCTL[SOFITPSYNC] = 1.

                                                                 The value is derived as below:

                                                                 _ FLADJ_REF_CLK_FLADJ = ((125000/ref_clk_period_integer) - (125000/ref_clk_period)) *
                                                                 ref_clk_period

                                                                 where,
                                                                 * the ref_clk_period_integer is the integer value of the REF_CLK period got by truncating
                                                                 the decimal (fractional) value that is programmed in USBH()_UAHC_GUCTL[REFCLKPER].
                                                                 * the ref_clk_period is the REF_CLK period including the fractional value.

                                                                 Examples:

                                                                 If the REF_CLK is 24 MHz then:
                                                                 * USBH()_UAHC_GUCTL[REFCLKPER] = 41.
                                                                 * GLADJ_REFCLK_FLADJ = ((125000/41) -
                                                                 (125000/41.6666)) * 41.6666 = 2032 (ignoring the fractional value).

                                                                 If the REF_CLK is 48 MHz then:
                                                                 * USBH()_UAHC_GUCTL[REFCLKPER] = 20.
                                                                 * GLADJ_REFCLK_FLADJ = ((125000/20) -
                                                                 (125000/20.8333)) * 20.8333 = 5208 (ignoring the fractional value). */
        uint32_t gfladj_30mhz_reg_sel  : 1;  /**< [  7:  7](R/W) This field selects whether to use the input signal fladj_30mhz_reg or the [GFLADJ_30MHZ]
                                                                 to
                                                                 adjust the frame length for the SOF/ITP. When this bit is set to, 1, the controller uses
                                                                 [GFLADJ_30MHZ] value 0x0, the controller uses the input signal fladj_30mhz_reg value. */
        uint32_t reserved_6            : 1;
        uint32_t gfladj_30mhz          : 6;  /**< [  5:  0](R/W) This field indicates the value that is used for frame length adjustment instead of
                                                                 considering from the sideband input signal fladj_30mhz_reg. This enables post-silicon
                                                                 frame length adjustment in case the input signal fladj_30mhz_reg is connected to a wrong
                                                                 value or is not valid. The controller uses this value if [GFLADJ_30MHZ_REG_SEL] = 1 and
                                                                 the
                                                                 SOF/ITP counters are running off of UTMI(ULPI) clock ([GFLADJ_REFCLK_LPM_SEL] = 0 and
                                                                 USBH()_UAHC_GCTL[SOFITPSYNC] is 1 or 0). For details on how to set this value, refer to
                                                                 section 5.2.4 Frame Length Adjustment Register (FLADJ) of the xHCI Specification. */
#else /* Word 0 - Little Endian */
        uint32_t gfladj_30mhz          : 6;  /**< [  5:  0](R/W) This field indicates the value that is used for frame length adjustment instead of
                                                                 considering from the sideband input signal fladj_30mhz_reg. This enables post-silicon
                                                                 frame length adjustment in case the input signal fladj_30mhz_reg is connected to a wrong
                                                                 value or is not valid. The controller uses this value if [GFLADJ_30MHZ_REG_SEL] = 1 and
                                                                 the
                                                                 SOF/ITP counters are running off of UTMI(ULPI) clock ([GFLADJ_REFCLK_LPM_SEL] = 0 and
                                                                 USBH()_UAHC_GCTL[SOFITPSYNC] is 1 or 0). For details on how to set this value, refer to
                                                                 section 5.2.4 Frame Length Adjustment Register (FLADJ) of the xHCI Specification. */
        uint32_t reserved_6            : 1;
        uint32_t gfladj_30mhz_reg_sel  : 1;  /**< [  7:  7](R/W) This field selects whether to use the input signal fladj_30mhz_reg or the [GFLADJ_30MHZ]
                                                                 to
                                                                 adjust the frame length for the SOF/ITP. When this bit is set to, 1, the controller uses
                                                                 [GFLADJ_30MHZ] value 0x0, the controller uses the input signal fladj_30mhz_reg value. */
        uint32_t gfladj_refclk_fladj   : 14; /**< [ 21:  8](R/W) This field indicates the frame length adjustment to be applied when SOF/ITP counter is
                                                                 running off of the REF_CLK. This register value is used to adjust:.
                                                                 * ITP interval when USBH()_UAHC_GCTL[SOFITPSYNC] = 1
                                                                 * both SOF and ITP interval when [GFLADJ_REFCLK_LPM_SEL] = 1.

                                                                 This field must be programmed to a nonzero value only if [GFLADJ_REFCLK_LPM_SEL] = 1 or
                                                                 USBH()_UAHC_GCTL[SOFITPSYNC] = 1.

                                                                 The value is derived as below:

                                                                 _ FLADJ_REF_CLK_FLADJ = ((125000/ref_clk_period_integer) - (125000/ref_clk_period)) *
                                                                 ref_clk_period

                                                                 where,
                                                                 * the ref_clk_period_integer is the integer value of the REF_CLK period got by truncating
                                                                 the decimal (fractional) value that is programmed in USBH()_UAHC_GUCTL[REFCLKPER].
                                                                 * the ref_clk_period is the REF_CLK period including the fractional value.

                                                                 Examples:

                                                                 If the REF_CLK is 24 MHz then:
                                                                 * USBH()_UAHC_GUCTL[REFCLKPER] = 41.
                                                                 * GLADJ_REFCLK_FLADJ = ((125000/41) -
                                                                 (125000/41.6666)) * 41.6666 = 2032 (ignoring the fractional value).

                                                                 If the REF_CLK is 48 MHz then:
                                                                 * USBH()_UAHC_GUCTL[REFCLKPER] = 20.
                                                                 * GLADJ_REFCLK_FLADJ = ((125000/20) -
                                                                 (125000/20.8333)) * 20.8333 = 5208 (ignoring the fractional value). */
        uint32_t reserved_22           : 1;
        uint32_t gfladj_refclk_lpm_sel : 1;  /**< [ 23: 23](R/W) This bit enables the functionality of running SOF/ITP counters on the REF_CLK.
                                                                 This bit must not be set to 1 if USBH()_UAHC_GCTL[SOFITPSYNC] = 1. Similarly, if
                                                                 [GFLADJ_REFCLK_LPM_SEL] = 1, USBH()_UAHC_GCTL[SOFITPSYNC] must not be set to 1.
                                                                 When [GFLADJ_REFCLK_LPM_SEL] = 1 the overloading of the suspend control of the USB 2.0
                                                                 first
                                                                 port PHY (UTMI) with USB 3.1 port states is removed. Note that the REF_CLK frequencies
                                                                 supported in this mode are 16/17/19.2/20/24/39.7/40 MHz. */
        uint32_t gfladj_refclk_240mhz_decr : 7;/**< [ 30: 24](R/W) This field indicates the decrement value that the controller applies for each REF_CLK in
                                                                 order to derive a frame timer in terms of a 240-MHz clock. This field must be programmed
                                                                 to a nonzero value only if [GFLADJ_REFCLK_LPM_SEL] is set to 1.

                                                                 The value is derived as follows:
                                                                 _ [GFLADJ_REFCLK_240MHZ_DECR] = 240/ref_clk_frequency

                                                                 Examples:

                                                                 If the REF_CLK is 24 MHz then:
                                                                 * USBH()_UAHC_GUCTL[REFCLKPER] = 41.
                                                                 * [GFLADJ_REFCLK_240MHZ_DECR] = 240/24 = 10.

                                                                 If the REF_CLK is 48 MHz then:
                                                                 * USBH()_UAHC_GUCTL[REFCLKPER] = 20.
                                                                 * [GFLADJ_REFCLK_240MHZ_DECR] = 240/48 = 5.

                                                                 If the REF_CLK is 17 MHz then:
                                                                 * USBH()_UAHC_GUCTL[REFCLKPER] = 58.
                                                                 * [GFLADJ_REFCLK_240MHZ_DECR] = 240/17 = 14. */
        uint32_t gfladj_refclk_240mhzdecr_pls1 : 1;/**< [ 31: 31](R/W) This field indicates that the decrement value that the controller applies for each REF_CLK
                                                                 must be GFLADJ_REFCLK_240MHZ_DECR and GFLADJ_REFCLK_240MHZ_DECR +1 alternatively on each
                                                                 REF_CLK. Set this bit to 1 only if [GFLADJ_REFCLK_LPM_SEL] is set to 1 and the fractional
                                                                 component of 240/ref_frequency is greater than or equal to 0.5.

                                                                 Example:

                                                                 If the REF_CLK is 19.2 MHz then:
                                                                 * USBH()_UAHC_GUCTL[REFCLKPER] = 52.
                                                                 * [GFLADJ_REFCLK_240MHZ_DECR] = (240/19.2) = 12.5.
                                                                 * [GFLADJ_REFCLK_240MHZDECR_PLS1] = 1.

                                                                 If the REF_CLK is 24 MHz then:
                                                                 * USBH()_UAHC_GUCTL[REFCLKPER] = 41.
                                                                 * [GFLADJ_REFCLK_240MHZ_DECR] = (240/24) = 10.
                                                                 * [GFLADJ_REFCLK_240MHZDECR_PLS1] = 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gfladj_s cn; */
};
typedef union cavm_usbhx_uahc_gfladj cavm_usbhx_uahc_gfladj_t;

static inline uint64_t CAVM_USBHX_UAHC_GFLADJ(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GFLADJ(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c630ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c630ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GFLADJ", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GFLADJ(a) cavm_usbhx_uahc_gfladj_t
#define bustype_CAVM_USBHX_UAHC_GFLADJ(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GFLADJ(a) "USBHX_UAHC_GFLADJ"
#define device_bar_CAVM_USBHX_UAHC_GFLADJ(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GFLADJ(a) (a)
#define arguments_CAVM_USBHX_UAHC_GFLADJ(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_ggpio
 *
 * USB UAHC Core General-Purpose I/O Register
 * The application can use this register for general purpose input and output ports or for
 * debugging.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_ggpio
{
    uint32_t u;
    struct cavm_usbhx_uahc_ggpio_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t gpo                   : 16; /**< [ 31: 16](R/W) General purpose output. These outputs are not connected to anything. Can be used as scratch. */
        uint32_t gpi                   : 16; /**< [ 15:  0](RO) General purpose input. These inputs are tied 0x0. */
#else /* Word 0 - Little Endian */
        uint32_t gpi                   : 16; /**< [ 15:  0](RO) General purpose input. These inputs are tied 0x0. */
        uint32_t gpo                   : 16; /**< [ 31: 16](R/W) General purpose output. These outputs are not connected to anything. Can be used as scratch. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_ggpio_s cn; */
};
typedef union cavm_usbhx_uahc_ggpio cavm_usbhx_uahc_ggpio_t;

static inline uint64_t CAVM_USBHX_UAHC_GGPIO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GGPIO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c124ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c124ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GGPIO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GGPIO(a) cavm_usbhx_uahc_ggpio_t
#define bustype_CAVM_USBHX_UAHC_GGPIO(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GGPIO(a) "USBHX_UAHC_GGPIO"
#define device_bar_CAVM_USBHX_UAHC_GGPIO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GGPIO(a) (a)
#define arguments_CAVM_USBHX_UAHC_GGPIO(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uahc_ghmsocbwor
 *
 * USBH UAHC Ghmsocbwor Register
 * Global Host Mode SoC Bandwidth Override Register
 */
union cavm_usbhx_uahc_ghmsocbwor
{
    uint64_t u;
    struct cavm_usbhx_uahc_ghmsocbwor_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t ovrd_port_soc_bw      : 1;  /**< [ 31: 31](R/W) Overrides the SoC bandwidth port values

                                                                  When this field is set 1, the ovrd_soc_common_rd_wr_bus, ovrd_
                                                                 soc_rd_uF_kB_bandwidth, and ovrd_ soc_wr_uF_kB_bandwidth register values are
                                                                 used instead common_soc_rd_wr, soc_rd_uF_kB_bandwidth, and
                                                                 soc_wr_uF_kB_bandwidth input ports. */
        uint64_t ovrd_common_soc_rd_wr : 1;  /**< [ 30: 30](R/W) Override value for the common_soc_rd_wr port
                                                                  - 1'b0: Separate SoC Bus for Read and Write
                                                                  - 1'b1: Common SoC Bus for Read and Write */
        uint64_t ovrd_soc_wr_uf_kb_bandwidth : 15;/**< [ 29: 15](R/W) Override value for the soc_wr_uF_kB_bandwidth port. */
        uint64_t ovrd_soc_rd_uf_kb_bandwidth : 15;/**< [ 14:  0](R/W) Override value for the soc_rd_uF_kB_bandwidth port. */
#else /* Word 0 - Little Endian */
        uint64_t ovrd_soc_rd_uf_kb_bandwidth : 15;/**< [ 14:  0](R/W) Override value for the soc_rd_uF_kB_bandwidth port. */
        uint64_t ovrd_soc_wr_uf_kb_bandwidth : 15;/**< [ 29: 15](R/W) Override value for the soc_wr_uF_kB_bandwidth port. */
        uint64_t ovrd_common_soc_rd_wr : 1;  /**< [ 30: 30](R/W) Override value for the common_soc_rd_wr port
                                                                  - 1'b0: Separate SoC Bus for Read and Write
                                                                  - 1'b1: Common SoC Bus for Read and Write */
        uint64_t ovrd_port_soc_bw      : 1;  /**< [ 31: 31](R/W) Overrides the SoC bandwidth port values

                                                                  When this field is set 1, the ovrd_soc_common_rd_wr_bus, ovrd_
                                                                 soc_rd_uF_kB_bandwidth, and ovrd_ soc_wr_uF_kB_bandwidth register values are
                                                                 used instead common_soc_rd_wr, soc_rd_uF_kB_bandwidth, and
                                                                 soc_wr_uF_kB_bandwidth input ports. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_ghmsocbwor_s cn; */
};
typedef union cavm_usbhx_uahc_ghmsocbwor cavm_usbhx_uahc_ghmsocbwor_t;

static inline uint64_t CAVM_USBHX_UAHC_GHMSOCBWOR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GHMSOCBWOR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c190ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c190ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GHMSOCBWOR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GHMSOCBWOR(a) cavm_usbhx_uahc_ghmsocbwor_t
#define bustype_CAVM_USBHX_UAHC_GHMSOCBWOR(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UAHC_GHMSOCBWOR(a) "USBHX_UAHC_GHMSOCBWOR"
#define device_bar_CAVM_USBHX_UAHC_GHMSOCBWOR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GHMSOCBWOR(a) (a)
#define arguments_CAVM_USBHX_UAHC_GHMSOCBWOR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_ghwparams0
 *
 * USB UAHC Hardware Parameters Register 0
 * This register contains the hardware configuration options selected at compile-time.
 */
union cavm_usbhx_uahc_ghwparams0
{
    uint32_t u;
    struct cavm_usbhx_uahc_ghwparams0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t awidth                : 8;  /**< [ 31: 24](RO) USB core bus-address width. */
        uint32_t sdwidth               : 8;  /**< [ 23: 16](RO) USB core bus slave-data width. */
        uint32_t mdwidth               : 8;  /**< [ 15:  8](RO) USB core bus master-data width. */
        uint32_t sbus_type             : 2;  /**< [  7:  6](RO) USB core bus slave type: AXI. */
        uint32_t mbus_type             : 3;  /**< [  5:  3](RO) USB core bus master type: AXI. */
        uint32_t mode                  : 3;  /**< [  2:  0](RO) Operation mode: 0x1: Host Only. */
#else /* Word 0 - Little Endian */
        uint32_t mode                  : 3;  /**< [  2:  0](RO) Operation mode: 0x1: Host Only. */
        uint32_t mbus_type             : 3;  /**< [  5:  3](RO) USB core bus master type: AXI. */
        uint32_t sbus_type             : 2;  /**< [  7:  6](RO) USB core bus slave type: AXI. */
        uint32_t mdwidth               : 8;  /**< [ 15:  8](RO) USB core bus master-data width. */
        uint32_t sdwidth               : 8;  /**< [ 23: 16](RO) USB core bus slave-data width. */
        uint32_t awidth                : 8;  /**< [ 31: 24](RO) USB core bus-address width. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_ghwparams0_s cn; */
};
typedef union cavm_usbhx_uahc_ghwparams0 cavm_usbhx_uahc_ghwparams0_t;

static inline uint64_t CAVM_USBHX_UAHC_GHWPARAMS0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GHWPARAMS0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c140ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c140ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GHWPARAMS0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GHWPARAMS0(a) cavm_usbhx_uahc_ghwparams0_t
#define bustype_CAVM_USBHX_UAHC_GHWPARAMS0(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GHWPARAMS0(a) "USBHX_UAHC_GHWPARAMS0"
#define device_bar_CAVM_USBHX_UAHC_GHWPARAMS0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GHWPARAMS0(a) (a)
#define arguments_CAVM_USBHX_UAHC_GHWPARAMS0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_ghwparams1
 *
 * USB UAHC Hardware Parameters Register 1
 * This register contains the hardware configuration options selected at compile-time.
 */
union cavm_usbhx_uahc_ghwparams1
{
    uint32_t u;
    struct cavm_usbhx_uahc_ghwparams1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t en_dbc                : 1;  /**< [ 31: 31](RAZ) Enable debug capability. */
        uint32_t rm_opt_features       : 1;  /**< [ 30: 30](RO) Remove optional features. */
        uint32_t rsvd_29               : 1;  /**< [ 29: 29](RO/H) Reserved. */
        uint32_t ram_bus_clks_sync     : 1;  /**< [ 28: 28](RO) RAM_CLK and BUS_CLK are synchronous. */
        uint32_t mac_ram_clks_sync     : 1;  /**< [ 27: 27](RO) MAC3_CLK and RAM_CLK are synchronous. */
        uint32_t mac_phy_clks_sync     : 1;  /**< [ 26: 26](RO) MAC3_CLK and PHY_CLK are synchronous. */
        uint32_t en_pwropt             : 2;  /**< [ 25: 24](RO) Power optimization mode:
                                                                 bit\<0\> = Clock-gating feature available.
                                                                 bit\<1\> = Hibernation feature available. */
        uint32_t spram_typ             : 1;  /**< [ 23: 23](RO) SRAM type: two-port RAMs. */
        uint32_t device_num_int        : 6;  /**< [ 22: 17](RO) Number of event buffers (and interrupts) in device-mode (unsupported). */
        uint32_t aspacewidth           : 3;  /**< [ 16: 14](RO) Native interface address-space port width. */
        uint32_t reqinfowidth          : 3;  /**< [ 13: 11](RO) Native interface request/response-info port width. */
        uint32_t datainfowidth         : 3;  /**< [ 10:  8](RO) Native interface data-info port width. */
        uint32_t burstwidth_m1         : 4;  /**< [  7:  4](RO) Width minus one of AXI length field. */
        uint32_t idwidth_m1            : 4;  /**< [  3:  0](RO) Width minus one of AXI ID field. */
#else /* Word 0 - Little Endian */
        uint32_t idwidth_m1            : 4;  /**< [  3:  0](RO) Width minus one of AXI ID field. */
        uint32_t burstwidth_m1         : 4;  /**< [  7:  4](RO) Width minus one of AXI length field. */
        uint32_t datainfowidth         : 3;  /**< [ 10:  8](RO) Native interface data-info port width. */
        uint32_t reqinfowidth          : 3;  /**< [ 13: 11](RO) Native interface request/response-info port width. */
        uint32_t aspacewidth           : 3;  /**< [ 16: 14](RO) Native interface address-space port width. */
        uint32_t device_num_int        : 6;  /**< [ 22: 17](RO) Number of event buffers (and interrupts) in device-mode (unsupported). */
        uint32_t spram_typ             : 1;  /**< [ 23: 23](RO) SRAM type: two-port RAMs. */
        uint32_t en_pwropt             : 2;  /**< [ 25: 24](RO) Power optimization mode:
                                                                 bit\<0\> = Clock-gating feature available.
                                                                 bit\<1\> = Hibernation feature available. */
        uint32_t mac_phy_clks_sync     : 1;  /**< [ 26: 26](RO) MAC3_CLK and PHY_CLK are synchronous. */
        uint32_t mac_ram_clks_sync     : 1;  /**< [ 27: 27](RO) MAC3_CLK and RAM_CLK are synchronous. */
        uint32_t ram_bus_clks_sync     : 1;  /**< [ 28: 28](RO) RAM_CLK and BUS_CLK are synchronous. */
        uint32_t rsvd_29               : 1;  /**< [ 29: 29](RO/H) Reserved. */
        uint32_t rm_opt_features       : 1;  /**< [ 30: 30](RO) Remove optional features. */
        uint32_t en_dbc                : 1;  /**< [ 31: 31](RAZ) Enable debug capability. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_ghwparams1_s cn; */
};
typedef union cavm_usbhx_uahc_ghwparams1 cavm_usbhx_uahc_ghwparams1_t;

static inline uint64_t CAVM_USBHX_UAHC_GHWPARAMS1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GHWPARAMS1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c144ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c144ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GHWPARAMS1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GHWPARAMS1(a) cavm_usbhx_uahc_ghwparams1_t
#define bustype_CAVM_USBHX_UAHC_GHWPARAMS1(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GHWPARAMS1(a) "USBHX_UAHC_GHWPARAMS1"
#define device_bar_CAVM_USBHX_UAHC_GHWPARAMS1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GHWPARAMS1(a) (a)
#define arguments_CAVM_USBHX_UAHC_GHWPARAMS1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_ghwparams2
 *
 * USB UAHC Core GHW Parameters Register 2
 * This register contains the hardware configuration options selected at compile-time.
 */
union cavm_usbhx_uahc_ghwparams2
{
    uint32_t u;
    struct cavm_usbhx_uahc_ghwparams2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t userid                : 32; /**< [ 31:  0](RO) User ID. */
#else /* Word 0 - Little Endian */
        uint32_t userid                : 32; /**< [ 31:  0](RO) User ID. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_ghwparams2_s cn; */
};
typedef union cavm_usbhx_uahc_ghwparams2 cavm_usbhx_uahc_ghwparams2_t;

static inline uint64_t CAVM_USBHX_UAHC_GHWPARAMS2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GHWPARAMS2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c148ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c148ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GHWPARAMS2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GHWPARAMS2(a) cavm_usbhx_uahc_ghwparams2_t
#define bustype_CAVM_USBHX_UAHC_GHWPARAMS2(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GHWPARAMS2(a) "USBHX_UAHC_GHWPARAMS2"
#define device_bar_CAVM_USBHX_UAHC_GHWPARAMS2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GHWPARAMS2(a) (a)
#define arguments_CAVM_USBHX_UAHC_GHWPARAMS2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_ghwparams3
 *
 * USB UAHC GHW Parameters Register 3
 * This register contains the hardware configuration options selected at compile-time.
 */
union cavm_usbhx_uahc_ghwparams3
{
    uint32_t u;
    struct cavm_usbhx_uahc_ghwparams3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t cache_total_xfer_resources : 8;/**< [ 30: 23](RO) Maximum number of transfer resources in the core. */
        uint32_t num_in_eps            : 5;  /**< [ 22: 18](RO) Maximum number of device-mode IN endpoints active. */
        uint32_t num_eps               : 6;  /**< [ 17: 12](RO) Number of device-mode single-directional endpoints. */
        uint32_t rsvd_11               : 1;  /**< [ 11: 11](RO) Reserved. */
        uint32_t vendor_ctl_interface  : 1;  /**< [ 10: 10](RO) UTMI+ PHY vendor control interface enabled. */
        uint32_t reserved_8_9          : 2;
        uint32_t hsphy_dwidth          : 2;  /**< [  7:  6](RO) Data width of the UTMI+ PHY interface: 0x2 = 8-or-16 bits. */
        uint32_t rsvd_5_4              : 2;  /**< [  5:  4](RO) Reserved. */
        uint32_t hsphy_interface       : 2;  /**< [  3:  2](RO) High-speed PHY interface: 0x1 = UTMI+. */
        uint32_t ssphy_interface       : 2;  /**< [  1:  0](RO) SuperSpeedPlus PHY interface: 0x2 = PIPE4. */
#else /* Word 0 - Little Endian */
        uint32_t ssphy_interface       : 2;  /**< [  1:  0](RO) SuperSpeedPlus PHY interface: 0x2 = PIPE4. */
        uint32_t hsphy_interface       : 2;  /**< [  3:  2](RO) High-speed PHY interface: 0x1 = UTMI+. */
        uint32_t rsvd_5_4              : 2;  /**< [  5:  4](RO) Reserved. */
        uint32_t hsphy_dwidth          : 2;  /**< [  7:  6](RO) Data width of the UTMI+ PHY interface: 0x2 = 8-or-16 bits. */
        uint32_t reserved_8_9          : 2;
        uint32_t vendor_ctl_interface  : 1;  /**< [ 10: 10](RO) UTMI+ PHY vendor control interface enabled. */
        uint32_t rsvd_11               : 1;  /**< [ 11: 11](RO) Reserved. */
        uint32_t num_eps               : 6;  /**< [ 17: 12](RO) Number of device-mode single-directional endpoints. */
        uint32_t num_in_eps            : 5;  /**< [ 22: 18](RO) Maximum number of device-mode IN endpoints active. */
        uint32_t cache_total_xfer_resources : 8;/**< [ 30: 23](RO) Maximum number of transfer resources in the core. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_ghwparams3_s cn; */
};
typedef union cavm_usbhx_uahc_ghwparams3 cavm_usbhx_uahc_ghwparams3_t;

static inline uint64_t CAVM_USBHX_UAHC_GHWPARAMS3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GHWPARAMS3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c14cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c14cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GHWPARAMS3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GHWPARAMS3(a) cavm_usbhx_uahc_ghwparams3_t
#define bustype_CAVM_USBHX_UAHC_GHWPARAMS3(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GHWPARAMS3(a) "USBHX_UAHC_GHWPARAMS3"
#define device_bar_CAVM_USBHX_UAHC_GHWPARAMS3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GHWPARAMS3(a) (a)
#define arguments_CAVM_USBHX_UAHC_GHWPARAMS3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_ghwparams4
 *
 * USB UAHC GHW Parameters Register 4
 * This register contains the hardware configuration options selected at compile-time.
 */
union cavm_usbhx_uahc_ghwparams4
{
    uint32_t u;
    struct cavm_usbhx_uahc_ghwparams4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bmu_lsp_depth         : 4;  /**< [ 31: 28](RO) Depth of the BMU-LSP status buffer. */
        uint32_t bmu_ptl_depth_m1      : 5;  /**< [ 27: 23](RO) Depth of the BMU-PTL source/sink buffers minus 1. */
        uint32_t en_isoc_supt          : 1;  /**< [ 22: 22](RO) Isochronous support enabled. */
        uint32_t ext_buff_control      : 1;  /**< [ 21: 21](RO) Enables device external buffer control sideband controls. */
        uint32_t num_ss_pls_usb_instances : 4;/**< [ 20: 17](RO) Number of SuperSpeedPlus bus instances. */
        uint32_t hiber_scratchbufs     : 4;  /**< [ 16: 13](RO) Number of hibernation scratchpad buffers. */
        uint32_t reserved_6_12         : 7;
        uint32_t cache_trbs_per_transfer : 6;/**< [  5:  0](RO) Number of TRBs per transfer that can be cached. */
#else /* Word 0 - Little Endian */
        uint32_t cache_trbs_per_transfer : 6;/**< [  5:  0](RO) Number of TRBs per transfer that can be cached. */
        uint32_t reserved_6_12         : 7;
        uint32_t hiber_scratchbufs     : 4;  /**< [ 16: 13](RO) Number of hibernation scratchpad buffers. */
        uint32_t num_ss_pls_usb_instances : 4;/**< [ 20: 17](RO) Number of SuperSpeedPlus bus instances. */
        uint32_t ext_buff_control      : 1;  /**< [ 21: 21](RO) Enables device external buffer control sideband controls. */
        uint32_t en_isoc_supt          : 1;  /**< [ 22: 22](RO) Isochronous support enabled. */
        uint32_t bmu_ptl_depth_m1      : 5;  /**< [ 27: 23](RO) Depth of the BMU-PTL source/sink buffers minus 1. */
        uint32_t bmu_lsp_depth         : 4;  /**< [ 31: 28](RO) Depth of the BMU-LSP status buffer. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_ghwparams4_s cn; */
};
typedef union cavm_usbhx_uahc_ghwparams4 cavm_usbhx_uahc_ghwparams4_t;

static inline uint64_t CAVM_USBHX_UAHC_GHWPARAMS4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GHWPARAMS4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c150ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c150ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GHWPARAMS4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GHWPARAMS4(a) cavm_usbhx_uahc_ghwparams4_t
#define bustype_CAVM_USBHX_UAHC_GHWPARAMS4(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GHWPARAMS4(a) "USBHX_UAHC_GHWPARAMS4"
#define device_bar_CAVM_USBHX_UAHC_GHWPARAMS4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GHWPARAMS4(a) (a)
#define arguments_CAVM_USBHX_UAHC_GHWPARAMS4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_ghwparams5
 *
 * USB UAHC GHW Parameters Register 5
 * This register contains the hardware configuration options selected at compile-time.
 */
union cavm_usbhx_uahc_ghwparams5
{
    uint32_t u;
    struct cavm_usbhx_uahc_ghwparams5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t num_rams              : 3;  /**< [ 31: 29](RO/H) DWC_USB31_NUM_RAMS. */
        uint32_t dfq_fifo_depth        : 6;  /**< [ 28: 23](RO) Size of the BMU descriptor fetch-request queue. */
        uint32_t dwq_fifo_depth        : 6;  /**< [ 22: 17](RO) Size of the BMU descriptor write queue. */
        uint32_t txq_fifo_depth        : 6;  /**< [ 16: 11](RO) Size of the BMU TX request queue. */
        uint32_t rxq_fifo_depth        : 6;  /**< [ 10:  5](RO) Size of the BMU RX request queue. */
        uint32_t bmu_busgm_depth       : 5;  /**< [  4:  0](RO) Depth of the BMU-BUSGM source/sink buffers. */
#else /* Word 0 - Little Endian */
        uint32_t bmu_busgm_depth       : 5;  /**< [  4:  0](RO) Depth of the BMU-BUSGM source/sink buffers. */
        uint32_t rxq_fifo_depth        : 6;  /**< [ 10:  5](RO) Size of the BMU RX request queue. */
        uint32_t txq_fifo_depth        : 6;  /**< [ 16: 11](RO) Size of the BMU TX request queue. */
        uint32_t dwq_fifo_depth        : 6;  /**< [ 22: 17](RO) Size of the BMU descriptor write queue. */
        uint32_t dfq_fifo_depth        : 6;  /**< [ 28: 23](RO) Size of the BMU descriptor fetch-request queue. */
        uint32_t num_rams              : 3;  /**< [ 31: 29](RO/H) DWC_USB31_NUM_RAMS. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_ghwparams5_s cn; */
};
typedef union cavm_usbhx_uahc_ghwparams5 cavm_usbhx_uahc_ghwparams5_t;

static inline uint64_t CAVM_USBHX_UAHC_GHWPARAMS5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GHWPARAMS5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c154ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c154ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GHWPARAMS5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GHWPARAMS5(a) cavm_usbhx_uahc_ghwparams5_t
#define bustype_CAVM_USBHX_UAHC_GHWPARAMS5(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GHWPARAMS5(a) "USBHX_UAHC_GHWPARAMS5"
#define device_bar_CAVM_USBHX_UAHC_GHWPARAMS5(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GHWPARAMS5(a) (a)
#define arguments_CAVM_USBHX_UAHC_GHWPARAMS5(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_ghwparams6
 *
 * USB UAHC GHW Parameters Register 6
 * This register contains the hardware configuration options selected at compile-time.
 */
union cavm_usbhx_uahc_ghwparams6
{
    uint32_t u;
    struct cavm_usbhx_uahc_ghwparams6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ram0_depth            : 16; /**< [ 31: 16](RO) RAM0 depth. */
        uint32_t en_bus_filters        : 1;  /**< [ 15: 15](RO) VBus filters support. */
        uint32_t rsvd_14_10            : 5;  /**< [ 14: 10](RO/H) Reserved. */
        uint32_t reserved_8_9          : 2;
        uint32_t en_fpga               : 1;  /**< [  7:  7](RO) Enable FPGA implementation. */
        uint32_t en_dbg_ports          : 1;  /**< [  6:  6](RO) Enable debug ports for FGPA. */
        uint32_t psq_fifo_depth        : 6;  /**< [  5:  0](RO) Size of the BMU protocol status queue. */
#else /* Word 0 - Little Endian */
        uint32_t psq_fifo_depth        : 6;  /**< [  5:  0](RO) Size of the BMU protocol status queue. */
        uint32_t en_dbg_ports          : 1;  /**< [  6:  6](RO) Enable debug ports for FGPA. */
        uint32_t en_fpga               : 1;  /**< [  7:  7](RO) Enable FPGA implementation. */
        uint32_t reserved_8_9          : 2;
        uint32_t rsvd_14_10            : 5;  /**< [ 14: 10](RO/H) Reserved. */
        uint32_t en_bus_filters        : 1;  /**< [ 15: 15](RO) VBus filters support. */
        uint32_t ram0_depth            : 16; /**< [ 31: 16](RO) RAM0 depth. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_ghwparams6_s cn; */
};
typedef union cavm_usbhx_uahc_ghwparams6 cavm_usbhx_uahc_ghwparams6_t;

static inline uint64_t CAVM_USBHX_UAHC_GHWPARAMS6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GHWPARAMS6(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c158ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c158ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GHWPARAMS6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GHWPARAMS6(a) cavm_usbhx_uahc_ghwparams6_t
#define bustype_CAVM_USBHX_UAHC_GHWPARAMS6(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GHWPARAMS6(a) "USBHX_UAHC_GHWPARAMS6"
#define device_bar_CAVM_USBHX_UAHC_GHWPARAMS6(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GHWPARAMS6(a) (a)
#define arguments_CAVM_USBHX_UAHC_GHWPARAMS6(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_ghwparams7
 *
 * USB UAHC GHW Parameters Register 7
 * This register contains the hardware configuration options selected at compile-time.
 */
union cavm_usbhx_uahc_ghwparams7
{
    uint32_t u;
    struct cavm_usbhx_uahc_ghwparams7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ram2_depth            : 16; /**< [ 31: 16](RO) RAM2 depth. */
        uint32_t ram1_depth            : 16; /**< [ 15:  0](RO) RAM1 depth. */
#else /* Word 0 - Little Endian */
        uint32_t ram1_depth            : 16; /**< [ 15:  0](RO) RAM1 depth. */
        uint32_t ram2_depth            : 16; /**< [ 31: 16](RO) RAM2 depth. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_ghwparams7_s cn; */
};
typedef union cavm_usbhx_uahc_ghwparams7 cavm_usbhx_uahc_ghwparams7_t;

static inline uint64_t CAVM_USBHX_UAHC_GHWPARAMS7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GHWPARAMS7(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c15cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c15cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GHWPARAMS7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GHWPARAMS7(a) cavm_usbhx_uahc_ghwparams7_t
#define bustype_CAVM_USBHX_UAHC_GHWPARAMS7(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GHWPARAMS7(a) "USBHX_UAHC_GHWPARAMS7"
#define device_bar_CAVM_USBHX_UAHC_GHWPARAMS7(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GHWPARAMS7(a) (a)
#define arguments_CAVM_USBHX_UAHC_GHWPARAMS7(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_ghwparams8
 *
 * USB UAHC GHW Parameters Register 8
 * This register contains the hardware configuration options selected at compile-time.
 */
union cavm_usbhx_uahc_ghwparams8
{
    uint32_t u;
    struct cavm_usbhx_uahc_ghwparams8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dcache_depth_info     : 32; /**< [ 31:  0](RO) Dcache depth. */
#else /* Word 0 - Little Endian */
        uint32_t dcache_depth_info     : 32; /**< [ 31:  0](RO) Dcache depth. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_ghwparams8_s cn; */
};
typedef union cavm_usbhx_uahc_ghwparams8 cavm_usbhx_uahc_ghwparams8_t;

static inline uint64_t CAVM_USBHX_UAHC_GHWPARAMS8(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GHWPARAMS8(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c600ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c600ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GHWPARAMS8", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GHWPARAMS8(a) cavm_usbhx_uahc_ghwparams8_t
#define bustype_CAVM_USBHX_UAHC_GHWPARAMS8(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GHWPARAMS8(a) "USBHX_UAHC_GHWPARAMS8"
#define device_bar_CAVM_USBHX_UAHC_GHWPARAMS8(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GHWPARAMS8(a) (a)
#define arguments_CAVM_USBHX_UAHC_GHWPARAMS8(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gostddma_prd
 *
 * USBH UAHC Gostddma Prd Register
 * Global Number of Periodic Outstanding DMA Register
 */
union cavm_usbhx_uahc_gostddma_prd
{
    uint32_t u;
    struct cavm_usbhx_uahc_gostddma_prd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ostdrx_prd            : 8;  /**< [ 31: 24](R/W) Number of outstanding periodic RX DMA */
        uint32_t ostdtx_prd_active     : 8;  /**< [ 23: 16](R/W) Number of outstanding periodic TX DMA for active FIFO/BI on USB */
        uint32_t ostdtx_prd_inactive   : 8;  /**< [ 15:  8](R/W) Number of outstanding periodic TX DMA for inactive FIFO/BI on USB */
        uint32_t ostdtx_prd            : 8;  /**< [  7:  0](R/W) Number of outstanding periodic TX DMA */
#else /* Word 0 - Little Endian */
        uint32_t ostdtx_prd            : 8;  /**< [  7:  0](R/W) Number of outstanding periodic TX DMA */
        uint32_t ostdtx_prd_inactive   : 8;  /**< [ 15:  8](R/W) Number of outstanding periodic TX DMA for inactive FIFO/BI on USB */
        uint32_t ostdtx_prd_active     : 8;  /**< [ 23: 16](R/W) Number of outstanding periodic TX DMA for active FIFO/BI on USB */
        uint32_t ostdrx_prd            : 8;  /**< [ 31: 24](R/W) Number of outstanding periodic RX DMA */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gostddma_prd_s cn; */
};
typedef union cavm_usbhx_uahc_gostddma_prd cavm_usbhx_uahc_gostddma_prd_t;

static inline uint64_t CAVM_USBHX_UAHC_GOSTDDMA_PRD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GOSTDDMA_PRD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c62cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c62cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GOSTDDMA_PRD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GOSTDDMA_PRD(a) cavm_usbhx_uahc_gostddma_prd_t
#define bustype_CAVM_USBHX_UAHC_GOSTDDMA_PRD(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GOSTDDMA_PRD(a) "USBHX_UAHC_GOSTDDMA_PRD"
#define device_bar_CAVM_USBHX_UAHC_GOSTDDMA_PRD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GOSTDDMA_PRD(a) (a)
#define arguments_CAVM_USBHX_UAHC_GOSTDDMA_PRD(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gpciel1extlat
 *
 * USBH UAHC Gpciel1extlat Register
 * Global PCIe L1 exit Latency Register.
 */
union cavm_usbhx_uahc_gpciel1extlat
{
    uint32_t u;
    struct cavm_usbhx_uahc_gpciel1extlat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pcie_l1_exit_mode_ctrl : 2; /**< [ 31: 30](R/W) Pcie_l1_exit_mode_ctrl. */
        uint32_t reserved_12_29        : 18;
        uint32_t pcie_l1_exit_latency  : 12; /**< [ 11:  0](R/W) Valid value: 0-125 */
#else /* Word 0 - Little Endian */
        uint32_t pcie_l1_exit_latency  : 12; /**< [ 11:  0](R/W) Valid value: 0-125 */
        uint32_t reserved_12_29        : 18;
        uint32_t pcie_l1_exit_mode_ctrl : 2; /**< [ 31: 30](R/W) Pcie_l1_exit_mode_ctrl. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gpciel1extlat_s cn; */
};
typedef union cavm_usbhx_uahc_gpciel1extlat cavm_usbhx_uahc_gpciel1extlat_t;

static inline uint64_t CAVM_USBHX_UAHC_GPCIEL1EXTLAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GPCIEL1EXTLAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c1b4ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c1b4ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GPCIEL1EXTLAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GPCIEL1EXTLAT(a) cavm_usbhx_uahc_gpciel1extlat_t
#define bustype_CAVM_USBHX_UAHC_GPCIEL1EXTLAT(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GPCIEL1EXTLAT(a) "USBHX_UAHC_GPCIEL1EXTLAT"
#define device_bar_CAVM_USBHX_UAHC_GPCIEL1EXTLAT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GPCIEL1EXTLAT(a) (a)
#define arguments_CAVM_USBHX_UAHC_GPCIEL1EXTLAT(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gpmsts
 *
 * USB UAHC Global Power Management Status Register
 * This debug register gives information on which event caused the hibernation exit. These
 * registers are for debug purposes. They provide debug information on the internal status and
 * state machines. Global debug registers have design-specific information, and are used by for
 * debugging purposes. These registers are not intended to be used by the customer. If any debug
 * assistance is needed for the silicon, contact customer support with a dump of these registers.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_gpmsts
{
    uint32_t u;
    struct cavm_usbhx_uahc_gpmsts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t portsel               : 4;  /**< [ 31: 28](WO) This field selects the port number. Always 0x0. */
        uint32_t reserved_17_27        : 11;
        uint32_t u3wakeup              : 5;  /**< [ 16: 12](RO/H) This field gives the USB 3.1 port wakeup conditions.
                                                                 bit\<12\> = Overcurrent detected.
                                                                 bit\<13\> = Resume detected.
                                                                 bit\<14\> = Connect detected.
                                                                 bit\<15\> = Disconnect detected.
                                                                 bit\<16\> = Last connection state. */
        uint32_t reserved_10_11        : 2;
        uint32_t u2wakeup              : 10; /**< [  9:  0](RO/H) This field indicates the USB 2.0 port wakeup conditions.
                                                                 bit\<0\> = Overcurrent detected.
                                                                 bit\<1\> = Resume detected.
                                                                 bit\<2\> = Connect detected.
                                                                 bit\<3\> = Disconnect detected.
                                                                 bit\<4\> = Last connection state.
                                                                 bit\<5\> = ID change detected.
                                                                 bit\<6\> = SRP request detected.
                                                                 bit\<7\> = ULPI interrupt detected.
                                                                 bit\<8\> = USB reset detected.
                                                                 bit\<9\> = Resume detected changed. */
#else /* Word 0 - Little Endian */
        uint32_t u2wakeup              : 10; /**< [  9:  0](RO/H) This field indicates the USB 2.0 port wakeup conditions.
                                                                 bit\<0\> = Overcurrent detected.
                                                                 bit\<1\> = Resume detected.
                                                                 bit\<2\> = Connect detected.
                                                                 bit\<3\> = Disconnect detected.
                                                                 bit\<4\> = Last connection state.
                                                                 bit\<5\> = ID change detected.
                                                                 bit\<6\> = SRP request detected.
                                                                 bit\<7\> = ULPI interrupt detected.
                                                                 bit\<8\> = USB reset detected.
                                                                 bit\<9\> = Resume detected changed. */
        uint32_t reserved_10_11        : 2;
        uint32_t u3wakeup              : 5;  /**< [ 16: 12](RO/H) This field gives the USB 3.1 port wakeup conditions.
                                                                 bit\<12\> = Overcurrent detected.
                                                                 bit\<13\> = Resume detected.
                                                                 bit\<14\> = Connect detected.
                                                                 bit\<15\> = Disconnect detected.
                                                                 bit\<16\> = Last connection state. */
        uint32_t reserved_17_27        : 11;
        uint32_t portsel               : 4;  /**< [ 31: 28](WO) This field selects the port number. Always 0x0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gpmsts_s cn; */
};
typedef union cavm_usbhx_uahc_gpmsts cavm_usbhx_uahc_gpmsts_t;

static inline uint64_t CAVM_USBHX_UAHC_GPMSTS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GPMSTS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c114ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c114ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GPMSTS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GPMSTS(a) cavm_usbhx_uahc_gpmsts_t
#define bustype_CAVM_USBHX_UAHC_GPMSTS(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GPMSTS(a) "USBHX_UAHC_GPMSTS"
#define device_bar_CAVM_USBHX_UAHC_GPMSTS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GPMSTS(a) (a)
#define arguments_CAVM_USBHX_UAHC_GPMSTS(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uahc_gprtbimap
 *
 * USB UAHC SuperSpeedPlus Port-to-Bus Instance Mapping Register
 * This register specifies the SuperSpeedPlus USB instance number to which each USB 3.1 port is
 * connected. By default, USB 3.1 ports are evenly distributed among all SuperSpeedPlus USB
 * instances. Software can program this register to specify how USB 3.1 ports are connected to
 * SuperSpeedPlus USB instances. The UAHC only implements one SuperSpeedPlus bus-instance, so this
 * register should always be 0.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_gprtbimap
{
    uint64_t u;
    struct cavm_usbhx_uahc_gprtbimap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t binum1                : 4;  /**< [  3:  0](R/W) SuperSpeedPlus USB instance number for port 1. */
#else /* Word 0 - Little Endian */
        uint64_t binum1                : 4;  /**< [  3:  0](R/W) SuperSpeedPlus USB instance number for port 1. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gprtbimap_s cn; */
};
typedef union cavm_usbhx_uahc_gprtbimap cavm_usbhx_uahc_gprtbimap_t;

static inline uint64_t CAVM_USBHX_UAHC_GPRTBIMAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GPRTBIMAP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c138ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c138ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GPRTBIMAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GPRTBIMAP(a) cavm_usbhx_uahc_gprtbimap_t
#define bustype_CAVM_USBHX_UAHC_GPRTBIMAP(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UAHC_GPRTBIMAP(a) "USBHX_UAHC_GPRTBIMAP"
#define device_bar_CAVM_USBHX_UAHC_GPRTBIMAP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GPRTBIMAP(a) (a)
#define arguments_CAVM_USBHX_UAHC_GPRTBIMAP(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uahc_gprtbimap_fs
 *
 * USB UAHC Full/Low-Speed Port-to-Bus Instance Mapping Register
 * This register specifies the full-speed/low-speed USB instance number to which each USB 1.1
 * port is connected. By default, USB 1.1 ports are evenly distributed among all full-speed/
 * low-speed USB instances. Software can program this register to specify how USB 1.1 ports are
 * connected to full-speed/low-speed USB instances. The UAHC only implements one full-speed/
 * low-speed bus-instance, so this register should always be 0x0.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_gprtbimap_fs
{
    uint64_t u;
    struct cavm_usbhx_uahc_gprtbimap_fs_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t binum1                : 4;  /**< [  3:  0](R/W) Full-speed USB instance number for port 1. */
#else /* Word 0 - Little Endian */
        uint64_t binum1                : 4;  /**< [  3:  0](R/W) Full-speed USB instance number for port 1. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gprtbimap_fs_s cn; */
};
typedef union cavm_usbhx_uahc_gprtbimap_fs cavm_usbhx_uahc_gprtbimap_fs_t;

static inline uint64_t CAVM_USBHX_UAHC_GPRTBIMAP_FS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GPRTBIMAP_FS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c188ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c188ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GPRTBIMAP_FS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GPRTBIMAP_FS(a) cavm_usbhx_uahc_gprtbimap_fs_t
#define bustype_CAVM_USBHX_UAHC_GPRTBIMAP_FS(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UAHC_GPRTBIMAP_FS(a) "USBHX_UAHC_GPRTBIMAP_FS"
#define device_bar_CAVM_USBHX_UAHC_GPRTBIMAP_FS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GPRTBIMAP_FS(a) (a)
#define arguments_CAVM_USBHX_UAHC_GPRTBIMAP_FS(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uahc_gprtbimap_hs0
 *
 * USB UAHC High-Speed Port-to-Bus Instance Mapping Register
 * This register specifies the high-speed USB instance number to which each USB 2.0 port is
 * connected. By default, USB 2.0 ports are evenly distributed among all high-speed USB
 * instances. Software can program this register to specify how USB 2.0 ports are connected to
 * high-speed USB instances. The UAHC only implements one high-speed bus-instance, so this
 * register should always be 0.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_gprtbimap_hs0
{
    uint64_t u;
    struct cavm_usbhx_uahc_gprtbimap_hs0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t binum1                : 4;  /**< [  3:  0](R/W) High-speed USB instance number for port 1. */
#else /* Word 0 - Little Endian */
        uint64_t binum1                : 4;  /**< [  3:  0](R/W) High-speed USB instance number for port 1. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gprtbimap_hs0_s cn; */
};
typedef union cavm_usbhx_uahc_gprtbimap_hs0 cavm_usbhx_uahc_gprtbimap_hs0_t;

static inline uint64_t CAVM_USBHX_UAHC_GPRTBIMAP_HS0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GPRTBIMAP_HS0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c180ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c180ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GPRTBIMAP_HS0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GPRTBIMAP_HS0(a) cavm_usbhx_uahc_gprtbimap_hs0_t
#define bustype_CAVM_USBHX_UAHC_GPRTBIMAP_HS0(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UAHC_GPRTBIMAP_HS0(a) "USBHX_UAHC_GPRTBIMAP_HS0"
#define device_bar_CAVM_USBHX_UAHC_GPRTBIMAP_HS0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GPRTBIMAP_HS0(a) (a)
#define arguments_CAVM_USBHX_UAHC_GPRTBIMAP_HS0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_grlsid
 *
 * USB UAHC Release ID Register
 * This is a read-only register that contains the release number of the core.
 */
union cavm_usbhx_uahc_grlsid
{
    uint32_t u;
    struct cavm_usbhx_uahc_grlsid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t synopsysip            : 32; /**< [ 31:  0](RO) Software can use this register to configure release-specific features in the driver. */
#else /* Word 0 - Little Endian */
        uint32_t synopsysip            : 32; /**< [ 31:  0](RO) Software can use this register to configure release-specific features in the driver. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_grlsid_s cn; */
};
typedef union cavm_usbhx_uahc_grlsid cavm_usbhx_uahc_grlsid_t;

static inline uint64_t CAVM_USBHX_UAHC_GRLSID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GRLSID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c120ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c120ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GRLSID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GRLSID(a) cavm_usbhx_uahc_grlsid_t
#define bustype_CAVM_USBHX_UAHC_GRLSID(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GRLSID(a) "USBHX_UAHC_GRLSID"
#define device_bar_CAVM_USBHX_UAHC_GRLSID(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GRLSID(a) (a)
#define arguments_CAVM_USBHX_UAHC_GRLSID(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_grxfifoprihst
 *
 * USB UAHC RxFIFOs DMA Priority Register
 * This register specifies the relative DMA priority level among the host RxFIFOs (one per USB
 * bus instance) within the associated speed group (SuperSpeedPlus or high-speed/full-speed/
 * low-speed). When multiple RxFIFOs compete for DMA service at a given time, the RXDMA arbiter
 * grants access on a packet-basis in the following manner:
 *
 * Among the FIFOs in the same speed group (SuperSpeedPlus or high-speed/full-speed/low-speed):
 * * High-priority RxFIFOs are granted access using round-robin arbitration.
 * * Low-priority RxFIFOs are granted access using round-robin arbitration only after high-
 * priority
 * RxFIFOs have no further processing to do (i.e., either the RXQs are empty or the corresponding
 * RxFIFOs do not have the required data).
 *
 * The RX DMA arbiter prioritizes the SuperSpeedPlus group or high-speed/full-speed/low-speed group
 * according to the ratio programmed in
 * USBH()_UAHC_GDMAHLRATIO.
 *
 * For scatter-gather packets, the arbiter grants successive DMA requests to the same FIFO until
 * the entire packet is completed. The register size corresponds to the number of configured USB
 * bus instances; for example, in the default configuration, there are three USB bus instances (one
 * SuperSpeedPlus, one high-speed, and one full-speed/low-speed).
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_grxfifoprihst
{
    uint32_t u;
    struct cavm_usbhx_uahc_grxfifoprihst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t rx_priority           : 6;  /**< [  5:  0](R/W) Each register bit[n] controls the priority (1 = high, 0 = low) of RxFIFO[n] within a speed group. */
#else /* Word 0 - Little Endian */
        uint32_t rx_priority           : 6;  /**< [  5:  0](R/W) Each register bit[n] controls the priority (1 = high, 0 = low) of RxFIFO[n] within a speed group. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_grxfifoprihst_s cn; */
};
typedef union cavm_usbhx_uahc_grxfifoprihst cavm_usbhx_uahc_grxfifoprihst_t;

static inline uint64_t CAVM_USBHX_UAHC_GRXFIFOPRIHST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GRXFIFOPRIHST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c61cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c61cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GRXFIFOPRIHST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GRXFIFOPRIHST(a) cavm_usbhx_uahc_grxfifoprihst_t
#define bustype_CAVM_USBHX_UAHC_GRXFIFOPRIHST(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GRXFIFOPRIHST(a) "USBHX_UAHC_GRXFIFOPRIHST"
#define device_bar_CAVM_USBHX_UAHC_GRXFIFOPRIHST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GRXFIFOPRIHST(a) (a)
#define arguments_CAVM_USBHX_UAHC_GRXFIFOPRIHST(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_grxfifosiz#
 *
 * USB UAHC RX FIFO Size Register
 * The application can program the internal RAM start address/depth of the each RxFIFO as shown
 * below. It is recommended that software use the default value. In Host mode, per-port registers
 * are implemented. One register per FIFO.
 *
 * Reset values = 0:{0x0000_0084} 1:{0x0084_0104} 2:{0x0188_0180}.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_grxfifosizx
{
    uint32_t u;
    struct cavm_usbhx_uahc_grxfifosizx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rxfstaddr             : 16; /**< [ 31: 16](R/W) RxFIFOn RAM start address. This field contains the memory start address for RxFIFOn. The
                                                                 reset value is derived from configuration parameters. */
        uint32_t reserved_15           : 1;
        uint32_t rxfdep                : 15; /**< [ 14:  0](R/W) RxFIFOn depth. This value is in terms of RX RAM data width.
                                                                 minimum value = 0x20, maximum value = 0x4000. */
#else /* Word 0 - Little Endian */
        uint32_t rxfdep                : 15; /**< [ 14:  0](R/W) RxFIFOn depth. This value is in terms of RX RAM data width.
                                                                 minimum value = 0x20, maximum value = 0x4000. */
        uint32_t reserved_15           : 1;
        uint32_t rxfstaddr             : 16; /**< [ 31: 16](R/W) RxFIFOn RAM start address. This field contains the memory start address for RxFIFOn. The
                                                                 reset value is derived from configuration parameters. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_grxfifosizx_s cn; */
};
typedef union cavm_usbhx_uahc_grxfifosizx cavm_usbhx_uahc_grxfifosizx_t;

static inline uint64_t CAVM_USBHX_UAHC_GRXFIFOSIZX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GRXFIFOSIZX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b<=5)))
        return 0x86800000c380ll + 0x1000000000ll * ((a) & 0x1) + 4ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b<=5)))
        return 0x86800000c380ll + 0x1000000000ll * ((a) & 0x1) + 4ll * ((b) & 0x7);
    __cavm_csr_fatal("USBHX_UAHC_GRXFIFOSIZX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GRXFIFOSIZX(a,b) cavm_usbhx_uahc_grxfifosizx_t
#define bustype_CAVM_USBHX_UAHC_GRXFIFOSIZX(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GRXFIFOSIZX(a,b) "USBHX_UAHC_GRXFIFOSIZX"
#define device_bar_CAVM_USBHX_UAHC_GRXFIFOSIZX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GRXFIFOSIZX(a,b) (a)
#define arguments_CAVM_USBHX_UAHC_GRXFIFOSIZX(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) usbh#_uahc_grxthrcfg
 *
 * USB UAHC RX Threshold Control Register
 * In a normal case, an RX burst starts as soon as 1-packet space is available. This works well
 * as long as the system bus is faster than the USB3.0 bus (a 1024-bytes packet takes ~2.2 us on
 * the USB bus in SuperSpeedPlus mode). If the system bus latency is larger than 2.2 us to access a
 * 1024-byte packet, then starting a burst on 1-packet condition leads to an early abort of the
 * burst causing unnecessary performance reduction. This register allows the configuration of
 * threshold and burst size control. This feature is enabled by USBRXPKTCNTSEL.
 *
 * Receive Path:
 * * The RX threshold is controlled by USBRXPKTCNT and the RX burst size is controlled by
 * USBMAXRXBURSTSIZE.
 * * Selecting optimal RxFIFO size, RX threshold, and RX burst size avoids RX burst aborts due
 * to overrun if the system bus is slower than USB. Once in a while overrun is OK, and there is
 * no functional issue.
 * * Some devices do not support terminating ACK retry. With these devices, host cannot set ACK=0
 * and Retry=0 and do retry later and you have to retry immediately. For such devices, minimize
 * retry due to underrun. Setting threshold and burst size guarantees this.
 * A larger RX threshold affects the performance since the scheduler is idle during this time.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_grxthrcfg
{
    uint32_t u;
    struct cavm_usbhx_uahc_grxthrcfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t usbrxpktcntsel        : 1;  /**< [ 26: 26](R/W) USB receive-packet-count enable. Enables/disables the USB reception multipacket
                                                                 thresholding:
                                                                 0 = the core can only start reception on the USB when the RxFIFO has space for at least
                                                                 one packet.
                                                                 1 = the core can only start reception on the USB when the RxFIFO has space for at least
                                                                 USBRXPKTCNT amount of packets.
                                                                 This mode is only used for SuperSpeedPlus. */
        uint32_t usbrxpktcnt           : 5;  /**< [ 25: 21](R/W) USB receive-packet count. In host-mode, specifies space (in number of packets) that must
                                                                 be available in the RxFIFO before the core can start the corresponding USB RX transaction
                                                                 (burst).
                                                                 This field is only valid when [USBRXPKTCNTSEL] = 1. The valid values are from 0x1 to 0xF.
                                                                 This field must be \<= [USBMAXRXBURSTSIZE]. */
        uint32_t usbmaxrxburstsize     : 5;  /**< [ 20: 16](R/W) USB maximum receive-burst size. Specifies the maximum bulk IN burst the core
                                                                 should do. When the system bus is slower than the USB, RxFIFO can overrun during a long
                                                                 burst.
                                                                 Program a smaller value to this field to limit the RX burst size that the core can do. It
                                                                 only applies to SuperSpeedPlus Bulk, Isochronous, and Interrupt IN endpoints.
                                                                 This field is only valid when [USBRXPKTCNTSEL] = 1. The valid values are from 0x1 to 0x10. */
        uint32_t usbrxthrnumpktsel_hs_prd : 1;/**< [ 15: 15](R/W) USB HS High Bandwidth Periodic Receive Packet Threshold Enable - Host Mode Only

                                                                 This field enables/disables the USB reception multi-packet thresholding:
                                                                 0= USB HS High Bandwidth Periodic Receive multi-packet thresholding is
                                                                 disabled.
                                                                 1= USB HS High Bandwidth Periodic Receive multi-packet thresholding is
                                                                 enabled.
                                                                 Note: The intent of using this bit is only when the system bus is slow and not
                                                                 able to cater to the data rate of High-Bandwidth endpoint (3076 bytes/uframe).
                                                                 If the system bus is slow, and if all the transactions of a High-Bandwidth
                                                                 endpoint could not be executed successfully, it would likely cause a compliance
                                                                 test failure (section 5.4.x of xHCI Compliance Test Specification). This issue
                                                                 is seen only with older PCI based USB-IF compliance devices. */
        uint32_t usbrxthrnumpkt_hs_prd : 2;  /**< [ 14: 13](R/W) USB HS High Bandwidth Periodic Receive Packet Threshold Count - Host Mode Only
                                                                 This field specifies the maximum number of packet space needed in the RXFIFO
                                                                 before the controller can start a HS Periodic High Bandwidth USB transaction.
                                                                 This field is valid only when USBRxPktCntSel_HS_Prd is 1. The valid values for
                                                                 this field are from 1 to 3. */
        uint32_t reserved_11_12        : 2;
        uint32_t usbrxthrnumpktsel_prd : 1;  /**< [ 10: 10](R/W) This field enables/disables the Periodic ESS USB reception multi-packet thresholding:
                                                                 0 = USB Periodic ESS Receive multi-packet thresholding is disabled.
                                                                 1 = USB Periodic ESS Receive multi-packet thresholding is enabled.
                                                                 This mode is only used for ESS. */
        uint32_t usbrxthrnumpkt_prd    : 5;  /**< [  9:  5](R/W) USB Periodic ESS Receive Packet Threshold Count - Host Mode Only. This field
                                                                 should be programmed to 0 in Device mode.
                                                                 This field specifies the minimum number of packet space needed in the RXFIFO
                                                                 before the controller can start a ESS periodic high-bandwidth USB transaction.
                                                                 This field is valid only when the USB Periodic ESS Receive Packet Threshold
                                                                 Enable field is set to 1. Valid values are from 1 to 16.
                                                                 Note: This field must be less than or equal to the USB Maximum Periodic RX Burst Size field. */
        uint32_t usbmaxrxburstsize_prd : 5;  /**< [  4:  0](R/W) USB Maximum Periodic ESS RX Burst Size - Host Mode Only. This field should be
                                                                 programmed to 0 in Device mode.
                                                                 When [USBRXTHRNUMPKTSEL_PRD] is 1, this field specifies the Maximum ESS Periodic
                                                                 IN burst the controller can execute. When the system bus is slower than the USB,
                                                                 RXFIFO can overrun during a long burst. */
#else /* Word 0 - Little Endian */
        uint32_t usbmaxrxburstsize_prd : 5;  /**< [  4:  0](R/W) USB Maximum Periodic ESS RX Burst Size - Host Mode Only. This field should be
                                                                 programmed to 0 in Device mode.
                                                                 When [USBRXTHRNUMPKTSEL_PRD] is 1, this field specifies the Maximum ESS Periodic
                                                                 IN burst the controller can execute. When the system bus is slower than the USB,
                                                                 RXFIFO can overrun during a long burst. */
        uint32_t usbrxthrnumpkt_prd    : 5;  /**< [  9:  5](R/W) USB Periodic ESS Receive Packet Threshold Count - Host Mode Only. This field
                                                                 should be programmed to 0 in Device mode.
                                                                 This field specifies the minimum number of packet space needed in the RXFIFO
                                                                 before the controller can start a ESS periodic high-bandwidth USB transaction.
                                                                 This field is valid only when the USB Periodic ESS Receive Packet Threshold
                                                                 Enable field is set to 1. Valid values are from 1 to 16.
                                                                 Note: This field must be less than or equal to the USB Maximum Periodic RX Burst Size field. */
        uint32_t usbrxthrnumpktsel_prd : 1;  /**< [ 10: 10](R/W) This field enables/disables the Periodic ESS USB reception multi-packet thresholding:
                                                                 0 = USB Periodic ESS Receive multi-packet thresholding is disabled.
                                                                 1 = USB Periodic ESS Receive multi-packet thresholding is enabled.
                                                                 This mode is only used for ESS. */
        uint32_t reserved_11_12        : 2;
        uint32_t usbrxthrnumpkt_hs_prd : 2;  /**< [ 14: 13](R/W) USB HS High Bandwidth Periodic Receive Packet Threshold Count - Host Mode Only
                                                                 This field specifies the maximum number of packet space needed in the RXFIFO
                                                                 before the controller can start a HS Periodic High Bandwidth USB transaction.
                                                                 This field is valid only when USBRxPktCntSel_HS_Prd is 1. The valid values for
                                                                 this field are from 1 to 3. */
        uint32_t usbrxthrnumpktsel_hs_prd : 1;/**< [ 15: 15](R/W) USB HS High Bandwidth Periodic Receive Packet Threshold Enable - Host Mode Only

                                                                 This field enables/disables the USB reception multi-packet thresholding:
                                                                 0= USB HS High Bandwidth Periodic Receive multi-packet thresholding is
                                                                 disabled.
                                                                 1= USB HS High Bandwidth Periodic Receive multi-packet thresholding is
                                                                 enabled.
                                                                 Note: The intent of using this bit is only when the system bus is slow and not
                                                                 able to cater to the data rate of High-Bandwidth endpoint (3076 bytes/uframe).
                                                                 If the system bus is slow, and if all the transactions of a High-Bandwidth
                                                                 endpoint could not be executed successfully, it would likely cause a compliance
                                                                 test failure (section 5.4.x of xHCI Compliance Test Specification). This issue
                                                                 is seen only with older PCI based USB-IF compliance devices. */
        uint32_t usbmaxrxburstsize     : 5;  /**< [ 20: 16](R/W) USB maximum receive-burst size. Specifies the maximum bulk IN burst the core
                                                                 should do. When the system bus is slower than the USB, RxFIFO can overrun during a long
                                                                 burst.
                                                                 Program a smaller value to this field to limit the RX burst size that the core can do. It
                                                                 only applies to SuperSpeedPlus Bulk, Isochronous, and Interrupt IN endpoints.
                                                                 This field is only valid when [USBRXPKTCNTSEL] = 1. The valid values are from 0x1 to 0x10. */
        uint32_t usbrxpktcnt           : 5;  /**< [ 25: 21](R/W) USB receive-packet count. In host-mode, specifies space (in number of packets) that must
                                                                 be available in the RxFIFO before the core can start the corresponding USB RX transaction
                                                                 (burst).
                                                                 This field is only valid when [USBRXPKTCNTSEL] = 1. The valid values are from 0x1 to 0xF.
                                                                 This field must be \<= [USBMAXRXBURSTSIZE]. */
        uint32_t usbrxpktcntsel        : 1;  /**< [ 26: 26](R/W) USB receive-packet-count enable. Enables/disables the USB reception multipacket
                                                                 thresholding:
                                                                 0 = the core can only start reception on the USB when the RxFIFO has space for at least
                                                                 one packet.
                                                                 1 = the core can only start reception on the USB when the RxFIFO has space for at least
                                                                 USBRXPKTCNT amount of packets.
                                                                 This mode is only used for SuperSpeedPlus. */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_grxthrcfg_s cn; */
};
typedef union cavm_usbhx_uahc_grxthrcfg cavm_usbhx_uahc_grxthrcfg_t;

static inline uint64_t CAVM_USBHX_UAHC_GRXTHRCFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GRXTHRCFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c10cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c10cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GRXTHRCFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GRXTHRCFG(a) cavm_usbhx_uahc_grxthrcfg_t
#define bustype_CAVM_USBHX_UAHC_GRXTHRCFG(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GRXTHRCFG(a) "USBHX_UAHC_GRXTHRCFG"
#define device_bar_CAVM_USBHX_UAHC_GRXTHRCFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GRXTHRCFG(a) (a)
#define arguments_CAVM_USBHX_UAHC_GRXTHRCFG(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gsbuscfg0
 *
 * USB UAHC Bus Configuration Register 0
 * This register can be used to configure the core after power-on or a change in mode of
 * operation. This register mainly contains AXI system-related configuration parameters. Do not
 * change this register after the initial programming. The application must program this register
 * before starting any transactions on AXI. When [INCRBRSTENA] is enabled, it has the highest
 * priority over other burst lengths. The core always performs the largest burst when enabled.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_gsbuscfg0
{
    uint32_t u;
    struct cavm_usbhx_uahc_gsbuscfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t datrdreqinfo          : 4;  /**< [ 31: 28](R/W) AXI-cache for data-read operations. Always set to 0x0. */
        uint32_t desrdreqinfo          : 4;  /**< [ 27: 24](R/W) AXI-cache for descriptor-read operations. Always set to 0x0. */
        uint32_t datwrreqinfo          : 4;  /**< [ 23: 20](R/W) AXI-cache for data-write operations. Always set to 0x0. */
        uint32_t deswrreqinfo          : 4;  /**< [ 19: 16](R/W) AXI-cache for descriptor-write operations. Always set to 0x0. */
        uint32_t reserved_12_15        : 4;
        uint32_t datbigend             : 1;  /**< [ 11: 11](R/W) Data access is big-endian. Keep this set to 0 (little-endian) and use the
                                                                 USBH()_UCTL_SHIM_CFG[DMA_ENDIAN_MODE] setting instead.

                                                                 For diagnostic use only, drivers should be written assuming little-endian. */
        uint32_t descbigend            : 1;  /**< [ 10: 10](R/W) Descriptor access is big-endian. Keep this set to 0 (little-endian) and use the
                                                                 USBH()_UCTL_SHIM_CFG[DMA_ENDIAN_MODE] setting instead.

                                                                 For diagnostic use only, drivers should be written assuming little-endian. */
        uint32_t reserved_8_9          : 2;
        uint32_t incr256brstena        : 1;  /**< [  7:  7](R/W) INCR256 burst-type enable. Always set to 0. */
        uint32_t incr128brstena        : 1;  /**< [  6:  6](R/W) INCR128 burst-type enable. Always set to 0. */
        uint32_t incr64brstena         : 1;  /**< [  5:  5](R/W) INCR64 burst-type enable. Always set to 0. */
        uint32_t incr32brstena         : 1;  /**< [  4:  4](R/W) INCR32 burst-type enable. Always set to 0. */
        uint32_t incr16brstena         : 1;  /**< [  3:  3](R/W) INCR16 burst-type enable. Always set to 0. */
        uint32_t incr8brstena          : 1;  /**< [  2:  2](R/W) INCR8 burst-type enable. Allows the AXI master to generate INCR eight-beat bursts. */
        uint32_t incr4brstena          : 1;  /**< [  1:  1](R/W) INCR4 burst-type enable. Allows the AXI master to generate INCR four-beat bursts. */
        uint32_t incrbrstena           : 1;  /**< [  0:  0](R/W) Undefined-length INCR burst-type enable.
                                                                 This bit determines the set of burst lengths to be utilized by the master interface. It
                                                                 works in conjunction with the GSBUSCFG0[7:1] enables (INCR*BRSTENA).

                                                                 If disabled, the AXI master will use only the burst lengths
                                                                 1, 4, 8, 16 (assuming the INCR*BRSTENA are set to their reset values).

                                                                 If enabled, the AXI master uses any length less than or equal to the largest-enabled burst
                                                                 length based on the INCR*BRSTENA fields. */
#else /* Word 0 - Little Endian */
        uint32_t incrbrstena           : 1;  /**< [  0:  0](R/W) Undefined-length INCR burst-type enable.
                                                                 This bit determines the set of burst lengths to be utilized by the master interface. It
                                                                 works in conjunction with the GSBUSCFG0[7:1] enables (INCR*BRSTENA).

                                                                 If disabled, the AXI master will use only the burst lengths
                                                                 1, 4, 8, 16 (assuming the INCR*BRSTENA are set to their reset values).

                                                                 If enabled, the AXI master uses any length less than or equal to the largest-enabled burst
                                                                 length based on the INCR*BRSTENA fields. */
        uint32_t incr4brstena          : 1;  /**< [  1:  1](R/W) INCR4 burst-type enable. Allows the AXI master to generate INCR four-beat bursts. */
        uint32_t incr8brstena          : 1;  /**< [  2:  2](R/W) INCR8 burst-type enable. Allows the AXI master to generate INCR eight-beat bursts. */
        uint32_t incr16brstena         : 1;  /**< [  3:  3](R/W) INCR16 burst-type enable. Always set to 0. */
        uint32_t incr32brstena         : 1;  /**< [  4:  4](R/W) INCR32 burst-type enable. Always set to 0. */
        uint32_t incr64brstena         : 1;  /**< [  5:  5](R/W) INCR64 burst-type enable. Always set to 0. */
        uint32_t incr128brstena        : 1;  /**< [  6:  6](R/W) INCR128 burst-type enable. Always set to 0. */
        uint32_t incr256brstena        : 1;  /**< [  7:  7](R/W) INCR256 burst-type enable. Always set to 0. */
        uint32_t reserved_8_9          : 2;
        uint32_t descbigend            : 1;  /**< [ 10: 10](R/W) Descriptor access is big-endian. Keep this set to 0 (little-endian) and use the
                                                                 USBH()_UCTL_SHIM_CFG[DMA_ENDIAN_MODE] setting instead.

                                                                 For diagnostic use only, drivers should be written assuming little-endian. */
        uint32_t datbigend             : 1;  /**< [ 11: 11](R/W) Data access is big-endian. Keep this set to 0 (little-endian) and use the
                                                                 USBH()_UCTL_SHIM_CFG[DMA_ENDIAN_MODE] setting instead.

                                                                 For diagnostic use only, drivers should be written assuming little-endian. */
        uint32_t reserved_12_15        : 4;
        uint32_t deswrreqinfo          : 4;  /**< [ 19: 16](R/W) AXI-cache for descriptor-write operations. Always set to 0x0. */
        uint32_t datwrreqinfo          : 4;  /**< [ 23: 20](R/W) AXI-cache for data-write operations. Always set to 0x0. */
        uint32_t desrdreqinfo          : 4;  /**< [ 27: 24](R/W) AXI-cache for descriptor-read operations. Always set to 0x0. */
        uint32_t datrdreqinfo          : 4;  /**< [ 31: 28](R/W) AXI-cache for data-read operations. Always set to 0x0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gsbuscfg0_s cn; */
};
typedef union cavm_usbhx_uahc_gsbuscfg0 cavm_usbhx_uahc_gsbuscfg0_t;

static inline uint64_t CAVM_USBHX_UAHC_GSBUSCFG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GSBUSCFG0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c100ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c100ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GSBUSCFG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GSBUSCFG0(a) cavm_usbhx_uahc_gsbuscfg0_t
#define bustype_CAVM_USBHX_UAHC_GSBUSCFG0(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GSBUSCFG0(a) "USBHX_UAHC_GSBUSCFG0"
#define device_bar_CAVM_USBHX_UAHC_GSBUSCFG0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GSBUSCFG0(a) (a)
#define arguments_CAVM_USBHX_UAHC_GSBUSCFG0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gsbuscfg1
 *
 * USB UAHC Bus Configuration Register 1
 * This register can be used to configure the core after power-on or a change in mode of
 * operation. This register mainly contains AXI system-related configuration parameters. Do not
 * change this register after the initial programming. The application must program this register
 * before starting any transactions on AXI.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_gsbuscfg1
{
    uint32_t u;
    struct cavm_usbhx_uahc_gsbuscfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t extdpipetranslimit    : 4;  /**< [ 16: 13](R/W) AXI Pipelined Transfers Extended Burst Request Limit. Note = this field must be
                                                                 programmed to a value lesser than DWC_USB31_MAXI_REQUESTS. */
        uint32_t en1kpage              : 1;  /**< [ 12: 12](R/W) 1K page-boundary enable.
                                                                 0 = Break transfers at the 4K page boundary (default).
                                                                 1 = Break transfers at the 1K page boundary. */
        uint32_t pipetranslimit        : 4;  /**< [ 11:  8](R/W) AXI pipelined transfers burst-request limit. Controls the number of outstanding pipelined
                                                                 transfers requests the AXI master will push to the AXI slave. Once the AXI master reaches
                                                                 this limit, it does not make more requests on the AXI ARADDR and AWADDR buses until the
                                                                 associated data phases complete. This field is encoded as follows:
                                                                 0x0 = 1 request. 0x8 = 9 requests.
                                                                 0x1 = 2 requests. 0x9 = 10 requests.
                                                                 0x2 = 3 requests. 0xA = 11 requests.
                                                                 0x3 = 4 requests. 0xB = 12 requests.
                                                                 0x4 = 5 requests. 0xC = 13 requests.
                                                                 0x5 = 6 requests. 0xD = 14 requests.
                                                                 0x6 = 7 requests. 0xE = 15 requests.
                                                                 0x7 = 8 requests. 0xF = 16 requests. */
        uint32_t reserved_0_7          : 8;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_7          : 8;
        uint32_t pipetranslimit        : 4;  /**< [ 11:  8](R/W) AXI pipelined transfers burst-request limit. Controls the number of outstanding pipelined
                                                                 transfers requests the AXI master will push to the AXI slave. Once the AXI master reaches
                                                                 this limit, it does not make more requests on the AXI ARADDR and AWADDR buses until the
                                                                 associated data phases complete. This field is encoded as follows:
                                                                 0x0 = 1 request. 0x8 = 9 requests.
                                                                 0x1 = 2 requests. 0x9 = 10 requests.
                                                                 0x2 = 3 requests. 0xA = 11 requests.
                                                                 0x3 = 4 requests. 0xB = 12 requests.
                                                                 0x4 = 5 requests. 0xC = 13 requests.
                                                                 0x5 = 6 requests. 0xD = 14 requests.
                                                                 0x6 = 7 requests. 0xE = 15 requests.
                                                                 0x7 = 8 requests. 0xF = 16 requests. */
        uint32_t en1kpage              : 1;  /**< [ 12: 12](R/W) 1K page-boundary enable.
                                                                 0 = Break transfers at the 4K page boundary (default).
                                                                 1 = Break transfers at the 1K page boundary. */
        uint32_t extdpipetranslimit    : 4;  /**< [ 16: 13](R/W) AXI Pipelined Transfers Extended Burst Request Limit. Note = this field must be
                                                                 programmed to a value lesser than DWC_USB31_MAXI_REQUESTS. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gsbuscfg1_s cn; */
};
typedef union cavm_usbhx_uahc_gsbuscfg1 cavm_usbhx_uahc_gsbuscfg1_t;

static inline uint64_t CAVM_USBHX_UAHC_GSBUSCFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GSBUSCFG1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c104ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c104ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GSBUSCFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GSBUSCFG1(a) cavm_usbhx_uahc_gsbuscfg1_t
#define bustype_CAVM_USBHX_UAHC_GSBUSCFG1(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GSBUSCFG1(a) "USBHX_UAHC_GSBUSCFG1"
#define device_bar_CAVM_USBHX_UAHC_GSBUSCFG1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GSBUSCFG1(a) (a)
#define arguments_CAVM_USBHX_UAHC_GSBUSCFG1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gsmacctl
 *
 * USBH UAHC Gsmacctl Register
 * Global SMAC CONTROL REGISTER
 */
union cavm_usbhx_uahc_gsmacctl
{
    uint32_t u;
    struct cavm_usbhx_uahc_gsmacctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dbg_tis_index         : 2;  /**< [ 31: 30](R/W) SMAC bus instance index */
        uint32_t dbg_ptl_addr          : 4;  /**< [ 29: 26](R/W) PTL debug address */
        uint32_t reserved_18_25        : 8;
        uint32_t hostin_signle_en      : 1;  /**< [ 17: 17](R/W) Host: Limit a maximum of one active IN transfer on USB at a time */
        uint32_t hostout_single_en     : 1;  /**< [ 16: 16](R/W) Host: Limit a maximum of one active OUT transfer on USB at a time */
        uint32_t reserved_4_15         : 12;
        uint32_t single_psqdir_en      : 1;  /**< [  3:  3](R/W) Enable PSQ message type [PSQDIR] sorting

                                                                 If this bit is set, enables PSQ message sorting with PSQDIR:

                                                                  0: PSQDIR=0 for all messages

                                                                  1: PSQDIR=0 for OUT endpoints, CTRL endpoints, non-transaction headers (ie Vendor LMP)

                                                                     PSQDIR=1 for IN endpoints */
        uint32_t host_mask_nump0       : 1;  /**< [  2:  2](R/W) Mask TPACK nump0 (stream) with nump1

                                                                 LSP workaround - for host stream transfers, if TP.ACK.nump=0 is received, then
                                                                 convert to nump=1 to avoid flow control

                                                                 If this bit is set, the controller converts TP.ACK.nump=0 to TP.ACK.nump=1.
                                                                  - 0: Normal operation
                                                                  - 1: Convert TP.ACK nump=0 to nump=1 */
        uint32_t ignore_babble         : 1;  /**< [  1:  1](R/W) When the controller receives data packets, a payload that exceeds the allowed
                                                                 Max Packet Size is considered a babble condition.

                                                                 If this bit is set, the controller ignores babble conditions.
                                                                  - 0: detect receive payload babble conditions
                                                                  - 1: ignore receive payload babble conditions */
        uint32_t single_tbt_req        : 1;  /**< [  0:  0](R/W) Disable pipelined Transmit Data

                                                                 The transmit data path utilizes an internal pipeline to reduce interpacket delay
                                                                 during burst transmit.

                                                                 Setting this bit disables the pipeline mechanism. Interpacket delay is increased
                                                                 if pipelining is disabled.
                                                                  - 0: enable transmit data pipelining
                                                                  - 1: disable transmit data pipelining */
#else /* Word 0 - Little Endian */
        uint32_t single_tbt_req        : 1;  /**< [  0:  0](R/W) Disable pipelined Transmit Data

                                                                 The transmit data path utilizes an internal pipeline to reduce interpacket delay
                                                                 during burst transmit.

                                                                 Setting this bit disables the pipeline mechanism. Interpacket delay is increased
                                                                 if pipelining is disabled.
                                                                  - 0: enable transmit data pipelining
                                                                  - 1: disable transmit data pipelining */
        uint32_t ignore_babble         : 1;  /**< [  1:  1](R/W) When the controller receives data packets, a payload that exceeds the allowed
                                                                 Max Packet Size is considered a babble condition.

                                                                 If this bit is set, the controller ignores babble conditions.
                                                                  - 0: detect receive payload babble conditions
                                                                  - 1: ignore receive payload babble conditions */
        uint32_t host_mask_nump0       : 1;  /**< [  2:  2](R/W) Mask TPACK nump0 (stream) with nump1

                                                                 LSP workaround - for host stream transfers, if TP.ACK.nump=0 is received, then
                                                                 convert to nump=1 to avoid flow control

                                                                 If this bit is set, the controller converts TP.ACK.nump=0 to TP.ACK.nump=1.
                                                                  - 0: Normal operation
                                                                  - 1: Convert TP.ACK nump=0 to nump=1 */
        uint32_t single_psqdir_en      : 1;  /**< [  3:  3](R/W) Enable PSQ message type [PSQDIR] sorting

                                                                 If this bit is set, enables PSQ message sorting with PSQDIR:

                                                                  0: PSQDIR=0 for all messages

                                                                  1: PSQDIR=0 for OUT endpoints, CTRL endpoints, non-transaction headers (ie Vendor LMP)

                                                                     PSQDIR=1 for IN endpoints */
        uint32_t reserved_4_15         : 12;
        uint32_t hostout_single_en     : 1;  /**< [ 16: 16](R/W) Host: Limit a maximum of one active OUT transfer on USB at a time */
        uint32_t hostin_signle_en      : 1;  /**< [ 17: 17](R/W) Host: Limit a maximum of one active IN transfer on USB at a time */
        uint32_t reserved_18_25        : 8;
        uint32_t dbg_ptl_addr          : 4;  /**< [ 29: 26](R/W) PTL debug address */
        uint32_t dbg_tis_index         : 2;  /**< [ 31: 30](R/W) SMAC bus instance index */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gsmacctl_s cn; */
};
typedef union cavm_usbhx_uahc_gsmacctl cavm_usbhx_uahc_gsmacctl_t;

static inline uint64_t CAVM_USBHX_UAHC_GSMACCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GSMACCTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c604ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c604ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GSMACCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GSMACCTL(a) cavm_usbhx_uahc_gsmacctl_t
#define bustype_CAVM_USBHX_UAHC_GSMACCTL(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GSMACCTL(a) "USBHX_UAHC_GSMACCTL"
#define device_bar_CAVM_USBHX_UAHC_GSMACCTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GSMACCTL(a) (a)
#define arguments_CAVM_USBHX_UAHC_GSMACCTL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gsts
 *
 * USB UAHC Core Status Register
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_gsts
{
    uint32_t u;
    struct cavm_usbhx_uahc_gsts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t cbelt                 : 12; /**< [ 31: 20](RO/H) Current BELT value. In host mode, indicates the minimum value of all received device BELT
                                                                 values and the BELT value that is set by the set latency tolerance value command. */
        uint32_t reserved_8_19         : 12;
        uint32_t host_ip               : 1;  /**< [  7:  7](RO/H) Host interrupt pending. Indicates that there is a pending interrupt pertaining to xHC in
                                                                 the host-event queue. */
        uint32_t device_ip             : 1;  /**< [  6:  6](RO/H) Device interrupt pending. Indicates that there is a pending interrupt pertaining to
                                                                 peripheral (device) operation in the Device event queue. */
        uint32_t csrtimeout            : 1;  /**< [  5:  5](R/W1C/H) CSR timeout. When set to 1, indicates that software performed a write or read operation to
                                                                 a core register that could not be completed within 0xFFFF controller-clock cycles. */
        uint32_t buserraddrvld         : 1;  /**< [  4:  4](R/W1C/H) Bus-error address valid. Indicates that USBH()_UAHC_GBUSERRADDR is valid and reports the
                                                                 first bus address that encounters a bus error. */
        uint32_t reserved_2_3          : 2;
        uint32_t curmod                : 2;  /**< [  1:  0](RO/H) Current mode of operation. 0x0 for device, 0x1 for host. */
#else /* Word 0 - Little Endian */
        uint32_t curmod                : 2;  /**< [  1:  0](RO/H) Current mode of operation. 0x0 for device, 0x1 for host. */
        uint32_t reserved_2_3          : 2;
        uint32_t buserraddrvld         : 1;  /**< [  4:  4](R/W1C/H) Bus-error address valid. Indicates that USBH()_UAHC_GBUSERRADDR is valid and reports the
                                                                 first bus address that encounters a bus error. */
        uint32_t csrtimeout            : 1;  /**< [  5:  5](R/W1C/H) CSR timeout. When set to 1, indicates that software performed a write or read operation to
                                                                 a core register that could not be completed within 0xFFFF controller-clock cycles. */
        uint32_t device_ip             : 1;  /**< [  6:  6](RO/H) Device interrupt pending. Indicates that there is a pending interrupt pertaining to
                                                                 peripheral (device) operation in the Device event queue. */
        uint32_t host_ip               : 1;  /**< [  7:  7](RO/H) Host interrupt pending. Indicates that there is a pending interrupt pertaining to xHC in
                                                                 the host-event queue. */
        uint32_t reserved_8_19         : 12;
        uint32_t cbelt                 : 12; /**< [ 31: 20](RO/H) Current BELT value. In host mode, indicates the minimum value of all received device BELT
                                                                 values and the BELT value that is set by the set latency tolerance value command. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gsts_s cn; */
};
typedef union cavm_usbhx_uahc_gsts cavm_usbhx_uahc_gsts_t;

static inline uint64_t CAVM_USBHX_UAHC_GSTS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GSTS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c118ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c118ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GSTS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GSTS(a) cavm_usbhx_uahc_gsts_t
#define bustype_CAVM_USBHX_UAHC_GSTS(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GSTS(a) "USBHX_UAHC_GSTS"
#define device_bar_CAVM_USBHX_UAHC_GSTS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GSTS(a) (a)
#define arguments_CAVM_USBHX_UAHC_GSTS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gsysblkwinctrl
 *
 * USBH UAHC GSYSBLKWINCTRL Register
 * Global System Bus Blocking Window Control.
 */
union cavm_usbhx_uahc_gsysblkwinctrl
{
    uint32_t u;
    struct cavm_usbhx_uahc_gsysblkwinctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sys_blocking_ok_all_the_time : 1;/**< [ 31: 31](R/W) Always assert ok_to_block_sysbus=1. */
        uint32_t disable_no_blocking_window : 1;/**< [ 30: 30](R/W) Setting this bit does not check u#f_start_no_blocking_time and uf_end_no_blocking_time */
        uint32_t erst_prefetching_en   : 1;  /**< [ 29: 29](R/W) "0 -the host controller will p#refetch one ERST entry into the
                                                                 cache when the current segment has only 1 TR#B left.
                                                                 1 -the host controller will prefe#tch one ERST entry into the cache
                                                                 based on the erst_prefetching_watermark.

                                                                 When LPDDR4 is used, enabling this feature c#an avoid the corner case in which
                                                                 the LSP is running out of event TRB and fetc#hing of a new ERST entry is blocked
                                                                 by re-training. This corner case may cause Q#OS issue on ISOC EPs.
                                                                 Enabling this feature may cause the complian#t test when the event ring size is
                                                                 changed by the driver."" */
        uint32_t erst_prefetching_watermark : 5;/**< [ 28: 24](R/W) "Controls when the host controller will pref#etch the next ERST entry into the
                                                                 cache before the current one runs out of TRB#s.
                                                                 Only have effect when the erst_prefetching_#en set to 1. The maximum valid value is 31
                                                                 When it is less than  2 (0 or 1), the event# ring handler will start the
                                                                 prefetching of the next ERST when the curren#t segment has only 1 TRB left
                                                                 otherwise  , the ERST prefetching starts wh#en current the current segment has
                                                                 the number of TRBs less than this register v#alue
                                                                 When LPDDR4 is used,  Setting erst_prefetch#ing_en to 1 and setting this
                                                                 register  a larger value an avoid the corner# case in which the LSP is running
                                                                 out of event TRB but fetching of a new ERST #entry is blocked by re-training.
                                                                 This corner case may cause #QOS issue on ISOC EPs.
                                                                 Setting it to larger than 15 may cause the #compliant test failure on the event
                                                                 ring size change test ." */
        uint32_t reserved_16_23        : 8;
        uint32_t end_no_blocking_time  : 8;  /**< [ 15:  8](R/W) Valid value: 0 to 63 */
        uint32_t beginining_no_blocking_time : 8;/**< [  7:  0](R/W) Valid value: 0 to 63 */
#else /* Word 0 - Little Endian */
        uint32_t beginining_no_blocking_time : 8;/**< [  7:  0](R/W) Valid value: 0 to 63 */
        uint32_t end_no_blocking_time  : 8;  /**< [ 15:  8](R/W) Valid value: 0 to 63 */
        uint32_t reserved_16_23        : 8;
        uint32_t erst_prefetching_watermark : 5;/**< [ 28: 24](R/W) "Controls when the host controller will pref#etch the next ERST entry into the
                                                                 cache before the current one runs out of TRB#s.
                                                                 Only have effect when the erst_prefetching_#en set to 1. The maximum valid value is 31
                                                                 When it is less than  2 (0 or 1), the event# ring handler will start the
                                                                 prefetching of the next ERST when the curren#t segment has only 1 TRB left
                                                                 otherwise  , the ERST prefetching starts wh#en current the current segment has
                                                                 the number of TRBs less than this register v#alue
                                                                 When LPDDR4 is used,  Setting erst_prefetch#ing_en to 1 and setting this
                                                                 register  a larger value an avoid the corner# case in which the LSP is running
                                                                 out of event TRB but fetching of a new ERST #entry is blocked by re-training.
                                                                 This corner case may cause #QOS issue on ISOC EPs.
                                                                 Setting it to larger than 15 may cause the #compliant test failure on the event
                                                                 ring size change test ." */
        uint32_t erst_prefetching_en   : 1;  /**< [ 29: 29](R/W) "0 -the host controller will p#refetch one ERST entry into the
                                                                 cache when the current segment has only 1 TR#B left.
                                                                 1 -the host controller will prefe#tch one ERST entry into the cache
                                                                 based on the erst_prefetching_watermark.

                                                                 When LPDDR4 is used, enabling this feature c#an avoid the corner case in which
                                                                 the LSP is running out of event TRB and fetc#hing of a new ERST entry is blocked
                                                                 by re-training. This corner case may cause Q#OS issue on ISOC EPs.
                                                                 Enabling this feature may cause the complian#t test when the event ring size is
                                                                 changed by the driver."" */
        uint32_t disable_no_blocking_window : 1;/**< [ 30: 30](R/W) Setting this bit does not check u#f_start_no_blocking_time and uf_end_no_blocking_time */
        uint32_t sys_blocking_ok_all_the_time : 1;/**< [ 31: 31](R/W) Always assert ok_to_block_sysbus=1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gsysblkwinctrl_s cn; */
};
typedef union cavm_usbhx_uahc_gsysblkwinctrl cavm_usbhx_uahc_gsysblkwinctrl_t;

static inline uint64_t CAVM_USBHX_UAHC_GSYSBLKWINCTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GSYSBLKWINCTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c1b0ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c1b0ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GSYSBLKWINCTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GSYSBLKWINCTRL(a) cavm_usbhx_uahc_gsysblkwinctrl_t
#define bustype_CAVM_USBHX_UAHC_GSYSBLKWINCTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GSYSBLKWINCTRL(a) "USBHX_UAHC_GSYSBLKWINCTRL"
#define device_bar_CAVM_USBHX_UAHC_GSYSBLKWINCTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GSYSBLKWINCTRL(a) (a)
#define arguments_CAVM_USBHX_UAHC_GSYSBLKWINCTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gtxfifoprihst
 *
 * USB UAHC Global Host TxFIFO DMA Priority Register
 * This register specifies the relative DMA priority level among the Host TxFIFOs (one per USB
 * bus instance) within the associated speed group (SuperSpeedPlus or HighSpeed/FullSpeed/LowSpeed).
 * When multiple TxFIFOs compete for DMA service at a given time, the TXDMA arbiter grants access
 * on a packet-basis in the following manner:
 *
 *   1. Among the FIFOs in the same speed group (SuperSpeedPlus or high-speed/full-speed/low-speed):
 *
 * _   a. High-priority TxFIFOs are granted access using round-robin arbitration
 *
 * _   b. Low-priority TxFIFOs are granted access using round-robin arbitration only after the
 *        high priority TxFIFOs have no further processing to do (i.e., either the TXQs are empty
 *        or the corresponding TxFIFOs are full).
 *        or the corresponding TxFIFOs are full).
 *
 *   2. The TX DMA arbiter prioritizes the SuperSpeedPlus group or high-speed/full-speed/low-speed
 *      group according to the ratio programmed in USBH()_UAHC_GDMAHLRATIO.
 *
 * For scatter-gather packets, the arbiter grants successive DMA requests to the same FIFO until
 * the entire packet is completed.
 * The register size corresponds to the number of configured USB bus instances; for example, in
 * the default configuration, there are three USB bus instances (one SuperSpeedPlus, one
 * high-speed, and one full-speed/low-speed).
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST],
 * or USBH()_UAHC_GCTL[CORESOFTRESET].
 */
union cavm_usbhx_uahc_gtxfifoprihst
{
    uint32_t u;
    struct cavm_usbhx_uahc_gtxfifoprihst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t tx_priority           : 6;  /**< [  5:  0](R/W) Each register bit n controls the priority (1 = high, 0 = low) of TxFIFO\<n\> within a speed
                                                                 group. */
#else /* Word 0 - Little Endian */
        uint32_t tx_priority           : 6;  /**< [  5:  0](R/W) Each register bit n controls the priority (1 = high, 0 = low) of TxFIFO\<n\> within a speed
                                                                 group. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gtxfifoprihst_s cn; */
};
typedef union cavm_usbhx_uahc_gtxfifoprihst cavm_usbhx_uahc_gtxfifoprihst_t;

static inline uint64_t CAVM_USBHX_UAHC_GTXFIFOPRIHST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GTXFIFOPRIHST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c610ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c610ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GTXFIFOPRIHST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GTXFIFOPRIHST(a) cavm_usbhx_uahc_gtxfifoprihst_t
#define bustype_CAVM_USBHX_UAHC_GTXFIFOPRIHST(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GTXFIFOPRIHST(a) "USBHX_UAHC_GTXFIFOPRIHST"
#define device_bar_CAVM_USBHX_UAHC_GTXFIFOPRIHST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GTXFIFOPRIHST(a) (a)
#define arguments_CAVM_USBHX_UAHC_GTXFIFOPRIHST(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gtxfifosiz#
 *
 * USB UAHC TX FIFO Size Registers
 * This register holds the internal RAM start address/depth of each TxFIFO implemented. Unless
 * packet size/buffer size for each endpoint is different and application-specific, it is
 * recommended that the software use the default value. One register per FIFO. One register per
 * FIFO.
 *
 * Reset values = 0:{0x0000_0082} 1:{0x0082_0103} 2:{0x0185_0205}.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_gtxfifosizx
{
    uint32_t u;
    struct cavm_usbhx_uahc_gtxfifosizx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t txfstaddr             : 16; /**< [ 31: 16](R/W) Transmit FIFOn RAM start address. Contains the memory start address for TxFIFOn. The reset
                                                                 is value derived from configuration parameters. */
        uint32_t reserved_15           : 1;
        uint32_t txfdep                : 15; /**< [ 14:  0](R/W) TxFIFOn depth. This value is in terms of TX RAM data width.
                                                                 minimum value = 0x20, maximum value = 0x8000. */
#else /* Word 0 - Little Endian */
        uint32_t txfdep                : 15; /**< [ 14:  0](R/W) TxFIFOn depth. This value is in terms of TX RAM data width.
                                                                 minimum value = 0x20, maximum value = 0x8000. */
        uint32_t reserved_15           : 1;
        uint32_t txfstaddr             : 16; /**< [ 31: 16](R/W) Transmit FIFOn RAM start address. Contains the memory start address for TxFIFOn. The reset
                                                                 is value derived from configuration parameters. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gtxfifosizx_s cn; */
};
typedef union cavm_usbhx_uahc_gtxfifosizx cavm_usbhx_uahc_gtxfifosizx_t;

static inline uint64_t CAVM_USBHX_UAHC_GTXFIFOSIZX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GTXFIFOSIZX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b<=5)))
        return 0x86800000c300ll + 0x1000000000ll * ((a) & 0x1) + 4ll * ((b) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b<=5)))
        return 0x86800000c300ll + 0x1000000000ll * ((a) & 0x1) + 4ll * ((b) & 0x7);
    __cavm_csr_fatal("USBHX_UAHC_GTXFIFOSIZX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GTXFIFOSIZX(a,b) cavm_usbhx_uahc_gtxfifosizx_t
#define bustype_CAVM_USBHX_UAHC_GTXFIFOSIZX(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GTXFIFOSIZX(a,b) "USBHX_UAHC_GTXFIFOSIZX"
#define device_bar_CAVM_USBHX_UAHC_GTXFIFOSIZX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GTXFIFOSIZX(a,b) (a)
#define arguments_CAVM_USBHX_UAHC_GTXFIFOSIZX(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gtxthrcfg
 *
 * USB UAHC TX Threshold Control Register
 * In a normal case, a TX burst starts as soon as one packet is prefetched. This works well as
 * long as the system bus is faster than the USB3.0 bus (a 1024-bytes packet takes ~2.2 us on the
 * USB bus in SuperSpeedPlus mode). If the system bus latency is larger than 2.2 us to access a
 * 1024-byte packet, then starting a burst on 1-packet condition leads to an early abort of the
 * burst causing unnecessary performance reduction. This register allows the configuration of
 * threshold and burst size control. This feature is enabled by [USBTXPKTCNTSEL].
 *
 * Transmit path:
 * * The TX threshold is controlled by [USBTXPKTCNT], and the TX burst size is controlled by
 * [USBMAXTXBURSTSIZE].
 * * Selecting optimal TxFIFO size, TX threshold, and TX burst size avoids TX burst aborts due
 * to an underrun if the system bus is slower than USB. Once in a while an underrun is OK, and
 * there is no functional issue.
 * * A larger threshold affects the performance, since the scheduler is idle during this time.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_gtxthrcfg
{
    uint32_t u;
    struct cavm_usbhx_uahc_gtxthrcfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t usbtxpktcntsel        : 1;  /**< [ 26: 26](R/W) USB transmit packet-count enable. Enables/disables the USB transmission multipacket
                                                                 thresholding:
                                                                 0 = USB transmission multipacket thresholding is disabled, the core can only start
                                                                 transmission on the USB after the entire packet has been fetched into the corresponding
                                                                 TxFIFO.
                                                                 1 = USB transmission multipacket thresholding is enabled. The core can only start
                                                                 transmission on the USB after USBTXPKTCNT amount of packets for the USB transaction
                                                                 (burst) are already in the corresponding TxFIFO.
                                                                 This mode is only used for SuperSpeedPlus. */
        uint32_t usbtxpktcnt           : 5;  /**< [ 25: 21](R/W) USB transmit-packet count. Specifies the number of packets that must be in the TxFIFO
                                                                 before the core can start transmission for the corresponding USB transaction (burst). This
                                                                 field is only valid when [USBTXPKTCNTSEL] = 1. Valid values are from 0x1 to 0xF.
                                                                 This field must be \<= [USBMAXTXBURSTSIZE]. */
        uint32_t usbmaxtxburstsize     : 5;  /**< [ 20: 16](R/W) USB maximum TX burst size. When [USBTXPKTCNTSEL] = 1, this field specifies the
                                                                 maximum bulk OUT burst the core should do. When the system bus is slower than
                                                                 the USB, TxFIFO can underrun during a long burst. Program a smaller value to
                                                                 this field to limit the TX burst size that the core can do. It only applies to
                                                                 SuperSpeedPlus bulk, isochronous, and interrupt OUT endpoints in the host
                                                                 mode. Valid values are from 0x1 to 0x10. */
        uint32_t usbtxthrnumpktsel_hs_prd : 1;/**< [ 15: 15](R/W) USB HS High Bandwidth Periodic Transmit Packet Threshold Enable - Host Mode Only
                                                                 0  = USB HS High Bandwidth Periodic transmission multi-packet thresholding is
                                                                 disabled; the controller can start transmission on the USB as soon as one packet
                                                                 has been fetched into the corresponding TXFIFO. 1  = USB HS High Bandwidth
                                                                 Periodic transmission multi-packet thresholding is enabled. The controller can
                                                                 start transmission on the USB only after USB HS High Bandwidth Periodic Transmit
                                                                 Packet Threshold Count number of packets for the Periodic High Bandwidth USB
                                                                 transaction is already in the corresponding TXFIFO. This mode is valid in host
                                                                 mode for high speed high bandwidth periodic endpoints. */
        uint32_t usbtxthrnumpkt_hs_prd : 2;  /**< [ 14: 13](R/W) This field specifies the number of packets that must be available in the TXFIFO
                                                                 before the controller can start transmission for the Periodic High Bandwidth USB
                                                                 transaction. This field is only valid when the USB HS High Bandwidth Periodic
                                                                 Transmit Packet Threshold Enable field is set to one. Valid values are from 1 to
                                                                 3. */
        uint32_t reserved_11_12        : 2;
        uint32_t usbtxthrnumpktsel_prd : 1;  /**< [ 10: 10](R/W) USB Periodic ESS Transmit Packet Threshold Enable - Host Mode Only
                                                                 This field enables/disables the USB Periodic transmission multi-packet thresholding:
                                                                 0 = USB transmission multi-packet thresholding is disabled; the controller
                                                                 starts transmission on the USB as soon as one packet has been fetched into the
                                                                 corresponding TXFIFO.
                                                                 1 = USB transmission multi-packet thresholding is enabled. The controller can
                                                                 start transmission on the USB only after USB Periodic ESS Transmit Packet
                                                                 Threshold Count amount of packets for the USB transaction (burst) has been
                                                                 fetched into the corresponding TXFIFO. It is used only for ESS. */
        uint32_t usbtxthrnumpkt_prd    : 5;  /**< [  9:  5](R/W) This field specifies the number of packets that must be in the TXFIFO before the
                                                                 controller can start transmission for the corresponding USB transaction (burst).
                                                                 This field is valid only when the USB Periodic ESS Transmit Packet Threshold
                                                                 Enable field (UsbTxThrNumPktSel_Prd) is set to one. Valid values are from 1 to
                                                                 16.
                                                                 Note: This field must be less than or equal to the USB Maximum Periodic TX Burst Size field. */
        uint32_t usbmaxtxburstsize_prd : 5;  /**< [  4:  0](R/W) When UsbTxThrNumPktSel_Prd is 1, this field specifies the Maximum Periodic OUT
                                                                 burst the controller can execute. When the system bus is slower than the USB,
                                                                 TXFIFO can underrun during a long burst.
                                                                 Note: This field can only be set to 2, 4, 8 or 16. */
#else /* Word 0 - Little Endian */
        uint32_t usbmaxtxburstsize_prd : 5;  /**< [  4:  0](R/W) When UsbTxThrNumPktSel_Prd is 1, this field specifies the Maximum Periodic OUT
                                                                 burst the controller can execute. When the system bus is slower than the USB,
                                                                 TXFIFO can underrun during a long burst.
                                                                 Note: This field can only be set to 2, 4, 8 or 16. */
        uint32_t usbtxthrnumpkt_prd    : 5;  /**< [  9:  5](R/W) This field specifies the number of packets that must be in the TXFIFO before the
                                                                 controller can start transmission for the corresponding USB transaction (burst).
                                                                 This field is valid only when the USB Periodic ESS Transmit Packet Threshold
                                                                 Enable field (UsbTxThrNumPktSel_Prd) is set to one. Valid values are from 1 to
                                                                 16.
                                                                 Note: This field must be less than or equal to the USB Maximum Periodic TX Burst Size field. */
        uint32_t usbtxthrnumpktsel_prd : 1;  /**< [ 10: 10](R/W) USB Periodic ESS Transmit Packet Threshold Enable - Host Mode Only
                                                                 This field enables/disables the USB Periodic transmission multi-packet thresholding:
                                                                 0 = USB transmission multi-packet thresholding is disabled; the controller
                                                                 starts transmission on the USB as soon as one packet has been fetched into the
                                                                 corresponding TXFIFO.
                                                                 1 = USB transmission multi-packet thresholding is enabled. The controller can
                                                                 start transmission on the USB only after USB Periodic ESS Transmit Packet
                                                                 Threshold Count amount of packets for the USB transaction (burst) has been
                                                                 fetched into the corresponding TXFIFO. It is used only for ESS. */
        uint32_t reserved_11_12        : 2;
        uint32_t usbtxthrnumpkt_hs_prd : 2;  /**< [ 14: 13](R/W) This field specifies the number of packets that must be available in the TXFIFO
                                                                 before the controller can start transmission for the Periodic High Bandwidth USB
                                                                 transaction. This field is only valid when the USB HS High Bandwidth Periodic
                                                                 Transmit Packet Threshold Enable field is set to one. Valid values are from 1 to
                                                                 3. */
        uint32_t usbtxthrnumpktsel_hs_prd : 1;/**< [ 15: 15](R/W) USB HS High Bandwidth Periodic Transmit Packet Threshold Enable - Host Mode Only
                                                                 0  = USB HS High Bandwidth Periodic transmission multi-packet thresholding is
                                                                 disabled; the controller can start transmission on the USB as soon as one packet
                                                                 has been fetched into the corresponding TXFIFO. 1  = USB HS High Bandwidth
                                                                 Periodic transmission multi-packet thresholding is enabled. The controller can
                                                                 start transmission on the USB only after USB HS High Bandwidth Periodic Transmit
                                                                 Packet Threshold Count number of packets for the Periodic High Bandwidth USB
                                                                 transaction is already in the corresponding TXFIFO. This mode is valid in host
                                                                 mode for high speed high bandwidth periodic endpoints. */
        uint32_t usbmaxtxburstsize     : 5;  /**< [ 20: 16](R/W) USB maximum TX burst size. When [USBTXPKTCNTSEL] = 1, this field specifies the
                                                                 maximum bulk OUT burst the core should do. When the system bus is slower than
                                                                 the USB, TxFIFO can underrun during a long burst. Program a smaller value to
                                                                 this field to limit the TX burst size that the core can do. It only applies to
                                                                 SuperSpeedPlus bulk, isochronous, and interrupt OUT endpoints in the host
                                                                 mode. Valid values are from 0x1 to 0x10. */
        uint32_t usbtxpktcnt           : 5;  /**< [ 25: 21](R/W) USB transmit-packet count. Specifies the number of packets that must be in the TxFIFO
                                                                 before the core can start transmission for the corresponding USB transaction (burst). This
                                                                 field is only valid when [USBTXPKTCNTSEL] = 1. Valid values are from 0x1 to 0xF.
                                                                 This field must be \<= [USBMAXTXBURSTSIZE]. */
        uint32_t usbtxpktcntsel        : 1;  /**< [ 26: 26](R/W) USB transmit packet-count enable. Enables/disables the USB transmission multipacket
                                                                 thresholding:
                                                                 0 = USB transmission multipacket thresholding is disabled, the core can only start
                                                                 transmission on the USB after the entire packet has been fetched into the corresponding
                                                                 TxFIFO.
                                                                 1 = USB transmission multipacket thresholding is enabled. The core can only start
                                                                 transmission on the USB after USBTXPKTCNT amount of packets for the USB transaction
                                                                 (burst) are already in the corresponding TxFIFO.
                                                                 This mode is only used for SuperSpeedPlus. */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gtxthrcfg_s cn; */
};
typedef union cavm_usbhx_uahc_gtxthrcfg cavm_usbhx_uahc_gtxthrcfg_t;

static inline uint64_t CAVM_USBHX_UAHC_GTXTHRCFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GTXTHRCFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c108ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c108ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GTXTHRCFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GTXTHRCFG(a) cavm_usbhx_uahc_gtxthrcfg_t
#define bustype_CAVM_USBHX_UAHC_GTXTHRCFG(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GTXTHRCFG(a) "USBHX_UAHC_GTXTHRCFG"
#define device_bar_CAVM_USBHX_UAHC_GTXTHRCFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GTXTHRCFG(a) (a)
#define arguments_CAVM_USBHX_UAHC_GTXTHRCFG(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_guctl
 *
 * USB UAHC Core User-Control Register
 * This register provides a few options for the software to control the core behavior in the host
 * mode. Most of the options are used to improve host interoperability with different devices.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_guctl
{
    uint32_t u;
    struct cavm_usbhx_uahc_guctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t refclkper             : 10; /**< [ 31: 22](R/W) Reference-clock period. Indicates (in terms of ns) the period of REF_CLK. The default
                                                                 value is set to 0x8
                                                                 (8 ns/125 MHz). This field must be updated during power on initialization if
                                                                 USBH()_UAHC_GCTL[SOFITPSYNC] = 1 or USBH()_UAHC_GFLADJ [GFLADJ_REFCLK_LPM_SEL] = 1.
                                                                 The
                                                                 programmable maximum value 62 ns, and the minimum value is 8 ns. You use a reference clock
                                                                 with a period that is a integer multiple, so that ITP can meet the jitter margin of 32 ns.
                                                                 The allowable REF_CLK frequencies whose period is not integer multiples are
                                                                 16/17/19.2/24/39.7 MHz.

                                                                 This field should not be set to 0x0 at any time. If you do not plan to use this feature,
                                                                 then you need to set this field to 0x8, the default value. */
        uint32_t noextrdl              : 1;  /**< [ 21: 21](R/W) No extra delay between SOF and the first packet.
                                                                 Some high-speed devices misbehave when the host sends a packet immediately after an SOF.
                                                                 However, adding an extra delay between an SOF and the first packet can reduce the USB data
                                                                 rate and performance.

                                                                 This bit is used to control whether the host should wait for 2 us before it sends the
                                                                 first packet after a SOF, or not. You can set this bit to 1 to improve the performance if
                                                                 those problematic devices are not a concern in your host environment.
                                                                 0 = host waits for 2 us after an SOF before it sends the first USB packet.
                                                                 1 = host does not wait after an SOF before it sends the first USB packet. */
        uint32_t dmaignorehce          : 1;  /**< [ 20: 20](R/W) DMA Ignore HCE */
        uint32_t ignorehcetimeout      : 1;  /**< [ 19: 19](R/W) IgnoreHCETimeout */
        uint32_t en_extd_tbc_cap       : 1;  /**< [ 18: 18](R/W) When set, the Extended TBC Capability is reported in HCCPARAMS2 if the
                                                                 DWC_USB31_EXTD_TBC_CAP_EN parameter is enabled. */
        uint32_t sprsctrltransen       : 1;  /**< [ 17: 17](R/W) Sparse control transaction enable. Some devices are slow in responding to control
                                                                 transfers. Scheduling multiple transactions in one microframe/frame can cause these
                                                                 devices to misbehave. If this bit is set to 1, the host controller schedules transactions
                                                                 for a control transfer in different microframes/frames. */
        uint32_t resbwhseps            : 1;  /**< [ 16: 16](R/W) Reserving 85% bandwidth for high-speed periodic EPs. By default, host controller reserves
                                                                 80% of the bandwidth for periodic EPs. If this bit is set, the bandwidth is relaxed to 85%
                                                                 to accommodate two high-speed, high-bandwidth ISOC EPs.

                                                                 USB 2.0 required 80% bandwidth allocated for ISOC traffic. If two high bandwidth ISOC
                                                                 devices (HD webcams) are connected, and if each requires 1024-bytes * 3 packets per
                                                                 microframe, then the bandwidth required is around 82%. If this bit is set to 1, it is
                                                                 possible to connect two webcams of 1024 bytes * 3 payload per microframe each. Otherwise,
                                                                 you may have to reduce the resolution of the webcams. */
        uint32_t reserved_15           : 1;
        uint32_t usbhstinautoretryen   : 1;  /**< [ 14: 14](R/W) Host IN auto-retry enable. When set, this field enables the auto-retry feature. For IN
                                                                 transfers (non-isochronous) that encounter data packets with CRC errors or internal
                                                                 overrun scenarios, the auto-retry feature causes the host core to reply to the device with
                                                                 a non-terminating retry ACK (i.e. an ACK transaction packet with Retry = 1 and NumP != 0).
                                                                 If the auto-retry feature is disabled (default), the core responds with a terminating
                                                                 retry ACK (i.e. an ACK transaction packet with Retry = 1 and NumP = 0). */
        uint32_t reserved_13           : 1;
        uint32_t extcapsupten          : 1;  /**< [ 12: 12](R/W) External extended capability support enable. If disabled, a read
                                                                 USBH()_UAHC_SUPTPRT3_DW0
                                                                 [NEXTCAPPTR] returns 0 in the next capability pointer field. This indicates there are no
                                                                 more capabilities. If enabled, a read to USBH()_UAHC_SUPTPRT3_DW0[NEXTCAPPTR] returns 4
                                                                 in
                                                                 the
                                                                 next capability pointer field.
                                                                 Always set to 0x0. */
        uint32_t insrtextrfsbodi       : 1;  /**< [ 11: 11](R/W) Insert extra delay between full-speed bulk OUT transactions. Some full-speed devices are
                                                                 slow to receive bulk OUT data and can get stuck when there are consecutive bulk OUT
                                                                 transactions with short inter-transaction delays. This bit is used to control whether the
                                                                 host inserts extra delay between consecutive bulk OUT transactions to a full-speed
                                                                 endpoint.
                                                                 0 = Host does not insert extra delay.
                                                                 Setting this bit to 1 reduces the bulk OUT transfer performance for most of the full-speed
                                                                 devices.
                                                                 1 = Host inserts about 12 us extra delay between consecutive bulk OUT transactions to an
                                                                 full-speed endpoint to work around the device issue. */
        uint32_t dtout                 : 11; /**< [ 10:  0](R/W) Device Timeout (DTOUT)
                                                                 This field is Host mode parameter which determines how long the host waits for
                                                                 response from Enhanced SuperSpeed Device before considering the transaction to
                                                                 be timeout. Each count indicates duration in terms of 125us.
                                                                 For example a value of 1 indicates timeout at the minimum of 125us and maximum
                                                                 of 250us. The maximum value that can be programmed is 200 which sets 25ms as
                                                                 timeout time (minimum is 25ms and maximum is 25.125ms). */
#else /* Word 0 - Little Endian */
        uint32_t dtout                 : 11; /**< [ 10:  0](R/W) Device Timeout (DTOUT)
                                                                 This field is Host mode parameter which determines how long the host waits for
                                                                 response from Enhanced SuperSpeed Device before considering the transaction to
                                                                 be timeout. Each count indicates duration in terms of 125us.
                                                                 For example a value of 1 indicates timeout at the minimum of 125us and maximum
                                                                 of 250us. The maximum value that can be programmed is 200 which sets 25ms as
                                                                 timeout time (minimum is 25ms and maximum is 25.125ms). */
        uint32_t insrtextrfsbodi       : 1;  /**< [ 11: 11](R/W) Insert extra delay between full-speed bulk OUT transactions. Some full-speed devices are
                                                                 slow to receive bulk OUT data and can get stuck when there are consecutive bulk OUT
                                                                 transactions with short inter-transaction delays. This bit is used to control whether the
                                                                 host inserts extra delay between consecutive bulk OUT transactions to a full-speed
                                                                 endpoint.
                                                                 0 = Host does not insert extra delay.
                                                                 Setting this bit to 1 reduces the bulk OUT transfer performance for most of the full-speed
                                                                 devices.
                                                                 1 = Host inserts about 12 us extra delay between consecutive bulk OUT transactions to an
                                                                 full-speed endpoint to work around the device issue. */
        uint32_t extcapsupten          : 1;  /**< [ 12: 12](R/W) External extended capability support enable. If disabled, a read
                                                                 USBH()_UAHC_SUPTPRT3_DW0
                                                                 [NEXTCAPPTR] returns 0 in the next capability pointer field. This indicates there are no
                                                                 more capabilities. If enabled, a read to USBH()_UAHC_SUPTPRT3_DW0[NEXTCAPPTR] returns 4
                                                                 in
                                                                 the
                                                                 next capability pointer field.
                                                                 Always set to 0x0. */
        uint32_t reserved_13           : 1;
        uint32_t usbhstinautoretryen   : 1;  /**< [ 14: 14](R/W) Host IN auto-retry enable. When set, this field enables the auto-retry feature. For IN
                                                                 transfers (non-isochronous) that encounter data packets with CRC errors or internal
                                                                 overrun scenarios, the auto-retry feature causes the host core to reply to the device with
                                                                 a non-terminating retry ACK (i.e. an ACK transaction packet with Retry = 1 and NumP != 0).
                                                                 If the auto-retry feature is disabled (default), the core responds with a terminating
                                                                 retry ACK (i.e. an ACK transaction packet with Retry = 1 and NumP = 0). */
        uint32_t reserved_15           : 1;
        uint32_t resbwhseps            : 1;  /**< [ 16: 16](R/W) Reserving 85% bandwidth for high-speed periodic EPs. By default, host controller reserves
                                                                 80% of the bandwidth for periodic EPs. If this bit is set, the bandwidth is relaxed to 85%
                                                                 to accommodate two high-speed, high-bandwidth ISOC EPs.

                                                                 USB 2.0 required 80% bandwidth allocated for ISOC traffic. If two high bandwidth ISOC
                                                                 devices (HD webcams) are connected, and if each requires 1024-bytes * 3 packets per
                                                                 microframe, then the bandwidth required is around 82%. If this bit is set to 1, it is
                                                                 possible to connect two webcams of 1024 bytes * 3 payload per microframe each. Otherwise,
                                                                 you may have to reduce the resolution of the webcams. */
        uint32_t sprsctrltransen       : 1;  /**< [ 17: 17](R/W) Sparse control transaction enable. Some devices are slow in responding to control
                                                                 transfers. Scheduling multiple transactions in one microframe/frame can cause these
                                                                 devices to misbehave. If this bit is set to 1, the host controller schedules transactions
                                                                 for a control transfer in different microframes/frames. */
        uint32_t en_extd_tbc_cap       : 1;  /**< [ 18: 18](R/W) When set, the Extended TBC Capability is reported in HCCPARAMS2 if the
                                                                 DWC_USB31_EXTD_TBC_CAP_EN parameter is enabled. */
        uint32_t ignorehcetimeout      : 1;  /**< [ 19: 19](R/W) IgnoreHCETimeout */
        uint32_t dmaignorehce          : 1;  /**< [ 20: 20](R/W) DMA Ignore HCE */
        uint32_t noextrdl              : 1;  /**< [ 21: 21](R/W) No extra delay between SOF and the first packet.
                                                                 Some high-speed devices misbehave when the host sends a packet immediately after an SOF.
                                                                 However, adding an extra delay between an SOF and the first packet can reduce the USB data
                                                                 rate and performance.

                                                                 This bit is used to control whether the host should wait for 2 us before it sends the
                                                                 first packet after a SOF, or not. You can set this bit to 1 to improve the performance if
                                                                 those problematic devices are not a concern in your host environment.
                                                                 0 = host waits for 2 us after an SOF before it sends the first USB packet.
                                                                 1 = host does not wait after an SOF before it sends the first USB packet. */
        uint32_t refclkper             : 10; /**< [ 31: 22](R/W) Reference-clock period. Indicates (in terms of ns) the period of REF_CLK. The default
                                                                 value is set to 0x8
                                                                 (8 ns/125 MHz). This field must be updated during power on initialization if
                                                                 USBH()_UAHC_GCTL[SOFITPSYNC] = 1 or USBH()_UAHC_GFLADJ [GFLADJ_REFCLK_LPM_SEL] = 1.
                                                                 The
                                                                 programmable maximum value 62 ns, and the minimum value is 8 ns. You use a reference clock
                                                                 with a period that is a integer multiple, so that ITP can meet the jitter margin of 32 ns.
                                                                 The allowable REF_CLK frequencies whose period is not integer multiples are
                                                                 16/17/19.2/24/39.7 MHz.

                                                                 This field should not be set to 0x0 at any time. If you do not plan to use this feature,
                                                                 then you need to set this field to 0x8, the default value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_guctl_s cn; */
};
typedef union cavm_usbhx_uahc_guctl cavm_usbhx_uahc_guctl_t;

static inline uint64_t CAVM_USBHX_UAHC_GUCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GUCTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c12cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c12cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GUCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GUCTL(a) cavm_usbhx_uahc_guctl_t
#define bustype_CAVM_USBHX_UAHC_GUCTL(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GUCTL(a) "USBHX_UAHC_GUCTL"
#define device_bar_CAVM_USBHX_UAHC_GUCTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GUCTL(a) (a)
#define arguments_CAVM_USBHX_UAHC_GUCTL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_guctl1
 *
 * USB UAHC Global User Control Register 1
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_guctl1
{
    uint32_t u;
    struct cavm_usbhx_uahc_guctl1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dev_decouple_l1l2_evt : 1;  /**< [ 31: 31](R/W) This bit is not applicable in host mode. */
        uint32_t ds_rxdet_max_tout_ctrl : 1; /**< [ 30: 30](R/W) This bit is used to control the tRxDetectTimeoutDFP timer for the Enhanced SuperSpeed link.
                                                                 0=12ms is used as tRxDetectTimeoutDFP.
                                                                 1=120ms is used as the tRxDetectTimeoutDFP.
                                                                 This bit is used only in host mode. */
        uint32_t filter_se0_fsls_eop   : 1;  /**< [ 29: 29](R/W) 0= Single sampling (utmi/ulpi clock) of linestate is checked for SE0 detection.
                                                                 1= Feature enabled; Two samplings of linestate are checked for SE0 detection. */
        uint32_t tx_ipgap_linecheck_dis : 1; /**< [ 28: 28](R/W) 0= The linestate transitioning from J to idle for HS mode treated as end of current packet.
                                                                 1= Feature enabled; For detecting the HS end of packet, a fixed delay is used. */
        uint32_t dev_trb_out_spr_ind   : 1;  /**< [ 27: 27](R/W) 0= Feature disabled; OUT TRB status does not set the Short Packet received bit
                                                                 1= Feature enabled; OUT TRB status indicates Short Packet */
        uint32_t reserved_25_26        : 2;
        uint32_t dev_l1_exit_by_hw     : 1;  /**< [ 24: 24](R/W) 0= Disables device L1 hardware exit logic.
                                                                 1= Feature enabled. */
        uint32_t ip_gap_add_on         : 3;  /**< [ 23: 21](R/W) This register field is used to add on to the default inter packet gap setting in the USB 2.0 MAC.

                                                                 It should be programmed to a non-zero value only in case where you need to
                                                                 increase the default inter packet delay calculations in the USB 2.0 MAC module
                                                                 ${ldsg}_u2mac.v
                                                                 The inter packet delay is increased by number of utmi/ulpi clock cycles of this field value. */
        uint32_t reserved_15_20        : 6;
        uint32_t hw_lpm_cap_disable    : 1;  /**< [ 14: 14](R/W) Disable hardware LPM capability in the xHCI capability register.
                                                                 1=  disables hardware LPM capability in xHCI capability register. */
        uint32_t hw_lpm_hle_disable    : 1;  /**< [ 13: 13](R/W) Disable hardware LPM function in all USB 2.0 ports.
                                                                 1=  disables hardware LPM function in all USB 2.0 ports. */
        uint32_t disusb2refclkgtng     : 1;  /**< [ 12: 12](RO/H) If ref_clk gating is disabled, then the ref_clk input cannot be turned off to
                                                                 the USB 2.0 PHY and controller. This is independent of the GCTL[DisClkGtng]
                                                                 setting.
                                                                  1'b0= ref_clk gating enabled for USB 2.0 PHY
                                                                  1'b1= ref_clk gating disabled for USB 2.0 PHY */
        uint32_t disrefclkgtng         : 1;  /**< [ 11: 11](RO/H) If the ref_clk gating is disabled then input ref_clk cannot be turned off to
                                                                 SSPHY and controller. This is independent of GCTL[DisClkGtng] setting.
                                                                  1'b0= ref_clk gating Enabled for SSPHY
                                                                  1'b1= ref_clk gating Disabled for SSPHY */
        uint32_t resume_opmode_hs_host : 1;  /**< [ 10: 10](R/W) This bit is used only in host mode, and is for 2.0 opmode behaviour in HS Resume.
                                                                 1 = the utmi/ulpi opmode will be changed to "normal"
                                                                 along with HS terminations after EOR. This is to support certain legacy
                                                                 UTMI/ULPI PHYs.
                                                                 0 = the utmi/ulpi opmode will be changed to "normal" 2us after HS terminations
                                                                 change after EOR. */
        uint32_t reserved_9            : 1;
        uint32_t l1_susp_thrld_en_for_host : 1;/**< [  8:  8](R/W) The controller puts the PHY into deep low-power mode in L1 when both of the
                                                                 following are true:

                                                                 * The HIRD/BESL value used is greater than or equal to the
                                                                   value in [L1_SUSP_THRLD_FOR_HOST].
                                                                 * The [L1_SUSP_THRLD_EN_FOR_HOST] bit is set.

                                                                 The controller the UTMI PHY transitions to shallow low-power
                                                                 mode in L1 by powering down necessary blocks when one of the
                                                                 following is true:

                                                                 * The HIRD/BESL value used is less than the value in
                                                                   [L1_SUSP_THRLD_FOR_HOST].
                                                                 * [L1_SUSP_THRLD_EN_FOR_HOST] is clear. */
        uint32_t l1_susp_thrld_for_host : 4; /**< [  7:  4](R/W) This field is effective only when the [L1_SUSP_THRLD_EN_FOR_HOST] is set to 1. */
        uint32_t helden                : 1;  /**< [  3:  3](R/W) When this bit is set to 1, it enables the exit latency delta (ELD)
                                                                 support defined in the xHCI 1.0 Errata. */
        uint32_t hparchkdisable        : 1;  /**< [  2:  2](R/W) When this bit is set to 0 (by default), the xHC checks that the input
                                                                 slot/EP context fields comply to the xHCI Specification. Upon
                                                                 detection of a parameter error during command execution, the
                                                                 xHC generates an event TRB with completion code indicating
                                                                 'PARAMETER ERROR'.
                                                                 When the bit is set to 1, the xHC does not perform parameter
                                                                 checks and does not generate 'PARAMETER ERROR' completion
                                                                 code. */
        uint32_t reserved_1            : 1;
        uint32_t loa_filter_en         : 1;  /**< [  0:  0](R/W) If this bit is set, the USB 2.0 port babble is checked at least three consecutive times
                                                                 before the port is disabled. This prevents false triggering of the babble condition when
                                                                 using low quality cables. */
#else /* Word 0 - Little Endian */
        uint32_t loa_filter_en         : 1;  /**< [  0:  0](R/W) If this bit is set, the USB 2.0 port babble is checked at least three consecutive times
                                                                 before the port is disabled. This prevents false triggering of the babble condition when
                                                                 using low quality cables. */
        uint32_t reserved_1            : 1;
        uint32_t hparchkdisable        : 1;  /**< [  2:  2](R/W) When this bit is set to 0 (by default), the xHC checks that the input
                                                                 slot/EP context fields comply to the xHCI Specification. Upon
                                                                 detection of a parameter error during command execution, the
                                                                 xHC generates an event TRB with completion code indicating
                                                                 'PARAMETER ERROR'.
                                                                 When the bit is set to 1, the xHC does not perform parameter
                                                                 checks and does not generate 'PARAMETER ERROR' completion
                                                                 code. */
        uint32_t helden                : 1;  /**< [  3:  3](R/W) When this bit is set to 1, it enables the exit latency delta (ELD)
                                                                 support defined in the xHCI 1.0 Errata. */
        uint32_t l1_susp_thrld_for_host : 4; /**< [  7:  4](R/W) This field is effective only when the [L1_SUSP_THRLD_EN_FOR_HOST] is set to 1. */
        uint32_t l1_susp_thrld_en_for_host : 1;/**< [  8:  8](R/W) The controller puts the PHY into deep low-power mode in L1 when both of the
                                                                 following are true:

                                                                 * The HIRD/BESL value used is greater than or equal to the
                                                                   value in [L1_SUSP_THRLD_FOR_HOST].
                                                                 * The [L1_SUSP_THRLD_EN_FOR_HOST] bit is set.

                                                                 The controller the UTMI PHY transitions to shallow low-power
                                                                 mode in L1 by powering down necessary blocks when one of the
                                                                 following is true:

                                                                 * The HIRD/BESL value used is less than the value in
                                                                   [L1_SUSP_THRLD_FOR_HOST].
                                                                 * [L1_SUSP_THRLD_EN_FOR_HOST] is clear. */
        uint32_t reserved_9            : 1;
        uint32_t resume_opmode_hs_host : 1;  /**< [ 10: 10](R/W) This bit is used only in host mode, and is for 2.0 opmode behaviour in HS Resume.
                                                                 1 = the utmi/ulpi opmode will be changed to "normal"
                                                                 along with HS terminations after EOR. This is to support certain legacy
                                                                 UTMI/ULPI PHYs.
                                                                 0 = the utmi/ulpi opmode will be changed to "normal" 2us after HS terminations
                                                                 change after EOR. */
        uint32_t disrefclkgtng         : 1;  /**< [ 11: 11](RO/H) If the ref_clk gating is disabled then input ref_clk cannot be turned off to
                                                                 SSPHY and controller. This is independent of GCTL[DisClkGtng] setting.
                                                                  1'b0= ref_clk gating Enabled for SSPHY
                                                                  1'b1= ref_clk gating Disabled for SSPHY */
        uint32_t disusb2refclkgtng     : 1;  /**< [ 12: 12](RO/H) If ref_clk gating is disabled, then the ref_clk input cannot be turned off to
                                                                 the USB 2.0 PHY and controller. This is independent of the GCTL[DisClkGtng]
                                                                 setting.
                                                                  1'b0= ref_clk gating enabled for USB 2.0 PHY
                                                                  1'b1= ref_clk gating disabled for USB 2.0 PHY */
        uint32_t hw_lpm_hle_disable    : 1;  /**< [ 13: 13](R/W) Disable hardware LPM function in all USB 2.0 ports.
                                                                 1=  disables hardware LPM function in all USB 2.0 ports. */
        uint32_t hw_lpm_cap_disable    : 1;  /**< [ 14: 14](R/W) Disable hardware LPM capability in the xHCI capability register.
                                                                 1=  disables hardware LPM capability in xHCI capability register. */
        uint32_t reserved_15_20        : 6;
        uint32_t ip_gap_add_on         : 3;  /**< [ 23: 21](R/W) This register field is used to add on to the default inter packet gap setting in the USB 2.0 MAC.

                                                                 It should be programmed to a non-zero value only in case where you need to
                                                                 increase the default inter packet delay calculations in the USB 2.0 MAC module
                                                                 ${ldsg}_u2mac.v
                                                                 The inter packet delay is increased by number of utmi/ulpi clock cycles of this field value. */
        uint32_t dev_l1_exit_by_hw     : 1;  /**< [ 24: 24](R/W) 0= Disables device L1 hardware exit logic.
                                                                 1= Feature enabled. */
        uint32_t reserved_25_26        : 2;
        uint32_t dev_trb_out_spr_ind   : 1;  /**< [ 27: 27](R/W) 0= Feature disabled; OUT TRB status does not set the Short Packet received bit
                                                                 1= Feature enabled; OUT TRB status indicates Short Packet */
        uint32_t tx_ipgap_linecheck_dis : 1; /**< [ 28: 28](R/W) 0= The linestate transitioning from J to idle for HS mode treated as end of current packet.
                                                                 1= Feature enabled; For detecting the HS end of packet, a fixed delay is used. */
        uint32_t filter_se0_fsls_eop   : 1;  /**< [ 29: 29](R/W) 0= Single sampling (utmi/ulpi clock) of linestate is checked for SE0 detection.
                                                                 1= Feature enabled; Two samplings of linestate are checked for SE0 detection. */
        uint32_t ds_rxdet_max_tout_ctrl : 1; /**< [ 30: 30](R/W) This bit is used to control the tRxDetectTimeoutDFP timer for the Enhanced SuperSpeed link.
                                                                 0=12ms is used as tRxDetectTimeoutDFP.
                                                                 1=120ms is used as the tRxDetectTimeoutDFP.
                                                                 This bit is used only in host mode. */
        uint32_t dev_decouple_l1l2_evt : 1;  /**< [ 31: 31](R/W) This bit is not applicable in host mode. */
#endif /* Word 0 - End */
    } s;
    struct cavm_usbhx_uahc_guctl1_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dev_decouple_l1l2_evt : 1;  /**< [ 31: 31](R/W) This bit is not applicable in host mode. */
        uint32_t ds_rxdet_max_tout_ctrl : 1; /**< [ 30: 30](R/W) This bit is used to control the tRxDetectTimeoutDFP timer for the Enhanced SuperSpeed link.
                                                                 0=12ms is used as tRxDetectTimeoutDFP.
                                                                 1=120ms is used as the tRxDetectTimeoutDFP.
                                                                 This bit is used only in host mode. */
        uint32_t filter_se0_fsls_eop   : 1;  /**< [ 29: 29](R/W) 0= Single sampling (utmi/ulpi clock) of linestate is checked for SE0 detection.
                                                                 1= Feature enabled; Two samplings of linestate are checked for SE0 detection. */
        uint32_t tx_ipgap_linecheck_dis : 1; /**< [ 28: 28](R/W) 0= The linestate transitioning from J to idle for HS mode treated as end of current packet.
                                                                 1= Feature enabled; For detecting the HS end of packet, a fixed delay is used. */
        uint32_t dev_trb_out_spr_ind   : 1;  /**< [ 27: 27](R/W) 0= Feature disabled; OUT TRB status does not set the Short Packet received bit
                                                                 1= Feature enabled; OUT TRB status indicates Short Packet */
        uint32_t reserved_25_26        : 2;
        uint32_t dev_l1_exit_by_hw     : 1;  /**< [ 24: 24](R/W) 0= Disables device L1 hardware exit logic.
                                                                 1= Feature enabled. */
        uint32_t ip_gap_add_on         : 3;  /**< [ 23: 21](R/W) This register field is used to add on to the default inter packet gap setting in the USB 2.0 MAC.

                                                                 It should be programmed to a non-zero value only in case where you need to
                                                                 increase the default inter packet delay calculations in the USB 2.0 MAC module
                                                                 ${ldsg}_u2mac.v
                                                                 The inter packet delay is increased by number of utmi/ulpi clock cycles of this field value. */
        uint32_t reserved_20           : 1;
        uint32_t reserved_15_19        : 5;
        uint32_t hw_lpm_cap_disable    : 1;  /**< [ 14: 14](R/W) Disable hardware LPM capability in the xHCI capability register.
                                                                 1=  disables hardware LPM capability in xHCI capability register. */
        uint32_t hw_lpm_hle_disable    : 1;  /**< [ 13: 13](R/W) Disable hardware LPM function in all USB 2.0 ports.
                                                                 1=  disables hardware LPM function in all USB 2.0 ports. */
        uint32_t disusb2refclkgtng     : 1;  /**< [ 12: 12](RO/H) If ref_clk gating is disabled, then the ref_clk input cannot be turned off to
                                                                 the USB 2.0 PHY and controller. This is independent of the GCTL[DisClkGtng]
                                                                 setting.
                                                                  1'b0= ref_clk gating enabled for USB 2.0 PHY
                                                                  1'b1= ref_clk gating disabled for USB 2.0 PHY */
        uint32_t disrefclkgtng         : 1;  /**< [ 11: 11](RO/H) If the ref_clk gating is disabled then input ref_clk cannot be turned off to
                                                                 SSPHY and controller. This is independent of GCTL[DisClkGtng] setting.
                                                                  1'b0= ref_clk gating Enabled for SSPHY
                                                                  1'b1= ref_clk gating Disabled for SSPHY */
        uint32_t resume_opmode_hs_host : 1;  /**< [ 10: 10](R/W) This bit is used only in host mode, and is for 2.0 opmode behaviour in HS Resume.
                                                                 1 = the utmi/ulpi opmode will be changed to "normal"
                                                                 along with HS terminations after EOR. This is to support certain legacy
                                                                 UTMI/ULPI PHYs.
                                                                 0 = the utmi/ulpi opmode will be changed to "normal" 2us after HS terminations
                                                                 change after EOR. */
        uint32_t reserved_9            : 1;
        uint32_t l1_susp_thrld_en_for_host : 1;/**< [  8:  8](R/W) The controller puts the PHY into deep low-power mode in L1 when both of the
                                                                 following are true:

                                                                 * The HIRD/BESL value used is greater than or equal to the
                                                                   value in [L1_SUSP_THRLD_FOR_HOST].
                                                                 * The [L1_SUSP_THRLD_EN_FOR_HOST] bit is set.

                                                                 The controller the UTMI PHY transitions to shallow low-power
                                                                 mode in L1 by powering down necessary blocks when one of the
                                                                 following is true:

                                                                 * The HIRD/BESL value used is less than the value in
                                                                   [L1_SUSP_THRLD_FOR_HOST].
                                                                 * [L1_SUSP_THRLD_EN_FOR_HOST] is clear. */
        uint32_t l1_susp_thrld_for_host : 4; /**< [  7:  4](R/W) This field is effective only when the [L1_SUSP_THRLD_EN_FOR_HOST] is set to 1. */
        uint32_t helden                : 1;  /**< [  3:  3](R/W) When this bit is set to 1, it enables the exit latency delta (ELD)
                                                                 support defined in the xHCI 1.0 Errata. */
        uint32_t hparchkdisable        : 1;  /**< [  2:  2](R/W) When this bit is set to 0 (by default), the xHC checks that the input
                                                                 slot/EP context fields comply to the xHCI Specification. Upon
                                                                 detection of a parameter error during command execution, the
                                                                 xHC generates an event TRB with completion code indicating
                                                                 'PARAMETER ERROR'.
                                                                 When the bit is set to 1, the xHC does not perform parameter
                                                                 checks and does not generate 'PARAMETER ERROR' completion
                                                                 code. */
        uint32_t reserved_1            : 1;
        uint32_t loa_filter_en         : 1;  /**< [  0:  0](R/W) If this bit is set, the USB 2.0 port babble is checked at least three consecutive times
                                                                 before the port is disabled. This prevents false triggering of the babble condition when
                                                                 using low quality cables. */
#else /* Word 0 - Little Endian */
        uint32_t loa_filter_en         : 1;  /**< [  0:  0](R/W) If this bit is set, the USB 2.0 port babble is checked at least three consecutive times
                                                                 before the port is disabled. This prevents false triggering of the babble condition when
                                                                 using low quality cables. */
        uint32_t reserved_1            : 1;
        uint32_t hparchkdisable        : 1;  /**< [  2:  2](R/W) When this bit is set to 0 (by default), the xHC checks that the input
                                                                 slot/EP context fields comply to the xHCI Specification. Upon
                                                                 detection of a parameter error during command execution, the
                                                                 xHC generates an event TRB with completion code indicating
                                                                 'PARAMETER ERROR'.
                                                                 When the bit is set to 1, the xHC does not perform parameter
                                                                 checks and does not generate 'PARAMETER ERROR' completion
                                                                 code. */
        uint32_t helden                : 1;  /**< [  3:  3](R/W) When this bit is set to 1, it enables the exit latency delta (ELD)
                                                                 support defined in the xHCI 1.0 Errata. */
        uint32_t l1_susp_thrld_for_host : 4; /**< [  7:  4](R/W) This field is effective only when the [L1_SUSP_THRLD_EN_FOR_HOST] is set to 1. */
        uint32_t l1_susp_thrld_en_for_host : 1;/**< [  8:  8](R/W) The controller puts the PHY into deep low-power mode in L1 when both of the
                                                                 following are true:

                                                                 * The HIRD/BESL value used is greater than or equal to the
                                                                   value in [L1_SUSP_THRLD_FOR_HOST].
                                                                 * The [L1_SUSP_THRLD_EN_FOR_HOST] bit is set.

                                                                 The controller the UTMI PHY transitions to shallow low-power
                                                                 mode in L1 by powering down necessary blocks when one of the
                                                                 following is true:

                                                                 * The HIRD/BESL value used is less than the value in
                                                                   [L1_SUSP_THRLD_FOR_HOST].
                                                                 * [L1_SUSP_THRLD_EN_FOR_HOST] is clear. */
        uint32_t reserved_9            : 1;
        uint32_t resume_opmode_hs_host : 1;  /**< [ 10: 10](R/W) This bit is used only in host mode, and is for 2.0 opmode behaviour in HS Resume.
                                                                 1 = the utmi/ulpi opmode will be changed to "normal"
                                                                 along with HS terminations after EOR. This is to support certain legacy
                                                                 UTMI/ULPI PHYs.
                                                                 0 = the utmi/ulpi opmode will be changed to "normal" 2us after HS terminations
                                                                 change after EOR. */
        uint32_t disrefclkgtng         : 1;  /**< [ 11: 11](RO/H) If the ref_clk gating is disabled then input ref_clk cannot be turned off to
                                                                 SSPHY and controller. This is independent of GCTL[DisClkGtng] setting.
                                                                  1'b0= ref_clk gating Enabled for SSPHY
                                                                  1'b1= ref_clk gating Disabled for SSPHY */
        uint32_t disusb2refclkgtng     : 1;  /**< [ 12: 12](RO/H) If ref_clk gating is disabled, then the ref_clk input cannot be turned off to
                                                                 the USB 2.0 PHY and controller. This is independent of the GCTL[DisClkGtng]
                                                                 setting.
                                                                  1'b0= ref_clk gating enabled for USB 2.0 PHY
                                                                  1'b1= ref_clk gating disabled for USB 2.0 PHY */
        uint32_t hw_lpm_hle_disable    : 1;  /**< [ 13: 13](R/W) Disable hardware LPM function in all USB 2.0 ports.
                                                                 1=  disables hardware LPM function in all USB 2.0 ports. */
        uint32_t hw_lpm_cap_disable    : 1;  /**< [ 14: 14](R/W) Disable hardware LPM capability in the xHCI capability register.
                                                                 1=  disables hardware LPM capability in xHCI capability register. */
        uint32_t reserved_15_19        : 5;
        uint32_t reserved_20           : 1;
        uint32_t ip_gap_add_on         : 3;  /**< [ 23: 21](R/W) This register field is used to add on to the default inter packet gap setting in the USB 2.0 MAC.

                                                                 It should be programmed to a non-zero value only in case where you need to
                                                                 increase the default inter packet delay calculations in the USB 2.0 MAC module
                                                                 ${ldsg}_u2mac.v
                                                                 The inter packet delay is increased by number of utmi/ulpi clock cycles of this field value. */
        uint32_t dev_l1_exit_by_hw     : 1;  /**< [ 24: 24](R/W) 0= Disables device L1 hardware exit logic.
                                                                 1= Feature enabled. */
        uint32_t reserved_25_26        : 2;
        uint32_t dev_trb_out_spr_ind   : 1;  /**< [ 27: 27](R/W) 0= Feature disabled; OUT TRB status does not set the Short Packet received bit
                                                                 1= Feature enabled; OUT TRB status indicates Short Packet */
        uint32_t tx_ipgap_linecheck_dis : 1; /**< [ 28: 28](R/W) 0= The linestate transitioning from J to idle for HS mode treated as end of current packet.
                                                                 1= Feature enabled; For detecting the HS end of packet, a fixed delay is used. */
        uint32_t filter_se0_fsls_eop   : 1;  /**< [ 29: 29](R/W) 0= Single sampling (utmi/ulpi clock) of linestate is checked for SE0 detection.
                                                                 1= Feature enabled; Two samplings of linestate are checked for SE0 detection. */
        uint32_t ds_rxdet_max_tout_ctrl : 1; /**< [ 30: 30](R/W) This bit is used to control the tRxDetectTimeoutDFP timer for the Enhanced SuperSpeed link.
                                                                 0=12ms is used as tRxDetectTimeoutDFP.
                                                                 1=120ms is used as the tRxDetectTimeoutDFP.
                                                                 This bit is used only in host mode. */
        uint32_t dev_decouple_l1l2_evt : 1;  /**< [ 31: 31](R/W) This bit is not applicable in host mode. */
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_usbhx_uahc_guctl1 cavm_usbhx_uahc_guctl1_t;

static inline uint64_t CAVM_USBHX_UAHC_GUCTL1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GUCTL1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c11cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c11cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GUCTL1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GUCTL1(a) cavm_usbhx_uahc_guctl1_t
#define bustype_CAVM_USBHX_UAHC_GUCTL1(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GUCTL1(a) "USBHX_UAHC_GUCTL1"
#define device_bar_CAVM_USBHX_UAHC_GUCTL1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GUCTL1(a) (a)
#define arguments_CAVM_USBHX_UAHC_GUCTL1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_guctl2
 *
 * UAHC Global User Control Register 2
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_guctl2
{
    uint32_t u;
    struct cavm_usbhx_uahc_guctl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t periodic_uf_thr       : 7;  /**< [ 31: 25](R/W) Periodic microseconds threshold

                                                                 Indicates the number of microseconds before the end of the microframe that the
                                                                 LSP stops issuing periodic requests to the PTL.

                                                                 A value of n corresponds to n microseconds, which is (125-n)/125% approximately.

                                                                 For example, if you need a threshold of approximately 10% of one uframe, then
                                                                 program this field as 0.1*125us~=12us. */
        uint32_t async_uf_thr          : 7;  /**< [ 24: 18](R/W) Asynchronous microseconds threshold

                                                                 Indicates the number of microseconds before the end of the microframe that the
                                                                 LSP stops issuing asynchronous requests to the PTL.

                                                                 A value of n corresponds to n microseconds, which is (125-n)/125% approximately.

                                                                 For example, if you need a threshold of approximately 2% of one uframe, then
                                                                 program this field as 0.02*125us~=2us. */
        uint32_t periodic_txdma_uf_thr : 7;  /**< [ 17: 11](R/W) Indicates the number of microseconds before the end of the microframe that the
                                                                 LSP needs to start issuing TX DMA for periodic OUT endpoints scheduled in the
                                                                 next microframe.

                                                                 A value of n corresponds to n microseconds, which is (125-n)/125% approximately.

                                                                 For example, if you need a threshold of approximately 32% of one uframe, then
                                                                 program this field as 0.32*125us~=40us. */
        uint32_t svc_opp_per_ssp       : 2;  /**< [ 10:  9](R/W) Service opportunities to Enhanced SuperSpeedPlus bulk endpoints

                                                                 Indicates the number of Service Opportunities (SOs) that will be allocated to
                                                                 Enhanced SuperSpeedPlus bulk endpoints.

                                                                 The encoding used is as follows:
                                                                  - 0: maxburstsize service opportunities
                                                                  - 1: 2* maxburstsize service opportunities
                                                                  - 2: 4*maxburstsize service opportunities
                                                                  - 3: maxburstsize/2 service opportunities
                                                                 where, Maxburstsize is the maximum number of packets the endpoint can
                                                                 send/receive as part of the burst. */
        uint32_t svc_opp_per_ss        : 2;  /**< [  8:  7](R/W) Service opportunities to SuperSpeed bulk endpoints

                                                                 Indicates the number of Service Opportunities (SOs) that will be allocated to
                                                                 SuperSpeed bulk endpoints.

                                                                 The encoding used is as follows:
                                                                  - 0: maxburstsize service opportunities
                                                                  - 1: 2* maxburstsize service opportunities
                                                                  - 2: 4*maxburstsize service opportunities
                                                                  - 3: maxburstsize/2 service opportunities
                                                                 where, Maxburstsize is the maximum number of packets the endpoint can
                                                                 send/receive as part of the burst. */
        uint32_t svc_opp_per_hs        : 2;  /**< [  6:  5](R/W) Indicates the number of Service Opportunities (SOs) that will be allocated to HS bulk endpoints.

                                                                 The encoding used is as follows:
                                                                  - 0: 1 service opportunity
                                                                  - 1: 1 service opportunities
                                                                  - 2: 3 service opportunities
                                                                  - 3: 4 service opportunities */
        uint32_t svc_opp_per_fsls      : 2;  /**< [  4:  3](R/W) Indicates the number of Service Opportunities (SOs) that will be allocated to FS/LS bulk endpoints.

                                                                 The encoding used is as follows:
                                                                  - 0: 1 service opportunity
                                                                  - 1: 1 service opportunities
                                                                  - 2: 3 service opportunities
                                                                  - 3: 4 service opportunities */
        uint32_t max_reisu_cnt         : 2;  /**< [  2:  1](R/W) Indicates the number of re-issue opportunities that will be allocated to OUT
                                                                 transactions that meet the following criteria:
                                                                  - Bulk EP types
                                                                  - Receives a link abort due to:
                                                                  -- Lack of credits
                                                                  -- Link in U1, U2 or Recovery
                                                                  -- Not able to fit all the packets into the remainder of the microframe before the ITP
                                                                 Valid values are 0, 1, 2 or 3. */
        uint32_t scheddule_lt_thr      : 1;  /**< [  0:  0](R/W) Indicates that the Host LSP schedulers should schedule transactions before all
                                                                 the TRBs have been fetched. This may increase performance by allowing
                                                                 transactions to start earlier, but may also have a negative effect because more
                                                                 TRQ space will be used. */
#else /* Word 0 - Little Endian */
        uint32_t scheddule_lt_thr      : 1;  /**< [  0:  0](R/W) Indicates that the Host LSP schedulers should schedule transactions before all
                                                                 the TRBs have been fetched. This may increase performance by allowing
                                                                 transactions to start earlier, but may also have a negative effect because more
                                                                 TRQ space will be used. */
        uint32_t max_reisu_cnt         : 2;  /**< [  2:  1](R/W) Indicates the number of re-issue opportunities that will be allocated to OUT
                                                                 transactions that meet the following criteria:
                                                                  - Bulk EP types
                                                                  - Receives a link abort due to:
                                                                  -- Lack of credits
                                                                  -- Link in U1, U2 or Recovery
                                                                  -- Not able to fit all the packets into the remainder of the microframe before the ITP
                                                                 Valid values are 0, 1, 2 or 3. */
        uint32_t svc_opp_per_fsls      : 2;  /**< [  4:  3](R/W) Indicates the number of Service Opportunities (SOs) that will be allocated to FS/LS bulk endpoints.

                                                                 The encoding used is as follows:
                                                                  - 0: 1 service opportunity
                                                                  - 1: 1 service opportunities
                                                                  - 2: 3 service opportunities
                                                                  - 3: 4 service opportunities */
        uint32_t svc_opp_per_hs        : 2;  /**< [  6:  5](R/W) Indicates the number of Service Opportunities (SOs) that will be allocated to HS bulk endpoints.

                                                                 The encoding used is as follows:
                                                                  - 0: 1 service opportunity
                                                                  - 1: 1 service opportunities
                                                                  - 2: 3 service opportunities
                                                                  - 3: 4 service opportunities */
        uint32_t svc_opp_per_ss        : 2;  /**< [  8:  7](R/W) Service opportunities to SuperSpeed bulk endpoints

                                                                 Indicates the number of Service Opportunities (SOs) that will be allocated to
                                                                 SuperSpeed bulk endpoints.

                                                                 The encoding used is as follows:
                                                                  - 0: maxburstsize service opportunities
                                                                  - 1: 2* maxburstsize service opportunities
                                                                  - 2: 4*maxburstsize service opportunities
                                                                  - 3: maxburstsize/2 service opportunities
                                                                 where, Maxburstsize is the maximum number of packets the endpoint can
                                                                 send/receive as part of the burst. */
        uint32_t svc_opp_per_ssp       : 2;  /**< [ 10:  9](R/W) Service opportunities to Enhanced SuperSpeedPlus bulk endpoints

                                                                 Indicates the number of Service Opportunities (SOs) that will be allocated to
                                                                 Enhanced SuperSpeedPlus bulk endpoints.

                                                                 The encoding used is as follows:
                                                                  - 0: maxburstsize service opportunities
                                                                  - 1: 2* maxburstsize service opportunities
                                                                  - 2: 4*maxburstsize service opportunities
                                                                  - 3: maxburstsize/2 service opportunities
                                                                 where, Maxburstsize is the maximum number of packets the endpoint can
                                                                 send/receive as part of the burst. */
        uint32_t periodic_txdma_uf_thr : 7;  /**< [ 17: 11](R/W) Indicates the number of microseconds before the end of the microframe that the
                                                                 LSP needs to start issuing TX DMA for periodic OUT endpoints scheduled in the
                                                                 next microframe.

                                                                 A value of n corresponds to n microseconds, which is (125-n)/125% approximately.

                                                                 For example, if you need a threshold of approximately 32% of one uframe, then
                                                                 program this field as 0.32*125us~=40us. */
        uint32_t async_uf_thr          : 7;  /**< [ 24: 18](R/W) Asynchronous microseconds threshold

                                                                 Indicates the number of microseconds before the end of the microframe that the
                                                                 LSP stops issuing asynchronous requests to the PTL.

                                                                 A value of n corresponds to n microseconds, which is (125-n)/125% approximately.

                                                                 For example, if you need a threshold of approximately 2% of one uframe, then
                                                                 program this field as 0.02*125us~=2us. */
        uint32_t periodic_uf_thr       : 7;  /**< [ 31: 25](R/W) Periodic microseconds threshold

                                                                 Indicates the number of microseconds before the end of the microframe that the
                                                                 LSP stops issuing periodic requests to the PTL.

                                                                 A value of n corresponds to n microseconds, which is (125-n)/125% approximately.

                                                                 For example, if you need a threshold of approximately 10% of one uframe, then
                                                                 program this field as 0.1*125us~=12us. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_guctl2_s cn; */
};
typedef union cavm_usbhx_uahc_guctl2 cavm_usbhx_uahc_guctl2_t;

static inline uint64_t CAVM_USBHX_UAHC_GUCTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GUCTL2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c608ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c608ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GUCTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GUCTL2(a) cavm_usbhx_uahc_guctl2_t
#define bustype_CAVM_USBHX_UAHC_GUCTL2(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GUCTL2(a) "USBHX_UAHC_GUCTL2"
#define device_bar_CAVM_USBHX_UAHC_GUCTL2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GUCTL2(a) (a)
#define arguments_CAVM_USBHX_UAHC_GUCTL2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_guctl3
 *
 * USBH UAHC Guctl3 Register
 * Global User Control Register 3
 */
union cavm_usbhx_uahc_guctl3
{
    uint32_t u;
    struct cavm_usbhx_uahc_guctl3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t cfgep_cmd_switching_time_ctrl : 3;/**< [ 24: 22](R/W) Configure EP command switching time control

                                                                 Bit 24 : Enable the fast EP configure mode
                                                                  - 1: fast EP configure enabled . Only consider the ISOC EP service interval in
                                                                 determining the switching time
                                                                  - 0: fast EP configure disabled. Consider the ISOC and INTR EP service interval
                                                                 in determining the switching time
                                                                 Bit [23:22] Maximum switching frame boundary
                                                                  - 2'b00 :   Maximum Switching Frame boundary is 32ms . Fast EP configure
                                                                 enabled/disbled based on bit 24  guctl3[24:22]='b000 is legacy switching mode
                                                                  - 2'b01 :   Maximum Switching Frame boundary is 1ms . Fast EP configure
                                                                 enabled/disbled based on bit 24
                                                                  - 2'b10 :   Maximum Switching Frame boundary is 4ms . Fast EP configure
                                                                 enabled/disbled based on bit 24
                                                                  - 2'b11 :   Maximum Switching Frame boundary is 8ms . Fast EP configure
                                                                 enabled/disbled based on bit 24 */
        uint32_t block_concurrent_in_ctrl_xfers : 1;/**< [ 21: 21](R/W) Block concurrent IN transactions during Control transfers

                                                                 This bit controls the way in which concurrent IN is handled for control transfers
                                                                  - 0: Concurrent IN transfers are blocked during control transfers
                                                                  - 1: Concurrent IN transfers are not blocked during control transfers */
        uint32_t ssbi_single_ep_mode_disable : 1;/**< [ 20: 20](R/W) SS BI Single EP mode Disable

                                                                 When set, this field disables single EP mode in the SS BI.
                                                                  - 1'b0: Single EP mode in SS BI enabled
                                                                  - 1'b1: Single EP mode in SS BI disabled */
        uint32_t disextbusclkgt_u1u2l1 : 1;  /**< [ 19: 19](R/W) Disable External Bus Clock Gating in U1/U2/L1 state

                                                                 This bit is only used when the DWC_USB31_EXT_BUS_CLK_OFF parameter is set to 1.
                                                                 This bit is used to generate the pmgt_ext_bus_clk_off signal when the following
                                                                 conditions occur:
                                                                  -  GUCTL3[DISEXTBUSCLKGT] is cleared
                                                                  -  GUCTL3[DISEXTBUSCLKGT_U1U2L1] is cleared
                                                                  -  Link is in RXDET, DISABLE, INACTIVE, or U3 state and the controller is idle
                                                                  -  All USB 2.0 ports are in L2 state, that is, UTMI suspend is asserted */
        uint32_t disextbusclkgt        : 1;  /**< [ 18: 18](R/W) Disable External Bus Clock Gating

                                                                 This bit is only used when the DWC_USB31_EXT_BUS_CLK_OFF parameter is set to 1.
                                                                 This bit is used to generate the pmgt_ext_bus_clk_off signal when the following
                                                                 conditions occur:
                                                                  -  GUCTL3[DISEXTBUSCLKGT] is cleared
                                                                  -  Link is in RXDET, DISABLE, INACTIVE, U1, U2, or U3 state and the controller is idle
                                                                  -  All USB 2.0 ports are in LPM-L1 or L2 state, that is, UTMI suspend,
                                                                 l1_suspend and sleep is asserted */
        uint32_t rsvd_peri_bandwidth_fs : 1; /**< [ 17: 17](R/W) 85percent bandwidth reservation for periodic transfer for FS bus behind HS hub

                                                                  When not set, the bandwidth reserved for periodic transfers on a FS bus behind
                                                                 a HS hub is 85% . Setting it to 1 will increase reserved bandwidth to 90%

                                                                  When SSplit in uframe 7 is disabled , the bandwidth avaliable to periodic
                                                                 transfer is less . Setting reserved bandwith to be 90% may cause over scheduling
                                                                  - 1'b0: 85% of FS bus bandwidth reserved for periodic transfer when the FS bus is behind HS hub
                                                                  - 1'b1: 90% of FS bus bandwidth reserved for periodic transfer when the FS bus is behind HS hub */
        uint32_t usb20_retry_disable   : 1;  /**< [ 16: 16](R/W) USB2.0 Internal Retry Disable

                                                                  When set, this field disables the internal retry feature on the USB 2.0 bus.
                                                                  - 1'b0:  Internal retry feature enabled
                                                                  - 1'b1:  Internal retry feature disabled */
        uint32_t reserved_13_15        : 3;
        uint32_t svc_opp_per_hs_sep    : 4;  /**< [ 12:  9](R/W) Service opportunities for HS bulk endpoints in single endpoint mode

                                                                 Indicates the number of Service Opportunities (SOs) that will be allocated to
                                                                 the HS bulk endpoint when it is the only one asynchronous endpoint active for
                                                                 that bus instance.

                                                                 A value of n corresponds to n Service Opportunities, and the valid values of n are 1 to 13. */
        uint32_t barb_burst_enable     : 1;  /**< [  8:  8](R/W) LSP BARB Burst Support

                                                                 This bit is valid only in DRD or host mode when using LSP EHST (((DWC_USB31_MODE
                                                                 == 2) || (DWC_USB31_MODE == 1)) && (DWC_USB31_CURRENT_GEN_HST_LSP == 2)).
                                                                  - 1'b0: The lbc interface between LSP and BMU does not support burst transactions.
                                                                  - 1'b1: The lbc interface between LSP and BMU supports burst transactions. */
        uint32_t intr_ep_ping_enable   : 1;  /**< [  7:  7](R/W) Interrupt EP PING Support
                                                                  - 1'b0: Host does not send PING for SS/SSP interrupt EPs.
                                                                  - 1'b1: Host sends PING for SS/SSP interrupt EPs. */
        uint32_t periodic_uf_thr_fsls  : 7;  /**< [  6:  0](R/W) Periodic microseconds threshold

                                                                 Indicates the number of microseconds before the end of the microframe that the
                                                                 LSP cannot issue periodic requests to the PTL.

                                                                 A value of n corresponds to n microseconds, which is (125-n)/125% approximately.

                                                                 For example, if you need a threshold of approximately 10% of one uframe, then
                                                                 program this field as 0.1*125us~=12us. */
#else /* Word 0 - Little Endian */
        uint32_t periodic_uf_thr_fsls  : 7;  /**< [  6:  0](R/W) Periodic microseconds threshold

                                                                 Indicates the number of microseconds before the end of the microframe that the
                                                                 LSP cannot issue periodic requests to the PTL.

                                                                 A value of n corresponds to n microseconds, which is (125-n)/125% approximately.

                                                                 For example, if you need a threshold of approximately 10% of one uframe, then
                                                                 program this field as 0.1*125us~=12us. */
        uint32_t intr_ep_ping_enable   : 1;  /**< [  7:  7](R/W) Interrupt EP PING Support
                                                                  - 1'b0: Host does not send PING for SS/SSP interrupt EPs.
                                                                  - 1'b1: Host sends PING for SS/SSP interrupt EPs. */
        uint32_t barb_burst_enable     : 1;  /**< [  8:  8](R/W) LSP BARB Burst Support

                                                                 This bit is valid only in DRD or host mode when using LSP EHST (((DWC_USB31_MODE
                                                                 == 2) || (DWC_USB31_MODE == 1)) && (DWC_USB31_CURRENT_GEN_HST_LSP == 2)).
                                                                  - 1'b0: The lbc interface between LSP and BMU does not support burst transactions.
                                                                  - 1'b1: The lbc interface between LSP and BMU supports burst transactions. */
        uint32_t svc_opp_per_hs_sep    : 4;  /**< [ 12:  9](R/W) Service opportunities for HS bulk endpoints in single endpoint mode

                                                                 Indicates the number of Service Opportunities (SOs) that will be allocated to
                                                                 the HS bulk endpoint when it is the only one asynchronous endpoint active for
                                                                 that bus instance.

                                                                 A value of n corresponds to n Service Opportunities, and the valid values of n are 1 to 13. */
        uint32_t reserved_13_15        : 3;
        uint32_t usb20_retry_disable   : 1;  /**< [ 16: 16](R/W) USB2.0 Internal Retry Disable

                                                                  When set, this field disables the internal retry feature on the USB 2.0 bus.
                                                                  - 1'b0:  Internal retry feature enabled
                                                                  - 1'b1:  Internal retry feature disabled */
        uint32_t rsvd_peri_bandwidth_fs : 1; /**< [ 17: 17](R/W) 85percent bandwidth reservation for periodic transfer for FS bus behind HS hub

                                                                  When not set, the bandwidth reserved for periodic transfers on a FS bus behind
                                                                 a HS hub is 85% . Setting it to 1 will increase reserved bandwidth to 90%

                                                                  When SSplit in uframe 7 is disabled , the bandwidth avaliable to periodic
                                                                 transfer is less . Setting reserved bandwith to be 90% may cause over scheduling
                                                                  - 1'b0: 85% of FS bus bandwidth reserved for periodic transfer when the FS bus is behind HS hub
                                                                  - 1'b1: 90% of FS bus bandwidth reserved for periodic transfer when the FS bus is behind HS hub */
        uint32_t disextbusclkgt        : 1;  /**< [ 18: 18](R/W) Disable External Bus Clock Gating

                                                                 This bit is only used when the DWC_USB31_EXT_BUS_CLK_OFF parameter is set to 1.
                                                                 This bit is used to generate the pmgt_ext_bus_clk_off signal when the following
                                                                 conditions occur:
                                                                  -  GUCTL3[DISEXTBUSCLKGT] is cleared
                                                                  -  Link is in RXDET, DISABLE, INACTIVE, U1, U2, or U3 state and the controller is idle
                                                                  -  All USB 2.0 ports are in LPM-L1 or L2 state, that is, UTMI suspend,
                                                                 l1_suspend and sleep is asserted */
        uint32_t disextbusclkgt_u1u2l1 : 1;  /**< [ 19: 19](R/W) Disable External Bus Clock Gating in U1/U2/L1 state

                                                                 This bit is only used when the DWC_USB31_EXT_BUS_CLK_OFF parameter is set to 1.
                                                                 This bit is used to generate the pmgt_ext_bus_clk_off signal when the following
                                                                 conditions occur:
                                                                  -  GUCTL3[DISEXTBUSCLKGT] is cleared
                                                                  -  GUCTL3[DISEXTBUSCLKGT_U1U2L1] is cleared
                                                                  -  Link is in RXDET, DISABLE, INACTIVE, or U3 state and the controller is idle
                                                                  -  All USB 2.0 ports are in L2 state, that is, UTMI suspend is asserted */
        uint32_t ssbi_single_ep_mode_disable : 1;/**< [ 20: 20](R/W) SS BI Single EP mode Disable

                                                                 When set, this field disables single EP mode in the SS BI.
                                                                  - 1'b0: Single EP mode in SS BI enabled
                                                                  - 1'b1: Single EP mode in SS BI disabled */
        uint32_t block_concurrent_in_ctrl_xfers : 1;/**< [ 21: 21](R/W) Block concurrent IN transactions during Control transfers

                                                                 This bit controls the way in which concurrent IN is handled for control transfers
                                                                  - 0: Concurrent IN transfers are blocked during control transfers
                                                                  - 1: Concurrent IN transfers are not blocked during control transfers */
        uint32_t cfgep_cmd_switching_time_ctrl : 3;/**< [ 24: 22](R/W) Configure EP command switching time control

                                                                 Bit 24 : Enable the fast EP configure mode
                                                                  - 1: fast EP configure enabled . Only consider the ISOC EP service interval in
                                                                 determining the switching time
                                                                  - 0: fast EP configure disabled. Consider the ISOC and INTR EP service interval
                                                                 in determining the switching time
                                                                 Bit [23:22] Maximum switching frame boundary
                                                                  - 2'b00 :   Maximum Switching Frame boundary is 32ms . Fast EP configure
                                                                 enabled/disbled based on bit 24  guctl3[24:22]='b000 is legacy switching mode
                                                                  - 2'b01 :   Maximum Switching Frame boundary is 1ms . Fast EP configure
                                                                 enabled/disbled based on bit 24
                                                                  - 2'b10 :   Maximum Switching Frame boundary is 4ms . Fast EP configure
                                                                 enabled/disbled based on bit 24
                                                                  - 2'b11 :   Maximum Switching Frame boundary is 8ms . Fast EP configure
                                                                 enabled/disbled based on bit 24 */
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } s;
    struct cavm_usbhx_uahc_guctl3_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t reserved_25_30        : 6;
        uint32_t cfgep_cmd_switching_time_ctrl : 3;/**< [ 24: 22](R/W) Configure EP command switching time control

                                                                 Bit 24 : Enable the fast EP configure mode
                                                                  - 1: fast EP configure enabled . Only consider the ISOC EP service interval in
                                                                 determining the switching time
                                                                  - 0: fast EP configure disabled. Consider the ISOC and INTR EP service interval
                                                                 in determining the switching time
                                                                 Bit [23:22] Maximum switching frame boundary
                                                                  - 2'b00 :   Maximum Switching Frame boundary is 32ms . Fast EP configure
                                                                 enabled/disbled based on bit 24  guctl3[24:22]='b000 is legacy switching mode
                                                                  - 2'b01 :   Maximum Switching Frame boundary is 1ms . Fast EP configure
                                                                 enabled/disbled based on bit 24
                                                                  - 2'b10 :   Maximum Switching Frame boundary is 4ms . Fast EP configure
                                                                 enabled/disbled based on bit 24
                                                                  - 2'b11 :   Maximum Switching Frame boundary is 8ms . Fast EP configure
                                                                 enabled/disbled based on bit 24 */
        uint32_t block_concurrent_in_ctrl_xfers : 1;/**< [ 21: 21](R/W) Block concurrent IN transactions during Control transfers

                                                                 This bit controls the way in which concurrent IN is handled for control transfers
                                                                  - 0: Concurrent IN transfers are blocked during control transfers
                                                                  - 1: Concurrent IN transfers are not blocked during control transfers */
        uint32_t ssbi_single_ep_mode_disable : 1;/**< [ 20: 20](R/W) SS BI Single EP mode Disable

                                                                 When set, this field disables single EP mode in the SS BI.
                                                                  - 1'b0: Single EP mode in SS BI enabled
                                                                  - 1'b1: Single EP mode in SS BI disabled */
        uint32_t disextbusclkgt_u1u2l1 : 1;  /**< [ 19: 19](R/W) Disable External Bus Clock Gating in U1/U2/L1 state

                                                                 This bit is only used when the DWC_USB31_EXT_BUS_CLK_OFF parameter is set to 1.
                                                                 This bit is used to generate the pmgt_ext_bus_clk_off signal when the following
                                                                 conditions occur:
                                                                  -  GUCTL3[DISEXTBUSCLKGT] is cleared
                                                                  -  GUCTL3[DISEXTBUSCLKGT_U1U2L1] is cleared
                                                                  -  Link is in RXDET, DISABLE, INACTIVE, or U3 state and the controller is idle
                                                                  -  All USB 2.0 ports are in L2 state, that is, UTMI suspend is asserted */
        uint32_t disextbusclkgt        : 1;  /**< [ 18: 18](R/W) Disable External Bus Clock Gating

                                                                 This bit is only used when the DWC_USB31_EXT_BUS_CLK_OFF parameter is set to 1.
                                                                 This bit is used to generate the pmgt_ext_bus_clk_off signal when the following
                                                                 conditions occur:
                                                                  -  GUCTL3[DISEXTBUSCLKGT] is cleared
                                                                  -  Link is in RXDET, DISABLE, INACTIVE, U1, U2, or U3 state and the controller is idle
                                                                  -  All USB 2.0 ports are in LPM-L1 or L2 state, that is, UTMI suspend,
                                                                 l1_suspend and sleep is asserted */
        uint32_t rsvd_peri_bandwidth_fs : 1; /**< [ 17: 17](R/W) 85percent bandwidth reservation for periodic transfer for FS bus behind HS hub

                                                                  When not set, the bandwidth reserved for periodic transfers on a FS bus behind
                                                                 a HS hub is 85% . Setting it to 1 will increase reserved bandwidth to 90%

                                                                  When SSplit in uframe 7 is disabled , the bandwidth avaliable to periodic
                                                                 transfer is less . Setting reserved bandwith to be 90% may cause over scheduling
                                                                  - 1'b0: 85% of FS bus bandwidth reserved for periodic transfer when the FS bus is behind HS hub
                                                                  - 1'b1: 90% of FS bus bandwidth reserved for periodic transfer when the FS bus is behind HS hub */
        uint32_t usb20_retry_disable   : 1;  /**< [ 16: 16](R/W) USB2.0 Internal Retry Disable

                                                                  When set, this field disables the internal retry feature on the USB 2.0 bus.
                                                                  - 1'b0:  Internal retry feature enabled
                                                                  - 1'b1:  Internal retry feature disabled */
        uint32_t reserved_15           : 1;
        uint32_t reserved_14           : 1;
        uint32_t reserved_13           : 1;
        uint32_t svc_opp_per_hs_sep    : 4;  /**< [ 12:  9](R/W) Service opportunities for HS bulk endpoints in single endpoint mode

                                                                 Indicates the number of Service Opportunities (SOs) that will be allocated to
                                                                 the HS bulk endpoint when it is the only one asynchronous endpoint active for
                                                                 that bus instance.

                                                                 A value of n corresponds to n Service Opportunities, and the valid values of n are 1 to 13. */
        uint32_t barb_burst_enable     : 1;  /**< [  8:  8](R/W) LSP BARB Burst Support

                                                                 This bit is valid only in DRD or host mode when using LSP EHST (((DWC_USB31_MODE
                                                                 == 2) || (DWC_USB31_MODE == 1)) && (DWC_USB31_CURRENT_GEN_HST_LSP == 2)).
                                                                  - 1'b0: The lbc interface between LSP and BMU does not support burst transactions.
                                                                  - 1'b1: The lbc interface between LSP and BMU supports burst transactions. */
        uint32_t intr_ep_ping_enable   : 1;  /**< [  7:  7](R/W) Interrupt EP PING Support
                                                                  - 1'b0: Host does not send PING for SS/SSP interrupt EPs.
                                                                  - 1'b1: Host sends PING for SS/SSP interrupt EPs. */
        uint32_t periodic_uf_thr_fsls  : 7;  /**< [  6:  0](R/W) Periodic microseconds threshold

                                                                 Indicates the number of microseconds before the end of the microframe that the
                                                                 LSP cannot issue periodic requests to the PTL.

                                                                 A value of n corresponds to n microseconds, which is (125-n)/125% approximately.

                                                                 For example, if you need a threshold of approximately 10% of one uframe, then
                                                                 program this field as 0.1*125us~=12us. */
#else /* Word 0 - Little Endian */
        uint32_t periodic_uf_thr_fsls  : 7;  /**< [  6:  0](R/W) Periodic microseconds threshold

                                                                 Indicates the number of microseconds before the end of the microframe that the
                                                                 LSP cannot issue periodic requests to the PTL.

                                                                 A value of n corresponds to n microseconds, which is (125-n)/125% approximately.

                                                                 For example, if you need a threshold of approximately 10% of one uframe, then
                                                                 program this field as 0.1*125us~=12us. */
        uint32_t intr_ep_ping_enable   : 1;  /**< [  7:  7](R/W) Interrupt EP PING Support
                                                                  - 1'b0: Host does not send PING for SS/SSP interrupt EPs.
                                                                  - 1'b1: Host sends PING for SS/SSP interrupt EPs. */
        uint32_t barb_burst_enable     : 1;  /**< [  8:  8](R/W) LSP BARB Burst Support

                                                                 This bit is valid only in DRD or host mode when using LSP EHST (((DWC_USB31_MODE
                                                                 == 2) || (DWC_USB31_MODE == 1)) && (DWC_USB31_CURRENT_GEN_HST_LSP == 2)).
                                                                  - 1'b0: The lbc interface between LSP and BMU does not support burst transactions.
                                                                  - 1'b1: The lbc interface between LSP and BMU supports burst transactions. */
        uint32_t svc_opp_per_hs_sep    : 4;  /**< [ 12:  9](R/W) Service opportunities for HS bulk endpoints in single endpoint mode

                                                                 Indicates the number of Service Opportunities (SOs) that will be allocated to
                                                                 the HS bulk endpoint when it is the only one asynchronous endpoint active for
                                                                 that bus instance.

                                                                 A value of n corresponds to n Service Opportunities, and the valid values of n are 1 to 13. */
        uint32_t reserved_13           : 1;
        uint32_t reserved_14           : 1;
        uint32_t reserved_15           : 1;
        uint32_t usb20_retry_disable   : 1;  /**< [ 16: 16](R/W) USB2.0 Internal Retry Disable

                                                                  When set, this field disables the internal retry feature on the USB 2.0 bus.
                                                                  - 1'b0:  Internal retry feature enabled
                                                                  - 1'b1:  Internal retry feature disabled */
        uint32_t rsvd_peri_bandwidth_fs : 1; /**< [ 17: 17](R/W) 85percent bandwidth reservation for periodic transfer for FS bus behind HS hub

                                                                  When not set, the bandwidth reserved for periodic transfers on a FS bus behind
                                                                 a HS hub is 85% . Setting it to 1 will increase reserved bandwidth to 90%

                                                                  When SSplit in uframe 7 is disabled , the bandwidth avaliable to periodic
                                                                 transfer is less . Setting reserved bandwith to be 90% may cause over scheduling
                                                                  - 1'b0: 85% of FS bus bandwidth reserved for periodic transfer when the FS bus is behind HS hub
                                                                  - 1'b1: 90% of FS bus bandwidth reserved for periodic transfer when the FS bus is behind HS hub */
        uint32_t disextbusclkgt        : 1;  /**< [ 18: 18](R/W) Disable External Bus Clock Gating

                                                                 This bit is only used when the DWC_USB31_EXT_BUS_CLK_OFF parameter is set to 1.
                                                                 This bit is used to generate the pmgt_ext_bus_clk_off signal when the following
                                                                 conditions occur:
                                                                  -  GUCTL3[DISEXTBUSCLKGT] is cleared
                                                                  -  Link is in RXDET, DISABLE, INACTIVE, U1, U2, or U3 state and the controller is idle
                                                                  -  All USB 2.0 ports are in LPM-L1 or L2 state, that is, UTMI suspend,
                                                                 l1_suspend and sleep is asserted */
        uint32_t disextbusclkgt_u1u2l1 : 1;  /**< [ 19: 19](R/W) Disable External Bus Clock Gating in U1/U2/L1 state

                                                                 This bit is only used when the DWC_USB31_EXT_BUS_CLK_OFF parameter is set to 1.
                                                                 This bit is used to generate the pmgt_ext_bus_clk_off signal when the following
                                                                 conditions occur:
                                                                  -  GUCTL3[DISEXTBUSCLKGT] is cleared
                                                                  -  GUCTL3[DISEXTBUSCLKGT_U1U2L1] is cleared
                                                                  -  Link is in RXDET, DISABLE, INACTIVE, or U3 state and the controller is idle
                                                                  -  All USB 2.0 ports are in L2 state, that is, UTMI suspend is asserted */
        uint32_t ssbi_single_ep_mode_disable : 1;/**< [ 20: 20](R/W) SS BI Single EP mode Disable

                                                                 When set, this field disables single EP mode in the SS BI.
                                                                  - 1'b0: Single EP mode in SS BI enabled
                                                                  - 1'b1: Single EP mode in SS BI disabled */
        uint32_t block_concurrent_in_ctrl_xfers : 1;/**< [ 21: 21](R/W) Block concurrent IN transactions during Control transfers

                                                                 This bit controls the way in which concurrent IN is handled for control transfers
                                                                  - 0: Concurrent IN transfers are blocked during control transfers
                                                                  - 1: Concurrent IN transfers are not blocked during control transfers */
        uint32_t cfgep_cmd_switching_time_ctrl : 3;/**< [ 24: 22](R/W) Configure EP command switching time control

                                                                 Bit 24 : Enable the fast EP configure mode
                                                                  - 1: fast EP configure enabled . Only consider the ISOC EP service interval in
                                                                 determining the switching time
                                                                  - 0: fast EP configure disabled. Consider the ISOC and INTR EP service interval
                                                                 in determining the switching time
                                                                 Bit [23:22] Maximum switching frame boundary
                                                                  - 2'b00 :   Maximum Switching Frame boundary is 32ms . Fast EP configure
                                                                 enabled/disbled based on bit 24  guctl3[24:22]='b000 is legacy switching mode
                                                                  - 2'b01 :   Maximum Switching Frame boundary is 1ms . Fast EP configure
                                                                 enabled/disbled based on bit 24
                                                                  - 2'b10 :   Maximum Switching Frame boundary is 4ms . Fast EP configure
                                                                 enabled/disbled based on bit 24
                                                                  - 2'b11 :   Maximum Switching Frame boundary is 8ms . Fast EP configure
                                                                 enabled/disbled based on bit 24 */
        uint32_t reserved_25_30        : 6;
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_usbhx_uahc_guctl3 cavm_usbhx_uahc_guctl3_t;

static inline uint64_t CAVM_USBHX_UAHC_GUCTL3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GUCTL3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c60cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c60cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GUCTL3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GUCTL3(a) cavm_usbhx_uahc_guctl3_t
#define bustype_CAVM_USBHX_UAHC_GUCTL3(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GUCTL3(a) "USBHX_UAHC_GUCTL3"
#define device_bar_CAVM_USBHX_UAHC_GUCTL3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GUCTL3(a) (a)
#define arguments_CAVM_USBHX_UAHC_GUCTL3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_guctl4
 *
 * USBH UAHC Guctl4 Register
 * Global User Control Register 4
 */
union cavm_usbhx_uahc_guctl4
{
    uint32_t u;
    struct cavm_usbhx_uahc_guctl4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t ssp_bwd_ovhd_adj      : 5;  /**< [ 30: 26](R/W) SS/SSP bandwidth adjuest control
                                                                 GUCTL4[30]=1 indicates GUCTL4[29:26] will be subtracted from the overhead for each uframe(125us)
                                                                 GUCTL4[30]=0 indicates GUCTL4[29:26] will be added the overhead for each uframe(125us)
                                                                 GUCTL4[29:26] indicates duration in terms of 1us. */
        uint32_t reserved_21_25        : 5;
        uint32_t loa_eop_check_clks_word : 2;/**< [ 20: 19](R/W) Number of clock cycles to check  for EOP SE0 for LOA logic

                                                                 Note:
                                                                  - This field only affects USB2.0 FS operation in UTMI 16bit mode. The U2 root
                                                                 hub logic checks for the programmed number of clocks of SE0 to validate an EOP
                                                                 for a packet.
                                                                  - The actual number of clocks checked will be the value programmed plus 1. So a
                                                                 value 1 will results is checking for 2 clocks of SE0. Value of 3 will do 4
                                                                 clocks of SE0 check and so on.
                                                                  - The default value is 1, which results in 2 clocks of SE0 check. */
        uint32_t loa_eop_check_clks_byte : 2;/**< [ 18: 17](R/W) Number of clock cycles to check  for EOP SE0 for LOA logic

                                                                 Note:
                                                                  - This field only affects USB2.0 FS operation in UTMI 8bit mode. The U2 root
                                                                 hub logic checks for the programmed number of clocks of SE0 to validate an EOP
                                                                 for a packet.
                                                                  - The actual number of clocks checked will be the value programmed plus 1. So a
                                                                 value 1 will results is checking for 2 clocks of SE0. Value of 3 will do 4
                                                                 clocks of SE0 check and so on.
                                                                  - The default value is 1, which results in 2 clocks of SE0 check. */
        uint32_t csr_timeout_vl        : 17; /**< [ 16:  0](R/W) CSR Timeout Value
                                                                 This register field determines the CSR access timeout value.

                                                                 Note:
                                                                  - It is not recommended to change this register field value except for
                                                                 simulation and debug purpose.
                                                                  - Bit-bash testing is not recommended for this register field due to side-
                                                                 effects of early timeout access with ram_clk/link_clk domain registers. */
#else /* Word 0 - Little Endian */
        uint32_t csr_timeout_vl        : 17; /**< [ 16:  0](R/W) CSR Timeout Value
                                                                 This register field determines the CSR access timeout value.

                                                                 Note:
                                                                  - It is not recommended to change this register field value except for
                                                                 simulation and debug purpose.
                                                                  - Bit-bash testing is not recommended for this register field due to side-
                                                                 effects of early timeout access with ram_clk/link_clk domain registers. */
        uint32_t loa_eop_check_clks_byte : 2;/**< [ 18: 17](R/W) Number of clock cycles to check  for EOP SE0 for LOA logic

                                                                 Note:
                                                                  - This field only affects USB2.0 FS operation in UTMI 8bit mode. The U2 root
                                                                 hub logic checks for the programmed number of clocks of SE0 to validate an EOP
                                                                 for a packet.
                                                                  - The actual number of clocks checked will be the value programmed plus 1. So a
                                                                 value 1 will results is checking for 2 clocks of SE0. Value of 3 will do 4
                                                                 clocks of SE0 check and so on.
                                                                  - The default value is 1, which results in 2 clocks of SE0 check. */
        uint32_t loa_eop_check_clks_word : 2;/**< [ 20: 19](R/W) Number of clock cycles to check  for EOP SE0 for LOA logic

                                                                 Note:
                                                                  - This field only affects USB2.0 FS operation in UTMI 16bit mode. The U2 root
                                                                 hub logic checks for the programmed number of clocks of SE0 to validate an EOP
                                                                 for a packet.
                                                                  - The actual number of clocks checked will be the value programmed plus 1. So a
                                                                 value 1 will results is checking for 2 clocks of SE0. Value of 3 will do 4
                                                                 clocks of SE0 check and so on.
                                                                  - The default value is 1, which results in 2 clocks of SE0 check. */
        uint32_t reserved_21_25        : 5;
        uint32_t ssp_bwd_ovhd_adj      : 5;  /**< [ 30: 26](R/W) SS/SSP bandwidth adjuest control
                                                                 GUCTL4[30]=1 indicates GUCTL4[29:26] will be subtracted from the overhead for each uframe(125us)
                                                                 GUCTL4[30]=0 indicates GUCTL4[29:26] will be added the overhead for each uframe(125us)
                                                                 GUCTL4[29:26] indicates duration in terms of 1us. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_guctl4_s cn; */
};
typedef union cavm_usbhx_uahc_guctl4 cavm_usbhx_uahc_guctl4_t;

static inline uint64_t CAVM_USBHX_UAHC_GUCTL4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GUCTL4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c634ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c634ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GUCTL4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GUCTL4(a) cavm_usbhx_uahc_guctl4_t
#define bustype_CAVM_USBHX_UAHC_GUCTL4(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GUCTL4(a) "USBHX_UAHC_GUCTL4"
#define device_bar_CAVM_USBHX_UAHC_GUCTL4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GUCTL4(a) (a)
#define arguments_CAVM_USBHX_UAHC_GUCTL4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_guctl5
 *
 * USBH UAHC Guctl5 Register
 * Global User Control Register 5
 */
union cavm_usbhx_uahc_guctl5
{
    uint32_t u;
    struct cavm_usbhx_uahc_guctl5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_guctl5_s cn; */
};
typedef union cavm_usbhx_uahc_guctl5 cavm_usbhx_uahc_guctl5_t;

static inline uint64_t CAVM_USBHX_UAHC_GUCTL5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GUCTL5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c638ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c638ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GUCTL5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GUCTL5(a) cavm_usbhx_uahc_guctl5_t
#define bustype_CAVM_USBHX_UAHC_GUCTL5(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GUCTL5(a) "USBHX_UAHC_GUCTL5"
#define device_bar_CAVM_USBHX_UAHC_GUCTL5(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GUCTL5(a) (a)
#define arguments_CAVM_USBHX_UAHC_GUCTL5(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_guid
 *
 * USB UAHC Core User ID Register
 * This is a read/write register containing the User ID. The power-on value for this register is
 * specified as the user identification register. This register can be used in the following
 * ways:
 * * To store the version or revision of your system.
 * * To store hardware configurations that are outside of the core.
 * * As a scratch register.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_guid
{
    uint32_t u;
    struct cavm_usbhx_uahc_guid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t userid                : 32; /**< [ 31:  0](R/W) User ID. Application-programmable ID field. */
#else /* Word 0 - Little Endian */
        uint32_t userid                : 32; /**< [ 31:  0](R/W) User ID. Application-programmable ID field. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_guid_s cn; */
};
typedef union cavm_usbhx_uahc_guid cavm_usbhx_uahc_guid_t;

static inline uint64_t CAVM_USBHX_UAHC_GUID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GUID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c128ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c128ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GUID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GUID(a) cavm_usbhx_uahc_guid_t
#define bustype_CAVM_USBHX_UAHC_GUID(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GUID(a) "USBHX_UAHC_GUID"
#define device_bar_CAVM_USBHX_UAHC_GUID(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GUID(a) (a)
#define arguments_CAVM_USBHX_UAHC_GUID(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gusb2phycfg#
 *
 * USB UAHC USB2 PHY-Configuration Register
 * "This register is used to configure the core afte#r power-on. It contains USB 2.0 and USB 2.0
 * PHY-related configuration parameters. The applic#ation must program this register before
 * starting any transactions on either the SoC bus #or the USB. Per-port registers are
 * implemented.
 *
 * Do not make changes to this register after the i#nitial programming.
 *
 * This register can be reset by core domain reset #or with USBH()_UCTL_CTL[UAHC_RST]."
 */
union cavm_usbhx_uahc_gusb2phycfgx
{
    uint32_t u;
    struct cavm_usbhx_uahc_gusb2phycfgx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t physoftrst            : 1;  /**< [ 31: 31](R/W) PHY soft reset. Causes the usb2phy_reset signal to be asserted to reset a UTMI PHY. */
        uint32_t reserved_30           : 1;
        uint32_t ulpi_lpm_with_opmode_chk : 1;/**< [ 29: 29](R/W) Support the LPM over ULPI without NOPID token to the ULPI PHY. Always 0x0. */
        uint32_t hsic_con_width_adj    : 2;  /**< [ 28: 27](RO) This bit is used in the HSIC device mode of operation. Always 0x0 */
        uint32_t inv_sel_hsic          : 1;  /**< [ 26: 26](RO) The application driver uses this bit to control the HSIC enable/disable function. */
        uint32_t ovrd_fsls_disc_time   : 1;  /**< [ 25: 25](R/W) 0        = the FS/LS disconnect time is set to 2.5us as per the USB specs
                                                                 Non-zero = the FS/LS disconnect time is set to 32us. */
        uint32_t lstrd                 : 3;  /**< [ 24: 22](R/W) LS Turnaround Time (LSTRDTIM)

                                                                 This field indicates the value of the Rx-to-Tx packet gap for LS devices. The
                                                                 encoding is as follows:
                                                                  - 0: 2 bit times
                                                                  - 1: 2.5 bit times
                                                                  - 2: 3 bit times
                                                                  - 3: 3.5 bit times
                                                                  - 4: 4 bit times
                                                                  - 5: 4.5 bit times
                                                                  - 6: 5 bit times
                                                                  - 7: 5.5 bit times
                                                                 Note:
                                                                  - For normal operation (to work with most LS devices), it is recommended to set
                                                                 the value of this field to 3'h0 (2 bit times).
                                                                  - The programmable LS device inter-packet gap and turnaround delays are
                                                                 provided to support some legacy LS devices that might require different delays
                                                                 than the default/fixed ones. For instance, the AOpen LS mouse requires 3 bit
                                                                 times of inter-packet gap to work correctly.
                                                                  - Include your PHY delays when programming the LSIPD/LSTRDTIM values. For
                                                                 example, if your PHY TxEndDelay in LS mode is 30 UTMI/ULPI CLKs, then subtract
                                                                 this delay (~1 LS bit time) from the delay requirement of the device. */
        uint32_t lsipd                 : 3;  /**< [ 21: 19](R/W) LS Inter-Packet Time (LSIPD)

                                                                 This field indicates the value of Tx-to-Tx packet gap for LS devices. The encoding is as follows:
                                                                  - 0: 2 bit times
                                                                  - 1: 2.5 bit times
                                                                  - 2: 3 bit times
                                                                  - 3: 3.5 bit times
                                                                  - 4: 4 bit times
                                                                  - 5: 4.5 bit times
                                                                  - 6: 5 bit times
                                                                  - 7: 5.5 bit times
                                                                 Note:
                                                                  - For normal operation (to work with most LS devices), it is recommended to set
                                                                 this field to 3'h2 (3 bit times).
                                                                  - The programmable LS device inter-packet gap and turnaround delays are
                                                                 provided to support some legacy LS devices that might require different delays
                                                                 than the default/fixed ones. For instance, the AOpen LS mouse requires 3 bit
                                                                 times of inter-packet gap to work correctly.
                                                                  - Include your PHY delays when programming the LSIPD/LSTRDTIM values. For
                                                                 example, if your PHY TxEndDelay in LS mode is 30 UTMI/ULPI CLKs, then subtract
                                                                 this delay (~1 LS bit time) from the delay requirement of the device. */
        uint32_t ulpiextvbusindicator  : 1;  /**< [ 18: 18](R/W) Reserved (unused in this configuration). */
        uint32_t ulpiextvbusdrv        : 1;  /**< [ 17: 17](R/W) Reserved (unused in this configuration). */
        uint32_t reserved_16           : 1;
        uint32_t ulpiautores           : 1;  /**< [ 15: 15](R/W) Reserved (unused in this configuration). */
        uint32_t eusb2opmode           : 1;  /**< [ 14: 14](R/W) EUSB 2.0 UTMI interface enhancement (eUSB2OPMODE)

                                                                 This field is valid in host mode of operation.

                                                                  If this bit is set opmode and utmi_txvalid change on same clock when opmode
                                                                 switches to 2 for test mode operation.
                                                                  - 1'b0: eUSB UTMI interface enhancement disabled.
                                                                  - 1'b1: eUSB UTMI interface enhancement enabled. */
        uint32_t usbtrdtim             : 4;  /**< [ 13: 10](R/W) USB 2.0 turnaround time. Sets the turnaround time in PHY clock cycles. Specifies the
                                                                 response time for a MAC request to the packet FIFO controller (PFC) to fetch data from the
                                                                 DFIFO (SPRAM).
                                                                 USB turnaround time is a critical certification criteria when using long cables and five
                                                                 hub levels.
                                                                 When the MAC interface is 8-bit UTMI+/ULPI, the required values for this field is 0x9. */
        uint32_t xcvrdly               : 1;  /**< [  9:  9](R/W) This bit is only valid in device mode. */
        uint32_t enblslpm              : 1;  /**< [  8:  8](R/W) Enable utmi_sleep_n and utmi_l1_suspend_n. The application uses this field to control
                                                                 utmi_sleep_n and utmi_l1_suspend_n assertion to the PHY in the L1 state.
                                                                 0 = utmi_sleep_n and utmi_l1_suspend_n assertion from the core is not transferred to the
                                                                 external PHY.
                                                                 1 = utmi_sleep_n and utmi_l1_suspend_n assertion from the core is transferred to the
                                                                 external PHY.

                                                                 When hardware LPM is enabled, this bit should be set high for Port0. */
        uint32_t physel                : 1;  /**< [  7:  7](WO) USB 2.0 high-speed PHY or USB 1.1 full-speed serial transceiver select. */
        uint32_t susphy                : 1;  /**< [  6:  6](R/W) Suspend USB2.0 high-speed/full-speed/low-speed PHY. When set, USB2.0 PHY enters suspend
                                                                 mode if suspend conditions are valid. */
        uint32_t fsintf                : 1;  /**< [  5:  5](RO) Full-speed serial-interface select. Always reads as 0x0. */
        uint32_t ulpi_utmi_sel         : 1;  /**< [  4:  4](RO) ULPI or UTMI+ select. Always reads as 0x0, indicating UTMI+. */
        uint32_t phyif                 : 1;  /**< [  3:  3](R/W) PHY interface width: 1 = 16-bit, 0 = 8-bit.
                                                                 All the enabled 2.0 ports should have the same clock frequency as Port0 clock frequency
                                                                 (utmi_clk[0]).
                                                                 The UTMI 8-bit and 16-bit modes cannot be used together for different ports at the same
                                                                 time (i.e., all the ports should be in 8-bit mode, or all of them should be in 16-bit
                                                                 mode). */
        uint32_t toutcal               : 3;  /**< [  2:  0](R/W) High-speed/full-speed timeout calibration.
                                                                 The number of PHY clock cycles, as indicated by the application in this field, is
                                                                 multiplied by a bit-time factor; this factor is added to the high-speed/full-speed
                                                                 interpacket timeout duration in the core to account for additional delays introduced by
                                                                 the PHY. This might be required, since the delay introduced by the PHY in generating the
                                                                 linestate condition can vary among PHYs.

                                                                 The USB standard timeout value for high-speed operation is 736 to 816 (inclusive) bit
                                                                 times. The USB standard timeout value for full-speed operation is 16 to 18 (inclusive) bit
                                                                 times. The application must program this field based on the speed of connection.

                                                                 The number of bit times added per PHY clock are:
                                                                 * High-speed operation:
                                                                 _ one 30-MHz PHY clock = 16 bit times.
                                                                 _ one 60-MHz PHY clock = 8 bit times.

                                                                 * Full-speed operation:
                                                                 _ one 30-MHz PHY clock = 0.4 bit times.
                                                                 _ one 60-MHz PHY clock = 0.2 bit times.
                                                                 _ one 48-MHz PHY clock = 0.25 bit times. */
#else /* Word 0 - Little Endian */
        uint32_t toutcal               : 3;  /**< [  2:  0](R/W) High-speed/full-speed timeout calibration.
                                                                 The number of PHY clock cycles, as indicated by the application in this field, is
                                                                 multiplied by a bit-time factor; this factor is added to the high-speed/full-speed
                                                                 interpacket timeout duration in the core to account for additional delays introduced by
                                                                 the PHY. This might be required, since the delay introduced by the PHY in generating the
                                                                 linestate condition can vary among PHYs.

                                                                 The USB standard timeout value for high-speed operation is 736 to 816 (inclusive) bit
                                                                 times. The USB standard timeout value for full-speed operation is 16 to 18 (inclusive) bit
                                                                 times. The application must program this field based on the speed of connection.

                                                                 The number of bit times added per PHY clock are:
                                                                 * High-speed operation:
                                                                 _ one 30-MHz PHY clock = 16 bit times.
                                                                 _ one 60-MHz PHY clock = 8 bit times.

                                                                 * Full-speed operation:
                                                                 _ one 30-MHz PHY clock = 0.4 bit times.
                                                                 _ one 60-MHz PHY clock = 0.2 bit times.
                                                                 _ one 48-MHz PHY clock = 0.25 bit times. */
        uint32_t phyif                 : 1;  /**< [  3:  3](R/W) PHY interface width: 1 = 16-bit, 0 = 8-bit.
                                                                 All the enabled 2.0 ports should have the same clock frequency as Port0 clock frequency
                                                                 (utmi_clk[0]).
                                                                 The UTMI 8-bit and 16-bit modes cannot be used together for different ports at the same
                                                                 time (i.e., all the ports should be in 8-bit mode, or all of them should be in 16-bit
                                                                 mode). */
        uint32_t ulpi_utmi_sel         : 1;  /**< [  4:  4](RO) ULPI or UTMI+ select. Always reads as 0x0, indicating UTMI+. */
        uint32_t fsintf                : 1;  /**< [  5:  5](RO) Full-speed serial-interface select. Always reads as 0x0. */
        uint32_t susphy                : 1;  /**< [  6:  6](R/W) Suspend USB2.0 high-speed/full-speed/low-speed PHY. When set, USB2.0 PHY enters suspend
                                                                 mode if suspend conditions are valid. */
        uint32_t physel                : 1;  /**< [  7:  7](WO) USB 2.0 high-speed PHY or USB 1.1 full-speed serial transceiver select. */
        uint32_t enblslpm              : 1;  /**< [  8:  8](R/W) Enable utmi_sleep_n and utmi_l1_suspend_n. The application uses this field to control
                                                                 utmi_sleep_n and utmi_l1_suspend_n assertion to the PHY in the L1 state.
                                                                 0 = utmi_sleep_n and utmi_l1_suspend_n assertion from the core is not transferred to the
                                                                 external PHY.
                                                                 1 = utmi_sleep_n and utmi_l1_suspend_n assertion from the core is transferred to the
                                                                 external PHY.

                                                                 When hardware LPM is enabled, this bit should be set high for Port0. */
        uint32_t xcvrdly               : 1;  /**< [  9:  9](R/W) This bit is only valid in device mode. */
        uint32_t usbtrdtim             : 4;  /**< [ 13: 10](R/W) USB 2.0 turnaround time. Sets the turnaround time in PHY clock cycles. Specifies the
                                                                 response time for a MAC request to the packet FIFO controller (PFC) to fetch data from the
                                                                 DFIFO (SPRAM).
                                                                 USB turnaround time is a critical certification criteria when using long cables and five
                                                                 hub levels.
                                                                 When the MAC interface is 8-bit UTMI+/ULPI, the required values for this field is 0x9. */
        uint32_t eusb2opmode           : 1;  /**< [ 14: 14](R/W) EUSB 2.0 UTMI interface enhancement (eUSB2OPMODE)

                                                                 This field is valid in host mode of operation.

                                                                  If this bit is set opmode and utmi_txvalid change on same clock when opmode
                                                                 switches to 2 for test mode operation.
                                                                  - 1'b0: eUSB UTMI interface enhancement disabled.
                                                                  - 1'b1: eUSB UTMI interface enhancement enabled. */
        uint32_t ulpiautores           : 1;  /**< [ 15: 15](R/W) Reserved (unused in this configuration). */
        uint32_t reserved_16           : 1;
        uint32_t ulpiextvbusdrv        : 1;  /**< [ 17: 17](R/W) Reserved (unused in this configuration). */
        uint32_t ulpiextvbusindicator  : 1;  /**< [ 18: 18](R/W) Reserved (unused in this configuration). */
        uint32_t lsipd                 : 3;  /**< [ 21: 19](R/W) LS Inter-Packet Time (LSIPD)

                                                                 This field indicates the value of Tx-to-Tx packet gap for LS devices. The encoding is as follows:
                                                                  - 0: 2 bit times
                                                                  - 1: 2.5 bit times
                                                                  - 2: 3 bit times
                                                                  - 3: 3.5 bit times
                                                                  - 4: 4 bit times
                                                                  - 5: 4.5 bit times
                                                                  - 6: 5 bit times
                                                                  - 7: 5.5 bit times
                                                                 Note:
                                                                  - For normal operation (to work with most LS devices), it is recommended to set
                                                                 this field to 3'h2 (3 bit times).
                                                                  - The programmable LS device inter-packet gap and turnaround delays are
                                                                 provided to support some legacy LS devices that might require different delays
                                                                 than the default/fixed ones. For instance, the AOpen LS mouse requires 3 bit
                                                                 times of inter-packet gap to work correctly.
                                                                  - Include your PHY delays when programming the LSIPD/LSTRDTIM values. For
                                                                 example, if your PHY TxEndDelay in LS mode is 30 UTMI/ULPI CLKs, then subtract
                                                                 this delay (~1 LS bit time) from the delay requirement of the device. */
        uint32_t lstrd                 : 3;  /**< [ 24: 22](R/W) LS Turnaround Time (LSTRDTIM)

                                                                 This field indicates the value of the Rx-to-Tx packet gap for LS devices. The
                                                                 encoding is as follows:
                                                                  - 0: 2 bit times
                                                                  - 1: 2.5 bit times
                                                                  - 2: 3 bit times
                                                                  - 3: 3.5 bit times
                                                                  - 4: 4 bit times
                                                                  - 5: 4.5 bit times
                                                                  - 6: 5 bit times
                                                                  - 7: 5.5 bit times
                                                                 Note:
                                                                  - For normal operation (to work with most LS devices), it is recommended to set
                                                                 the value of this field to 3'h0 (2 bit times).
                                                                  - The programmable LS device inter-packet gap and turnaround delays are
                                                                 provided to support some legacy LS devices that might require different delays
                                                                 than the default/fixed ones. For instance, the AOpen LS mouse requires 3 bit
                                                                 times of inter-packet gap to work correctly.
                                                                  - Include your PHY delays when programming the LSIPD/LSTRDTIM values. For
                                                                 example, if your PHY TxEndDelay in LS mode is 30 UTMI/ULPI CLKs, then subtract
                                                                 this delay (~1 LS bit time) from the delay requirement of the device. */
        uint32_t ovrd_fsls_disc_time   : 1;  /**< [ 25: 25](R/W) 0        = the FS/LS disconnect time is set to 2.5us as per the USB specs
                                                                 Non-zero = the FS/LS disconnect time is set to 32us. */
        uint32_t inv_sel_hsic          : 1;  /**< [ 26: 26](RO) The application driver uses this bit to control the HSIC enable/disable function. */
        uint32_t hsic_con_width_adj    : 2;  /**< [ 28: 27](RO) This bit is used in the HSIC device mode of operation. Always 0x0 */
        uint32_t ulpi_lpm_with_opmode_chk : 1;/**< [ 29: 29](R/W) Support the LPM over ULPI without NOPID token to the ULPI PHY. Always 0x0. */
        uint32_t reserved_30           : 1;
        uint32_t physoftrst            : 1;  /**< [ 31: 31](R/W) PHY soft reset. Causes the usb2phy_reset signal to be asserted to reset a UTMI PHY. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gusb2phycfgx_s cn; */
};
typedef union cavm_usbhx_uahc_gusb2phycfgx cavm_usbhx_uahc_gusb2phycfgx_t;

static inline uint64_t CAVM_USBHX_UAHC_GUSB2PHYCFGX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GUSB2PHYCFGX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b==0)))
        return 0x86800000c200ll + 0x1000000000ll * ((a) & 0x1) + 4ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b==0)))
        return 0x86800000c200ll + 0x1000000000ll * ((a) & 0x1) + 4ll * ((b) & 0x0);
    __cavm_csr_fatal("USBHX_UAHC_GUSB2PHYCFGX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GUSB2PHYCFGX(a,b) cavm_usbhx_uahc_gusb2phycfgx_t
#define bustype_CAVM_USBHX_UAHC_GUSB2PHYCFGX(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GUSB2PHYCFGX(a,b) "USBHX_UAHC_GUSB2PHYCFGX"
#define device_bar_CAVM_USBHX_UAHC_GUSB2PHYCFGX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GUSB2PHYCFGX(a,b) (a)
#define arguments_CAVM_USBHX_UAHC_GUSB2PHYCFGX(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gusb2rhbctl
 *
 * USBH UAHC Gusb2rhbctl Regs Gusb2rhbctl Register
 * Global USB2 Root Hub Control Register
 *
 * In Device-only configurations, only one register is needed.
 *
 * In Host mode, per-port registers are implemented.
 */
union cavm_usbhx_uahc_gusb2rhbctl
{
    uint32_t u;
    struct cavm_usbhx_uahc_gusb2rhbctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_20_31        : 12;
        uint32_t ovrd_fs_int_pkt_del   : 8;  /**< [ 19: 12](R/W) Overriding the internal FS interpacket delay.

                                                                 This field indicates the value of Tx-to-Tx packet gap for FS devices. The encoding is as follows:
                                                                  - 0: The FS Tx-to-Tx interpacket delay is calculated internally. This value is not used.
                                                                  - Non-0: The FS Tx-to-Tx interpacket delay is OVRD_FS_INT_PKT_DEL number of UTMI clocks.
                                                                 Note:
                                                                  - For normal operation (to work with most FS devices), no change is required to this field.
                                                                  - The programmable FS device Tx-to-Tx interpacket delay is provided to support
                                                                 any legacy FS devices that might require different delays than the default/fixed
                                                                 ones.
                                                                  - Include your PHY delays when programming this value. For example, if your PHY
                                                                 TxEndDelay in FS mode is five UTMI/ULPI clocks, then subtract this delay from
                                                                 the delay requirement of the device. */
        uint32_t ovrd_hs_int_pkt_del   : 8;  /**< [ 11:  4](R/W) Overriding the internal HS interpacket delay.

                                                                 This field indicates the value of Tx-to-Tx packet gap for HS devices. The encoding is as follows:
                                                                  - 0: The HS Tx-to-Tx interpacket delay is calculated internally. This value is not used.
                                                                  - Non-0: The HS Tx-to-Tx interpacket delay is OVRD_HS_INT_PKT_DEL number of
                                                                 UTMI clocks. This will also override the TX_IPGAP_LINECHECK_DIS setting.
                                                                 Note:
                                                                  - For normal operation (to work with most HS devices), no change is required to this field.
                                                                  - When this is set to a non-0 value, it is required to set the TX_IPGAP_LINECHECK_DIS to 0.
                                                                  - The programmable HS device Tx-to-Tx interpacket delay is provided to support
                                                                 any legacy HS devices that might require different delays than the default/fixed
                                                                 ones.
                                                                  - Include your PHY delays when programming this value. For example, if your PHY
                                                                 TxEndDelay in HS mode is five UTMI/ULPI clocks, then subtract this delay from
                                                                 the delay requirement of the device. */
        uint32_t ovrd_l1timeout        : 4;  /**< [  3:  0](R/W) Overriding the driver programmed L1TIMEOUT value.

                                                                 If this value is 0, the L1 Timeout value is taken from the xHCI PORTHLPMC
                                                                 register. If this value is non-0, then this will override the L1 Timeout value
                                                                 programmed in the xHCI PORTHLPMC register. In that case the actual L1 Timeout
                                                                 would be 2 ^ \<OVRD_L1TIMEOUT-1\> * 8us. (1=8us, 2=16us, 3=32us etc) */
#else /* Word 0 - Little Endian */
        uint32_t ovrd_l1timeout        : 4;  /**< [  3:  0](R/W) Overriding the driver programmed L1TIMEOUT value.

                                                                 If this value is 0, the L1 Timeout value is taken from the xHCI PORTHLPMC
                                                                 register. If this value is non-0, then this will override the L1 Timeout value
                                                                 programmed in the xHCI PORTHLPMC register. In that case the actual L1 Timeout
                                                                 would be 2 ^ \<OVRD_L1TIMEOUT-1\> * 8us. (1=8us, 2=16us, 3=32us etc) */
        uint32_t ovrd_hs_int_pkt_del   : 8;  /**< [ 11:  4](R/W) Overriding the internal HS interpacket delay.

                                                                 This field indicates the value of Tx-to-Tx packet gap for HS devices. The encoding is as follows:
                                                                  - 0: The HS Tx-to-Tx interpacket delay is calculated internally. This value is not used.
                                                                  - Non-0: The HS Tx-to-Tx interpacket delay is OVRD_HS_INT_PKT_DEL number of
                                                                 UTMI clocks. This will also override the TX_IPGAP_LINECHECK_DIS setting.
                                                                 Note:
                                                                  - For normal operation (to work with most HS devices), no change is required to this field.
                                                                  - When this is set to a non-0 value, it is required to set the TX_IPGAP_LINECHECK_DIS to 0.
                                                                  - The programmable HS device Tx-to-Tx interpacket delay is provided to support
                                                                 any legacy HS devices that might require different delays than the default/fixed
                                                                 ones.
                                                                  - Include your PHY delays when programming this value. For example, if your PHY
                                                                 TxEndDelay in HS mode is five UTMI/ULPI clocks, then subtract this delay from
                                                                 the delay requirement of the device. */
        uint32_t ovrd_fs_int_pkt_del   : 8;  /**< [ 19: 12](R/W) Overriding the internal FS interpacket delay.

                                                                 This field indicates the value of Tx-to-Tx packet gap for FS devices. The encoding is as follows:
                                                                  - 0: The FS Tx-to-Tx interpacket delay is calculated internally. This value is not used.
                                                                  - Non-0: The FS Tx-to-Tx interpacket delay is OVRD_FS_INT_PKT_DEL number of UTMI clocks.
                                                                 Note:
                                                                  - For normal operation (to work with most FS devices), no change is required to this field.
                                                                  - The programmable FS device Tx-to-Tx interpacket delay is provided to support
                                                                 any legacy FS devices that might require different delays than the default/fixed
                                                                 ones.
                                                                  - Include your PHY delays when programming this value. For example, if your PHY
                                                                 TxEndDelay in FS mode is five UTMI/ULPI clocks, then subtract this delay from
                                                                 the delay requirement of the device. */
        uint32_t reserved_20_31        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gusb2rhbctl_s cn; */
};
typedef union cavm_usbhx_uahc_gusb2rhbctl cavm_usbhx_uahc_gusb2rhbctl_t;

static inline uint64_t CAVM_USBHX_UAHC_GUSB2RHBCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GUSB2RHBCTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c640ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c640ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_GUSB2RHBCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GUSB2RHBCTL(a) cavm_usbhx_uahc_gusb2rhbctl_t
#define bustype_CAVM_USBHX_UAHC_GUSB2RHBCTL(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GUSB2RHBCTL(a) "USBHX_UAHC_GUSB2RHBCTL"
#define device_bar_CAVM_USBHX_UAHC_GUSB2RHBCTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GUSB2RHBCTL(a) (a)
#define arguments_CAVM_USBHX_UAHC_GUSB2RHBCTL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_gusb31pipectl#
 *
 * USB UAHC USB31 Pipe-Control Register
 * This register is used to configure the core after power-on. It contains USB 3.1 and USB 3.1
 * PHY-related configuration parameters. The application must program this register before
 * starting any transactions on either the SoC bus or the USB. Per-port registers are
 * implemented.
 *
 * Do not make changes to this register after the initial programming.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UAHC_RST].
 */
union cavm_usbhx_uahc_gusb31pipectlx
{
    uint32_t u;
    struct cavm_usbhx_uahc_gusb31pipectlx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t physoftrst            : 1;  /**< [ 31: 31](R/W) USB3 PHY soft reset (PHYSoftRst). When set to 1, initiates a PHY soft reset. After setting
                                                                 this bit to 1, the software needs to clear this bit. */
        uint32_t hstprtcmpl            : 1;  /**< [ 30: 30](R/W) Host port compliance. Setting this bit to 1 enables placing the SuperSpeedPlus port link into
                                                                 a compliance state, which allows testing of the PIPE PHY compliance patterns without
                                                                 having to have a test fixture on the USB 3.1 cable. By default, this bit should be set to
                                                                 0.

                                                                 In compliance-lab testing, the SuperSpeedPlus port link enters compliance after failing the
                                                                 first polling sequence after power on. Set this bit to 0 when you run compliance tests.

                                                                 The sequence for using this functionality is as follows:
                                                                 * Disconnect any plugged-in devices.
                                                                 * Set USBH()_UAHC_USBCMD[HCRST] = 1 or power-on-chip reset.
                                                                 * Set USBH()_UAHC_PORTSC()[PP] = 0.
                                                                 * Set HSTPRTCMPL = 1. This places the link into compliance state.

                                                                 To advance the compliance pattern, follow this sequence (toggle HSTPRTCMPL):
                                                                 * Set HSTPRTCMPL = 0.
                                                                 * Set HSTPRTCMPL = 1. This advances the link to the next compliance pattern.

                                                                 To exit from the compliance state, set USBH()_UAHC_USBCMD[HCRST] = 1 or power-on-chip
                                                                 reset. */
        uint32_t u2ssinactp3ok         : 1;  /**< [ 29: 29](R/W) 0 = During link state U2/SS.Inactive, put PHY in P2 (default).
                                                                 1 = During link state U2/SS.Inactive, put PHY in P3. */
        uint32_t disrxdetp3            : 1;  /**< [ 28: 28](R/W) Disables receiver detection in P3. If PHY is in P3 and the core needs to perform receiver
                                                                 detection:
                                                                 0 = Core performs receiver detection in P3 (default).
                                                                 1 = Core changes the PHY power state to P2 and then performs receiver detection. After
                                                                 receiver detection, core changes PHY power state to P3. */
        uint32_t ux_exit_in_px         : 1;  /**< [ 27: 27](R/W) 0 = Core does U1/U2/U3 exit in PHY power state P0 (default behavior).
                                                                 1 = Core does U1/U2/U3 exit in PHY power state P1/P2/P3 respectively.

                                                                 This bit is added for SuperSpeedPlus PHY workaround where SuperSpeedPlus PHY injects a glitch on
                                                                 pipe3_RxElecIdle while receiving Ux exit LFPS, and pipe3_PowerDown change is in progress. */
        uint32_t ping_enchance_en      : 1;  /**< [ 26: 26](R/W) Ping enhancement enable. When set to 1, the downstream-port U1-ping-receive timeout
                                                                 becomes 500 ms instead of 300 ms. Minimum Ping.LFPS receive duration is 8 ns (one mac3_clk
                                                                 cycle). This field is valid for the downstream port only. */
        uint32_t u1u2exitfail_to_recov : 1;  /**< [ 25: 25](R/W) U1U2exit fail to recovery. When set to 1, and U1/U2 LFPS handshake fails, the LTSSM
                                                                 transitions from U1/U2 to recovery instead of SS.inactive.
                                                                 If recovery fails, then the LTSSM can enter SS.Inactive. This is an enhancement only. It
                                                                 prevents interoperability issue if the remote link does not do the proper handshake. */
        uint32_t request_p1p2p3        : 1;  /**< [ 24: 24](R/W) Always request P1/P2/P3 for U1/U2/U3.
                                                                 0 = if immediate Ux exit (remotely initiated, or locally initiated) happens, the core does
                                                                 not request P1/P2/P3 power state change.
                                                                 1 = the core always requests PHY power change from P0 to P1/P2/P3 during U0 to U1/U2/U3
                                                                 transition. */
        uint32_t startrxdetu3rxdet     : 1;  /**< [ 23: 23](WO) If DISRXDETU3RXDET is set to 1 during reset, and the link is in U3 or Rx.Detect state, the
                                                                 core starts receiver detection on rising edge of this bit.
                                                                 This bit is valid for downstream ports only, and this feature must not be enabled for
                                                                 normal operation. */
        uint32_t disrxdetu3rxdet       : 1;  /**< [ 22: 22](R/W) Disable receiver detection in U3/Rx.Detect. When set to 1, the core does not do receiver
                                                                 detection in U3 or Rx.Detect state. If STARTRXDETU3RXDET is set to 1 during reset,
                                                                 receiver detection starts manually.
                                                                 This bit is valid for downstream ports only, and this feature must not be enabled for
                                                                 normal operation. */
        uint32_t delaypx               : 3;  /**< [ 21: 19](R/W) Delay P1P2P3. Delay P0 to P1/P2/P3 request when entering U1/U2/U3 until (DELAYPX * 8)
                                                                 8B10B error occurs, or Pipe3_RxValid drops to 0.
                                                                 DELAYPXTRANSENTERUX must reset to 1 to enable this functionality. */
        uint32_t delaypxtransenterux   : 1;  /**< [ 18: 18](R/W) Delay PHY power change from P0 to P1/P2/P3 when link state changing from U0 to U1/U2/U3
                                                                 respectively.
                                                                 0 = when entering U1/U2/U3, transition to P1/P2/P3 without checking for Pipe3_RxElecIlde
                                                                 and pipe3_RxValid.
                                                                 1 = when entering U1/U2/U3, delay the transition to P1/P2/P3 until the pipe3 signals,
                                                                 Pipe3_RxElecIlde is 1 and pipe3_RxValid is 0. */
        uint32_t suspend_en            : 1;  /**< [ 17: 17](R/W) Suspend USB3.0 SuperSpeedPlus PHY (Suspend_en). When set to 1, and if suspend conditions are
                                                                 valid, the USB 3.1 PHY enters suspend mode. */
        uint32_t datwidth              : 2;  /**< [ 16: 15](RO) PIPE data width.
                                                                 0x0 = 32 bits.
                                                                 0x1 = 16 bits.
                                                                 0x2 = 8 bits.
                                                                 0x3 = reserved.

                                                                 One clock cycle after reset, these bits receive the value seen on the pipe4_DataBusWidth.
                                                                 This will always be 0x0. */
        uint32_t abortrxdetinu2        : 1;  /**< [ 14: 14](R/W) Abort RX Detect in U2. When set to 1, and the link state is U2, the core aborts receiver
                                                                 detection if it receives U2 exit LFPS from the remote link partner.

                                                                 This bit is for downstream port only. */
        uint32_t skiprxdet             : 1;  /**< [ 13: 13](R/W) When set to 1, the core skips RX detection if pipe3_RxElecIdle is low.
                                                                 Skip is defined as waiting for the appropriate timeout, then repeating the operation. */
        uint32_t lfpsp0algn            : 1;  /**< [ 12: 12](R/W) When set to 1:
                                                                 * Core deasserts LFPS transmission on the clock edge that it requests PHY power state
                                                                 0 when exiting U1, U2, or U3 low power states. Otherwise, LFPS transmission is asserted
                                                                 one clock earlier.
                                                                 * Core requests symbol transmission two pipe3_rx_pclks periods after the PHY asserts
                                                                 PhyStatus as a result of the PHY switching from P1 or P2 state to P0 state.
                                                                 For USB 3.1 host, this is not required. */
        uint32_t p3p2tranok            : 1;  /**< [ 11: 11](R/W) 0 = P0 is always entered as an intermediate state during transitions between P2 and P3, as
                                                                 defined in the PIPE3 specification.
                                                                 1 = the core transitions directly from PHY power state P2 to P3 or from state P3 to P2.

                                                                 According to PIPE3 specification, any direct transition between P3 and P2 is illegal. */
        uint32_t p3exsigp2             : 1;  /**< [ 10: 10](R/W) P3 exit signal in P2. When set to 1, the core always changes the PHY power state to P2,
                                                                 before attempting a U3 exit handshake. */
        uint32_t lfpsfilt              : 1;  /**< [  9:  9](R/W) LFPS filter. When set to 1, filter LFPS reception with pipe3_RxValid in PHY power state
                                                                 P0, ignore LFPS reception from the PHY unless both pipe3_Rxelecidle and pipe3_RxValid are
                                                                 deasserted. */
        uint32_t rxdet2polllfpsctrl    : 1;  /**< [  8:  8](R/W) RX_DETECT to polling.
                                                                 0 = Enables a 400 us delay to start polling LFPS after RX_DETECT. This allows VCM offset
                                                                 to settle to a proper level.
                                                                 1 = Disables the 400 us delay to start polling LFPS after RX_DETECT. */
        uint32_t reserved_7            : 1;
        uint32_t txswing               : 1;  /**< [  6:  6](R/W) Refer to the PIPE3 specification. */
        uint32_t txmargin              : 3;  /**< [  5:  3](R/W) Refer to the PIPE3 specification, table 5-3. */
        uint32_t txdeemphasis          : 2;  /**< [  2:  1](R/W) The value driven to the PHY is controlled by the LTSSM during USB3
                                                                 compliance mode. Refer to the PIPE3 specification, table 5-3.

                                                                 Use the following values for the appropriate level of de-emphasis (From pipe3 spec):
                                                                 0x0 =   -6 dB de-emphasis, use USBH()_UCTL_PORT()_CFG_SS_PLS[PCS_TX_DEEMPH_6DB].
                                                                 0x1 = -3.5 dB de-emphasis, use USBH()_UCTL_PORT()_CFG_SS_PLS[PCS_TX_DEEMPH_3P5DB].
                                                                 0x2 =     No de-emphasis.
                                                                 0x3 =     Reserved.

                                                                 Use the following values for the appropriate level of de-emphasis (From pipe3 spec):
                                                                 0x0 =   -6 dB de-emphasis, use USBH()_UCTL_PORT()_CFG_SS_PLS[PCS_TX_DEEMPH_6DB].
                                                                 0x1 = -3.5 dB de-emphasis, use USBH()_UCTL_PORT()_CFG_SS_PLS[PCS_TX_DEEMPH_3P5DB].
                                                                 0x2 =     No de-emphasis.
                                                                 0x3 =     Reserved. */
        uint32_t elasticbuffermode     : 1;  /**< [  0:  0](R/W) Elastic buffer mode. Refer to the PIPE3 specification, table 5-3. */
#else /* Word 0 - Little Endian */
        uint32_t elasticbuffermode     : 1;  /**< [  0:  0](R/W) Elastic buffer mode. Refer to the PIPE3 specification, table 5-3. */
        uint32_t txdeemphasis          : 2;  /**< [  2:  1](R/W) The value driven to the PHY is controlled by the LTSSM during USB3
                                                                 compliance mode. Refer to the PIPE3 specification, table 5-3.

                                                                 Use the following values for the appropriate level of de-emphasis (From pipe3 spec):
                                                                 0x0 =   -6 dB de-emphasis, use USBH()_UCTL_PORT()_CFG_SS_PLS[PCS_TX_DEEMPH_6DB].
                                                                 0x1 = -3.5 dB de-emphasis, use USBH()_UCTL_PORT()_CFG_SS_PLS[PCS_TX_DEEMPH_3P5DB].
                                                                 0x2 =     No de-emphasis.
                                                                 0x3 =     Reserved.

                                                                 Use the following values for the appropriate level of de-emphasis (From pipe3 spec):
                                                                 0x0 =   -6 dB de-emphasis, use USBH()_UCTL_PORT()_CFG_SS_PLS[PCS_TX_DEEMPH_6DB].
                                                                 0x1 = -3.5 dB de-emphasis, use USBH()_UCTL_PORT()_CFG_SS_PLS[PCS_TX_DEEMPH_3P5DB].
                                                                 0x2 =     No de-emphasis.
                                                                 0x3 =     Reserved. */
        uint32_t txmargin              : 3;  /**< [  5:  3](R/W) Refer to the PIPE3 specification, table 5-3. */
        uint32_t txswing               : 1;  /**< [  6:  6](R/W) Refer to the PIPE3 specification. */
        uint32_t reserved_7            : 1;
        uint32_t rxdet2polllfpsctrl    : 1;  /**< [  8:  8](R/W) RX_DETECT to polling.
                                                                 0 = Enables a 400 us delay to start polling LFPS after RX_DETECT. This allows VCM offset
                                                                 to settle to a proper level.
                                                                 1 = Disables the 400 us delay to start polling LFPS after RX_DETECT. */
        uint32_t lfpsfilt              : 1;  /**< [  9:  9](R/W) LFPS filter. When set to 1, filter LFPS reception with pipe3_RxValid in PHY power state
                                                                 P0, ignore LFPS reception from the PHY unless both pipe3_Rxelecidle and pipe3_RxValid are
                                                                 deasserted. */
        uint32_t p3exsigp2             : 1;  /**< [ 10: 10](R/W) P3 exit signal in P2. When set to 1, the core always changes the PHY power state to P2,
                                                                 before attempting a U3 exit handshake. */
        uint32_t p3p2tranok            : 1;  /**< [ 11: 11](R/W) 0 = P0 is always entered as an intermediate state during transitions between P2 and P3, as
                                                                 defined in the PIPE3 specification.
                                                                 1 = the core transitions directly from PHY power state P2 to P3 or from state P3 to P2.

                                                                 According to PIPE3 specification, any direct transition between P3 and P2 is illegal. */
        uint32_t lfpsp0algn            : 1;  /**< [ 12: 12](R/W) When set to 1:
                                                                 * Core deasserts LFPS transmission on the clock edge that it requests PHY power state
                                                                 0 when exiting U1, U2, or U3 low power states. Otherwise, LFPS transmission is asserted
                                                                 one clock earlier.
                                                                 * Core requests symbol transmission two pipe3_rx_pclks periods after the PHY asserts
                                                                 PhyStatus as a result of the PHY switching from P1 or P2 state to P0 state.
                                                                 For USB 3.1 host, this is not required. */
        uint32_t skiprxdet             : 1;  /**< [ 13: 13](R/W) When set to 1, the core skips RX detection if pipe3_RxElecIdle is low.
                                                                 Skip is defined as waiting for the appropriate timeout, then repeating the operation. */
        uint32_t abortrxdetinu2        : 1;  /**< [ 14: 14](R/W) Abort RX Detect in U2. When set to 1, and the link state is U2, the core aborts receiver
                                                                 detection if it receives U2 exit LFPS from the remote link partner.

                                                                 This bit is for downstream port only. */
        uint32_t datwidth              : 2;  /**< [ 16: 15](RO) PIPE data width.
                                                                 0x0 = 32 bits.
                                                                 0x1 = 16 bits.
                                                                 0x2 = 8 bits.
                                                                 0x3 = reserved.

                                                                 One clock cycle after reset, these bits receive the value seen on the pipe4_DataBusWidth.
                                                                 This will always be 0x0. */
        uint32_t suspend_en            : 1;  /**< [ 17: 17](R/W) Suspend USB3.0 SuperSpeedPlus PHY (Suspend_en). When set to 1, and if suspend conditions are
                                                                 valid, the USB 3.1 PHY enters suspend mode. */
        uint32_t delaypxtransenterux   : 1;  /**< [ 18: 18](R/W) Delay PHY power change from P0 to P1/P2/P3 when link state changing from U0 to U1/U2/U3
                                                                 respectively.
                                                                 0 = when entering U1/U2/U3, transition to P1/P2/P3 without checking for Pipe3_RxElecIlde
                                                                 and pipe3_RxValid.
                                                                 1 = when entering U1/U2/U3, delay the transition to P1/P2/P3 until the pipe3 signals,
                                                                 Pipe3_RxElecIlde is 1 and pipe3_RxValid is 0. */
        uint32_t delaypx               : 3;  /**< [ 21: 19](R/W) Delay P1P2P3. Delay P0 to P1/P2/P3 request when entering U1/U2/U3 until (DELAYPX * 8)
                                                                 8B10B error occurs, or Pipe3_RxValid drops to 0.
                                                                 DELAYPXTRANSENTERUX must reset to 1 to enable this functionality. */
        uint32_t disrxdetu3rxdet       : 1;  /**< [ 22: 22](R/W) Disable receiver detection in U3/Rx.Detect. When set to 1, the core does not do receiver
                                                                 detection in U3 or Rx.Detect state. If STARTRXDETU3RXDET is set to 1 during reset,
                                                                 receiver detection starts manually.
                                                                 This bit is valid for downstream ports only, and this feature must not be enabled for
                                                                 normal operation. */
        uint32_t startrxdetu3rxdet     : 1;  /**< [ 23: 23](WO) If DISRXDETU3RXDET is set to 1 during reset, and the link is in U3 or Rx.Detect state, the
                                                                 core starts receiver detection on rising edge of this bit.
                                                                 This bit is valid for downstream ports only, and this feature must not be enabled for
                                                                 normal operation. */
        uint32_t request_p1p2p3        : 1;  /**< [ 24: 24](R/W) Always request P1/P2/P3 for U1/U2/U3.
                                                                 0 = if immediate Ux exit (remotely initiated, or locally initiated) happens, the core does
                                                                 not request P1/P2/P3 power state change.
                                                                 1 = the core always requests PHY power change from P0 to P1/P2/P3 during U0 to U1/U2/U3
                                                                 transition. */
        uint32_t u1u2exitfail_to_recov : 1;  /**< [ 25: 25](R/W) U1U2exit fail to recovery. When set to 1, and U1/U2 LFPS handshake fails, the LTSSM
                                                                 transitions from U1/U2 to recovery instead of SS.inactive.
                                                                 If recovery fails, then the LTSSM can enter SS.Inactive. This is an enhancement only. It
                                                                 prevents interoperability issue if the remote link does not do the proper handshake. */
        uint32_t ping_enchance_en      : 1;  /**< [ 26: 26](R/W) Ping enhancement enable. When set to 1, the downstream-port U1-ping-receive timeout
                                                                 becomes 500 ms instead of 300 ms. Minimum Ping.LFPS receive duration is 8 ns (one mac3_clk
                                                                 cycle). This field is valid for the downstream port only. */
        uint32_t ux_exit_in_px         : 1;  /**< [ 27: 27](R/W) 0 = Core does U1/U2/U3 exit in PHY power state P0 (default behavior).
                                                                 1 = Core does U1/U2/U3 exit in PHY power state P1/P2/P3 respectively.

                                                                 This bit is added for SuperSpeedPlus PHY workaround where SuperSpeedPlus PHY injects a glitch on
                                                                 pipe3_RxElecIdle while receiving Ux exit LFPS, and pipe3_PowerDown change is in progress. */
        uint32_t disrxdetp3            : 1;  /**< [ 28: 28](R/W) Disables receiver detection in P3. If PHY is in P3 and the core needs to perform receiver
                                                                 detection:
                                                                 0 = Core performs receiver detection in P3 (default).
                                                                 1 = Core changes the PHY power state to P2 and then performs receiver detection. After
                                                                 receiver detection, core changes PHY power state to P3. */
        uint32_t u2ssinactp3ok         : 1;  /**< [ 29: 29](R/W) 0 = During link state U2/SS.Inactive, put PHY in P2 (default).
                                                                 1 = During link state U2/SS.Inactive, put PHY in P3. */
        uint32_t hstprtcmpl            : 1;  /**< [ 30: 30](R/W) Host port compliance. Setting this bit to 1 enables placing the SuperSpeedPlus port link into
                                                                 a compliance state, which allows testing of the PIPE PHY compliance patterns without
                                                                 having to have a test fixture on the USB 3.1 cable. By default, this bit should be set to
                                                                 0.

                                                                 In compliance-lab testing, the SuperSpeedPlus port link enters compliance after failing the
                                                                 first polling sequence after power on. Set this bit to 0 when you run compliance tests.

                                                                 The sequence for using this functionality is as follows:
                                                                 * Disconnect any plugged-in devices.
                                                                 * Set USBH()_UAHC_USBCMD[HCRST] = 1 or power-on-chip reset.
                                                                 * Set USBH()_UAHC_PORTSC()[PP] = 0.
                                                                 * Set HSTPRTCMPL = 1. This places the link into compliance state.

                                                                 To advance the compliance pattern, follow this sequence (toggle HSTPRTCMPL):
                                                                 * Set HSTPRTCMPL = 0.
                                                                 * Set HSTPRTCMPL = 1. This advances the link to the next compliance pattern.

                                                                 To exit from the compliance state, set USBH()_UAHC_USBCMD[HCRST] = 1 or power-on-chip
                                                                 reset. */
        uint32_t physoftrst            : 1;  /**< [ 31: 31](R/W) USB3 PHY soft reset (PHYSoftRst). When set to 1, initiates a PHY soft reset. After setting
                                                                 this bit to 1, the software needs to clear this bit. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_gusb31pipectlx_s cn; */
};
typedef union cavm_usbhx_uahc_gusb31pipectlx cavm_usbhx_uahc_gusb31pipectlx_t;

static inline uint64_t CAVM_USBHX_UAHC_GUSB31PIPECTLX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_GUSB31PIPECTLX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b==0)))
        return 0x86800000c2c0ll + 0x1000000000ll * ((a) & 0x1) + 4ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b==0)))
        return 0x86800000c2c0ll + 0x1000000000ll * ((a) & 0x1) + 4ll * ((b) & 0x0);
    __cavm_csr_fatal("USBHX_UAHC_GUSB31PIPECTLX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_GUSB31PIPECTLX(a,b) cavm_usbhx_uahc_gusb31pipectlx_t
#define bustype_CAVM_USBHX_UAHC_GUSB31PIPECTLX(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_GUSB31PIPECTLX(a,b) "USBHX_UAHC_GUSB31PIPECTLX"
#define device_bar_CAVM_USBHX_UAHC_GUSB31PIPECTLX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_GUSB31PIPECTLX(a,b) (a)
#define arguments_CAVM_USBHX_UAHC_GUSB31PIPECTLX(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) usbh#_uahc_hccparams1
 *
 * USB XHCI Controller Capability Parameters Register 1
 * For information on this register, refer to the xHCI Specification, v1.2, section 5.3.6.
 */
union cavm_usbhx_uahc_hccparams1
{
    uint32_t u;
    struct cavm_usbhx_uahc_hccparams1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t xecp                  : 16; /**< [ 31: 16](RO) xHCI extended capabilities pointer. */
        uint32_t maxpsasize            : 4;  /**< [ 15: 12](RO) Maximum primary-stream-array size. */
        uint32_t cfc                   : 1;  /**< [ 11: 11](RO) Contiguous frame ID capability. */
        uint32_t sec                   : 1;  /**< [ 10: 10](RO/H) Stopped EDLTA capability. */
        uint32_t spc                   : 1;  /**< [  9:  9](RO/H) Stopped - short packet capability. */
        uint32_t pae                   : 1;  /**< [  8:  8](RO) Parse all event data. */
        uint32_t nss                   : 1;  /**< [  7:  7](RO) No secondary SID support. */
        uint32_t ltc                   : 1;  /**< [  6:  6](RO) Latency tolerance messaging capability. */
        uint32_t lhrc                  : 1;  /**< [  5:  5](RO) Light HC reset capability. */
        uint32_t pind                  : 1;  /**< [  4:  4](RO) Port indicators. */
        uint32_t ppc                   : 1;  /**< [  3:  3](RO) Port power control. Value is based on USBH()_UCTL_HOST_CFG[PPC_EN]. */
        uint32_t csz                   : 1;  /**< [  2:  2](RO) Context size. */
        uint32_t bnc                   : 1;  /**< [  1:  1](RO) BW negotiation capability. */
        uint32_t ac64                  : 1;  /**< [  0:  0](RO) 64-bit addressing capability. */
#else /* Word 0 - Little Endian */
        uint32_t ac64                  : 1;  /**< [  0:  0](RO) 64-bit addressing capability. */
        uint32_t bnc                   : 1;  /**< [  1:  1](RO) BW negotiation capability. */
        uint32_t csz                   : 1;  /**< [  2:  2](RO) Context size. */
        uint32_t ppc                   : 1;  /**< [  3:  3](RO) Port power control. Value is based on USBH()_UCTL_HOST_CFG[PPC_EN]. */
        uint32_t pind                  : 1;  /**< [  4:  4](RO) Port indicators. */
        uint32_t lhrc                  : 1;  /**< [  5:  5](RO) Light HC reset capability. */
        uint32_t ltc                   : 1;  /**< [  6:  6](RO) Latency tolerance messaging capability. */
        uint32_t nss                   : 1;  /**< [  7:  7](RO) No secondary SID support. */
        uint32_t pae                   : 1;  /**< [  8:  8](RO) Parse all event data. */
        uint32_t spc                   : 1;  /**< [  9:  9](RO/H) Stopped - short packet capability. */
        uint32_t sec                   : 1;  /**< [ 10: 10](RO/H) Stopped EDLTA capability. */
        uint32_t cfc                   : 1;  /**< [ 11: 11](RO) Contiguous frame ID capability. */
        uint32_t maxpsasize            : 4;  /**< [ 15: 12](RO) Maximum primary-stream-array size. */
        uint32_t xecp                  : 16; /**< [ 31: 16](RO) xHCI extended capabilities pointer. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_hccparams1_s cn; */
};
typedef union cavm_usbhx_uahc_hccparams1 cavm_usbhx_uahc_hccparams1_t;

static inline uint64_t CAVM_USBHX_UAHC_HCCPARAMS1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_HCCPARAMS1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000010ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000010ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_HCCPARAMS1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_HCCPARAMS1(a) cavm_usbhx_uahc_hccparams1_t
#define bustype_CAVM_USBHX_UAHC_HCCPARAMS1(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_HCCPARAMS1(a) "USBHX_UAHC_HCCPARAMS1"
#define device_bar_CAVM_USBHX_UAHC_HCCPARAMS1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_HCCPARAMS1(a) (a)
#define arguments_CAVM_USBHX_UAHC_HCCPARAMS1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_hccparams2
 *
 * USB XHCI Controller Capability Parameters Register 2
 * The default values for all fields in this register are implementation dependent. For
 * information on this register, refer to the xHCI          Specification, v1.2, section 5.3.9.
 */
union cavm_usbhx_uahc_hccparams2
{
    uint32_t u;
    struct cavm_usbhx_uahc_hccparams2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t etc_tsc               : 1;  /**< [  7:  7](RO/H) Extended TBC TRB Status Capability. */
        uint32_t etc                   : 1;  /**< [  6:  6](RO/H) ETC */
        uint32_t cic                   : 1;  /**< [  5:  5](RO) Configuration information capability. */
        uint32_t lec                   : 1;  /**< [  4:  4](RO) Large ESIT payload capability. */
        uint32_t ctc                   : 1;  /**< [  3:  3](RO) Compliance transition capability. */
        uint32_t fsc                   : 1;  /**< [  2:  2](RO) Force save context capability. */
        uint32_t cmc                   : 1;  /**< [  1:  1](RO) Configure endpoint command max exit latency too large capability. */
        uint32_t u3c                   : 1;  /**< [  0:  0](RO) U3 entry capability. */
#else /* Word 0 - Little Endian */
        uint32_t u3c                   : 1;  /**< [  0:  0](RO) U3 entry capability. */
        uint32_t cmc                   : 1;  /**< [  1:  1](RO) Configure endpoint command max exit latency too large capability. */
        uint32_t fsc                   : 1;  /**< [  2:  2](RO) Force save context capability. */
        uint32_t ctc                   : 1;  /**< [  3:  3](RO) Compliance transition capability. */
        uint32_t lec                   : 1;  /**< [  4:  4](RO) Large ESIT payload capability. */
        uint32_t cic                   : 1;  /**< [  5:  5](RO) Configuration information capability. */
        uint32_t etc                   : 1;  /**< [  6:  6](RO/H) ETC */
        uint32_t etc_tsc               : 1;  /**< [  7:  7](RO/H) Extended TBC TRB Status Capability. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_hccparams2_s cn; */
};
typedef union cavm_usbhx_uahc_hccparams2 cavm_usbhx_uahc_hccparams2_t;

static inline uint64_t CAVM_USBHX_UAHC_HCCPARAMS2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_HCCPARAMS2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000001cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000001cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_HCCPARAMS2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_HCCPARAMS2(a) cavm_usbhx_uahc_hccparams2_t
#define bustype_CAVM_USBHX_UAHC_HCCPARAMS2(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_HCCPARAMS2(a) "USBHX_UAHC_HCCPARAMS2"
#define device_bar_CAVM_USBHX_UAHC_HCCPARAMS2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_HCCPARAMS2(a) (a)
#define arguments_CAVM_USBHX_UAHC_HCCPARAMS2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_hcsparams1
 *
 * USB XHCI Controller Structural Parameters Register 1
 * This register defines basic structural parameters supported by this xHC implementation: number
 * of device slots support, Interrupters,         root hub ports, etc. For information on this
 * register, refer to the xHCI Specification, v1.2, section 5.3.3.
 */
union cavm_usbhx_uahc_hcsparams1
{
    uint32_t u;
    struct cavm_usbhx_uahc_hcsparams1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t maxports              : 8;  /**< [ 31: 24](RO) Maximum number of ports. */
        uint32_t reserved_19_23        : 5;
        uint32_t maxintrs              : 11; /**< [ 18:  8](RO) Maximum number of interrupters. */
        uint32_t maxslots              : 8;  /**< [  7:  0](RO) Maximum number of device slots. */
#else /* Word 0 - Little Endian */
        uint32_t maxslots              : 8;  /**< [  7:  0](RO) Maximum number of device slots. */
        uint32_t maxintrs              : 11; /**< [ 18:  8](RO) Maximum number of interrupters. */
        uint32_t reserved_19_23        : 5;
        uint32_t maxports              : 8;  /**< [ 31: 24](RO) Maximum number of ports. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_hcsparams1_s cn; */
};
typedef union cavm_usbhx_uahc_hcsparams1 cavm_usbhx_uahc_hcsparams1_t;

static inline uint64_t CAVM_USBHX_UAHC_HCSPARAMS1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_HCSPARAMS1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000004ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000004ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_HCSPARAMS1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_HCSPARAMS1(a) cavm_usbhx_uahc_hcsparams1_t
#define bustype_CAVM_USBHX_UAHC_HCSPARAMS1(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_HCSPARAMS1(a) "USBHX_UAHC_HCSPARAMS1"
#define device_bar_CAVM_USBHX_UAHC_HCSPARAMS1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_HCSPARAMS1(a) (a)
#define arguments_CAVM_USBHX_UAHC_HCSPARAMS1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_hcsparams2
 *
 * USB XHCI Controller Structural Parameters Register 2
 * This register defines additional xHC structural parameters. For information on this register,
 * refer to the xHCI Specification, v1.2, section 5.3.4.
 */
union cavm_usbhx_uahc_hcsparams2
{
    uint32_t u;
    struct cavm_usbhx_uahc_hcsparams2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t maxscratchpadbufs_l   : 5;  /**< [ 31: 27](RO) Maximum number of scratchpad buffers[4:0]. */
        uint32_t spr                   : 1;  /**< [ 26: 26](RO) Scratchpad restore. */
        uint32_t maxscratchpadbufs_h   : 5;  /**< [ 25: 21](RO) Maximum number of scratchpad buffers[9:5]. */
        uint32_t reserved_8_20         : 13;
        uint32_t erst_max              : 4;  /**< [  7:  4](RO) Event ring segment table maximum. */
        uint32_t ist                   : 4;  /**< [  3:  0](RO) Isochronous scheduling threshold. */
#else /* Word 0 - Little Endian */
        uint32_t ist                   : 4;  /**< [  3:  0](RO) Isochronous scheduling threshold. */
        uint32_t erst_max              : 4;  /**< [  7:  4](RO) Event ring segment table maximum. */
        uint32_t reserved_8_20         : 13;
        uint32_t maxscratchpadbufs_h   : 5;  /**< [ 25: 21](RO) Maximum number of scratchpad buffers[9:5]. */
        uint32_t spr                   : 1;  /**< [ 26: 26](RO) Scratchpad restore. */
        uint32_t maxscratchpadbufs_l   : 5;  /**< [ 31: 27](RO) Maximum number of scratchpad buffers[4:0]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_hcsparams2_s cn; */
};
typedef union cavm_usbhx_uahc_hcsparams2 cavm_usbhx_uahc_hcsparams2_t;

static inline uint64_t CAVM_USBHX_UAHC_HCSPARAMS2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_HCSPARAMS2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000008ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000008ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_HCSPARAMS2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_HCSPARAMS2(a) cavm_usbhx_uahc_hcsparams2_t
#define bustype_CAVM_USBHX_UAHC_HCSPARAMS2(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_HCSPARAMS2(a) "USBHX_UAHC_HCSPARAMS2"
#define device_bar_CAVM_USBHX_UAHC_HCSPARAMS2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_HCSPARAMS2(a) (a)
#define arguments_CAVM_USBHX_UAHC_HCSPARAMS2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_hcsparams3
 *
 * USB XHCI Controller Structural Parameters Register 3
 * For information on this register, refer to the xHCI Specification, v1.2, section 5.3.5.
 */
union cavm_usbhx_uahc_hcsparams3
{
    uint32_t u;
    struct cavm_usbhx_uahc_hcsparams3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t u2_device_exit_lat    : 16; /**< [ 31: 16](RO) U2 device exit latency. */
        uint32_t reserved_8_15         : 8;
        uint32_t u1_device_exit_lat    : 8;  /**< [  7:  0](RO) U1 device exit latency. */
#else /* Word 0 - Little Endian */
        uint32_t u1_device_exit_lat    : 8;  /**< [  7:  0](RO) U1 device exit latency. */
        uint32_t reserved_8_15         : 8;
        uint32_t u2_device_exit_lat    : 16; /**< [ 31: 16](RO) U2 device exit latency. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_hcsparams3_s cn; */
};
typedef union cavm_usbhx_uahc_hcsparams3 cavm_usbhx_uahc_hcsparams3_t;

static inline uint64_t CAVM_USBHX_UAHC_HCSPARAMS3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_HCSPARAMS3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000000cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000000cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_HCSPARAMS3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_HCSPARAMS3(a) cavm_usbhx_uahc_hcsparams3_t
#define bustype_CAVM_USBHX_UAHC_HCSPARAMS3(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_HCSPARAMS3(a) "USBHX_UAHC_HCSPARAMS3"
#define device_bar_CAVM_USBHX_UAHC_HCSPARAMS3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_HCSPARAMS3(a) (a)
#define arguments_CAVM_USBHX_UAHC_HCSPARAMS3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_iman#
 *
 * USB XHCI Interrupt Management Register
 * For information on this register, refer to the xHCI Specification, v1.2, section 5.5.2.1.
 *
 * This register can be reset by core domain reset,
 * or USBH()_UCTL_CTL[UAHC_RST],
 * or USBH()_UAHC_GCTL[CORESOFTRESET],
 * or USBH()_UAHC_USBCMD[HCRST], or USBH()_UAHC_USBCMD[LHCRST].
 */
union cavm_usbhx_uahc_imanx
{
    uint32_t u;
    struct cavm_usbhx_uahc_imanx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t ie                    : 1;  /**< [  1:  1](R/W) Interrupt enable. */
        uint32_t ip                    : 1;  /**< [  0:  0](R/W1C/H) Interrupt pending. */
#else /* Word 0 - Little Endian */
        uint32_t ip                    : 1;  /**< [  0:  0](R/W1C/H) Interrupt pending. */
        uint32_t ie                    : 1;  /**< [  1:  1](R/W) Interrupt enable. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_imanx_s cn; */
};
typedef union cavm_usbhx_uahc_imanx cavm_usbhx_uahc_imanx_t;

static inline uint64_t CAVM_USBHX_UAHC_IMANX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_IMANX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b==0)))
        return 0x868000001020ll + 0x1000000000ll * ((a) & 0x1) + 0ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b==0)))
        return 0x868000001020ll + 0x1000000000ll * ((a) & 0x1) + 0ll * ((b) & 0x0);
    __cavm_csr_fatal("USBHX_UAHC_IMANX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_IMANX(a,b) cavm_usbhx_uahc_imanx_t
#define bustype_CAVM_USBHX_UAHC_IMANX(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_IMANX(a,b) "USBHX_UAHC_IMANX"
#define device_bar_CAVM_USBHX_UAHC_IMANX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_IMANX(a,b) (a)
#define arguments_CAVM_USBHX_UAHC_IMANX(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) usbh#_uahc_imod#
 *
 * USB XHCI Interrupt Moderation Register
 * For information on this register, refer to the xHCI Specification, v1.2, section 5.5.2.2.
 *
 * This register can be reset by core domain reset,
 * or USBH()_UCTL_CTL[UAHC_RST],
 * or USBH()_UAHC_GCTL[CORESOFTRESET],
 * or USBH()_UAHC_USBCMD[HCRST], or USBH()_UAHC_USBCMD[LHCRST].
 */
union cavm_usbhx_uahc_imodx
{
    uint32_t u;
    struct cavm_usbhx_uahc_imodx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t imodc                 : 16; /**< [ 31: 16](R/W) Interrupt moderation counter. */
        uint32_t imodi                 : 16; /**< [ 15:  0](R/W) Interrupt moderation interval. */
#else /* Word 0 - Little Endian */
        uint32_t imodi                 : 16; /**< [ 15:  0](R/W) Interrupt moderation interval. */
        uint32_t imodc                 : 16; /**< [ 31: 16](R/W) Interrupt moderation counter. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_imodx_s cn; */
};
typedef union cavm_usbhx_uahc_imodx cavm_usbhx_uahc_imodx_t;

static inline uint64_t CAVM_USBHX_UAHC_IMODX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_IMODX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b==0)))
        return 0x868000001024ll + 0x1000000000ll * ((a) & 0x1) + 0ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b==0)))
        return 0x868000001024ll + 0x1000000000ll * ((a) & 0x1) + 0ll * ((b) & 0x0);
    __cavm_csr_fatal("USBHX_UAHC_IMODX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_IMODX(a,b) cavm_usbhx_uahc_imodx_t
#define bustype_CAVM_USBHX_UAHC_IMODX(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_IMODX(a,b) "USBHX_UAHC_IMODX"
#define device_bar_CAVM_USBHX_UAHC_IMODX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_IMODX(a,b) (a)
#define arguments_CAVM_USBHX_UAHC_IMODX(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) usbh#_uahc_lcsr_tx_deemph
 *
 * USBH UAHC Lcsr Tx Deemph Register
 * This register is for setting TX deemphasis used in normal operation in gen2.
 */
union cavm_usbhx_uahc_lcsr_tx_deemph
{
    uint32_t u;
    struct cavm_usbhx_uahc_lcsr_tx_deemph_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t csr_tx_deemph_field_1 : 18; /**< [ 17:  0](R/W) 18 bits of TX deemphasis, defined in PIPE4 spec, in normal operation (non-compliance mode) */
#else /* Word 0 - Little Endian */
        uint32_t csr_tx_deemph_field_1 : 18; /**< [ 17:  0](R/W) 18 bits of TX deemphasis, defined in PIPE4 spec, in normal operation (non-compliance mode) */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_lcsr_tx_deemph_s cn; */
};
typedef union cavm_usbhx_uahc_lcsr_tx_deemph cavm_usbhx_uahc_lcsr_tx_deemph_t;

static inline uint64_t CAVM_USBHX_UAHC_LCSR_TX_DEEMPH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LCSR_TX_DEEMPH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d060ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d060ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LCSR_TX_DEEMPH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH(a) cavm_usbhx_uahc_lcsr_tx_deemph_t
#define bustype_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH(a) "USBHX_UAHC_LCSR_TX_DEEMPH"
#define device_bar_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH(a) (a)
#define arguments_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_lcsr_tx_deemph_1
 *
 * USBH UAHC Lcsr Tx Deemph 1 Register
 * This register is for setting TX deemphasis used in compliance mode, pattern 13
 */
union cavm_usbhx_uahc_lcsr_tx_deemph_1
{
    uint32_t u;
    struct cavm_usbhx_uahc_lcsr_tx_deemph_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t csr_tx_deemph_1_field_1 : 18;/**< [ 17:  0](R/W) 18 bits of TX deemphasis used by controller in gen2 compliance pattern 13 */
#else /* Word 0 - Little Endian */
        uint32_t csr_tx_deemph_1_field_1 : 18;/**< [ 17:  0](R/W) 18 bits of TX deemphasis used by controller in gen2 compliance pattern 13 */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_lcsr_tx_deemph_1_s cn; */
};
typedef union cavm_usbhx_uahc_lcsr_tx_deemph_1 cavm_usbhx_uahc_lcsr_tx_deemph_1_t;

static inline uint64_t CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d064ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d064ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LCSR_TX_DEEMPH_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_1(a) cavm_usbhx_uahc_lcsr_tx_deemph_1_t
#define bustype_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_1(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_1(a) "USBHX_UAHC_LCSR_TX_DEEMPH_1"
#define device_bar_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_1(a) (a)
#define arguments_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_lcsr_tx_deemph_2
 *
 * USBH UAHC Lcsr Tx Deemph 2 Register
 * This register is for setting TX deemphasis used in compliance mode, pattern 14.
 */
union cavm_usbhx_uahc_lcsr_tx_deemph_2
{
    uint32_t u;
    struct cavm_usbhx_uahc_lcsr_tx_deemph_2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t csr_tx_deemph_2_field_1 : 18;/**< [ 17:  0](R/W) 18 bits of TX deemphasis used by controller in gen2 compliance pattern 14. */
#else /* Word 0 - Little Endian */
        uint32_t csr_tx_deemph_2_field_1 : 18;/**< [ 17:  0](R/W) 18 bits of TX deemphasis used by controller in gen2 compliance pattern 14. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_lcsr_tx_deemph_2_s cn; */
};
typedef union cavm_usbhx_uahc_lcsr_tx_deemph_2 cavm_usbhx_uahc_lcsr_tx_deemph_2_t;

static inline uint64_t CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d068ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d068ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LCSR_TX_DEEMPH_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_2(a) cavm_usbhx_uahc_lcsr_tx_deemph_2_t
#define bustype_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_2(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_2(a) "USBHX_UAHC_LCSR_TX_DEEMPH_2"
#define device_bar_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_2(a) (a)
#define arguments_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_lcsr_tx_deemph_3
 *
 * USBH UAHC Lcsr Tx Deemph 3 Register
 * This register is for setting TX deemphasis used in compliance mode, pattern 16.
 */
union cavm_usbhx_uahc_lcsr_tx_deemph_3
{
    uint32_t u;
    struct cavm_usbhx_uahc_lcsr_tx_deemph_3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t csr_tx_deemph_3_field_1 : 18;/**< [ 17:  0](R/W) 18 bits of TX deemphasis used by controller in gen2 compliance pattern 16. */
#else /* Word 0 - Little Endian */
        uint32_t csr_tx_deemph_3_field_1 : 18;/**< [ 17:  0](R/W) 18 bits of TX deemphasis used by controller in gen2 compliance pattern 16. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_lcsr_tx_deemph_3_s cn; */
};
typedef union cavm_usbhx_uahc_lcsr_tx_deemph_3 cavm_usbhx_uahc_lcsr_tx_deemph_3_t;

static inline uint64_t CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d06cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d06cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LCSR_TX_DEEMPH_3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_3(a) cavm_usbhx_uahc_lcsr_tx_deemph_3_t
#define bustype_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_3(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_3(a) "USBHX_UAHC_LCSR_TX_DEEMPH_3"
#define device_bar_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_3(a) (a)
#define arguments_CAVM_USBHX_UAHC_LCSR_TX_DEEMPH_3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_lcsrptmdebug1
 *
 * USBH UAHC Lcsrptmdebug1 Register
 * This register stores LDM t1 and LDM t32 values
 * In Host mode this register read value is 32'h0.
 */
union cavm_usbhx_uahc_lcsrptmdebug1
{
    uint32_t u;
    struct cavm_usbhx_uahc_lcsrptmdebug1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t ldm_t32               : 13; /**< [ 29: 17](RO/H) This is Response Delay value captured from the LMP TS response field. The unit
                                                                 of this field is tIsochTimestampGranularity */
        uint32_t ldm_t1                : 17; /**< [ 16:  0](RO/H) This is the 't1' timestamp, which is the time the link transmits the LMP TS request.

                                                                 The unit of this field is nanosecond (ns).

                                                                 Note:
                                                                  - The internal RTL timer counts down from 125000 to 0, and restarts at 125000
                                                                 (therefore, t1 \> t4, except in case of a roll over).
                                                                  - This value does not take into account the internal RTL TX pipeline delay.
                                                                 RTL uses the following formula for adjusting 't1' based on the pipeline delay:
                                                                 TX_PATH_DELAY (tIsochTimestampGranularity) = (gen1 ? 2 : 2) + LPTMDPDELAY[3:0] */
#else /* Word 0 - Little Endian */
        uint32_t ldm_t1                : 17; /**< [ 16:  0](RO/H) This is the 't1' timestamp, which is the time the link transmits the LMP TS request.

                                                                 The unit of this field is nanosecond (ns).

                                                                 Note:
                                                                  - The internal RTL timer counts down from 125000 to 0, and restarts at 125000
                                                                 (therefore, t1 \> t4, except in case of a roll over).
                                                                  - This value does not take into account the internal RTL TX pipeline delay.
                                                                 RTL uses the following formula for adjusting 't1' based on the pipeline delay:
                                                                 TX_PATH_DELAY (tIsochTimestampGranularity) = (gen1 ? 2 : 2) + LPTMDPDELAY[3:0] */
        uint32_t ldm_t32               : 13; /**< [ 29: 17](RO/H) This is Response Delay value captured from the LMP TS response field. The unit
                                                                 of this field is tIsochTimestampGranularity */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_lcsrptmdebug1_s cn; */
};
typedef union cavm_usbhx_uahc_lcsrptmdebug1 cavm_usbhx_uahc_lcsrptmdebug1_t;

static inline uint64_t CAVM_USBHX_UAHC_LCSRPTMDEBUG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LCSRPTMDEBUG1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d070ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d070ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LCSRPTMDEBUG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LCSRPTMDEBUG1(a) cavm_usbhx_uahc_lcsrptmdebug1_t
#define bustype_CAVM_USBHX_UAHC_LCSRPTMDEBUG1(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LCSRPTMDEBUG1(a) "USBHX_UAHC_LCSRPTMDEBUG1"
#define device_bar_CAVM_USBHX_UAHC_LCSRPTMDEBUG1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LCSRPTMDEBUG1(a) (a)
#define arguments_CAVM_USBHX_UAHC_LCSRPTMDEBUG1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_lcsrptmdebug2
 *
 * USBH UAHC Lcsrptmdebug2 Register
 * This register stores LSM t4 value
 * In Host mode this register read value is 32'h0.
 */
union cavm_usbhx_uahc_lcsrptmdebug2
{
    uint32_t u;
    struct cavm_usbhx_uahc_lcsrptmdebug2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t ldm_t4                : 17; /**< [ 16:  0](RO/H) This is the 't4' timestamp, which is the time the link receives the LMP TS response.

                                                                 The unit of this field is nanosecond (ns).

                                                                 Note:
                                                                  - The internal RTL timer counts down 125000 to 0, and restarts at 125000
                                                                 (therefore, t1 \> t4, except the case of roll over)
                                                                  - This value does not take into account the internal RTL RX pipeline delay.
                                                                 RTL uses this formula for adjusting 't4' based on the pipeline delay:
                                                                 RX_PATH_DELAY(tIsochTimestampGranularity) = (gen1 ? 4 : 5) + LPTMDPDELAY[7:4] */
#else /* Word 0 - Little Endian */
        uint32_t ldm_t4                : 17; /**< [ 16:  0](RO/H) This is the 't4' timestamp, which is the time the link receives the LMP TS response.

                                                                 The unit of this field is nanosecond (ns).

                                                                 Note:
                                                                  - The internal RTL timer counts down 125000 to 0, and restarts at 125000
                                                                 (therefore, t1 \> t4, except the case of roll over)
                                                                  - This value does not take into account the internal RTL RX pipeline delay.
                                                                 RTL uses this formula for adjusting 't4' based on the pipeline delay:
                                                                 RX_PATH_DELAY(tIsochTimestampGranularity) = (gen1 ? 4 : 5) + LPTMDPDELAY[7:4] */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_lcsrptmdebug2_s cn; */
};
typedef union cavm_usbhx_uahc_lcsrptmdebug2 cavm_usbhx_uahc_lcsrptmdebug2_t;

static inline uint64_t CAVM_USBHX_UAHC_LCSRPTMDEBUG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LCSRPTMDEBUG2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d074ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d074ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LCSRPTMDEBUG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LCSRPTMDEBUG2(a) cavm_usbhx_uahc_lcsrptmdebug2_t
#define bustype_CAVM_USBHX_UAHC_LCSRPTMDEBUG2(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LCSRPTMDEBUG2(a) "USBHX_UAHC_LCSRPTMDEBUG2"
#define device_bar_CAVM_USBHX_UAHC_LCSRPTMDEBUG2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LCSRPTMDEBUG2(a) (a)
#define arguments_CAVM_USBHX_UAHC_LCSRPTMDEBUG2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_llinkdbgcnttrig
 *
 * USBH UAHC Llinkdbgcnttrig Register
 * This register is used in conjunction with the LINK_DEBUG_CTRL_REG (LINKDGBCTRL). For
 * more information, refer to the LINK_DEBUG_CTRL_REG description.
 */
union cavm_usbhx_uahc_llinkdbgcnttrig
{
    uint32_t u;
    struct cavm_usbhx_uahc_llinkdbgcnttrig_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t stp_cnt               : 16; /**< [ 31: 16](R/W) This field is used for triggering purpose based on the selection in the LINK_DEBUG_CTRL_REG.

                                                                 If this field is zero, link writes out debug data continuously.

                                                                 SW needs to take into account of the RX RAM size to program this field.
                                                                 (stop_count start_count) is less than total RX RAM size. */
        uint32_t srt_cnt               : 16; /**< [ 15:  0](R/W) This field is used for triggering purpose based on the selection in the LINK_DEBUG_CTRL_REG */
#else /* Word 0 - Little Endian */
        uint32_t srt_cnt               : 16; /**< [ 15:  0](R/W) This field is used for triggering purpose based on the selection in the LINK_DEBUG_CTRL_REG */
        uint32_t stp_cnt               : 16; /**< [ 31: 16](R/W) This field is used for triggering purpose based on the selection in the LINK_DEBUG_CTRL_REG.

                                                                 If this field is zero, link writes out debug data continuously.

                                                                 SW needs to take into account of the RX RAM size to program this field.
                                                                 (stop_count start_count) is less than total RX RAM size. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_llinkdbgcnttrig_s cn; */
};
typedef union cavm_usbhx_uahc_llinkdbgcnttrig cavm_usbhx_uahc_llinkdbgcnttrig_t;

static inline uint64_t CAVM_USBHX_UAHC_LLINKDBGCNTTRIG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LLINKDBGCNTTRIG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d05cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d05cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LLINKDBGCNTTRIG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LLINKDBGCNTTRIG(a) cavm_usbhx_uahc_llinkdbgcnttrig_t
#define bustype_CAVM_USBHX_UAHC_LLINKDBGCNTTRIG(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LLINKDBGCNTTRIG(a) "USBHX_UAHC_LLINKDBGCNTTRIG"
#define device_bar_CAVM_USBHX_UAHC_LLINKDBGCNTTRIG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LLINKDBGCNTTRIG(a) (a)
#define arguments_CAVM_USBHX_UAHC_LLINKDBGCNTTRIG(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_llinkdbgctrl
 *
 * USBH UAHC Llinkdbgctrl Register
 * This register is used for link debug purpose.
 */
union cavm_usbhx_uahc_llinkdbgctrl
{
    uint32_t u;
    struct cavm_usbhx_uahc_llinkdbgctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t retry_dp              : 1;  /**< [ 31: 31](R/W) Link retries full DP instead of DPH in Gen2.  When link needs to resend header
                                                                 due to LBAD or recovery replay, enabling this bit makes link to send full DPH +
                                                                 DPP.  This workaround is for a non-compliance 3.1 device */
        uint32_t trigger_end_sts       : 1;  /**< [ 30: 30](RO/H) Trigger End Status */
        uint32_t trigger_start_sts     : 1;  /**< [ 29: 29](RO/H) Trigger Start Status */
        uint32_t link_state_trigger_descrambled : 1;/**< [ 28: 28](R/W) Link State Trigger Descrambled Debug Control

                                                                 When set, the controller writes the descrambled received data into the RAM.  The
                                                                 received data is the output of the descrambler.

                                                                 The link  starts writing debug data based on the following conditions:
                                                                 Link_state and sub_state match the link_state_trigger and sub_state_trigger
                                                                 field, respectively.  After this condition occurs, the link internal
                                                                 debug_byte_count starts incrementing for every link clock, based on the number
                                                                 of bytes to be written to the RAM.  For example, if MDWIDTH=128, the
                                                                 debug_byte_count increments by 16 every link_clk.
                                                                 Link internal debug_byte_count reaches the start_count_trigger field.
                                                                 The link stops writing debug data when the link internal debug_byte_count
                                                                 reaches the stop_count_trigger field.  If stop_count is zero, the link writes
                                                                 out data continuously. */
        uint32_t link_state_trigger_scrambled : 1;/**< [ 27: 27](R/W) Link State Trigger Scrambled Debug Control

                                                                 When set, controller writes the PIPE received data into the RAM. The received data is scrambled.

                                                                 The link  starts writing debug data based on the following conditions:
                                                                  - Link_state and sub_state match the link_state_trigger and sub_state_trigger
                                                                 field, respectively. After this condition occurs, the link internal
                                                                 debug_byte_count starts incrementing for every link clock, based on the number
                                                                 of bytes to be written to RAM.  For example, if MDWIDTH=64, the debug_byte_count
                                                                 increments by 8 every link_clk.
                                                                  - Link internal debug_byte_count reaches the start_count_trigger field
                                                                 The link stops writing debug data when the link internal debug_byte_count
                                                                 reaches the stop_count_trigger field.  If stop_count is zero, the link writes
                                                                 out data continuously. */
        uint32_t pipe_txdetectrxlb_trigger : 1;/**< [ 26: 26](R/W) PIPE TXDETECTRXLB Trigger Debug Control

                                                                 The link starts writing debug data based on the following conditions:
                                                                  - Link_state and sub_state match the link_state_trigger and sub_state_trigger field, respectively
                                                                  - Assertion of pipe_TxDetectRxLoopbk */
        uint32_t pipe_rxlecidle_trigger : 1; /**< [ 25: 25](R/W) The link start writing debug data based on the following conditions:
                                                                  - Link_state and sub_state match the link_state_trigger and sub_state_trigger field, respectively
                                                                  - Change state of pipe_RxElecIdle */
        uint32_t pipe_phystatus_trigger : 1; /**< [ 24: 24](R/W) The link start writing debug data based on the following conditions:
                                                                  - Link_state and sub_state match the link_state_trigger and sub_state_trigger field, respectively
                                                                  - Assertion of pipe_PhyStatus */
        uint32_t sub_state_trigger     : 4;  /**< [ 23: 20](R/W) Sub-state Trigger */
        uint32_t link_state_trigger    : 4;  /**< [ 19: 16](R/W) Link State Trigger */
        uint32_t peri_rsc_rxfifo_number : 4; /**< [ 15: 12](R/W) Periodic Resource RXFIFO Number */
        uint32_t peri_rsc_txfifo_number : 4; /**< [ 11:  8](R/W) Periodic Resource TXFIFO Number */
        uint32_t rxfifo_number         : 4;  /**< [  7:  4](R/W) RXFIFO Number */
        uint32_t txfifo_number         : 4;  /**< [  3:  0](R/W) TXFIFO Number */
#else /* Word 0 - Little Endian */
        uint32_t txfifo_number         : 4;  /**< [  3:  0](R/W) TXFIFO Number */
        uint32_t rxfifo_number         : 4;  /**< [  7:  4](R/W) RXFIFO Number */
        uint32_t peri_rsc_txfifo_number : 4; /**< [ 11:  8](R/W) Periodic Resource TXFIFO Number */
        uint32_t peri_rsc_rxfifo_number : 4; /**< [ 15: 12](R/W) Periodic Resource RXFIFO Number */
        uint32_t link_state_trigger    : 4;  /**< [ 19: 16](R/W) Link State Trigger */
        uint32_t sub_state_trigger     : 4;  /**< [ 23: 20](R/W) Sub-state Trigger */
        uint32_t pipe_phystatus_trigger : 1; /**< [ 24: 24](R/W) The link start writing debug data based on the following conditions:
                                                                  - Link_state and sub_state match the link_state_trigger and sub_state_trigger field, respectively
                                                                  - Assertion of pipe_PhyStatus */
        uint32_t pipe_rxlecidle_trigger : 1; /**< [ 25: 25](R/W) The link start writing debug data based on the following conditions:
                                                                  - Link_state and sub_state match the link_state_trigger and sub_state_trigger field, respectively
                                                                  - Change state of pipe_RxElecIdle */
        uint32_t pipe_txdetectrxlb_trigger : 1;/**< [ 26: 26](R/W) PIPE TXDETECTRXLB Trigger Debug Control

                                                                 The link starts writing debug data based on the following conditions:
                                                                  - Link_state and sub_state match the link_state_trigger and sub_state_trigger field, respectively
                                                                  - Assertion of pipe_TxDetectRxLoopbk */
        uint32_t link_state_trigger_scrambled : 1;/**< [ 27: 27](R/W) Link State Trigger Scrambled Debug Control

                                                                 When set, controller writes the PIPE received data into the RAM. The received data is scrambled.

                                                                 The link  starts writing debug data based on the following conditions:
                                                                  - Link_state and sub_state match the link_state_trigger and sub_state_trigger
                                                                 field, respectively. After this condition occurs, the link internal
                                                                 debug_byte_count starts incrementing for every link clock, based on the number
                                                                 of bytes to be written to RAM.  For example, if MDWIDTH=64, the debug_byte_count
                                                                 increments by 8 every link_clk.
                                                                  - Link internal debug_byte_count reaches the start_count_trigger field
                                                                 The link stops writing debug data when the link internal debug_byte_count
                                                                 reaches the stop_count_trigger field.  If stop_count is zero, the link writes
                                                                 out data continuously. */
        uint32_t link_state_trigger_descrambled : 1;/**< [ 28: 28](R/W) Link State Trigger Descrambled Debug Control

                                                                 When set, the controller writes the descrambled received data into the RAM.  The
                                                                 received data is the output of the descrambler.

                                                                 The link  starts writing debug data based on the following conditions:
                                                                 Link_state and sub_state match the link_state_trigger and sub_state_trigger
                                                                 field, respectively.  After this condition occurs, the link internal
                                                                 debug_byte_count starts incrementing for every link clock, based on the number
                                                                 of bytes to be written to the RAM.  For example, if MDWIDTH=128, the
                                                                 debug_byte_count increments by 16 every link_clk.
                                                                 Link internal debug_byte_count reaches the start_count_trigger field.
                                                                 The link stops writing debug data when the link internal debug_byte_count
                                                                 reaches the stop_count_trigger field.  If stop_count is zero, the link writes
                                                                 out data continuously. */
        uint32_t trigger_start_sts     : 1;  /**< [ 29: 29](RO/H) Trigger Start Status */
        uint32_t trigger_end_sts       : 1;  /**< [ 30: 30](RO/H) Trigger End Status */
        uint32_t retry_dp              : 1;  /**< [ 31: 31](R/W) Link retries full DP instead of DPH in Gen2.  When link needs to resend header
                                                                 due to LBAD or recovery replay, enabling this bit makes link to send full DPH +
                                                                 DPP.  This workaround is for a non-compliance 3.1 device */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_llinkdbgctrl_s cn; */
};
typedef union cavm_usbhx_uahc_llinkdbgctrl cavm_usbhx_uahc_llinkdbgctrl_t;

static inline uint64_t CAVM_USBHX_UAHC_LLINKDBGCTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LLINKDBGCTRL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d058ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d058ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LLINKDBGCTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LLINKDBGCTRL(a) cavm_usbhx_uahc_llinkdbgctrl_t
#define bustype_CAVM_USBHX_UAHC_LLINKDBGCTRL(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LLINKDBGCTRL(a) "USBHX_UAHC_LLINKDBGCTRL"
#define device_bar_CAVM_USBHX_UAHC_LLINKDBGCTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LLINKDBGCTRL(a) (a)
#define arguments_CAVM_USBHX_UAHC_LLINKDBGCTRL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_llinkerrinj
 *
 * USBH UAHC Llinkerrinj Register
 * LINK ERROR TYPE INJECT REGISTER.
 */
union cavm_usbhx_uahc_llinkerrinj
{
    uint32_t u;
    struct cavm_usbhx_uahc_llinkerrinj_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pipe_txdata           : 1;  /**< [ 31: 31](R/W) Inject single bit error to TxData.
                                                                 This includes additional logic to ensure IDLE symbols at the end of recovery
                                                                 aren't corrupted so that link won't enter recovery loop. */
        uint32_t tx_insert_defer       : 1;  /**< [ 30: 30](R/W) TX Insert Deferred Bit. */
        uint32_t tx_insert_delay       : 1;  /**< [ 29: 29](R/W) TX Insert Delayed Bit. */
        uint32_t tx_ts2                : 1;  /**< [ 28: 28](R/W) Tx Corrupt entired TS2. */
        uint32_t tx_ts1                : 1;  /**< [ 27: 27](R/W) Tx Corrupt entired TS1. */
        uint32_t tx_tseq               : 1;  /**< [ 26: 26](R/W) Tx Corrupt entired TSEQ. */
        uint32_t tx_lfr                : 1;  /**< [ 25: 25](R/W) Transmitted DPH will have invalid LFR. */
        uint32_t tx_delay_credit_rl    : 1;  /**< [ 24: 24](R/W) When this bit is set, link will wait for the amount of microsecond specified in
                                                                 the Error Enable Counter register [15:0]. */
        uint32_t tx_one_srt_frame_sybl : 1;  /**< [ 23: 23](R/W) all framing symbols of DPP (SDP and EPF) will be corrupted. */
        uint32_t tx_all_end_frame_sybl : 1;  /**< [ 22: 22](R/W) all framing symbols of DPP (END and EPF) will be corrupted. */
        uint32_t tx_one_end_frame_sybl : 1;  /**< [ 21: 21](R/W) TX DPP one end framing symbol
                                                                 one framing symbol of DPP (END) will be corrupted. */
        uint32_t tx_all_frame_sybl     : 1;  /**< [ 20: 20](R/W) TX TPH/DPH all framing symbol
                                                                 all framing symbols of TPH/DPH (SHP, DPHP, EPF) will be corrupted. */
        uint32_t tx_one_frame_sybl     : 1;  /**< [ 19: 19](R/W) TX TPH/DPH one framing symbol
                                                                 One framing symbol of TPH/DPH (SHP or DPHP) will be corrupted. */
        uint32_t tx_crc32              : 1;  /**< [ 18: 18](R/W) Transmitted DPP will have invalid CRC32. */
        uint32_t tx_crc16              : 1;  /**< [ 17: 17](R/W) Transmitted header will have invalid CRC16. */
        uint32_t tx_crc5               : 1;  /**< [ 16: 16](R/W) Transmitted header will have CRC error in Link Control Word. */
        uint32_t rx_pipe_rxdata        : 1;  /**< [ 15: 15](R/W) Inject single bit error to RxData.
                                                                 This includes additional logic to ensure IDLE symbols at the end of recovery
                                                                 aren't corrupted so that link won't enter recovery loop. */
        uint32_t rx_insert_defer       : 1;  /**< [ 14: 14](R/W) RX_insert_defer. */
        uint32_t rx_insert_delay       : 1;  /**< [ 13: 13](R/W) RX_insert_delay. */
        uint32_t rx_ts2                : 1;  /**< [ 12: 12](R/W) Rx Corrupt entired TS2. */
        uint32_t rx_ts1                : 1;  /**< [ 11: 11](R/W) Rx Corrupt entired TS1. */
        uint32_t rx_tseq               : 1;  /**< [ 10: 10](R/W) Rx Corrupt entired TSEQ. */
        uint32_t rx_lfr                : 1;  /**< [  9:  9](R/W) Received DPH will have invalid LFR. */
        uint32_t rx_all_start_frame_sybl : 1;/**< [  8:  8](R/W) Before 64-bit received data is forwarded to parser, all framing symbols (SDP
                                                                 or EPF) will be corrupted.
                                                                 Note:  because the entire framing symbol may not be aligned and presented on
                                                                 the 64-bit received data, 1 - 4 framing symbols will be corrupted. */
        uint32_t rx_one_srt_frame_sybl : 1;  /**< [  7:  7](R/W) Before received data is forwarded to parser in RPKT, only one framing symbol
                                                                 (SDP or EPF) will be corrupted. */
        uint32_t rx_all_end_frame_sybl : 1;  /**< [  6:  6](R/W) DPP all end framing symbol
                                                                 Before 64-bit received data is forwarded to parser, all framing symbols (END
                                                                 or EPF) will be corrupted.
                                                                 Note: Because the entire framing symbol may not be aligned and presented on
                                                                 the 64-bit received data, 1 - 4 framing symbols will be corrupted. */
        uint32_t rx_one_end_frame_sybl : 1;  /**< [  5:  5](R/W) Before received data is forwarded to parser in RPKT, only one framing symbol
                                                                 (END or EPF) will be corrupted */
        uint32_t rx_all_frame_sybl     : 1;  /**< [  4:  4](R/W) Before 64-bit received data is forwarded to parser, all framing symbols (SHP
                                                                 or EPF or DPHP) will be corrupted.
                                                                 Note:  Because the entire framing symbol may not be aligned and presented on
                                                                 the 64-bit received data, 1 - 4 framing symbols will be corrupted */
        uint32_t rx_one_frame_sybl     : 1;  /**< [  3:  3](R/W) Before received data is forwarded to parser in RPKT, only one framing symbol
                                                                 (SHP or EPF or DPHP) will be corrupted */
        uint32_t rx_crc32              : 1;  /**< [  2:  2](R/W) Received DPP will have invalid CRC32 value */
        uint32_t rx_crc16              : 1;  /**< [  1:  1](R/W) Received header will have invalid CRC16 value */
        uint32_t rx_crc5               : 1;  /**< [  0:  0](R/W) Received header will have invalid CRC5 value in Link Control Word */
#else /* Word 0 - Little Endian */
        uint32_t rx_crc5               : 1;  /**< [  0:  0](R/W) Received header will have invalid CRC5 value in Link Control Word */
        uint32_t rx_crc16              : 1;  /**< [  1:  1](R/W) Received header will have invalid CRC16 value */
        uint32_t rx_crc32              : 1;  /**< [  2:  2](R/W) Received DPP will have invalid CRC32 value */
        uint32_t rx_one_frame_sybl     : 1;  /**< [  3:  3](R/W) Before received data is forwarded to parser in RPKT, only one framing symbol
                                                                 (SHP or EPF or DPHP) will be corrupted */
        uint32_t rx_all_frame_sybl     : 1;  /**< [  4:  4](R/W) Before 64-bit received data is forwarded to parser, all framing symbols (SHP
                                                                 or EPF or DPHP) will be corrupted.
                                                                 Note:  Because the entire framing symbol may not be aligned and presented on
                                                                 the 64-bit received data, 1 - 4 framing symbols will be corrupted */
        uint32_t rx_one_end_frame_sybl : 1;  /**< [  5:  5](R/W) Before received data is forwarded to parser in RPKT, only one framing symbol
                                                                 (END or EPF) will be corrupted */
        uint32_t rx_all_end_frame_sybl : 1;  /**< [  6:  6](R/W) DPP all end framing symbol
                                                                 Before 64-bit received data is forwarded to parser, all framing symbols (END
                                                                 or EPF) will be corrupted.
                                                                 Note: Because the entire framing symbol may not be aligned and presented on
                                                                 the 64-bit received data, 1 - 4 framing symbols will be corrupted. */
        uint32_t rx_one_srt_frame_sybl : 1;  /**< [  7:  7](R/W) Before received data is forwarded to parser in RPKT, only one framing symbol
                                                                 (SDP or EPF) will be corrupted. */
        uint32_t rx_all_start_frame_sybl : 1;/**< [  8:  8](R/W) Before 64-bit received data is forwarded to parser, all framing symbols (SDP
                                                                 or EPF) will be corrupted.
                                                                 Note:  because the entire framing symbol may not be aligned and presented on
                                                                 the 64-bit received data, 1 - 4 framing symbols will be corrupted. */
        uint32_t rx_lfr                : 1;  /**< [  9:  9](R/W) Received DPH will have invalid LFR. */
        uint32_t rx_tseq               : 1;  /**< [ 10: 10](R/W) Rx Corrupt entired TSEQ. */
        uint32_t rx_ts1                : 1;  /**< [ 11: 11](R/W) Rx Corrupt entired TS1. */
        uint32_t rx_ts2                : 1;  /**< [ 12: 12](R/W) Rx Corrupt entired TS2. */
        uint32_t rx_insert_delay       : 1;  /**< [ 13: 13](R/W) RX_insert_delay. */
        uint32_t rx_insert_defer       : 1;  /**< [ 14: 14](R/W) RX_insert_defer. */
        uint32_t rx_pipe_rxdata        : 1;  /**< [ 15: 15](R/W) Inject single bit error to RxData.
                                                                 This includes additional logic to ensure IDLE symbols at the end of recovery
                                                                 aren't corrupted so that link won't enter recovery loop. */
        uint32_t tx_crc5               : 1;  /**< [ 16: 16](R/W) Transmitted header will have CRC error in Link Control Word. */
        uint32_t tx_crc16              : 1;  /**< [ 17: 17](R/W) Transmitted header will have invalid CRC16. */
        uint32_t tx_crc32              : 1;  /**< [ 18: 18](R/W) Transmitted DPP will have invalid CRC32. */
        uint32_t tx_one_frame_sybl     : 1;  /**< [ 19: 19](R/W) TX TPH/DPH one framing symbol
                                                                 One framing symbol of TPH/DPH (SHP or DPHP) will be corrupted. */
        uint32_t tx_all_frame_sybl     : 1;  /**< [ 20: 20](R/W) TX TPH/DPH all framing symbol
                                                                 all framing symbols of TPH/DPH (SHP, DPHP, EPF) will be corrupted. */
        uint32_t tx_one_end_frame_sybl : 1;  /**< [ 21: 21](R/W) TX DPP one end framing symbol
                                                                 one framing symbol of DPP (END) will be corrupted. */
        uint32_t tx_all_end_frame_sybl : 1;  /**< [ 22: 22](R/W) all framing symbols of DPP (END and EPF) will be corrupted. */
        uint32_t tx_one_srt_frame_sybl : 1;  /**< [ 23: 23](R/W) all framing symbols of DPP (SDP and EPF) will be corrupted. */
        uint32_t tx_delay_credit_rl    : 1;  /**< [ 24: 24](R/W) When this bit is set, link will wait for the amount of microsecond specified in
                                                                 the Error Enable Counter register [15:0]. */
        uint32_t tx_lfr                : 1;  /**< [ 25: 25](R/W) Transmitted DPH will have invalid LFR. */
        uint32_t tx_tseq               : 1;  /**< [ 26: 26](R/W) Tx Corrupt entired TSEQ. */
        uint32_t tx_ts1                : 1;  /**< [ 27: 27](R/W) Tx Corrupt entired TS1. */
        uint32_t tx_ts2                : 1;  /**< [ 28: 28](R/W) Tx Corrupt entired TS2. */
        uint32_t tx_insert_delay       : 1;  /**< [ 29: 29](R/W) TX Insert Delayed Bit. */
        uint32_t tx_insert_defer       : 1;  /**< [ 30: 30](R/W) TX Insert Deferred Bit. */
        uint32_t pipe_txdata           : 1;  /**< [ 31: 31](R/W) Inject single bit error to TxData.
                                                                 This includes additional logic to ensure IDLE symbols at the end of recovery
                                                                 aren't corrupted so that link won't enter recovery loop. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_llinkerrinj_s cn; */
};
typedef union cavm_usbhx_uahc_llinkerrinj cavm_usbhx_uahc_llinkerrinj_t;

static inline uint64_t CAVM_USBHX_UAHC_LLINKERRINJ(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LLINKERRINJ(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d048ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d048ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LLINKERRINJ", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LLINKERRINJ(a) cavm_usbhx_uahc_llinkerrinj_t
#define bustype_CAVM_USBHX_UAHC_LLINKERRINJ(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LLINKERRINJ(a) "USBHX_UAHC_LLINKERRINJ"
#define device_bar_CAVM_USBHX_UAHC_LLINKERRINJ(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LLINKERRINJ(a) (a)
#define arguments_CAVM_USBHX_UAHC_LLINKERRINJ(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_llinkerrinjen
 *
 * USBH UAHC Llinkerrinjen Register
 * This register is for injecting N number of errors for every M number of packets
 */
union cavm_usbhx_uahc_llinkerrinjen
{
    uint32_t u;
    struct cavm_usbhx_uahc_llinkerrinjen_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t disable_inj_err_cnt   : 16; /**< [ 31: 16](R/W) Disable injected error count
                                                                 This error specifies the interval of error free between 2 error injection periods.
                                                                 In the case of PIPE data error injection, this field specify the number of
                                                                 microsecond between every bit error injection */
        uint32_t b2b_err_cnt           : 16; /**< [ 15:  0](R/W) This counter indicates the number of error to be injected consecutively.
                                                                 For instance, the RX CRC5 error type is selected and this counter value is 3,
                                                                 then the next 3 received headers will have invalid CRC5 */
#else /* Word 0 - Little Endian */
        uint32_t b2b_err_cnt           : 16; /**< [ 15:  0](R/W) This counter indicates the number of error to be injected consecutively.
                                                                 For instance, the RX CRC5 error type is selected and this counter value is 3,
                                                                 then the next 3 received headers will have invalid CRC5 */
        uint32_t disable_inj_err_cnt   : 16; /**< [ 31: 16](R/W) Disable injected error count
                                                                 This error specifies the interval of error free between 2 error injection periods.
                                                                 In the case of PIPE data error injection, this field specify the number of
                                                                 microsecond between every bit error injection */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_llinkerrinjen_s cn; */
};
typedef union cavm_usbhx_uahc_llinkerrinjen cavm_usbhx_uahc_llinkerrinjen_t;

static inline uint64_t CAVM_USBHX_UAHC_LLINKERRINJEN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LLINKERRINJEN(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d04cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d04cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LLINKERRINJEN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LLINKERRINJEN(a) cavm_usbhx_uahc_llinkerrinjen_t
#define bustype_CAVM_USBHX_UAHC_LLINKERRINJEN(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LLINKERRINJEN(a) "USBHX_UAHC_LLINKERRINJEN"
#define device_bar_CAVM_USBHX_UAHC_LLINKERRINJEN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LLINKERRINJEN(a) (a)
#define arguments_CAVM_USBHX_UAHC_LLINKERRINJEN(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_llpbmtim1
 *
 * USBH UAHC Llpbmtim1 Register
 * LPBM TIMER1 REGISTER
 */
union cavm_usbhx_uahc_llpbmtim1
{
    uint32_t u;
    struct cavm_usbhx_uahc_llpbmtim1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lfps_lbps1_burst_max_clk : 8;/**< [ 31: 24](R/W) - Max duration of LPBM bit 1, used in LPBM detection FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t lfps_lbps1_burst_min_clk : 8;/**< [ 23: 16](R/W) - Min duration of LPBM bit 1, used in LPBM detection FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t lfps_lbps0_burst_max_clk : 8;/**< [ 15:  8](R/W) - Max duration of LPBM bit 0, used in LPBM detection FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t lfps_lbps0_burst_min_clk : 8;/**< [  7:  0](R/W) - Min duration of LPBM bit 0, used in LPBM detection FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
#else /* Word 0 - Little Endian */
        uint32_t lfps_lbps0_burst_min_clk : 8;/**< [  7:  0](R/W) - Min duration of LPBM bit 0, used in LPBM detection FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t lfps_lbps0_burst_max_clk : 8;/**< [ 15:  8](R/W) - Max duration of LPBM bit 0, used in LPBM detection FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t lfps_lbps1_burst_min_clk : 8;/**< [ 23: 16](R/W) - Min duration of LPBM bit 1, used in LPBM detection FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t lfps_lbps1_burst_max_clk : 8;/**< [ 31: 24](R/W) - Max duration of LPBM bit 1, used in LPBM detection FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_llpbmtim1_s cn; */
};
typedef union cavm_usbhx_uahc_llpbmtim1 cavm_usbhx_uahc_llpbmtim1_t;

static inline uint64_t CAVM_USBHX_UAHC_LLPBMTIM1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LLPBMTIM1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d03cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d03cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LLPBMTIM1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LLPBMTIM1(a) cavm_usbhx_uahc_llpbmtim1_t
#define bustype_CAVM_USBHX_UAHC_LLPBMTIM1(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LLPBMTIM1(a) "USBHX_UAHC_LLPBMTIM1"
#define device_bar_CAVM_USBHX_UAHC_LLPBMTIM1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LLPBMTIM1(a) (a)
#define arguments_CAVM_USBHX_UAHC_LLPBMTIM1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_llpbmtim2
 *
 * USBH UAHC Llpbmtim2 Register
 * LPBM TIMER2 REGISTER
 */
union cavm_usbhx_uahc_llpbmtim2
{
    uint32_t u;
    struct cavm_usbhx_uahc_llpbmtim2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t lfps_lbpm_tpwm_max_clk : 9; /**< [ 17:  9](R/W) - Max value of TPWM, used in LPBM detection FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t lfps_lbpm_tpwm_min_clk : 9; /**< [  8:  0](R/W) - Min value of TPWM, used in LPBM detection FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
#else /* Word 0 - Little Endian */
        uint32_t lfps_lbpm_tpwm_min_clk : 9; /**< [  8:  0](R/W) - Min value of TPWM, used in LPBM detection FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t lfps_lbpm_tpwm_max_clk : 9; /**< [ 17:  9](R/W) - Max value of TPWM, used in LPBM detection FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_llpbmtim2_s cn; */
};
typedef union cavm_usbhx_uahc_llpbmtim2 cavm_usbhx_uahc_llpbmtim2_t;

static inline uint64_t CAVM_USBHX_UAHC_LLPBMTIM2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LLPBMTIM2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d040ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d040ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LLPBMTIM2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LLPBMTIM2(a) cavm_usbhx_uahc_llpbmtim2_t
#define bustype_CAVM_USBHX_UAHC_LLPBMTIM2(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LLPBMTIM2(a) "USBHX_UAHC_LLPBMTIM2"
#define device_bar_CAVM_USBHX_UAHC_LLPBMTIM2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LLPBMTIM2(a) (a)
#define arguments_CAVM_USBHX_UAHC_LLPBMTIM2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_llpbmtxtim
 *
 * USBH UAHC Llpbmtxtim Register
 * LPBM TX TIMER REGISTER
 */
union cavm_usbhx_uahc_llpbmtxtim
{
    uint32_t u;
    struct cavm_usbhx_uahc_llpbmtxtim_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t lfps_lpbs_tpwm_clk    : 10; /**< [ 29: 20](R/W) - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t reserved_18_19        : 2;
        uint32_t lfps_lbps_burst1_clk  : 10; /**< [ 17:  8](R/W) - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t lfps_lbps_burst0_clk  : 8;  /**< [  7:  0](R/W) - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
#else /* Word 0 - Little Endian */
        uint32_t lfps_lbps_burst0_clk  : 8;  /**< [  7:  0](R/W) - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t lfps_lbps_burst1_clk  : 10; /**< [ 17:  8](R/W) - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t reserved_18_19        : 2;
        uint32_t lfps_lpbs_tpwm_clk    : 10; /**< [ 29: 20](R/W) - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_llpbmtxtim_s cn; */
};
typedef union cavm_usbhx_uahc_llpbmtxtim cavm_usbhx_uahc_llpbmtxtim_t;

static inline uint64_t CAVM_USBHX_UAHC_LLPBMTXTIM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LLPBMTXTIM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d044ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d044ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LLPBMTXTIM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LLPBMTXTIM(a) cavm_usbhx_uahc_llpbmtxtim_t
#define bustype_CAVM_USBHX_UAHC_LLPBMTXTIM(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LLPBMTXTIM(a) "USBHX_UAHC_LLPBMTXTIM"
#define device_bar_CAVM_USBHX_UAHC_LLPBMTXTIM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LLPBMTXTIM(a) (a)
#define arguments_CAVM_USBHX_UAHC_LLPBMTXTIM(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_lluctl
 *
 * USBH UAHC Lluctl Register
 * TX TS1 COUNT REGISTER
 *  - This register provides an option to increase the number of TS1 sent in
 * Polling.Active or Recovery.Active.
 *  - The total number of TS1 during Polling.Active or Recovery.Active is based on the
 * following formula:
 * Total TS1 = 20 x 2^(tx_ts1_cnt)
 *  - This give more opportunity for the remote PHY to achive symbol lock.
 */
union cavm_usbhx_uahc_lluctl
{
    uint32_t u;
    struct cavm_usbhx_uahc_lluctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t inverse_sync_header   : 1;  /**< [ 30: 30](R/W) For Gen2 polarity detection, link uses data block (0011b) sync header for SYNC
                                                                 OS instead of control block (1100b).

                                                                 Set this bit if the third-party PHY does not correct the sync header of the SYNC
                                                                 OS in case of inverse polarity. */
        uint32_t support_p4_pg         : 1;  /**< [ 29: 29](R/W) Set this bit if PHY support PG mode in P4.  Used only for Synopsys PHY */
        uint32_t support_p4            : 1;  /**< [ 28: 28](R/W) When this bit is set, controller puts PHY into P3.CPM or P4 in certain states.
                                                                 Used only for Synopsys PHY */
        uint32_t delay_tx_gen1_dp      : 4;  /**< [ 27: 24](R/W) When this field is set to a non-zero value, the link delays the transmission of
                                                                 a large Gen1 DP for 32 pipe_pclk cycles if it detects a header being received at
                                                                 the PIU. */
        uint32_t disrxdet_ltssm_timer_ovrrd : 1;/**< [ 23: 23](R/W) When DisRxDetU3RxDet is asserted in Polling or U1, the timeout expires immediately */
        uint32_t force_dpp_truncate    : 1;  /**< [ 22: 22](R/W) Truncate Gen1 DPP if there is a pending LGOOD/LBAD and DPP is large. When this
                                                                 bit is set, the logic for detecting recovery due to expiring pending_HP_timer is
                                                                 not used. */
        uint32_t en_dpp_truncate       : 1;  /**< [ 21: 21](R/W) This bit enables the logic for detecting recovery due to expiring
                                                                 pending_HP_timer and truncates DPP when neccessary to avoid recovery. */
        uint32_t pending_hp_timer_us   : 5;  /**< [ 20: 16](R/W) Programmable PENDING_HP_TIMER in us. This field is used when LUCTL[15] is set. */
        uint32_t en_us_hp_timer        : 1;  /**< [ 15: 15](R/W) This bit enables programmable PENDING_HP_TIMER in us */
        uint32_t ring_buf_d_delay      : 2;  /**< [ 14: 13](R/W) This programs the counter for data valid signal in source ring buffer */
        uint32_t u2p3cpmok             : 1;  /**< [ 12: 12](R/W) P3CPM OK for U2/SSInactive (U2P3CPMok)
                                                                  - 0: During link state U2/ESS.Inactive, put PHY in P2 (Default)
                                                                  - 1: During link state U2/ESS.Inactive, put PHY in P3CPM.
                                                                 Note: For a port, if both GUSB3PIPECTL[29]=1 and LLUCTL[12]=1, LLUCTL[12]=1 takes priority. */
        uint32_t en_reset_pipe_after_phy_mux : 1;/**< [ 11: 11](R/W) controller issues 3.1 PHY reset after DisRxDetU3RxDet is de-asserted */
        uint32_t force_gen1            : 1;  /**< [ 10: 10](R/W) Force Gen1 */
        uint32_t gen2_loopback_entry_mode : 1;/**< [  9:  9](R/W) If this bit is set, the controller will enter loopback in Gen2 after
                                                                 successfully detecting remote termination. */
        uint32_t gen1_loopback_entry_mode : 1;/**< [  8:  8](R/W) If this bit is set, the controller will enter loopback in Gen1 after
                                                                 successfully detecting remote termination. */
        uint32_t mask_pipe_reset       : 1;  /**< [  7:  7](R/W) If this bit is set, controller will block pipe_reset_n from going to PHY when DisRxDetU3RxDet=1 */
        uint32_t delay_ux_after_lpma   : 1;  /**< [  6:  6](R/W) 0 = after sending LPMA, Link LTSSM delays 10 link_clk
                                                                 cycles before entering Ux.
                                                                 1 = after sending LPMA, Link LTSSM delays 20 link_clk
                                                                 cycles before entering Ux. */
        uint32_t no_ux_exit_p0_trans   : 1;  /**< [  5:  5](R/W) 0 = Link LTSSM detects Ux_exit LFPS during P0 transition.
                                                                 1 = Link LTSSM does not detect Ux_exit LFPS when P0 transition is happening. */
        uint32_t tx_ts1_cnt            : 5;  /**< [  4:  0](R/W) Additional TX_TS1_count */
#else /* Word 0 - Little Endian */
        uint32_t tx_ts1_cnt            : 5;  /**< [  4:  0](R/W) Additional TX_TS1_count */
        uint32_t no_ux_exit_p0_trans   : 1;  /**< [  5:  5](R/W) 0 = Link LTSSM detects Ux_exit LFPS during P0 transition.
                                                                 1 = Link LTSSM does not detect Ux_exit LFPS when P0 transition is happening. */
        uint32_t delay_ux_after_lpma   : 1;  /**< [  6:  6](R/W) 0 = after sending LPMA, Link LTSSM delays 10 link_clk
                                                                 cycles before entering Ux.
                                                                 1 = after sending LPMA, Link LTSSM delays 20 link_clk
                                                                 cycles before entering Ux. */
        uint32_t mask_pipe_reset       : 1;  /**< [  7:  7](R/W) If this bit is set, controller will block pipe_reset_n from going to PHY when DisRxDetU3RxDet=1 */
        uint32_t gen1_loopback_entry_mode : 1;/**< [  8:  8](R/W) If this bit is set, the controller will enter loopback in Gen1 after
                                                                 successfully detecting remote termination. */
        uint32_t gen2_loopback_entry_mode : 1;/**< [  9:  9](R/W) If this bit is set, the controller will enter loopback in Gen2 after
                                                                 successfully detecting remote termination. */
        uint32_t force_gen1            : 1;  /**< [ 10: 10](R/W) Force Gen1 */
        uint32_t en_reset_pipe_after_phy_mux : 1;/**< [ 11: 11](R/W) controller issues 3.1 PHY reset after DisRxDetU3RxDet is de-asserted */
        uint32_t u2p3cpmok             : 1;  /**< [ 12: 12](R/W) P3CPM OK for U2/SSInactive (U2P3CPMok)
                                                                  - 0: During link state U2/ESS.Inactive, put PHY in P2 (Default)
                                                                  - 1: During link state U2/ESS.Inactive, put PHY in P3CPM.
                                                                 Note: For a port, if both GUSB3PIPECTL[29]=1 and LLUCTL[12]=1, LLUCTL[12]=1 takes priority. */
        uint32_t ring_buf_d_delay      : 2;  /**< [ 14: 13](R/W) This programs the counter for data valid signal in source ring buffer */
        uint32_t en_us_hp_timer        : 1;  /**< [ 15: 15](R/W) This bit enables programmable PENDING_HP_TIMER in us */
        uint32_t pending_hp_timer_us   : 5;  /**< [ 20: 16](R/W) Programmable PENDING_HP_TIMER in us. This field is used when LUCTL[15] is set. */
        uint32_t en_dpp_truncate       : 1;  /**< [ 21: 21](R/W) This bit enables the logic for detecting recovery due to expiring
                                                                 pending_HP_timer and truncates DPP when neccessary to avoid recovery. */
        uint32_t force_dpp_truncate    : 1;  /**< [ 22: 22](R/W) Truncate Gen1 DPP if there is a pending LGOOD/LBAD and DPP is large. When this
                                                                 bit is set, the logic for detecting recovery due to expiring pending_HP_timer is
                                                                 not used. */
        uint32_t disrxdet_ltssm_timer_ovrrd : 1;/**< [ 23: 23](R/W) When DisRxDetU3RxDet is asserted in Polling or U1, the timeout expires immediately */
        uint32_t delay_tx_gen1_dp      : 4;  /**< [ 27: 24](R/W) When this field is set to a non-zero value, the link delays the transmission of
                                                                 a large Gen1 DP for 32 pipe_pclk cycles if it detects a header being received at
                                                                 the PIU. */
        uint32_t support_p4            : 1;  /**< [ 28: 28](R/W) When this bit is set, controller puts PHY into P3.CPM or P4 in certain states.
                                                                 Used only for Synopsys PHY */
        uint32_t support_p4_pg         : 1;  /**< [ 29: 29](R/W) Set this bit if PHY support PG mode in P4.  Used only for Synopsys PHY */
        uint32_t inverse_sync_header   : 1;  /**< [ 30: 30](R/W) For Gen2 polarity detection, link uses data block (0011b) sync header for SYNC
                                                                 OS instead of control block (1100b).

                                                                 Set this bit if the third-party PHY does not correct the sync header of the SYNC
                                                                 OS in case of inverse polarity. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_lluctl_s cn; */
};
typedef union cavm_usbhx_uahc_lluctl cavm_usbhx_uahc_lluctl_t;

static inline uint64_t CAVM_USBHX_UAHC_LLUCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LLUCTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d024ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d024ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LLUCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LLUCTL(a) cavm_usbhx_uahc_lluctl_t
#define bustype_CAVM_USBHX_UAHC_LLUCTL(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LLUCTL(a) "USBHX_UAHC_LLUCTL"
#define device_bar_CAVM_USBHX_UAHC_LLUCTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LLUCTL(a) (a)
#define arguments_CAVM_USBHX_UAHC_LLUCTL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_lpinglfpstim
 *
 * USBHUAHC Lpinglfpstim Register
 * PING LFPS TIMER REGISTER
 */
union cavm_usbhx_uahc_lpinglfpstim
{
    uint32_t u;
    struct cavm_usbhx_uahc_lpinglfpstim_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t gen2_lfps_ping_burst_clk : 6;/**< [ 31: 26](R/W) Gen2 LFPS_PING_BURST_CLKS: TX ping.LFPS tBurst

                                                                 This field is encoded as the Gen2 link_clk (6.4ns) count for the LFPS.
                                                                  - 1: 6.4ns
                                                                  - 2: 12.8ns
                                                                  - 3: 19.2ns, and so on */
        uint32_t gen2_lfps_ping_max_clk : 6; /**< [ 25: 20](R/W) For Gen2 : Max RX ping.LFPS tBurst

                                                                 This field is encoded as the Gen2 link_clk (6.4ns) count for the LFPS.
                                                                  - 1: 6.4ns
                                                                  - 2: 12.8ns
                                                                  - 3: 19.2ns, and so on */
        uint32_t gen2_lfps_ping_min_clk : 4; /**< [ 19: 16](R/W) For Gen2 : Min RX ping.LFPS tBurst

                                                                 This field is encoded as the Gen2 link_clk (6.4ns) count for the LFPS.
                                                                  - 1: 6.4ns
                                                                  - 2: 12.8ns
                                                                  - 3: 19.2ns, and so on */
        uint32_t gen1_lfps_ping_burst_clk : 6;/**< [ 15: 10](R/W) For Gen1 :  TX ping.LFPS tBurst

                                                                 This field is encoded as the Gen1 link_clk (8ns) count for the LFPS.
                                                                  - 1: 8ns
                                                                  - 2: 16ns
                                                                  - 3: 24ns, and so on */
        uint32_t gen1_lfps_ping_max_clk : 6; /**< [  9:  4](R/W) For Gen1 : Max RX ping.LFPS tBurst

                                                                 This field is encoded as the Gen1 link_clk (8ns) count for the LFPS.
                                                                  - 1: 8ns
                                                                  - 2: 16ns
                                                                  - 3: 24ns, and so on */
        uint32_t gen1_lfps_ping_min_clk : 4; /**< [  3:  0](R/W) For Gen1 : Minx RX ping.LFPS tBurst

                                                                 This field is encoded as the Gen1 link_clk (8ns) count for the LFPS.
                                                                  - 1: 8ns
                                                                  - 2: 16ns
                                                                  - 3: 24ns, and so on */
#else /* Word 0 - Little Endian */
        uint32_t gen1_lfps_ping_min_clk : 4; /**< [  3:  0](R/W) For Gen1 : Minx RX ping.LFPS tBurst

                                                                 This field is encoded as the Gen1 link_clk (8ns) count for the LFPS.
                                                                  - 1: 8ns
                                                                  - 2: 16ns
                                                                  - 3: 24ns, and so on */
        uint32_t gen1_lfps_ping_max_clk : 6; /**< [  9:  4](R/W) For Gen1 : Max RX ping.LFPS tBurst

                                                                 This field is encoded as the Gen1 link_clk (8ns) count for the LFPS.
                                                                  - 1: 8ns
                                                                  - 2: 16ns
                                                                  - 3: 24ns, and so on */
        uint32_t gen1_lfps_ping_burst_clk : 6;/**< [ 15: 10](R/W) For Gen1 :  TX ping.LFPS tBurst

                                                                 This field is encoded as the Gen1 link_clk (8ns) count for the LFPS.
                                                                  - 1: 8ns
                                                                  - 2: 16ns
                                                                  - 3: 24ns, and so on */
        uint32_t gen2_lfps_ping_min_clk : 4; /**< [ 19: 16](R/W) For Gen2 : Min RX ping.LFPS tBurst

                                                                 This field is encoded as the Gen2 link_clk (6.4ns) count for the LFPS.
                                                                  - 1: 6.4ns
                                                                  - 2: 12.8ns
                                                                  - 3: 19.2ns, and so on */
        uint32_t gen2_lfps_ping_max_clk : 6; /**< [ 25: 20](R/W) For Gen2 : Max RX ping.LFPS tBurst

                                                                 This field is encoded as the Gen2 link_clk (6.4ns) count for the LFPS.
                                                                  - 1: 6.4ns
                                                                  - 2: 12.8ns
                                                                  - 3: 19.2ns, and so on */
        uint32_t gen2_lfps_ping_burst_clk : 6;/**< [ 31: 26](R/W) Gen2 LFPS_PING_BURST_CLKS: TX ping.LFPS tBurst

                                                                 This field is encoded as the Gen2 link_clk (6.4ns) count for the LFPS.
                                                                  - 1: 6.4ns
                                                                  - 2: 12.8ns
                                                                  - 3: 19.2ns, and so on */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_lpinglfpstim_s cn; */
};
typedef union cavm_usbhx_uahc_lpinglfpstim cavm_usbhx_uahc_lpinglfpstim_t;

static inline uint64_t CAVM_USBHX_UAHC_LPINGLFPSTIM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LPINGLFPSTIM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d018ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d018ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LPINGLFPSTIM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LPINGLFPSTIM(a) cavm_usbhx_uahc_lpinglfpstim_t
#define bustype_CAVM_USBHX_UAHC_LPINGLFPSTIM(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LPINGLFPSTIM(a) "USBHX_UAHC_LPINGLFPSTIM"
#define device_bar_CAVM_USBHX_UAHC_LPINGLFPSTIM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LPINGLFPSTIM(a) (a)
#define arguments_CAVM_USBHX_UAHC_LPINGLFPSTIM(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_lpolllfpstxtim
 *
 * USBH UAHC Lpolllfpstxtim Register
 * POLL LFPS TX TIMER REGISTER
 */
union cavm_usbhx_uahc_lpolllfpstxtim
{
    uint32_t u;
    struct cavm_usbhx_uahc_lpolllfpstxtim_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_22_31        : 10;
        uint32_t lfps_poll_space_clk   : 11; /**< [ 21: 11](R/W) space between Polling.LFPS

                                                                 This field is encoded as the Gen1 link_clk (8ns) count for the LFPS.
                                                                  - 1: 8ns
                                                                  - 2: 16ns
                                                                  - 3: 24ns, and so on */
        uint32_t lfps_poll_burst_clk   : 11; /**< [ 10:  0](R/W) TX Polling.LFPS tBurst

                                                                 This field is encoded as the Gen1 link_clk (8ns) count for the LFPS.
                                                                  - 1: 8ns
                                                                  - 2: 16ns
                                                                  - 3: 24ns, and so on */
#else /* Word 0 - Little Endian */
        uint32_t lfps_poll_burst_clk   : 11; /**< [ 10:  0](R/W) TX Polling.LFPS tBurst

                                                                 This field is encoded as the Gen1 link_clk (8ns) count for the LFPS.
                                                                  - 1: 8ns
                                                                  - 2: 16ns
                                                                  - 3: 24ns, and so on */
        uint32_t lfps_poll_space_clk   : 11; /**< [ 21: 11](R/W) space between Polling.LFPS

                                                                 This field is encoded as the Gen1 link_clk (8ns) count for the LFPS.
                                                                  - 1: 8ns
                                                                  - 2: 16ns
                                                                  - 3: 24ns, and so on */
        uint32_t reserved_22_31        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_lpolllfpstxtim_s cn; */
};
typedef union cavm_usbhx_uahc_lpolllfpstxtim cavm_usbhx_uahc_lpolllfpstxtim_t;

static inline uint64_t CAVM_USBHX_UAHC_LPOLLLFPSTXTIM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LPOLLLFPSTXTIM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d01cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d01cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LPOLLLFPSTXTIM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LPOLLLFPSTXTIM(a) cavm_usbhx_uahc_lpolllfpstxtim_t
#define bustype_CAVM_USBHX_UAHC_LPOLLLFPSTXTIM(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LPOLLLFPSTXTIM(a) "USBHX_UAHC_LPOLLLFPSTXTIM"
#define device_bar_CAVM_USBHX_UAHC_LPOLLLFPSTXTIM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LPOLLLFPSTXTIM(a) (a)
#define arguments_CAVM_USBHX_UAHC_LPOLLLFPSTXTIM(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_lptmdpdelay
 *
 * USBH UAHC Lptmdpdelay Register
 * PTM DATAPATH DELAY REGISTER
 *
 * This register provides an option to override the default timing parameters used in PTM calculation.
 */
union cavm_usbhx_uahc_lptmdpdelay
{
    uint32_t u;
    struct cavm_usbhx_uahc_lptmdpdelay_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rx_path_delay_gen2    : 5;  /**< [ 31: 27](R/W) RX path delay in unit of 8ns */
        uint32_t tx_path_delay_gen2    : 5;  /**< [ 26: 22](R/W) TX path delay in unit of 8ns */
        uint32_t p3cpmp4_residency     : 12; /**< [ 21: 10](R/W) Minimum number of suspend_clk periods that
                                                                 the PHY needs to stay in P3.CPM or P4 before exiting P3.CPM or P4. */
        uint32_t rx_path_delay         : 5;  /**< [  9:  5](R/W) Gen1 RX path delay (including PHY and PCS) in terms of 8ns. */
        uint32_t tx_path_delay         : 5;  /**< [  4:  0](R/W) Gen1 TX path delay (including PHY and PCS) in terms of 8ns. */
#else /* Word 0 - Little Endian */
        uint32_t tx_path_delay         : 5;  /**< [  4:  0](R/W) Gen1 TX path delay (including PHY and PCS) in terms of 8ns. */
        uint32_t rx_path_delay         : 5;  /**< [  9:  5](R/W) Gen1 RX path delay (including PHY and PCS) in terms of 8ns. */
        uint32_t p3cpmp4_residency     : 12; /**< [ 21: 10](R/W) Minimum number of suspend_clk periods that
                                                                 the PHY needs to stay in P3.CPM or P4 before exiting P3.CPM or P4. */
        uint32_t tx_path_delay_gen2    : 5;  /**< [ 26: 22](R/W) TX path delay in unit of 8ns */
        uint32_t rx_path_delay_gen2    : 5;  /**< [ 31: 27](R/W) RX path delay in unit of 8ns */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_lptmdpdelay_s cn; */
};
typedef union cavm_usbhx_uahc_lptmdpdelay cavm_usbhx_uahc_lptmdpdelay_t;

static inline uint64_t CAVM_USBHX_UAHC_LPTMDPDELAY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LPTMDPDELAY(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d028ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d028ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LPTMDPDELAY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LPTMDPDELAY(a) cavm_usbhx_uahc_lptmdpdelay_t
#define bustype_CAVM_USBHX_UAHC_LPTMDPDELAY(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LPTMDPDELAY(a) "USBHX_UAHC_LPTMDPDELAY"
#define device_bar_CAVM_USBHX_UAHC_LPTMDPDELAY(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LPTMDPDELAY(a) (a)
#define arguments_CAVM_USBHX_UAHC_LPTMDPDELAY(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_lptmdpdelay2
 *
 * USBH UAHC Lptmdpdelay2 Register
 * This register provide an option to override the default timing parameters used in
 * PTM calculation.
 */
union cavm_usbhx_uahc_lptmdpdelay2
{
    uint32_t u;
    struct cavm_usbhx_uahc_lptmdpdelay2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_20_31        : 12;
        uint32_t link_rx_delay_gen2    : 5;  /**< [ 19: 15](R/W) RX path delay in unit of 8ns */
        uint32_t link_tx_delay_gen2    : 5;  /**< [ 14: 10](R/W) RX path delay in unit of 8ns */
        uint32_t link_rx_delay_gen1    : 5;  /**< [  9:  5](R/W) RX path delay in unit of 8ns */
        uint32_t link_tx_delay_gen1    : 5;  /**< [  4:  0](R/W) TX path delay in unit of 8ns */
#else /* Word 0 - Little Endian */
        uint32_t link_tx_delay_gen1    : 5;  /**< [  4:  0](R/W) TX path delay in unit of 8ns */
        uint32_t link_rx_delay_gen1    : 5;  /**< [  9:  5](R/W) RX path delay in unit of 8ns */
        uint32_t link_tx_delay_gen2    : 5;  /**< [ 14: 10](R/W) RX path delay in unit of 8ns */
        uint32_t link_rx_delay_gen2    : 5;  /**< [ 19: 15](R/W) RX path delay in unit of 8ns */
        uint32_t reserved_20_31        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_lptmdpdelay2_s cn; */
};
typedef union cavm_usbhx_uahc_lptmdpdelay2 cavm_usbhx_uahc_lptmdpdelay2_t;

static inline uint64_t CAVM_USBHX_UAHC_LPTMDPDELAY2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LPTMDPDELAY2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d078ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d078ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LPTMDPDELAY2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LPTMDPDELAY2(a) cavm_usbhx_uahc_lptmdpdelay2_t
#define bustype_CAVM_USBHX_UAHC_LPTMDPDELAY2(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LPTMDPDELAY2(a) "USBHX_UAHC_LPTMDPDELAY2"
#define device_bar_CAVM_USBHX_UAHC_LPTMDPDELAY2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LPTMDPDELAY2(a) (a)
#define arguments_CAVM_USBHX_UAHC_LPTMDPDELAY2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_lscdtim1
 *
 * USBH UAHC Lscdtim1 Register
 * SCD TIMER 1 REGISTER
 */
union cavm_usbhx_uahc_lscdtim1
{
    uint32_t u;
    struct cavm_usbhx_uahc_lscdtim1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t scd_bit0_rpt_max_clk  : 12; /**< [ 23: 12](R/W) - max duration of SCD bit 0 tRepeat in term of CLKs, used in SCD detection FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count for the LFPS.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t cd_bit0_rpt_min_clk   : 12; /**< [ 11:  0](R/W) - min duration of SCD bit 0 tRepeat in term of CLKs, used in SCD detection FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count for the LFPS.
                                                                  0x1 = 8ns.
                                                                  0x2 = 16ns.
                                                                  0x3 = 24ns, and so on. */
#else /* Word 0 - Little Endian */
        uint32_t cd_bit0_rpt_min_clk   : 12; /**< [ 11:  0](R/W) - min duration of SCD bit 0 tRepeat in term of CLKs, used in SCD detection FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count for the LFPS.
                                                                  0x1 = 8ns.
                                                                  0x2 = 16ns.
                                                                  0x3 = 24ns, and so on. */
        uint32_t scd_bit0_rpt_max_clk  : 12; /**< [ 23: 12](R/W) - max duration of SCD bit 0 tRepeat in term of CLKs, used in SCD detection FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count for the LFPS.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_lscdtim1_s cn; */
};
typedef union cavm_usbhx_uahc_lscdtim1 cavm_usbhx_uahc_lscdtim1_t;

static inline uint64_t CAVM_USBHX_UAHC_LSCDTIM1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LSCDTIM1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d02cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d02cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LSCDTIM1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LSCDTIM1(a) cavm_usbhx_uahc_lscdtim1_t
#define bustype_CAVM_USBHX_UAHC_LSCDTIM1(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LSCDTIM1(a) "USBHX_UAHC_LSCDTIM1"
#define device_bar_CAVM_USBHX_UAHC_LSCDTIM1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LSCDTIM1(a) (a)
#define arguments_CAVM_USBHX_UAHC_LSCDTIM1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_lscdtim2
 *
 * USBH UAHC Lscdtim2 Register
 * SCD TIMER2 REGISTER
 */
union cavm_usbhx_uahc_lscdtim2
{
    uint32_t u;
    struct cavm_usbhx_uahc_lscdtim2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t scd_bit1_rpt_max_clk  : 12; /**< [ 23: 12](R/W) - max duration of SCD bit 1 tRepeat in term of CLKs, used in SCD detection FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t cd_bit1_rpt_min_clk   : 12; /**< [ 11:  0](R/W) - min duration of SCD bit 1 tRepeat in term of CLKs, used in SCD detection FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
#else /* Word 0 - Little Endian */
        uint32_t cd_bit1_rpt_min_clk   : 12; /**< [ 11:  0](R/W) - min duration of SCD bit 1 tRepeat in term of CLKs, used in SCD detection FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t scd_bit1_rpt_max_clk  : 12; /**< [ 23: 12](R/W) - max duration of SCD bit 1 tRepeat in term of CLKs, used in SCD detection FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_lscdtim2_s cn; */
};
typedef union cavm_usbhx_uahc_lscdtim2 cavm_usbhx_uahc_lscdtim2_t;

static inline uint64_t CAVM_USBHX_UAHC_LSCDTIM2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LSCDTIM2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d030ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d030ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LSCDTIM2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LSCDTIM2(a) cavm_usbhx_uahc_lscdtim2_t
#define bustype_CAVM_USBHX_UAHC_LSCDTIM2(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LSCDTIM2(a) "USBHX_UAHC_LSCDTIM2"
#define device_bar_CAVM_USBHX_UAHC_LSCDTIM2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LSCDTIM2(a) (a)
#define arguments_CAVM_USBHX_UAHC_LSCDTIM2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_lscdtim3
 *
 * USBH UAHC Lscdtim3 Register
 * SCD TIMER3 REGISTER
 */
union cavm_usbhx_uahc_lscdtim3
{
    uint32_t u;
    struct cavm_usbhx_uahc_lscdtim3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lfps_scd_space1_clk   : 12; /**< [ 31: 20](R/W) - Duration of SCD space 1 used in SCD TX FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t lfps_scd_space0_clk   : 12; /**< [ 19:  8](R/W) - Duration of SCD space 0 used in SCD TX FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t lfps_scd_burst_clk    : 8;  /**< [  7:  0](R/W) - Duration of tBurst used in SCD TX FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
#else /* Word 0 - Little Endian */
        uint32_t lfps_scd_burst_clk    : 8;  /**< [  7:  0](R/W) - Duration of tBurst used in SCD TX FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t lfps_scd_space0_clk   : 12; /**< [ 19:  8](R/W) - Duration of SCD space 0 used in SCD TX FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t lfps_scd_space1_clk   : 12; /**< [ 31: 20](R/W) - Duration of SCD space 1 used in SCD TX FSM
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_lscdtim3_s cn; */
};
typedef union cavm_usbhx_uahc_lscdtim3 cavm_usbhx_uahc_lscdtim3_t;

static inline uint64_t CAVM_USBHX_UAHC_LSCDTIM3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LSCDTIM3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d034ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d034ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LSCDTIM3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LSCDTIM3(a) cavm_usbhx_uahc_lscdtim3_t
#define bustype_CAVM_USBHX_UAHC_LSCDTIM3(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LSCDTIM3(a) "USBHX_UAHC_LSCDTIM3"
#define device_bar_CAVM_USBHX_UAHC_LSCDTIM3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LSCDTIM3(a) (a)
#define arguments_CAVM_USBHX_UAHC_LSCDTIM3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_lscdtim4
 *
 * USBH UAHC Lscdtim4 Register
 * SCD TIMER4 REGISTER
 */
union cavm_usbhx_uahc_lscdtim4
{
    uint32_t u;
    struct cavm_usbhx_uahc_lscdtim4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_12_31        : 20;
        uint32_t lfps_scd_last_space   : 12; /**< [ 11:  0](R/W) - Duration of the last space for each SCD
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
#else /* Word 0 - Little Endian */
        uint32_t lfps_scd_last_space   : 12; /**< [ 11:  0](R/W) - Duration of the last space for each SCD
                                                                 - This field is encoded as the Gen1 link_clk (8ns) count.
                                                                 0x1 = 8ns.
                                                                 0x2 = 16ns.
                                                                 0x3 = 24ns, and so on. */
        uint32_t reserved_12_31        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_lscdtim4_s cn; */
};
typedef union cavm_usbhx_uahc_lscdtim4 cavm_usbhx_uahc_lscdtim4_t;

static inline uint64_t CAVM_USBHX_UAHC_LSCDTIM4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LSCDTIM4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d038ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d038ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LSCDTIM4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LSCDTIM4(a) cavm_usbhx_uahc_lscdtim4_t
#define bustype_CAVM_USBHX_UAHC_LSCDTIM4(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LSCDTIM4(a) "USBHX_UAHC_LSCDTIM4"
#define device_bar_CAVM_USBHX_UAHC_LSCDTIM4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LSCDTIM4(a) (a)
#define arguments_CAVM_USBHX_UAHC_LSCDTIM4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_lskipfreq
 *
 * USBH UAHC Lskipfreq Register
 * SKIP FREQUENCY REGISTER
 */
union cavm_usbhx_uahc_lskipfreq
{
    uint32_t u;
    struct cavm_usbhx_uahc_lskipfreq_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_31           : 1;
        uint32_t u1_resid_timer_us     : 3;  /**< [ 30: 28](R/W) Programmable U1 MIN RESIDENCY TIMER

                                                                 This field specifies U1 MIN RESIDENCY TIMER value in us. Set to 0 to disable the timer. */
        uint32_t en_pm_timer_us        : 1;  /**< [ 27: 27](R/W) Enable us PM timers

                                                                 This field enables the use of PM_LC_TIMER and PM_ENTRY_TIMER in us. */
        uint32_t pm_lc_timer_us        : 3;  /**< [ 26: 24](R/W) Programmable PM_LC_TIMER

                                                                 This field specifies PM_LC_TIMER value in us. */
        uint32_t pm_entry_timer_us     : 4;  /**< [ 23: 20](R/W) Programmable PM_ENTRY_TIMER

                                                                 This field specifies PM_ENTRY_TIMER value in us. */
        uint32_t gen2_skp_freq         : 8;  /**< [ 19: 12](R/W) Gen2 SKP frequency

                                                                 This field specifies the average number of blocks the link sends before inserting a SKP OS. */
        uint32_t gen1_skp_freq         : 12; /**< [ 11:  0](R/W) Gen1 SKP frequency

                                                                 This field specifies the average number of symbols the link sends before inserting a SKP OS. */
#else /* Word 0 - Little Endian */
        uint32_t gen1_skp_freq         : 12; /**< [ 11:  0](R/W) Gen1 SKP frequency

                                                                 This field specifies the average number of symbols the link sends before inserting a SKP OS. */
        uint32_t gen2_skp_freq         : 8;  /**< [ 19: 12](R/W) Gen2 SKP frequency

                                                                 This field specifies the average number of blocks the link sends before inserting a SKP OS. */
        uint32_t pm_entry_timer_us     : 4;  /**< [ 23: 20](R/W) Programmable PM_ENTRY_TIMER

                                                                 This field specifies PM_ENTRY_TIMER value in us. */
        uint32_t pm_lc_timer_us        : 3;  /**< [ 26: 24](R/W) Programmable PM_LC_TIMER

                                                                 This field specifies PM_LC_TIMER value in us. */
        uint32_t en_pm_timer_us        : 1;  /**< [ 27: 27](R/W) Enable us PM timers

                                                                 This field enables the use of PM_LC_TIMER and PM_ENTRY_TIMER in us. */
        uint32_t u1_resid_timer_us     : 3;  /**< [ 30: 28](R/W) Programmable U1 MIN RESIDENCY TIMER

                                                                 This field specifies U1 MIN RESIDENCY TIMER value in us. Set to 0 to disable the timer. */
        uint32_t reserved_31           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_lskipfreq_s cn; */
};
typedef union cavm_usbhx_uahc_lskipfreq cavm_usbhx_uahc_lskipfreq_t;

static inline uint64_t CAVM_USBHX_UAHC_LSKIPFREQ(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LSKIPFREQ(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d020ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d020ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LSKIPFREQ", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LSKIPFREQ(a) cavm_usbhx_uahc_lskipfreq_t
#define bustype_CAVM_USBHX_UAHC_LSKIPFREQ(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LSKIPFREQ(a) "USBHX_UAHC_LSKIPFREQ"
#define device_bar_CAVM_USBHX_UAHC_LSKIPFREQ(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LSKIPFREQ(a) (a)
#define arguments_CAVM_USBHX_UAHC_LSKIPFREQ(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_lu1lfpsrxtim
 *
 * USBH UAHC Lu1lfpsrxtim Register
 * U1_LFPS_RX_TIMER_REG
 */
union cavm_usbhx_uahc_lu1lfpsrxtim
{
    uint32_t u;
    struct cavm_usbhx_uahc_lu1lfpsrxtim_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t gen2_u1_lfps_exit_rx_clk : 8;/**< [ 31: 24](R/W) For Gen2.
                                                                  Time to recognize Ux exit request from the remote partner.
                                                                  This field is encoded as the Gen2 link_clk (6.4ns) count for the LFPS.
                                                                  0x1 = 6.4ns.
                                                                  0x2 = 12.8ns.
                                                                  0x3 = 19.2ns, and so on. */
        uint32_t gen2_u1_exit_rsp_rx_clk : 8;/**< [ 23: 16](R/W) For Gen2
                                                                  - Locally initiated Ux exit: Minimum LFPS reception from remote to consider Ux
                                                                 exit handshake successful.
                                                                  - This field is encoded as the Gen2 link_clk (6.4ns) count for the LFPS.
                                                                  0x1 = 6.4ns.
                                                                  0x2 = 12.8ns.
                                                                  0x3 = 19.2ns, and so on. */
        uint32_t gen1_u1_lfps_exit_rx_clk : 8;/**< [ 15:  8](R/W) For Gen1
                                                                  - Time to recognize Ux exit request from remote partner.
                                                                  - This field is encoded as the Gen1 link_clk (8ns) count for the LFPS.
                                                                  -- 1: 8ns
                                                                  -- 2: 16ns
                                                                  -- 3: 24ns, and so on */
        uint32_t gen1_u1_exit_rsp_rx_clk : 8;/**< [  7:  0](R/W) For Gen1
                                                                  - Locally initiated Ux exit: Minimum LFPS reception from remote to consider Ux
                                                                 exit handshake  successful.
                                                                  - This field is encoded as the Gen1 link_clk (8ns) count for the LFPS.
                                                                  -- 1: 8ns
                                                                  -- 2: 16ns
                                                                  -- 3: 24ns, and so on */
#else /* Word 0 - Little Endian */
        uint32_t gen1_u1_exit_rsp_rx_clk : 8;/**< [  7:  0](R/W) For Gen1
                                                                  - Locally initiated Ux exit: Minimum LFPS reception from remote to consider Ux
                                                                 exit handshake  successful.
                                                                  - This field is encoded as the Gen1 link_clk (8ns) count for the LFPS.
                                                                  -- 1: 8ns
                                                                  -- 2: 16ns
                                                                  -- 3: 24ns, and so on */
        uint32_t gen1_u1_lfps_exit_rx_clk : 8;/**< [ 15:  8](R/W) For Gen1
                                                                  - Time to recognize Ux exit request from remote partner.
                                                                  - This field is encoded as the Gen1 link_clk (8ns) count for the LFPS.
                                                                  -- 1: 8ns
                                                                  -- 2: 16ns
                                                                  -- 3: 24ns, and so on */
        uint32_t gen2_u1_exit_rsp_rx_clk : 8;/**< [ 23: 16](R/W) For Gen2
                                                                  - Locally initiated Ux exit: Minimum LFPS reception from remote to consider Ux
                                                                 exit handshake successful.
                                                                  - This field is encoded as the Gen2 link_clk (6.4ns) count for the LFPS.
                                                                  0x1 = 6.4ns.
                                                                  0x2 = 12.8ns.
                                                                  0x3 = 19.2ns, and so on. */
        uint32_t gen2_u1_lfps_exit_rx_clk : 8;/**< [ 31: 24](R/W) For Gen2.
                                                                  Time to recognize Ux exit request from the remote partner.
                                                                  This field is encoded as the Gen2 link_clk (6.4ns) count for the LFPS.
                                                                  0x1 = 6.4ns.
                                                                  0x2 = 12.8ns.
                                                                  0x3 = 19.2ns, and so on. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_lu1lfpsrxtim_s cn; */
};
typedef union cavm_usbhx_uahc_lu1lfpsrxtim cavm_usbhx_uahc_lu1lfpsrxtim_t;

static inline uint64_t CAVM_USBHX_UAHC_LU1LFPSRXTIM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LU1LFPSRXTIM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d000ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d000ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LU1LFPSRXTIM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LU1LFPSRXTIM(a) cavm_usbhx_uahc_lu1lfpsrxtim_t
#define bustype_CAVM_USBHX_UAHC_LU1LFPSRXTIM(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LU1LFPSRXTIM(a) "USBHX_UAHC_LU1LFPSRXTIM"
#define device_bar_CAVM_USBHX_UAHC_LU1LFPSRXTIM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LU1LFPSRXTIM(a) (a)
#define arguments_CAVM_USBHX_UAHC_LU1LFPSRXTIM(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_lu1lfpstxtim
 *
 * USBH UAHC Lu1lfpstxtim Register
 * U1 LFPS TX TIMER REGISTER
 */
union cavm_usbhx_uahc_lu1lfpstxtim
{
    uint32_t u;
    struct cavm_usbhx_uahc_lu1lfpstxtim_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t gen2_u1_exit_resp_tx_clk : 14;/**< [ 29: 16](R/W) For Gen2
                                                                  - Remotely initiated Ux exit: Local link will transmit response this long
                                                                 before initiating transition to Recovery (t13 - t11)
                                                                  - This field is encoded as the Gen2 link_clk (6.4ns) count for the LFPS.
                                                                  -- 1: 6.4ns
                                                                  -- 2: 12.8ns
                                                                  -- 3: 19.2ns, and so on */
        uint32_t reserved_14_15        : 2;
        uint32_t gen1_u1_exit_rsp_tx_clk : 14;/**< [ 13:  0](R/W) For Gen1
                                                                  - Remotely initiated Ux exit: Local link will transmit response this long
                                                                 before initiating transition to Recovery (t13 - t11
                                                                  - This field is encoded as the Gen1 link_clk (8ns) count for the LFPS.
                                                                  -- 1: 8ns
                                                                  -- 2: 16ns
                                                                  -- 3: 24ns, and so on */
#else /* Word 0 - Little Endian */
        uint32_t gen1_u1_exit_rsp_tx_clk : 14;/**< [ 13:  0](R/W) For Gen1
                                                                  - Remotely initiated Ux exit: Local link will transmit response this long
                                                                 before initiating transition to Recovery (t13 - t11
                                                                  - This field is encoded as the Gen1 link_clk (8ns) count for the LFPS.
                                                                  -- 1: 8ns
                                                                  -- 2: 16ns
                                                                  -- 3: 24ns, and so on */
        uint32_t reserved_14_15        : 2;
        uint32_t gen2_u1_exit_resp_tx_clk : 14;/**< [ 29: 16](R/W) For Gen2
                                                                  - Remotely initiated Ux exit: Local link will transmit response this long
                                                                 before initiating transition to Recovery (t13 - t11)
                                                                  - This field is encoded as the Gen2 link_clk (6.4ns) count for the LFPS.
                                                                  -- 1: 6.4ns
                                                                  -- 2: 12.8ns
                                                                  -- 3: 19.2ns, and so on */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_lu1lfpstxtim_s cn; */
};
typedef union cavm_usbhx_uahc_lu1lfpstxtim cavm_usbhx_uahc_lu1lfpstxtim_t;

static inline uint64_t CAVM_USBHX_UAHC_LU1LFPSTXTIM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LU1LFPSTXTIM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d004ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d004ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LU1LFPSTXTIM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LU1LFPSTXTIM(a) cavm_usbhx_uahc_lu1lfpstxtim_t
#define bustype_CAVM_USBHX_UAHC_LU1LFPSTXTIM(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LU1LFPSTXTIM(a) "USBHX_UAHC_LU1LFPSTXTIM"
#define device_bar_CAVM_USBHX_UAHC_LU1LFPSTXTIM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LU1LFPSTXTIM(a) (a)
#define arguments_CAVM_USBHX_UAHC_LU1LFPSTXTIM(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_lu2lfpsrxtim
 *
 * USBH UAHC Lu2lfpsrxtim Register
 * U2 LFPS RX TIMER REGISTER
 */
union cavm_usbhx_uahc_lu2lfpsrxtim
{
    uint32_t u;
    struct cavm_usbhx_uahc_lu2lfpsrxtim_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t gen2_u2_lfps_exit_rx_clk : 8;/**< [ 31: 24](R/W) For Gen2
                                                                  - Time to recognize Ux exit request from remote partner.
                                                                  - This field is encoded as the Gen2 link_clk (6.4ns) count for the LFPS.
                                                                  -- 1: 6.4ns
                                                                  -- 2: 12.8ns
                                                                  -- 3: 19.2ns, and so on */
        uint32_t gen2_u2_exit_rsp_rx_clk : 8;/**< [ 23: 16](R/W) For Gen2
                                                                  - Locally initiated Ux exit: Minimum LFPS reception from remote to consider Ux
                                                                 exit handshake successful.
                                                                  - This field is encoded as the Gen2 link_clk (6.4ns) count for the LFPS.
                                                                  -- 1: 6.4ns
                                                                  -- 2: 12.8ns
                                                                  -- 3: 19.2ns, and so on */
        uint32_t gen1_u2_lfps_exit_rx_clk : 8;/**< [ 15:  8](R/W) For Gen1
                                                                  - Time to recognize Ux exit request from remote partner.
                                                                  - This field is encoded as the Gen1 link_clk (8ns) count for the LFPS.
                                                                  -- 1: 8ns
                                                                  -- 2: 16ns
                                                                  -- 3: 24ns, and so on */
        uint32_t gen1_u2_exit_rsp_rx_clk : 8;/**< [  7:  0](R/W) Minimum LFPS reception from remote to consider Ux
                                                                 exit handshake  successful.
                                                                 This field is encoded as the Gen2 link_clk (6.4ns) count for the LFPS.
                                                                 -- 1: 6.4ns
                                                                 -- 2: 12.8ns
                                                                 -- 3: 19.2ns, and so on. */
#else /* Word 0 - Little Endian */
        uint32_t gen1_u2_exit_rsp_rx_clk : 8;/**< [  7:  0](R/W) Minimum LFPS reception from remote to consider Ux
                                                                 exit handshake  successful.
                                                                 This field is encoded as the Gen2 link_clk (6.4ns) count for the LFPS.
                                                                 -- 1: 6.4ns
                                                                 -- 2: 12.8ns
                                                                 -- 3: 19.2ns, and so on. */
        uint32_t gen1_u2_lfps_exit_rx_clk : 8;/**< [ 15:  8](R/W) For Gen1
                                                                  - Time to recognize Ux exit request from remote partner.
                                                                  - This field is encoded as the Gen1 link_clk (8ns) count for the LFPS.
                                                                  -- 1: 8ns
                                                                  -- 2: 16ns
                                                                  -- 3: 24ns, and so on */
        uint32_t gen2_u2_exit_rsp_rx_clk : 8;/**< [ 23: 16](R/W) For Gen2
                                                                  - Locally initiated Ux exit: Minimum LFPS reception from remote to consider Ux
                                                                 exit handshake successful.
                                                                  - This field is encoded as the Gen2 link_clk (6.4ns) count for the LFPS.
                                                                  -- 1: 6.4ns
                                                                  -- 2: 12.8ns
                                                                  -- 3: 19.2ns, and so on */
        uint32_t gen2_u2_lfps_exit_rx_clk : 8;/**< [ 31: 24](R/W) For Gen2
                                                                  - Time to recognize Ux exit request from remote partner.
                                                                  - This field is encoded as the Gen2 link_clk (6.4ns) count for the LFPS.
                                                                  -- 1: 6.4ns
                                                                  -- 2: 12.8ns
                                                                  -- 3: 19.2ns, and so on */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_lu2lfpsrxtim_s cn; */
};
typedef union cavm_usbhx_uahc_lu2lfpsrxtim cavm_usbhx_uahc_lu2lfpsrxtim_t;

static inline uint64_t CAVM_USBHX_UAHC_LU2LFPSRXTIM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LU2LFPSRXTIM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d008ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d008ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LU2LFPSRXTIM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LU2LFPSRXTIM(a) cavm_usbhx_uahc_lu2lfpsrxtim_t
#define bustype_CAVM_USBHX_UAHC_LU2LFPSRXTIM(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LU2LFPSRXTIM(a) "USBHX_UAHC_LU2LFPSRXTIM"
#define device_bar_CAVM_USBHX_UAHC_LU2LFPSRXTIM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LU2LFPSRXTIM(a) (a)
#define arguments_CAVM_USBHX_UAHC_LU2LFPSRXTIM(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_lu2lfpstxtim
 *
 * USBH Ext Dwc Usb31 Block Link Link Regs Lu2lfpstxtim Register
 * U2 LFPS TX TIMER REG REGISTER.
 */
union cavm_usbhx_uahc_lu2lfpstxtim
{
    uint32_t u;
    struct cavm_usbhx_uahc_lu2lfpstxtim_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_14_31        : 18;
        uint32_t u2_exit_rsp_tx_us     : 14; /**< [ 13:  0](R/W) - Remotely initiated Ux exit: Local link will transmit response this long
                                                                 before initiating transition to Recovery.
                                                                 - When P3 in U2 is enabled, software needs to program this according to suspend_clk
                                                                 - This field is encoded as the number of us count for the LFPS.
                                                                  0x1 = 1us.
                                                                  0x2 = 2us.
                                                                  0x3 = 3us, and so on. */
#else /* Word 0 - Little Endian */
        uint32_t u2_exit_rsp_tx_us     : 14; /**< [ 13:  0](R/W) - Remotely initiated Ux exit: Local link will transmit response this long
                                                                 before initiating transition to Recovery.
                                                                 - When P3 in U2 is enabled, software needs to program this according to suspend_clk
                                                                 - This field is encoded as the number of us count for the LFPS.
                                                                  0x1 = 1us.
                                                                  0x2 = 2us.
                                                                  0x3 = 3us, and so on. */
        uint32_t reserved_14_31        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_lu2lfpstxtim_s cn; */
};
typedef union cavm_usbhx_uahc_lu2lfpstxtim cavm_usbhx_uahc_lu2lfpstxtim_t;

static inline uint64_t CAVM_USBHX_UAHC_LU2LFPSTXTIM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LU2LFPSTXTIM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d00cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d00cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LU2LFPSTXTIM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LU2LFPSTXTIM(a) cavm_usbhx_uahc_lu2lfpstxtim_t
#define bustype_CAVM_USBHX_UAHC_LU2LFPSTXTIM(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LU2LFPSTXTIM(a) "USBHX_UAHC_LU2LFPSTXTIM"
#define device_bar_CAVM_USBHX_UAHC_LU2LFPSTXTIM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LU2LFPSTXTIM(a) (a)
#define arguments_CAVM_USBHX_UAHC_LU2LFPSTXTIM(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_lu3lfpsrxtim
 *
 * USBH UAHC Lu3lfpsrxtim Register
 * U3 LFPS RX TIMER REGS REGISTER
 */
union cavm_usbhx_uahc_lu3lfpsrxtim
{
    uint32_t u;
    struct cavm_usbhx_uahc_lu3lfpsrxtim_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t gen2_u3_lfps_exit_rx_clk : 8;/**< [ 31: 24](R/W) Gen2 U3_LFPS_EXIT_RX_CLKS
                                                                  - Time to recognize Ux exit request from remote partner.
                                                                  - When PHY is not in P3, the value in this field is multiplied by 8 to get the
                                                                 U3_LFPS_EXIT_RX_CLKS
                                                                  - This field is encoded as follows:
                                                                  -- 1: 1 x 8 x 6.4ns = 51.2ns
                                                                  -- 2: 2 x 8 x 6.4ns = 102.4ns
                                                                  -- 3: 3 x 8 x 6.4ns = 153.6ns, and so on */
        uint32_t gen2_u3_exit_rsp_rx_clk : 8;/**< [ 23: 16](R/W) For Gen2
                                                                  - Locally initiated Ux exit: Minimum LFPS reception from remote to consider Ux
                                                                 exit handshake  successful.
                                                                  - When PHY is not in P3, the value in this field is multiplied by 8 to get the
                                                                 U3_EXIT_RESP_RX_CLKS
                                                                  - This field is encoded as follows:
                                                                  -- 1: 1 x 8 x 6.4ns = 51.2ns
                                                                  -- 2: 2 x 8 x 6.4ns = 102.4ns
                                                                  -- 3: 3 x 8 x 6.4ns = 153.6ns, and so on */
        uint32_t gen1_u3_lfps_exit_rx_clk : 8;/**< [ 15:  8](R/W) For Gen1
                                                                  - Time to recognize Ux exit request from remote partner.
                                                                  - When PHY is not in P3, the value in this field is multiplied by 8 to get the
                                                                 U3_LFPS_EXIT_RX_CLKS.
                                                                  - This field is encoded as follows:
                                                                  -- 1: 1 x 8 x 8.0ns = 64ns
                                                                  -- 2: 2 x 8 x 8.0ns = 128ns
                                                                  -- 3: 3 x 8 x 8.0ns = 196ns, and so on */
        uint32_t gen1_u3_exit_rsp_rx_clk : 8;/**< [  7:  0](R/W) For Gen1
                                                                  - Locally initiated Ux exit: Minimum LFPS reception from remote to consider Ux
                                                                 exit handshake successful.
                                                                  - When PHY is not in P3, the value in this field is multiplied by 8 to get the
                                                                 U3_EXIT_RESP_RX_CLKS.
                                                                  - This field is encoded as follows:
                                                                  -- 1: 1 x 8 x 8.0ns = 64ns
                                                                  -- 2: 2 x 8 x 8.0ns = 128ns
                                                                  -- 3: 3 x 8 x 8.0ns = 196ns, and so on */
#else /* Word 0 - Little Endian */
        uint32_t gen1_u3_exit_rsp_rx_clk : 8;/**< [  7:  0](R/W) For Gen1
                                                                  - Locally initiated Ux exit: Minimum LFPS reception from remote to consider Ux
                                                                 exit handshake successful.
                                                                  - When PHY is not in P3, the value in this field is multiplied by 8 to get the
                                                                 U3_EXIT_RESP_RX_CLKS.
                                                                  - This field is encoded as follows:
                                                                  -- 1: 1 x 8 x 8.0ns = 64ns
                                                                  -- 2: 2 x 8 x 8.0ns = 128ns
                                                                  -- 3: 3 x 8 x 8.0ns = 196ns, and so on */
        uint32_t gen1_u3_lfps_exit_rx_clk : 8;/**< [ 15:  8](R/W) For Gen1
                                                                  - Time to recognize Ux exit request from remote partner.
                                                                  - When PHY is not in P3, the value in this field is multiplied by 8 to get the
                                                                 U3_LFPS_EXIT_RX_CLKS.
                                                                  - This field is encoded as follows:
                                                                  -- 1: 1 x 8 x 8.0ns = 64ns
                                                                  -- 2: 2 x 8 x 8.0ns = 128ns
                                                                  -- 3: 3 x 8 x 8.0ns = 196ns, and so on */
        uint32_t gen2_u3_exit_rsp_rx_clk : 8;/**< [ 23: 16](R/W) For Gen2
                                                                  - Locally initiated Ux exit: Minimum LFPS reception from remote to consider Ux
                                                                 exit handshake  successful.
                                                                  - When PHY is not in P3, the value in this field is multiplied by 8 to get the
                                                                 U3_EXIT_RESP_RX_CLKS
                                                                  - This field is encoded as follows:
                                                                  -- 1: 1 x 8 x 6.4ns = 51.2ns
                                                                  -- 2: 2 x 8 x 6.4ns = 102.4ns
                                                                  -- 3: 3 x 8 x 6.4ns = 153.6ns, and so on */
        uint32_t gen2_u3_lfps_exit_rx_clk : 8;/**< [ 31: 24](R/W) Gen2 U3_LFPS_EXIT_RX_CLKS
                                                                  - Time to recognize Ux exit request from remote partner.
                                                                  - When PHY is not in P3, the value in this field is multiplied by 8 to get the
                                                                 U3_LFPS_EXIT_RX_CLKS
                                                                  - This field is encoded as follows:
                                                                  -- 1: 1 x 8 x 6.4ns = 51.2ns
                                                                  -- 2: 2 x 8 x 6.4ns = 102.4ns
                                                                  -- 3: 3 x 8 x 6.4ns = 153.6ns, and so on */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_lu3lfpsrxtim_s cn; */
};
typedef union cavm_usbhx_uahc_lu3lfpsrxtim cavm_usbhx_uahc_lu3lfpsrxtim_t;

static inline uint64_t CAVM_USBHX_UAHC_LU3LFPSRXTIM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LU3LFPSRXTIM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d010ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d010ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LU3LFPSRXTIM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LU3LFPSRXTIM(a) cavm_usbhx_uahc_lu3lfpsrxtim_t
#define bustype_CAVM_USBHX_UAHC_LU3LFPSRXTIM(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LU3LFPSRXTIM(a) "USBHX_UAHC_LU3LFPSRXTIM"
#define device_bar_CAVM_USBHX_UAHC_LU3LFPSRXTIM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LU3LFPSRXTIM(a) (a)
#define arguments_CAVM_USBHX_UAHC_LU3LFPSRXTIM(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_lu3lfpstxtim
 *
 * USBH UAHC Lu3lfpstxtim Register
 * U3 LFPS TX TIMER REGS REGISTER
 */
union cavm_usbhx_uahc_lu3lfpstxtim
{
    uint32_t u;
    struct cavm_usbhx_uahc_lu3lfpstxtim_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_30_31        : 2;
        uint32_t gen2_u3_exit_tx_clk   : 14; /**< [ 29: 16](R/W) For Gen2
                                                                  - Remotely initiated U3 exit: Local link will transmit response this long
                                                                 before initiating transition to Recovery.
                                                                  - This field is encoded as the Gen2 link_clk (6.4ns) count for the LFPS.
                                                                  -- 1: 6.4ns
                                                                  -- 2: 12.8ns
                                                                  -- 3: 19.2ns, and so on */
        uint32_t reserved_14_15        : 2;
        uint32_t gen1_u3_exit_rsp_tx_clk : 14;/**< [ 13:  0](R/W) For Gen1
                                                                  - Remotely initiated U3 exit: Local link will transmit response this long
                                                                 before initiating transition to Recovery.
                                                                  - This field is encoded as the Gen1 link_clk (8.0ns) count for the LFPS.
                                                                  -- 1: 8ns
                                                                  -- 2: 16ns
                                                                  -- 3: 24ns, and so on */
#else /* Word 0 - Little Endian */
        uint32_t gen1_u3_exit_rsp_tx_clk : 14;/**< [ 13:  0](R/W) For Gen1
                                                                  - Remotely initiated U3 exit: Local link will transmit response this long
                                                                 before initiating transition to Recovery.
                                                                  - This field is encoded as the Gen1 link_clk (8.0ns) count for the LFPS.
                                                                  -- 1: 8ns
                                                                  -- 2: 16ns
                                                                  -- 3: 24ns, and so on */
        uint32_t reserved_14_15        : 2;
        uint32_t gen2_u3_exit_tx_clk   : 14; /**< [ 29: 16](R/W) For Gen2
                                                                  - Remotely initiated U3 exit: Local link will transmit response this long
                                                                 before initiating transition to Recovery.
                                                                  - This field is encoded as the Gen2 link_clk (6.4ns) count for the LFPS.
                                                                  -- 1: 6.4ns
                                                                  -- 2: 12.8ns
                                                                  -- 3: 19.2ns, and so on */
        uint32_t reserved_30_31        : 2;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_lu3lfpstxtim_s cn; */
};
typedef union cavm_usbhx_uahc_lu3lfpstxtim cavm_usbhx_uahc_lu3lfpstxtim_t;

static inline uint64_t CAVM_USBHX_UAHC_LU3LFPSTXTIM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_LU3LFPSTXTIM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000d014ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000d014ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_LU3LFPSTXTIM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_LU3LFPSTXTIM(a) cavm_usbhx_uahc_lu3lfpstxtim_t
#define bustype_CAVM_USBHX_UAHC_LU3LFPSTXTIM(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_LU3LFPSTXTIM(a) "USBHX_UAHC_LU3LFPSTXTIM"
#define device_bar_CAVM_USBHX_UAHC_LU3LFPSTXTIM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_LU3LFPSTXTIM(a) (a)
#define arguments_CAVM_USBHX_UAHC_LU3LFPSTXTIM(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_mfindex
 *
 * USB XHCI Microframe Index Register
 * For information on this register, refer to the xHCI Specification, v1.2, section 5.5.1.
 *
 * This register can be reset by core domain reset,
 * or USBH()_UCTL_CTL[UAHC_RST],
 * or USBH()_UAHC_GCTL[CORESOFTRESET],
 * or USBH()_UAHC_USBCMD[HCRST], or USBH()_UAHC_USBCMD[LHCRST].
 */
union cavm_usbhx_uahc_mfindex
{
    uint32_t u;
    struct cavm_usbhx_uahc_mfindex_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_14_31        : 18;
        uint32_t mfindex               : 14; /**< [ 13:  0](RO/H) Microframe index. */
#else /* Word 0 - Little Endian */
        uint32_t mfindex               : 14; /**< [ 13:  0](RO/H) Microframe index. */
        uint32_t reserved_14_31        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_mfindex_s cn; */
};
typedef union cavm_usbhx_uahc_mfindex cavm_usbhx_uahc_mfindex_t;

static inline uint64_t CAVM_USBHX_UAHC_MFINDEX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_MFINDEX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000001000ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000001000ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_MFINDEX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_MFINDEX(a) cavm_usbhx_uahc_mfindex_t
#define bustype_CAVM_USBHX_UAHC_MFINDEX(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_MFINDEX(a) "USBHX_UAHC_MFINDEX"
#define device_bar_CAVM_USBHX_UAHC_MFINDEX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_MFINDEX(a) (a)
#define arguments_CAVM_USBHX_UAHC_MFINDEX(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_pagesize
 *
 * USB XHCI Page-Size Register
 * For information on this register, refer to the xHCI Specification, v1.2, section 5.4.3.
 */
union cavm_usbhx_uahc_pagesize
{
    uint32_t u;
    struct cavm_usbhx_uahc_pagesize_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t pagesize              : 16; /**< [ 15:  0](RO) Page size. */
#else /* Word 0 - Little Endian */
        uint32_t pagesize              : 16; /**< [ 15:  0](RO) Page size. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_pagesize_s cn; */
};
typedef union cavm_usbhx_uahc_pagesize cavm_usbhx_uahc_pagesize_t;

static inline uint64_t CAVM_USBHX_UAHC_PAGESIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_PAGESIZE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000028ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000028ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_PAGESIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_PAGESIZE(a) cavm_usbhx_uahc_pagesize_t
#define bustype_CAVM_USBHX_UAHC_PAGESIZE(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_PAGESIZE(a) "USBHX_UAHC_PAGESIZE"
#define device_bar_CAVM_USBHX_UAHC_PAGESIZE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_PAGESIZE(a) (a)
#define arguments_CAVM_USBHX_UAHC_PAGESIZE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_porthlpmc_20#
 *
 * USB XHCI Port Hardware LPM Control (High-Speed) Register
 * For information on this register, refer to the xHCI Specification, v1.2, section 5.4.11.2.
 *
 * This register can be reset by core domain reset,
 * or USBH()_UCTL_CTL[UAHC_RST],
 * or USBH()_UAHC_GCTL[CORESOFTRESET],
 * or USBH()_UAHC_USBCMD[HCRST], or USBH()_UAHC_USBCMD[LHCRST].
 */
union cavm_usbhx_uahc_porthlpmc_20x
{
    uint32_t u;
    struct cavm_usbhx_uahc_porthlpmc_20x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_14_31        : 18;
        uint32_t hirdd                 : 4;  /**< [ 13: 10](R/W) See section 5.4.11.2 of the XHCI Spec 1.1.
                                                                 If USBH()_UAHC_SUPTPRT2_DW2[BLC] = 0, then HIRD timing is applied to this field.
                                                                 If USBH()_UAHC_SUPTPRT2_DW2[BLC] = 1, then BESL timing is applied to this field. */
        uint32_t l1_timeout            : 8;  /**< [  9:  2](R/W) Timeout value for the L1 inactivity timer (LPM timer). This field is set to 0x0 by the
                                                                 assertion of PR to 1. Refer to section 4.23.5.1.1.1 (in XHCI spec 1.1) for more
                                                                 information on L1 Timeout operation.
                                                                 The following are permissible values:
                                                                 0x0 =  128 us. (default).
                                                                 0x1 =  256 us.
                                                                 0x2 =  512 us.
                                                                 0x3 =  768 us.
                                                                 _ ...
                                                                 0xFF =  65280 us. */
        uint32_t hirdm                 : 2;  /**< [  1:  0](R/W) Host-initiated resume-duration mode. */
#else /* Word 0 - Little Endian */
        uint32_t hirdm                 : 2;  /**< [  1:  0](R/W) Host-initiated resume-duration mode. */
        uint32_t l1_timeout            : 8;  /**< [  9:  2](R/W) Timeout value for the L1 inactivity timer (LPM timer). This field is set to 0x0 by the
                                                                 assertion of PR to 1. Refer to section 4.23.5.1.1.1 (in XHCI spec 1.1) for more
                                                                 information on L1 Timeout operation.
                                                                 The following are permissible values:
                                                                 0x0 =  128 us. (default).
                                                                 0x1 =  256 us.
                                                                 0x2 =  512 us.
                                                                 0x3 =  768 us.
                                                                 _ ...
                                                                 0xFF =  65280 us. */
        uint32_t hirdd                 : 4;  /**< [ 13: 10](R/W) See section 5.4.11.2 of the XHCI Spec 1.1.
                                                                 If USBH()_UAHC_SUPTPRT2_DW2[BLC] = 0, then HIRD timing is applied to this field.
                                                                 If USBH()_UAHC_SUPTPRT2_DW2[BLC] = 1, then BESL timing is applied to this field. */
        uint32_t reserved_14_31        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_porthlpmc_20x_s cn; */
};
typedef union cavm_usbhx_uahc_porthlpmc_20x cavm_usbhx_uahc_porthlpmc_20x_t;

static inline uint64_t CAVM_USBHX_UAHC_PORTHLPMC_20X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_PORTHLPMC_20X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b==0)))
        return 0x86800000042cll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b==0)))
        return 0x86800000042cll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("USBHX_UAHC_PORTHLPMC_20X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_PORTHLPMC_20X(a,b) cavm_usbhx_uahc_porthlpmc_20x_t
#define bustype_CAVM_USBHX_UAHC_PORTHLPMC_20X(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_PORTHLPMC_20X(a,b) "USBHX_UAHC_PORTHLPMC_20X"
#define device_bar_CAVM_USBHX_UAHC_PORTHLPMC_20X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_PORTHLPMC_20X(a,b) (a)
#define arguments_CAVM_USBHX_UAHC_PORTHLPMC_20X(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) usbh#_uahc_porthlpmc_ss#
 *
 * USB XHCI Port Hardware LPM Control (SuperSpeedPlus) Register
 * The USB3 port hardware LPM control register is reserved and shall be treated as RsvdP by
 * software. See xHCI specification v1.2 section 5.4.10.2.
 *
 * This register can be reset by core domain reset,
 * or USBH()_UCTL_CTL[UAHC_RST],
 * or USBH()_UAHC_GCTL[CORESOFTRESET],
 * or USBH()_UAHC_USBCMD[HCRST].
 */
union cavm_usbhx_uahc_porthlpmc_ssx
{
    uint32_t u;
    struct cavm_usbhx_uahc_porthlpmc_ssx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_porthlpmc_ssx_s cn; */
};
typedef union cavm_usbhx_uahc_porthlpmc_ssx cavm_usbhx_uahc_porthlpmc_ssx_t;

static inline uint64_t CAVM_USBHX_UAHC_PORTHLPMC_SSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_PORTHLPMC_SSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b==1)))
        return 0x86800000042cll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b==1)))
        return 0x86800000042cll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_PORTHLPMC_SSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_PORTHLPMC_SSX(a,b) cavm_usbhx_uahc_porthlpmc_ssx_t
#define bustype_CAVM_USBHX_UAHC_PORTHLPMC_SSX(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_PORTHLPMC_SSX(a,b) "USBHX_UAHC_PORTHLPMC_SSX"
#define device_bar_CAVM_USBHX_UAHC_PORTHLPMC_SSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_PORTHLPMC_SSX(a,b) (a)
#define arguments_CAVM_USBHX_UAHC_PORTHLPMC_SSX(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) usbh#_uahc_portli_20#
 *
 * USB XHCI Port Link (High-Speed) Register
 * For information on this register, refer to the xHCI Specification, v1.2, section 5.4.10.
 */
union cavm_usbhx_uahc_portli_20x
{
    uint32_t u;
    struct cavm_usbhx_uahc_portli_20x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_portli_20x_s cn; */
};
typedef union cavm_usbhx_uahc_portli_20x cavm_usbhx_uahc_portli_20x_t;

static inline uint64_t CAVM_USBHX_UAHC_PORTLI_20X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_PORTLI_20X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b==0)))
        return 0x868000000428ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b==0)))
        return 0x868000000428ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("USBHX_UAHC_PORTLI_20X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_PORTLI_20X(a,b) cavm_usbhx_uahc_portli_20x_t
#define bustype_CAVM_USBHX_UAHC_PORTLI_20X(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_PORTLI_20X(a,b) "USBHX_UAHC_PORTLI_20X"
#define device_bar_CAVM_USBHX_UAHC_PORTLI_20X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_PORTLI_20X(a,b) (a)
#define arguments_CAVM_USBHX_UAHC_PORTLI_20X(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) usbh#_uahc_portli_ssp#
 *
 * USB XHCI Port Link (SuperSpeedPlus) Register
 * For information on this register, refer to the xHCI Specification, v1.2, section 5.4.10.
 */
union cavm_usbhx_uahc_portli_sspx
{
    uint32_t u;
    struct cavm_usbhx_uahc_portli_sspx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t tlc                   : 4;  /**< [ 23: 20](RO/H) Tx Lane Count. */
        uint32_t rlc                   : 4;  /**< [ 19: 16](RO/H) Rx Lane Count. */
        uint32_t linkerrorcount        : 16; /**< [ 15:  0](RO/H) Link error count. */
#else /* Word 0 - Little Endian */
        uint32_t linkerrorcount        : 16; /**< [ 15:  0](RO/H) Link error count. */
        uint32_t rlc                   : 4;  /**< [ 19: 16](RO/H) Rx Lane Count. */
        uint32_t tlc                   : 4;  /**< [ 23: 20](RO/H) Tx Lane Count. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_portli_sspx_s cn; */
};
typedef union cavm_usbhx_uahc_portli_sspx cavm_usbhx_uahc_portli_sspx_t;

static inline uint64_t CAVM_USBHX_UAHC_PORTLI_SSPX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_PORTLI_SSPX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b==1)))
        return 0x868000000428ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b==1)))
        return 0x868000000428ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_PORTLI_SSPX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_PORTLI_SSPX(a,b) cavm_usbhx_uahc_portli_sspx_t
#define bustype_CAVM_USBHX_UAHC_PORTLI_SSPX(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_PORTLI_SSPX(a,b) "USBHX_UAHC_PORTLI_SSPX"
#define device_bar_CAVM_USBHX_UAHC_PORTLI_SSPX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_PORTLI_SSPX(a,b) (a)
#define arguments_CAVM_USBHX_UAHC_PORTLI_SSPX(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) usbh#_uahc_portpmsc_20#
 *
 * USB XHCI Port Power Management Status/Control (High-Speed) Register
 * For information on this register, refer to the xHCI Specification, v1.2, section 5.4.9.
 *
 * This register can be reset by core domain reset,
 * or USBH()_UCTL_CTL[UAHC_RST],
 * or USBH()_UAHC_GCTL[CORESOFTRESET],
 * or USBH()_UAHC_USBCMD[HCRST].
 */
union cavm_usbhx_uahc_portpmsc_20x
{
    uint32_t u;
    struct cavm_usbhx_uahc_portpmsc_20x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t port_test_control     : 4;  /**< [ 31: 28](R/W) Port test control. */
        uint32_t reserved_17_27        : 11;
        uint32_t hle                   : 1;  /**< [ 16: 16](R/W) Hardware LPM enable. */
        uint32_t l1_device_slot        : 8;  /**< [ 15:  8](R/W) L1 device slot. */
        uint32_t hird                  : 4;  /**< [  7:  4](R/W) Host-initiated resume duration. */
        uint32_t rwe                   : 1;  /**< [  3:  3](R/W) Remove wake enable. */
        uint32_t l1s                   : 3;  /**< [  2:  0](RO/H) L1 status. */
#else /* Word 0 - Little Endian */
        uint32_t l1s                   : 3;  /**< [  2:  0](RO/H) L1 status. */
        uint32_t rwe                   : 1;  /**< [  3:  3](R/W) Remove wake enable. */
        uint32_t hird                  : 4;  /**< [  7:  4](R/W) Host-initiated resume duration. */
        uint32_t l1_device_slot        : 8;  /**< [ 15:  8](R/W) L1 device slot. */
        uint32_t hle                   : 1;  /**< [ 16: 16](R/W) Hardware LPM enable. */
        uint32_t reserved_17_27        : 11;
        uint32_t port_test_control     : 4;  /**< [ 31: 28](R/W) Port test control. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_portpmsc_20x_s cn; */
};
typedef union cavm_usbhx_uahc_portpmsc_20x cavm_usbhx_uahc_portpmsc_20x_t;

static inline uint64_t CAVM_USBHX_UAHC_PORTPMSC_20X(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_PORTPMSC_20X(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b==0)))
        return 0x868000000424ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b==0)))
        return 0x868000000424ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("USBHX_UAHC_PORTPMSC_20X", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_PORTPMSC_20X(a,b) cavm_usbhx_uahc_portpmsc_20x_t
#define bustype_CAVM_USBHX_UAHC_PORTPMSC_20X(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_PORTPMSC_20X(a,b) "USBHX_UAHC_PORTPMSC_20X"
#define device_bar_CAVM_USBHX_UAHC_PORTPMSC_20X(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_PORTPMSC_20X(a,b) (a)
#define arguments_CAVM_USBHX_UAHC_PORTPMSC_20X(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) usbh#_uahc_portpmsc_ss_pls#
 *
 * USB XHCI Port Power Management Status/Control (SuperSpeedPlus) Register
 * For information on this register, refer to the xHCI Specification, v1.2, section 5.4.9.
 *
 * This register can be reset by core domain reset,
 * or USBH()_UCTL_CTL[UAHC_RST],
 * or USBH()_UAHC_GCTL[CORESOFTRESET],
 * or USBH()_UAHC_USBCMD[HCRST].
 */
union cavm_usbhx_uahc_portpmsc_ss_plsx
{
    uint32_t u;
    struct cavm_usbhx_uahc_portpmsc_ss_plsx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_17_31        : 15;
        uint32_t fla                   : 1;  /**< [ 16: 16](R/W/H) Force link PM accept. */
        uint32_t u2_timeout            : 8;  /**< [ 15:  8](R/W/H) U2 timeout. */
        uint32_t u1_timeout            : 8;  /**< [  7:  0](R/W/H) U1 timeout. */
#else /* Word 0 - Little Endian */
        uint32_t u1_timeout            : 8;  /**< [  7:  0](R/W/H) U1 timeout. */
        uint32_t u2_timeout            : 8;  /**< [ 15:  8](R/W/H) U2 timeout. */
        uint32_t fla                   : 1;  /**< [ 16: 16](R/W/H) Force link PM accept. */
        uint32_t reserved_17_31        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_portpmsc_ss_plsx_s cn; */
};
typedef union cavm_usbhx_uahc_portpmsc_ss_plsx cavm_usbhx_uahc_portpmsc_ss_plsx_t;

static inline uint64_t CAVM_USBHX_UAHC_PORTPMSC_SS_PLSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_PORTPMSC_SS_PLSX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b==1)))
        return 0x868000000424ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b==1)))
        return 0x868000000424ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_PORTPMSC_SS_PLSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_PORTPMSC_SS_PLSX(a,b) cavm_usbhx_uahc_portpmsc_ss_plsx_t
#define bustype_CAVM_USBHX_UAHC_PORTPMSC_SS_PLSX(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_PORTPMSC_SS_PLSX(a,b) "USBHX_UAHC_PORTPMSC_SS_PLSX"
#define device_bar_CAVM_USBHX_UAHC_PORTPMSC_SS_PLSX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_PORTPMSC_SS_PLSX(a,b) (a)
#define arguments_CAVM_USBHX_UAHC_PORTPMSC_SS_PLSX(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) usbh#_uahc_portsc#
 *
 * USB XHCI Port Status and Control Registers
 * For information on this register, refer to the xHCI Specification, v1.2, section 5.4.8. Port 1
 * is USB3.1 SuperSpeedPlus link, Port 0 is USB2.0 high-speed/full-speed/low-speed link.
 *
 * This register can be reset by core domain reset,
 * or USBH()_UCTL_CTL[UAHC_RST],
 * or USBH()_UAHC_GCTL[CORESOFTRESET],
 * or USBH()_UAHC_USBCMD[HCRST].
 */
union cavm_usbhx_uahc_portscx
{
    uint32_t u;
    struct cavm_usbhx_uahc_portscx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t wpr                   : 1;  /**< [ 31: 31](WO) Warm port reset. */
        uint32_t dr                    : 1;  /**< [ 30: 30](RO/H) Device removable. */
        uint32_t reserved_28_29        : 2;
        uint32_t woe                   : 1;  /**< [ 27: 27](R/W) Wake on overcurrent enable. */
        uint32_t wde                   : 1;  /**< [ 26: 26](R/W) Wake on disconnect enable. */
        uint32_t wce                   : 1;  /**< [ 25: 25](R/W) Wake on connect enable. */
        uint32_t cas                   : 1;  /**< [ 24: 24](RO/H) Cold attach status. */
        uint32_t cec                   : 1;  /**< [ 23: 23](R/W1C/H) Port configuration error change. */
        uint32_t plc                   : 1;  /**< [ 22: 22](R/W1C/H) Port link state change. */
        uint32_t prc                   : 1;  /**< [ 21: 21](R/W1C/H) Port reset change. */
        uint32_t occ                   : 1;  /**< [ 20: 20](R/W1C/H) Overcurrent change. */
        uint32_t wrc                   : 1;  /**< [ 19: 19](R/W1C/H) Warm port reset change. */
        uint32_t pec                   : 1;  /**< [ 18: 18](R/W1C/H) Port enabled/disabled change. */
        uint32_t csc                   : 1;  /**< [ 17: 17](R/W1C/H) Connect status change. */
        uint32_t lws                   : 1;  /**< [ 16: 16](WO) Port link state write strobe. */
        uint32_t pic                   : 2;  /**< [ 15: 14](R/W/H) Port indicator control. */
        uint32_t portspeed             : 4;  /**< [ 13: 10](RO/H) Port speed. */
        uint32_t pp                    : 1;  /**< [  9:  9](R/W/H) Port power. */
        uint32_t pls                   : 4;  /**< [  8:  5](R/W/H) Port link state. */
        uint32_t pr                    : 1;  /**< [  4:  4](R/W1S/H) Port reset. */
        uint32_t oca                   : 1;  /**< [  3:  3](RO/H) Overcurrent active. */
        uint32_t reserved_2            : 1;
        uint32_t ped                   : 1;  /**< [  1:  1](R/W1C/H) Port enabled/disabled. */
        uint32_t ccs                   : 1;  /**< [  0:  0](RO/H) Current connect status. */
#else /* Word 0 - Little Endian */
        uint32_t ccs                   : 1;  /**< [  0:  0](RO/H) Current connect status. */
        uint32_t ped                   : 1;  /**< [  1:  1](R/W1C/H) Port enabled/disabled. */
        uint32_t reserved_2            : 1;
        uint32_t oca                   : 1;  /**< [  3:  3](RO/H) Overcurrent active. */
        uint32_t pr                    : 1;  /**< [  4:  4](R/W1S/H) Port reset. */
        uint32_t pls                   : 4;  /**< [  8:  5](R/W/H) Port link state. */
        uint32_t pp                    : 1;  /**< [  9:  9](R/W/H) Port power. */
        uint32_t portspeed             : 4;  /**< [ 13: 10](RO/H) Port speed. */
        uint32_t pic                   : 2;  /**< [ 15: 14](R/W/H) Port indicator control. */
        uint32_t lws                   : 1;  /**< [ 16: 16](WO) Port link state write strobe. */
        uint32_t csc                   : 1;  /**< [ 17: 17](R/W1C/H) Connect status change. */
        uint32_t pec                   : 1;  /**< [ 18: 18](R/W1C/H) Port enabled/disabled change. */
        uint32_t wrc                   : 1;  /**< [ 19: 19](R/W1C/H) Warm port reset change. */
        uint32_t occ                   : 1;  /**< [ 20: 20](R/W1C/H) Overcurrent change. */
        uint32_t prc                   : 1;  /**< [ 21: 21](R/W1C/H) Port reset change. */
        uint32_t plc                   : 1;  /**< [ 22: 22](R/W1C/H) Port link state change. */
        uint32_t cec                   : 1;  /**< [ 23: 23](R/W1C/H) Port configuration error change. */
        uint32_t cas                   : 1;  /**< [ 24: 24](RO/H) Cold attach status. */
        uint32_t wce                   : 1;  /**< [ 25: 25](R/W) Wake on connect enable. */
        uint32_t wde                   : 1;  /**< [ 26: 26](R/W) Wake on disconnect enable. */
        uint32_t woe                   : 1;  /**< [ 27: 27](R/W) Wake on overcurrent enable. */
        uint32_t reserved_28_29        : 2;
        uint32_t dr                    : 1;  /**< [ 30: 30](RO/H) Device removable. */
        uint32_t wpr                   : 1;  /**< [ 31: 31](WO) Warm port reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_portscx_s cn; */
};
typedef union cavm_usbhx_uahc_portscx cavm_usbhx_uahc_portscx_t;

static inline uint64_t CAVM_USBHX_UAHC_PORTSCX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_PORTSCX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b<=1)))
        return 0x868000000420ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b<=1)))
        return 0x868000000420ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_PORTSCX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_PORTSCX(a,b) cavm_usbhx_uahc_portscx_t
#define bustype_CAVM_USBHX_UAHC_PORTSCX(a,b) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_PORTSCX(a,b) "USBHX_UAHC_PORTSCX"
#define device_bar_CAVM_USBHX_UAHC_PORTSCX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_PORTSCX(a,b) (a)
#define arguments_CAVM_USBHX_UAHC_PORTSCX(a,b) (a),(b),-1,-1

/**
 * Register (NCB32b) usbh#_uahc_rsvd0
 *
 * USBH UAHC Rsvd0 Reg Register
 * Reserved Register
 */
union cavm_usbhx_uahc_rsvd0
{
    uint32_t u;
    struct cavm_usbhx_uahc_rsvd0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rsvd_field            : 32; /**< [ 31:  0](RO/H) Reserved Register */
#else /* Word 0 - Little Endian */
        uint32_t rsvd_field            : 32; /**< [ 31:  0](RO/H) Reserved Register */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_rsvd0_s cn; */
};
typedef union cavm_usbhx_uahc_rsvd0 cavm_usbhx_uahc_rsvd0_t;

static inline uint64_t CAVM_USBHX_UAHC_RSVD0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_RSVD0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000cc00ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000cc00ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_RSVD0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_RSVD0(a) cavm_usbhx_uahc_rsvd0_t
#define bustype_CAVM_USBHX_UAHC_RSVD0(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_RSVD0(a) "USBHX_UAHC_RSVD0"
#define device_bar_CAVM_USBHX_UAHC_RSVD0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_RSVD0(a) (a)
#define arguments_CAVM_USBHX_UAHC_RSVD0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_rtsoff
 *
 * USB XHCI Runtime Register-Space Offset Register
 * This register defines the offset of the xHCI runtime registers from the base. For information
 * on this register, refer to the xHCI             Specification, v1.2, section 5.3.8.
 */
union cavm_usbhx_uahc_rtsoff
{
    uint32_t u;
    struct cavm_usbhx_uahc_rtsoff_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t rtsoff                : 27; /**< [ 31:  5](RO) Runtime register-space offset. */
        uint32_t reserved_0_4          : 5;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_4          : 5;
        uint32_t rtsoff                : 27; /**< [ 31:  5](RO) Runtime register-space offset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_rtsoff_s cn; */
};
typedef union cavm_usbhx_uahc_rtsoff cavm_usbhx_uahc_rtsoff_t;

static inline uint64_t CAVM_USBHX_UAHC_RTSOFF(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_RTSOFF(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000018ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000018ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_RTSOFF", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_RTSOFF(a) cavm_usbhx_uahc_rtsoff_t
#define bustype_CAVM_USBHX_UAHC_RTSOFF(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_RTSOFF(a) "USBHX_UAHC_RTSOFF"
#define device_bar_CAVM_USBHX_UAHC_RTSOFF(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_RTSOFF(a) (a)
#define arguments_CAVM_USBHX_UAHC_RTSOFF(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_suptprt2_dw0
 *
 * USB XHCI Supported-Protocol-Capability (USB 2.0) Register 0
 * For information on this register, refer to the xHCI Specification, v1.2, section 7.2.
 */
union cavm_usbhx_uahc_suptprt2_dw0
{
    uint32_t u;
    struct cavm_usbhx_uahc_suptprt2_dw0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t majorrev              : 8;  /**< [ 31: 24](RO) Major revision. */
        uint32_t minorrev              : 8;  /**< [ 23: 16](RO) Minor revision. */
        uint32_t nextcapptr            : 8;  /**< [ 15:  8](RO) Next capability pointer. */
        uint32_t capid                 : 8;  /**< [  7:  0](RO) Capability ID = supported protocol. */
#else /* Word 0 - Little Endian */
        uint32_t capid                 : 8;  /**< [  7:  0](RO) Capability ID = supported protocol. */
        uint32_t nextcapptr            : 8;  /**< [ 15:  8](RO) Next capability pointer. */
        uint32_t minorrev              : 8;  /**< [ 23: 16](RO) Minor revision. */
        uint32_t majorrev              : 8;  /**< [ 31: 24](RO) Major revision. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_suptprt2_dw0_s cn; */
};
typedef union cavm_usbhx_uahc_suptprt2_dw0 cavm_usbhx_uahc_suptprt2_dw0_t;

static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT2_DW0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT2_DW0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000450ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000450ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_SUPTPRT2_DW0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_SUPTPRT2_DW0(a) cavm_usbhx_uahc_suptprt2_dw0_t
#define bustype_CAVM_USBHX_UAHC_SUPTPRT2_DW0(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_SUPTPRT2_DW0(a) "USBHX_UAHC_SUPTPRT2_DW0"
#define device_bar_CAVM_USBHX_UAHC_SUPTPRT2_DW0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_SUPTPRT2_DW0(a) (a)
#define arguments_CAVM_USBHX_UAHC_SUPTPRT2_DW0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_suptprt2_dw1
 *
 * USB XHCI Supported-Protocol-Capability (USB 2.0) Register 1
 * For information on this register, refer to the xHCI Specification, v1.2, section 7.2.
 */
union cavm_usbhx_uahc_suptprt2_dw1
{
    uint32_t u;
    struct cavm_usbhx_uahc_suptprt2_dw1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t name                  : 32; /**< [ 31:  0](RO) Name string: 'USB'. */
#else /* Word 0 - Little Endian */
        uint32_t name                  : 32; /**< [ 31:  0](RO) Name string: 'USB'. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_suptprt2_dw1_s cn; */
};
typedef union cavm_usbhx_uahc_suptprt2_dw1 cavm_usbhx_uahc_suptprt2_dw1_t;

static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT2_DW1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT2_DW1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000454ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000454ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_SUPTPRT2_DW1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_SUPTPRT2_DW1(a) cavm_usbhx_uahc_suptprt2_dw1_t
#define bustype_CAVM_USBHX_UAHC_SUPTPRT2_DW1(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_SUPTPRT2_DW1(a) "USBHX_UAHC_SUPTPRT2_DW1"
#define device_bar_CAVM_USBHX_UAHC_SUPTPRT2_DW1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_SUPTPRT2_DW1(a) (a)
#define arguments_CAVM_USBHX_UAHC_SUPTPRT2_DW1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_suptprt2_dw2
 *
 * USB XHCI Supported-Protocol-Capability (USB 2.0) Register 2
 * For information on this register, refer to the xHCI Specification, v1.2, section 7.2.
 */
union cavm_usbhx_uahc_suptprt2_dw2
{
    uint32_t u;
    struct cavm_usbhx_uahc_suptprt2_dw2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t psic                  : 4;  /**< [ 31: 28](RO) Protocol speed ID count. */
        uint32_t mhd                   : 3;  /**< [ 27: 25](RO/H) Hub Depth. */
        uint32_t reserved_21_24        : 4;
        uint32_t blc                   : 1;  /**< [ 20: 20](RO) BESL LPM capability. */
        uint32_t hlc                   : 1;  /**< [ 19: 19](RO) Hardware LMP capability. */
        uint32_t ihi                   : 1;  /**< [ 18: 18](RO) Integrated hub implemented. */
        uint32_t hso                   : 1;  /**< [ 17: 17](RO) High-speed only. */
        uint32_t l1c                   : 1;  /**< [ 16: 16](RO/H) L1C */
        uint32_t compatprtcnt          : 8;  /**< [ 15:  8](RO) Compatible port count. */
        uint32_t compatprtoff          : 8;  /**< [  7:  0](RO) Compatible port offset. */
#else /* Word 0 - Little Endian */
        uint32_t compatprtoff          : 8;  /**< [  7:  0](RO) Compatible port offset. */
        uint32_t compatprtcnt          : 8;  /**< [ 15:  8](RO) Compatible port count. */
        uint32_t l1c                   : 1;  /**< [ 16: 16](RO/H) L1C */
        uint32_t hso                   : 1;  /**< [ 17: 17](RO) High-speed only. */
        uint32_t ihi                   : 1;  /**< [ 18: 18](RO) Integrated hub implemented. */
        uint32_t hlc                   : 1;  /**< [ 19: 19](RO) Hardware LMP capability. */
        uint32_t blc                   : 1;  /**< [ 20: 20](RO) BESL LPM capability. */
        uint32_t reserved_21_24        : 4;
        uint32_t mhd                   : 3;  /**< [ 27: 25](RO/H) Hub Depth. */
        uint32_t psic                  : 4;  /**< [ 31: 28](RO) Protocol speed ID count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_suptprt2_dw2_s cn; */
};
typedef union cavm_usbhx_uahc_suptprt2_dw2 cavm_usbhx_uahc_suptprt2_dw2_t;

static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT2_DW2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT2_DW2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000458ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000458ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_SUPTPRT2_DW2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_SUPTPRT2_DW2(a) cavm_usbhx_uahc_suptprt2_dw2_t
#define bustype_CAVM_USBHX_UAHC_SUPTPRT2_DW2(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_SUPTPRT2_DW2(a) "USBHX_UAHC_SUPTPRT2_DW2"
#define device_bar_CAVM_USBHX_UAHC_SUPTPRT2_DW2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_SUPTPRT2_DW2(a) (a)
#define arguments_CAVM_USBHX_UAHC_SUPTPRT2_DW2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_suptprt2_dw3
 *
 * USB XHCI Supported-Protocol-Capability (USB 2.0) Register 3
 * For information on this register, refer to the xHCI Specification, v1.2, section 7.2.
 */
union cavm_usbhx_uahc_suptprt2_dw3
{
    uint32_t u;
    struct cavm_usbhx_uahc_suptprt2_dw3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_5_31         : 27;
        uint32_t protslottype          : 5;  /**< [  4:  0](RO) Protocol slot type. */
#else /* Word 0 - Little Endian */
        uint32_t protslottype          : 5;  /**< [  4:  0](RO) Protocol slot type. */
        uint32_t reserved_5_31         : 27;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_suptprt2_dw3_s cn; */
};
typedef union cavm_usbhx_uahc_suptprt2_dw3 cavm_usbhx_uahc_suptprt2_dw3_t;

static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT2_DW3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT2_DW3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000045cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000045cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_SUPTPRT2_DW3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_SUPTPRT2_DW3(a) cavm_usbhx_uahc_suptprt2_dw3_t
#define bustype_CAVM_USBHX_UAHC_SUPTPRT2_DW3(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_SUPTPRT2_DW3(a) "USBHX_UAHC_SUPTPRT2_DW3"
#define device_bar_CAVM_USBHX_UAHC_SUPTPRT2_DW3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_SUPTPRT2_DW3(a) (a)
#define arguments_CAVM_USBHX_UAHC_SUPTPRT2_DW3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_suptprt3_dw0
 *
 * USB XHCI Supported-Protocol-Capability (USB 3.1) Register 0
 * For information on this register, refer to the xHCI Specification, v1.2, section 7.2.
 */
union cavm_usbhx_uahc_suptprt3_dw0
{
    uint32_t u;
    struct cavm_usbhx_uahc_suptprt3_dw0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t majorrev              : 8;  /**< [ 31: 24](RO) Major revision. */
        uint32_t minorrev              : 8;  /**< [ 23: 16](RO) Minor revision. */
        uint32_t nextcapptr            : 8;  /**< [ 15:  8](RO/H) Next capability pointer. Value depends on USBH()_UAHC_GUCTL[EXTCAPSUPTEN]. If
                                                                 EXTCAPSUPTEN
                                                                 =
                                                                 0, value is 0x0. If EXTCAPSUPTEN = 1, value is 0x4. */
        uint32_t capid                 : 8;  /**< [  7:  0](RO) Capability ID = supported protocol. */
#else /* Word 0 - Little Endian */
        uint32_t capid                 : 8;  /**< [  7:  0](RO) Capability ID = supported protocol. */
        uint32_t nextcapptr            : 8;  /**< [ 15:  8](RO/H) Next capability pointer. Value depends on USBH()_UAHC_GUCTL[EXTCAPSUPTEN]. If
                                                                 EXTCAPSUPTEN
                                                                 =
                                                                 0, value is 0x0. If EXTCAPSUPTEN = 1, value is 0x4. */
        uint32_t minorrev              : 8;  /**< [ 23: 16](RO) Minor revision. */
        uint32_t majorrev              : 8;  /**< [ 31: 24](RO) Major revision. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_suptprt3_dw0_s cn; */
};
typedef union cavm_usbhx_uahc_suptprt3_dw0 cavm_usbhx_uahc_suptprt3_dw0_t;

static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT3_DW0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT3_DW0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000460ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000460ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_SUPTPRT3_DW0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_SUPTPRT3_DW0(a) cavm_usbhx_uahc_suptprt3_dw0_t
#define bustype_CAVM_USBHX_UAHC_SUPTPRT3_DW0(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_SUPTPRT3_DW0(a) "USBHX_UAHC_SUPTPRT3_DW0"
#define device_bar_CAVM_USBHX_UAHC_SUPTPRT3_DW0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_SUPTPRT3_DW0(a) (a)
#define arguments_CAVM_USBHX_UAHC_SUPTPRT3_DW0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_suptprt3_dw1
 *
 * USB XHCI Supported-Protocol-Capability (USB 3.1) Register 1
 * For information on this register, refer to the xHCI Specification, v1.2, section 7.2.
 */
union cavm_usbhx_uahc_suptprt3_dw1
{
    uint32_t u;
    struct cavm_usbhx_uahc_suptprt3_dw1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t name                  : 32; /**< [ 31:  0](RO) Name string: 'USB'. */
#else /* Word 0 - Little Endian */
        uint32_t name                  : 32; /**< [ 31:  0](RO) Name string: 'USB'. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_suptprt3_dw1_s cn; */
};
typedef union cavm_usbhx_uahc_suptprt3_dw1 cavm_usbhx_uahc_suptprt3_dw1_t;

static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT3_DW1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT3_DW1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000464ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000464ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_SUPTPRT3_DW1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_SUPTPRT3_DW1(a) cavm_usbhx_uahc_suptprt3_dw1_t
#define bustype_CAVM_USBHX_UAHC_SUPTPRT3_DW1(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_SUPTPRT3_DW1(a) "USBHX_UAHC_SUPTPRT3_DW1"
#define device_bar_CAVM_USBHX_UAHC_SUPTPRT3_DW1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_SUPTPRT3_DW1(a) (a)
#define arguments_CAVM_USBHX_UAHC_SUPTPRT3_DW1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_suptprt3_dw2
 *
 * USB XHCI Supported-Protocol-Capability (USB 3.1) Register 2
 * For information on this register, refer to the xHCI Specification, v1.2, section 7.2.
 */
union cavm_usbhx_uahc_suptprt3_dw2
{
    uint32_t u;
    struct cavm_usbhx_uahc_suptprt3_dw2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t psic                  : 4;  /**< [ 31: 28](RO) Protocol speed ID count. */
        uint32_t reserved_16_27        : 12;
        uint32_t compatprtcnt          : 8;  /**< [ 15:  8](RO) Compatible port count. */
        uint32_t compatprtoff          : 8;  /**< [  7:  0](RO) Compatible port offset. */
#else /* Word 0 - Little Endian */
        uint32_t compatprtoff          : 8;  /**< [  7:  0](RO) Compatible port offset. */
        uint32_t compatprtcnt          : 8;  /**< [ 15:  8](RO) Compatible port count. */
        uint32_t reserved_16_27        : 12;
        uint32_t psic                  : 4;  /**< [ 31: 28](RO) Protocol speed ID count. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_suptprt3_dw2_s cn; */
};
typedef union cavm_usbhx_uahc_suptprt3_dw2 cavm_usbhx_uahc_suptprt3_dw2_t;

static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT3_DW2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT3_DW2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000468ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000468ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_SUPTPRT3_DW2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_SUPTPRT3_DW2(a) cavm_usbhx_uahc_suptprt3_dw2_t
#define bustype_CAVM_USBHX_UAHC_SUPTPRT3_DW2(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_SUPTPRT3_DW2(a) "USBHX_UAHC_SUPTPRT3_DW2"
#define device_bar_CAVM_USBHX_UAHC_SUPTPRT3_DW2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_SUPTPRT3_DW2(a) (a)
#define arguments_CAVM_USBHX_UAHC_SUPTPRT3_DW2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_suptprt3_dw3
 *
 * USB XHCI Supported-Protocol-Capability (USB 3.1) Register 3
 * For information on this register, refer to the xHCI Specification, v1.2, section 7.2.
 */
union cavm_usbhx_uahc_suptprt3_dw3
{
    uint32_t u;
    struct cavm_usbhx_uahc_suptprt3_dw3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_5_31         : 27;
        uint32_t protslottype          : 5;  /**< [  4:  0](RO) Protocol slot type. */
#else /* Word 0 - Little Endian */
        uint32_t protslottype          : 5;  /**< [  4:  0](RO) Protocol slot type. */
        uint32_t reserved_5_31         : 27;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_suptprt3_dw3_s cn; */
};
typedef union cavm_usbhx_uahc_suptprt3_dw3 cavm_usbhx_uahc_suptprt3_dw3_t;

static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT3_DW3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT3_DW3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000046cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000046cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_SUPTPRT3_DW3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_SUPTPRT3_DW3(a) cavm_usbhx_uahc_suptprt3_dw3_t
#define bustype_CAVM_USBHX_UAHC_SUPTPRT3_DW3(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_SUPTPRT3_DW3(a) "USBHX_UAHC_SUPTPRT3_DW3"
#define device_bar_CAVM_USBHX_UAHC_SUPTPRT3_DW3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_SUPTPRT3_DW3(a) (a)
#define arguments_CAVM_USBHX_UAHC_SUPTPRT3_DW3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_suptprt3_dw4
 *
 * USB XHCI Supported-Protocol-Capability (USB 3.1) Register 3
 * For information on this register, refer to the xHCI Specification, v1.2, section 7.2.
 */
union cavm_usbhx_uahc_suptprt3_dw4
{
    uint32_t u;
    struct cavm_usbhx_uahc_suptprt3_dw4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t psim                  : 16; /**< [ 31: 16](RO/H) PSIM. */
        uint32_t lp                    : 2;  /**< [ 15: 14](RO/H) Link Protocol. */
        uint32_t reserved_9_13         : 5;
        uint32_t pfd                   : 1;  /**< [  8:  8](RO/H) PSI full-duplex. */
        uint32_t plt                   : 2;  /**< [  7:  6](RO/H) PSI type. */
        uint32_t psie                  : 2;  /**< [  5:  4](RO/H) Protocol speed ID exponent. */
        uint32_t psiv                  : 4;  /**< [  3:  0](RO/H) Protocol speed ID value. */
#else /* Word 0 - Little Endian */
        uint32_t psiv                  : 4;  /**< [  3:  0](RO/H) Protocol speed ID value. */
        uint32_t psie                  : 2;  /**< [  5:  4](RO/H) Protocol speed ID exponent. */
        uint32_t plt                   : 2;  /**< [  7:  6](RO/H) PSI type. */
        uint32_t pfd                   : 1;  /**< [  8:  8](RO/H) PSI full-duplex. */
        uint32_t reserved_9_13         : 5;
        uint32_t lp                    : 2;  /**< [ 15: 14](RO/H) Link Protocol. */
        uint32_t psim                  : 16; /**< [ 31: 16](RO/H) PSIM. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_suptprt3_dw4_s cn; */
};
typedef union cavm_usbhx_uahc_suptprt3_dw4 cavm_usbhx_uahc_suptprt3_dw4_t;

static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT3_DW4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT3_DW4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000470ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000470ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_SUPTPRT3_DW4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_SUPTPRT3_DW4(a) cavm_usbhx_uahc_suptprt3_dw4_t
#define bustype_CAVM_USBHX_UAHC_SUPTPRT3_DW4(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_SUPTPRT3_DW4(a) "USBHX_UAHC_SUPTPRT3_DW4"
#define device_bar_CAVM_USBHX_UAHC_SUPTPRT3_DW4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_SUPTPRT3_DW4(a) (a)
#define arguments_CAVM_USBHX_UAHC_SUPTPRT3_DW4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_suptprt3_dw5
 *
 * USB XHCI Supported-Protocol-Capability (USB 3.1) Register 3
 * For information on this register, refer to the xHCI Specification, v1.2, section 7.2.
 */
union cavm_usbhx_uahc_suptprt3_dw5
{
    uint32_t u;
    struct cavm_usbhx_uahc_suptprt3_dw5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t psim                  : 16; /**< [ 31: 16](RO/H) Protocol speed mantissa. */
        uint32_t lp                    : 2;  /**< [ 15: 14](RO/H) Link Protocol. */
        uint32_t reserved_9_13         : 5;
        uint32_t pfd                   : 1;  /**< [  8:  8](RO/H) PSI full-duplex. */
        uint32_t plt                   : 2;  /**< [  7:  6](RO/H) PSI type. */
        uint32_t psie                  : 2;  /**< [  5:  4](RO/H) Protocol speed ID exponent. */
        uint32_t psiv                  : 4;  /**< [  3:  0](RO/H) PSIV. */
#else /* Word 0 - Little Endian */
        uint32_t psiv                  : 4;  /**< [  3:  0](RO/H) PSIV. */
        uint32_t psie                  : 2;  /**< [  5:  4](RO/H) Protocol speed ID exponent. */
        uint32_t plt                   : 2;  /**< [  7:  6](RO/H) PSI type. */
        uint32_t pfd                   : 1;  /**< [  8:  8](RO/H) PSI full-duplex. */
        uint32_t reserved_9_13         : 5;
        uint32_t lp                    : 2;  /**< [ 15: 14](RO/H) Link Protocol. */
        uint32_t psim                  : 16; /**< [ 31: 16](RO/H) Protocol speed mantissa. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_suptprt3_dw5_s cn; */
};
typedef union cavm_usbhx_uahc_suptprt3_dw5 cavm_usbhx_uahc_suptprt3_dw5_t;

static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT3_DW5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT3_DW5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000474ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000474ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_SUPTPRT3_DW5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_SUPTPRT3_DW5(a) cavm_usbhx_uahc_suptprt3_dw5_t
#define bustype_CAVM_USBHX_UAHC_SUPTPRT3_DW5(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_SUPTPRT3_DW5(a) "USBHX_UAHC_SUPTPRT3_DW5"
#define device_bar_CAVM_USBHX_UAHC_SUPTPRT3_DW5(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_SUPTPRT3_DW5(a) (a)
#define arguments_CAVM_USBHX_UAHC_SUPTPRT3_DW5(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_suptprt3_dw6
 *
 * USB XHCI Supported-Protocol-Capability (USB 3.1) Register 3
 * For information on this register, refer to the xHCI Specification, v1.2, section 7.2.
 */
union cavm_usbhx_uahc_suptprt3_dw6
{
    uint32_t u;
    struct cavm_usbhx_uahc_suptprt3_dw6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_suptprt3_dw6_s cn; */
};
typedef union cavm_usbhx_uahc_suptprt3_dw6 cavm_usbhx_uahc_suptprt3_dw6_t;

static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT3_DW6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT3_DW6(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000478ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000478ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_SUPTPRT3_DW6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_SUPTPRT3_DW6(a) cavm_usbhx_uahc_suptprt3_dw6_t
#define bustype_CAVM_USBHX_UAHC_SUPTPRT3_DW6(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_SUPTPRT3_DW6(a) "USBHX_UAHC_SUPTPRT3_DW6"
#define device_bar_CAVM_USBHX_UAHC_SUPTPRT3_DW6(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_SUPTPRT3_DW6(a) (a)
#define arguments_CAVM_USBHX_UAHC_SUPTPRT3_DW6(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_suptprt3_dw7
 *
 * USB XHCI Supported-Protocol-Capability (USB 3.1) Register 3
 * For information on this register, refer to the xHCI Specification, v1.2, section 7.2.
 */
union cavm_usbhx_uahc_suptprt3_dw7
{
    uint32_t u;
    struct cavm_usbhx_uahc_suptprt3_dw7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_suptprt3_dw7_s cn; */
};
typedef union cavm_usbhx_uahc_suptprt3_dw7 cavm_usbhx_uahc_suptprt3_dw7_t;

static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT3_DW7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_SUPTPRT3_DW7(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000047cll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000047cll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_SUPTPRT3_DW7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_SUPTPRT3_DW7(a) cavm_usbhx_uahc_suptprt3_dw7_t
#define bustype_CAVM_USBHX_UAHC_SUPTPRT3_DW7(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_SUPTPRT3_DW7(a) "USBHX_UAHC_SUPTPRT3_DW7"
#define device_bar_CAVM_USBHX_UAHC_SUPTPRT3_DW7(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_SUPTPRT3_DW7(a) (a)
#define arguments_CAVM_USBHX_UAHC_SUPTPRT3_DW7(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uahc_usb31_ver_number
 *
 * USBH UAHC Usb31 Ver Number Register
 * This register reflects the current corekit release number in ASCII format
 */
union cavm_usbhx_uahc_usb31_ver_number
{
    uint64_t u;
    struct cavm_usbhx_uahc_usb31_ver_number_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t version_num           : 32; /**< [ 31:  0](RO/H) Indicates the corekit release version number in ASCII format
                                                                  - For example
                                                                 Release number '1.90a' is represented as 0x3139302A

                                                                 The USB31_VER_NUMBER register in conjunction with the USB31_VER_TYPE register
                                                                 identifies the current release.
                                                                 Software uses this register to configure the release-specific features in the driver. */
#else /* Word 0 - Little Endian */
        uint64_t version_num           : 32; /**< [ 31:  0](RO/H) Indicates the corekit release version number in ASCII format
                                                                  - For example
                                                                 Release number '1.90a' is represented as 0x3139302A

                                                                 The USB31_VER_NUMBER register in conjunction with the USB31_VER_TYPE register
                                                                 identifies the current release.
                                                                 Software uses this register to configure the release-specific features in the driver. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_usb31_ver_number_s cn; */
};
typedef union cavm_usbhx_uahc_usb31_ver_number cavm_usbhx_uahc_usb31_ver_number_t;

static inline uint64_t CAVM_USBHX_UAHC_USB31_VER_NUMBER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_USB31_VER_NUMBER(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c1a0ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c1a0ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_USB31_VER_NUMBER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_USB31_VER_NUMBER(a) cavm_usbhx_uahc_usb31_ver_number_t
#define bustype_CAVM_USBHX_UAHC_USB31_VER_NUMBER(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UAHC_USB31_VER_NUMBER(a) "USBHX_UAHC_USB31_VER_NUMBER"
#define device_bar_CAVM_USBHX_UAHC_USB31_VER_NUMBER(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_USB31_VER_NUMBER(a) (a)
#define arguments_CAVM_USBHX_UAHC_USB31_VER_NUMBER(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_usb31_ver_type
 *
 * USBH UAHC Usb31 Ver Type Register
 * This register reflects the current release type of the IP.
 */
union cavm_usbhx_uahc_usb31_ver_type
{
    uint32_t u;
    struct cavm_usbhx_uahc_usb31_ver_type_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t versiontype           : 32; /**< [ 31:  0](RO/H) VERSIONTYPE
                                                                 Indicated the corekit release version type number in ASCII format
                                                                  -  For example:
                                                                 Release number '1.80a-lp01' is represented as 0x6C703031. For GA release, lower
                                                                 2-bytes of the register is always represented with ASCII value of '*' which is
                                                                 '2A'

                                                                 The USB31_VER_NUMBER register is in conjunction with the USB31_VER_NUMBER
                                                                 register identifies the current release.
                                                                 Software uses this register to configure the release-specific features in the driver. */
#else /* Word 0 - Little Endian */
        uint32_t versiontype           : 32; /**< [ 31:  0](RO/H) VERSIONTYPE
                                                                 Indicated the corekit release version type number in ASCII format
                                                                  -  For example:
                                                                 Release number '1.80a-lp01' is represented as 0x6C703031. For GA release, lower
                                                                 2-bytes of the register is always represented with ASCII value of '*' which is
                                                                 '2A'

                                                                 The USB31_VER_NUMBER register is in conjunction with the USB31_VER_NUMBER
                                                                 register identifies the current release.
                                                                 Software uses this register to configure the release-specific features in the driver. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_usb31_ver_type_s cn; */
};
typedef union cavm_usbhx_uahc_usb31_ver_type cavm_usbhx_uahc_usb31_ver_type_t;

static inline uint64_t CAVM_USBHX_UAHC_USB31_VER_TYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_USB31_VER_TYPE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000c1a4ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000c1a4ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_USB31_VER_TYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_USB31_VER_TYPE(a) cavm_usbhx_uahc_usb31_ver_type_t
#define bustype_CAVM_USBHX_UAHC_USB31_VER_TYPE(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_USB31_VER_TYPE(a) "USBHX_UAHC_USB31_VER_TYPE"
#define device_bar_CAVM_USBHX_UAHC_USB31_VER_TYPE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_USB31_VER_TYPE(a) (a)
#define arguments_CAVM_USBHX_UAHC_USB31_VER_TYPE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_usbcmd
 *
 * USB XHCI Command Register
 * The command register indicates the command to be executed by the serial bus host controller.
 * Writing to
 * the register causes a command to be executed.
 * For information on this register, refer to the xHCI Specification, v1.2, section 5.4.1.
 *
 * This register can be reset by core domain reset,
 * or USBH()_UCTL_CTL[UAHC_RST],
 * or USBH()_UAHC_GCTL[CORESOFTRESET],
 * or USBH()_UAHC_USBCMD[HCRST], or USBH()_UAHC_USBCMD[LHCRST].
 */
union cavm_usbhx_uahc_usbcmd
{
    uint32_t u;
    struct cavm_usbhx_uahc_usbcmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_15_31        : 17;
        uint32_t ete                   : 1;  /**< [ 14: 14](R/W) Extended TBC Enable. */
        uint32_t cme                   : 1;  /**< [ 13: 13](R/W) CEM Enable. */
        uint32_t reserved_12           : 1;
        uint32_t eu3s                  : 1;  /**< [ 11: 11](R/W) Enable U3 MFINDEX stop. */
        uint32_t ewe                   : 1;  /**< [ 10: 10](R/W) Enable wrap event. */
        uint32_t crs                   : 1;  /**< [  9:  9](WO) Controller restore state. */
        uint32_t css                   : 1;  /**< [  8:  8](WO) Controller save state. */
        uint32_t lhcrst                : 1;  /**< [  7:  7](R/W1S/H) Light host controller reset. */
        uint32_t reserved_4_6          : 3;
        uint32_t hsee                  : 1;  /**< [  3:  3](R/W) Host system error enable. */
        uint32_t inte                  : 1;  /**< [  2:  2](R/W) Interrupter enable. */
        uint32_t hcrst                 : 1;  /**< [  1:  1](R/W1S/H) Host controller reset. */
        uint32_t r_s                   : 1;  /**< [  0:  0](R/W) Run/stop. */
#else /* Word 0 - Little Endian */
        uint32_t r_s                   : 1;  /**< [  0:  0](R/W) Run/stop. */
        uint32_t hcrst                 : 1;  /**< [  1:  1](R/W1S/H) Host controller reset. */
        uint32_t inte                  : 1;  /**< [  2:  2](R/W) Interrupter enable. */
        uint32_t hsee                  : 1;  /**< [  3:  3](R/W) Host system error enable. */
        uint32_t reserved_4_6          : 3;
        uint32_t lhcrst                : 1;  /**< [  7:  7](R/W1S/H) Light host controller reset. */
        uint32_t css                   : 1;  /**< [  8:  8](WO) Controller save state. */
        uint32_t crs                   : 1;  /**< [  9:  9](WO) Controller restore state. */
        uint32_t ewe                   : 1;  /**< [ 10: 10](R/W) Enable wrap event. */
        uint32_t eu3s                  : 1;  /**< [ 11: 11](R/W) Enable U3 MFINDEX stop. */
        uint32_t reserved_12           : 1;
        uint32_t cme                   : 1;  /**< [ 13: 13](R/W) CEM Enable. */
        uint32_t ete                   : 1;  /**< [ 14: 14](R/W) Extended TBC Enable. */
        uint32_t reserved_15_31        : 17;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_usbcmd_s cn; */
};
typedef union cavm_usbhx_uahc_usbcmd cavm_usbhx_uahc_usbcmd_t;

static inline uint64_t CAVM_USBHX_UAHC_USBCMD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_USBCMD(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000020ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000020ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_USBCMD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_USBCMD(a) cavm_usbhx_uahc_usbcmd_t
#define bustype_CAVM_USBHX_UAHC_USBCMD(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_USBCMD(a) "USBHX_UAHC_USBCMD"
#define device_bar_CAVM_USBHX_UAHC_USBCMD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_USBCMD(a) (a)
#define arguments_CAVM_USBHX_UAHC_USBCMD(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_usblegctlsts
 *
 * USB XHCI Legacy Support Control/Status Register
 * For information on this register, refer to the xHCI Specification, v1.2, section 7.1.2. Note
 * that the SMI interrupts are not connected to anything in a CNXXXX configuration.
 *
 * This register can be reset by core domain reset,
 * or USBH()_UCTL_CTL[UAHC_RST],
 * or USBH()_UAHC_GCTL[CORESOFTRESET],
 * or USBH()_UAHC_USBCMD[HCRST], or USBH()_UAHC_USBCMD[LHCRST].
 */
union cavm_usbhx_uahc_usblegctlsts
{
    uint32_t u;
    struct cavm_usbhx_uahc_usblegctlsts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t smi_on_bar            : 1;  /**< [ 31: 31](R/W1C/H) System management interrupt on BAR. Never generated. */
        uint32_t smi_on_pci_command    : 1;  /**< [ 30: 30](R/W1C/H) System management interrupt on PCI command. Never generated. */
        uint32_t smi_on_os_ownership   : 1;  /**< [ 29: 29](R/W1C/H) System management interrupt on OS ownership change. This bit is set to 1 whenever
                                                                 USBH()_UAHC_USBLEGSUP[HC_OS_OWNED_SEMAPHORES] transitions. */
        uint32_t reserved_21_28        : 8;
        uint32_t smi_on_hostsystemerr  : 1;  /**< [ 20: 20](RO/H) System-management interrupt on host-system error. Shadow bit of USBH()_UAHC_USBSTS[HSE].
                                                                 Refer to
                                                                 xHCI Section 5.4.2 for definition and effects of the events associated with this bit being
                                                                 set to 1.

                                                                 To clear this bit to a 0, system software must write a 1 to USBH()_UAHC_USBSTS[HSE]. */
        uint32_t reserved_17_19        : 3;
        uint32_t smi_on_event_interrupt : 1; /**< [ 16: 16](RO/H) System-management interrupt on event interrupt. Shadow bit of USBH()_UAHC_USBSTS[EINT].
                                                                 Refer to
                                                                 xHCI Section 5.4.2 for definition. This bit automatically clears when [EINT] clears and
                                                                 sets when [EINT] sets. */
        uint32_t smi_on_bar_en         : 1;  /**< [ 15: 15](R/W) System-management interrupt on BAR enable. */
        uint32_t smi_on_pci_command_en : 1;  /**< [ 14: 14](R/W) System-management interrupt on PCI command enable. */
        uint32_t smi_on_os_ownership_en : 1; /**< [ 13: 13](R/W) System-management interrupt on OS ownership enable. */
        uint32_t reserved_5_12         : 8;
        uint32_t smi_on_hostsystemerr_en : 1;/**< [  4:  4](R/W) System-management interrupt on host-system error enable */
        uint32_t reserved_1_3          : 3;
        uint32_t usb_smi_en            : 1;  /**< [  0:  0](R/W) USB system-management interrupt enable. */
#else /* Word 0 - Little Endian */
        uint32_t usb_smi_en            : 1;  /**< [  0:  0](R/W) USB system-management interrupt enable. */
        uint32_t reserved_1_3          : 3;
        uint32_t smi_on_hostsystemerr_en : 1;/**< [  4:  4](R/W) System-management interrupt on host-system error enable */
        uint32_t reserved_5_12         : 8;
        uint32_t smi_on_os_ownership_en : 1; /**< [ 13: 13](R/W) System-management interrupt on OS ownership enable. */
        uint32_t smi_on_pci_command_en : 1;  /**< [ 14: 14](R/W) System-management interrupt on PCI command enable. */
        uint32_t smi_on_bar_en         : 1;  /**< [ 15: 15](R/W) System-management interrupt on BAR enable. */
        uint32_t smi_on_event_interrupt : 1; /**< [ 16: 16](RO/H) System-management interrupt on event interrupt. Shadow bit of USBH()_UAHC_USBSTS[EINT].
                                                                 Refer to
                                                                 xHCI Section 5.4.2 for definition. This bit automatically clears when [EINT] clears and
                                                                 sets when [EINT] sets. */
        uint32_t reserved_17_19        : 3;
        uint32_t smi_on_hostsystemerr  : 1;  /**< [ 20: 20](RO/H) System-management interrupt on host-system error. Shadow bit of USBH()_UAHC_USBSTS[HSE].
                                                                 Refer to
                                                                 xHCI Section 5.4.2 for definition and effects of the events associated with this bit being
                                                                 set to 1.

                                                                 To clear this bit to a 0, system software must write a 1 to USBH()_UAHC_USBSTS[HSE]. */
        uint32_t reserved_21_28        : 8;
        uint32_t smi_on_os_ownership   : 1;  /**< [ 29: 29](R/W1C/H) System management interrupt on OS ownership change. This bit is set to 1 whenever
                                                                 USBH()_UAHC_USBLEGSUP[HC_OS_OWNED_SEMAPHORES] transitions. */
        uint32_t smi_on_pci_command    : 1;  /**< [ 30: 30](R/W1C/H) System management interrupt on PCI command. Never generated. */
        uint32_t smi_on_bar            : 1;  /**< [ 31: 31](R/W1C/H) System management interrupt on BAR. Never generated. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_usblegctlsts_s cn; */
};
typedef union cavm_usbhx_uahc_usblegctlsts cavm_usbhx_uahc_usblegctlsts_t;

static inline uint64_t CAVM_USBHX_UAHC_USBLEGCTLSTS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_USBLEGCTLSTS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000444ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000444ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_USBLEGCTLSTS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_USBLEGCTLSTS(a) cavm_usbhx_uahc_usblegctlsts_t
#define bustype_CAVM_USBHX_UAHC_USBLEGCTLSTS(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_USBLEGCTLSTS(a) "USBHX_UAHC_USBLEGCTLSTS"
#define device_bar_CAVM_USBHX_UAHC_USBLEGCTLSTS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_USBLEGCTLSTS(a) (a)
#define arguments_CAVM_USBHX_UAHC_USBLEGCTLSTS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_usblegsup
 *
 * USB XHCI Legacy Support Capability Register
 * For information on this register, refer to the xHCI Specification, v1.2, section 7.1.1.
 *
 * This register can be reset by core domain reset,
 * or USBH()_UCTL_CTL[UAHC_RST],
 * or USBH()_UAHC_GCTL[CORESOFTRESET],
 * or USBH()_UAHC_USBCMD[HCRST], or USBH()_UAHC_USBCMD[LHCRST].
 */
union cavm_usbhx_uahc_usblegsup
{
    uint32_t u;
    struct cavm_usbhx_uahc_usblegsup_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t hc_os_owned_semaphores : 1; /**< [ 24: 24](R/W) HC OS-owned semaphore. */
        uint32_t reserved_17_23        : 7;
        uint32_t hc_bios_owned_semaphores : 1;/**< [ 16: 16](R/W) HC BIOS-owned semaphore. */
        uint32_t nextcapptr            : 8;  /**< [ 15:  8](RO) Next xHCI extended-capability pointer. */
        uint32_t capid                 : 8;  /**< [  7:  0](RO) Capability ID = USB legacy support. */
#else /* Word 0 - Little Endian */
        uint32_t capid                 : 8;  /**< [  7:  0](RO) Capability ID = USB legacy support. */
        uint32_t nextcapptr            : 8;  /**< [ 15:  8](RO) Next xHCI extended-capability pointer. */
        uint32_t hc_bios_owned_semaphores : 1;/**< [ 16: 16](R/W) HC BIOS-owned semaphore. */
        uint32_t reserved_17_23        : 7;
        uint32_t hc_os_owned_semaphores : 1; /**< [ 24: 24](R/W) HC OS-owned semaphore. */
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_usblegsup_s cn; */
};
typedef union cavm_usbhx_uahc_usblegsup cavm_usbhx_uahc_usblegsup_t;

static inline uint64_t CAVM_USBHX_UAHC_USBLEGSUP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_USBLEGSUP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000440ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000440ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_USBLEGSUP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_USBLEGSUP(a) cavm_usbhx_uahc_usblegsup_t
#define bustype_CAVM_USBHX_UAHC_USBLEGSUP(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_USBLEGSUP(a) "USBHX_UAHC_USBLEGSUP"
#define device_bar_CAVM_USBHX_UAHC_USBLEGSUP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_USBLEGSUP(a) (a)
#define arguments_CAVM_USBHX_UAHC_USBLEGSUP(a) (a),-1,-1,-1

/**
 * Register (NCB32b) usbh#_uahc_usbsts
 *
 * USB XHCI Status Register
 * This register indicates pending interrupts and various states of the host controller.
 * For information on this register, refer to the xHCI Specification, v1.2, section 5.4.2.
 *
 * This register can be reset by core domain reset,
 * or USBH()_UCTL_CTL[UAHC_RST],
 * or USBH()_UAHC_GCTL[CORESOFTRESET],
 * or USBH()_UAHC_USBCMD[HCRST], or USBH()_UAHC_USBCMD[LHCRST].
 */
union cavm_usbhx_uahc_usbsts
{
    uint32_t u;
    struct cavm_usbhx_uahc_usbsts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_13_31        : 19;
        uint32_t hce                   : 1;  /**< [ 12: 12](RO/H) Host controller error. */
        uint32_t cnr                   : 1;  /**< [ 11: 11](RO/H) Controller not ready. */
        uint32_t sre                   : 1;  /**< [ 10: 10](R/W1C/H) Save/restore error. */
        uint32_t rss                   : 1;  /**< [  9:  9](RO/H) Restore state status. */
        uint32_t sss                   : 1;  /**< [  8:  8](RO/H) Save state status. */
        uint32_t reserved_5_7          : 3;
        uint32_t pcd                   : 1;  /**< [  4:  4](R/W1C/H) Port change detect. */
        uint32_t eint                  : 1;  /**< [  3:  3](R/W1C/H) Event interrupt. */
        uint32_t hse                   : 1;  /**< [  2:  2](R/W1C/H) Host system error. The typical software response to an HSE is to reset the core. */
        uint32_t reserved_1            : 1;
        uint32_t hch                   : 1;  /**< [  0:  0](RO/H) HC halted. */
#else /* Word 0 - Little Endian */
        uint32_t hch                   : 1;  /**< [  0:  0](RO/H) HC halted. */
        uint32_t reserved_1            : 1;
        uint32_t hse                   : 1;  /**< [  2:  2](R/W1C/H) Host system error. The typical software response to an HSE is to reset the core. */
        uint32_t eint                  : 1;  /**< [  3:  3](R/W1C/H) Event interrupt. */
        uint32_t pcd                   : 1;  /**< [  4:  4](R/W1C/H) Port change detect. */
        uint32_t reserved_5_7          : 3;
        uint32_t sss                   : 1;  /**< [  8:  8](RO/H) Save state status. */
        uint32_t rss                   : 1;  /**< [  9:  9](RO/H) Restore state status. */
        uint32_t sre                   : 1;  /**< [ 10: 10](R/W1C/H) Save/restore error. */
        uint32_t cnr                   : 1;  /**< [ 11: 11](RO/H) Controller not ready. */
        uint32_t hce                   : 1;  /**< [ 12: 12](RO/H) Host controller error. */
        uint32_t reserved_13_31        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uahc_usbsts_s cn; */
};
typedef union cavm_usbhx_uahc_usbsts cavm_usbhx_uahc_usbsts_t;

static inline uint64_t CAVM_USBHX_UAHC_USBSTS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UAHC_USBSTS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000000024ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000000024ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UAHC_USBSTS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UAHC_USBSTS(a) cavm_usbhx_uahc_usbsts_t
#define bustype_CAVM_USBHX_UAHC_USBSTS(a) CSR_TYPE_NCB32b
#define basename_CAVM_USBHX_UAHC_USBSTS(a) "USBHX_UAHC_USBSTS"
#define device_bar_CAVM_USBHX_UAHC_USBSTS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UAHC_USBSTS(a) (a)
#define arguments_CAVM_USBHX_UAHC_USBSTS(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_csclk_active_pc
 *
 * USB UCTL Conditional Sclk Clock Counter Register
 * This register counts conditional clocks, for power analysis.
 * Reset by core domain reset.
 */
union cavm_usbhx_uctl_csclk_active_pc
{
    uint64_t u;
    struct cavm_usbhx_uctl_csclk_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Counts conditional clock active cycles since reset. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Counts conditional clock active cycles since reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_csclk_active_pc_s cn; */
};
typedef union cavm_usbhx_uctl_csclk_active_pc cavm_usbhx_uctl_csclk_active_pc_t;

static inline uint64_t CAVM_USBHX_UCTL_CSCLK_ACTIVE_PC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_CSCLK_ACTIVE_PC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000100028ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100028ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_CSCLK_ACTIVE_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_CSCLK_ACTIVE_PC(a) cavm_usbhx_uctl_csclk_active_pc_t
#define bustype_CAVM_USBHX_UCTL_CSCLK_ACTIVE_PC(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_CSCLK_ACTIVE_PC(a) "USBHX_UCTL_CSCLK_ACTIVE_PC"
#define device_bar_CAVM_USBHX_UCTL_CSCLK_ACTIVE_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_CSCLK_ACTIVE_PC(a) (a)
#define arguments_CAVM_USBHX_UCTL_CSCLK_ACTIVE_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_ctl
 *
 * USB UCTL Control Register
 * This register controls clocks, resets, power, and BIST.
 *
 * This register can be reset by core domain reset.
 */
union cavm_usbhx_uctl_ctl
{
    uint64_t u;
    struct cavm_usbhx_uctl_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mpll_multiplier       : 11; /**< [ 63: 53](R/W) Multiplies the reference clock to a frequency suitable for intended operating speed for SSPPHY.
                                                                 As [REF_CLK_SEL] = 0x0, the legal values are:
                                                                   0x00 = 100  MHz on DLMC_REF_CLK*.
                                                                 All other values are reserved.
                                                                 This value may only be changed during [UPHY_RST]. */
        uint64_t ssc_en                : 1;  /**< [ 52: 52](R/W) Spread-spectrum clock enable. Enables spread-spectrum clock production in the SuperSpeedPlus
                                                                 function. If the input reference clock for the SuperSpeedPlus PLL is already spread-spectrum,
                                                                 then do not enable this feature. The clocks sourced to the SuperSpeedPlus function must have
                                                                 spread-spectrum to be compliant with the USB specification.
                                                                 This value may only be changed during [UPHY_RST]. */
        uint64_t ssc_range             : 3;  /**< [ 51: 49](R/W) Spread-spectrum clock range. Selects the range of spread-spectrum modulation when SSC_EN
                                                                 is asserted and the PHY is spreading the SuperSpeedPlus transmit clocks.
                                                                 Applies a fixed offset to the phase accumulator.
                                                                 0x0 = -4980 ppm downspread of clock.
                                                                 0x1 = -4492 ppm.
                                                                 0x2 = -4003 ppm.
                                                                 0x3-0x7 = reserved.

                                                                 All of these settings are within the USB 3.1 specification. The amount of EMI emission
                                                                 reduction might decrease as the [SSC_RANGE] increases; therefore, the [SSC_RANGE] settings
                                                                 can
                                                                 be registered to enable the amount of spreading to be adjusted on a per-application basis.
                                                                 This value can be changed only during UPHY_RST. */
        uint64_t ssc_ref_clk_sel       : 9;  /**< [ 48: 40](R/W) Enables non-standard oscillator frequencies to generate targeted MPLL output rates. Input
                                                                 corresponds to the frequency-synthesis coefficient.

                                                                 [55:53]: modulus - 1,
                                                                 [52:47]: 2's complement push amount.

                                                                 A value of 0x0 means this feature is disabled.
                                                                 The legal values are 0x0.
                                                                 All other values are reserved.

                                                                 This value may only be changed during [UPHY_RST]. */
        uint64_t ref_ss_plsp_en        : 1;  /**< [ 39: 39](R/W) Enables reference clock to the prescaler for SuperSpeedPlus function. This should always be
                                                                 enabled since this output clock is used to drive the UAHC suspend-mode clock during
                                                                 low-power states.

                                                                 This value can be changed only during UPHY_RST or during low-power states.
                                                                 The reference clock must be running and stable before [UPHY_RST] is deasserted and before
                                                                 [REF_SS_PLSP_EN] is asserted. */
        uint64_t ref_clk_div2          : 1;  /**< [ 38: 38](R/W) Divides the reference clock by two before feeding it into the REF_CLK_FSEL divider.

                                                                 As [REF_CLK_SEL] = 0x0, the legal value is 0x0.

                                                                 This value can be changed only during UPHY_RST. */
        uint64_t ref_clk_fsel          : 6;  /**< [ 37: 32](R/W) Selects the reference clock frequency for the SuperSpeedPlus and high-speed PLL blocks.

                                                                 As [REF_CLK_SEL] = 0x0, the legal values are:

                                                                   0x27 = 100  MHz on DLMC_REF_CLK*.

                                                                 All other values are reserved.

                                                                 This value may only be changed during [UPHY_RST]. */
        uint64_t cmd_flr_en            : 1;  /**< [ 31: 31](R/W) The host controller will stop accepting commands if this bit is set. This bit is
                                                                 for host_mode only.

                                                                 In normal FLR, this bit should be set to 0. If software wants the command to
                                                                 finish before FLR, write this bit to 1 and poll USBH()_UAHC_USBSTS[HCH] to
                                                                 make sure the command is finished before disabling USBH's PCCPF_XXX_CMD[ME]. */
        uint64_t h_clk_en              : 1;  /**< [ 30: 30](R/W) Controller-clock enable. When set to 1, the controller clock is generated. This also
                                                                 enables access to UCTL registers 0x30-0xF8. */
        uint64_t h_clk_byp_sel         : 1;  /**< [ 29: 29](R/W) Select the bypass input to the controller-clock divider.
                                                                 0 = Use the divided coprocessor clock from the H_CLKDIV divider.
                                                                 1 = Use the bypass clock from the GPIO pins.

                                                                 This signal is just a multiplexer-select signal; it does not enable the controller clock.
                                                                 You must still set H_CLKDIV_EN separately. [H_CLK_BYP_SEL] select should not be changed
                                                                 unless H_CLKDIV_EN is disabled.

                                                                 The bypass clock can be selected and running even if the controller-clock dividers are not
                                                                 running. */
        uint64_t h_clkdiv_rst          : 1;  /**< [ 28: 28](R/W) Controller clock divider reset. Divided clocks are not generated while the divider is
                                                                 being reset.
                                                                 This also resets the suspend-clock divider. */
        uint64_t usb31phy_cr_para_sel  : 1;  /**< [ 27: 27](R/W) CR Parallel interface select
                                                                 0 - JTAG
                                                                 1 - Control Register */
        uint64_t h_clkdiv_sel          : 3;  /**< [ 26: 24](R/W) Controller clock-frequency-divider select. The controller-clock frequency is the
                                                                 coprocessor-clock frequency divided by [H_CLKDIV_SEL] and must be at or below 300 MHz.
                                                                 The divider values are the following:
                                                                 0x0 = divide by 1.
                                                                 0x1 = divide by 2.
                                                                 0x2 = divide by 4.
                                                                 0x3 = divide by 6.
                                                                 0x4 = divide by 8.
                                                                 0x5 = divide by 16.
                                                                 0x6 = divide by 24.
                                                                 0x7 = divide by 32.

                                                                 The HCLK frequency must be at or below 300 MHz.
                                                                 The HCLK frequency must be at or above 150 MHz for full-rate USB3.1
                                                                 operation.
                                                                 The HCLK frequency must be at or above 125 MHz for any USB3.1
                                                                 functionality.
                                                                 If SSP host mode = the HCLK frequency must be at or above 156.25 MHz for
                                                                 correct USB2 functionality.

                                                                 If SS host mode = the HCLK frequency must be at or above 125 MHz for
                                                                 correct USB2 functionality.

                                                                 If full line rateHS host mode = the HCLK frequency must be at or above 90 MHz
                                                                 for full-rate USB2 operation.

                                                                 If for any HS mode = the HCLK frequency must be at or above 62.5 MHz
                                                                 for any USB2 operation.

                                                                 This field can be changed only when [H_CLKDIV_RST] = 1. */
        uint64_t sram_bypass           : 1;  /**< [ 23: 23](R/W) 0x0= SRAM mode for bootloading of USB31PHY.
                                                                 0x1= SRAM_EXT_LD_DONE ? CREG_MODE : ROM_MODE. */
        uint64_t sram_ext_ld_done      : 1;  /**< [ 22: 22](R/W) 0x0= SRAM_BYPASS ? ROM_MODE : SRAM_MODE.
                                                                 0x1= CREG_MODE for bootloading 31phy. */
        uint64_t usb3_port_perm_attach : 1;  /**< [ 21: 21](R/W) Indicates this port is permanently attached. This is a strap signal; it should be modified
                                                                 only when [UPHY_RST] is asserted. */
        uint64_t usb2_port_perm_attach : 1;  /**< [ 20: 20](R/W) Indicates this port is permanently attached. This is a strap signal; it should be modified
                                                                 only when [UPHY_RST] is asserted. */
        uint64_t sram_init_done        : 1;  /**< [ 19: 19](RO/H) SRAM Init Done. */
        uint64_t usb31_port_disable    : 1;  /**< [ 18: 18](R/W) Disables the USB3 (SuperSpeedPlus) portion of this PHY. When set to 1, this signal stops
                                                                 reporting connect/disconnect events on the port and keeps the port in disabled state. This
                                                                 could be used for security reasons where hardware can disable a port regardless of whether
                                                                 xHCI driver enables a port or not.
                                                                 USBH()_UAHC_HCSPARAMS1[MAXPORTS] is not affected by this signal.

                                                                 This is a strap signal; it should be modified only when [UPHY_RST] is asserted. */
        uint64_t reserved_17           : 1;
        uint64_t usb2_port_disable     : 1;  /**< [ 16: 16](R/W) Disables USB2 (high-speed/full-speed/low-speed) portion of this PHY. When set to 1, this
                                                                 signal stops reporting connect/disconnect events on the port and keeps the port in
                                                                 disabled state. This could be used for security reasons where hardware can disable a port
                                                                 regardless of whether xHCI driver enables a port or not.
                                                                 USBH()_UAHC_HCSPARAMS1[MAXPORTS] is not affected by this signal.

                                                                 This is a strap signal; it should only be modified when [UPHY_RST] is asserted.
                                                                 If Port0 is required to be disabled, ensure that the utmi_clk[0] is running at the normal
                                                                 speed. Also, all the enabled USB2.0 ports should have the same clock frequency as Port0. */
        uint64_t reserved_15           : 1;
        uint64_t ssp_power_en          : 1;  /**< [ 14: 14](R/W) PHY SuperSpeedPlus block power enable.
                                                                 This is a strap signal; it should only be modified when [UPHY_RST] is asserted. */
        uint64_t reserved_13           : 1;
        uint64_t hs_power_en           : 1;  /**< [ 12: 12](R/W) PHY high-speed block power enable.
                                                                 This is a strap signal; it should only be modified when [UPHY_RST] is asserted. */
        uint64_t ref_clk_sel           : 3;  /**< [ 11:  9](R/W) Reference clock select. Choose reference-clock source for the SuperSpeedPlus and high-speed
                                                                 PLL blocks.
                                                                 0x0 = Reference clock sources for both PLLs come from REF_CLK0_P/N.
                                                                 0x1 = Reserved.
                                                                 0x2 = Reserved.
                                                                 0x3 = Reserved.
                                                                 0x4 = Reserved.
                                                                 0x5 = Reserved.
                                                                 0x6 = Reserved.
                                                                 0x7 = Reserved.

                                                                 This value can be changed only during UPHY_RST.

                                                                 The reference clock selected cannot be spread-spectrum. */
        uint64_t reserved_6_8          : 3;
        uint64_t dma_psn_ign           : 1;  /**< [  5:  5](R/W) Handling of poison indication on DMA read responses.
                                                                 0 = Treat poison data the same way as fault, sending an AXI error to the USB
                                                                 controller.
                                                                 1 = Ignore poison and proceed with the transaction as if no problems. */
        uint64_t csclk_force           : 1;  /**< [  4:  4](R/W) Force conditional clock and NCBI conditional clock to be running. For diagnostic
                                                                 use only.
                                                                 0 = No override.
                                                                 1 = Override the enable of conditional clock to force it running. */
        uint64_t reserved_3            : 1;
        uint64_t uphy_rst              : 1;  /**< [  2:  2](R/W) PHY reset; resets UPHY; active-high. */
        uint64_t uahc_rst              : 1;  /**< [  1:  1](R/W) Software reset; resets UAHC; active-high. */
        uint64_t uctl_rst              : 1;  /**< [  0:  0](R/W) Software reset; resets UCTL; active-high.
                                                                 Resets UAHC DMA and register shims. Resets UCTL registers 0x30-0xF8.
                                                                 Does not reset UCTL registers 0x0-0x28.
                                                                 UCTL registers starting from 0x30 can be accessed only after the controller clock is
                                                                 active and [UCTL_RST] is deasserted. */
#else /* Word 0 - Little Endian */
        uint64_t uctl_rst              : 1;  /**< [  0:  0](R/W) Software reset; resets UCTL; active-high.
                                                                 Resets UAHC DMA and register shims. Resets UCTL registers 0x30-0xF8.
                                                                 Does not reset UCTL registers 0x0-0x28.
                                                                 UCTL registers starting from 0x30 can be accessed only after the controller clock is
                                                                 active and [UCTL_RST] is deasserted. */
        uint64_t uahc_rst              : 1;  /**< [  1:  1](R/W) Software reset; resets UAHC; active-high. */
        uint64_t uphy_rst              : 1;  /**< [  2:  2](R/W) PHY reset; resets UPHY; active-high. */
        uint64_t reserved_3            : 1;
        uint64_t csclk_force           : 1;  /**< [  4:  4](R/W) Force conditional clock and NCBI conditional clock to be running. For diagnostic
                                                                 use only.
                                                                 0 = No override.
                                                                 1 = Override the enable of conditional clock to force it running. */
        uint64_t dma_psn_ign           : 1;  /**< [  5:  5](R/W) Handling of poison indication on DMA read responses.
                                                                 0 = Treat poison data the same way as fault, sending an AXI error to the USB
                                                                 controller.
                                                                 1 = Ignore poison and proceed with the transaction as if no problems. */
        uint64_t reserved_6_8          : 3;
        uint64_t ref_clk_sel           : 3;  /**< [ 11:  9](R/W) Reference clock select. Choose reference-clock source for the SuperSpeedPlus and high-speed
                                                                 PLL blocks.
                                                                 0x0 = Reference clock sources for both PLLs come from REF_CLK0_P/N.
                                                                 0x1 = Reserved.
                                                                 0x2 = Reserved.
                                                                 0x3 = Reserved.
                                                                 0x4 = Reserved.
                                                                 0x5 = Reserved.
                                                                 0x6 = Reserved.
                                                                 0x7 = Reserved.

                                                                 This value can be changed only during UPHY_RST.

                                                                 The reference clock selected cannot be spread-spectrum. */
        uint64_t hs_power_en           : 1;  /**< [ 12: 12](R/W) PHY high-speed block power enable.
                                                                 This is a strap signal; it should only be modified when [UPHY_RST] is asserted. */
        uint64_t reserved_13           : 1;
        uint64_t ssp_power_en          : 1;  /**< [ 14: 14](R/W) PHY SuperSpeedPlus block power enable.
                                                                 This is a strap signal; it should only be modified when [UPHY_RST] is asserted. */
        uint64_t reserved_15           : 1;
        uint64_t usb2_port_disable     : 1;  /**< [ 16: 16](R/W) Disables USB2 (high-speed/full-speed/low-speed) portion of this PHY. When set to 1, this
                                                                 signal stops reporting connect/disconnect events on the port and keeps the port in
                                                                 disabled state. This could be used for security reasons where hardware can disable a port
                                                                 regardless of whether xHCI driver enables a port or not.
                                                                 USBH()_UAHC_HCSPARAMS1[MAXPORTS] is not affected by this signal.

                                                                 This is a strap signal; it should only be modified when [UPHY_RST] is asserted.
                                                                 If Port0 is required to be disabled, ensure that the utmi_clk[0] is running at the normal
                                                                 speed. Also, all the enabled USB2.0 ports should have the same clock frequency as Port0. */
        uint64_t reserved_17           : 1;
        uint64_t usb31_port_disable    : 1;  /**< [ 18: 18](R/W) Disables the USB3 (SuperSpeedPlus) portion of this PHY. When set to 1, this signal stops
                                                                 reporting connect/disconnect events on the port and keeps the port in disabled state. This
                                                                 could be used for security reasons where hardware can disable a port regardless of whether
                                                                 xHCI driver enables a port or not.
                                                                 USBH()_UAHC_HCSPARAMS1[MAXPORTS] is not affected by this signal.

                                                                 This is a strap signal; it should be modified only when [UPHY_RST] is asserted. */
        uint64_t sram_init_done        : 1;  /**< [ 19: 19](RO/H) SRAM Init Done. */
        uint64_t usb2_port_perm_attach : 1;  /**< [ 20: 20](R/W) Indicates this port is permanently attached. This is a strap signal; it should be modified
                                                                 only when [UPHY_RST] is asserted. */
        uint64_t usb3_port_perm_attach : 1;  /**< [ 21: 21](R/W) Indicates this port is permanently attached. This is a strap signal; it should be modified
                                                                 only when [UPHY_RST] is asserted. */
        uint64_t sram_ext_ld_done      : 1;  /**< [ 22: 22](R/W) 0x0= SRAM_BYPASS ? ROM_MODE : SRAM_MODE.
                                                                 0x1= CREG_MODE for bootloading 31phy. */
        uint64_t sram_bypass           : 1;  /**< [ 23: 23](R/W) 0x0= SRAM mode for bootloading of USB31PHY.
                                                                 0x1= SRAM_EXT_LD_DONE ? CREG_MODE : ROM_MODE. */
        uint64_t h_clkdiv_sel          : 3;  /**< [ 26: 24](R/W) Controller clock-frequency-divider select. The controller-clock frequency is the
                                                                 coprocessor-clock frequency divided by [H_CLKDIV_SEL] and must be at or below 300 MHz.
                                                                 The divider values are the following:
                                                                 0x0 = divide by 1.
                                                                 0x1 = divide by 2.
                                                                 0x2 = divide by 4.
                                                                 0x3 = divide by 6.
                                                                 0x4 = divide by 8.
                                                                 0x5 = divide by 16.
                                                                 0x6 = divide by 24.
                                                                 0x7 = divide by 32.

                                                                 The HCLK frequency must be at or below 300 MHz.
                                                                 The HCLK frequency must be at or above 150 MHz for full-rate USB3.1
                                                                 operation.
                                                                 The HCLK frequency must be at or above 125 MHz for any USB3.1
                                                                 functionality.
                                                                 If SSP host mode = the HCLK frequency must be at or above 156.25 MHz for
                                                                 correct USB2 functionality.

                                                                 If SS host mode = the HCLK frequency must be at or above 125 MHz for
                                                                 correct USB2 functionality.

                                                                 If full line rateHS host mode = the HCLK frequency must be at or above 90 MHz
                                                                 for full-rate USB2 operation.

                                                                 If for any HS mode = the HCLK frequency must be at or above 62.5 MHz
                                                                 for any USB2 operation.

                                                                 This field can be changed only when [H_CLKDIV_RST] = 1. */
        uint64_t usb31phy_cr_para_sel  : 1;  /**< [ 27: 27](R/W) CR Parallel interface select
                                                                 0 - JTAG
                                                                 1 - Control Register */
        uint64_t h_clkdiv_rst          : 1;  /**< [ 28: 28](R/W) Controller clock divider reset. Divided clocks are not generated while the divider is
                                                                 being reset.
                                                                 This also resets the suspend-clock divider. */
        uint64_t h_clk_byp_sel         : 1;  /**< [ 29: 29](R/W) Select the bypass input to the controller-clock divider.
                                                                 0 = Use the divided coprocessor clock from the H_CLKDIV divider.
                                                                 1 = Use the bypass clock from the GPIO pins.

                                                                 This signal is just a multiplexer-select signal; it does not enable the controller clock.
                                                                 You must still set H_CLKDIV_EN separately. [H_CLK_BYP_SEL] select should not be changed
                                                                 unless H_CLKDIV_EN is disabled.

                                                                 The bypass clock can be selected and running even if the controller-clock dividers are not
                                                                 running. */
        uint64_t h_clk_en              : 1;  /**< [ 30: 30](R/W) Controller-clock enable. When set to 1, the controller clock is generated. This also
                                                                 enables access to UCTL registers 0x30-0xF8. */
        uint64_t cmd_flr_en            : 1;  /**< [ 31: 31](R/W) The host controller will stop accepting commands if this bit is set. This bit is
                                                                 for host_mode only.

                                                                 In normal FLR, this bit should be set to 0. If software wants the command to
                                                                 finish before FLR, write this bit to 1 and poll USBH()_UAHC_USBSTS[HCH] to
                                                                 make sure the command is finished before disabling USBH's PCCPF_XXX_CMD[ME]. */
        uint64_t ref_clk_fsel          : 6;  /**< [ 37: 32](R/W) Selects the reference clock frequency for the SuperSpeedPlus and high-speed PLL blocks.

                                                                 As [REF_CLK_SEL] = 0x0, the legal values are:

                                                                   0x27 = 100  MHz on DLMC_REF_CLK*.

                                                                 All other values are reserved.

                                                                 This value may only be changed during [UPHY_RST]. */
        uint64_t ref_clk_div2          : 1;  /**< [ 38: 38](R/W) Divides the reference clock by two before feeding it into the REF_CLK_FSEL divider.

                                                                 As [REF_CLK_SEL] = 0x0, the legal value is 0x0.

                                                                 This value can be changed only during UPHY_RST. */
        uint64_t ref_ss_plsp_en        : 1;  /**< [ 39: 39](R/W) Enables reference clock to the prescaler for SuperSpeedPlus function. This should always be
                                                                 enabled since this output clock is used to drive the UAHC suspend-mode clock during
                                                                 low-power states.

                                                                 This value can be changed only during UPHY_RST or during low-power states.
                                                                 The reference clock must be running and stable before [UPHY_RST] is deasserted and before
                                                                 [REF_SS_PLSP_EN] is asserted. */
        uint64_t ssc_ref_clk_sel       : 9;  /**< [ 48: 40](R/W) Enables non-standard oscillator frequencies to generate targeted MPLL output rates. Input
                                                                 corresponds to the frequency-synthesis coefficient.

                                                                 [55:53]: modulus - 1,
                                                                 [52:47]: 2's complement push amount.

                                                                 A value of 0x0 means this feature is disabled.
                                                                 The legal values are 0x0.
                                                                 All other values are reserved.

                                                                 This value may only be changed during [UPHY_RST]. */
        uint64_t ssc_range             : 3;  /**< [ 51: 49](R/W) Spread-spectrum clock range. Selects the range of spread-spectrum modulation when SSC_EN
                                                                 is asserted and the PHY is spreading the SuperSpeedPlus transmit clocks.
                                                                 Applies a fixed offset to the phase accumulator.
                                                                 0x0 = -4980 ppm downspread of clock.
                                                                 0x1 = -4492 ppm.
                                                                 0x2 = -4003 ppm.
                                                                 0x3-0x7 = reserved.

                                                                 All of these settings are within the USB 3.1 specification. The amount of EMI emission
                                                                 reduction might decrease as the [SSC_RANGE] increases; therefore, the [SSC_RANGE] settings
                                                                 can
                                                                 be registered to enable the amount of spreading to be adjusted on a per-application basis.
                                                                 This value can be changed only during UPHY_RST. */
        uint64_t ssc_en                : 1;  /**< [ 52: 52](R/W) Spread-spectrum clock enable. Enables spread-spectrum clock production in the SuperSpeedPlus
                                                                 function. If the input reference clock for the SuperSpeedPlus PLL is already spread-spectrum,
                                                                 then do not enable this feature. The clocks sourced to the SuperSpeedPlus function must have
                                                                 spread-spectrum to be compliant with the USB specification.
                                                                 This value may only be changed during [UPHY_RST]. */
        uint64_t mpll_multiplier       : 11; /**< [ 63: 53](R/W) Multiplies the reference clock to a frequency suitable for intended operating speed for SSPPHY.
                                                                 As [REF_CLK_SEL] = 0x0, the legal values are:
                                                                   0x00 = 100  MHz on DLMC_REF_CLK*.
                                                                 All other values are reserved.
                                                                 This value may only be changed during [UPHY_RST]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_ctl_s cn; */
};
typedef union cavm_usbhx_uctl_ctl cavm_usbhx_uctl_ctl_t;

static inline uint64_t CAVM_USBHX_UCTL_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000100000ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100000ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_CTL(a) cavm_usbhx_uctl_ctl_t
#define bustype_CAVM_USBHX_UCTL_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_CTL(a) "USBHX_UCTL_CTL"
#define device_bar_CAVM_USBHX_UCTL_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_CTL(a) (a)
#define arguments_CAVM_USBHX_UCTL_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_eusb2phy_cfg2
 *
 * USB UCTL EUSB2PHY Configuration Register 2
 * This register allows configuration of eusb2 phy module
 */
union cavm_usbhx_uctl_eusb2phy_cfg2
{
    uint64_t u;
    struct cavm_usbhx_uctl_eusb2phy_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t phy_cfg_rcal_code     : 4;  /**< [  7:  4](R/W) Controls HS termination in bypass mode */
        uint64_t reserved_3            : 1;
        uint64_t phy_cfg_rx_hs_term_en : 1;  /**< [  2:  2](R/W) eUSB HS RX termination enable
                                                                 1 = RX differential termination enabled in HS mode
                                                                 0 = RX differential termination disabled in HS mode */
        uint64_t phy_cfg_rptr_mode     : 1;  /**< [  1:  1](R/W) Selects the eUSB mode. 1 = Repeater mode 0 = Native mode */
        uint64_t vbus_valid_ext        : 1;  /**< [  0:  0](R/W) Indicates the VBUS valid status. */
#else /* Word 0 - Little Endian */
        uint64_t vbus_valid_ext        : 1;  /**< [  0:  0](R/W) Indicates the VBUS valid status. */
        uint64_t phy_cfg_rptr_mode     : 1;  /**< [  1:  1](R/W) Selects the eUSB mode. 1 = Repeater mode 0 = Native mode */
        uint64_t phy_cfg_rx_hs_term_en : 1;  /**< [  2:  2](R/W) eUSB HS RX termination enable
                                                                 1 = RX differential termination enabled in HS mode
                                                                 0 = RX differential termination disabled in HS mode */
        uint64_t reserved_3            : 1;
        uint64_t phy_cfg_rcal_code     : 4;  /**< [  7:  4](R/W) Controls HS termination in bypass mode */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_eusb2phy_cfg2_s cn; */
};
typedef union cavm_usbhx_uctl_eusb2phy_cfg2 cavm_usbhx_uctl_eusb2phy_cfg2_t;

static inline uint64_t CAVM_USBHX_UCTL_EUSB2PHY_CFG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_EUSB2PHY_CFG2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=1))
        return 0x868000100140ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100140ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_EUSB2PHY_CFG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_EUSB2PHY_CFG2(a) cavm_usbhx_uctl_eusb2phy_cfg2_t
#define bustype_CAVM_USBHX_UCTL_EUSB2PHY_CFG2(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_EUSB2PHY_CFG2(a) "USBHX_UCTL_EUSB2PHY_CFG2"
#define device_bar_CAVM_USBHX_UCTL_EUSB2PHY_CFG2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_EUSB2PHY_CFG2(a) (a)
#define arguments_CAVM_USBHX_UCTL_EUSB2PHY_CFG2(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_host_cfg
 *
 * USB UCTL Host Controller Configuration Register
 * This register allows configuration of various host controller (UAHC) features. Most of these
 * are strap signals and should be modified only while the controller is not running.
 *
 * This register is accessible only when USBH()_UCTL_CTL[H_CLK_EN] = 1.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UCTL_RST].
 */
union cavm_usbhx_uctl_host_cfg
{
    uint64_t u;
    struct cavm_usbhx_uctl_host_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t host_current_belt     : 12; /**< [ 59: 48](RO) This signal indicates the minimum value of all received BELT values and the BELT that is
                                                                 set by the Set LTV command. */
        uint64_t reserved_38_47        : 10;
        uint64_t fla                   : 6;  /**< [ 37: 32](R/W) High-speed jitter adjustment. Indicates the correction required to accommodate mac3 clock
                                                                 and utmi clock jitter to measure 125 us duration. With FLA tied to 0x0, the high-speed
                                                                 125 us micro-frame is counted for 123933 ns. The value needs to be programmed in terms of
                                                                 high-speed bit times in a 30 MHz cycle. Default value that needs to be driven is 0x20
                                                                 (assuming 30 MHz perfect clock).

                                                                 FLA connects to the FLADJ register defined in the xHCI spec in the PCI configuration
                                                                 space. Each count is equal to 16 high-speed bit times. By default when this register is
                                                                 set to 0x20, it gives 125 us interval. Now, based on the clock accuracy, you can decrement
                                                                 the count or increment the count to get the 125 us uSOF window.
                                                                 This is a strap signal; it should only be modified when UAHC is in reset (soft-reset
                                                                 okay). */
        uint64_t reserved_29_31        : 3;
        uint64_t bme                   : 1;  /**< [ 28: 28](R/W) Bus-master enable. This signal is used to disable the bus-mastering capability of the
                                                                 host. Disabling this capability stalls DMA accesses. */
        uint64_t oci_en                : 1;  /**< [ 27: 27](R/W) Overcurrent-indication enable. When enabled, OCI input to UAHC is taken from the GPIO
                                                                 signals and sense-converted based on [OCI_ACTIVE_HIGH_EN]. The MIO GPIO multiplexer must be
                                                                 programmed accordingly.

                                                                 When disabled, OCI input to UAHC is forced to the correct inactive state based on
                                                                 [OCI_ACTIVE_HIGH_EN].

                                                                 This is a strap signal; it should only be modified when UAHC is in reset (soft-reset
                                                                 okay). */
        uint64_t oci_active_high_en    : 1;  /**< [ 26: 26](R/W) Overcurrent sense selection. The off-chip sense (high/low) is converted to match the
                                                                 controller's active-high sense.
                                                                 0 = Overcurrent indication from off-chip source is active-low.
                                                                 1 = Overcurrent indication from off-chip source is active-high.

                                                                 This is a strap signal; it should only be modified when UAHC is in reset (soft-reset
                                                                 okay). */
        uint64_t ppc_en                : 1;  /**< [ 25: 25](R/W) Port-power-control enable.
                                                                 0 = USBH()_UAHC_HCCPARAMS[PPC] report port-power-control feature is unavailable.
                                                                 1 = USBH()_UAHC_HCCPARAMS[PPC] reports port-power-control feature is available. PPC
                                                                 output
                                                                 from UAHC is taken to the GPIO signals and sense-converted based on [PPC_ACTIVE_HIGH_EN].

                                                                 The MIO GPIO multiplexer must be programmed accordingly.

                                                                 This is a strap signal; it should only be modified when either the UCTL_CTL[UAHC] or
                                                                 UAHC_GCTL[CoreSoftReset] is asserted. */
        uint64_t ppc_active_high_en    : 1;  /**< [ 24: 24](R/W) Port power control sense selection. The active-high port-power-control output to off-chip
                                                                 source is converted to match the off-chip sense.
                                                                 0 = Port-power control to off-chip source is active-low.
                                                                 1 = Port-power control to off-chip source is active-high.

                                                                 This is a strap signal; it should only be modified when either the UCTL_CTL[UAHC] or
                                                                 UAHC_GCTL[CoreSoftReset] is asserted. */
        uint64_t reserved_0_23         : 24;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_23         : 24;
        uint64_t ppc_active_high_en    : 1;  /**< [ 24: 24](R/W) Port power control sense selection. The active-high port-power-control output to off-chip
                                                                 source is converted to match the off-chip sense.
                                                                 0 = Port-power control to off-chip source is active-low.
                                                                 1 = Port-power control to off-chip source is active-high.

                                                                 This is a strap signal; it should only be modified when either the UCTL_CTL[UAHC] or
                                                                 UAHC_GCTL[CoreSoftReset] is asserted. */
        uint64_t ppc_en                : 1;  /**< [ 25: 25](R/W) Port-power-control enable.
                                                                 0 = USBH()_UAHC_HCCPARAMS[PPC] report port-power-control feature is unavailable.
                                                                 1 = USBH()_UAHC_HCCPARAMS[PPC] reports port-power-control feature is available. PPC
                                                                 output
                                                                 from UAHC is taken to the GPIO signals and sense-converted based on [PPC_ACTIVE_HIGH_EN].

                                                                 The MIO GPIO multiplexer must be programmed accordingly.

                                                                 This is a strap signal; it should only be modified when either the UCTL_CTL[UAHC] or
                                                                 UAHC_GCTL[CoreSoftReset] is asserted. */
        uint64_t oci_active_high_en    : 1;  /**< [ 26: 26](R/W) Overcurrent sense selection. The off-chip sense (high/low) is converted to match the
                                                                 controller's active-high sense.
                                                                 0 = Overcurrent indication from off-chip source is active-low.
                                                                 1 = Overcurrent indication from off-chip source is active-high.

                                                                 This is a strap signal; it should only be modified when UAHC is in reset (soft-reset
                                                                 okay). */
        uint64_t oci_en                : 1;  /**< [ 27: 27](R/W) Overcurrent-indication enable. When enabled, OCI input to UAHC is taken from the GPIO
                                                                 signals and sense-converted based on [OCI_ACTIVE_HIGH_EN]. The MIO GPIO multiplexer must be
                                                                 programmed accordingly.

                                                                 When disabled, OCI input to UAHC is forced to the correct inactive state based on
                                                                 [OCI_ACTIVE_HIGH_EN].

                                                                 This is a strap signal; it should only be modified when UAHC is in reset (soft-reset
                                                                 okay). */
        uint64_t bme                   : 1;  /**< [ 28: 28](R/W) Bus-master enable. This signal is used to disable the bus-mastering capability of the
                                                                 host. Disabling this capability stalls DMA accesses. */
        uint64_t reserved_29_31        : 3;
        uint64_t fla                   : 6;  /**< [ 37: 32](R/W) High-speed jitter adjustment. Indicates the correction required to accommodate mac3 clock
                                                                 and utmi clock jitter to measure 125 us duration. With FLA tied to 0x0, the high-speed
                                                                 125 us micro-frame is counted for 123933 ns. The value needs to be programmed in terms of
                                                                 high-speed bit times in a 30 MHz cycle. Default value that needs to be driven is 0x20
                                                                 (assuming 30 MHz perfect clock).

                                                                 FLA connects to the FLADJ register defined in the xHCI spec in the PCI configuration
                                                                 space. Each count is equal to 16 high-speed bit times. By default when this register is
                                                                 set to 0x20, it gives 125 us interval. Now, based on the clock accuracy, you can decrement
                                                                 the count or increment the count to get the 125 us uSOF window.
                                                                 This is a strap signal; it should only be modified when UAHC is in reset (soft-reset
                                                                 okay). */
        uint64_t reserved_38_47        : 10;
        uint64_t host_current_belt     : 12; /**< [ 59: 48](RO) This signal indicates the minimum value of all received BELT values and the BELT that is
                                                                 set by the Set LTV command. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_host_cfg_s cn; */
};
typedef union cavm_usbhx_uctl_host_cfg cavm_usbhx_uctl_host_cfg_t;

static inline uint64_t CAVM_USBHX_UCTL_HOST_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_HOST_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x8680001000e0ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x8680001000e0ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_HOST_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_HOST_CFG(a) cavm_usbhx_uctl_host_cfg_t
#define bustype_CAVM_USBHX_UCTL_HOST_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_HOST_CFG(a) "USBHX_UCTL_HOST_CFG"
#define device_bar_CAVM_USBHX_UCTL_HOST_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_HOST_CFG(a) (a)
#define arguments_CAVM_USBHX_UCTL_HOST_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_intena_w1c
 *
 * USB UCTL Interrupt Status Register
 * This register clears interrupt enable bits.
 */
union cavm_usbhx_uctl_intena_w1c
{
    uint64_t u;
    struct cavm_usbhx_uctl_intena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t dma_rd_err            : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for USBH(0..1)_UCTL_INTSTAT[DMA_RD_ERR]. */
        uint64_t dma_wr_err            : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for USBH(0..1)_UCTL_INTSTAT[DMA_WR_ERR]. */
        uint64_t dma_psn               : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for USBH(0..1)_UCTL_INTSTAT[DMA_PSN]. */
        uint64_t reserved_3_4          : 2;
        uint64_t xm_bad_dma            : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for USBH(0..1)_UCTL_INTSTAT[XM_BAD_DMA]. */
        uint64_t xs_ncb_oob            : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for USBH(0..1)_UCTL_INTSTAT[XS_NCB_OOB]. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t xs_ncb_oob            : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for USBH(0..1)_UCTL_INTSTAT[XS_NCB_OOB]. */
        uint64_t xm_bad_dma            : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for USBH(0..1)_UCTL_INTSTAT[XM_BAD_DMA]. */
        uint64_t reserved_3_4          : 2;
        uint64_t dma_psn               : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for USBH(0..1)_UCTL_INTSTAT[DMA_PSN]. */
        uint64_t dma_wr_err            : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for USBH(0..1)_UCTL_INTSTAT[DMA_WR_ERR]. */
        uint64_t dma_rd_err            : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for USBH(0..1)_UCTL_INTSTAT[DMA_RD_ERR]. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_intena_w1c_s cn; */
};
typedef union cavm_usbhx_uctl_intena_w1c cavm_usbhx_uctl_intena_w1c_t;

static inline uint64_t CAVM_USBHX_UCTL_INTENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_INTENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000100040ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100040ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_INTENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_INTENA_W1C(a) cavm_usbhx_uctl_intena_w1c_t
#define bustype_CAVM_USBHX_UCTL_INTENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_INTENA_W1C(a) "USBHX_UCTL_INTENA_W1C"
#define device_bar_CAVM_USBHX_UCTL_INTENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_INTENA_W1C(a) (a)
#define arguments_CAVM_USBHX_UCTL_INTENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_intena_w1s
 *
 * USB UCTL Interrupt Status Register
 * This register sets interrupt enable bits.
 */
union cavm_usbhx_uctl_intena_w1s
{
    uint64_t u;
    struct cavm_usbhx_uctl_intena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t dma_rd_err            : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for USBH(0..1)_UCTL_INTSTAT[DMA_RD_ERR]. */
        uint64_t dma_wr_err            : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for USBH(0..1)_UCTL_INTSTAT[DMA_WR_ERR]. */
        uint64_t dma_psn               : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for USBH(0..1)_UCTL_INTSTAT[DMA_PSN]. */
        uint64_t reserved_3_4          : 2;
        uint64_t xm_bad_dma            : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for USBH(0..1)_UCTL_INTSTAT[XM_BAD_DMA]. */
        uint64_t xs_ncb_oob            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for USBH(0..1)_UCTL_INTSTAT[XS_NCB_OOB]. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t xs_ncb_oob            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for USBH(0..1)_UCTL_INTSTAT[XS_NCB_OOB]. */
        uint64_t xm_bad_dma            : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for USBH(0..1)_UCTL_INTSTAT[XM_BAD_DMA]. */
        uint64_t reserved_3_4          : 2;
        uint64_t dma_psn               : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for USBH(0..1)_UCTL_INTSTAT[DMA_PSN]. */
        uint64_t dma_wr_err            : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for USBH(0..1)_UCTL_INTSTAT[DMA_WR_ERR]. */
        uint64_t dma_rd_err            : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for USBH(0..1)_UCTL_INTSTAT[DMA_RD_ERR]. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_intena_w1s_s cn; */
};
typedef union cavm_usbhx_uctl_intena_w1s cavm_usbhx_uctl_intena_w1s_t;

static inline uint64_t CAVM_USBHX_UCTL_INTENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_INTENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000100048ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100048ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_INTENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_INTENA_W1S(a) cavm_usbhx_uctl_intena_w1s_t
#define bustype_CAVM_USBHX_UCTL_INTENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_INTENA_W1S(a) "USBHX_UCTL_INTENA_W1S"
#define device_bar_CAVM_USBHX_UCTL_INTENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_INTENA_W1S(a) (a)
#define arguments_CAVM_USBHX_UCTL_INTENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_intstat
 *
 * USB UCTL Interrupt Status Register
 * This register provides a summary of interrupts. DBEs are detected and
 * SBE are corrected. For debugging output for ECC DBEs/SBEs, see USBH()_UCTL_ECC. This
 * register can be reset by core domain reset.
 */
union cavm_usbhx_uctl_intstat
{
    uint64_t u;
    struct cavm_usbhx_uctl_intstat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t dma_rd_err            : 1;  /**< [  7:  7](R/W1C/H) Received DMA read response fault error from NCBO. */
        uint64_t dma_wr_err            : 1;  /**< [  6:  6](R/W1C/H) Received DMA write response fault error from NCBO. */
        uint64_t dma_psn               : 1;  /**< [  5:  5](R/W1C/H) Received DMA read response with poisoned data from NCBO. Hardware also sets
                                                                 USBH()_UCTL_RAS[DMA_PSN]. */
        uint64_t reserved_3_4          : 2;
        uint64_t xm_bad_dma            : 1;  /**< [  2:  2](R/W1C/H) Detected bad DMA access from UAHC to NCB. Error information is logged in
                                                                 USBH()_UCTL_SHIM_CFG[XM_BAD_DMA_*]. Received a DMA request from UAHC that violates the
                                                                 assumptions made by the AXI-to-NCB shim. Such scenarios include: illegal length/size
                                                                 combinations and address out-of-bounds.

                                                                 For more information on exact failures, see the description in
                                                                 USBH()_UCTL_SHIM_CFG[XM_BAD_DMA_TYPE]. The hardware does not translate the request
                                                                 correctly
                                                                 and results may violate NCB protocols. */
        uint64_t xs_ncb_oob            : 1;  /**< [  1:  1](R/W1C/H) Detected out-of-bound register access to UAHC over NCB. The UAHC defines 1 MB of register
                                                                 space, starting at offset 0x0. Any accesses outside of this register space cause this bit
                                                                 to be set to 1. Error information is logged in USBH()_UCTL_SHIM_CFG[XS_NCB_OOB_*]. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t xs_ncb_oob            : 1;  /**< [  1:  1](R/W1C/H) Detected out-of-bound register access to UAHC over NCB. The UAHC defines 1 MB of register
                                                                 space, starting at offset 0x0. Any accesses outside of this register space cause this bit
                                                                 to be set to 1. Error information is logged in USBH()_UCTL_SHIM_CFG[XS_NCB_OOB_*]. */
        uint64_t xm_bad_dma            : 1;  /**< [  2:  2](R/W1C/H) Detected bad DMA access from UAHC to NCB. Error information is logged in
                                                                 USBH()_UCTL_SHIM_CFG[XM_BAD_DMA_*]. Received a DMA request from UAHC that violates the
                                                                 assumptions made by the AXI-to-NCB shim. Such scenarios include: illegal length/size
                                                                 combinations and address out-of-bounds.

                                                                 For more information on exact failures, see the description in
                                                                 USBH()_UCTL_SHIM_CFG[XM_BAD_DMA_TYPE]. The hardware does not translate the request
                                                                 correctly
                                                                 and results may violate NCB protocols. */
        uint64_t reserved_3_4          : 2;
        uint64_t dma_psn               : 1;  /**< [  5:  5](R/W1C/H) Received DMA read response with poisoned data from NCBO. Hardware also sets
                                                                 USBH()_UCTL_RAS[DMA_PSN]. */
        uint64_t dma_wr_err            : 1;  /**< [  6:  6](R/W1C/H) Received DMA write response fault error from NCBO. */
        uint64_t dma_rd_err            : 1;  /**< [  7:  7](R/W1C/H) Received DMA read response fault error from NCBO. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_intstat_s cn; */
};
typedef union cavm_usbhx_uctl_intstat cavm_usbhx_uctl_intstat_t;

static inline uint64_t CAVM_USBHX_UCTL_INTSTAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_INTSTAT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000100030ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100030ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_INTSTAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_INTSTAT(a) cavm_usbhx_uctl_intstat_t
#define bustype_CAVM_USBHX_UCTL_INTSTAT(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_INTSTAT(a) "USBHX_UCTL_INTSTAT"
#define device_bar_CAVM_USBHX_UCTL_INTSTAT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_INTSTAT(a) (a)
#define arguments_CAVM_USBHX_UCTL_INTSTAT(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_intstat_w1s
 *
 * USB UCTL Interrupt Status Register
 * This register sets interrupt bits.
 */
union cavm_usbhx_uctl_intstat_w1s
{
    uint64_t u;
    struct cavm_usbhx_uctl_intstat_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t dma_rd_err            : 1;  /**< [  7:  7](R/W1S/H) Reads or sets USBH(0..1)_UCTL_INTSTAT[DMA_RD_ERR]. */
        uint64_t dma_wr_err            : 1;  /**< [  6:  6](R/W1S/H) Reads or sets USBH(0..1)_UCTL_INTSTAT[DMA_WR_ERR]. */
        uint64_t dma_psn               : 1;  /**< [  5:  5](R/W1S/H) Reads or sets USBH(0..1)_UCTL_INTSTAT[DMA_PSN]. */
        uint64_t reserved_3_4          : 2;
        uint64_t xm_bad_dma            : 1;  /**< [  2:  2](R/W1S/H) Reads or sets USBH(0..1)_UCTL_INTSTAT[XM_BAD_DMA]. */
        uint64_t xs_ncb_oob            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets USBH(0..1)_UCTL_INTSTAT[XS_NCB_OOB]. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t xs_ncb_oob            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets USBH(0..1)_UCTL_INTSTAT[XS_NCB_OOB]. */
        uint64_t xm_bad_dma            : 1;  /**< [  2:  2](R/W1S/H) Reads or sets USBH(0..1)_UCTL_INTSTAT[XM_BAD_DMA]. */
        uint64_t reserved_3_4          : 2;
        uint64_t dma_psn               : 1;  /**< [  5:  5](R/W1S/H) Reads or sets USBH(0..1)_UCTL_INTSTAT[DMA_PSN]. */
        uint64_t dma_wr_err            : 1;  /**< [  6:  6](R/W1S/H) Reads or sets USBH(0..1)_UCTL_INTSTAT[DMA_WR_ERR]. */
        uint64_t dma_rd_err            : 1;  /**< [  7:  7](R/W1S/H) Reads or sets USBH(0..1)_UCTL_INTSTAT[DMA_RD_ERR]. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_intstat_w1s_s cn; */
};
typedef union cavm_usbhx_uctl_intstat_w1s cavm_usbhx_uctl_intstat_w1s_t;

static inline uint64_t CAVM_USBHX_UCTL_INTSTAT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_INTSTAT_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000100038ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100038ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_INTSTAT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_INTSTAT_W1S(a) cavm_usbhx_uctl_intstat_w1s_t
#define bustype_CAVM_USBHX_UCTL_INTSTAT_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_INTSTAT_W1S(a) "USBHX_UCTL_INTSTAT_W1S"
#define device_bar_CAVM_USBHX_UCTL_INTSTAT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_INTSTAT_W1S(a) (a)
#define arguments_CAVM_USBHX_UCTL_INTSTAT_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_pipeclk_counter
 *
 * USB 3 Clock Counter Register
 * This register is accessible only when USBH()_UCTL_CTL[H_CLK_EN] = 1.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UCTL_RST].
 */
union cavm_usbhx_uctl_pipeclk_counter
{
    uint64_t u;
    struct cavm_usbhx_uctl_pipeclk_counter_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t counter               : 64; /**< [ 63:  0](R/W) USB 3.1 free running clock counter. Increments each edge of the USB 3.1 reference clock. */
#else /* Word 0 - Little Endian */
        uint64_t counter               : 64; /**< [ 63:  0](R/W) USB 3.1 free running clock counter. Increments each edge of the USB 3.1 reference clock. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_pipeclk_counter_s cn; */
};
typedef union cavm_usbhx_uctl_pipeclk_counter cavm_usbhx_uctl_pipeclk_counter_t;

static inline uint64_t CAVM_USBHX_UCTL_PIPECLK_COUNTER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_PIPECLK_COUNTER(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000100020ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100020ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_PIPECLK_COUNTER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_PIPECLK_COUNTER(a) cavm_usbhx_uctl_pipeclk_counter_t
#define bustype_CAVM_USBHX_UCTL_PIPECLK_COUNTER(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_PIPECLK_COUNTER(a) "USBHX_UCTL_PIPECLK_COUNTER"
#define device_bar_CAVM_USBHX_UCTL_PIPECLK_COUNTER(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_PIPECLK_COUNTER(a) (a)
#define arguments_CAVM_USBHX_UCTL_PIPECLK_COUNTER(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_port#_cfg_hs
 *
 * USB UCTL Port Configuration High-Speed Register
 * This register controls configuration and test controls for the HS port 0 PHY.
 *
 * This register is accessible only when USBH()_UCTL_CTL[H_CLK_EN] = 1.
 *
 * This register can be reset by core domain reset.
 */
union cavm_usbhx_uctl_portx_cfg_hs
{
    uint64_t u;
    struct cavm_usbhx_uctl_portx_cfg_hs_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t comp_dis_tune         : 3;  /**< [ 57: 55](R/W) Disconnect threshold voltage. Adjusts the voltage level for the threshold used to detect a
                                                                 disconnect event at the host.
                                                                 A positive binary bit setting change results in a +1.5% incremental change in the
                                                                 threshold voltage level, while a negative binary bit setting change results in a -1.5%
                                                                 incremental change in the threshold voltage level. */
        uint64_t sq_rx_tune            : 3;  /**< [ 54: 52](R/W) Squelch threshold adjustment. Adjusts the voltage level for the threshold used to detect
                                                                 valid high-speed data.
                                                                 A positive binary bit setting change results in a -5% incremental change in threshold
                                                                 voltage level, while a negative binary bit setting change results in a +5% incremental
                                                                 change in threshold voltage level. */
        uint64_t tx_fsls_tune          : 4;  /**< [ 51: 48](R/W) Low-speed/full-speed source impedance adjustment. Adjusts the low- and full-speed single-
                                                                 ended source impedance while driving high. This parameter control is encoded in
                                                                 thermometer code.
                                                                 A positive thermometer code change results in a -2.5% incremental change in source
                                                                 impedance. A negative thermometer code change results in +2.5% incremental change in
                                                                 source impedance. Any non-thermometer code setting (that is, 0x9) is not supported and
                                                                 reserved. */
        uint64_t reserved_46_47        : 2;
        uint64_t tx_hs_xv_tune         : 2;  /**< [ 45: 44](R/W) Transmitter high-speed crossover adjustment. This bus adjusts the voltage at which the DP0
                                                                 and DM0 signals cross while transmitting in high-speed mode.
                                                                 0x3 = default setting.
                                                                 0x2 = +15 mV.
                                                                 0x1 = -15 mV.
                                                                 0x0 = reserved. */
        uint64_t tx_preemp_amp_tune    : 2;  /**< [ 43: 42](R/W) High-speed transmitter preemphasis current control. Controls the amount of current
                                                                 sourced to DP0 and DM0 after a J-to-K or K-to-J transition. The high-speed transmitter
                                                                 preemphasis current is defined in terms of unit amounts. One unit amount is approximately
                                                                 600 A and is defined as 1* preemphasis current.
                                                                 0x0 = High-speed TX preemphasis is disabled.
                                                                 0x1 = High-speed TX preemphasis circuit sources 1* preemphasis current.
                                                                 0x2 = High-speed TX preemphasis circuit sources 2* preemphasis current.
                                                                 0x3 = High-speed TX preemphasis circuit sources 3* preemphasis current.

                                                                 If these signals are not used, set them to 0x0. */
        uint64_t reserved_41           : 1;
        uint64_t tx_preemp_pulse_tune  : 1;  /**< [ 40: 40](R/W) High-speed transmitter preemphasis duration control. Controls the duration for which the
                                                                 high-speed preemphasis current is sourced onto DP0 or DM0. The high-speed transmitter
                                                                 preemphasis duration is defined in terms of unit amounts. One unit of preemphasis duration
                                                                 is approximately 580 ps and is defined as 1* preemphasis duration. This signal is valid
                                                                 only if either TX_PREEMP_AMP_TUNE0[1] or TX_PREEMP_AMP_TUNE0[0] is set to 1.
                                                                 0 = 2*, long preemphasis current duration (design default).
                                                                 1 = 1*, short preemphasis current duration.

                                                                 If this signal is not used, set it to 0. */
        uint64_t tx_res_tune           : 2;  /**< [ 39: 38](R/W) USB source-impedance adjustment. Some applications require additional devices to be added
                                                                 on the USB, such as a series switch, which can add significant series resistance. This bus
                                                                 adjusts the driver source impedance to compensate for added series resistance on the USB.
                                                                 0x0 = source impedance is decreased by approximately 1.5 ohm.
                                                                 0x1 = design default.
                                                                 0x2 = source impedance is decreased by approximately 2 ohm.
                                                                 0x3 = source impedance is decreased by approximately 4 ohm.

                                                                 Any setting other than the default can result in source-impedance variation across
                                                                 process, voltage, and temperature conditions that does not meet USB 2.0 specification
                                                                 limits. If this bus is not used, leave it at the default setting. */
        uint64_t tx_rise_tune          : 2;  /**< [ 37: 36](R/W) High-speed transmitter rise-/fall-time adjustment. Adjusts the rise/fall times of the
                                                                 high-speed waveform. A positive binary bit setting change results in a -4% incremental
                                                                 change in the high-speed rise/fall time. A negative binary bit setting change results in a
                                                                 +4% incremental change in the high-speed rise/fall time. */
        uint64_t tx_vref_tune          : 4;  /**< [ 35: 32](R/W) High-speed DC voltage-level adjustment. Adjusts the high-speed DC level voltage.
                                                                 A positive binary-bit-setting change results in a +1.25% incremental change in high-speed
                                                                 DC voltage level, while a negative binary-bit-setting change results in a -1.25%
                                                                 incremental change in high-speed DC voltage level.

                                                                 The default bit setting is intended to create a high-speed transmit
                                                                 DC level of approximately 400mV. */
        uint64_t reserved_7_31         : 25;
        uint64_t otgtune               : 3;  /**< [  6:  4](R/W) "VBUS valid threshold adjustment.
                                                                 This bus adjusts the voltage level for the VBUS\<#\>
                                                                 valid threshold. To enable tuning at the board level, connect this
                                                                 bus to a register.
                                                                 Note: A positive binary bit setting change results in a +3%
                                                                 incremental change in threshold voltage level, while a negative
                                                                 binary bit setting change results in a -3% incremental change
                                                                 in threshold voltage level. " */
        uint64_t vatest_enable         : 1;  /**< [  3:  3](R/W) Analog test-pin select. Enables analog test voltages to be placed on the ID0 pin.
                                                                 0x0 = Test functionality disabled.
                                                                 0x1 = Test functionality enabled.
                                                                 0x2, 0x3 = Reserved, invalid settings.

                                                                 See also the PHY databook for details on how to select which analog test voltage. */
        uint64_t reserved_2            : 1;
        uint64_t loopback_enable       : 1;  /**< [  1:  1](R/W) Places the high-speed PHY in loopback mode, which concurrently enables high-speed receive
                                                                 and transmit logic. */
        uint64_t atereset              : 1;  /**< [  0:  0](R/W) Per-PHY ATE reset. When the USB core is powered up (not in suspend mode), an automatic
                                                                 tester can use this to disable PHYCLOCK and FREECLK, then re-enable them with an aligned
                                                                 phase.
                                                                 0 = PHYCLOCK and FREECLK are available within a specific period after ATERESET is
                                                                 deasserted.
                                                                 1 = PHYCLOCK and FREECLK outputs are disabled. */
#else /* Word 0 - Little Endian */
        uint64_t atereset              : 1;  /**< [  0:  0](R/W) Per-PHY ATE reset. When the USB core is powered up (not in suspend mode), an automatic
                                                                 tester can use this to disable PHYCLOCK and FREECLK, then re-enable them with an aligned
                                                                 phase.
                                                                 0 = PHYCLOCK and FREECLK are available within a specific period after ATERESET is
                                                                 deasserted.
                                                                 1 = PHYCLOCK and FREECLK outputs are disabled. */
        uint64_t loopback_enable       : 1;  /**< [  1:  1](R/W) Places the high-speed PHY in loopback mode, which concurrently enables high-speed receive
                                                                 and transmit logic. */
        uint64_t reserved_2            : 1;
        uint64_t vatest_enable         : 1;  /**< [  3:  3](R/W) Analog test-pin select. Enables analog test voltages to be placed on the ID0 pin.
                                                                 0x0 = Test functionality disabled.
                                                                 0x1 = Test functionality enabled.
                                                                 0x2, 0x3 = Reserved, invalid settings.

                                                                 See also the PHY databook for details on how to select which analog test voltage. */
        uint64_t otgtune               : 3;  /**< [  6:  4](R/W) "VBUS valid threshold adjustment.
                                                                 This bus adjusts the voltage level for the VBUS\<#\>
                                                                 valid threshold. To enable tuning at the board level, connect this
                                                                 bus to a register.
                                                                 Note: A positive binary bit setting change results in a +3%
                                                                 incremental change in threshold voltage level, while a negative
                                                                 binary bit setting change results in a -3% incremental change
                                                                 in threshold voltage level. " */
        uint64_t reserved_7_31         : 25;
        uint64_t tx_vref_tune          : 4;  /**< [ 35: 32](R/W) High-speed DC voltage-level adjustment. Adjusts the high-speed DC level voltage.
                                                                 A positive binary-bit-setting change results in a +1.25% incremental change in high-speed
                                                                 DC voltage level, while a negative binary-bit-setting change results in a -1.25%
                                                                 incremental change in high-speed DC voltage level.

                                                                 The default bit setting is intended to create a high-speed transmit
                                                                 DC level of approximately 400mV. */
        uint64_t tx_rise_tune          : 2;  /**< [ 37: 36](R/W) High-speed transmitter rise-/fall-time adjustment. Adjusts the rise/fall times of the
                                                                 high-speed waveform. A positive binary bit setting change results in a -4% incremental
                                                                 change in the high-speed rise/fall time. A negative binary bit setting change results in a
                                                                 +4% incremental change in the high-speed rise/fall time. */
        uint64_t tx_res_tune           : 2;  /**< [ 39: 38](R/W) USB source-impedance adjustment. Some applications require additional devices to be added
                                                                 on the USB, such as a series switch, which can add significant series resistance. This bus
                                                                 adjusts the driver source impedance to compensate for added series resistance on the USB.
                                                                 0x0 = source impedance is decreased by approximately 1.5 ohm.
                                                                 0x1 = design default.
                                                                 0x2 = source impedance is decreased by approximately 2 ohm.
                                                                 0x3 = source impedance is decreased by approximately 4 ohm.

                                                                 Any setting other than the default can result in source-impedance variation across
                                                                 process, voltage, and temperature conditions that does not meet USB 2.0 specification
                                                                 limits. If this bus is not used, leave it at the default setting. */
        uint64_t tx_preemp_pulse_tune  : 1;  /**< [ 40: 40](R/W) High-speed transmitter preemphasis duration control. Controls the duration for which the
                                                                 high-speed preemphasis current is sourced onto DP0 or DM0. The high-speed transmitter
                                                                 preemphasis duration is defined in terms of unit amounts. One unit of preemphasis duration
                                                                 is approximately 580 ps and is defined as 1* preemphasis duration. This signal is valid
                                                                 only if either TX_PREEMP_AMP_TUNE0[1] or TX_PREEMP_AMP_TUNE0[0] is set to 1.
                                                                 0 = 2*, long preemphasis current duration (design default).
                                                                 1 = 1*, short preemphasis current duration.

                                                                 If this signal is not used, set it to 0. */
        uint64_t reserved_41           : 1;
        uint64_t tx_preemp_amp_tune    : 2;  /**< [ 43: 42](R/W) High-speed transmitter preemphasis current control. Controls the amount of current
                                                                 sourced to DP0 and DM0 after a J-to-K or K-to-J transition. The high-speed transmitter
                                                                 preemphasis current is defined in terms of unit amounts. One unit amount is approximately
                                                                 600 A and is defined as 1* preemphasis current.
                                                                 0x0 = High-speed TX preemphasis is disabled.
                                                                 0x1 = High-speed TX preemphasis circuit sources 1* preemphasis current.
                                                                 0x2 = High-speed TX preemphasis circuit sources 2* preemphasis current.
                                                                 0x3 = High-speed TX preemphasis circuit sources 3* preemphasis current.

                                                                 If these signals are not used, set them to 0x0. */
        uint64_t tx_hs_xv_tune         : 2;  /**< [ 45: 44](R/W) Transmitter high-speed crossover adjustment. This bus adjusts the voltage at which the DP0
                                                                 and DM0 signals cross while transmitting in high-speed mode.
                                                                 0x3 = default setting.
                                                                 0x2 = +15 mV.
                                                                 0x1 = -15 mV.
                                                                 0x0 = reserved. */
        uint64_t reserved_46_47        : 2;
        uint64_t tx_fsls_tune          : 4;  /**< [ 51: 48](R/W) Low-speed/full-speed source impedance adjustment. Adjusts the low- and full-speed single-
                                                                 ended source impedance while driving high. This parameter control is encoded in
                                                                 thermometer code.
                                                                 A positive thermometer code change results in a -2.5% incremental change in source
                                                                 impedance. A negative thermometer code change results in +2.5% incremental change in
                                                                 source impedance. Any non-thermometer code setting (that is, 0x9) is not supported and
                                                                 reserved. */
        uint64_t sq_rx_tune            : 3;  /**< [ 54: 52](R/W) Squelch threshold adjustment. Adjusts the voltage level for the threshold used to detect
                                                                 valid high-speed data.
                                                                 A positive binary bit setting change results in a -5% incremental change in threshold
                                                                 voltage level, while a negative binary bit setting change results in a +5% incremental
                                                                 change in threshold voltage level. */
        uint64_t comp_dis_tune         : 3;  /**< [ 57: 55](R/W) Disconnect threshold voltage. Adjusts the voltage level for the threshold used to detect a
                                                                 disconnect event at the host.
                                                                 A positive binary bit setting change results in a +1.5% incremental change in the
                                                                 threshold voltage level, while a negative binary bit setting change results in a -1.5%
                                                                 incremental change in the threshold voltage level. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_portx_cfg_hs_s cn; */
};
typedef union cavm_usbhx_uctl_portx_cfg_hs cavm_usbhx_uctl_portx_cfg_hs_t;

static inline uint64_t CAVM_USBHX_UCTL_PORTX_CFG_HS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_PORTX_CFG_HS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b==0)))
        return 0x868000100050ll + 0x1000000000ll * ((a) & 0x1) + 0x20ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b==0)))
        return 0x868000100050ll + 0x1000000000ll * ((a) & 0x1) + 0x20ll * ((b) & 0x0);
    __cavm_csr_fatal("USBHX_UCTL_PORTX_CFG_HS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_PORTX_CFG_HS(a,b) cavm_usbhx_uctl_portx_cfg_hs_t
#define bustype_CAVM_USBHX_UCTL_PORTX_CFG_HS(a,b) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_PORTX_CFG_HS(a,b) "USBHX_UCTL_PORTX_CFG_HS"
#define device_bar_CAVM_USBHX_UCTL_PORTX_CFG_HS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_PORTX_CFG_HS(a,b) (a)
#define arguments_CAVM_USBHX_UCTL_PORTX_CFG_HS(a,b) (a),(b),-1,-1

/**
 * Register (NCB) usbh#_uctl_port#_cfg_ss_pls
 *
 * USB UCTL Port Configuration SuperSpeedPlus Register
 * This register controls configuration and test controls for the SS port 0 PHY.
 *
 * This register is accessible only when USBH()_UCTL_CTL[H_CLK_EN] = 1.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UCTL_RST].
 */
union cavm_usbhx_uctl_portx_cfg_ss_pls
{
    uint64_t u;
    struct cavm_usbhx_uctl_portx_cfg_ss_pls_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t tx_vboost_lvl         : 3;  /**< [ 63: 61](R/W) TX voltage-boost level. Sets the boosted transmit launch amplitude (mVppd).
                                                                 0x5 = 1.00 V launch amplitude.
                                                                 Synopsys recommends not setting value any other than 0x5. */
        uint64_t los_bias              : 3;  /**< [ 60: 58](R/W) Loss-of-signal detector threshold-level control. A positive, binary bit setting change
                                                                 results in a +15 mVp incremental change in the LOS threshold.
                                                                 A negative binary bit setting change results in a -15 mVp incremental change in the LOS
                                                                 threshold. The 0x0 setting is reserved and must not be used. The default 0x5 setting
                                                                 corresponds to approximately 105 mVp.
                                                                 0x0 = invalid.
                                                                 0x1 = 45 mV.
                                                                 0x2 = 60 mV.
                                                                 0x3 = 75 mV.
                                                                 0x4 = 90 mV.
                                                                 0x5 = 105 mV (default).
                                                                 0x6 = 120 mV.
                                                                 0x7 = 135 mV. */
        uint64_t lane0_ext_pclk_req    : 1;  /**< [ 57: 57](R/W) When asserted, this signal enables the pipe0_pclk output regardless of power state (along
                                                                 with the associated increase in power consumption). You can use this input to enable
                                                                 pipe0_pclk in the P3 state without going through a complete boot sequence. */
        uint64_t piep_lane0_tx2rx_loopbk : 1;/**< [ 56: 56](R/W) When asserted, data from TX predriver is looped back to RX slicers. LOS is bypassed and
                                                                 based on the tx0_en input so that rx0_los = !tx_data_en. */
        uint64_t pipe_rx0_cmn_reflk_mode : 1;/**< [ 55: 55](R/W) This mode should be enabled only when the far-end and near-end devices are running
                                                                 with a common reference clock.When asserted,this input configures the elastic buffer
                                                                 to operate in the lowest latency mode.
                                                                 Note:SKP symbol manipulation is disabled in this mode, because SKP symbol manipulation
                                                                 is not needed when the reference clock is common between near-end and far-end (that is,
                                                                 local clock and recovered clock have the same frequency).
                                                                 Any change to this input must be followed by phy_reset assertion. */
        uint64_t pipe_rx_cdr_legacy_en : 1;  /**< [ 54: 54](R/W) This control signal selects between legacy mode CDR logic and the
                                                                 new implementation. */
        uint64_t pipe_rx_recal_cont_en : 1;  /**< [ 53: 53](R/W) This pin (pcs_rxX_recal_cont_en) enables re-locking when alignment
                                                                 is lost in non-8B10 mode. */
        uint64_t phy0_mplla_force_en   : 1;  /**< [ 52: 52](R/W) This signal is combined with internal PCS logic to drive phyN_mplla_force_en_ovrd,
                                                                 which connects to the mplla_force_en signal on PHYN.The PCS overrides the PHY
                                                                 signal high in PHY aggregation cases to ensure that the master clock source remains
                                                                 operational for the entire link when in Mission mode. */
        uint64_t phy0_mplla_ssc_en     : 1;  /**< [ 51: 51](R/W) Enable spread spectrum clock generation on mplla_div_clk output.If the reference
                                                                 clock has already applied spread spectrum then this bit should be 0.Ca nbe changed only when
                                                                 all txX_mplla_en are de-asserted. */
        uint64_t phy_res_req_en        : 1;  /**< [ 50: 50](R/W) Arbitration lines for sharing single resistor among multiple ores that are connected to
                                                                 single set of pads. */
        uint64_t phy_lane0_rx2tx_par_lb_en : 1;/**< [ 49: 49](R/W) Parallel loopback enable. */
        uint64_t upcs_pipe_config      : 1;  /**< [ 48: 48](R/W) When upcs_pipe_config[0] is set to 1, the PCS ignores lane-off via PIPE specification
                                                                 method (TxElecIdle = 1 and TxCompliance = 1) and responds to power-down/rate/width changes.
                                                                 Otherwise, until the MAC deasserts the "turned off" signaling, the PCS ignores any commands
                                                                 to change power-down/rate/width after being turned off.Any change to this input must be
                                                                 followed by phy_reset assertion. */
        uint64_t reserved_42_47        : 6;
        uint64_t pcs_rx_los_mask_val   : 10; /**< [ 41: 32](R/W) Configurable loss-of-signal mask width. Sets the number of reference clock cycles to mask
                                                                 the incoming LFPS in U3 and U2 states. Masks the incoming LFPS for the number of reference
                                                                 clock cycles equal to the value of pcs_rx_los_mask_val\<9:0\>. This control filters out
                                                                 short, non-compliant LFPS glitches sent by a noncompliant host.

                                                                 For normal operation, set to a targeted mask interval of 10us (value = 10us / Tref_clk).
                                                                 If the USBH()_UCTL_CTL[REF_CLK_DIV2] is used, then
                                                                 (value = 10us / (2 * Tref_clk)). These equations are based on the SuperSpeedPlus reference
                                                                 clock frequency. The value of [PCS_RX_LOS_MASK_VAL] should be as follows:

                                                                 \<pre\>
                                                                      Frequency   DIV2  LOS_MASK
                                                                      ---------    ---  --------
                                                                      200   MHz      1     0x3E8
                                                                      125   MHz      0     0x4E2
                                                                      104   MHz      0     0x410
                                                                      100   MHz      0     0x3E8
                                                                       96   MHz      0     0x3C0
                                                                       76.8 MHz      1     0x180
                                                                       52   MHz      0     0x208
                                                                       50   MHz      0     0x1F4
                                                                       48   MHz      0     0x1E0
                                                                       40   MHz      1     0x0C8
                                                                       38.4 MHz      0     0x180
                                                                       26   MHz      0     0x104
                                                                       25   MHz      0     0x0FA
                                                                       24   MHz      0     0x0F0
                                                                       20   MHz      0     0x0C8
                                                                       19.2 MHz      0     0x0C0
                                                                 \</pre\>

                                                                 Setting this bus to 0x0 disables masking. The value should be defined when the PHY is in
                                                                 reset. Changing this value during operation might disrupt normal operation of the link. */
        uint64_t pcs_tx_deemph_3p1db   : 6;  /**< [ 31: 26](R/W) Fine-tune transmitter driver deemphasis when set to 3.1db.
                                                                 This static value sets the TX driver deemphasis value when
                                                                 USBH()_UAHC_GUSB3PIPECTL()[TXDEEMPHASIS] is set to
                                                                 0x1 (according to the PIPE3 specification). The values for transmit deemphasis are derived
                                                                 from the following equation:

                                                                 _ TX deemphasis (db) = 20 * log_base_10((128 - 2 * pcs_tx_deemph)/128)

                                                                 In general, the parameter controls are static signals to be set prior to taking the PHY
                                                                 out of reset. However, you can dynamically change these values on-the-fly for test
                                                                 purposes. In this case, changes to the transmitter to reflect the current value occur only
                                                                 after USBH()_UAHC_GUSB3PIPECTL()[TXDEEMPHASIS] changes. */
        uint64_t pcs_tx_deemph_6db     : 6;  /**< [ 25: 20](R/W) Fine-tune transmitter driver deemphasis when set to 6 db.
                                                                 This static value sets the TX driver deemphasis value when
                                                                 USBH()_UAHC_GUSB3PIPECTL()[TXDEEMPHASIS]  is set to
                                                                 0x0 (according to the PIPE3 specification). This bus is provided for completeness and as a
                                                                 second potential launch amplitude. The values for transmit deemphasis are derived from the
                                                                 following equation:

                                                                 _ TX deemphasis (db) = 20 * log_base_10((128 - 2 * pcs_tx_deemph)/128)

                                                                 In general, the parameter controls are static signals to be set prior to taking the PHY
                                                                 out of reset. However, you can dynamically change these values on-the-fly for test
                                                                 purposes. In this case, changes to the transmitter to reflect the current value occur only
                                                                 after USBH()_UAHC_GUSB3PIPECTL()[TXDEEMPHASIS] changes. */
        uint64_t pcs_tx_swing_full     : 7;  /**< [ 19: 13](R/W) Launch amplitude of the transmitter. Sets the launch amplitude of the transmitter. The
                                                                 values for transmit amplitude are derived from the following equation:
                                                                 TX amplitude (V) = vptx * ((pcs_tx_swing_full + 1)/128)

                                                                 In general, the parameter controls are static signals to be set prior to taking the PHY
                                                                 out of reset. However, you can dynamically change these values on-the-fly for test
                                                                 purposes. In this case, changes to the transmitter to reflect the current value occur only
                                                                 after USBH()_UAHC_GUSB3PIPECTL()[TXDEEMPHASIS] changes. */
        uint64_t lane0_tx_term_offset  : 5;  /**< [ 12:  8](R/W) Transmitter termination offset. Reserved, set to 0x0. */
        uint64_t reserved_6_7          : 2;
        uint64_t res_tune_ack          : 1;  /**< [  5:  5](RO/H) Resistor tune acknowledge. While asserted, indicates a resistor tune is in progress. */
        uint64_t res_tune_req          : 1;  /**< [  4:  4](R/W) Resistor tune request. The rising edge triggers a resistor tune request (if one is not
                                                                 already in progress). When asserted, [RES_TUNE_ACK] is asserted high until calibration of
                                                                 the termination impedance is complete.
                                                                 Tuning disrupts the normal flow of data; therefore, assert [RES_TUNE_REQ] only when the
                                                                 PHY
                                                                 is inactive. The PHY automatically performs a tune when coming out of PRST. */
        uint64_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_3          : 4;
        uint64_t res_tune_req          : 1;  /**< [  4:  4](R/W) Resistor tune request. The rising edge triggers a resistor tune request (if one is not
                                                                 already in progress). When asserted, [RES_TUNE_ACK] is asserted high until calibration of
                                                                 the termination impedance is complete.
                                                                 Tuning disrupts the normal flow of data; therefore, assert [RES_TUNE_REQ] only when the
                                                                 PHY
                                                                 is inactive. The PHY automatically performs a tune when coming out of PRST. */
        uint64_t res_tune_ack          : 1;  /**< [  5:  5](RO/H) Resistor tune acknowledge. While asserted, indicates a resistor tune is in progress. */
        uint64_t reserved_6_7          : 2;
        uint64_t lane0_tx_term_offset  : 5;  /**< [ 12:  8](R/W) Transmitter termination offset. Reserved, set to 0x0. */
        uint64_t pcs_tx_swing_full     : 7;  /**< [ 19: 13](R/W) Launch amplitude of the transmitter. Sets the launch amplitude of the transmitter. The
                                                                 values for transmit amplitude are derived from the following equation:
                                                                 TX amplitude (V) = vptx * ((pcs_tx_swing_full + 1)/128)

                                                                 In general, the parameter controls are static signals to be set prior to taking the PHY
                                                                 out of reset. However, you can dynamically change these values on-the-fly for test
                                                                 purposes. In this case, changes to the transmitter to reflect the current value occur only
                                                                 after USBH()_UAHC_GUSB3PIPECTL()[TXDEEMPHASIS] changes. */
        uint64_t pcs_tx_deemph_6db     : 6;  /**< [ 25: 20](R/W) Fine-tune transmitter driver deemphasis when set to 6 db.
                                                                 This static value sets the TX driver deemphasis value when
                                                                 USBH()_UAHC_GUSB3PIPECTL()[TXDEEMPHASIS]  is set to
                                                                 0x0 (according to the PIPE3 specification). This bus is provided for completeness and as a
                                                                 second potential launch amplitude. The values for transmit deemphasis are derived from the
                                                                 following equation:

                                                                 _ TX deemphasis (db) = 20 * log_base_10((128 - 2 * pcs_tx_deemph)/128)

                                                                 In general, the parameter controls are static signals to be set prior to taking the PHY
                                                                 out of reset. However, you can dynamically change these values on-the-fly for test
                                                                 purposes. In this case, changes to the transmitter to reflect the current value occur only
                                                                 after USBH()_UAHC_GUSB3PIPECTL()[TXDEEMPHASIS] changes. */
        uint64_t pcs_tx_deemph_3p1db   : 6;  /**< [ 31: 26](R/W) Fine-tune transmitter driver deemphasis when set to 3.1db.
                                                                 This static value sets the TX driver deemphasis value when
                                                                 USBH()_UAHC_GUSB3PIPECTL()[TXDEEMPHASIS] is set to
                                                                 0x1 (according to the PIPE3 specification). The values for transmit deemphasis are derived
                                                                 from the following equation:

                                                                 _ TX deemphasis (db) = 20 * log_base_10((128 - 2 * pcs_tx_deemph)/128)

                                                                 In general, the parameter controls are static signals to be set prior to taking the PHY
                                                                 out of reset. However, you can dynamically change these values on-the-fly for test
                                                                 purposes. In this case, changes to the transmitter to reflect the current value occur only
                                                                 after USBH()_UAHC_GUSB3PIPECTL()[TXDEEMPHASIS] changes. */
        uint64_t pcs_rx_los_mask_val   : 10; /**< [ 41: 32](R/W) Configurable loss-of-signal mask width. Sets the number of reference clock cycles to mask
                                                                 the incoming LFPS in U3 and U2 states. Masks the incoming LFPS for the number of reference
                                                                 clock cycles equal to the value of pcs_rx_los_mask_val\<9:0\>. This control filters out
                                                                 short, non-compliant LFPS glitches sent by a noncompliant host.

                                                                 For normal operation, set to a targeted mask interval of 10us (value = 10us / Tref_clk).
                                                                 If the USBH()_UCTL_CTL[REF_CLK_DIV2] is used, then
                                                                 (value = 10us / (2 * Tref_clk)). These equations are based on the SuperSpeedPlus reference
                                                                 clock frequency. The value of [PCS_RX_LOS_MASK_VAL] should be as follows:

                                                                 \<pre\>
                                                                      Frequency   DIV2  LOS_MASK
                                                                      ---------    ---  --------
                                                                      200   MHz      1     0x3E8
                                                                      125   MHz      0     0x4E2
                                                                      104   MHz      0     0x410
                                                                      100   MHz      0     0x3E8
                                                                       96   MHz      0     0x3C0
                                                                       76.8 MHz      1     0x180
                                                                       52   MHz      0     0x208
                                                                       50   MHz      0     0x1F4
                                                                       48   MHz      0     0x1E0
                                                                       40   MHz      1     0x0C8
                                                                       38.4 MHz      0     0x180
                                                                       26   MHz      0     0x104
                                                                       25   MHz      0     0x0FA
                                                                       24   MHz      0     0x0F0
                                                                       20   MHz      0     0x0C8
                                                                       19.2 MHz      0     0x0C0
                                                                 \</pre\>

                                                                 Setting this bus to 0x0 disables masking. The value should be defined when the PHY is in
                                                                 reset. Changing this value during operation might disrupt normal operation of the link. */
        uint64_t reserved_42_47        : 6;
        uint64_t upcs_pipe_config      : 1;  /**< [ 48: 48](R/W) When upcs_pipe_config[0] is set to 1, the PCS ignores lane-off via PIPE specification
                                                                 method (TxElecIdle = 1 and TxCompliance = 1) and responds to power-down/rate/width changes.
                                                                 Otherwise, until the MAC deasserts the "turned off" signaling, the PCS ignores any commands
                                                                 to change power-down/rate/width after being turned off.Any change to this input must be
                                                                 followed by phy_reset assertion. */
        uint64_t phy_lane0_rx2tx_par_lb_en : 1;/**< [ 49: 49](R/W) Parallel loopback enable. */
        uint64_t phy_res_req_en        : 1;  /**< [ 50: 50](R/W) Arbitration lines for sharing single resistor among multiple ores that are connected to
                                                                 single set of pads. */
        uint64_t phy0_mplla_ssc_en     : 1;  /**< [ 51: 51](R/W) Enable spread spectrum clock generation on mplla_div_clk output.If the reference
                                                                 clock has already applied spread spectrum then this bit should be 0.Ca nbe changed only when
                                                                 all txX_mplla_en are de-asserted. */
        uint64_t phy0_mplla_force_en   : 1;  /**< [ 52: 52](R/W) This signal is combined with internal PCS logic to drive phyN_mplla_force_en_ovrd,
                                                                 which connects to the mplla_force_en signal on PHYN.The PCS overrides the PHY
                                                                 signal high in PHY aggregation cases to ensure that the master clock source remains
                                                                 operational for the entire link when in Mission mode. */
        uint64_t pipe_rx_recal_cont_en : 1;  /**< [ 53: 53](R/W) This pin (pcs_rxX_recal_cont_en) enables re-locking when alignment
                                                                 is lost in non-8B10 mode. */
        uint64_t pipe_rx_cdr_legacy_en : 1;  /**< [ 54: 54](R/W) This control signal selects between legacy mode CDR logic and the
                                                                 new implementation. */
        uint64_t pipe_rx0_cmn_reflk_mode : 1;/**< [ 55: 55](R/W) This mode should be enabled only when the far-end and near-end devices are running
                                                                 with a common reference clock.When asserted,this input configures the elastic buffer
                                                                 to operate in the lowest latency mode.
                                                                 Note:SKP symbol manipulation is disabled in this mode, because SKP symbol manipulation
                                                                 is not needed when the reference clock is common between near-end and far-end (that is,
                                                                 local clock and recovered clock have the same frequency).
                                                                 Any change to this input must be followed by phy_reset assertion. */
        uint64_t piep_lane0_tx2rx_loopbk : 1;/**< [ 56: 56](R/W) When asserted, data from TX predriver is looped back to RX slicers. LOS is bypassed and
                                                                 based on the tx0_en input so that rx0_los = !tx_data_en. */
        uint64_t lane0_ext_pclk_req    : 1;  /**< [ 57: 57](R/W) When asserted, this signal enables the pipe0_pclk output regardless of power state (along
                                                                 with the associated increase in power consumption). You can use this input to enable
                                                                 pipe0_pclk in the P3 state without going through a complete boot sequence. */
        uint64_t los_bias              : 3;  /**< [ 60: 58](R/W) Loss-of-signal detector threshold-level control. A positive, binary bit setting change
                                                                 results in a +15 mVp incremental change in the LOS threshold.
                                                                 A negative binary bit setting change results in a -15 mVp incremental change in the LOS
                                                                 threshold. The 0x0 setting is reserved and must not be used. The default 0x5 setting
                                                                 corresponds to approximately 105 mVp.
                                                                 0x0 = invalid.
                                                                 0x1 = 45 mV.
                                                                 0x2 = 60 mV.
                                                                 0x3 = 75 mV.
                                                                 0x4 = 90 mV.
                                                                 0x5 = 105 mV (default).
                                                                 0x6 = 120 mV.
                                                                 0x7 = 135 mV. */
        uint64_t tx_vboost_lvl         : 3;  /**< [ 63: 61](R/W) TX voltage-boost level. Sets the boosted transmit launch amplitude (mVppd).
                                                                 0x5 = 1.00 V launch amplitude.
                                                                 Synopsys recommends not setting value any other than 0x5. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_portx_cfg_ss_pls_s cn; */
};
typedef union cavm_usbhx_uctl_portx_cfg_ss_pls cavm_usbhx_uctl_portx_cfg_ss_pls_t;

static inline uint64_t CAVM_USBHX_UCTL_PORTX_CFG_SS_PLS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_PORTX_CFG_SS_PLS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b==0)))
        return 0x868000100058ll + 0x1000000000ll * ((a) & 0x1) + 0x20ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b==0)))
        return 0x868000100058ll + 0x1000000000ll * ((a) & 0x1) + 0x20ll * ((b) & 0x0);
    __cavm_csr_fatal("USBHX_UCTL_PORTX_CFG_SS_PLS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_PORTX_CFG_SS_PLS(a,b) cavm_usbhx_uctl_portx_cfg_ss_pls_t
#define bustype_CAVM_USBHX_UCTL_PORTX_CFG_SS_PLS(a,b) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_PORTX_CFG_SS_PLS(a,b) "USBHX_UCTL_PORTX_CFG_SS_PLS"
#define device_bar_CAVM_USBHX_UCTL_PORTX_CFG_SS_PLS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_PORTX_CFG_SS_PLS(a,b) (a)
#define arguments_CAVM_USBHX_UCTL_PORTX_CFG_SS_PLS(a,b) (a),(b),-1,-1

/**
 * Register (NCB) usbh#_uctl_port#_cr_dbg_cfg
 *
 * USB UCTL Port Debug Configuration Register
 * This register allows indirect access to the configuration and test controls for the port 0
 * PHY.
 *
 * This register is accessible only when USBH()_UCTL_CTL[H_CLK_EN] = 1.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UCTL_RST].
 */
union cavm_usbhx_uctl_portx_cr_dbg_cfg
{
    uint64_t u;
    struct cavm_usbhx_uctl_portx_cr_dbg_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t data_in               : 16; /**< [ 47: 32](R/W) Address or data to be written to the CR interface. */
        uint64_t reserved_24_31        : 8;
        uint64_t eusb2phy_cr_addr_in   : 16; /**< [ 23:  8](R/W) EUSB2PHY CR/APB Address IN */
        uint64_t reserved_5_7          : 3;
        uint64_t eusb2phy_cr_mode      : 1;  /**< [  4:  4](R/W) USB31 PHY CR Access Mode - 0
                                                                 EUSB2PHY CR Access Mode - 1 */
        uint64_t cap_addr              : 1;  /**< [  3:  3](R/W) Rising edge triggers the [DATA_IN] field to be captured as the address. */
        uint64_t cap_data              : 1;  /**< [  2:  2](R/W) Rising edge triggers the [DATA_IN] field to be captured as the write data. */
        uint64_t read                  : 1;  /**< [  1:  1](R/W) Rising edge triggers a register read operation of the captured address. */
        uint64_t write                 : 1;  /**< [  0:  0](R/W) Rising edge triggers a register write operation of the captured address with the captured data. */
#else /* Word 0 - Little Endian */
        uint64_t write                 : 1;  /**< [  0:  0](R/W) Rising edge triggers a register write operation of the captured address with the captured data. */
        uint64_t read                  : 1;  /**< [  1:  1](R/W) Rising edge triggers a register read operation of the captured address. */
        uint64_t cap_data              : 1;  /**< [  2:  2](R/W) Rising edge triggers the [DATA_IN] field to be captured as the write data. */
        uint64_t cap_addr              : 1;  /**< [  3:  3](R/W) Rising edge triggers the [DATA_IN] field to be captured as the address. */
        uint64_t eusb2phy_cr_mode      : 1;  /**< [  4:  4](R/W) USB31 PHY CR Access Mode - 0
                                                                 EUSB2PHY CR Access Mode - 1 */
        uint64_t reserved_5_7          : 3;
        uint64_t eusb2phy_cr_addr_in   : 16; /**< [ 23:  8](R/W) EUSB2PHY CR/APB Address IN */
        uint64_t reserved_24_31        : 8;
        uint64_t data_in               : 16; /**< [ 47: 32](R/W) Address or data to be written to the CR interface. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_portx_cr_dbg_cfg_s cn10; */
    struct cavm_usbhx_uctl_portx_cr_dbg_cfg_cn10ka_p1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t data_in               : 16; /**< [ 47: 32](R/W) Address or data to be written to the CR interface. */
        uint64_t reserved_4_31         : 28;
        uint64_t cap_addr              : 1;  /**< [  3:  3](R/W) Rising edge triggers the [DATA_IN] field to be captured as the address. */
        uint64_t cap_data              : 1;  /**< [  2:  2](R/W) Rising edge triggers the [DATA_IN] field to be captured as the write data. */
        uint64_t read                  : 1;  /**< [  1:  1](R/W) Rising edge triggers a register read operation of the captured address. */
        uint64_t write                 : 1;  /**< [  0:  0](R/W) Rising edge triggers a register write operation of the captured address with the captured data. */
#else /* Word 0 - Little Endian */
        uint64_t write                 : 1;  /**< [  0:  0](R/W) Rising edge triggers a register write operation of the captured address with the captured data. */
        uint64_t read                  : 1;  /**< [  1:  1](R/W) Rising edge triggers a register read operation of the captured address. */
        uint64_t cap_data              : 1;  /**< [  2:  2](R/W) Rising edge triggers the [DATA_IN] field to be captured as the write data. */
        uint64_t cap_addr              : 1;  /**< [  3:  3](R/W) Rising edge triggers the [DATA_IN] field to be captured as the address. */
        uint64_t reserved_4_31         : 28;
        uint64_t data_in               : 16; /**< [ 47: 32](R/W) Address or data to be written to the CR interface. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } cn10ka_p1;
    /* struct cavm_usbhx_uctl_portx_cr_dbg_cfg_s cn10ka_p2; */
    /* struct cavm_usbhx_uctl_portx_cr_dbg_cfg_s cn10kb; */
};
typedef union cavm_usbhx_uctl_portx_cr_dbg_cfg cavm_usbhx_uctl_portx_cr_dbg_cfg_t;

static inline uint64_t CAVM_USBHX_UCTL_PORTX_CR_DBG_CFG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_PORTX_CR_DBG_CFG(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b==0)))
        return 0x868000100060ll + 0x1000000000ll * ((a) & 0x1) + 0ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b==0)))
        return 0x868000100060ll + 0x1000000000ll * ((a) & 0x1) + 0ll * ((b) & 0x0);
    __cavm_csr_fatal("USBHX_UCTL_PORTX_CR_DBG_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_PORTX_CR_DBG_CFG(a,b) cavm_usbhx_uctl_portx_cr_dbg_cfg_t
#define bustype_CAVM_USBHX_UCTL_PORTX_CR_DBG_CFG(a,b) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_PORTX_CR_DBG_CFG(a,b) "USBHX_UCTL_PORTX_CR_DBG_CFG"
#define device_bar_CAVM_USBHX_UCTL_PORTX_CR_DBG_CFG(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_PORTX_CR_DBG_CFG(a,b) (a)
#define arguments_CAVM_USBHX_UCTL_PORTX_CR_DBG_CFG(a,b) (a),(b),-1,-1

/**
 * Register (NCB) usbh#_uctl_port#_cr_dbg_status
 *
 * USB UCTL Port Debug Status Register
 * This register allows indirect access to the configuration and test controls for the port 0
 * PHY.
 *
 * This register is accessible only when USBH()_UCTL_CTL[H_CLK_EN] = 1.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UCTL_RST].
 */
union cavm_usbhx_uctl_portx_cr_dbg_status
{
    uint64_t u;
    struct cavm_usbhx_uctl_portx_cr_dbg_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t data_out              : 16; /**< [ 47: 32](RO/H) Last data read from the CR interface. */
        uint64_t reserved_2_31         : 30;
        uint64_t esub2phy_cr_apb_slv_err : 1;/**< [  1:  1](RO/H) EUSB2PHY CR APB IF Slave Error. Valid only for EUSB2PHY CR REG Access */
        uint64_t ack                   : 1;  /**< [  0:  0](RO/H) Acknowledge that the CAP_ADDR, CAP_DATA, READ, WRITE commands have completed. */
#else /* Word 0 - Little Endian */
        uint64_t ack                   : 1;  /**< [  0:  0](RO/H) Acknowledge that the CAP_ADDR, CAP_DATA, READ, WRITE commands have completed. */
        uint64_t esub2phy_cr_apb_slv_err : 1;/**< [  1:  1](RO/H) EUSB2PHY CR APB IF Slave Error. Valid only for EUSB2PHY CR REG Access */
        uint64_t reserved_2_31         : 30;
        uint64_t data_out              : 16; /**< [ 47: 32](RO/H) Last data read from the CR interface. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_portx_cr_dbg_status_s cn10; */
    struct cavm_usbhx_uctl_portx_cr_dbg_status_cn10ka_p1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t data_out              : 16; /**< [ 47: 32](RO/H) Last data read from the CR interface. */
        uint64_t reserved_1_31         : 31;
        uint64_t ack                   : 1;  /**< [  0:  0](RO/H) Acknowledge that the CAP_ADDR, CAP_DATA, READ, WRITE commands have completed. */
#else /* Word 0 - Little Endian */
        uint64_t ack                   : 1;  /**< [  0:  0](RO/H) Acknowledge that the CAP_ADDR, CAP_DATA, READ, WRITE commands have completed. */
        uint64_t reserved_1_31         : 31;
        uint64_t data_out              : 16; /**< [ 47: 32](RO/H) Last data read from the CR interface. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } cn10ka_p1;
    /* struct cavm_usbhx_uctl_portx_cr_dbg_status_s cn10ka_p2; */
    /* struct cavm_usbhx_uctl_portx_cr_dbg_status_s cn10kb; */
};
typedef union cavm_usbhx_uctl_portx_cr_dbg_status cavm_usbhx_uctl_portx_cr_dbg_status_t;

static inline uint64_t CAVM_USBHX_UCTL_PORTX_CR_DBG_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_PORTX_CR_DBG_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=1) && (b==0)))
        return 0x868000100068ll + 0x1000000000ll * ((a) & 0x1) + 0ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=1) && (b==0)))
        return 0x868000100068ll + 0x1000000000ll * ((a) & 0x1) + 0ll * ((b) & 0x0);
    __cavm_csr_fatal("USBHX_UCTL_PORTX_CR_DBG_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_PORTX_CR_DBG_STATUS(a,b) cavm_usbhx_uctl_portx_cr_dbg_status_t
#define bustype_CAVM_USBHX_UCTL_PORTX_CR_DBG_STATUS(a,b) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_PORTX_CR_DBG_STATUS(a,b) "USBHX_UCTL_PORTX_CR_DBG_STATUS"
#define device_bar_CAVM_USBHX_UCTL_PORTX_CR_DBG_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_PORTX_CR_DBG_STATUS(a,b) (a)
#define arguments_CAVM_USBHX_UCTL_PORTX_CR_DBG_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (NCB) usbh#_uctl_ras
 *
 * USB UCTL RAS Register
 * This register is intended for delivery of RAS events to the SCP, so should be
 * ignored by OS drivers.
 */
union cavm_usbhx_uctl_ras
{
    uint64_t u;
    struct cavm_usbhx_uctl_ras_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t dma_psn               : 1;  /**< [  0:  0](R/W1C/H) Received DMA read response with poisoned data from NCBO. Hardware also sets
                                                                 USBH()_UCTL_INTSTAT[DMA_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t dma_psn               : 1;  /**< [  0:  0](R/W1C/H) Received DMA read response with poisoned data from NCBO. Hardware also sets
                                                                 USBH()_UCTL_INTSTAT[DMA_PSN]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_ras_s cn; */
};
typedef union cavm_usbhx_uctl_ras cavm_usbhx_uctl_ras_t;

static inline uint64_t CAVM_USBHX_UCTL_RAS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_RAS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000100080ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100080ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_RAS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_RAS(a) cavm_usbhx_uctl_ras_t
#define bustype_CAVM_USBHX_UCTL_RAS(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_RAS(a) "USBHX_UCTL_RAS"
#define device_bar_CAVM_USBHX_UCTL_RAS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_RAS(a) (a)
#define arguments_CAVM_USBHX_UCTL_RAS(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_ras_w1s
 *
 * USB UCTL RAS Register
 * This register sets interrupt bits.
 */
union cavm_usbhx_uctl_ras_w1s
{
    uint64_t u;
    struct cavm_usbhx_uctl_ras_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t dma_psn               : 1;  /**< [  0:  0](R/W1S/H) Reads or sets USBH(0..1)_UCTL_RAS[DMA_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t dma_psn               : 1;  /**< [  0:  0](R/W1S/H) Reads or sets USBH(0..1)_UCTL_RAS[DMA_PSN]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_ras_w1s_s cn; */
};
typedef union cavm_usbhx_uctl_ras_w1s cavm_usbhx_uctl_ras_w1s_t;

static inline uint64_t CAVM_USBHX_UCTL_RAS_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_RAS_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000100088ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100088ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_RAS_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_RAS_W1S(a) cavm_usbhx_uctl_ras_w1s_t
#define bustype_CAVM_USBHX_UCTL_RAS_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_RAS_W1S(a) "USBHX_UCTL_RAS_W1S"
#define device_bar_CAVM_USBHX_UCTL_RAS_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_RAS_W1S(a) (a)
#define arguments_CAVM_USBHX_UCTL_RAS_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_rasena_w1c
 *
 * USB UCTL RAS Register
 * This register clears interrupt enable bits.
 */
union cavm_usbhx_uctl_rasena_w1c
{
    uint64_t u;
    struct cavm_usbhx_uctl_rasena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t dma_psn               : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for USBH(0..1)_UCTL_RAS[DMA_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t dma_psn               : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for USBH(0..1)_UCTL_RAS[DMA_PSN]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_rasena_w1c_s cn; */
};
typedef union cavm_usbhx_uctl_rasena_w1c cavm_usbhx_uctl_rasena_w1c_t;

static inline uint64_t CAVM_USBHX_UCTL_RASENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_RASENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000100090ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100090ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_RASENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_RASENA_W1C(a) cavm_usbhx_uctl_rasena_w1c_t
#define bustype_CAVM_USBHX_UCTL_RASENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_RASENA_W1C(a) "USBHX_UCTL_RASENA_W1C"
#define device_bar_CAVM_USBHX_UCTL_RASENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_RASENA_W1C(a) (a)
#define arguments_CAVM_USBHX_UCTL_RASENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_rasena_w1s
 *
 * USB UCTL RAS Register
 * This register sets interrupt enable bits.
 */
union cavm_usbhx_uctl_rasena_w1s
{
    uint64_t u;
    struct cavm_usbhx_uctl_rasena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t dma_psn               : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for USBH(0..1)_UCTL_RAS[DMA_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t dma_psn               : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for USBH(0..1)_UCTL_RAS[DMA_PSN]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_rasena_w1s_s cn; */
};
typedef union cavm_usbhx_uctl_rasena_w1s cavm_usbhx_uctl_rasena_w1s_t;

static inline uint64_t CAVM_USBHX_UCTL_RASENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_RASENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000100098ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100098ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_RASENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_RASENA_W1S(a) cavm_usbhx_uctl_rasena_w1s_t
#define bustype_CAVM_USBHX_UCTL_RASENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_RASENA_W1S(a) "USBHX_UCTL_RASENA_W1S"
#define device_bar_CAVM_USBHX_UCTL_RASENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_RASENA_W1S(a) (a)
#define arguments_CAVM_USBHX_UCTL_RASENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_shim_cfg
 *
 * USB UCTL Shim Configuration Register
 * This register allows configuration of various shim (UCTL) features. The fields XS_NCB_OOB_*
 * are captured when there are no outstanding OOB errors indicated in INTSTAT and a new OOB error
 * arrives. The fields XS_BAD_DMA_* are captured when there are no outstanding DMA errors
 * indicated in INTSTAT and a new DMA error arrives.
 *
 * This register is accessible only when USBH()_UCTL_CTL[H_CLK_EN] = 1.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UCTL_RST].
 */
union cavm_usbhx_uctl_shim_cfg
{
    uint64_t u;
    struct cavm_usbhx_uctl_shim_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t xs_ncb_oob_wrn        : 1;  /**< [ 63: 63](RO/H) Read/write error log for out-of-bound UAHC register access.
                                                                 0 = read, 1 = write. */
        uint64_t reserved_60_62        : 3;
        uint64_t xs_ncb_oob_osrc       : 12; /**< [ 59: 48](RO/H) SRCID error log for out-of-bound UAHC register access. The NCB outbound SRCID for the OOB
                                                                 error.
                                                                 \<59:58\> = chipID.
                                                                 \<57\> = Request source: 0 = core, 1 = NCB-device.
                                                                 \<56:51\> = Core/NCB-device number. Note that for NCB devices, \<56\> is always 0.
                                                                 \<50:48\> = SubID. */
        uint64_t xm_bad_dma_wrn        : 1;  /**< [ 47: 47](RO/H) Read/write error log for bad DMA access from UAHC.
                                                                 0 = Read error log.
                                                                 1 = Write error log. */
        uint64_t reserved_44_46        : 3;
        uint64_t xm_bad_dma_type       : 4;  /**< [ 43: 40](RO/H) ErrType error log for bad DMA access from UAHC. Encodes the type of error encountered
                                                                 (error largest encoded value has priority). See UCTL_XM_BAD_DMA_TYPE_E. */
        uint64_t reserved_14_39        : 26;
        uint64_t dma_read_cmd          : 2;  /**< [ 13: 12](R/W) Selects the NCB read command used by DMA accesses. See UCTL_DMA_READ_CMD_E. */
        uint64_t reserved_11           : 1;
        uint64_t dma_write_cmd         : 1;  /**< [ 10: 10](R/W) Selects the NCB write command used by DMA accesses. See UCTL_DMA_WRITE_CMD_E. */
        uint64_t reserved_0_9          : 10;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_9          : 10;
        uint64_t dma_write_cmd         : 1;  /**< [ 10: 10](R/W) Selects the NCB write command used by DMA accesses. See UCTL_DMA_WRITE_CMD_E. */
        uint64_t reserved_11           : 1;
        uint64_t dma_read_cmd          : 2;  /**< [ 13: 12](R/W) Selects the NCB read command used by DMA accesses. See UCTL_DMA_READ_CMD_E. */
        uint64_t reserved_14_39        : 26;
        uint64_t xm_bad_dma_type       : 4;  /**< [ 43: 40](RO/H) ErrType error log for bad DMA access from UAHC. Encodes the type of error encountered
                                                                 (error largest encoded value has priority). See UCTL_XM_BAD_DMA_TYPE_E. */
        uint64_t reserved_44_46        : 3;
        uint64_t xm_bad_dma_wrn        : 1;  /**< [ 47: 47](RO/H) Read/write error log for bad DMA access from UAHC.
                                                                 0 = Read error log.
                                                                 1 = Write error log. */
        uint64_t xs_ncb_oob_osrc       : 12; /**< [ 59: 48](RO/H) SRCID error log for out-of-bound UAHC register access. The NCB outbound SRCID for the OOB
                                                                 error.
                                                                 \<59:58\> = chipID.
                                                                 \<57\> = Request source: 0 = core, 1 = NCB-device.
                                                                 \<56:51\> = Core/NCB-device number. Note that for NCB devices, \<56\> is always 0.
                                                                 \<50:48\> = SubID. */
        uint64_t reserved_60_62        : 3;
        uint64_t xs_ncb_oob_wrn        : 1;  /**< [ 63: 63](RO/H) Read/write error log for out-of-bound UAHC register access.
                                                                 0 = read, 1 = write. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_shim_cfg_s cn; */
};
typedef union cavm_usbhx_uctl_shim_cfg cavm_usbhx_uctl_shim_cfg_t;

static inline uint64_t CAVM_USBHX_UCTL_SHIM_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_SHIM_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x8680001000e8ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x8680001000e8ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_SHIM_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_SHIM_CFG(a) cavm_usbhx_uctl_shim_cfg_t
#define bustype_CAVM_USBHX_UCTL_SHIM_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_SHIM_CFG(a) "USBHX_UCTL_SHIM_CFG"
#define device_bar_CAVM_USBHX_UCTL_SHIM_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_SHIM_CFG(a) (a)
#define arguments_CAVM_USBHX_UCTL_SHIM_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_usb31cntrlr_cfg1
 *
 * USBH UCTL USB3.1 Controller Configuration Register 1
 * Configuration register for USB 3.1 Controller module
 */
union cavm_usbhx_uctl_usb31cntrlr_cfg1
{
    uint64_t u;
    struct cavm_usbhx_uctl_usb31cntrlr_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_56_63        : 8;
        uint64_t host_force_gen1_speed : 1;  /**< [ 55: 55](R/W) USB 3.1 ESS force link Gen1 link speed control
                                                                 0 = Max link speed is Gen2
                                                                 1 = Max link speed is Gen1
                                                                 This signal, when '1', forces the link to connect at Gen1. */
        uint64_t start_rx_det_u3_rx_det : 1; /**< [ 54: 54](R/W) Starts receiver detection in U3/Rx.Detect (StartRxdetU3RxDet). */
        uint64_t dis_rx_det_u3_rx_det  : 1;  /**< [ 53: 53](R/W) Request controller to stop issuing more PHY commands and
                                                                 release PIPE ownership. */
        uint64_t reserved_52           : 1;
        uint64_t soc_common_rd_wr_bus  : 1;  /**< [ 51: 51](R/W) Indicates read and write are issued on common bus
                                                                 0 = Separate read and write bus(ex: AXI/Native)
                                                                 1 = Common read and write bus(Ex: AHB) */
        uint64_t soc_rd_uf_kb_bandwidth : 15;/**< [ 50: 36](R/W) Indicates maximum read bandwidth on SoC available in terms of kilo bytes per micro-frame. */
        uint64_t reserved_35           : 1;
        uint64_t host_legacy_smi_bar_wr : 1; /**< [ 34: 34](R/W) Controls PCI2 Base Address Register (BAR). */
        uint64_t host_legacy_smi_pci_cmd_reg_wr : 1;/**< [ 33: 33](R/W) Controls PCIe command register write. */
        uint64_t host_msi_enable       : 1;  /**< [ 32: 32](R/W) Enables pulse type interrupt signal.
                                                                 MSI can only be enabled in host mode. */
        uint64_t host_num_u3_port      : 4;  /**< [ 31: 28](R/W) Indicate or to set number of USB231 ESS ports. */
        uint64_t host_num_u2_port      : 4;  /**< [ 27: 24](R/W) Indicate or to set number of USB2 ports. */
        uint64_t reserved_21_23        : 3;
        uint64_t pme_en                : 1;  /**< [ 20: 20](R/W) Controls enabling of pme_generation by the controller. */
        uint64_t gp_in                 : 16; /**< [ 19:  4](R/W) General Purpose Input port. */
        uint64_t reserved_3            : 1;
        uint64_t big_endian_gs         : 1;  /**< [  2:  2](R/W) Controls selection of Big Endian mode for SoC bus slave.
                                                                 0 = Little Endian
                                                                 1 = Big Endian */
        uint64_t bus_clken_gm          : 1;  /**< [  1:  1](R/W) Controls enabling of master interface clock(AHB/AXI/Native). */
        uint64_t bus_clk_en_gs         : 1;  /**< [  0:  0](R/W) Controls enabling of slave interface clock(AHB/AXI/Native). */
#else /* Word 0 - Little Endian */
        uint64_t bus_clk_en_gs         : 1;  /**< [  0:  0](R/W) Controls enabling of slave interface clock(AHB/AXI/Native). */
        uint64_t bus_clken_gm          : 1;  /**< [  1:  1](R/W) Controls enabling of master interface clock(AHB/AXI/Native). */
        uint64_t big_endian_gs         : 1;  /**< [  2:  2](R/W) Controls selection of Big Endian mode for SoC bus slave.
                                                                 0 = Little Endian
                                                                 1 = Big Endian */
        uint64_t reserved_3            : 1;
        uint64_t gp_in                 : 16; /**< [ 19:  4](R/W) General Purpose Input port. */
        uint64_t pme_en                : 1;  /**< [ 20: 20](R/W) Controls enabling of pme_generation by the controller. */
        uint64_t reserved_21_23        : 3;
        uint64_t host_num_u2_port      : 4;  /**< [ 27: 24](R/W) Indicate or to set number of USB2 ports. */
        uint64_t host_num_u3_port      : 4;  /**< [ 31: 28](R/W) Indicate or to set number of USB231 ESS ports. */
        uint64_t host_msi_enable       : 1;  /**< [ 32: 32](R/W) Enables pulse type interrupt signal.
                                                                 MSI can only be enabled in host mode. */
        uint64_t host_legacy_smi_pci_cmd_reg_wr : 1;/**< [ 33: 33](R/W) Controls PCIe command register write. */
        uint64_t host_legacy_smi_bar_wr : 1; /**< [ 34: 34](R/W) Controls PCI2 Base Address Register (BAR). */
        uint64_t reserved_35           : 1;
        uint64_t soc_rd_uf_kb_bandwidth : 15;/**< [ 50: 36](R/W) Indicates maximum read bandwidth on SoC available in terms of kilo bytes per micro-frame. */
        uint64_t soc_common_rd_wr_bus  : 1;  /**< [ 51: 51](R/W) Indicates read and write are issued on common bus
                                                                 0 = Separate read and write bus(ex: AXI/Native)
                                                                 1 = Common read and write bus(Ex: AHB) */
        uint64_t reserved_52           : 1;
        uint64_t dis_rx_det_u3_rx_det  : 1;  /**< [ 53: 53](R/W) Request controller to stop issuing more PHY commands and
                                                                 release PIPE ownership. */
        uint64_t start_rx_det_u3_rx_det : 1; /**< [ 54: 54](R/W) Starts receiver detection in U3/Rx.Detect (StartRxdetU3RxDet). */
        uint64_t host_force_gen1_speed : 1;  /**< [ 55: 55](R/W) USB 3.1 ESS force link Gen1 link speed control
                                                                 0 = Max link speed is Gen2
                                                                 1 = Max link speed is Gen1
                                                                 This signal, when '1', forces the link to connect at Gen1. */
        uint64_t reserved_56_63        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_usb31cntrlr_cfg1_s cn; */
};
typedef union cavm_usbhx_uctl_usb31cntrlr_cfg1 cavm_usbhx_uctl_usb31cntrlr_cfg1_t;

static inline uint64_t CAVM_USBHX_UCTL_USB31CNTRLR_CFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_USB31CNTRLR_CFG1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=1))
        return 0x868000100188ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100188ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_USB31CNTRLR_CFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_USB31CNTRLR_CFG1(a) cavm_usbhx_uctl_usb31cntrlr_cfg1_t
#define bustype_CAVM_USBHX_UCTL_USB31CNTRLR_CFG1(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_USB31CNTRLR_CFG1(a) "USBHX_UCTL_USB31CNTRLR_CFG1"
#define device_bar_CAVM_USBHX_UCTL_USB31CNTRLR_CFG1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_USB31CNTRLR_CFG1(a) (a)
#define arguments_CAVM_USBHX_UCTL_USB31CNTRLR_CFG1(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_usb31cntrlr_cfg2
 *
 * USBH UCTL USB3.1 Controller Configuration Register 2
 * Configuration register for USB 3.1 Controller module
 */
union cavm_usbhx_uctl_usb31cntrlr_cfg2
{
    uint64_t u;
    struct cavm_usbhx_uctl_usb31cntrlr_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t utmio_vbusvalid       : 1;  /**< [ 52: 52](R/W) Indicates if vbus is valid for Host and A-device operation.
                                                                 1 = Vbus \< 4.4 V
                                                                 0 = Vbus \> 4.75 V */
        uint64_t bus_filter_bypass     : 4;  /**< [ 51: 48](R/W) This signal disables the internal bus filters that are enabled by
                                                                 DWC_USB31_EN_BUS_FILTERS coreConsultant parameter. */
        uint64_t ptm_time              : 32; /**< [ 47: 16](R/W) PTM time adjustment value. This register indicates ptm value is terms of
                                                                 milliseconds and nanoseconds
                                                                 ptm_time 31..20 indicates wall clock in milliseconds
                                                                 ptm_time 19..0 indicates wall clock in nanoseconds */
        uint64_t ptm_time_valid        : 1;  /**< [ 15: 15](R/W) Indicates ptm time specified is valid for capture. */
        uint64_t soc_wr_uf_kb_bandwidth : 15;/**< [ 14:  0](R/W) Indicates maximum write bandwidth on SoC available in terms of kilo bytes per micro-frame. */
#else /* Word 0 - Little Endian */
        uint64_t soc_wr_uf_kb_bandwidth : 15;/**< [ 14:  0](R/W) Indicates maximum write bandwidth on SoC available in terms of kilo bytes per micro-frame. */
        uint64_t ptm_time_valid        : 1;  /**< [ 15: 15](R/W) Indicates ptm time specified is valid for capture. */
        uint64_t ptm_time              : 32; /**< [ 47: 16](R/W) PTM time adjustment value. This register indicates ptm value is terms of
                                                                 milliseconds and nanoseconds
                                                                 ptm_time 31..20 indicates wall clock in milliseconds
                                                                 ptm_time 19..0 indicates wall clock in nanoseconds */
        uint64_t bus_filter_bypass     : 4;  /**< [ 51: 48](R/W) This signal disables the internal bus filters that are enabled by
                                                                 DWC_USB31_EN_BUS_FILTERS coreConsultant parameter. */
        uint64_t utmio_vbusvalid       : 1;  /**< [ 52: 52](R/W) Indicates if vbus is valid for Host and A-device operation.
                                                                 1 = Vbus \< 4.4 V
                                                                 0 = Vbus \> 4.75 V */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_usb31cntrlr_cfg2_s cn; */
};
typedef union cavm_usbhx_uctl_usb31cntrlr_cfg2 cavm_usbhx_uctl_usb31cntrlr_cfg2_t;

static inline uint64_t CAVM_USBHX_UCTL_USB31CNTRLR_CFG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_USB31CNTRLR_CFG2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=1))
        return 0x868000100190ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100190ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_USB31CNTRLR_CFG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_USB31CNTRLR_CFG2(a) cavm_usbhx_uctl_usb31cntrlr_cfg2_t
#define bustype_CAVM_USBHX_UCTL_USB31CNTRLR_CFG2(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_USB31CNTRLR_CFG2(a) "USBHX_UCTL_USB31CNTRLR_CFG2"
#define device_bar_CAVM_USBHX_UCTL_USB31CNTRLR_CFG2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_USB31CNTRLR_CFG2(a) (a)
#define arguments_CAVM_USBHX_UCTL_USB31CNTRLR_CFG2(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_usb31phy_cfg1
 *
 * USBH UCTL USB3.1 PHY Configuration Register 1
 * Configuration register for USB 3.1 PHY module
 */
union cavm_usbhx_uctl_usb31phy_cfg1
{
    uint64_t u;
    struct cavm_usbhx_uctl_usb31phy_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_56_63        : 8;
        uint64_t pipe_lane0_link_num   : 4;  /**< [ 55: 52](R/W) NA */
        uint64_t reserved_50_51        : 2;
        uint64_t ext_dco_range         : 2;  /**< [ 49: 48](R/W) Select DCO range. dco_range needs to set for
                                                                 proper boundary scan operation. */
        uint64_t reserved_47           : 1;
        uint64_t phy0_rext_en          : 1;  /**< [ 46: 46](R/W) Enables REXT block (CDM protected)
                                                                 0 = Impedance is above 20kOhm
                                                                 1 = Impedance can be controlled through Sup_ana_rext_ctrl
                                                                 5..0 bus. */
        uint64_t phy0_rext_ctrl        : 6;  /**< [ 45: 40](R/W) Control REXT block (CDM protected)
                                                                 0 = Higher impedance
                                                                 63 = Lower impedance */
        uint64_t reserved_38_39        : 2;
        uint64_t ext_dco_finetune      : 6;  /**< [ 37: 32](R/W) DCO calibration setting. */
        uint64_t reserved_29_31        : 3;
        uint64_t pipe_tx0_eq_preset_coeff_req : 1;/**< [ 28: 28](R/W) NA */
        uint64_t pipe_tx0_eq_preset    : 4;  /**< [ 27: 24](R/W) NA */
        uint64_t reserved_22_23        : 2;
        uint64_t pipe_tx0_disable      : 1;  /**< [ 21: 21](R/W) NA */
        uint64_t pipe_tx0_compliance   : 1;  /**< [ 20: 20](R/W) NA */
        uint64_t pipe_rx0_eq_invld_req : 1;  /**< [ 19: 19](R/W) NA */
        uint64_t pipe_rx0_eq_in_prog   : 1;  /**< [ 18: 18](R/W) NA */
        uint64_t pipe_rx0_eq_eval      : 1;  /**< [ 17: 17](R/W) NA */
        uint64_t pipe_rx0_disable      : 1;  /**< [ 16: 16](R/W) NA */
        uint64_t pipe_lane0_phy_src_sel : 2; /**< [ 15: 14](R/W) NA */
        uint64_t reserved_13           : 1;
        uint64_t pipe_lane0_clkreq_n   : 1;  /**< [ 12: 12](R/W) NA */
        uint64_t pipe_tx0_pattern      : 2;  /**< [ 11: 10](R/W) NA */
        uint64_t pipe_tx0_flyover_data_p : 1;/**< [  9:  9](R/W) NA */
        uint64_t pipe_tx0_flyover_data_m : 1;/**< [  8:  8](R/W) NA */
        uint64_t pipe_tx0_bypass_eq_calc : 1;/**< [  7:  7](R/W) NA */
        uint64_t phy_lane0_power_present : 1;/**< [  6:  6](R/W) NA */
        uint64_t phy0_ref_alt_clk_lp_sel : 1;/**< [  5:  5](R/W) This bit when asserted selects the external
                                                                 ref_alt_clk_lp input as the reference clock source. */
        uint64_t phy0_ref_alt_clk_lp   : 1;  /**< [  4:  4](R/W) Low precision reference clock. */
        uint64_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_3          : 4;
        uint64_t phy0_ref_alt_clk_lp   : 1;  /**< [  4:  4](R/W) Low precision reference clock. */
        uint64_t phy0_ref_alt_clk_lp_sel : 1;/**< [  5:  5](R/W) This bit when asserted selects the external
                                                                 ref_alt_clk_lp input as the reference clock source. */
        uint64_t phy_lane0_power_present : 1;/**< [  6:  6](R/W) NA */
        uint64_t pipe_tx0_bypass_eq_calc : 1;/**< [  7:  7](R/W) NA */
        uint64_t pipe_tx0_flyover_data_m : 1;/**< [  8:  8](R/W) NA */
        uint64_t pipe_tx0_flyover_data_p : 1;/**< [  9:  9](R/W) NA */
        uint64_t pipe_tx0_pattern      : 2;  /**< [ 11: 10](R/W) NA */
        uint64_t pipe_lane0_clkreq_n   : 1;  /**< [ 12: 12](R/W) NA */
        uint64_t reserved_13           : 1;
        uint64_t pipe_lane0_phy_src_sel : 2; /**< [ 15: 14](R/W) NA */
        uint64_t pipe_rx0_disable      : 1;  /**< [ 16: 16](R/W) NA */
        uint64_t pipe_rx0_eq_eval      : 1;  /**< [ 17: 17](R/W) NA */
        uint64_t pipe_rx0_eq_in_prog   : 1;  /**< [ 18: 18](R/W) NA */
        uint64_t pipe_rx0_eq_invld_req : 1;  /**< [ 19: 19](R/W) NA */
        uint64_t pipe_tx0_compliance   : 1;  /**< [ 20: 20](R/W) NA */
        uint64_t pipe_tx0_disable      : 1;  /**< [ 21: 21](R/W) NA */
        uint64_t reserved_22_23        : 2;
        uint64_t pipe_tx0_eq_preset    : 4;  /**< [ 27: 24](R/W) NA */
        uint64_t pipe_tx0_eq_preset_coeff_req : 1;/**< [ 28: 28](R/W) NA */
        uint64_t reserved_29_31        : 3;
        uint64_t ext_dco_finetune      : 6;  /**< [ 37: 32](R/W) DCO calibration setting. */
        uint64_t reserved_38_39        : 2;
        uint64_t phy0_rext_ctrl        : 6;  /**< [ 45: 40](R/W) Control REXT block (CDM protected)
                                                                 0 = Higher impedance
                                                                 63 = Lower impedance */
        uint64_t phy0_rext_en          : 1;  /**< [ 46: 46](R/W) Enables REXT block (CDM protected)
                                                                 0 = Impedance is above 20kOhm
                                                                 1 = Impedance can be controlled through Sup_ana_rext_ctrl
                                                                 5..0 bus. */
        uint64_t reserved_47           : 1;
        uint64_t ext_dco_range         : 2;  /**< [ 49: 48](R/W) Select DCO range. dco_range needs to set for
                                                                 proper boundary scan operation. */
        uint64_t reserved_50_51        : 2;
        uint64_t pipe_lane0_link_num   : 4;  /**< [ 55: 52](R/W) NA */
        uint64_t reserved_56_63        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_usb31phy_cfg1_s cn; */
};
typedef union cavm_usbhx_uctl_usb31phy_cfg1 cavm_usbhx_uctl_usb31phy_cfg1_t;

static inline uint64_t CAVM_USBHX_UCTL_USB31PHY_CFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_USB31PHY_CFG1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=1))
        return 0x868000100148ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100148ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_USB31PHY_CFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_USB31PHY_CFG1(a) cavm_usbhx_uctl_usb31phy_cfg1_t
#define bustype_CAVM_USBHX_UCTL_USB31PHY_CFG1(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_USB31PHY_CFG1(a) "USBHX_UCTL_USB31PHY_CFG1"
#define device_bar_CAVM_USBHX_UCTL_USB31PHY_CFG1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_USB31PHY_CFG1(a) (a)
#define arguments_CAVM_USBHX_UCTL_USB31PHY_CFG1(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_usb31phy_cfg2
 *
 * USBH UCTL USB3.1 PHY Configuration Register 2
 * Configuration register for USB 3.1 PHY module
 */
union cavm_usbhx_uctl_usb31phy_cfg2
{
    uint64_t u;
    struct cavm_usbhx_uctl_usb31phy_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ext_mplla_ssc_up_spread : 1;/**< [ 63: 63](R/W) Controls SSC profile for MPLLA.
                                                                 1 = up spread
                                                                 0 = down spread */
        uint64_t ext_mplla_freq_vco    : 2;  /**< [ 62: 61](R/W) Controls MPLLA VCO range. */
        uint64_t ext_mplla_fracn_en    : 1;  /**< [ 60: 60](R/W) Controls MPLLA fractional mode enable. */
        uint64_t ext_mplla_fracn_den   : 16; /**< [ 59: 44](R/W) Controls the PLL modulated frequency fractional ratio. */
        uint64_t ext_mplla_div_mul     : 8;  /**< [ 43: 36](R/W) Controls MPLLA outputr frequency multiplier. */
        uint64_t reserved_33_35        : 3;
        uint64_t ext_mplla_div_clk_en  : 1;  /**< [ 32: 32](R/W) MPLLA divide clock enable. */
        uint64_t ext_mplla_div5_clk_en : 1;  /**< [ 31: 31](R/W) MPLLA divide by 5 enable. */
        uint64_t ext_mplla_cp_prop_gs  : 7;  /**< [ 30: 24](R/W) Controls proportional part of charge pump current
                                                                 in gear-shift mode. */
        uint64_t reserved_23           : 1;
        uint64_t ext_mplla_cp_prop     : 7;  /**< [ 22: 16](R/W) Proportional CP control. Controls charge pump current. */
        uint64_t reserved_15           : 1;
        uint64_t ext_mplla_cp_int_gs   : 7;  /**< [ 14:  8](R/W) Controls integral part of charge pump current
                                                                 in gear-shift mode. */
        uint64_t reserved_7            : 1;
        uint64_t ext_mplla_cp_int      : 7;  /**< [  6:  0](R/W) Integral CP control. Controls charge pump current. */
#else /* Word 0 - Little Endian */
        uint64_t ext_mplla_cp_int      : 7;  /**< [  6:  0](R/W) Integral CP control. Controls charge pump current. */
        uint64_t reserved_7            : 1;
        uint64_t ext_mplla_cp_int_gs   : 7;  /**< [ 14:  8](R/W) Controls integral part of charge pump current
                                                                 in gear-shift mode. */
        uint64_t reserved_15           : 1;
        uint64_t ext_mplla_cp_prop     : 7;  /**< [ 22: 16](R/W) Proportional CP control. Controls charge pump current. */
        uint64_t reserved_23           : 1;
        uint64_t ext_mplla_cp_prop_gs  : 7;  /**< [ 30: 24](R/W) Controls proportional part of charge pump current
                                                                 in gear-shift mode. */
        uint64_t ext_mplla_div5_clk_en : 1;  /**< [ 31: 31](R/W) MPLLA divide by 5 enable. */
        uint64_t ext_mplla_div_clk_en  : 1;  /**< [ 32: 32](R/W) MPLLA divide clock enable. */
        uint64_t reserved_33_35        : 3;
        uint64_t ext_mplla_div_mul     : 8;  /**< [ 43: 36](R/W) Controls MPLLA outputr frequency multiplier. */
        uint64_t ext_mplla_fracn_den   : 16; /**< [ 59: 44](R/W) Controls the PLL modulated frequency fractional ratio. */
        uint64_t ext_mplla_fracn_en    : 1;  /**< [ 60: 60](R/W) Controls MPLLA fractional mode enable. */
        uint64_t ext_mplla_freq_vco    : 2;  /**< [ 62: 61](R/W) Controls MPLLA VCO range. */
        uint64_t ext_mplla_ssc_up_spread : 1;/**< [ 63: 63](R/W) Controls SSC profile for MPLLA.
                                                                 1 = up spread
                                                                 0 = down spread */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_usb31phy_cfg2_s cn; */
};
typedef union cavm_usbhx_uctl_usb31phy_cfg2 cavm_usbhx_uctl_usb31phy_cfg2_t;

static inline uint64_t CAVM_USBHX_UCTL_USB31PHY_CFG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_USB31PHY_CFG2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=1))
        return 0x868000100150ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100150ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_USB31PHY_CFG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_USB31PHY_CFG2(a) cavm_usbhx_uctl_usb31phy_cfg2_t
#define bustype_CAVM_USBHX_UCTL_USB31PHY_CFG2(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_USB31PHY_CFG2(a) "USBHX_UCTL_USB31PHY_CFG2"
#define device_bar_CAVM_USBHX_UCTL_USB31PHY_CFG2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_USB31PHY_CFG2(a) (a)
#define arguments_CAVM_USBHX_UCTL_USB31PHY_CFG2(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_usb31phy_cfg3
 *
 * USBH UCTL USB3.1 PHY Configuration Register 3
 * Configuration register for USB 3.1 PHY module
 */
union cavm_usbhx_uctl_usb31phy_cfg3
{
    uint64_t u;
    struct cavm_usbhx_uctl_usb31phy_cfg3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_61_63        : 3;
        uint64_t cmn_in_generic_bus    : 5;  /**< [ 60: 56](R/W) Controls generic input bus for common block. */
        uint64_t ext_mplla_franc_mul   : 12; /**< [ 55: 44](R/W) Controls MPLLA multiplier. */
        uint64_t ext_mplla_fracn_rem   : 16; /**< [ 43: 28](R/W) Controls MPLLA fractional remainder */
        uint64_t ext_mplla_fracn_quot  : 16; /**< [ 27: 12](R/W) Controls MPLLA fractional quotient. */
        uint64_t ext_mplla_word_div2_en : 1; /**< [ 11: 11](R/W) Controls MPPLA word clock divide by 2 enable. */
        uint64_t ext_ref_clk_mplla_div : 3;  /**< [ 10:  8](R/W) Controls MPLLA reference clock divider. */
        uint64_t reserved_6_7          : 2;
        uint64_t ext_mplla_v2i         : 2;  /**< [  5:  4](R/W) Controls configuration of V2I operating range. */
        uint64_t reserved_3            : 1;
        uint64_t ext_mplla_tx_clk_div  : 3;  /**< [  2:  0](R/W) Controls MPLLA output clock divider value. */
#else /* Word 0 - Little Endian */
        uint64_t ext_mplla_tx_clk_div  : 3;  /**< [  2:  0](R/W) Controls MPLLA output clock divider value. */
        uint64_t reserved_3            : 1;
        uint64_t ext_mplla_v2i         : 2;  /**< [  5:  4](R/W) Controls configuration of V2I operating range. */
        uint64_t reserved_6_7          : 2;
        uint64_t ext_ref_clk_mplla_div : 3;  /**< [ 10:  8](R/W) Controls MPLLA reference clock divider. */
        uint64_t ext_mplla_word_div2_en : 1; /**< [ 11: 11](R/W) Controls MPPLA word clock divide by 2 enable. */
        uint64_t ext_mplla_fracn_quot  : 16; /**< [ 27: 12](R/W) Controls MPLLA fractional quotient. */
        uint64_t ext_mplla_fracn_rem   : 16; /**< [ 43: 28](R/W) Controls MPLLA fractional remainder */
        uint64_t ext_mplla_franc_mul   : 12; /**< [ 55: 44](R/W) Controls MPLLA multiplier. */
        uint64_t cmn_in_generic_bus    : 5;  /**< [ 60: 56](R/W) Controls generic input bus for common block. */
        uint64_t reserved_61_63        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_usb31phy_cfg3_s cn; */
};
typedef union cavm_usbhx_uctl_usb31phy_cfg3 cavm_usbhx_uctl_usb31phy_cfg3_t;

static inline uint64_t CAVM_USBHX_UCTL_USB31PHY_CFG3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_USB31PHY_CFG3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=1))
        return 0x868000100158ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100158ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_USB31PHY_CFG3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_USB31PHY_CFG3(a) cavm_usbhx_uctl_usb31phy_cfg3_t
#define bustype_CAVM_USBHX_UCTL_USB31PHY_CFG3(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_USB31PHY_CFG3(a) "USBHX_UCTL_USB31PHY_CFG3"
#define device_bar_CAVM_USBHX_UCTL_USB31PHY_CFG3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_USB31PHY_CFG3(a) (a)
#define arguments_CAVM_USBHX_UCTL_USB31PHY_CFG3(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_usb31phy_cfg4
 *
 * USBH UCTL USB3.1 PHY Configuration Register 4
 * Configuration register for USB 3.1 PHY module
 */
union cavm_usbhx_uctl_usb31phy_cfg4
{
    uint64_t u;
    struct cavm_usbhx_uctl_usb31phy_cfg4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_41_63        : 23;
        uint64_t ext_mplla_ssc_stepsize : 21;/**< [ 40: 20](R/W) Controls MPLLA ssc mode step size. */
        uint64_t ext_mplla_ssc_peak    : 20; /**< [ 19:  0](R/W) Controls MPLLA ssc mode peak. */
#else /* Word 0 - Little Endian */
        uint64_t ext_mplla_ssc_peak    : 20; /**< [ 19:  0](R/W) Controls MPLLA ssc mode peak. */
        uint64_t ext_mplla_ssc_stepsize : 21;/**< [ 40: 20](R/W) Controls MPLLA ssc mode step size. */
        uint64_t reserved_41_63        : 23;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_usb31phy_cfg4_s cn; */
};
typedef union cavm_usbhx_uctl_usb31phy_cfg4 cavm_usbhx_uctl_usb31phy_cfg4_t;

static inline uint64_t CAVM_USBHX_UCTL_USB31PHY_CFG4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_USB31PHY_CFG4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=1))
        return 0x868000100160ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100160ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_USB31PHY_CFG4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_USB31PHY_CFG4(a) cavm_usbhx_uctl_usb31phy_cfg4_t
#define bustype_CAVM_USBHX_UCTL_USB31PHY_CFG4(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_USB31PHY_CFG4(a) "USBHX_UCTL_USB31PHY_CFG4"
#define device_bar_CAVM_USBHX_UCTL_USB31PHY_CFG4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_USB31PHY_CFG4(a) (a)
#define arguments_CAVM_USBHX_UCTL_USB31PHY_CFG4(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_usb31phy_cfg5
 *
 * USBH UCTL USB3.1 PHY Configuration Register 5
 * Configuration register for USB 3.1 PHY module
 */
union cavm_usbhx_uctl_usb31phy_cfg5
{
    uint64_t u;
    struct cavm_usbhx_uctl_usb31phy_cfg5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t ext_rx_eq_dfe_tap1_g1 : 8;  /**< [ 59: 52](R/W) Controls the value of DFE data tap 1.
                                                                 This is signed input, twos complement encoded. */
        uint64_t ext_rx_eq_delta_iq_g2 : 4;  /**< [ 51: 48](R/W) Controls the value of the offset applied to the IQ calibration result. */
        uint64_t ext_rx_eq_delta_iq_g1 : 4;  /**< [ 47: 44](R/W) Controls the value of the offset applied to the IQ calibration result. */
        uint64_t reserved_41_43        : 3;
        uint64_t ext_rx_eq_ctle_boost_g2 : 5;/**< [ 40: 36](R/W) Controls CTLE boost level, binary encoded. */
        uint64_t reserved_33_35        : 3;
        uint64_t ext_rx_eq_ctle_boost_g1 : 5;/**< [ 32: 28](R/W) Controls CTLE boost level, binary encoded. */
        uint64_t reserved_27           : 1;
        uint64_t ext_rx_eq_att_lvl_g2  : 3;  /**< [ 26: 24](R/W) Controls rx equalization attenuation level. */
        uint64_t reserved_23           : 1;
        uint64_t ext_rx_eq_att_lvl_g1  : 3;  /**< [ 22: 20](R/W) Controls rx equalization attenuation level. */
        uint64_t ext_rx_eq_afe_gain_g2 : 4;  /**< [ 19: 16](R/W) Controls gain of the AFE. */
        uint64_t ext_rx_eq_afe_gain_g1 : 4;  /**< [ 15: 12](R/W) Controls gain of the AFE. */
        uint64_t reserved_9_11         : 3;
        uint64_t ext_rx_cdr_vco_lowfreq_g2 : 1;/**< [  8:  8](R/W) Controls the frequency of RX VCO to a lower frequency opearating band. */
        uint64_t ext_rx_cdr_vco_lowfreq_g1 : 1;/**< [  7:  7](R/W) Controls the frequency of RX VCO to a lower frequency opearating band. */
        uint64_t ext_rx_adapt_dfe_en_g2 : 1; /**< [  6:  6](R/W) Controls enabling of RX adaptation and decision feedback equalization. */
        uint64_t ext_rx_adapt_dfe_en_g1 : 1; /**< [  5:  5](R/W) Controls enabling of RX adaptation and decision feedback equalization. */
        uint64_t ext_rx_adapt_afe_en_g2 : 1; /**< [  4:  4](R/W) Controls enabling of RX adaptation circuitry */
        uint64_t ext_rx_adapt_afe_en_g1 : 1; /**< [  3:  3](R/W) Controls enabling of RX adaptation circuitry */
        uint64_t ext_ref_range         : 3;  /**< [  2:  0](R/W) Input reference clock frequency range
                                                                 Specifies the frequency range of the input reference clock (post
                                                                 ref_clk_div2_en division if any). Please refer databook
                                                                 dwc_usb31sspphy_tsmc5ffx1ns_databook for code mapping. */
#else /* Word 0 - Little Endian */
        uint64_t ext_ref_range         : 3;  /**< [  2:  0](R/W) Input reference clock frequency range
                                                                 Specifies the frequency range of the input reference clock (post
                                                                 ref_clk_div2_en division if any). Please refer databook
                                                                 dwc_usb31sspphy_tsmc5ffx1ns_databook for code mapping. */
        uint64_t ext_rx_adapt_afe_en_g1 : 1; /**< [  3:  3](R/W) Controls enabling of RX adaptation circuitry */
        uint64_t ext_rx_adapt_afe_en_g2 : 1; /**< [  4:  4](R/W) Controls enabling of RX adaptation circuitry */
        uint64_t ext_rx_adapt_dfe_en_g1 : 1; /**< [  5:  5](R/W) Controls enabling of RX adaptation and decision feedback equalization. */
        uint64_t ext_rx_adapt_dfe_en_g2 : 1; /**< [  6:  6](R/W) Controls enabling of RX adaptation and decision feedback equalization. */
        uint64_t ext_rx_cdr_vco_lowfreq_g1 : 1;/**< [  7:  7](R/W) Controls the frequency of RX VCO to a lower frequency opearating band. */
        uint64_t ext_rx_cdr_vco_lowfreq_g2 : 1;/**< [  8:  8](R/W) Controls the frequency of RX VCO to a lower frequency opearating band. */
        uint64_t reserved_9_11         : 3;
        uint64_t ext_rx_eq_afe_gain_g1 : 4;  /**< [ 15: 12](R/W) Controls gain of the AFE. */
        uint64_t ext_rx_eq_afe_gain_g2 : 4;  /**< [ 19: 16](R/W) Controls gain of the AFE. */
        uint64_t ext_rx_eq_att_lvl_g1  : 3;  /**< [ 22: 20](R/W) Controls rx equalization attenuation level. */
        uint64_t reserved_23           : 1;
        uint64_t ext_rx_eq_att_lvl_g2  : 3;  /**< [ 26: 24](R/W) Controls rx equalization attenuation level. */
        uint64_t reserved_27           : 1;
        uint64_t ext_rx_eq_ctle_boost_g1 : 5;/**< [ 32: 28](R/W) Controls CTLE boost level, binary encoded. */
        uint64_t reserved_33_35        : 3;
        uint64_t ext_rx_eq_ctle_boost_g2 : 5;/**< [ 40: 36](R/W) Controls CTLE boost level, binary encoded. */
        uint64_t reserved_41_43        : 3;
        uint64_t ext_rx_eq_delta_iq_g1 : 4;  /**< [ 47: 44](R/W) Controls the value of the offset applied to the IQ calibration result. */
        uint64_t ext_rx_eq_delta_iq_g2 : 4;  /**< [ 51: 48](R/W) Controls the value of the offset applied to the IQ calibration result. */
        uint64_t ext_rx_eq_dfe_tap1_g1 : 8;  /**< [ 59: 52](R/W) Controls the value of DFE data tap 1.
                                                                 This is signed input, twos complement encoded. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_usb31phy_cfg5_s cn; */
};
typedef union cavm_usbhx_uctl_usb31phy_cfg5 cavm_usbhx_uctl_usb31phy_cfg5_t;

static inline uint64_t CAVM_USBHX_UCTL_USB31PHY_CFG5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_USB31PHY_CFG5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=1))
        return 0x868000100168ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100168ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_USB31PHY_CFG5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_USB31PHY_CFG5(a) cavm_usbhx_uctl_usb31phy_cfg5_t
#define bustype_CAVM_USBHX_UCTL_USB31PHY_CFG5(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_USB31PHY_CFG5(a) "USBHX_UCTL_USB31PHY_CFG5"
#define device_bar_CAVM_USBHX_UCTL_USB31PHY_CFG5(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_USB31PHY_CFG5(a) (a)
#define arguments_CAVM_USBHX_UCTL_USB31PHY_CFG5(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_usb31phy_cfg6
 *
 * USBH UCTL USB3.1 PHY Configuration Register 6
 * Configuration register for USB 3.1 PHY module
 */
union cavm_usbhx_uctl_usb31phy_cfg6
{
    uint64_t u;
    struct cavm_usbhx_uctl_usb31phy_cfg6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_57_63        : 7;
        uint64_t ext_rx_vco_ld_val_g1  : 13; /**< [ 56: 44](R/W) Controls loading of RX VCO Calibration load value. */
        uint64_t reserved_43           : 1;
        uint64_t ext_rx_term_ctrl      : 3;  /**< [ 42: 40](R/W) NA */
        uint64_t reserved_37_39        : 3;
        uint64_t ext_rx_sigdet_lf_filter_en : 1;/**< [ 36: 36](R/W) Controls enabling of low frequency filter. */
        uint64_t ext_rx_sigdet_lf_en   : 1;  /**< [ 35: 35](R/W) Detects low frequency signal */
        uint64_t ext_rx_sigdet_hf_thresh_g2 : 3;/**< [ 34: 32](R/W) Detects signal is high speed path. */
        uint64_t reserved_31           : 1;
        uint64_t ext_rx_sigdet_hf_thresh_g1 : 3;/**< [ 30: 28](R/W) Detects signal is high speed path. */
        uint64_t reserved_25_27        : 3;
        uint64_t ext_rx_sigdet_hf_filt_dis : 1;/**< [ 24: 24](R/W) Controls disabling of PCS_RAW sigdef_hf_out filter */
        uint64_t ext_rx_sigdet_hf_en   : 1;  /**< [ 23: 23](R/W) Detects high frequency signal. */
        uint64_t ext_rx_ref_ld_val_g2  : 7;  /**< [ 22: 16](R/W) Controls loading of internal calibration registers
                                                                 used to perform RX VCO calibration. */
        uint64_t reserved_15           : 1;
        uint64_t ext_rx_ref_ld_val_g1  : 7;  /**< [ 14:  8](R/W) Controls loading of internal calibration registers
                                                                 used to perform RX VCO calibration. */
        uint64_t ext_rx_eq_dfe_tap1_g2 : 8;  /**< [  7:  0](R/W) Controls the value of DFE data tap 1.
                                                                 This is signed input, twos complement encoded. */
#else /* Word 0 - Little Endian */
        uint64_t ext_rx_eq_dfe_tap1_g2 : 8;  /**< [  7:  0](R/W) Controls the value of DFE data tap 1.
                                                                 This is signed input, twos complement encoded. */
        uint64_t ext_rx_ref_ld_val_g1  : 7;  /**< [ 14:  8](R/W) Controls loading of internal calibration registers
                                                                 used to perform RX VCO calibration. */
        uint64_t reserved_15           : 1;
        uint64_t ext_rx_ref_ld_val_g2  : 7;  /**< [ 22: 16](R/W) Controls loading of internal calibration registers
                                                                 used to perform RX VCO calibration. */
        uint64_t ext_rx_sigdet_hf_en   : 1;  /**< [ 23: 23](R/W) Detects high frequency signal. */
        uint64_t ext_rx_sigdet_hf_filt_dis : 1;/**< [ 24: 24](R/W) Controls disabling of PCS_RAW sigdef_hf_out filter */
        uint64_t reserved_25_27        : 3;
        uint64_t ext_rx_sigdet_hf_thresh_g1 : 3;/**< [ 30: 28](R/W) Detects signal is high speed path. */
        uint64_t reserved_31           : 1;
        uint64_t ext_rx_sigdet_hf_thresh_g2 : 3;/**< [ 34: 32](R/W) Detects signal is high speed path. */
        uint64_t ext_rx_sigdet_lf_en   : 1;  /**< [ 35: 35](R/W) Detects low frequency signal */
        uint64_t ext_rx_sigdet_lf_filter_en : 1;/**< [ 36: 36](R/W) Controls enabling of low frequency filter. */
        uint64_t reserved_37_39        : 3;
        uint64_t ext_rx_term_ctrl      : 3;  /**< [ 42: 40](R/W) NA */
        uint64_t reserved_43           : 1;
        uint64_t ext_rx_vco_ld_val_g1  : 13; /**< [ 56: 44](R/W) Controls loading of RX VCO Calibration load value. */
        uint64_t reserved_57_63        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_usb31phy_cfg6_s cn; */
};
typedef union cavm_usbhx_uctl_usb31phy_cfg6 cavm_usbhx_uctl_usb31phy_cfg6_t;

static inline uint64_t CAVM_USBHX_UCTL_USB31PHY_CFG6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_USB31PHY_CFG6(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=1))
        return 0x868000100170ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100170ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_USB31PHY_CFG6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_USB31PHY_CFG6(a) cavm_usbhx_uctl_usb31phy_cfg6_t
#define bustype_CAVM_USBHX_UCTL_USB31PHY_CFG6(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_USB31PHY_CFG6(a) "USBHX_UCTL_USB31PHY_CFG6"
#define device_bar_CAVM_USBHX_UCTL_USB31PHY_CFG6(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_USB31PHY_CFG6(a) (a)
#define arguments_CAVM_USBHX_UCTL_USB31PHY_CFG6(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_usb31phy_cfg7
 *
 * USBH UCTL USB3.1 PHY Configuration Register 7
 * Configuration register for USB 3.1 PHY module
 */
union cavm_usbhx_uctl_usb31phy_cfg7
{
    uint64_t u;
    struct cavm_usbhx_uctl_usb31phy_cfg7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t ext_rx_sigdet_lf_thresh_g2 : 3;/**< [ 62: 60](R/W) NA */
        uint64_t reserved_59           : 1;
        uint64_t ext_rx_sigdet_lf_thresh_g1 : 3;/**< [ 58: 56](R/W) NA */
        uint64_t reserved_54_55        : 2;
        uint64_t ext_tx_eq_post_g2     : 6;  /**< [ 53: 48](R/W) NA */
        uint64_t reserved_46_47        : 2;
        uint64_t ext_tx_eq_post_g1     : 6;  /**< [ 45: 40](R/W) NA */
        uint64_t reserved_38_39        : 2;
        uint64_t ext_tx_eq_main_g2     : 6;  /**< [ 37: 32](R/W) NA */
        uint64_t reserved_30_31        : 2;
        uint64_t ext_tx_eq_main_g1     : 6;  /**< [ 29: 24](R/W) NA */
        uint64_t reserved_23           : 1;
        uint64_t ext_sup_rx_vco_vref_sel : 3;/**< [ 22: 20](R/W) Controls VCO regulator reference.
                                                                 This pin is static and shall be set
                                                                 before de-assert PHY_RESET. */
        uint64_t reserved_19           : 1;
        uint64_t ext_rx_vref_ctrl      : 3;  /**< [ 18: 16](R/W) Controls RX bias current. */
        uint64_t reserved_15           : 1;
        uint64_t ext_tx_eq_ovrd_g2     : 1;  /**< [ 14: 14](R/W) Controls overriding of values for TX EQ signals */
        uint64_t ext_tx_eq_ovrd_g1     : 1;  /**< [ 13: 13](R/W) Controls overriding of values for TX EQ signals */
        uint64_t ext_rx_vco_ld_val_g2  : 13; /**< [ 12:  0](R/W) Controls loading of RX VCO calibration load value. */
#else /* Word 0 - Little Endian */
        uint64_t ext_rx_vco_ld_val_g2  : 13; /**< [ 12:  0](R/W) Controls loading of RX VCO calibration load value. */
        uint64_t ext_tx_eq_ovrd_g1     : 1;  /**< [ 13: 13](R/W) Controls overriding of values for TX EQ signals */
        uint64_t ext_tx_eq_ovrd_g2     : 1;  /**< [ 14: 14](R/W) Controls overriding of values for TX EQ signals */
        uint64_t reserved_15           : 1;
        uint64_t ext_rx_vref_ctrl      : 3;  /**< [ 18: 16](R/W) Controls RX bias current. */
        uint64_t reserved_19           : 1;
        uint64_t ext_sup_rx_vco_vref_sel : 3;/**< [ 22: 20](R/W) Controls VCO regulator reference.
                                                                 This pin is static and shall be set
                                                                 before de-assert PHY_RESET. */
        uint64_t reserved_23           : 1;
        uint64_t ext_tx_eq_main_g1     : 6;  /**< [ 29: 24](R/W) NA */
        uint64_t reserved_30_31        : 2;
        uint64_t ext_tx_eq_main_g2     : 6;  /**< [ 37: 32](R/W) NA */
        uint64_t reserved_38_39        : 2;
        uint64_t ext_tx_eq_post_g1     : 6;  /**< [ 45: 40](R/W) NA */
        uint64_t reserved_46_47        : 2;
        uint64_t ext_tx_eq_post_g2     : 6;  /**< [ 53: 48](R/W) NA */
        uint64_t reserved_54_55        : 2;
        uint64_t ext_rx_sigdet_lf_thresh_g1 : 3;/**< [ 58: 56](R/W) NA */
        uint64_t reserved_59           : 1;
        uint64_t ext_rx_sigdet_lf_thresh_g2 : 3;/**< [ 62: 60](R/W) NA */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_usb31phy_cfg7_s cn; */
};
typedef union cavm_usbhx_uctl_usb31phy_cfg7 cavm_usbhx_uctl_usb31phy_cfg7_t;

static inline uint64_t CAVM_USBHX_UCTL_USB31PHY_CFG7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_USB31PHY_CFG7(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=1))
        return 0x868000100178ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100178ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_USB31PHY_CFG7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_USB31PHY_CFG7(a) cavm_usbhx_uctl_usb31phy_cfg7_t
#define bustype_CAVM_USBHX_UCTL_USB31PHY_CFG7(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_USB31PHY_CFG7(a) "USBHX_UCTL_USB31PHY_CFG7"
#define device_bar_CAVM_USBHX_UCTL_USB31PHY_CFG7(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_USB31PHY_CFG7(a) (a)
#define arguments_CAVM_USBHX_UCTL_USB31PHY_CFG7(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_usb31phy_cfg8
 *
 * USBH UCTL USB3.1 PHY Configuration Register 8
 * Configuration register for USB 3.1 PHY module
 */
union cavm_usbhx_uctl_usb31phy_cfg8
{
    uint64_t u;
    struct cavm_usbhx_uctl_usb31phy_cfg8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_30_63        : 34;
        uint64_t phy0_test_stop_clk_en : 1;  /**< [ 29: 29](R/W) Enables stop clock test mode. */
        uint64_t phy_test_burnin       : 1;  /**< [ 28: 28](R/W) It is all circuits activator. */
        uint64_t ext_tx_dcc_byp_ac_cap : 1;  /**< [ 27: 27](R/W) Controls bypassing of duty cycle corrector AC coupling capacitor
                                                                 0 = should be set for data rates \>= 2.5Gbps
                                                                 1 = should be set for data rates \< 2.5Gbps */
        uint64_t ext_tx_ana_rboost_en  : 2;  /**< [ 26: 25](R/W) Controls increase in swing of high-speed transition bits for tx. */
        uint64_t ext_tx_ana_iboost_en  : 1;  /**< [ 24: 24](R/W) Controls enabling of the the tx output swing to 2*tx_vswing_vref, if
                                                                 (2*tx_vswing_vref) \> vptx. */
        uint64_t ext_rx_dcc_byp_ac_cap : 1;  /**< [ 23: 23](R/W) Controls bypassing of duty cycle corrector AC coupling capacitor
                                                                 0 = should be set for data rates \>= 2.5Gbps
                                                                 1 = should be set for data rates \< 2.5Gbps */
        uint64_t ext_tx_vswing_lvl     : 3;  /**< [ 22: 20](R/W) Controls TX volatge boost level. */
        uint64_t reserved_19           : 1;
        uint64_t ext_tx_term_ctrl      : 3;  /**< [ 18: 16](R/W) NA */
        uint64_t reserved_14_15        : 2;
        uint64_t ext_tx_eq_pre_g2      : 6;  /**< [ 13:  8](R/W) Controls loading of RX VCO calibration load value. */
        uint64_t reserved_6_7          : 2;
        uint64_t ext_tx_eq_pre_g1      : 6;  /**< [  5:  0](R/W) Controls loading of RX VCO calibration load value. */
#else /* Word 0 - Little Endian */
        uint64_t ext_tx_eq_pre_g1      : 6;  /**< [  5:  0](R/W) Controls loading of RX VCO calibration load value. */
        uint64_t reserved_6_7          : 2;
        uint64_t ext_tx_eq_pre_g2      : 6;  /**< [ 13:  8](R/W) Controls loading of RX VCO calibration load value. */
        uint64_t reserved_14_15        : 2;
        uint64_t ext_tx_term_ctrl      : 3;  /**< [ 18: 16](R/W) NA */
        uint64_t reserved_19           : 1;
        uint64_t ext_tx_vswing_lvl     : 3;  /**< [ 22: 20](R/W) Controls TX volatge boost level. */
        uint64_t ext_rx_dcc_byp_ac_cap : 1;  /**< [ 23: 23](R/W) Controls bypassing of duty cycle corrector AC coupling capacitor
                                                                 0 = should be set for data rates \>= 2.5Gbps
                                                                 1 = should be set for data rates \< 2.5Gbps */
        uint64_t ext_tx_ana_iboost_en  : 1;  /**< [ 24: 24](R/W) Controls enabling of the the tx output swing to 2*tx_vswing_vref, if
                                                                 (2*tx_vswing_vref) \> vptx. */
        uint64_t ext_tx_ana_rboost_en  : 2;  /**< [ 26: 25](R/W) Controls increase in swing of high-speed transition bits for tx. */
        uint64_t ext_tx_dcc_byp_ac_cap : 1;  /**< [ 27: 27](R/W) Controls bypassing of duty cycle corrector AC coupling capacitor
                                                                 0 = should be set for data rates \>= 2.5Gbps
                                                                 1 = should be set for data rates \< 2.5Gbps */
        uint64_t phy_test_burnin       : 1;  /**< [ 28: 28](R/W) It is all circuits activator. */
        uint64_t phy0_test_stop_clk_en : 1;  /**< [ 29: 29](R/W) Enables stop clock test mode. */
        uint64_t reserved_30_63        : 34;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_usb31phy_cfg8_s cn; */
};
typedef union cavm_usbhx_uctl_usb31phy_cfg8 cavm_usbhx_uctl_usb31phy_cfg8_t;

static inline uint64_t CAVM_USBHX_UCTL_USB31PHY_CFG8(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_USB31PHY_CFG8(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA_BX) && (a<=1))
        return 0x868000100180ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100180ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_USB31PHY_CFG8", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_USB31PHY_CFG8(a) cavm_usbhx_uctl_usb31phy_cfg8_t
#define bustype_CAVM_USBHX_UCTL_USB31PHY_CFG8(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_USB31PHY_CFG8(a) "USBHX_UCTL_USB31PHY_CFG8"
#define device_bar_CAVM_USBHX_UCTL_USB31PHY_CFG8(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_USB31PHY_CFG8(a) (a)
#define arguments_CAVM_USBHX_UCTL_USB31PHY_CFG8(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#_uctl_utmiclk_counter
 *
 * USB 2 Clock Counter Register
 * This register is accessible only when USBH()_UCTL_CTL[H_CLK_EN] = 1.
 *
 * This register can be reset by core domain reset or with USBH()_UCTL_CTL[UCTL_RST].
 */
union cavm_usbhx_uctl_utmiclk_counter
{
    uint64_t u;
    struct cavm_usbhx_uctl_utmiclk_counter_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t counter               : 64; /**< [ 63:  0](R/W) USB 2.0 free running clock counter. Increments each edge of the USB 2.0 reference clock. */
#else /* Word 0 - Little Endian */
        uint64_t counter               : 64; /**< [ 63:  0](R/W) USB 2.0 free running clock counter. Increments each edge of the USB 2.0 reference clock. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhx_uctl_utmiclk_counter_s cn; */
};
typedef union cavm_usbhx_uctl_utmiclk_counter cavm_usbhx_uctl_utmiclk_counter_t;

static inline uint64_t CAVM_USBHX_UCTL_UTMICLK_COUNTER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHX_UCTL_UTMICLK_COUNTER(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x868000100018ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x868000100018ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHX_UCTL_UTMICLK_COUNTER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHX_UCTL_UTMICLK_COUNTER(a) cavm_usbhx_uctl_utmiclk_counter_t
#define bustype_CAVM_USBHX_UCTL_UTMICLK_COUNTER(a) CSR_TYPE_NCB
#define basename_CAVM_USBHX_UCTL_UTMICLK_COUNTER(a) "USBHX_UCTL_UTMICLK_COUNTER"
#define device_bar_CAVM_USBHX_UCTL_UTMICLK_COUNTER(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHX_UCTL_UTMICLK_COUNTER(a) (a)
#define arguments_CAVM_USBHX_UCTL_UTMICLK_COUNTER(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#mac_metal_fix
 *
 * Ext Global Mac Metal Fix Register
 * Global MAC Metal Fix
 */
union cavm_usbhxmac_metal_fix
{
    uint64_t u;
    struct cavm_usbhxmac_metal_fix_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t mac_metal_fix         : 32; /**< [ 31:  0](RO) Mac wrapper metal fix register for future use. */
#else /* Word 0 - Little Endian */
        uint64_t mac_metal_fix         : 32; /**< [ 31:  0](RO) Mac wrapper metal fix register for future use. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhxmac_metal_fix_s cn; */
};
typedef union cavm_usbhxmac_metal_fix cavm_usbhxmac_metal_fix_t;

static inline uint64_t CAVM_USBHXMAC_METAL_FIX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHXMAC_METAL_FIX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000ca00ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000ca00ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHXMAC_METAL_FIX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHXMAC_METAL_FIX(a) cavm_usbhxmac_metal_fix_t
#define bustype_CAVM_USBHXMAC_METAL_FIX(a) CSR_TYPE_NCB
#define basename_CAVM_USBHXMAC_METAL_FIX(a) "USBHXMAC_METAL_FIX"
#define device_bar_CAVM_USBHXMAC_METAL_FIX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHXMAC_METAL_FIX(a) (a)
#define arguments_CAVM_USBHXMAC_METAL_FIX(a) (a),-1,-1,-1

/**
 * Register (NCB) usbh#pcs_metal_fix
 *
 * RPM Ext Global Pcs Metal Fix Register
 * Global PCS Metal Fix
 */
union cavm_usbhxpcs_metal_fix
{
    uint64_t u;
    struct cavm_usbhxpcs_metal_fix_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t pcs_metal_fix         : 32; /**< [ 31:  0](RO) Pcs wrapper metal fix register for future use. */
#else /* Word 0 - Little Endian */
        uint64_t pcs_metal_fix         : 32; /**< [ 31:  0](RO) Pcs wrapper metal fix register for future use. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_usbhxpcs_metal_fix_s cn; */
};
typedef union cavm_usbhxpcs_metal_fix cavm_usbhxpcs_metal_fix_t;

static inline uint64_t CAVM_USBHXPCS_METAL_FIX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_USBHXPCS_METAL_FIX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=1))
        return 0x86800000ca08ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=1))
        return 0x86800000ca08ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("USBHXPCS_METAL_FIX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_USBHXPCS_METAL_FIX(a) cavm_usbhxpcs_metal_fix_t
#define bustype_CAVM_USBHXPCS_METAL_FIX(a) CSR_TYPE_NCB
#define basename_CAVM_USBHXPCS_METAL_FIX(a) "USBHXPCS_METAL_FIX"
#define device_bar_CAVM_USBHXPCS_METAL_FIX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_USBHXPCS_METAL_FIX(a) (a)
#define arguments_CAVM_USBHXPCS_METAL_FIX(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_USBH_H__ */
