#ifndef __CAVM_CSRS_NCBPC_H__
#define __CAVM_CSRS_NCBPC_H__
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
 * NCBPC.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration ncbpc_bar_e
 *
 * NCBPC Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_NCBPC_BAR_E_NCBPCX_PF_BAR0(a) (0x87e130000000ll + 0x1000000ll * (a))
#define CAVM_NCBPC_BAR_E_NCBPCX_PF_BAR0_SIZE 0x100000ull

/**
 * Register (RSL) ncb#_arb#_rw#_lat_pc
 *
 * NCB Latency Performance Counter Registers
 */
union cavm_ncbx_arbx_rwx_lat_pc
{
    uint64_t u;
    struct cavm_ncbx_arbx_rwx_lat_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Latency performance counter. Operates on coprocessor clock.

                                                                 This does not count CXL.mem request on IOBL.

                                                                 _ RW(0) increments every cycle by the number of read transactions that have been
                                                                 granted from the given NCB, but have not had their credit returned to the NGNT.

                                                                 _ RW(1) increments every cycle by the number of write transactions that have been
                                                                 granted from the given NCB, but have not had their credit returned to the NGNT.

                                                                 This counter should be divided by NCB_ARB()_RW()_REQ_PC to determine each NCB
                                                                 bus's average read and write latency. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Latency performance counter. Operates on coprocessor clock.

                                                                 This does not count CXL.mem request on IOBL.

                                                                 _ RW(0) increments every cycle by the number of read transactions that have been
                                                                 granted from the given NCB, but have not had their credit returned to the NGNT.

                                                                 _ RW(1) increments every cycle by the number of write transactions that have been
                                                                 granted from the given NCB, but have not had their credit returned to the NGNT.

                                                                 This counter should be divided by NCB_ARB()_RW()_REQ_PC to determine each NCB
                                                                 bus's average read and write latency. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbx_arbx_rwx_lat_pc_s cn; */
};
typedef union cavm_ncbx_arbx_rwx_lat_pc cavm_ncbx_arbx_rwx_lat_pc_t;

static inline uint64_t CAVM_NCBX_ARBX_RWX_LAT_PC(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBX_ARBX_RWX_LAT_PC(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=15) && (b<=15) && (c<=1)))
        return 0x87e1300f4000ll + 0x1000000ll * ((a) & 0xf) + 0x20ll * ((b) & 0xf) + 8ll * ((c) & 0x1);
    __cavm_csr_fatal("NCBX_ARBX_RWX_LAT_PC", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_NCBX_ARBX_RWX_LAT_PC(a,b,c) cavm_ncbx_arbx_rwx_lat_pc_t
#define bustype_CAVM_NCBX_ARBX_RWX_LAT_PC(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_NCBX_ARBX_RWX_LAT_PC(a,b,c) "NCBX_ARBX_RWX_LAT_PC"
#define device_bar_CAVM_NCBX_ARBX_RWX_LAT_PC(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_NCBX_ARBX_RWX_LAT_PC(a,b,c) (a)
#define arguments_CAVM_NCBX_ARBX_RWX_LAT_PC(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) ncb#_arb#_rw#_req_pc
 *
 * NCB Request Performance Counter Registers
 * This register must only be set when NCB-DEVICEs attached to the NGNT have
 * no outstanding transactions.
 */
union cavm_ncbx_arbx_rwx_req_pc
{
    uint64_t u;
    struct cavm_ncbx_arbx_rwx_req_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Request performance counter.

                                                                 _ RW(0) increments on read  transaction being granted by NGNT.

                                                                 _ RW(1) increments on write transaction being granted by NGNT. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Request performance counter.

                                                                 _ RW(0) increments on read  transaction being granted by NGNT.

                                                                 _ RW(1) increments on write transaction being granted by NGNT. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbx_arbx_rwx_req_pc_s cn; */
};
typedef union cavm_ncbx_arbx_rwx_req_pc cavm_ncbx_arbx_rwx_req_pc_t;

static inline uint64_t CAVM_NCBX_ARBX_RWX_REQ_PC(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBX_ARBX_RWX_REQ_PC(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=15) && (b<=15) && (c<=1)))
        return 0x87e1300f2000ll + 0x1000000ll * ((a) & 0xf) + 0x20ll * ((b) & 0xf) + 8ll * ((c) & 0x1);
    __cavm_csr_fatal("NCBX_ARBX_RWX_REQ_PC", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_NCBX_ARBX_RWX_REQ_PC(a,b,c) cavm_ncbx_arbx_rwx_req_pc_t
#define bustype_CAVM_NCBX_ARBX_RWX_REQ_PC(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_NCBX_ARBX_RWX_REQ_PC(a,b,c) "NCBX_ARBX_RWX_REQ_PC"
#define device_bar_CAVM_NCBX_ARBX_RWX_REQ_PC(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_NCBX_ARBX_RWX_REQ_PC(a,b,c) (a)
#define arguments_CAVM_NCBX_ARBX_RWX_REQ_PC(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) ncb#_rw#_lat_pc
 *
 * NCB Latency Performance Counter Registers
 */
union cavm_ncbx_rwx_lat_pc
{
    uint64_t u;
    struct cavm_ncbx_rwx_lat_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Latency performance counter. Operates on mesh clock.

                                                                 This does not count CXL.mem request on IOBL.

                                                                 _ RW(0) increments every cycle by the number of read transactions that have
                                                                 entered IOB from the given NCB, but have not returned read data to the device.

                                                                 _ RW(1) increments every cycle by the number of write transactions that have
                                                                 entered IOB from the given NCB, but have not returned write commits to the
                                                                 device.

                                                                 This counter should be divided by NCB_RW()_REQ_PC to determine each NCB
                                                                 bus's average read and write latency. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Latency performance counter. Operates on mesh clock.

                                                                 This does not count CXL.mem request on IOBL.

                                                                 _ RW(0) increments every cycle by the number of read transactions that have
                                                                 entered IOB from the given NCB, but have not returned read data to the device.

                                                                 _ RW(1) increments every cycle by the number of write transactions that have
                                                                 entered IOB from the given NCB, but have not returned write commits to the
                                                                 device.

                                                                 This counter should be divided by NCB_RW()_REQ_PC to determine each NCB
                                                                 bus's average read and write latency. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbx_rwx_lat_pc_s cn; */
};
typedef union cavm_ncbx_rwx_lat_pc cavm_ncbx_rwx_lat_pc_t;

static inline uint64_t CAVM_NCBX_RWX_LAT_PC(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBX_RWX_LAT_PC(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=15) && (b<=1)))
        return 0x87e130005000ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("NCBX_RWX_LAT_PC", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_NCBX_RWX_LAT_PC(a,b) cavm_ncbx_rwx_lat_pc_t
#define bustype_CAVM_NCBX_RWX_LAT_PC(a,b) CSR_TYPE_RSL
#define basename_CAVM_NCBX_RWX_LAT_PC(a,b) "NCBX_RWX_LAT_PC"
#define device_bar_CAVM_NCBX_RWX_LAT_PC(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_NCBX_RWX_LAT_PC(a,b) (a)
#define arguments_CAVM_NCBX_RWX_LAT_PC(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ncb#_rw#_req_pc
 *
 * NCB Request Performance Counter Registers
 */
union cavm_ncbx_rwx_req_pc
{
    uint64_t u;
    struct cavm_ncbx_rwx_req_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Request performance counter. Operates on mesh clock.

                                                                 _ RW(0) increments on read  transaction entering IOB on given NCB bus.

                                                                 _ RW(1) increments on write transaction entering IOB on given NCB bus. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Request performance counter. Operates on mesh clock.

                                                                 _ RW(0) increments on read  transaction entering IOB on given NCB bus.

                                                                 _ RW(1) increments on write transaction entering IOB on given NCB bus. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbx_rwx_req_pc_s cn; */
};
typedef union cavm_ncbx_rwx_req_pc cavm_ncbx_rwx_req_pc_t;

static inline uint64_t CAVM_NCBX_RWX_REQ_PC(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBX_RWX_REQ_PC(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=15) && (b<=1)))
        return 0x87e130004000ll + 0x1000000ll * ((a) & 0xf) + 0x10ll * ((b) & 0x1);
    __cavm_csr_fatal("NCBX_RWX_REQ_PC", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_NCBX_RWX_REQ_PC(a,b) cavm_ncbx_rwx_req_pc_t
#define bustype_CAVM_NCBX_RWX_REQ_PC(a,b) CSR_TYPE_RSL
#define basename_CAVM_NCBX_RWX_REQ_PC(a,b) "NCBX_RWX_REQ_PC"
#define device_bar_CAVM_NCBX_RWX_REQ_PC(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_NCBX_RWX_REQ_PC(a,b) (a)
#define arguments_CAVM_NCBX_RWX_REQ_PC(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ncb#_rw#_smmu_lat_pc
 *
 * NCB SMMU Latency Performance Counter Registers
 */
union cavm_ncbx_rwx_smmu_lat_pc
{
    uint64_t u;
    struct cavm_ncbx_rwx_smmu_lat_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) SMMU latency performance counter. Operates on mesh clock.

                                                                 This does not count CXL.mem request on IOBL.

                                                                 _ RW(0) increments every cycle by the number of read transactions that have
                                                                 entered IOB from the given NCB, but have not been address translated by the
                                                                 SMMU.

                                                                 _ RW(1) increments by the number of write transactions that have entered IOB
                                                                 from the given NCB, but have not been address translated by the SMMU.

                                                                 This counter should be divided by NCB_RW()_REQ_PC to determine each NCB
                                                                 bus's average read and write SMMU plus IOB front-end latency. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) SMMU latency performance counter. Operates on mesh clock.

                                                                 This does not count CXL.mem request on IOBL.

                                                                 _ RW(0) increments every cycle by the number of read transactions that have
                                                                 entered IOB from the given NCB, but have not been address translated by the
                                                                 SMMU.

                                                                 _ RW(1) increments by the number of write transactions that have entered IOB
                                                                 from the given NCB, but have not been address translated by the SMMU.

                                                                 This counter should be divided by NCB_RW()_REQ_PC to determine each NCB
                                                                 bus's average read and write SMMU plus IOB front-end latency. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbx_rwx_smmu_lat_pc_s cn; */
};
typedef union cavm_ncbx_rwx_smmu_lat_pc cavm_ncbx_rwx_smmu_lat_pc_t;

static inline uint64_t CAVM_NCBX_RWX_SMMU_LAT_PC(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBX_RWX_SMMU_LAT_PC(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && ((a<=15) && (b<=1)))
        return 0x87e130006000ll + 0x1000000ll * ((a) & 0xf) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("NCBX_RWX_SMMU_LAT_PC", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_NCBX_RWX_SMMU_LAT_PC(a,b) cavm_ncbx_rwx_smmu_lat_pc_t
#define bustype_CAVM_NCBX_RWX_SMMU_LAT_PC(a,b) CSR_TYPE_RSL
#define basename_CAVM_NCBX_RWX_SMMU_LAT_PC(a,b) "NCBX_RWX_SMMU_LAT_PC"
#define device_bar_CAVM_NCBX_RWX_SMMU_LAT_PC(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_NCBX_RWX_SMMU_LAT_PC(a,b) (a)
#define arguments_CAVM_NCBX_RWX_SMMU_LAT_PC(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_NCBPC_H__ */
