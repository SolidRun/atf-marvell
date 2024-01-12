#ifndef __CAVM_CSRS_IOBN_H__
#define __CAVM_CSRS_IOBN_H__
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
 * IOBN.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration iobn_bar_e
 *
 * IOBN Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_IOBN_BAR_E_IOBNX_PF_BAR0(a) (0xc12020000000ll + 0x100000000ll * (a))
#define CAVM_IOBN_BAR_E_IOBNX_PF_BAR0_SIZE 0x100000ull
#define CAVM_IOBN_BAR_E_IOBNX_PF_BAR4(a) (0xc12020f00000ll + 0x100000000ll * (a))
#define CAVM_IOBN_BAR_E_IOBNX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration iobn_inb_err_e
 *
 * IOBN In Bound Error Enumeration
 * Enumerates the types of error detected on IOB inbound path. Errors are logged based on
 * priority, where ::ABORT_ZERO_ERR has highest
 * priority and ::ADDR_ERR has the lowest priority. See IOBN_INB_ERR_STATUS.
 */
#define CAVM_IOBN_INB_ERR_E_ABORT_ZERO_ERR (1)
#define CAVM_IOBN_INB_ERR_E_ADDR_ERR (2)
#define CAVM_IOBN_INB_ERR_E_NONE (0)
#define CAVM_IOBN_INB_ERR_E_RSVD (3)

/**
 * Enumeration iobn_int_vec_e
 *
 * IOBN MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_IOBN_INT_VEC_E_INTS (0)

/**
 * Enumeration iobn_ncbi_ro_mod_e
 *
 * IOBN NCBI Relax Order Modification Enumeration
 * Enumerates the controls for when CR's are allowed to pass PRs, see
 * IOBN_ARBID()_CTL[CRPPR_ENA].
 */
#define CAVM_IOBN_NCBI_RO_MOD_E_BUS_CTL (0)
#define CAVM_IOBN_NCBI_RO_MOD_E_OFF (2)
#define CAVM_IOBN_NCBI_RO_MOD_E_ON (3)
#define CAVM_IOBN_NCBI_RO_MOD_E_RSVD (1)

/**
 * Enumeration iobn_outb_err_e
 *
 * IOBN Outbound Error Enumeration
 * Enumerates the types of error detected on IOB outbound path. If the bit is set in
 * IOBN_OUTB_ERR_STATUS corresponding to the enumeration value, that error occurred.
 */
#define CAVM_IOBN_OUTB_ERR_E_ABORT_ZERO_ERR (1)
#define CAVM_IOBN_OUTB_ERR_E_ADDR_ERR (2)
#define CAVM_IOBN_OUTB_ERR_E_CLASS_A_FAULT (4)
#define CAVM_IOBN_OUTB_ERR_E_NCBO_RDY_FAULT (0x10)
#define CAVM_IOBN_OUTB_ERR_E_NONE (0)
#define CAVM_IOBN_OUTB_ERR_E_PERMIT_FAULT (8)

/**
 * Register (RSL) iobn#_cfg0
 *
 * IOBN General Configuration 0 Register
 */
union cavm_iobnx_cfg0
{
    uint64_t u;
    struct cavm_iobnx_cfg0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t clken                 : 4;  /**< [ 11:  8](R/W) Force the NCBO clock enable to be always on. For diagnostic use only.
                                                                 Each bit is control for a given NCB bus, where bit 8 is for NCB bus 0 and bit 11 is for NCB bus 3. */
        uint64_t dis_ncbo_cr_pois      : 4;  /**< [  7:  4](R/W) When set the IOBN will not send poison on NCBO CRs. [4] == NCB0,
                                                                 [5] == NCB1, [6] == NCB2, [7] == NCB3. */
        uint64_t reserved_1_3          : 3;
        uint64_t force_sclk_cond_clk_en : 1; /**< [  0:  0](R/W) Force on SCLKs. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t force_sclk_cond_clk_en : 1; /**< [  0:  0](R/W) Force on SCLKs. For diagnostic use only. */
        uint64_t reserved_1_3          : 3;
        uint64_t dis_ncbo_cr_pois      : 4;  /**< [  7:  4](R/W) When set the IOBN will not send poison on NCBO CRs. [4] == NCB0,
                                                                 [5] == NCB1, [6] == NCB2, [7] == NCB3. */
        uint64_t clken                 : 4;  /**< [ 11:  8](R/W) Force the NCBO clock enable to be always on. For diagnostic use only.
                                                                 Each bit is control for a given NCB bus, where bit 8 is for NCB bus 0 and bit 11 is for NCB bus 3. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_cfg0_s cn; */
};
typedef union cavm_iobnx_cfg0 cavm_iobnx_cfg0_t;

static inline uint64_t CAVM_IOBNX_CFG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_CFG0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=7))
        return 0xc12020002000ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("IOBNX_CFG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_CFG0(a) cavm_iobnx_cfg0_t
#define bustype_CAVM_IOBNX_CFG0(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_CFG0(a) "IOBNX_CFG0"
#define device_bar_CAVM_IOBNX_CFG0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_CFG0(a) (a)
#define arguments_CAVM_IOBNX_CFG0(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_cfg1
 *
 * IOBN General Configuration 1 Register
 */
union cavm_iobnx_cfg1
{
    uint64_t u;
    struct cavm_iobnx_cfg1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t utlb_cam_evict_cnt    : 6;  /**< [ 27: 22](R/W) Number of translation request before CAM entry is removed from the UIC CAM. */
        uint64_t utlb_clone_dis        : 1;  /**< [ 21: 21](R/W) Disable the uTLB Clone.  All TXNs sent by uTLB to SMMU will bypass the Clone Logic.. */
        uint64_t eats_cache_dis        : 1;  /**< [ 20: 20](R/W) Disable the EATS cache.  All ATS translated traffic will go to the SMMU for checking. */
        uint64_t smmu_rtry_psize       : 4;  /**< [ 19: 16](R/W) When set reserves entries from the retry buffer for SMMU requests. The SMMU pool
                                                                 will be used when all the shared pool entries are exhausted. */
        uint64_t reserved_12_15        : 4;
        uint64_t mem_rtry_psize        : 4;  /**< [ 11:  8](R/W) When set reserves entries from the retry buffer for memory requests. The memory
                                                                 pool will be used when all the shared pool entries are exhausted. */
        uint64_t reserved_4_7          : 4;
        uint64_t tlb_sync_dis          : 1;  /**< [  3:  3](R/W) When set the IOBN will return SYNC-RDY to the SMMU without waiting for
                                                                 outstanding request to receive responses. For diagnostic use only. */
        uint64_t reserved_1_2          : 2;
        uint64_t force_rclk_cond_clk_en : 1; /**< [  0:  0](R/W) Force rclk conditional clocks active. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t force_rclk_cond_clk_en : 1; /**< [  0:  0](R/W) Force rclk conditional clocks active. For diagnostic use only. */
        uint64_t reserved_1_2          : 2;
        uint64_t tlb_sync_dis          : 1;  /**< [  3:  3](R/W) When set the IOBN will return SYNC-RDY to the SMMU without waiting for
                                                                 outstanding request to receive responses. For diagnostic use only. */
        uint64_t reserved_4_7          : 4;
        uint64_t mem_rtry_psize        : 4;  /**< [ 11:  8](R/W) When set reserves entries from the retry buffer for memory requests. The memory
                                                                 pool will be used when all the shared pool entries are exhausted. */
        uint64_t reserved_12_15        : 4;
        uint64_t smmu_rtry_psize       : 4;  /**< [ 19: 16](R/W) When set reserves entries from the retry buffer for SMMU requests. The SMMU pool
                                                                 will be used when all the shared pool entries are exhausted. */
        uint64_t eats_cache_dis        : 1;  /**< [ 20: 20](R/W) Disable the EATS cache.  All ATS translated traffic will go to the SMMU for checking. */
        uint64_t utlb_clone_dis        : 1;  /**< [ 21: 21](R/W) Disable the uTLB Clone.  All TXNs sent by uTLB to SMMU will bypass the Clone Logic.. */
        uint64_t utlb_cam_evict_cnt    : 6;  /**< [ 27: 22](R/W) Number of translation request before CAM entry is removed from the UIC CAM. */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_cfg1_s cn; */
};
typedef union cavm_iobnx_cfg1 cavm_iobnx_cfg1_t;

static inline uint64_t CAVM_IOBNX_CFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_CFG1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=7))
        return 0xc12020082010ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("IOBNX_CFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_CFG1(a) cavm_iobnx_cfg1_t
#define bustype_CAVM_IOBNX_CFG1(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_CFG1(a) "IOBNX_CFG1"
#define device_bar_CAVM_IOBNX_CFG1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_CFG1(a) (a)
#define arguments_CAVM_IOBNX_CFG1(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_const
 *
 * IOBN Constant Registers
 * This register returns discovery information.
 */
union cavm_iobnx_const
{
    uint64_t u;
    struct cavm_iobnx_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t st_ncb_num            : 4;  /**< [ 19: 16](RO) Starting NCB Number for this IOB device. */
        uint64_t reserved_11_15        : 5;
        uint64_t ncbs                  : 3;  /**< [ 10:  8](RO) Number of physical NCB buses attached to this IOB. */
        uint64_t reserved_4_7          : 4;
        uint64_t lsw_pres              : 4;  /**< [  3:  0](RO) Bit set per NCB bus if LSW is present. */
#else /* Word 0 - Little Endian */
        uint64_t lsw_pres              : 4;  /**< [  3:  0](RO) Bit set per NCB bus if LSW is present. */
        uint64_t reserved_4_7          : 4;
        uint64_t ncbs                  : 3;  /**< [ 10:  8](RO) Number of physical NCB buses attached to this IOB. */
        uint64_t reserved_11_15        : 5;
        uint64_t st_ncb_num            : 4;  /**< [ 19: 16](RO) Starting NCB Number for this IOB device. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_const_s cn; */
};
typedef union cavm_iobnx_const cavm_iobnx_const_t;

static inline uint64_t CAVM_IOBNX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_CONST(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=7))
        return 0xc12020000000ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("IOBNX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_CONST(a) cavm_iobnx_const_t
#define bustype_CAVM_IOBNX_CONST(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_CONST(a) "IOBNX_CONST"
#define device_bar_CAVM_IOBNX_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_CONST(a) (a)
#define arguments_CAVM_IOBNX_CONST(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_dom#_bus#_streams
 *
 * IOBN Domain Bus Permit Registers
 * This register sets the permissions for a NCBI transaction (which are DMA
 * transactions or MSI-X writes), for requests for NCB device virtual-functions
 * and bridges.
 *
 * Index {b} corresponds to the stream's domain (stream_id\<21:16\>).
 *
 * Index {c} corresponds to the stream's bus number (stream_id\<15:8\>).
 *
 * For each combination of index {b} and {c}, each index {a} (the IOB number) must be
 * programmed to the same value.
 *
 * Streams which hit index {c}=0x0 are also affected by IOBN_DOM()_DEV()_STREAMS.
 * Streams which hit index {b}=PCC_DEV_CON_E::MRML\<21:16\>,
 * {c}=PCC_DEV_CON_E::MRML\<15:8\> are also affected by IOBN_RSL()_STREAMS.
 * Both of those alternative registers provide better granularity, so those indices
 * into this register should be left permissive (value of 0x0).
 */
union cavm_iobnx_domx_busx_streams
{
    uint64_t u;
    struct cavm_iobnx_domx_busx_streams_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t strm_nsec             : 1;  /**< [  1:  1](SR/W) Stream nonsecure.

                                                                   0 = The device's stream ID is marked secure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use secure world
                                                                   lookup. The SMMU may, if properly configured, generate an outgoing physical
                                                                   address that is secure.

                                                                   1 = The device's stream ID is marked nonsecure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use nonsecure world
                                                                   lookup. The SMMU outgoing physical address will be nonsecure.

                                                                   [STRM_NSEC] is ignored if the device is making a physical request (as these
                                                                   transactions bypass the SMMU translation process).

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
        uint64_t phys_nsec             : 1;  /**< [  0:  0](SR/W) Physical nonsecure.
                                                                   0 = When the device makes a physical request, IOB will use the device's
                                                                   requested secure bit to determine if the request to DRAM/LLC is secure or not.
                                                                   1 = When the device makes a physical request, IOB will squash the
                                                                   device's secure request and issue the request to DRAM/LLC as nonsecure.

                                                                   Ignored if a device makes a nonphysical request.  (As nonphysical requests
                                                                   cause the SMMU to generate the SMMU-outgoing secure bit based on the SMMU
                                                                   translation process, including [STRM_NSEC].)

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
#else /* Word 0 - Little Endian */
        uint64_t phys_nsec             : 1;  /**< [  0:  0](SR/W) Physical nonsecure.
                                                                   0 = When the device makes a physical request, IOB will use the device's
                                                                   requested secure bit to determine if the request to DRAM/LLC is secure or not.
                                                                   1 = When the device makes a physical request, IOB will squash the
                                                                   device's secure request and issue the request to DRAM/LLC as nonsecure.

                                                                   Ignored if a device makes a nonphysical request.  (As nonphysical requests
                                                                   cause the SMMU to generate the SMMU-outgoing secure bit based on the SMMU
                                                                   translation process, including [STRM_NSEC].)

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
        uint64_t strm_nsec             : 1;  /**< [  1:  1](SR/W) Stream nonsecure.

                                                                   0 = The device's stream ID is marked secure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use secure world
                                                                   lookup. The SMMU may, if properly configured, generate an outgoing physical
                                                                   address that is secure.

                                                                   1 = The device's stream ID is marked nonsecure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use nonsecure world
                                                                   lookup. The SMMU outgoing physical address will be nonsecure.

                                                                   [STRM_NSEC] is ignored if the device is making a physical request (as these
                                                                   transactions bypass the SMMU translation process).

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_domx_busx_streams_s cn; */
};
typedef union cavm_iobnx_domx_busx_streams cavm_iobnx_domx_busx_streams_t;

static inline uint64_t CAVM_IOBNX_DOMX_BUSX_STREAMS(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_DOMX_BUSX_STREAMS(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=7) && (b<=18) && (c<=255)))
        return 0xc12020040000ll + 0x100000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x1f) + 8ll * ((c) & 0xff);
    __cavm_csr_fatal("IOBNX_DOMX_BUSX_STREAMS", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_DOMX_BUSX_STREAMS(a,b,c) cavm_iobnx_domx_busx_streams_t
#define bustype_CAVM_IOBNX_DOMX_BUSX_STREAMS(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_DOMX_BUSX_STREAMS(a,b,c) "IOBNX_DOMX_BUSX_STREAMS"
#define device_bar_CAVM_IOBNX_DOMX_BUSX_STREAMS(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_DOMX_BUSX_STREAMS(a,b,c) (a)
#define arguments_CAVM_IOBNX_DOMX_BUSX_STREAMS(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) iobn#_dom#_dev#_streams
 *
 * IOBN Device Bus Permit Registers
 * This register sets the permissions for a NCBI transaction (which are DMA
 * transactions or MSI-X writes), for requests for NCB device physical-functions,
 * i.e. those where:
 *
 *   _ stream_id\<15:8\> = 0x0.
 *
 * Index {a} corresponds to the stream's domain number (stream_id\<21:16\>).
 *
 * Index {b} corresponds to the non-ARI ECAM device number (stream_id\<7:3\>).
 *
 * For each combination of index {b} and {c}, each index {a} (the IOB number) must be
 * programmed to the same value.
 */
union cavm_iobnx_domx_devx_streams
{
    uint64_t u;
    struct cavm_iobnx_domx_devx_streams_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t strm_nsec             : 1;  /**< [  1:  1](SR/W) Stream nonsecure.

                                                                   0 = The device's stream ID is marked secure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use secure world
                                                                   lookup. The SMMU may, if properly configured, generate an outgoing physical
                                                                   address that is secure.

                                                                   1 = The device's stream ID is marked nonsecure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use nonsecure world
                                                                   lookup. The SMMU outgoing physical address will be nonsecure.

                                                                   [STRM_NSEC] is ignored if the device is making a physical request (as these
                                                                   transactions bypass the SMMU translation process).

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
        uint64_t phys_nsec             : 1;  /**< [  0:  0](SR/W) Physical nonsecure.
                                                                   0 = When the device makes a physical request, IOB will use the device's
                                                                   requested secure bit to determine if the request to DRAM/LLC is secure or not.
                                                                   1 = When the device makes a physical request, IOB will squash the
                                                                   device's secure request and issue the request to DRAM/LLC as nonsecure.

                                                                   Ignored if a device makes a nonphysical request.  (As nonphysical requests
                                                                   cause the SMMU to generate the SMMU-outgoing secure bit based on the SMMU
                                                                   translation process, including [STRM_NSEC].)

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
#else /* Word 0 - Little Endian */
        uint64_t phys_nsec             : 1;  /**< [  0:  0](SR/W) Physical nonsecure.
                                                                   0 = When the device makes a physical request, IOB will use the device's
                                                                   requested secure bit to determine if the request to DRAM/LLC is secure or not.
                                                                   1 = When the device makes a physical request, IOB will squash the
                                                                   device's secure request and issue the request to DRAM/LLC as nonsecure.

                                                                   Ignored if a device makes a nonphysical request.  (As nonphysical requests
                                                                   cause the SMMU to generate the SMMU-outgoing secure bit based on the SMMU
                                                                   translation process, including [STRM_NSEC].)

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
        uint64_t strm_nsec             : 1;  /**< [  1:  1](SR/W) Stream nonsecure.

                                                                   0 = The device's stream ID is marked secure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use secure world
                                                                   lookup. The SMMU may, if properly configured, generate an outgoing physical
                                                                   address that is secure.

                                                                   1 = The device's stream ID is marked nonsecure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use nonsecure world
                                                                   lookup. The SMMU outgoing physical address will be nonsecure.

                                                                   [STRM_NSEC] is ignored if the device is making a physical request (as these
                                                                   transactions bypass the SMMU translation process).

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_domx_devx_streams_s cn; */
};
typedef union cavm_iobnx_domx_devx_streams cavm_iobnx_domx_devx_streams_t;

static inline uint64_t CAVM_IOBNX_DOMX_DEVX_STREAMS(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_DOMX_DEVX_STREAMS(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=7) && (b<=18) && (c<=31)))
        return 0xc12020010000ll + 0x100000000ll * ((a) & 0x7) + 0x100ll * ((b) & 0x1f) + 8ll * ((c) & 0x1f);
    __cavm_csr_fatal("IOBNX_DOMX_DEVX_STREAMS", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_DOMX_DEVX_STREAMS(a,b,c) cavm_iobnx_domx_devx_streams_t
#define bustype_CAVM_IOBNX_DOMX_DEVX_STREAMS(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_DOMX_DEVX_STREAMS(a,b,c) "IOBNX_DOMX_DEVX_STREAMS"
#define device_bar_CAVM_IOBNX_DOMX_DEVX_STREAMS(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_DOMX_DEVX_STREAMS(a,b,c) (a)
#define arguments_CAVM_IOBNX_DOMX_DEVX_STREAMS(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) iobn#_ecam_dom#_dev#_permit
 *
 * IOBN ECAM Domain Device Permit Registers
 * Program identically to ECAM_DOM()_DEV()_PERMIT.
 *
 * This register sets the permissions for a ECAM access  (derived from request address) to NCBO
 * for a request from an IO device.
 * Index {a} corresponds to the domain, addr[32:28].
 * Index {b} corresponds to the dev, addr[19:15].
 * If ECAM access resuts in a failure a response will be returned and where required data
 * with a value of all 1's and FAULT == 0 (MESH, CHI_RESPERR_OK).
 *
 * If IOBN_CONST.UNIMP_REG is set this register is not implemented.
 * Reads will respond with zero and writes will be ignored.
 */
union cavm_iobnx_ecam_domx_devx_permit
{
    uint64_t u;
    struct cavm_iobnx_ecam_domx_devx_permit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t lock                  : 1;  /**< [  8:  8](SR/W1S) Lock Bit Lock the register from any further updates Once this bit is set all the
                                                                 subsequent writes are ignored. The whole register acts as read only. */
        uint64_t kill                  : 1;  /**< [  7:  7](SR/W1S) Kill the device. Once written with one, stays
                                                                 set until warm chip reset.  If set, no access
                                                                 allowed by any initiator. */
        uint64_t reserved_5_6          : 2;
        uint64_t xcp2_dis              : 1;  /**< [  4:  4](SR/W) XCP2 disable. As with [SEC_DIS], but for accesses initiated by XCP2 (CCP). */
        uint64_t xcp1_dis              : 1;  /**< [  3:  3](SR/W) XCP1 disable. As with [SEC_DIS], but for accesses initiated by XCP1 (MCP). */
        uint64_t xcp0_dis              : 1;  /**< [  2:  2](SR/W) XCP0 disable. As with [SEC_DIS], but for accesses initiated by XCP0 (SCP). */
        uint64_t nsec_dis              : 1;  /**< [  1:  1](SR/W) Nonsecure disable. As with [SEC_DIS], but for accesses initiated by non-secure devices
                                                                 excluding XCP0/XCP1/XCP2. */
        uint64_t sec_dis               : 1;  /**< [  0:  0](SR/W) Secure disable. */
#else /* Word 0 - Little Endian */
        uint64_t sec_dis               : 1;  /**< [  0:  0](SR/W) Secure disable. */
        uint64_t nsec_dis              : 1;  /**< [  1:  1](SR/W) Nonsecure disable. As with [SEC_DIS], but for accesses initiated by non-secure devices
                                                                 excluding XCP0/XCP1/XCP2. */
        uint64_t xcp0_dis              : 1;  /**< [  2:  2](SR/W) XCP0 disable. As with [SEC_DIS], but for accesses initiated by XCP0 (SCP). */
        uint64_t xcp1_dis              : 1;  /**< [  3:  3](SR/W) XCP1 disable. As with [SEC_DIS], but for accesses initiated by XCP1 (MCP). */
        uint64_t xcp2_dis              : 1;  /**< [  4:  4](SR/W) XCP2 disable. As with [SEC_DIS], but for accesses initiated by XCP2 (CCP). */
        uint64_t reserved_5_6          : 2;
        uint64_t kill                  : 1;  /**< [  7:  7](SR/W1S) Kill the device. Once written with one, stays
                                                                 set until warm chip reset.  If set, no access
                                                                 allowed by any initiator. */
        uint64_t lock                  : 1;  /**< [  8:  8](SR/W1S) Lock Bit Lock the register from any further updates Once this bit is set all the
                                                                 subsequent writes are ignored. The whole register acts as read only. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_ecam_domx_devx_permit_s cn; */
};
typedef union cavm_iobnx_ecam_domx_devx_permit cavm_iobnx_ecam_domx_devx_permit_t;

static inline uint64_t CAVM_IOBNX_ECAM_DOMX_DEVX_PERMIT(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_ECAM_DOMX_DEVX_PERMIT(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=7) && (b<=18) && (c<=31)))
        return 0xc120200e0000ll + 0x100000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x1f) + 8ll * ((c) & 0x1f);
    __cavm_csr_fatal("IOBNX_ECAM_DOMX_DEVX_PERMIT", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_ECAM_DOMX_DEVX_PERMIT(a,b,c) cavm_iobnx_ecam_domx_devx_permit_t
#define bustype_CAVM_IOBNX_ECAM_DOMX_DEVX_PERMIT(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_ECAM_DOMX_DEVX_PERMIT(a,b,c) "IOBNX_ECAM_DOMX_DEVX_PERMIT"
#define device_bar_CAVM_IOBNX_ECAM_DOMX_DEVX_PERMIT(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_ECAM_DOMX_DEVX_PERMIT(a,b,c) (a)
#define arguments_CAVM_IOBNX_ECAM_DOMX_DEVX_PERMIT(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) iobn#_err_ena
 *
 * IOBN Error Enable Register
 * Controls what errors are logged into IOBN_INB_ERR_STATUS and IOBN_OUTB_ERR_STATUS registers.
 */
union cavm_iobnx_err_ena
{
    uint64_t u;
    struct cavm_iobnx_err_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t outb_err_enb          : 5;  /**< [ 12:  8](R/W) Each bit if set enables logging errors, with bit numbers defined by IOBN_OUTB_ERR_E - 1. */
        uint64_t reserved_2_7          : 6;
        uint64_t inb_err_enb           : 2;  /**< [  1:  0](R/W) Each bit if set enables logging errors, with bit numbers defined by IOBN_INB_ERR_E - 1. */
#else /* Word 0 - Little Endian */
        uint64_t inb_err_enb           : 2;  /**< [  1:  0](R/W) Each bit if set enables logging errors, with bit numbers defined by IOBN_INB_ERR_E - 1. */
        uint64_t reserved_2_7          : 6;
        uint64_t outb_err_enb          : 5;  /**< [ 12:  8](R/W) Each bit if set enables logging errors, with bit numbers defined by IOBN_OUTB_ERR_E - 1. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_err_ena_s cn; */
};
typedef union cavm_iobnx_err_ena cavm_iobnx_err_ena_t;

static inline uint64_t CAVM_IOBNX_ERR_ENA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_ERR_ENA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=7))
        return 0xc12020083080ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("IOBNX_ERR_ENA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_ERR_ENA(a) cavm_iobnx_err_ena_t
#define bustype_CAVM_IOBNX_ERR_ENA(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_ERR_ENA(a) "IOBNX_ERR_ENA"
#define device_bar_CAVM_IOBNX_ERR_ENA(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_ERR_ENA(a) (a)
#define arguments_CAVM_IOBNX_ERR_ENA(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_inb_err_status
 *
 * IOBN In Bound Error Status Register
 * Inbound error status register logs first error detected on inbound control path.
 */
union cavm_iobnx_inb_err_status
{
    uint64_t u;
    struct cavm_iobnx_inb_err_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t arbid                 : 4;  /**< [ 59: 56](RO/H) Captured flat ARBID when error condition is detected on inbound processing path.
                                                                 Valid when [ERR_TYPE] is nonzero */
        uint64_t reserved_52_55        : 4;
        uint64_t address               : 40; /**< [ 51: 12](RO/H) Captured address when error condition is detected on inbound processing path. Valid when
                                                                 [ERR_TYPE] is nonzero. */
        uint64_t reserved_2_11         : 10;
        uint64_t err_type              : 2;  /**< [  1:  0](R/W1C/H) Error type. Bits enumerated by IOBN_INB_ERR_E. */
#else /* Word 0 - Little Endian */
        uint64_t err_type              : 2;  /**< [  1:  0](R/W1C/H) Error type. Bits enumerated by IOBN_INB_ERR_E. */
        uint64_t reserved_2_11         : 10;
        uint64_t address               : 40; /**< [ 51: 12](RO/H) Captured address when error condition is detected on inbound processing path. Valid when
                                                                 [ERR_TYPE] is nonzero. */
        uint64_t reserved_52_55        : 4;
        uint64_t arbid                 : 4;  /**< [ 59: 56](RO/H) Captured flat ARBID when error condition is detected on inbound processing path.
                                                                 Valid when [ERR_TYPE] is nonzero */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_inb_err_status_s cn; */
};
typedef union cavm_iobnx_inb_err_status cavm_iobnx_inb_err_status_t;

static inline uint64_t CAVM_IOBNX_INB_ERR_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_INB_ERR_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=7))
        return 0xc12020083088ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("IOBNX_INB_ERR_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_INB_ERR_STATUS(a) cavm_iobnx_inb_err_status_t
#define bustype_CAVM_IOBNX_INB_ERR_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_INB_ERR_STATUS(a) "IOBNX_INB_ERR_STATUS"
#define device_bar_CAVM_IOBNX_INB_ERR_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_INB_ERR_STATUS(a) (a)
#define arguments_CAVM_IOBNX_INB_ERR_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_inb_mesh_throttle
 *
 * IOBN Inbound Mesh Throttle Register
 * Controls the rate of TX_REQ sent to the MESH.
 * Rate is dynamically controlled by ARM CHI CBUSY messages. Absolute min rate is 1
 * every 16 cycles. Max rate is 16 every 16 cycles.
 * Decrease TX_REQ rate if more than THRESH of the last WINDOW reponses contain CBUSY==3.
 * Increase TX_REQ rate if more than THRESH of the last WINDOW reponses contain CBUSY \<2.
 */
union cavm_iobnx_inb_mesh_throttle
{
    uint64_t u;
    struct cavm_iobnx_inb_mesh_throttle_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t timeout               : 4;  /**< [ 23: 20](R/W) Increase the rate by 1 every 2^TIMEOUT cycles. 0=disable, 1-15=2^TIMEOUT cycles. */
        uint64_t max_rate              : 4;  /**< [ 19: 16](R/W) Maximum rate minus 1. It is required that MIN_RATE \<= MAX_RATE. */
        uint64_t min_rate              : 4;  /**< [ 15: 12](R/W) Minimum rate minus 1. It is required that MIN_RATE \<= MAX_RATE. */
        uint64_t window                : 2;  /**< [ 11: 10](R/W) Number of CBUSY responses in the sampling window. 0=64, 1=128, 2=256, 3=512 */
        uint64_t thresh                : 2;  /**< [  9:  8](R/W) Fraction of CBUSY responses in the sampling window necessary to be considered a
                                                                 valid sample of that CBUSY value. 0=1/32, 1=1/16, 2=1/8, 3=1/4 */
        uint64_t decr                  : 2;  /**< [  7:  6](R/W) Dynamic rate decrement minus 1. Controls how quickly the dynamic TXREQ rate is
                                                                 decreased when CBUSY indicates the value 3. */
        uint64_t incr                  : 2;  /**< [  5:  4](R/W) Dynamic rate increment minus 1. Controls how quickly the dynamic TXREQ rate is
                                                                 increased when CBUSY indicates values less than 2. */
        uint64_t reserved_1_3          : 3;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) 0=disable rate control. 1=enable rate control. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) 0=disable rate control. 1=enable rate control. */
        uint64_t reserved_1_3          : 3;
        uint64_t incr                  : 2;  /**< [  5:  4](R/W) Dynamic rate increment minus 1. Controls how quickly the dynamic TXREQ rate is
                                                                 increased when CBUSY indicates values less than 2. */
        uint64_t decr                  : 2;  /**< [  7:  6](R/W) Dynamic rate decrement minus 1. Controls how quickly the dynamic TXREQ rate is
                                                                 decreased when CBUSY indicates the value 3. */
        uint64_t thresh                : 2;  /**< [  9:  8](R/W) Fraction of CBUSY responses in the sampling window necessary to be considered a
                                                                 valid sample of that CBUSY value. 0=1/32, 1=1/16, 2=1/8, 3=1/4 */
        uint64_t window                : 2;  /**< [ 11: 10](R/W) Number of CBUSY responses in the sampling window. 0=64, 1=128, 2=256, 3=512 */
        uint64_t min_rate              : 4;  /**< [ 15: 12](R/W) Minimum rate minus 1. It is required that MIN_RATE \<= MAX_RATE. */
        uint64_t max_rate              : 4;  /**< [ 19: 16](R/W) Maximum rate minus 1. It is required that MIN_RATE \<= MAX_RATE. */
        uint64_t timeout               : 4;  /**< [ 23: 20](R/W) Increase the rate by 1 every 2^TIMEOUT cycles. 0=disable, 1-15=2^TIMEOUT cycles. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_inb_mesh_throttle_s cn; */
};
typedef union cavm_iobnx_inb_mesh_throttle cavm_iobnx_inb_mesh_throttle_t;

static inline uint64_t CAVM_IOBNX_INB_MESH_THROTTLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_INB_MESH_THROTTLE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=7))
        return 0xc12020082200ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("IOBNX_INB_MESH_THROTTLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_INB_MESH_THROTTLE(a) cavm_iobnx_inb_mesh_throttle_t
#define bustype_CAVM_IOBNX_INB_MESH_THROTTLE(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_INB_MESH_THROTTLE(a) "IOBNX_INB_MESH_THROTTLE"
#define device_bar_CAVM_IOBNX_INB_MESH_THROTTLE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_INB_MESH_THROTTLE(a) (a)
#define arguments_CAVM_IOBNX_INB_MESH_THROTTLE(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_int_ena_w1c
 *
 * IOBN Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_iobnx_int_ena_w1c
{
    uint64_t u;
    struct cavm_iobnx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t msh_dato_sbe          : 1;  /**< [ 32: 32](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[MSH_DATO_SBE]. */
        uint64_t msh_dato_dbe          : 1;  /**< [ 31: 31](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[MSH_DATO_DBE]. */
        uint64_t msh_smmu_psn          : 1;  /**< [ 30: 30](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[MSH_SMMU_PSN]. */
        uint64_t msh_rsp1_chk          : 1;  /**< [ 29: 29](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[MSH_RSP1_CHK]. */
        uint64_t msh_dat1_chk          : 1;  /**< [ 28: 28](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[MSH_DAT1_CHK]. */
        uint64_t msh_rsp_chk           : 1;  /**< [ 27: 27](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[MSH_RSP_CHK]. */
        uint64_t msh_snp_chk           : 1;  /**< [ 26: 26](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[MSH_SNP_CHK]. */
        uint64_t msh_req_chk           : 1;  /**< [ 25: 25](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[MSH_REQ_CHK]. */
        uint64_t msh_dat_chk           : 1;  /**< [ 24: 24](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[MSH_DAT_CHK]. */
        uint64_t reserved_22_23        : 2;
        uint64_t msh_dat_sbe           : 1;  /**< [ 21: 21](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[MSH_DAT_SBE]. */
        uint64_t msh_dat_dbe           : 1;  /**< [ 20: 20](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[MSH_DAT_DBE]. */
        uint64_t ncbo_flt_cr           : 4;  /**< [ 19: 16](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[NCBO_FLT_CR]. */
        uint64_t ncbo_pois_cr          : 4;  /**< [ 15: 12](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[NCBO_POIS_CR]. */
        uint64_t ncbi_unexp_cr         : 4;  /**< [ 11:  8](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[NCBI_UNEXP_CR]. */
        uint64_t ncbo_ncb_psn          : 4;  /**< [  7:  4](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[NCBO_NCB_PSN]. */
        uint64_t ncbo_to               : 4;  /**< [  3:  0](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[NCBO_TO]. */
#else /* Word 0 - Little Endian */
        uint64_t ncbo_to               : 4;  /**< [  3:  0](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[NCBO_TO]. */
        uint64_t ncbo_ncb_psn          : 4;  /**< [  7:  4](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[NCBO_NCB_PSN]. */
        uint64_t ncbi_unexp_cr         : 4;  /**< [ 11:  8](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[NCBI_UNEXP_CR]. */
        uint64_t ncbo_pois_cr          : 4;  /**< [ 15: 12](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[NCBO_POIS_CR]. */
        uint64_t ncbo_flt_cr           : 4;  /**< [ 19: 16](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[NCBO_FLT_CR]. */
        uint64_t msh_dat_dbe           : 1;  /**< [ 20: 20](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[MSH_DAT_DBE]. */
        uint64_t msh_dat_sbe           : 1;  /**< [ 21: 21](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[MSH_DAT_SBE]. */
        uint64_t reserved_22_23        : 2;
        uint64_t msh_dat_chk           : 1;  /**< [ 24: 24](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[MSH_DAT_CHK]. */
        uint64_t msh_req_chk           : 1;  /**< [ 25: 25](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[MSH_REQ_CHK]. */
        uint64_t msh_snp_chk           : 1;  /**< [ 26: 26](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[MSH_SNP_CHK]. */
        uint64_t msh_rsp_chk           : 1;  /**< [ 27: 27](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[MSH_RSP_CHK]. */
        uint64_t msh_dat1_chk          : 1;  /**< [ 28: 28](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[MSH_DAT1_CHK]. */
        uint64_t msh_rsp1_chk          : 1;  /**< [ 29: 29](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[MSH_RSP1_CHK]. */
        uint64_t msh_smmu_psn          : 1;  /**< [ 30: 30](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[MSH_SMMU_PSN]. */
        uint64_t msh_dato_dbe          : 1;  /**< [ 31: 31](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[MSH_DATO_DBE]. */
        uint64_t msh_dato_sbe          : 1;  /**< [ 32: 32](R/W1C/H) Reads or clears enable for IOBN(0..7)_INT_SUM[MSH_DATO_SBE]. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_int_ena_w1c_s cn; */
};
typedef union cavm_iobnx_int_ena_w1c cavm_iobnx_int_ena_w1c_t;

static inline uint64_t CAVM_IOBNX_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_INT_ENA_W1C(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=7))
        return 0xc12020088000ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("IOBNX_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_INT_ENA_W1C(a) cavm_iobnx_int_ena_w1c_t
#define bustype_CAVM_IOBNX_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_INT_ENA_W1C(a) "IOBNX_INT_ENA_W1C"
#define device_bar_CAVM_IOBNX_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_INT_ENA_W1C(a) (a)
#define arguments_CAVM_IOBNX_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_int_ena_w1s
 *
 * IOBN Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_iobnx_int_ena_w1s
{
    uint64_t u;
    struct cavm_iobnx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t msh_dato_sbe          : 1;  /**< [ 32: 32](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[MSH_DATO_SBE]. */
        uint64_t msh_dato_dbe          : 1;  /**< [ 31: 31](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[MSH_DATO_DBE]. */
        uint64_t msh_smmu_psn          : 1;  /**< [ 30: 30](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[MSH_SMMU_PSN]. */
        uint64_t msh_rsp1_chk          : 1;  /**< [ 29: 29](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[MSH_RSP1_CHK]. */
        uint64_t msh_dat1_chk          : 1;  /**< [ 28: 28](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[MSH_DAT1_CHK]. */
        uint64_t msh_rsp_chk           : 1;  /**< [ 27: 27](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[MSH_RSP_CHK]. */
        uint64_t msh_snp_chk           : 1;  /**< [ 26: 26](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[MSH_SNP_CHK]. */
        uint64_t msh_req_chk           : 1;  /**< [ 25: 25](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[MSH_REQ_CHK]. */
        uint64_t msh_dat_chk           : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[MSH_DAT_CHK]. */
        uint64_t reserved_22_23        : 2;
        uint64_t msh_dat_sbe           : 1;  /**< [ 21: 21](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[MSH_DAT_SBE]. */
        uint64_t msh_dat_dbe           : 1;  /**< [ 20: 20](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[MSH_DAT_DBE]. */
        uint64_t ncbo_flt_cr           : 4;  /**< [ 19: 16](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[NCBO_FLT_CR]. */
        uint64_t ncbo_pois_cr          : 4;  /**< [ 15: 12](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[NCBO_POIS_CR]. */
        uint64_t ncbi_unexp_cr         : 4;  /**< [ 11:  8](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[NCBI_UNEXP_CR]. */
        uint64_t ncbo_ncb_psn          : 4;  /**< [  7:  4](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[NCBO_NCB_PSN]. */
        uint64_t ncbo_to               : 4;  /**< [  3:  0](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[NCBO_TO]. */
#else /* Word 0 - Little Endian */
        uint64_t ncbo_to               : 4;  /**< [  3:  0](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[NCBO_TO]. */
        uint64_t ncbo_ncb_psn          : 4;  /**< [  7:  4](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[NCBO_NCB_PSN]. */
        uint64_t ncbi_unexp_cr         : 4;  /**< [ 11:  8](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[NCBI_UNEXP_CR]. */
        uint64_t ncbo_pois_cr          : 4;  /**< [ 15: 12](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[NCBO_POIS_CR]. */
        uint64_t ncbo_flt_cr           : 4;  /**< [ 19: 16](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[NCBO_FLT_CR]. */
        uint64_t msh_dat_dbe           : 1;  /**< [ 20: 20](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[MSH_DAT_DBE]. */
        uint64_t msh_dat_sbe           : 1;  /**< [ 21: 21](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[MSH_DAT_SBE]. */
        uint64_t reserved_22_23        : 2;
        uint64_t msh_dat_chk           : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[MSH_DAT_CHK]. */
        uint64_t msh_req_chk           : 1;  /**< [ 25: 25](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[MSH_REQ_CHK]. */
        uint64_t msh_snp_chk           : 1;  /**< [ 26: 26](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[MSH_SNP_CHK]. */
        uint64_t msh_rsp_chk           : 1;  /**< [ 27: 27](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[MSH_RSP_CHK]. */
        uint64_t msh_dat1_chk          : 1;  /**< [ 28: 28](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[MSH_DAT1_CHK]. */
        uint64_t msh_rsp1_chk          : 1;  /**< [ 29: 29](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[MSH_RSP1_CHK]. */
        uint64_t msh_smmu_psn          : 1;  /**< [ 30: 30](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[MSH_SMMU_PSN]. */
        uint64_t msh_dato_dbe          : 1;  /**< [ 31: 31](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[MSH_DATO_DBE]. */
        uint64_t msh_dato_sbe          : 1;  /**< [ 32: 32](R/W1S/H) Reads or sets enable for IOBN(0..7)_INT_SUM[MSH_DATO_SBE]. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_int_ena_w1s_s cn; */
};
typedef union cavm_iobnx_int_ena_w1s cavm_iobnx_int_ena_w1s_t;

static inline uint64_t CAVM_IOBNX_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_INT_ENA_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=7))
        return 0xc12020089000ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("IOBNX_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_INT_ENA_W1S(a) cavm_iobnx_int_ena_w1s_t
#define bustype_CAVM_IOBNX_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_INT_ENA_W1S(a) "IOBNX_INT_ENA_W1S"
#define device_bar_CAVM_IOBNX_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_INT_ENA_W1S(a) (a)
#define arguments_CAVM_IOBNX_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_int_sum
 *
 * IOBN Interrupt Summary Register
 * This register contains the different interrupt-summary bits of the IOBN.
 * Bits in this register are RAS related events, that are expected to be routed to the SCP.
 */
union cavm_iobnx_int_sum
{
    uint64_t u;
    struct cavm_iobnx_int_sum_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t msh_dato_sbe          : 1;  /**< [ 32: 32](R/W1C/H) Set when IOB receives any SBE error on the rx_dat-channel (form the mesh)
                                                                 or from the NCBI to NCBO loopback path in the IOB.  Also see [MSH_DAT_SBE]. */
        uint64_t msh_dato_dbe          : 1;  /**< [ 31: 31](R/W1C/H) Set when IOB receives any DBE error on the rx_dat-channel (form the mesh)
                                                                 or from the NCBI to NCBO loopback path in the IOB. Also see [MSH_DAT_DBE]. */
        uint64_t msh_smmu_psn          : 1;  /**< [ 30: 30](R/W1C/H) MSH to SMMU store (CSR) has poison data. */
        uint64_t msh_rsp1_chk          : 1;  /**< [ 29: 29](R/W1C/H) MSH1 response has a checksum error. */
        uint64_t msh_dat1_chk          : 1;  /**< [ 28: 28](R/W1C/H) MSH1 data has a checksum error. */
        uint64_t msh_rsp_chk           : 1;  /**< [ 27: 27](R/W1C/H) MSH response has a checksum error. */
        uint64_t msh_snp_chk           : 1;  /**< [ 26: 26](R/W1C/H) MSH snoop has a checksum error. */
        uint64_t msh_req_chk           : 1;  /**< [ 25: 25](R/W1C/H) MSH request has a checksum error. */
        uint64_t msh_dat_chk           : 1;  /**< [ 24: 24](R/W1C/H) MSH data has a checksum error. */
        uint64_t reserved_22_23        : 2;
        uint64_t msh_dat_sbe           : 1;  /**< [ 21: 21](R/W1C/H) Set when an SBE error is detected when the IOB reads its response memory
                                                                 holding CompData from the mesh. Also see [MSH_DATO_SBE]. */
        uint64_t msh_dat_dbe           : 1;  /**< [ 20: 20](R/W1C/H) Set when an DBE error is detected when the IOB reads its response memory
                                                                 holding CompData from the mesh. Also see [MSH_DATO_DBE]. */
        uint64_t ncbo_flt_cr           : 4;  /**< [ 19: 16](R/W1C/H) NCBI CR had fault data error. */
        uint64_t ncbo_pois_cr          : 4;  /**< [ 15: 12](R/W1C/H) NCBO CR had poison data error. See IOBN_NCBO()_CR_ERR_STATUS. */
        uint64_t ncbi_unexp_cr         : 4;  /**< [ 11:  8](R/W1C/H) NCBI CR associated with an inactive CPID. See IOBN_NCBI()_CR_ERR_STATUS. */
        uint64_t ncbo_ncb_psn          : 4;  /**< [  7:  4](R/W1C/H) NCBO bus[3:0] store data with poison. IOBN_NCBO()_PSN_STATUS saves the first error information. */
        uint64_t ncbo_to               : 4;  /**< [  3:  0](R/W1C/H) NPR to a NCB device has timed out on bus[3:0]. This should not occur under normal
                                                                 circumstances and is typically fatal. See IOBN_NCBO_TO[SUB_TIME]. */
#else /* Word 0 - Little Endian */
        uint64_t ncbo_to               : 4;  /**< [  3:  0](R/W1C/H) NPR to a NCB device has timed out on bus[3:0]. This should not occur under normal
                                                                 circumstances and is typically fatal. See IOBN_NCBO_TO[SUB_TIME]. */
        uint64_t ncbo_ncb_psn          : 4;  /**< [  7:  4](R/W1C/H) NCBO bus[3:0] store data with poison. IOBN_NCBO()_PSN_STATUS saves the first error information. */
        uint64_t ncbi_unexp_cr         : 4;  /**< [ 11:  8](R/W1C/H) NCBI CR associated with an inactive CPID. See IOBN_NCBI()_CR_ERR_STATUS. */
        uint64_t ncbo_pois_cr          : 4;  /**< [ 15: 12](R/W1C/H) NCBO CR had poison data error. See IOBN_NCBO()_CR_ERR_STATUS. */
        uint64_t ncbo_flt_cr           : 4;  /**< [ 19: 16](R/W1C/H) NCBI CR had fault data error. */
        uint64_t msh_dat_dbe           : 1;  /**< [ 20: 20](R/W1C/H) Set when an DBE error is detected when the IOB reads its response memory
                                                                 holding CompData from the mesh. Also see [MSH_DATO_DBE]. */
        uint64_t msh_dat_sbe           : 1;  /**< [ 21: 21](R/W1C/H) Set when an SBE error is detected when the IOB reads its response memory
                                                                 holding CompData from the mesh. Also see [MSH_DATO_SBE]. */
        uint64_t reserved_22_23        : 2;
        uint64_t msh_dat_chk           : 1;  /**< [ 24: 24](R/W1C/H) MSH data has a checksum error. */
        uint64_t msh_req_chk           : 1;  /**< [ 25: 25](R/W1C/H) MSH request has a checksum error. */
        uint64_t msh_snp_chk           : 1;  /**< [ 26: 26](R/W1C/H) MSH snoop has a checksum error. */
        uint64_t msh_rsp_chk           : 1;  /**< [ 27: 27](R/W1C/H) MSH response has a checksum error. */
        uint64_t msh_dat1_chk          : 1;  /**< [ 28: 28](R/W1C/H) MSH1 data has a checksum error. */
        uint64_t msh_rsp1_chk          : 1;  /**< [ 29: 29](R/W1C/H) MSH1 response has a checksum error. */
        uint64_t msh_smmu_psn          : 1;  /**< [ 30: 30](R/W1C/H) MSH to SMMU store (CSR) has poison data. */
        uint64_t msh_dato_dbe          : 1;  /**< [ 31: 31](R/W1C/H) Set when IOB receives any DBE error on the rx_dat-channel (form the mesh)
                                                                 or from the NCBI to NCBO loopback path in the IOB. Also see [MSH_DAT_DBE]. */
        uint64_t msh_dato_sbe          : 1;  /**< [ 32: 32](R/W1C/H) Set when IOB receives any SBE error on the rx_dat-channel (form the mesh)
                                                                 or from the NCBI to NCBO loopback path in the IOB.  Also see [MSH_DAT_SBE]. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_int_sum_s cn; */
};
typedef union cavm_iobnx_int_sum cavm_iobnx_int_sum_t;

static inline uint64_t CAVM_IOBNX_INT_SUM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_INT_SUM(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=7))
        return 0xc12020086000ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("IOBNX_INT_SUM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_INT_SUM(a) cavm_iobnx_int_sum_t
#define bustype_CAVM_IOBNX_INT_SUM(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_INT_SUM(a) "IOBNX_INT_SUM"
#define device_bar_CAVM_IOBNX_INT_SUM(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_INT_SUM(a) (a)
#define arguments_CAVM_IOBNX_INT_SUM(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_int_sum_w1s
 *
 * IOBN Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_iobnx_int_sum_w1s
{
    uint64_t u;
    struct cavm_iobnx_int_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t msh_dato_sbe          : 1;  /**< [ 32: 32](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[MSH_DATO_SBE]. */
        uint64_t msh_dato_dbe          : 1;  /**< [ 31: 31](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[MSH_DATO_DBE]. */
        uint64_t msh_smmu_psn          : 1;  /**< [ 30: 30](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[MSH_SMMU_PSN]. */
        uint64_t msh_rsp1_chk          : 1;  /**< [ 29: 29](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[MSH_RSP1_CHK]. */
        uint64_t msh_dat1_chk          : 1;  /**< [ 28: 28](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[MSH_DAT1_CHK]. */
        uint64_t msh_rsp_chk           : 1;  /**< [ 27: 27](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[MSH_RSP_CHK]. */
        uint64_t msh_snp_chk           : 1;  /**< [ 26: 26](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[MSH_SNP_CHK]. */
        uint64_t msh_req_chk           : 1;  /**< [ 25: 25](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[MSH_REQ_CHK]. */
        uint64_t msh_dat_chk           : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[MSH_DAT_CHK]. */
        uint64_t reserved_22_23        : 2;
        uint64_t msh_dat_sbe           : 1;  /**< [ 21: 21](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[MSH_DAT_SBE]. */
        uint64_t msh_dat_dbe           : 1;  /**< [ 20: 20](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[MSH_DAT_DBE]. */
        uint64_t ncbo_flt_cr           : 4;  /**< [ 19: 16](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[NCBO_FLT_CR]. */
        uint64_t ncbo_pois_cr          : 4;  /**< [ 15: 12](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[NCBO_POIS_CR]. */
        uint64_t ncbi_unexp_cr         : 4;  /**< [ 11:  8](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[NCBI_UNEXP_CR]. */
        uint64_t ncbo_ncb_psn          : 4;  /**< [  7:  4](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[NCBO_NCB_PSN]. */
        uint64_t ncbo_to               : 4;  /**< [  3:  0](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[NCBO_TO]. */
#else /* Word 0 - Little Endian */
        uint64_t ncbo_to               : 4;  /**< [  3:  0](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[NCBO_TO]. */
        uint64_t ncbo_ncb_psn          : 4;  /**< [  7:  4](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[NCBO_NCB_PSN]. */
        uint64_t ncbi_unexp_cr         : 4;  /**< [ 11:  8](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[NCBI_UNEXP_CR]. */
        uint64_t ncbo_pois_cr          : 4;  /**< [ 15: 12](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[NCBO_POIS_CR]. */
        uint64_t ncbo_flt_cr           : 4;  /**< [ 19: 16](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[NCBO_FLT_CR]. */
        uint64_t msh_dat_dbe           : 1;  /**< [ 20: 20](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[MSH_DAT_DBE]. */
        uint64_t msh_dat_sbe           : 1;  /**< [ 21: 21](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[MSH_DAT_SBE]. */
        uint64_t reserved_22_23        : 2;
        uint64_t msh_dat_chk           : 1;  /**< [ 24: 24](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[MSH_DAT_CHK]. */
        uint64_t msh_req_chk           : 1;  /**< [ 25: 25](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[MSH_REQ_CHK]. */
        uint64_t msh_snp_chk           : 1;  /**< [ 26: 26](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[MSH_SNP_CHK]. */
        uint64_t msh_rsp_chk           : 1;  /**< [ 27: 27](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[MSH_RSP_CHK]. */
        uint64_t msh_dat1_chk          : 1;  /**< [ 28: 28](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[MSH_DAT1_CHK]. */
        uint64_t msh_rsp1_chk          : 1;  /**< [ 29: 29](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[MSH_RSP1_CHK]. */
        uint64_t msh_smmu_psn          : 1;  /**< [ 30: 30](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[MSH_SMMU_PSN]. */
        uint64_t msh_dato_dbe          : 1;  /**< [ 31: 31](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[MSH_DATO_DBE]. */
        uint64_t msh_dato_sbe          : 1;  /**< [ 32: 32](R/W1S/H) Reads or sets IOBN(0..7)_INT_SUM[MSH_DATO_SBE]. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_int_sum_w1s_s cn; */
};
typedef union cavm_iobnx_int_sum_w1s cavm_iobnx_int_sum_w1s_t;

static inline uint64_t CAVM_IOBNX_INT_SUM_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_INT_SUM_W1S(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=7))
        return 0xc12020087000ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("IOBNX_INT_SUM_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_INT_SUM_W1S(a) cavm_iobnx_int_sum_w1s_t
#define bustype_CAVM_IOBNX_INT_SUM_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_INT_SUM_W1S(a) "IOBNX_INT_SUM_W1S"
#define device_bar_CAVM_IOBNX_INT_SUM_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_INT_SUM_W1S(a) (a)
#define arguments_CAVM_IOBNX_INT_SUM_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_lsw_cfg
 *
 * IOBN LSW General Configuration Register
 */
union cavm_iobnx_lsw_cfg
{
    uint64_t u;
    struct cavm_iobnx_lsw_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t lsw1_rsvd             : 7;  /**< [ 15:  9](R/W) Reserved. */
        uint64_t lsw1_force_cond_clk_en : 1; /**< [  8:  8](R/W) Force on LSW clock. For diagnostic use only. */
        uint64_t lsw0_rsvd             : 7;  /**< [  7:  1](R/W) Reserved. */
        uint64_t lsw0_force_cond_clk_en : 1; /**< [  0:  0](R/W) Force on LSW clock. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t lsw0_force_cond_clk_en : 1; /**< [  0:  0](R/W) Force on LSW clock. For diagnostic use only. */
        uint64_t lsw0_rsvd             : 7;  /**< [  7:  1](R/W) Reserved. */
        uint64_t lsw1_force_cond_clk_en : 1; /**< [  8:  8](R/W) Force on LSW clock. For diagnostic use only. */
        uint64_t lsw1_rsvd             : 7;  /**< [ 15:  9](R/W) Reserved. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_lsw_cfg_s cn; */
};
typedef union cavm_iobnx_lsw_cfg cavm_iobnx_lsw_cfg_t;

static inline uint64_t CAVM_IOBNX_LSW_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_LSW_CFG(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=7))
        return 0xc12020002100ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("IOBNX_LSW_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_LSW_CFG(a) cavm_iobnx_lsw_cfg_t
#define bustype_CAVM_IOBNX_LSW_CFG(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_LSW_CFG(a) "IOBNX_LSW_CFG"
#define device_bar_CAVM_IOBNX_LSW_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_LSW_CFG(a) (a)
#define arguments_CAVM_IOBNX_LSW_CFG(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_msix_pba#
 *
 * IOBN MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table; the bit number is indexed by the IOBN_INT_VEC_E enumeration.
 */
union cavm_iobnx_msix_pbax
{
    uint64_t u;
    struct cavm_iobnx_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO) Pending message for the associated IOBN_MSIX_VEC()_CTL, enumerated by IOBN_INT_VEC_E.
                                                                 Bits that have no associated IOBN_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO) Pending message for the associated IOBN_MSIX_VEC()_CTL, enumerated by IOBN_INT_VEC_E.
                                                                 Bits that have no associated IOBN_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_msix_pbax_s cn; */
};
typedef union cavm_iobnx_msix_pbax cavm_iobnx_msix_pbax_t;

static inline uint64_t CAVM_IOBNX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_MSIX_PBAX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=7) && (b==0)))
        return 0xc12020ff0000ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("IOBNX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_MSIX_PBAX(a,b) cavm_iobnx_msix_pbax_t
#define bustype_CAVM_IOBNX_MSIX_PBAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_MSIX_PBAX(a,b) "IOBNX_MSIX_PBAX"
#define device_bar_CAVM_IOBNX_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_IOBNX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_IOBNX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_msix_vec#_addr
 *
 * IOBN MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the IOBN_INT_VEC_E enumeration.
 */
union cavm_iobnx_msix_vecx_addr
{
    uint64_t u;
    struct cavm_iobnx_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's IOBN_MSIX_VEC()_ADDR, IOBN_MSIX_VEC()_CTL, and
                                                                 corresponding bit of IOBN_MSIX_PBA() are RAZ/WI and does not cause a fault
                                                                 when accessed by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_IOBN_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC])
                                                                 is set, all vectors are secure and function as if [SECVEC] was set.

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

                                                                 1 = This vector's IOBN_MSIX_VEC()_ADDR, IOBN_MSIX_VEC()_CTL, and
                                                                 corresponding bit of IOBN_MSIX_PBA() are RAZ/WI and does not cause a fault
                                                                 when accessed by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_IOBN_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC])
                                                                 is set, all vectors are secure and function as if [SECVEC] was set.

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
    /* struct cavm_iobnx_msix_vecx_addr_s cn; */
};
typedef union cavm_iobnx_msix_vecx_addr cavm_iobnx_msix_vecx_addr_t;

static inline uint64_t CAVM_IOBNX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=7) && (b==0)))
        return 0xc12020f00000ll + 0x100000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("IOBNX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_MSIX_VECX_ADDR(a,b) cavm_iobnx_msix_vecx_addr_t
#define bustype_CAVM_IOBNX_MSIX_VECX_ADDR(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_MSIX_VECX_ADDR(a,b) "IOBNX_MSIX_VECX_ADDR"
#define device_bar_CAVM_IOBNX_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_IOBNX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_IOBNX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_msix_vec#_ctl
 *
 * IOBN MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the IOBN_INT_VEC_E enumeration.
 */
union cavm_iobnx_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_iobnx_msix_vecx_ctl_s
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
    /* struct cavm_iobnx_msix_vecx_ctl_s cn; */
};
typedef union cavm_iobnx_msix_vecx_ctl cavm_iobnx_msix_vecx_ctl_t;

static inline uint64_t CAVM_IOBNX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=7) && (b==0)))
        return 0xc12020f00008ll + 0x100000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("IOBNX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_MSIX_VECX_CTL(a,b) cavm_iobnx_msix_vecx_ctl_t
#define bustype_CAVM_IOBNX_MSIX_VECX_CTL(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_MSIX_VECX_CTL(a,b) "IOBNX_MSIX_VECX_CTL"
#define device_bar_CAVM_IOBNX_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_IOBNX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_IOBNX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_ncb#_acc
 *
 * IOBN NCB Access Registers
 * This register sets attributes of NCBDIDs address bits \<43:36\>.
 * If IOBN_CONST.UNIMP_REG is set this register is not implemented.
 * Reads will respond with zero and writes will be ignored.
 */
union cavm_iobnx_ncbx_acc
{
    uint64_t u;
    struct cavm_iobnx_ncbx_acc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t all_cmds              : 1;  /**< [  0:  0](R/W) Device supports all commands.
                                                                 0 = Only naturally aligned loads and stores that are 64-bit or smaller are
                                                                 permitted to the NCB device. This setting is used for non-PEM devices.
                                                                 1 = Allow all size accesses, plus atomics and LMTSTs. This setting is used for
                                                                 PEM.

                                                                 Using the value one for devices which do not support all access sizes or
                                                                 atomics may result in errors or undefined behavior. */
#else /* Word 0 - Little Endian */
        uint64_t all_cmds              : 1;  /**< [  0:  0](R/W) Device supports all commands.
                                                                 0 = Only naturally aligned loads and stores that are 64-bit or smaller are
                                                                 permitted to the NCB device. This setting is used for non-PEM devices.
                                                                 1 = Allow all size accesses, plus atomics and LMTSTs. This setting is used for
                                                                 PEM.

                                                                 Using the value one for devices which do not support all access sizes or
                                                                 atomics may result in errors or undefined behavior. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_ncbx_acc_s cn; */
};
typedef union cavm_iobnx_ncbx_acc cavm_iobnx_ncbx_acc_t;

static inline uint64_t CAVM_IOBNX_NCBX_ACC(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_NCBX_ACC(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=7) && (b<=255)))
        return 0xc120200c0000ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0xff);
    __cavm_csr_fatal("IOBNX_NCBX_ACC", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_NCBX_ACC(a,b) cavm_iobnx_ncbx_acc_t
#define bustype_CAVM_IOBNX_NCBX_ACC(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_NCBX_ACC(a,b) "IOBNX_NCBX_ACC"
#define device_bar_CAVM_IOBNX_NCBX_ACC(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_NCBX_ACC(a,b) (a)
#define arguments_CAVM_IOBNX_NCBX_ACC(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_ncb#_permit
 *
 * IOBN NCB Bus Permit Registers
 * This register sets the permissions for access to NCBDIDs address bits \<43:36\>.
 * Program identically to MRML_NCB()_PERMIT.
 * If IOBN_CONST.UNIMP_REG is set this register is not implemented.
 * Reads will respond with zero and writes will be ignored.
 */
union cavm_iobnx_ncbx_permit
{
    uint64_t u;
    struct cavm_iobnx_ncbx_permit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t lock                  : 1;  /**< [  8:  8](SR/W1S) Lock Bit, Lock the register from any further updates Once this bit is set all
                                                                 the subsequent writes are ignored. The whole register acts as read only. */
        uint64_t kill                  : 1;  /**< [  7:  7](SR/W1S) Kill the device. Once written with one, stays
                                                                 set until chip domain reset.  If set, no access
                                                                 allowed by any initiator. */
        uint64_t reserved_5_6          : 2;
        uint64_t xcp2_dis              : 1;  /**< [  4:  4](SR/W) XCP2 disable. As with [SEC_DIS], but for accesses initiated by XCP2 (CCP). */
        uint64_t xcp1_dis              : 1;  /**< [  3:  3](SR/W) XCP1 disable. As with [SEC_DIS], but for accesses initiated by XCP1 (MCP). */
        uint64_t xcp0_dis              : 1;  /**< [  2:  2](SR/W) XCP0 disable. As with [SEC_DIS], but for accesses initiated by XCP0 (SCP). */
        uint64_t nsec_dis              : 1;  /**< [  1:  1](SR/W) Nonsecure disable. As with [SEC_DIS], but for accesses initiated by non-secure devices
                                                                 excluding XCP0/XCP1/XCP2. */
        uint64_t sec_dis               : 1;  /**< [  0:  0](SR/W) Secure disable. For accesses initiated by secure devices
                                                                 excluding XCP0/XCP1/XCP2. */
#else /* Word 0 - Little Endian */
        uint64_t sec_dis               : 1;  /**< [  0:  0](SR/W) Secure disable. For accesses initiated by secure devices
                                                                 excluding XCP0/XCP1/XCP2. */
        uint64_t nsec_dis              : 1;  /**< [  1:  1](SR/W) Nonsecure disable. As with [SEC_DIS], but for accesses initiated by non-secure devices
                                                                 excluding XCP0/XCP1/XCP2. */
        uint64_t xcp0_dis              : 1;  /**< [  2:  2](SR/W) XCP0 disable. As with [SEC_DIS], but for accesses initiated by XCP0 (SCP). */
        uint64_t xcp1_dis              : 1;  /**< [  3:  3](SR/W) XCP1 disable. As with [SEC_DIS], but for accesses initiated by XCP1 (MCP). */
        uint64_t xcp2_dis              : 1;  /**< [  4:  4](SR/W) XCP2 disable. As with [SEC_DIS], but for accesses initiated by XCP2 (CCP). */
        uint64_t reserved_5_6          : 2;
        uint64_t kill                  : 1;  /**< [  7:  7](SR/W1S) Kill the device. Once written with one, stays
                                                                 set until chip domain reset.  If set, no access
                                                                 allowed by any initiator. */
        uint64_t lock                  : 1;  /**< [  8:  8](SR/W1S) Lock Bit, Lock the register from any further updates Once this bit is set all
                                                                 the subsequent writes are ignored. The whole register acts as read only. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_ncbx_permit_s cn; */
};
typedef union cavm_iobnx_ncbx_permit cavm_iobnx_ncbx_permit_t;

static inline uint64_t CAVM_IOBNX_NCBX_PERMIT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_NCBX_PERMIT(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=7) && (b<=255)))
        return 0xc120200d0000ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0xff);
    __cavm_csr_fatal("IOBNX_NCBX_PERMIT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_NCBX_PERMIT(a,b) cavm_iobnx_ncbx_permit_t
#define bustype_CAVM_IOBNX_NCBX_PERMIT(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_NCBX_PERMIT(a,b) "IOBNX_NCBX_PERMIT"
#define device_bar_CAVM_IOBNX_NCBX_PERMIT(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_NCBX_PERMIT(a,b) (a)
#define arguments_CAVM_IOBNX_NCBX_PERMIT(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_ncbi#_cr_err_status
 *
 * IOBN NCBI Unexpected CR Error Status Register
 * NCBI error status register logs first unexpected NCBI CR.
 */
union cavm_iobnx_ncbix_cr_err_status
{
    uint64_t u;
    struct cavm_iobnx_ncbix_cr_err_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t narbid                : 4;  /**< [  3:  0](RO/H) The NCBI ARBID of requesting NCB device. */
#else /* Word 0 - Little Endian */
        uint64_t narbid                : 4;  /**< [  3:  0](RO/H) The NCBI ARBID of requesting NCB device. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_ncbix_cr_err_status_s cn; */
};
typedef union cavm_iobnx_ncbix_cr_err_status cavm_iobnx_ncbix_cr_err_status_t;

static inline uint64_t CAVM_IOBNX_NCBIX_CR_ERR_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_NCBIX_CR_ERR_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=7) && (b<=3)))
        return 0xc12020000100ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("IOBNX_NCBIX_CR_ERR_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_NCBIX_CR_ERR_STATUS(a,b) cavm_iobnx_ncbix_cr_err_status_t
#define bustype_CAVM_IOBNX_NCBIX_CR_ERR_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_NCBIX_CR_ERR_STATUS(a,b) "IOBNX_NCBIX_CR_ERR_STATUS"
#define device_bar_CAVM_IOBNX_NCBIX_CR_ERR_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_NCBIX_CR_ERR_STATUS(a,b) (a)
#define arguments_CAVM_IOBNX_NCBIX_CR_ERR_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_ncbo#_cr_err_status
 *
 * IOBN NCBO CR Error Status Register
 * Outbound error status register logs first data error detected on outbound path.
 */
union cavm_iobnx_ncbox_cr_err_status
{
    uint64_t u;
    struct cavm_iobnx_ncbox_cr_err_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_57_63        : 7;
        uint64_t narbid                : 4;  /**< [ 56: 53](RO/H) The NCBI ARBID of requesting NCB device. */
        uint64_t address               : 53; /**< [ 52:  0](RO/H) The NCBI IOVA address associated with the ERROR. */
#else /* Word 0 - Little Endian */
        uint64_t address               : 53; /**< [ 52:  0](RO/H) The NCBI IOVA address associated with the ERROR. */
        uint64_t narbid                : 4;  /**< [ 56: 53](RO/H) The NCBI ARBID of requesting NCB device. */
        uint64_t reserved_57_63        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_ncbox_cr_err_status_s cn; */
};
typedef union cavm_iobnx_ncbox_cr_err_status cavm_iobnx_ncbox_cr_err_status_t;

static inline uint64_t CAVM_IOBNX_NCBOX_CR_ERR_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_NCBOX_CR_ERR_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=7) && (b<=3)))
        return 0xc12020000120ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("IOBNX_NCBOX_CR_ERR_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_NCBOX_CR_ERR_STATUS(a,b) cavm_iobnx_ncbox_cr_err_status_t
#define bustype_CAVM_IOBNX_NCBOX_CR_ERR_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_NCBOX_CR_ERR_STATUS(a,b) "IOBNX_NCBOX_CR_ERR_STATUS"
#define device_bar_CAVM_IOBNX_NCBOX_CR_ERR_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_NCBOX_CR_ERR_STATUS(a,b) (a)
#define arguments_CAVM_IOBNX_NCBOX_CR_ERR_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_ncbo#_psn_status
 *
 * IOBN NCBO Poison Status Register
 */
union cavm_iobnx_ncbox_psn_status
{
    uint64_t u;
    struct cavm_iobnx_ncbox_psn_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t address               : 52; /**< [ 51:  0](RO/H) Captured address when poison transaction was sent on NCBO. Valid when
                                                                 corresponding bit is set in IOBN_INT_SUM.
                                                                 When corresponding bit in IOBN_INT_SUM is cleared it allows a new poison error
                                                                 to be latched. */
#else /* Word 0 - Little Endian */
        uint64_t address               : 52; /**< [ 51:  0](RO/H) Captured address when poison transaction was sent on NCBO. Valid when
                                                                 corresponding bit is set in IOBN_INT_SUM.
                                                                 When corresponding bit in IOBN_INT_SUM is cleared it allows a new poison error
                                                                 to be latched. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_ncbox_psn_status_s cn; */
};
typedef union cavm_iobnx_ncbox_psn_status cavm_iobnx_ncbox_psn_status_t;

static inline uint64_t CAVM_IOBNX_NCBOX_PSN_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_NCBOX_PSN_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=7) && (b<=3)))
        return 0xc12020003040ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("IOBNX_NCBOX_PSN_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_NCBOX_PSN_STATUS(a,b) cavm_iobnx_ncbox_psn_status_t
#define bustype_CAVM_IOBNX_NCBOX_PSN_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_NCBOX_PSN_STATUS(a,b) "IOBNX_NCBOX_PSN_STATUS"
#define device_bar_CAVM_IOBNX_NCBOX_PSN_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_NCBOX_PSN_STATUS(a,b) (a)
#define arguments_CAVM_IOBNX_NCBOX_PSN_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_ncbo_to
 *
 * IOBN NCBO Timeout Counter Registers
 * This register set the counter value for expected return data on NCBI.
 */
union cavm_iobnx_ncbo_to
{
    uint64_t u;
    struct cavm_iobnx_ncbo_to_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t sub_time              : 32; /**< [ 31:  0](R/W) Timeout value. When a load operation is sent on NCBO, the timeout counter is
                                                                 started, and if return data on NCBI does not return within between three to four
                                                                 times the value of [SUB_TIME] in coprocessor-clocks, a timeout occurs and
                                                                 IOBN_INT_SUM[NCBO_TO] is set. 0x0 disables. */
#else /* Word 0 - Little Endian */
        uint64_t sub_time              : 32; /**< [ 31:  0](R/W) Timeout value. When a load operation is sent on NCBO, the timeout counter is
                                                                 started, and if return data on NCBI does not return within between three to four
                                                                 times the value of [SUB_TIME] in coprocessor-clocks, a timeout occurs and
                                                                 IOBN_INT_SUM[NCBO_TO] is set. 0x0 disables. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_ncbo_to_s cn; */
};
typedef union cavm_iobnx_ncbo_to cavm_iobnx_ncbo_to_t;

static inline uint64_t CAVM_IOBNX_NCBO_TO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_NCBO_TO(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=7))
        return 0xc12020000008ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("IOBNX_NCBO_TO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_NCBO_TO(a) cavm_iobnx_ncbo_to_t
#define bustype_CAVM_IOBNX_NCBO_TO(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_NCBO_TO(a) "IOBNX_NCBO_TO"
#define device_bar_CAVM_IOBNX_NCBO_TO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_NCBO_TO(a) (a)
#define arguments_CAVM_IOBNX_NCBO_TO(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_ncbo_to_err#
 *
 * IOBN NCB Timeout Error Register
 * This register captures error information for a nonposted request that times out on
 * NCBO (when IOBN_INT_SUM[NCBO_TO] is set).
 */
union cavm_iobnx_ncbo_to_errx
{
    uint64_t u;
    struct cavm_iobnx_ncbo_to_errx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t cpid                  : 9;  /**< [ 16:  8](RO/H) CPID for NP request that timed out on NCBO. */
        uint64_t reserved_4_7          : 4;
        uint64_t arbid                 : 4;  /**< [  3:  0](RO/H) Flat ARBID for NP request that timed out on NCBO. */
#else /* Word 0 - Little Endian */
        uint64_t arbid                 : 4;  /**< [  3:  0](RO/H) Flat ARBID for NP request that timed out on NCBO. */
        uint64_t reserved_4_7          : 4;
        uint64_t cpid                  : 9;  /**< [ 16:  8](RO/H) CPID for NP request that timed out on NCBO. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_ncbo_to_errx_s cn; */
};
typedef union cavm_iobnx_ncbo_to_errx cavm_iobnx_ncbo_to_errx_t;

static inline uint64_t CAVM_IOBNX_NCBO_TO_ERRX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_NCBO_TO_ERRX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=7) && (b<=3)))
        return 0xc120200a0000ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("IOBNX_NCBO_TO_ERRX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_NCBO_TO_ERRX(a,b) cavm_iobnx_ncbo_to_errx_t
#define bustype_CAVM_IOBNX_NCBO_TO_ERRX(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_NCBO_TO_ERRX(a,b) "IOBNX_NCBO_TO_ERRX"
#define device_bar_CAVM_IOBNX_NCBO_TO_ERRX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_NCBO_TO_ERRX(a,b) (a)
#define arguments_CAVM_IOBNX_NCBO_TO_ERRX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) iobn#_outb_err_status
 *
 * IOBN Outbound Error Status Register
 * Outbound error status register logs first error detected on outbound control path.
 */
union cavm_iobnx_outb_err_status
{
    uint64_t u;
    struct cavm_iobnx_outb_err_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ms                    : 11; /**< [ 63: 53](RO/H) Captured mesh source when error condition is detected on outbound
                                                                 processing path. Valid when [ERR_TYPE] is nonzero. */
        uint64_t reserved_52           : 1;
        uint64_t address               : 40; /**< [ 51: 12](RO/H) Captured address when error condition is detected on outbound processing path. Valid when
                                                                 [ERR_TYPE] is non zero. */
        uint64_t reserved_5_11         : 7;
        uint64_t err_type              : 5;  /**< [  4:  0](R/W1C/H) Error type. Bits enumerated by IOBN_OUTB_ERR_E. */
#else /* Word 0 - Little Endian */
        uint64_t err_type              : 5;  /**< [  4:  0](R/W1C/H) Error type. Bits enumerated by IOBN_OUTB_ERR_E. */
        uint64_t reserved_5_11         : 7;
        uint64_t address               : 40; /**< [ 51: 12](RO/H) Captured address when error condition is detected on outbound processing path. Valid when
                                                                 [ERR_TYPE] is non zero. */
        uint64_t reserved_52           : 1;
        uint64_t ms                    : 11; /**< [ 63: 53](RO/H) Captured mesh source when error condition is detected on outbound
                                                                 processing path. Valid when [ERR_TYPE] is nonzero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_outb_err_status_s cn; */
};
typedef union cavm_iobnx_outb_err_status cavm_iobnx_outb_err_status_t;

static inline uint64_t CAVM_IOBNX_OUTB_ERR_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_OUTB_ERR_STATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=7))
        return 0xc12020083090ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("IOBNX_OUTB_ERR_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_OUTB_ERR_STATUS(a) cavm_iobnx_outb_err_status_t
#define bustype_CAVM_IOBNX_OUTB_ERR_STATUS(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_OUTB_ERR_STATUS(a) "IOBNX_OUTB_ERR_STATUS"
#define device_bar_CAVM_IOBNX_OUTB_ERR_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_OUTB_ERR_STATUS(a) (a)
#define arguments_CAVM_IOBNX_OUTB_ERR_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_psn_ctl
 *
 * Poison Control Register
 */
union cavm_iobnx_psn_ctl
{
    uint64_t u;
    struct cavm_iobnx_psn_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t dispsn                : 1;  /**< [  0:  0](R/W) Disable poison code creation and detection in the mesh / NCB ECC
                                                                 checkers/generators. This should be set at initialization. */
#else /* Word 0 - Little Endian */
        uint64_t dispsn                : 1;  /**< [  0:  0](R/W) Disable poison code creation and detection in the mesh / NCB ECC
                                                                 checkers/generators. This should be set at initialization. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_psn_ctl_s cn; */
};
typedef union cavm_iobnx_psn_ctl cavm_iobnx_psn_ctl_t;

static inline uint64_t CAVM_IOBNX_PSN_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_PSN_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=7))
        return 0xc12020083050ll + 0x100000000ll * ((a) & 0x7);
    __cavm_csr_fatal("IOBNX_PSN_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_PSN_CTL(a) cavm_iobnx_psn_ctl_t
#define bustype_CAVM_IOBNX_PSN_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_PSN_CTL(a) "IOBNX_PSN_CTL"
#define device_bar_CAVM_IOBNX_PSN_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_PSN_CTL(a) (a)
#define arguments_CAVM_IOBNX_PSN_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) iobn#_rsl#_streams
 *
 * IOBN RSL Stream Permission Registers
 * This register sets the permissions for a NCBI transaction (which are DMA
 * transactions or MSI-X writes), for requests from a RSL device, i.e.
 * those where:
 *
 * _ stream_id\<21:8\> = PCC_DEV_CON_E::MRML\<21:8\>
 *   (stream_id\<7:0\> + 0).
 *
 * _ stream_id\<21:8\> = PCC_DEV_CON_E::MRMLB1\<21:8\>
 *   (stream_id\<7:0\> + 256).
 *
 * _ stream_id\<21:8\> = PCC_DEV_CON_E::MRMLB2\<21:8\>
 *   (stream_id\<7:0\> + 512).
 *
 * _ stream_id\<21:8\> = PCC_DEV_CON_E::MRMLB3\<21:8\>
 *   (stream_id\<7:0\> + 768).
 *
 * For each given index {a} (the RSL function number), each IOB
 * must be programmed to the same value.
 */
union cavm_iobnx_rslx_streams
{
    uint64_t u;
    struct cavm_iobnx_rslx_streams_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t strm_nsec             : 1;  /**< [  1:  1](SR/W) Stream nonsecure.

                                                                   0 = The device's stream ID is marked secure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use secure world
                                                                   lookup. The SMMU may, if properly configured, generate an outgoing physical
                                                                   address that is secure.

                                                                   1 = The device's stream ID is marked nonsecure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use nonsecure world
                                                                   lookup. The SMMU outgoing physical address will be nonsecure.

                                                                   [STRM_NSEC] is ignored if the device is making a physical request (as these
                                                                   transactions bypass the SMMU translation process).

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
        uint64_t phys_nsec             : 1;  /**< [  0:  0](SR/W) Physical nonsecure.
                                                                   0 = When the device makes a physical request, IOB will use the device's
                                                                   requested secure bit to determine if the request to DRAM/LLC is secure or not.
                                                                   1 = When the device makes a physical request, IOB will squash the
                                                                   device's secure request and issue the request to DRAM/LLC as nonsecure.

                                                                   Ignored if a device makes a nonphysical request.  (As nonphysical requests
                                                                   cause the SMMU to generate the SMMU-outgoing secure bit based on the SMMU
                                                                   translation process, including [STRM_NSEC].)

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
#else /* Word 0 - Little Endian */
        uint64_t phys_nsec             : 1;  /**< [  0:  0](SR/W) Physical nonsecure.
                                                                   0 = When the device makes a physical request, IOB will use the device's
                                                                   requested secure bit to determine if the request to DRAM/LLC is secure or not.
                                                                   1 = When the device makes a physical request, IOB will squash the
                                                                   device's secure request and issue the request to DRAM/LLC as nonsecure.

                                                                   Ignored if a device makes a nonphysical request.  (As nonphysical requests
                                                                   cause the SMMU to generate the SMMU-outgoing secure bit based on the SMMU
                                                                   translation process, including [STRM_NSEC].)

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
        uint64_t strm_nsec             : 1;  /**< [  1:  1](SR/W) Stream nonsecure.

                                                                   0 = The device's stream ID is marked secure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use secure world
                                                                   lookup. The SMMU may, if properly configured, generate an outgoing physical
                                                                   address that is secure.

                                                                   1 = The device's stream ID is marked nonsecure headed into the SMMU.  If the
                                                                   device is making a nonphysical request, the SMMU will use nonsecure world
                                                                   lookup. The SMMU outgoing physical address will be nonsecure.

                                                                   [STRM_NSEC] is ignored if the device is making a physical request (as these
                                                                   transactions bypass the SMMU translation process).

                                                                   Typically firmware sets [PHYS_NSEC] and [STRM_NSEC] the same. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_iobnx_rslx_streams_s cn; */
};
typedef union cavm_iobnx_rslx_streams cavm_iobnx_rslx_streams_t;

static inline uint64_t CAVM_IOBNX_RSLX_STREAMS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_IOBNX_RSLX_STREAMS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=7) && (b<=1023)))
        return 0xc12020004000ll + 0x100000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3ff);
    __cavm_csr_fatal("IOBNX_RSLX_STREAMS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_IOBNX_RSLX_STREAMS(a,b) cavm_iobnx_rslx_streams_t
#define bustype_CAVM_IOBNX_RSLX_STREAMS(a,b) CSR_TYPE_RSL
#define basename_CAVM_IOBNX_RSLX_STREAMS(a,b) "IOBNX_RSLX_STREAMS"
#define device_bar_CAVM_IOBNX_RSLX_STREAMS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_IOBNX_RSLX_STREAMS(a,b) (a)
#define arguments_CAVM_IOBNX_RSLX_STREAMS(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_IOBN_H__ */
