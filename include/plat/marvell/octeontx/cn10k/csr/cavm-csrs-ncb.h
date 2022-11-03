#ifndef __CAVM_CSRS_NCB_H__
#define __CAVM_CSRS_NCB_H__
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
 * OcteonTX NCB.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration ncb_bar_e
 *
 * NCB Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_NCB_BAR_E_NCBX_PF_BAR0(a) (0x87e140000000ll + 0x1000000ll * (a))
#define CAVM_NCB_BAR_E_NCBX_PF_BAR0_SIZE 0x100000ull

/**
 * Enumeration ncb_psb_event_e
 *
 * NCB Power Serial Bus Event Enumeration
 * Enumerates the event numbers for IOB slaves, which correspond to index {b} of
 * PSBS_SYS()_EVENT()_CFG.
 */
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID0 (2)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID1 (6)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID10 (0x2a)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID11 (0x2e)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID12 (0x32)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID13 (0x36)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID14 (0x3a)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID15 (0x3e)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID2 (0xa)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID3 (0xe)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID4 (0x12)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID5 (0x16)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID6 (0x1a)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID7 (0x1e)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID8 (0x22)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID9 (0x26)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID0 (0)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID1 (4)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID10 (0x28)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID11 (0x2c)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID12 (0x30)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID13 (0x34)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID14 (0x38)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID15 (0x3c)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID2 (8)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID3 (0xc)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID4 (0x10)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID5 (0x14)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID6 (0x18)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID7 (0x1c)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID8 (0x20)
#define CAVM_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID9 (0x24)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID0 (3)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID1 (7)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID10 (0x2b)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID11 (0x2f)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID12 (0x33)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID13 (0x37)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID14 (0x3b)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID15 (0x3f)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID2 (0xb)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID3 (0xf)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID4 (0x13)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID5 (0x17)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID6 (0x1b)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID7 (0x1f)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID8 (0x23)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID9 (0x27)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID0 (1)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID1 (5)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID10 (0x29)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID11 (0x2d)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID12 (0x31)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID13 (0x35)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID14 (0x39)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID15 (0x3d)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID2 (9)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID3 (0xd)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID4 (0x11)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID5 (0x15)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID6 (0x19)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID7 (0x1d)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID8 (0x21)
#define CAVM_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID9 (0x25)

/**
 * Register (RSL) ncb#_arb#_crds
 *
 * NREQ Priority Register
 */
union cavm_ncbx_arbx_crds
{
    uint64_t u;
    struct cavm_ncbx_arbx_crds_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t rsv_rdstid            : 1;  /**< [ 16: 16](R/W) Reserve a write FLID and write STID for each read FLID reserved for this requestor.
                                                                 This is only required for devices that support atomic transactions.
                                                                 These write FLID/STIDs can only be used for atomics.

                                                                 Resets to 1 for those devices which require this resource in order to avoid
                                                                 deadlocks. (i.e. Class B devices, as defined by wiki). */
        uint64_t max                   : 8;  /**< [ 15:  8](R/W) Maximum number of POOL FLIDs/STIDs available to the requestor.
                                                                 Decreasing this number will limit the maximum burst performance of this device.
                                                                 The actual MAX would be this value MAX(POOL) plus MIN. */
        uint64_t min                   : 8;  /**< [  7:  0](R/W) Minimum number of FLIDs available to the requestor. From the total available
                                                                 credits this many write and read FLIDs will be set aside for this NREQID to use.
                                                                 A write STID is also reserved for each write FLID.
                                                                 Increasing this number will ensure this device has dedicated bandwidth over
                                                                 other devices. (Must be 0x1 or larger for GIC. Recommend 0x1 or larger for
                                                                 all devices that are used.) These reserved write FLIDs/STIDs cannot be used for atomic
                                                                 transactions. */
#else /* Word 0 - Little Endian */
        uint64_t min                   : 8;  /**< [  7:  0](R/W) Minimum number of FLIDs available to the requestor. From the total available
                                                                 credits this many write and read FLIDs will be set aside for this NREQID to use.
                                                                 A write STID is also reserved for each write FLID.
                                                                 Increasing this number will ensure this device has dedicated bandwidth over
                                                                 other devices. (Must be 0x1 or larger for GIC. Recommend 0x1 or larger for
                                                                 all devices that are used.) These reserved write FLIDs/STIDs cannot be used for atomic
                                                                 transactions. */
        uint64_t max                   : 8;  /**< [ 15:  8](R/W) Maximum number of POOL FLIDs/STIDs available to the requestor.
                                                                 Decreasing this number will limit the maximum burst performance of this device.
                                                                 The actual MAX would be this value MAX(POOL) plus MIN. */
        uint64_t rsv_rdstid            : 1;  /**< [ 16: 16](R/W) Reserve a write FLID and write STID for each read FLID reserved for this requestor.
                                                                 This is only required for devices that support atomic transactions.
                                                                 These write FLID/STIDs can only be used for atomics.

                                                                 Resets to 1 for those devices which require this resource in order to avoid
                                                                 deadlocks. (i.e. Class B devices, as defined by wiki). */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbx_arbx_crds_s cn; */
};
typedef union cavm_ncbx_arbx_crds cavm_ncbx_arbx_crds_t;

static inline uint64_t CAVM_NCBX_ARBX_CRDS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBX_ARBX_CRDS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=4) && (b<=15)))
        return 0x87e1400f0000ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=2) && (b<=15)))
        return 0x87e1400f0000ll + 0x1000000ll * ((a) & 0x3) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=6) && (b<=15)))
        return 0x87e1400f0000ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=15)))
        return 0x87e1400f0000ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("NCBX_ARBX_CRDS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_NCBX_ARBX_CRDS(a,b) cavm_ncbx_arbx_crds_t
#define bustype_CAVM_NCBX_ARBX_CRDS(a,b) CSR_TYPE_RSL
#define basename_CAVM_NCBX_ARBX_CRDS(a,b) "NCBX_ARBX_CRDS"
#define device_bar_CAVM_NCBX_ARBX_CRDS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_NCBX_ARBX_CRDS(a,b) (a)
#define arguments_CAVM_NCBX_ARBX_CRDS(a,b) (a),(b),-1,-1

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

                                                                 _ RW(0) increments every cycle by the number of read transactions that have been
                                                                 granted from the given NCB, but have not had their credit returned to the NGNT.

                                                                 _ RW(1) increments every cycle by the number of write transactions that have been
                                                                 granted from the given NCB, but have not had their credit returned to the NGNT.

                                                                 This counter should be divided by NCB_ARB()_RW()_REQ_PC to determine each NCB
                                                                 bus's average read and write latency. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Latency performance counter. Operates on coprocessor clock.

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
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=4) && (b<=15) && (c<=1)))
        return 0x87e1400f4000ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0xf) + 8ll * ((c) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=2) && (b<=15) && (c<=1)))
        return 0x87e1400f4000ll + 0x1000000ll * ((a) & 0x3) + 0x20ll * ((b) & 0xf) + 8ll * ((c) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=6) && (b<=15) && (c<=1)))
        return 0x87e1400f4000ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0xf) + 8ll * ((c) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=15) && (c<=1)))
        return 0x87e1400f4000ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0xf) + 8ll * ((c) & 0x1);
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
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=4) && (b<=15) && (c<=1)))
        return 0x87e1400f2000ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0xf) + 8ll * ((c) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=2) && (b<=15) && (c<=1)))
        return 0x87e1400f2000ll + 0x1000000ll * ((a) & 0x3) + 0x20ll * ((b) & 0xf) + 8ll * ((c) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=6) && (b<=15) && (c<=1)))
        return 0x87e1400f2000ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0xf) + 8ll * ((c) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=15) && (c<=1)))
        return 0x87e1400f2000ll + 0x1000000ll * ((a) & 0x7) + 0x20ll * ((b) & 0xf) + 8ll * ((c) & 0x1);
    __cavm_csr_fatal("NCBX_ARBX_RWX_REQ_PC", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_NCBX_ARBX_RWX_REQ_PC(a,b,c) cavm_ncbx_arbx_rwx_req_pc_t
#define bustype_CAVM_NCBX_ARBX_RWX_REQ_PC(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_NCBX_ARBX_RWX_REQ_PC(a,b,c) "NCBX_ARBX_RWX_REQ_PC"
#define device_bar_CAVM_NCBX_ARBX_RWX_REQ_PC(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_NCBX_ARBX_RWX_REQ_PC(a,b,c) (a)
#define arguments_CAVM_NCBX_ARBX_RWX_REQ_PC(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) ncb#_arb_iut_dis
 *
 * NCBO ARBID IUT Disable Register
 * This register enables the uTLB for transactions through each ARBID.
 */
union cavm_ncbx_arb_iut_dis
{
    uint64_t u;
    struct cavm_ncbx_arb_iut_dis_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t dis                   : 16; /**< [ 15:  0](R/W) 0 = enable uTLB for this arb
                                                                 1 = disable uTLB for this arb */
#else /* Word 0 - Little Endian */
        uint64_t dis                   : 16; /**< [ 15:  0](R/W) 0 = enable uTLB for this arb
                                                                 1 = disable uTLB for this arb */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbx_arb_iut_dis_s cn; */
};
typedef union cavm_ncbx_arb_iut_dis cavm_ncbx_arb_iut_dis_t;

static inline uint64_t CAVM_NCBX_ARB_IUT_DIS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBX_ARB_IUT_DIS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=4))
        return 0x87e140008080ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=2))
        return 0x87e140008080ll + 0x1000000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=6))
        return 0x87e140008080ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e140008080ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("NCBX_ARB_IUT_DIS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_NCBX_ARB_IUT_DIS(a) cavm_ncbx_arb_iut_dis_t
#define bustype_CAVM_NCBX_ARB_IUT_DIS(a) CSR_TYPE_RSL
#define basename_CAVM_NCBX_ARB_IUT_DIS(a) "NCBX_ARB_IUT_DIS"
#define device_bar_CAVM_NCBX_ARB_IUT_DIS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_NCBX_ARB_IUT_DIS(a) (a)
#define arguments_CAVM_NCBX_ARB_IUT_DIS(a) (a),-1,-1,-1

/**
 * Register (RSL) ncb#_arbid#_ctl
 *
 * NCB ARBID Control Registers
 * This register set properties for each of the flat ARBIDs.
 */
union cavm_ncbx_arbidx_ctl
{
    uint64_t u;
    struct cavm_ncbx_arbidx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t fast_ord              : 1;  /**< [  9:  9](R/W) Fast order mode. Should only be set for non-PEM ARBIDs.
                                                                 0 = The inbound scheduler requires the PR to be visible in memory for ordering
                                                                 which can have an adverse effect on PR-to-NPR performance.
                                                                 1 = The inbound scheduler can accelerate transaction scheduling by considering
                                                                 PRs ordered when the transaction is scheduled to the memory interface.
                                                                 [SOW_DIS] should be set when [FAST_ORD] is set for a given ARBID.
                                                                 Reset value represents the typical usage.  Set for all non-PEM ARBIDs. */
        uint64_t sow_dis               : 1;  /**< [  8:  8](R/W) Disables the PCIe store widget for memory store performance. Does not affect
                                                                 observable ordering. No impact on IO stores.  For diagnostic use only.
                                                                 0 = Performance optimization on. Issue prefetches on stores to improve
                                                                 store-store ordering.
                                                                 1 = Performance optimization off. No prefetches.
                                                                 [SOW_DIS] should be set when [FAST_ORD] is set for a given ARBID.
                                                                 Reset value represents the typical usage. */
        uint64_t crppr_ena             : 2;  /**< [  7:  6](R/W) For Inbound ordering controls the ability of CRs to pass PRs for PEMs.
                                                                 All CRs can pass PRs for Non-PEMs. For Outbound impacts the cycle-type
                                                                 the CR will have to the NCB device:
                                                                 0x0 = For Outbound CR use the NCB device's relaxed order request that the CR is
                                                                 associated to (from the inbound NCB bus). For Inbound CR, use relaxed order.
                                                                 0x1 = Reserved.
                                                                 0x2 = Force 0.
                                                                 0x3 = Force 1. */
        uint64_t prefetch_dis          : 1;  /**< [  5:  5](R/W) Disables mesh prefetches. For diagnostic use only.
                                                                 0 = Store-store ordered transactions will issue prefetches before the second
                                                                 store to improve performance.
                                                                 1 = No prefetches. */
        uint64_t pr_iova_dis           : 1;  /**< [  4:  4](R/W) PR queue IOVA comparison disable. This should be set for PEM arbids and
                                                                 cleared for non-PEM arbids.
                                                                 0 = PR will not pass a younger PR with the same IOVA.
                                                                 1 = PR may pass a younger PR with the same IOVA, if the relaxed ordering request
                                                                 and [RO_DIS] bit allow it.
                                                                 Any non recommended values may result in unpredictable behavior. */
        uint64_t ro_dis                : 1;  /**< [  3:  3](R/W) Disable relaxed ordering. For diagnostic use only.
                                                                 0 = Relaxed ordering is performed if the NCB device requests it.
                                                                 1 = IOB ignores the relaxed ordering request bit and treats all requests as
                                                                 strictly ordered. */
        uint64_t st_ld_ord             : 1;  /**< [  2:  2](R/W) NPRs and PRs are sent in order they are received on the NCBI.
                                                                 [LD_LD_ORD] and [ST_ST_ORD] must also be set or unpredictable results will occur.
                                                                 For the 256-bit NCBI this does NOT imply the order a
                                                                 NCB device makes request to use the NCBI will be the order sent to the memory/IO
                                                                 space because the NGNT allows grants for PRs to pass grants for NPRs.
                                                                 For diagnostic use only. */
        uint64_t st_st_ord             : 1;  /**< [  1:  1](R/W) PRs are sent in order they are received on the NCBI (RO ignored).
                                                                 For diagnostic use only. */
        uint64_t ld_ld_ord             : 1;  /**< [  0:  0](R/W) Load-load ordering. For diagnostic use only.
                                                                 0 = NPR may pass NPR under some cases. The ordering is based on SMMU completion
                                                                 ordering.
                                                                 1 = NPR never passes NPR; the NPR ordering is based strictly on NCB arrival order.
                                                                 This may harm performance. */
#else /* Word 0 - Little Endian */
        uint64_t ld_ld_ord             : 1;  /**< [  0:  0](R/W) Load-load ordering. For diagnostic use only.
                                                                 0 = NPR may pass NPR under some cases. The ordering is based on SMMU completion
                                                                 ordering.
                                                                 1 = NPR never passes NPR; the NPR ordering is based strictly on NCB arrival order.
                                                                 This may harm performance. */
        uint64_t st_st_ord             : 1;  /**< [  1:  1](R/W) PRs are sent in order they are received on the NCBI (RO ignored).
                                                                 For diagnostic use only. */
        uint64_t st_ld_ord             : 1;  /**< [  2:  2](R/W) NPRs and PRs are sent in order they are received on the NCBI.
                                                                 [LD_LD_ORD] and [ST_ST_ORD] must also be set or unpredictable results will occur.
                                                                 For the 256-bit NCBI this does NOT imply the order a
                                                                 NCB device makes request to use the NCBI will be the order sent to the memory/IO
                                                                 space because the NGNT allows grants for PRs to pass grants for NPRs.
                                                                 For diagnostic use only. */
        uint64_t ro_dis                : 1;  /**< [  3:  3](R/W) Disable relaxed ordering. For diagnostic use only.
                                                                 0 = Relaxed ordering is performed if the NCB device requests it.
                                                                 1 = IOB ignores the relaxed ordering request bit and treats all requests as
                                                                 strictly ordered. */
        uint64_t pr_iova_dis           : 1;  /**< [  4:  4](R/W) PR queue IOVA comparison disable. This should be set for PEM arbids and
                                                                 cleared for non-PEM arbids.
                                                                 0 = PR will not pass a younger PR with the same IOVA.
                                                                 1 = PR may pass a younger PR with the same IOVA, if the relaxed ordering request
                                                                 and [RO_DIS] bit allow it.
                                                                 Any non recommended values may result in unpredictable behavior. */
        uint64_t prefetch_dis          : 1;  /**< [  5:  5](R/W) Disables mesh prefetches. For diagnostic use only.
                                                                 0 = Store-store ordered transactions will issue prefetches before the second
                                                                 store to improve performance.
                                                                 1 = No prefetches. */
        uint64_t crppr_ena             : 2;  /**< [  7:  6](R/W) For Inbound ordering controls the ability of CRs to pass PRs for PEMs.
                                                                 All CRs can pass PRs for Non-PEMs. For Outbound impacts the cycle-type
                                                                 the CR will have to the NCB device:
                                                                 0x0 = For Outbound CR use the NCB device's relaxed order request that the CR is
                                                                 associated to (from the inbound NCB bus). For Inbound CR, use relaxed order.
                                                                 0x1 = Reserved.
                                                                 0x2 = Force 0.
                                                                 0x3 = Force 1. */
        uint64_t sow_dis               : 1;  /**< [  8:  8](R/W) Disables the PCIe store widget for memory store performance. Does not affect
                                                                 observable ordering. No impact on IO stores.  For diagnostic use only.
                                                                 0 = Performance optimization on. Issue prefetches on stores to improve
                                                                 store-store ordering.
                                                                 1 = Performance optimization off. No prefetches.
                                                                 [SOW_DIS] should be set when [FAST_ORD] is set for a given ARBID.
                                                                 Reset value represents the typical usage. */
        uint64_t fast_ord              : 1;  /**< [  9:  9](R/W) Fast order mode. Should only be set for non-PEM ARBIDs.
                                                                 0 = The inbound scheduler requires the PR to be visible in memory for ordering
                                                                 which can have an adverse effect on PR-to-NPR performance.
                                                                 1 = The inbound scheduler can accelerate transaction scheduling by considering
                                                                 PRs ordered when the transaction is scheduled to the memory interface.
                                                                 [SOW_DIS] should be set when [FAST_ORD] is set for a given ARBID.
                                                                 Reset value represents the typical usage.  Set for all non-PEM ARBIDs. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbx_arbidx_ctl_s cn; */
};
typedef union cavm_ncbx_arbidx_ctl cavm_ncbx_arbidx_ctl_t;

static inline uint64_t CAVM_NCBX_ARBIDX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBX_ARBIDX_CTL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=4) && (b<=15)))
        return 0x87e140006100ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=2) && (b<=15)))
        return 0x87e140006100ll + 0x1000000ll * ((a) & 0x3) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=6) && (b<=15)))
        return 0x87e140006100ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=15)))
        return 0x87e140006100ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("NCBX_ARBIDX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_NCBX_ARBIDX_CTL(a,b) cavm_ncbx_arbidx_ctl_t
#define bustype_CAVM_NCBX_ARBIDX_CTL(a,b) CSR_TYPE_RSL
#define basename_CAVM_NCBX_ARBIDX_CTL(a,b) "NCBX_ARBIDX_CTL"
#define device_bar_CAVM_NCBX_ARBIDX_CTL(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_NCBX_ARBIDX_CTL(a,b) (a)
#define arguments_CAVM_NCBX_ARBIDX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ncb#_arbid#_rr_ctl
 *
 * NCB Round Robin Control Registers
 */
union cavm_ncbx_arbidx_rr_ctl
{
    uint64_t u;
    struct cavm_ncbx_arbidx_rr_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t weight                : 4;  /**< [  3:  0](R/W/H) The weight field controls how many times a requestor will be granted access to
                                                                 ncbi bus when multiple requestors are requesting at the same time.
                                                                 A value of 1 allows 1 time and a value of 15 allows 15 times.
                                                                 A value of zero will use round robin arbitration. */
#else /* Word 0 - Little Endian */
        uint64_t weight                : 4;  /**< [  3:  0](R/W/H) The weight field controls how many times a requestor will be granted access to
                                                                 ncbi bus when multiple requestors are requesting at the same time.
                                                                 A value of 1 allows 1 time and a value of 15 allows 15 times.
                                                                 A value of zero will use round robin arbitration. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbx_arbidx_rr_ctl_s cn; */
};
typedef union cavm_ncbx_arbidx_rr_ctl cavm_ncbx_arbidx_rr_ctl_t;

static inline uint64_t CAVM_NCBX_ARBIDX_RR_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBX_ARBIDX_RR_CTL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=4) && (b<=15)))
        return 0x87e1400f7000ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=2) && (b<=15)))
        return 0x87e1400f7000ll + 0x1000000ll * ((a) & 0x3) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=6) && (b<=15)))
        return 0x87e1400f7000ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0xf);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=15)))
        return 0x87e1400f7000ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("NCBX_ARBIDX_RR_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_NCBX_ARBIDX_RR_CTL(a,b) cavm_ncbx_arbidx_rr_ctl_t
#define bustype_CAVM_NCBX_ARBIDX_RR_CTL(a,b) CSR_TYPE_RSL
#define basename_CAVM_NCBX_ARBIDX_RR_CTL(a,b) "NCBX_ARBIDX_RR_CTL"
#define device_bar_CAVM_NCBX_ARBIDX_RR_CTL(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_NCBX_ARBIDX_RR_CTL(a,b) (a)
#define arguments_CAVM_NCBX_ARBIDX_RR_CTL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ncb#_ctl
 *
 * NCB Control Registers
 */
union cavm_ncbx_ctl
{
    uint64_t u;
    struct cavm_ncbx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t dis                   : 1;  /**< [  1:  1](R/W/H) Disable the opportunistic low latency mode for all ports. For diagnostic use only. */
        uint64_t cal                   : 1;  /**< [  0:  0](R/W/H) Calibration active. Write one to field to start calibration. Cleared when
                                                                 calibration is complete. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t cal                   : 1;  /**< [  0:  0](R/W/H) Calibration active. Write one to field to start calibration. Cleared when
                                                                 calibration is complete. For diagnostic use only. */
        uint64_t dis                   : 1;  /**< [  1:  1](R/W/H) Disable the opportunistic low latency mode for all ports. For diagnostic use only. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbx_ctl_s cn; */
};
typedef union cavm_ncbx_ctl cavm_ncbx_ctl_t;

static inline uint64_t CAVM_NCBX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=4))
        return 0x87e1400f6000ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=2))
        return 0x87e1400f6000ll + 0x1000000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=6))
        return 0x87e1400f6000ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e1400f6000ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("NCBX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_NCBX_CTL(a) cavm_ncbx_ctl_t
#define bustype_CAVM_NCBX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_NCBX_CTL(a) "NCBX_CTL"
#define device_bar_CAVM_NCBX_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_NCBX_CTL(a) (a)
#define arguments_CAVM_NCBX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) ncb#_ready
 *
 * NCB READY Registers
 */
union cavm_ncbx_ready
{
    uint64_t u;
    struct cavm_ncbx_ready_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t ncbo_ready            : 16; /**< [ 15:  0](RO/H) Status of ncbo_ready for each ARBID's input to IOBN. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t ncbo_ready            : 16; /**< [ 15:  0](RO/H) Status of ncbo_ready for each ARBID's input to IOBN. For diagnostic use only. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ncbx_ready_s cn; */
};
typedef union cavm_ncbx_ready cavm_ncbx_ready_t;

static inline uint64_t CAVM_NCBX_READY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_NCBX_READY(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=4))
        return 0x87e140008100ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=2))
        return 0x87e140008100ll + 0x1000000ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=6))
        return 0x87e140008100ll + 0x1000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=6))
        return 0x87e140008100ll + 0x1000000ll * ((a) & 0x7);
    __cavm_csr_fatal("NCBX_READY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_NCBX_READY(a) cavm_ncbx_ready_t
#define bustype_CAVM_NCBX_READY(a) CSR_TYPE_RSL
#define basename_CAVM_NCBX_READY(a) "NCBX_READY"
#define device_bar_CAVM_NCBX_READY(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_NCBX_READY(a) (a)
#define arguments_CAVM_NCBX_READY(a) (a),-1,-1,-1

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

                                                                 _ RW(0) increments every cycle by the number of read transactions that have
                                                                 entered IOB from the given NCB, but have not returned read data to the device.

                                                                 _ RW(1) increments every cycle by the number of write transactions that have
                                                                 entered IOB from the given NCB, but have not returned write commits to the
                                                                 device.

                                                                 This counter should be divided by NCB_RW()_REQ_PC to determine each NCB
                                                                 bus's average read and write latency. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Latency performance counter. Operates on mesh clock.

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
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=4) && (b<=1)))
        return 0x87e140005000ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=2) && (b<=1)))
        return 0x87e140005000ll + 0x1000000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=6) && (b<=1)))
        return 0x87e140005000ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=1)))
        return 0x87e140005000ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
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
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=4) && (b<=1)))
        return 0x87e140004000ll + 0x1000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=2) && (b<=1)))
        return 0x87e140004000ll + 0x1000000ll * ((a) & 0x3) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=6) && (b<=1)))
        return 0x87e140004000ll + 0x1000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=1)))
        return 0x87e140004000ll + 0x1000000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x1);
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

                                                                 _ RW(0) increments every cycle by the number of read transactions that have
                                                                 entered IOB from the given NCB, but have not been address translated by the
                                                                 SMMU.

                                                                 _ RW(1) increments by the number of write transactions that have entered IOB
                                                                 from the given NCB, but have not been address translated by the SMMU.

                                                                 This counter should be divided by NCB_RW()_REQ_PC to determine each NCB
                                                                 bus's average read and write SMMU plus IOB front-end latency. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) SMMU latency performance counter. Operates on mesh clock.

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
    if (cavm_is_model(OCTEONTX_CN10KA) && ((a<=4) && (b<=1)))
        return 0x87e140006000ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN10KB) && ((a<=2) && (b<=1)))
        return 0x87e140006000ll + 0x1000000ll * ((a) & 0x3) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KA) && ((a<=6) && (b<=1)))
        return 0x87e140006000ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF10KB) && ((a<=6) && (b<=1)))
        return 0x87e140006000ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("NCBX_RWX_SMMU_LAT_PC", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_NCBX_RWX_SMMU_LAT_PC(a,b) cavm_ncbx_rwx_smmu_lat_pc_t
#define bustype_CAVM_NCBX_RWX_SMMU_LAT_PC(a,b) CSR_TYPE_RSL
#define basename_CAVM_NCBX_RWX_SMMU_LAT_PC(a,b) "NCBX_RWX_SMMU_LAT_PC"
#define device_bar_CAVM_NCBX_RWX_SMMU_LAT_PC(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_NCBX_RWX_SMMU_LAT_PC(a,b) (a)
#define arguments_CAVM_NCBX_RWX_SMMU_LAT_PC(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_NCB_H__ */
