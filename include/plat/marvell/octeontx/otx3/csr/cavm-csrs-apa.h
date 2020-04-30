#ifndef __CAVM_CSRS_APA_H__
#define __CAVM_CSRS_APA_H__
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
 * OcteonTX APA.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration apa_bar_e
 *
 * APA Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_APA_BAR_E_APAX_PF_BAR0(a) (0x87e051000000ll + 0x40000ll * (a))
#define CAVM_APA_BAR_E_APAX_PF_BAR0_SIZE 0x10000ull
#define CAVM_APA_BAR_E_APAX_PF_BAR4(a) (0x87e051010000ll + 0x40000ll * (a))
#define CAVM_APA_BAR_E_APAX_PF_BAR4_SIZE 0x10000ull

/**
 * Enumeration apa_int_vec_e
 *
 * APA MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_APA_INT_VEC_E_APA_INT (0)

/**
 * Register (RSL) apa#_apat_rdat#
 *
 * APA APAT Read Data Register
 */
union cavm_apax_apat_rdatx
{
    uint64_t u;
    struct cavm_apax_apat_rdatx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](SR/W) Response data for the trapped request response.  For a read, this register must
                                                                 be written before APA()_APAT_RSP. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](SR/W) Response data for the trapped request response.  For a read, this register must
                                                                 be written before APA()_APAT_RSP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_rdatx_s cn; */
};
typedef union cavm_apax_apat_rdatx cavm_apax_apat_rdatx_t;

static inline uint64_t CAVM_APAX_APAT_RDATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_RDATX(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b<=3))
        return 0x87e051000c40ll + 0x40000ll * ((a) & 0x3f) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("APAX_APAT_RDATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_APAT_RDATX(a,b) cavm_apax_apat_rdatx_t
#define bustype_CAVM_APAX_APAT_RDATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_APAT_RDATX(a,b) "APAX_APAT_RDATX"
#define device_bar_CAVM_APAX_APAT_RDATX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_APAT_RDATX(a,b) (a)
#define arguments_CAVM_APAX_APAT_RDATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_apat_req
 *
 * APA APAT Request Register
 * This register records information about an APAT trapped request.  See CHI-D
 * specifications for more information.
 */
union cavm_apax_apat_req
{
    uint64_t u;
    struct cavm_apax_apat_req_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t valid                 : 1;  /**< [ 63: 63](SRO/H) Set when a request has been trapped.  Cleared by writing APA()_APT_RSP. */
        uint64_t reserved_61_62        : 2;
        uint64_t index                 : 5;  /**< [ 60: 56](SRO/H) Index of the vector number that matched. */
        uint64_t reserved_23_55        : 33;
        uint64_t opcode                : 7;  /**< [ 22: 16](SRO/H) CHI opcode. */
        uint64_t tracetag              : 1;  /**< [ 15: 15](SRO/H) CHI trace tag. */
        uint64_t size                  : 3;  /**< [ 14: 12](SRO/H) CHI size. */
        uint64_t txnid                 : 12; /**< [ 11:  0](SRO/H) CHI transaction id. */
#else /* Word 0 - Little Endian */
        uint64_t txnid                 : 12; /**< [ 11:  0](SRO/H) CHI transaction id. */
        uint64_t size                  : 3;  /**< [ 14: 12](SRO/H) CHI size. */
        uint64_t tracetag              : 1;  /**< [ 15: 15](SRO/H) CHI trace tag. */
        uint64_t opcode                : 7;  /**< [ 22: 16](SRO/H) CHI opcode. */
        uint64_t reserved_23_55        : 33;
        uint64_t index                 : 5;  /**< [ 60: 56](SRO/H) Index of the vector number that matched. */
        uint64_t reserved_61_62        : 2;
        uint64_t valid                 : 1;  /**< [ 63: 63](SRO/H) Set when a request has been trapped.  Cleared by writing APA()_APT_RSP. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_req_s cn; */
};
typedef union cavm_apax_apat_req cavm_apax_apat_req_t;

static inline uint64_t CAVM_APAX_APAT_REQ(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_REQ(uint64_t a)
{
    if (a<=63)
        return 0x87e051000c00ll + 0x40000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_APAT_REQ", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_APAT_REQ(a) cavm_apax_apat_req_t
#define bustype_CAVM_APAX_APAT_REQ(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_APAT_REQ(a) "APAX_APAT_REQ"
#define device_bar_CAVM_APAX_APAT_REQ(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_APAT_REQ(a) (a)
#define arguments_CAVM_APAX_APAT_REQ(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_apat_req_addr
 *
 * APA APAT Request Address Register
 * This register records the physical address of the trapped request.
 */
union cavm_apax_apat_req_addr
{
    uint64_t u;
    struct cavm_apax_apat_req_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t ns                    : 1;  /**< [ 62: 62](SRO/H) Trapped a nonsecure world transaction. */
        uint64_t reserved_48_61        : 14;
        uint64_t addr                  : 48; /**< [ 47:  0](SRO/H) Trapped physical address. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 48; /**< [ 47:  0](SRO/H) Trapped physical address. */
        uint64_t reserved_48_61        : 14;
        uint64_t ns                    : 1;  /**< [ 62: 62](SRO/H) Trapped a nonsecure world transaction. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_req_addr_s cn; */
};
typedef union cavm_apax_apat_req_addr cavm_apax_apat_req_addr_t;

static inline uint64_t CAVM_APAX_APAT_REQ_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_REQ_ADDR(uint64_t a)
{
    if (a<=63)
        return 0x87e051000c08ll + 0x40000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_APAT_REQ_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_APAT_REQ_ADDR(a) cavm_apax_apat_req_addr_t
#define bustype_CAVM_APAX_APAT_REQ_ADDR(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_APAT_REQ_ADDR(a) "APAX_APAT_REQ_ADDR"
#define device_bar_CAVM_APAX_APAT_REQ_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_APAT_REQ_ADDR(a) (a)
#define arguments_CAVM_APAX_APAT_REQ_ADDR(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_apat_rsp
 *
 * APA APAT Response Register
 */
union cavm_apax_apat_rsp
{
    uint64_t u;
    struct cavm_apax_apat_rsp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t resperr               : 2;  /**< [  1:  0](SR/W) Response error for the trapped request response.  Writing this field will
                                                                 trigger a response to the core and also clear APA()_APAT_REQ.VALID. */
#else /* Word 0 - Little Endian */
        uint64_t resperr               : 2;  /**< [  1:  0](SR/W) Response error for the trapped request response.  Writing this field will
                                                                 trigger a response to the core and also clear APA()_APAT_REQ.VALID. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_rsp_s cn; */
};
typedef union cavm_apax_apat_rsp cavm_apax_apat_rsp_t;

static inline uint64_t CAVM_APAX_APAT_RSP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_RSP(uint64_t a)
{
    if (a<=63)
        return 0x87e051000c10ll + 0x40000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_APAT_RSP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_APAT_RSP(a) cavm_apax_apat_rsp_t
#define bustype_CAVM_APAX_APAT_RSP(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_APAT_RSP(a) "APAX_APAT_RSP"
#define device_bar_CAVM_APAX_APAT_RSP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_APAT_RSP(a) (a)
#define arguments_CAVM_APAX_APAT_RSP(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_apat_vec#_addr
 *
 * APA APAT Vector Address Register
 * This register configures the address trapper.
 */
union cavm_apax_apat_vecx_addr
{
    uint64_t u;
    struct cavm_apax_apat_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t valid                 : 1;  /**< [ 63: 63](SR/W) One means match this address. */
        uint64_t ns                    : 1;  /**< [ 62: 62](SR/W) Nonsecure world value. */
        uint64_t reserved_48_61        : 14;
        uint64_t addr                  : 48; /**< [ 47:  0](SR/W) Address value. Addreses that do not map to device memory are ignored,
                                                                 i.e. [ADDR]\<47\> must be one. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 48; /**< [ 47:  0](SR/W) Address value. Addreses that do not map to device memory are ignored,
                                                                 i.e. [ADDR]\<47\> must be one. */
        uint64_t reserved_48_61        : 14;
        uint64_t ns                    : 1;  /**< [ 62: 62](SR/W) Nonsecure world value. */
        uint64_t valid                 : 1;  /**< [ 63: 63](SR/W) One means match this address. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_vecx_addr_s cn; */
};
typedef union cavm_apax_apat_vecx_addr cavm_apax_apat_vecx_addr_t;

static inline uint64_t CAVM_APAX_APAT_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_VECX_ADDR(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b<=31))
        return 0x87e051000a00ll + 0x40000ll * ((a) & 0x3f) + 0x10ll * ((b) & 0x1f);
    __cavm_csr_fatal("APAX_APAT_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_APAT_VECX_ADDR(a,b) cavm_apax_apat_vecx_addr_t
#define bustype_CAVM_APAX_APAT_VECX_ADDR(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_APAT_VECX_ADDR(a,b) "APAX_APAT_VECX_ADDR"
#define device_bar_CAVM_APAX_APAT_VECX_ADDR(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_APAT_VECX_ADDR(a,b) (a)
#define arguments_CAVM_APAX_APAT_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_apat_vec#_mask
 *
 * APA APAT_VEC_MASK Register
 * Mask bits.  1 means corresponding NS/ADDR bits must match in the request.
 */
union cavm_apax_apat_vecx_mask
{
    uint64_t u;
    struct cavm_apax_apat_vecx_mask_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t ns                    : 1;  /**< [ 62: 62](SR/W) When one, match nonsecure world value in APA_APAT_VEC()_ADDR[NS]. */
        uint64_t reserved_48_61        : 14;
        uint64_t addr                  : 48; /**< [ 47:  0](SR/W) When one, match address value in APA_APAT_VEC()_ADDR[ADDR]. [ADDR]\<47\> must be one. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 48; /**< [ 47:  0](SR/W) When one, match address value in APA_APAT_VEC()_ADDR[ADDR]. [ADDR]\<47\> must be one. */
        uint64_t reserved_48_61        : 14;
        uint64_t ns                    : 1;  /**< [ 62: 62](SR/W) When one, match nonsecure world value in APA_APAT_VEC()_ADDR[NS]. */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_vecx_mask_s cn; */
};
typedef union cavm_apax_apat_vecx_mask cavm_apax_apat_vecx_mask_t;

static inline uint64_t CAVM_APAX_APAT_VECX_MASK(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_VECX_MASK(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b<=31))
        return 0x87e051000a08ll + 0x40000ll * ((a) & 0x3f) + 0x10ll * ((b) & 0x1f);
    __cavm_csr_fatal("APAX_APAT_VECX_MASK", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_APAT_VECX_MASK(a,b) cavm_apax_apat_vecx_mask_t
#define bustype_CAVM_APAX_APAT_VECX_MASK(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_APAT_VECX_MASK(a,b) "APAX_APAT_VECX_MASK"
#define device_bar_CAVM_APAX_APAT_VECX_MASK(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_APAT_VECX_MASK(a,b) (a)
#define arguments_CAVM_APAX_APAT_VECX_MASK(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_apat_wdat#
 *
 * APA APAT Write Data Register
 */
union cavm_apax_apat_wdatx
{
    uint64_t u;
    struct cavm_apax_apat_wdatx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](SRO/H) Store data of the trapped request. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](SRO/H) Store data of the trapped request. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_apat_wdatx_s cn; */
};
typedef union cavm_apax_apat_wdatx cavm_apax_apat_wdatx_t;

static inline uint64_t CAVM_APAX_APAT_WDATX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_APAT_WDATX(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b<=3))
        return 0x87e051000c20ll + 0x40000ll * ((a) & 0x3f) + 8ll * ((b) & 0x3);
    __cavm_csr_fatal("APAX_APAT_WDATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_APAT_WDATX(a,b) cavm_apax_apat_wdatx_t
#define bustype_CAVM_APAX_APAT_WDATX(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_APAT_WDATX(a,b) "APAX_APAT_WDATX"
#define device_bar_CAVM_APAX_APAT_WDATX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_APAT_WDATX(a,b) (a)
#define arguments_CAVM_APAX_APAT_WDATX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_bp_test0
 *
 * INTERNAL: APA Backpressure Test Register 0
 */
union cavm_apax_bp_test0
{
    uint64_t u;
    struct cavm_apax_bp_test0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 16; /**< [ 63: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> C15 = Prevent XRX DAT from popping.
                                                                 \<62\> C14 = Prevent XRX RSP from popping.
                                                                 \<61\> C13 = Prevent XRX SNP from popping.
                                                                 \<60\> C12 = Prevent CRX DAT from popping.
                                                                 \<59\> C11 = Prevent CRX RSP from popping.
                                                                 \<58\> C10 = Prevent CRX REQ from popping.
                                                                 \<57\> C9  = Prevent CRD FIFO from popping.
                                                                 \<56\> C8  = Prevent TXN FIFO from advancing head.
                                                                 \<55\> C7  = Prevent RQB FIFO from advancing head.
                                                                 \<54\> C6  = Prevent DAT FIFO from advancing head.
                                                                 \<53\> C5  = Pretend CTX DAT has no credits.
                                                                 \<52\> C4  = Pretend CTX RSP has no credits.
                                                                 \<51\> C3  = Pretend CTX SNP has no credits.
                                                                 \<50\> C2  = Pretend XTX DAT has no credits.
                                                                 \<49\> C1  = Pretend XTX RSP has no credits.
                                                                 \<48\> C0  = Pretend XTX REQ has no credits. */
        uint64_t bp_cfg                : 32; /**< [ 47: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<47:46\> = Config 15.
                                                                   \<45:44\> = Config 14.
                                                                   \<43:42\> = Config 13.
                                                                   \<41:40\> = Config 12.
                                                                   \<39:38\> = Config 11.
                                                                   \<37:36\> = Config 10.
                                                                   \<35:34\> = Config 9.
                                                                   \<33:32\> = Config 8.
                                                                   \<31:30\> = Config 7.
                                                                   \<29:28\> = Config 6.
                                                                   \<27:26\> = Config 5.
                                                                   \<25:24\> = Config 4.
                                                                   \<23:22\> = Config 3.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update period - clock cycles minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update period - clock cycles minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 32; /**< [ 47: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<47:46\> = Config 15.
                                                                   \<45:44\> = Config 14.
                                                                   \<43:42\> = Config 13.
                                                                   \<41:40\> = Config 12.
                                                                   \<39:38\> = Config 11.
                                                                   \<37:36\> = Config 10.
                                                                   \<35:34\> = Config 9.
                                                                   \<33:32\> = Config 8.
                                                                   \<31:30\> = Config 7.
                                                                   \<29:28\> = Config 6.
                                                                   \<27:26\> = Config 5.
                                                                   \<25:24\> = Config 4.
                                                                   \<23:22\> = Config 3.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t enable                : 16; /**< [ 63: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> C15 = Prevent XRX DAT from popping.
                                                                 \<62\> C14 = Prevent XRX RSP from popping.
                                                                 \<61\> C13 = Prevent XRX SNP from popping.
                                                                 \<60\> C12 = Prevent CRX DAT from popping.
                                                                 \<59\> C11 = Prevent CRX RSP from popping.
                                                                 \<58\> C10 = Prevent CRX REQ from popping.
                                                                 \<57\> C9  = Prevent CRD FIFO from popping.
                                                                 \<56\> C8  = Prevent TXN FIFO from advancing head.
                                                                 \<55\> C7  = Prevent RQB FIFO from advancing head.
                                                                 \<54\> C6  = Prevent DAT FIFO from advancing head.
                                                                 \<53\> C5  = Pretend CTX DAT has no credits.
                                                                 \<52\> C4  = Pretend CTX RSP has no credits.
                                                                 \<51\> C3  = Pretend CTX SNP has no credits.
                                                                 \<50\> C2  = Pretend XTX DAT has no credits.
                                                                 \<49\> C1  = Pretend XTX RSP has no credits.
                                                                 \<48\> C0  = Pretend XTX REQ has no credits. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_bp_test0_s cn; */
};
typedef union cavm_apax_bp_test0 cavm_apax_bp_test0_t;

static inline uint64_t CAVM_APAX_BP_TEST0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_BP_TEST0(uint64_t a)
{
    if (a<=63)
        return 0x87e051000e00ll + 0x40000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_BP_TEST0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_BP_TEST0(a) cavm_apax_bp_test0_t
#define bustype_CAVM_APAX_BP_TEST0(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_BP_TEST0(a) "APAX_BP_TEST0"
#define device_bar_CAVM_APAX_BP_TEST0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_BP_TEST0(a) (a)
#define arguments_CAVM_APAX_BP_TEST0(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_core_clk_ctl
 *
 * APA Core Clock Control Register
 * Registers to control the core clock.
 */
union cavm_apax_core_clk_ctl
{
    uint64_t u;
    struct cavm_apax_core_clk_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t bypass                : 1;  /**< [ 63: 63](SR/W) Use rclk directly instead of the output of the ARO. */
        uint64_t reserved_16_62        : 47;
        uint64_t x                     : 8;  /**< [ 15:  8](SR/W) Core clock X dividend. The core clock frequency will be on average X/Y of rclk frequency. */
        uint64_t y                     : 8;  /**< [  7:  0](SR/W) Core clock Y divisor, see [X]. */
#else /* Word 0 - Little Endian */
        uint64_t y                     : 8;  /**< [  7:  0](SR/W) Core clock Y divisor, see [X]. */
        uint64_t x                     : 8;  /**< [ 15:  8](SR/W) Core clock X dividend. The core clock frequency will be on average X/Y of rclk frequency. */
        uint64_t reserved_16_62        : 47;
        uint64_t bypass                : 1;  /**< [ 63: 63](SR/W) Use rclk directly instead of the output of the ARO. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_core_clk_ctl_s cn; */
};
typedef union cavm_apax_core_clk_ctl cavm_apax_core_clk_ctl_t;

static inline uint64_t CAVM_APAX_CORE_CLK_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_CORE_CLK_CTL(uint64_t a)
{
    if (a<=63)
        return 0x87e051000d20ll + 0x40000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_CORE_CLK_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_CORE_CLK_CTL(a) cavm_apax_core_clk_ctl_t
#define bustype_CAVM_APAX_CORE_CLK_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_CORE_CLK_CTL(a) "APAX_CORE_CLK_CTL"
#define device_bar_CAVM_APAX_CORE_CLK_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_CORE_CLK_CTL(a) (a)
#define arguments_CAVM_APAX_CORE_CLK_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_core_reset
 *
 * APA Core Reset Register
 * APA core reset register.
 */
union cavm_apax_core_reset
{
    uint64_t u;
    struct cavm_apax_core_reset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t resetn                : 1;  /**< [  0:  0](SR/W) Active-low reset for this core. */
#else /* Word 0 - Little Endian */
        uint64_t resetn                : 1;  /**< [  0:  0](SR/W) Active-low reset for this core. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_core_reset_s cn; */
};
typedef union cavm_apax_core_reset cavm_apax_core_reset_t;

static inline uint64_t CAVM_APAX_CORE_RESET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_CORE_RESET(uint64_t a)
{
    if (a<=63)
        return 0x87e051000d28ll + 0x40000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_CORE_RESET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_CORE_RESET(a) cavm_apax_core_reset_t
#define bustype_CAVM_APAX_CORE_RESET(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_CORE_RESET(a) "APAX_CORE_RESET"
#define device_bar_CAVM_APAX_CORE_RESET(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_CORE_RESET(a) (a)
#define arguments_CAVM_APAX_CORE_RESET(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_ctl
 *
 * APA Control Register
 * This register contains miscellaneous APA control fields.
 */
union cavm_apax_ctl
{
    uint64_t u;
    struct cavm_apax_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t lsa_crclk_force_on    : 1;  /**< [ 33: 33](SR/W) Force on conditional clocks in LSA. */
        uint64_t apa_crclk_force_on    : 1;  /**< [ 32: 32](SR/W) Force on conditional clocks in all of APA. */
        uint64_t reserved_10_31        : 22;
        uint64_t dvm_filter            : 2;  /**< [  9:  8](SR/W) APA filter to prevent certain DVM snoops from reaching the core.
                                                                 APA responds to them instead.

                                                                 0x0 = No filtering.
                                                                 0x1 = Filter TLB Invalidate.
                                                                 0x2 = Filter TLB Invalidate
                                                                     + Branch Predictor Invalidate
                                                                     + Physical Instruction Cache Invalidate
                                                                     + Virtual Instruction Cache Invalidate.
                                                                 0x3 = All of the above + Synchronization. */
        uint64_t dis_wdog_struct_crd_clean : 1;/**< [  7:  7](SR/W) Disable cleaning of stale CRD entries. */
        uint64_t dis_wdog_struct_txnid_clean : 1;/**< [  6:  6](SR/W) Disable cleaning of stale TXNID entries. */
        uint64_t dis_wdog_struct_rqb_clean : 1;/**< [  5:  5](SR/W) Disable cleaning of stale RQB entries. */
        uint64_t dis_wdog_struct_dat_clean : 1;/**< [  4:  4](SR/W) Disable cleaning of stale DAT entries. */
        uint64_t dis_wdog_core_clean   : 1;  /**< [  3:  3](SR/W) Disable injection of missing responses to core. */
        uint64_t dis_gwc               : 1;  /**< [  2:  2](SR/W) Disable SSO get work cache. */
        uint64_t dis_lmtst             : 1;  /**< [  1:  1](SR/W) Disable LMTST. */
        uint64_t dis_accel             : 1;  /**< [  0:  0](SR/W) Disable I/O acceleration. */
#else /* Word 0 - Little Endian */
        uint64_t dis_accel             : 1;  /**< [  0:  0](SR/W) Disable I/O acceleration. */
        uint64_t dis_lmtst             : 1;  /**< [  1:  1](SR/W) Disable LMTST. */
        uint64_t dis_gwc               : 1;  /**< [  2:  2](SR/W) Disable SSO get work cache. */
        uint64_t dis_wdog_core_clean   : 1;  /**< [  3:  3](SR/W) Disable injection of missing responses to core. */
        uint64_t dis_wdog_struct_dat_clean : 1;/**< [  4:  4](SR/W) Disable cleaning of stale DAT entries. */
        uint64_t dis_wdog_struct_rqb_clean : 1;/**< [  5:  5](SR/W) Disable cleaning of stale RQB entries. */
        uint64_t dis_wdog_struct_txnid_clean : 1;/**< [  6:  6](SR/W) Disable cleaning of stale TXNID entries. */
        uint64_t dis_wdog_struct_crd_clean : 1;/**< [  7:  7](SR/W) Disable cleaning of stale CRD entries. */
        uint64_t dvm_filter            : 2;  /**< [  9:  8](SR/W) APA filter to prevent certain DVM snoops from reaching the core.
                                                                 APA responds to them instead.

                                                                 0x0 = No filtering.
                                                                 0x1 = Filter TLB Invalidate.
                                                                 0x2 = Filter TLB Invalidate
                                                                     + Branch Predictor Invalidate
                                                                     + Physical Instruction Cache Invalidate
                                                                     + Virtual Instruction Cache Invalidate.
                                                                 0x3 = All of the above + Synchronization. */
        uint64_t reserved_10_31        : 22;
        uint64_t apa_crclk_force_on    : 1;  /**< [ 32: 32](SR/W) Force on conditional clocks in all of APA. */
        uint64_t lsa_crclk_force_on    : 1;  /**< [ 33: 33](SR/W) Force on conditional clocks in LSA. */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_ctl_s cn; */
};
typedef union cavm_apax_ctl cavm_apax_ctl_t;

static inline uint64_t CAVM_APAX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_CTL(uint64_t a)
{
    if (a<=63)
        return 0x87e051000d10ll + 0x40000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_CTL(a) cavm_apax_ctl_t
#define bustype_CAVM_APAX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_CTL(a) "APAX_CTL"
#define device_bar_CAVM_APAX_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_CTL(a) (a)
#define arguments_CAVM_APAX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_diag
 *
 * INTERNAL: APA DIAG Register
 *
 * For diagnostic use only.
 */
union cavm_apax_diag
{
    uint64_t u;
    struct cavm_apax_diag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_39_63        : 25;
        uint64_t tim_crx_rdy           : 1;  /**< [ 38: 38](SRO/H) There is a free slot in the TIM transaction buffer. */
        uint64_t sync                  : 1;  /**< [ 37: 37](SRO/H) a Sync is inflight. */
        uint64_t cfif_valid            : 1;  /**< [ 36: 36](SRO/H) There is something in the credit FIFO. */
        uint64_t dat_head              : 5;  /**< [ 35: 31](SRO/H) DAT head pointer. */
        uint64_t dat_tail              : 5;  /**< [ 30: 26](SRO/H) DAT tail pointer. */
        uint64_t to_retry_count        : 6;  /**< [ 25: 20](SRO/H) Pending retry count. */
        uint64_t rqb_head              : 6;  /**< [ 19: 14](SRO/H) RQB head pointer. */
        uint64_t tfif_head             : 7;  /**< [ 13:  7](SRO/H) TFIF head pointer. */
        uint64_t tfif_tail             : 7;  /**< [  6:  0](SRO/H) TFIF head pointer. */
#else /* Word 0 - Little Endian */
        uint64_t tfif_tail             : 7;  /**< [  6:  0](SRO/H) TFIF head pointer. */
        uint64_t tfif_head             : 7;  /**< [ 13:  7](SRO/H) TFIF head pointer. */
        uint64_t rqb_head              : 6;  /**< [ 19: 14](SRO/H) RQB head pointer. */
        uint64_t to_retry_count        : 6;  /**< [ 25: 20](SRO/H) Pending retry count. */
        uint64_t dat_tail              : 5;  /**< [ 30: 26](SRO/H) DAT tail pointer. */
        uint64_t dat_head              : 5;  /**< [ 35: 31](SRO/H) DAT head pointer. */
        uint64_t cfif_valid            : 1;  /**< [ 36: 36](SRO/H) There is something in the credit FIFO. */
        uint64_t sync                  : 1;  /**< [ 37: 37](SRO/H) a Sync is inflight. */
        uint64_t tim_crx_rdy           : 1;  /**< [ 38: 38](SRO/H) There is a free slot in the TIM transaction buffer. */
        uint64_t reserved_39_63        : 25;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_diag_s cn; */
};
typedef union cavm_apax_diag cavm_apax_diag_t;

static inline uint64_t CAVM_APAX_DIAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_DIAG(uint64_t a)
{
    if (a<=63)
        return 0x87e051000e18ll + 0x40000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_DIAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_DIAG(a) cavm_apax_diag_t
#define bustype_CAVM_APAX_DIAG(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_DIAG(a) "APAX_DIAG"
#define device_bar_CAVM_APAX_DIAG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_DIAG(a) (a)
#define arguments_CAVM_APAX_DIAG(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_diag_dat#_word#
 *
 * INTERNAL: APA Dignostic Data Register
 */
union cavm_apax_diag_datx_wordx
{
    uint64_t u;
    struct cavm_apax_diag_datx_wordx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](SRO/H) Contents of the DAT buffer. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](SRO/H) Contents of the DAT buffer. For diagnostic use only. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_diag_datx_wordx_s cn; */
};
typedef union cavm_apax_diag_datx_wordx cavm_apax_diag_datx_wordx_t;

static inline uint64_t CAVM_APAX_DIAG_DATX_WORDX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_DIAG_DATX_WORDX(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a<=63) && (b<=63) && (c<=4))
        return 0x87e051000000ll + 0x40000ll * ((a) & 0x3f) + 8ll * ((b) & 0x3f) + 0x200ll * ((c) & 0x7);
    __cavm_csr_fatal("APAX_DIAG_DATX_WORDX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_APAX_DIAG_DATX_WORDX(a,b,c) cavm_apax_diag_datx_wordx_t
#define bustype_CAVM_APAX_DIAG_DATX_WORDX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_APAX_DIAG_DATX_WORDX(a,b,c) "APAX_DIAG_DATX_WORDX"
#define device_bar_CAVM_APAX_DIAG_DATX_WORDX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_DIAG_DATX_WORDX(a,b,c) (a)
#define arguments_CAVM_APAX_DIAG_DATX_WORDX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) apa#_eco
 *
 * INTERNAL: APA ECO Register
 *
 * These registers exist to provide CSR flops in case they are needed for ECOs.
 */
union cavm_apax_eco
{
    uint64_t u;
    struct cavm_apax_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t eco_rw                : 64; /**< [ 63:  0](SR/W) ECO flops. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 64; /**< [ 63:  0](SR/W) ECO flops. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_eco_s cn; */
};
typedef union cavm_apax_eco cavm_apax_eco_t;

static inline uint64_t CAVM_APAX_ECO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_ECO(uint64_t a)
{
    if (a<=63)
        return 0x87e051000e10ll + 0x40000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_ECO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_ECO(a) cavm_apax_eco_t
#define bustype_CAVM_APAX_ECO(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_ECO(a) "APAX_ECO"
#define device_bar_CAVM_APAX_ECO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_ECO(a) (a)
#define arguments_CAVM_APAX_ECO(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_int_ena_w1c
 *
 * APA Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_apax_int_ena_w1c
{
    uint64_t u;
    struct cavm_apax_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t wdog_struct_crd       : 1;  /**< [  5:  5](SR/W1C/H) Reads or clears enable for APA(0..63)_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for APA(0..63)_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for APA(0..63)_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for APA(0..63)_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_core             : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..63)_INT_W1C[WDOG_CORE]. */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..63)_INT_W1C[APAT].
                                                                 Internal:
                                                                 FIXME this must be a separate int register/vector as goes to CPC. */
#else /* Word 0 - Little Endian */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1C/H) Reads or clears enable for APA(0..63)_INT_W1C[APAT].
                                                                 Internal:
                                                                 FIXME this must be a separate int register/vector as goes to CPC. */
        uint64_t wdog_core             : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for APA(0..63)_INT_W1C[WDOG_CORE]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for APA(0..63)_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for APA(0..63)_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for APA(0..63)_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  5:  5](SR/W1C/H) Reads or clears enable for APA(0..63)_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_int_ena_w1c_s cn; */
};
typedef union cavm_apax_int_ena_w1c cavm_apax_int_ena_w1c_t;

static inline uint64_t CAVM_APAX_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_INT_ENA_W1C(uint64_t a)
{
    if (a<=63)
        return 0x87e051000f10ll + 0x40000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_INT_ENA_W1C(a) cavm_apax_int_ena_w1c_t
#define bustype_CAVM_APAX_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_INT_ENA_W1C(a) "APAX_INT_ENA_W1C"
#define device_bar_CAVM_APAX_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_INT_ENA_W1C(a) (a)
#define arguments_CAVM_APAX_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_int_ena_w1s
 *
 * APA Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_apax_int_ena_w1s
{
    uint64_t u;
    struct cavm_apax_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t wdog_struct_crd       : 1;  /**< [  5:  5](SR/W1S/H) Reads or sets enable for APA(0..63)_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for APA(0..63)_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for APA(0..63)_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for APA(0..63)_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_core             : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..63)_INT_W1C[WDOG_CORE]. */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..63)_INT_W1C[APAT].
                                                                 Internal:
                                                                 FIXME this must be a separate int register/vector as goes to CPC. */
#else /* Word 0 - Little Endian */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets enable for APA(0..63)_INT_W1C[APAT].
                                                                 Internal:
                                                                 FIXME this must be a separate int register/vector as goes to CPC. */
        uint64_t wdog_core             : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for APA(0..63)_INT_W1C[WDOG_CORE]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for APA(0..63)_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for APA(0..63)_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for APA(0..63)_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  5:  5](SR/W1S/H) Reads or sets enable for APA(0..63)_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_int_ena_w1s_s cn; */
};
typedef union cavm_apax_int_ena_w1s cavm_apax_int_ena_w1s_t;

static inline uint64_t CAVM_APAX_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_INT_ENA_W1S(uint64_t a)
{
    if (a<=63)
        return 0x87e051000f18ll + 0x40000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_INT_ENA_W1S(a) cavm_apax_int_ena_w1s_t
#define bustype_CAVM_APAX_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_INT_ENA_W1S(a) "APAX_INT_ENA_W1S"
#define device_bar_CAVM_APAX_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_INT_ENA_W1S(a) (a)
#define arguments_CAVM_APAX_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_int_w1c
 *
 * APA Interrupt Register
 * This register is reports interrupt status.
 */
union cavm_apax_int_w1c
{
    uint64_t u;
    struct cavm_apax_int_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t wdog_struct_crd       : 1;  /**< [  5:  5](SR/W1C/H) Stale entry was detected in CRD. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1C/H) Stale entry was detected in TXNID. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1C/H) Stale entry was detected in RQB. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1C/H) Stale entry was detected in CRD. */
        uint64_t wdog_core             : 1;  /**< [  1:  1](SR/W1C/H) Core did not receive expected responses before timeout. */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1C/H) Address trapper triggered.
                                                                 Internal:
                                                                 FIXME this must be a separate int register/vector as goes to CPC. */
#else /* Word 0 - Little Endian */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1C/H) Address trapper triggered.
                                                                 Internal:
                                                                 FIXME this must be a separate int register/vector as goes to CPC. */
        uint64_t wdog_core             : 1;  /**< [  1:  1](SR/W1C/H) Core did not receive expected responses before timeout. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1C/H) Stale entry was detected in CRD. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1C/H) Stale entry was detected in RQB. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1C/H) Stale entry was detected in TXNID. */
        uint64_t wdog_struct_crd       : 1;  /**< [  5:  5](SR/W1C/H) Stale entry was detected in CRD. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_int_w1c_s cn; */
};
typedef union cavm_apax_int_w1c cavm_apax_int_w1c_t;

static inline uint64_t CAVM_APAX_INT_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_INT_W1C(uint64_t a)
{
    if (a<=63)
        return 0x87e051000f00ll + 0x40000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_INT_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_INT_W1C(a) cavm_apax_int_w1c_t
#define bustype_CAVM_APAX_INT_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_INT_W1C(a) "APAX_INT_W1C"
#define device_bar_CAVM_APAX_INT_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_INT_W1C(a) (a)
#define arguments_CAVM_APAX_INT_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_int_w1s
 *
 * APA Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_apax_int_w1s
{
    uint64_t u;
    struct cavm_apax_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t wdog_struct_crd       : 1;  /**< [  5:  5](SR/W1S/H) Reads or sets APA(0..63)_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets APA(0..63)_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets APA(0..63)_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets APA(0..63)_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_core             : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..63)_INT_W1C[WDOG_CORE]. */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..63)_INT_W1C[APAT].
                                                                 Internal:
                                                                 FIXME this must be a separate int register/vector as goes to CPC. */
#else /* Word 0 - Little Endian */
        uint64_t apat                  : 1;  /**< [  0:  0](SR/W1S/H) Reads or sets APA(0..63)_INT_W1C[APAT].
                                                                 Internal:
                                                                 FIXME this must be a separate int register/vector as goes to CPC. */
        uint64_t wdog_core             : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets APA(0..63)_INT_W1C[WDOG_CORE]. */
        uint64_t wdog_struct_dat       : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets APA(0..63)_INT_W1C[WDOG_STRUCT_DAT]. */
        uint64_t wdog_struct_rqb       : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets APA(0..63)_INT_W1C[WDOG_STRUCT_RQB]. */
        uint64_t wdog_struct_txnid     : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets APA(0..63)_INT_W1C[WDOG_STRUCT_TXNID]. */
        uint64_t wdog_struct_crd       : 1;  /**< [  5:  5](SR/W1S/H) Reads or sets APA(0..63)_INT_W1C[WDOG_STRUCT_CRD]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_int_w1s_s cn; */
};
typedef union cavm_apax_int_w1s cavm_apax_int_w1s_t;

static inline uint64_t CAVM_APAX_INT_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_INT_W1S(uint64_t a)
{
    if (a<=63)
        return 0x87e051000f08ll + 0x40000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_INT_W1S(a) cavm_apax_int_w1s_t
#define bustype_CAVM_APAX_INT_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_INT_W1S(a) "APAX_INT_W1S"
#define device_bar_CAVM_APAX_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_INT_W1S(a) (a)
#define arguments_CAVM_APAX_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_lsa#_diag_counts
 *
 * APA LSA Status Diagnostic Register
 * Captures the execution status of the LSA engines.
 */
union cavm_apax_lsax_diag_counts
{
    uint64_t u;
    struct cavm_apax_lsax_diag_counts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_39_63        : 25;
        uint64_t compdata_cnt          : 7;  /**< [ 38: 32](SRO/H) Number of CompDat flits observed. */
        uint64_t exp_cdat_cnt          : 7;  /**< [ 31: 25](SRO/H) Number of CompDat flits expected. */
        uint64_t comp_cnt              : 5;  /**< [ 24: 20](SRO/H) Number of CompDBIDResps received from IOB. */
        uint64_t wns_cnt               : 5;  /**< [ 19: 15](SRO/H) Number of WriteNoSnps issued. */
        uint64_t ro_cnt                : 5;  /**< [ 14: 10](SRO/H) Number of ReadOnce for LMTLINEs issued. */
        uint64_t reserved_5_9          : 5;
        uint64_t init_tail             : 5;  /**< [  4:  0](SRO/H) The dat buffer tail pointer for the first LMTLINE in a burst */
#else /* Word 0 - Little Endian */
        uint64_t init_tail             : 5;  /**< [  4:  0](SRO/H) The dat buffer tail pointer for the first LMTLINE in a burst */
        uint64_t reserved_5_9          : 5;
        uint64_t ro_cnt                : 5;  /**< [ 14: 10](SRO/H) Number of ReadOnce for LMTLINEs issued. */
        uint64_t wns_cnt               : 5;  /**< [ 19: 15](SRO/H) Number of WriteNoSnps issued. */
        uint64_t comp_cnt              : 5;  /**< [ 24: 20](SRO/H) Number of CompDBIDResps received from IOB. */
        uint64_t exp_cdat_cnt          : 7;  /**< [ 31: 25](SRO/H) Number of CompDat flits expected. */
        uint64_t compdata_cnt          : 7;  /**< [ 38: 32](SRO/H) Number of CompDat flits observed. */
        uint64_t reserved_39_63        : 25;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_lsax_diag_counts_s cn; */
};
typedef union cavm_apax_lsax_diag_counts cavm_apax_lsax_diag_counts_t;

static inline uint64_t CAVM_APAX_LSAX_DIAG_COUNTS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_LSAX_DIAG_COUNTS(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b<=1))
        return 0x87e051001008ll + 0x40000ll * ((a) & 0x3f) + 0x40ll * ((b) & 0x1);
    __cavm_csr_fatal("APAX_LSAX_DIAG_COUNTS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_LSAX_DIAG_COUNTS(a,b) cavm_apax_lsax_diag_counts_t
#define bustype_CAVM_APAX_LSAX_DIAG_COUNTS(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_LSAX_DIAG_COUNTS(a,b) "APAX_LSAX_DIAG_COUNTS"
#define device_bar_CAVM_APAX_LSAX_DIAG_COUNTS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_LSAX_DIAG_COUNTS(a,b) (a)
#define arguments_CAVM_APAX_LSAX_DIAG_COUNTS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_lsa#_diag_lmtmap
 *
 * APA LSA Status Diagnostic Register
 * Captures information LMTMAP entry associated with an LMTST.
 */
union cavm_apax_lsax_diag_lmtmap
{
    uint64_t u;
    struct cavm_apax_lsax_diag_lmtmap_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_61_63        : 3;
        uint64_t dis_sched_early_comp  : 1;  /**< [ 60: 60](SRO/H) DIS_SCHED_EARLY_COMP field in the map entry. */
        uint64_t sched_ena             : 1;  /**< [ 59: 59](SRO/H) SCHED_ENA field in the map entry. */
        uint64_t dis_line_pref         : 1;  /**< [ 58: 58](SRO/H) DIS_LINE_PREF field in the map entry. */
        uint64_t lmt_ena               : 1;  /**< [ 57: 57](SRO/H) LMT_ENA field in the map entry. */
        uint64_t num_lmtlines          : 3;  /**< [ 56: 54](SRO/H) The maximum number of supported LMTLINES for the PF, FUNC pair. */
        uint64_t ssow_pf_func          : 13; /**< [ 53: 41](SRO/H) The SSOW_PF_FUNC field used to order an LMTST with SSO. */
        uint64_t lmtline_base          : 41; /**< [ 40:  0](SRO/H) The base address of the for LMTLINES for a PF, FUNC pair. */
#else /* Word 0 - Little Endian */
        uint64_t lmtline_base          : 41; /**< [ 40:  0](SRO/H) The base address of the for LMTLINES for a PF, FUNC pair. */
        uint64_t ssow_pf_func          : 13; /**< [ 53: 41](SRO/H) The SSOW_PF_FUNC field used to order an LMTST with SSO. */
        uint64_t num_lmtlines          : 3;  /**< [ 56: 54](SRO/H) The maximum number of supported LMTLINES for the PF, FUNC pair. */
        uint64_t lmt_ena               : 1;  /**< [ 57: 57](SRO/H) LMT_ENA field in the map entry. */
        uint64_t dis_line_pref         : 1;  /**< [ 58: 58](SRO/H) DIS_LINE_PREF field in the map entry. */
        uint64_t sched_ena             : 1;  /**< [ 59: 59](SRO/H) SCHED_ENA field in the map entry. */
        uint64_t dis_sched_early_comp  : 1;  /**< [ 60: 60](SRO/H) DIS_SCHED_EARLY_COMP field in the map entry. */
        uint64_t reserved_61_63        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_lsax_diag_lmtmap_s cn; */
};
typedef union cavm_apax_lsax_diag_lmtmap cavm_apax_lsax_diag_lmtmap_t;

static inline uint64_t CAVM_APAX_LSAX_DIAG_LMTMAP(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_LSAX_DIAG_LMTMAP(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b<=1))
        return 0x87e051001018ll + 0x40000ll * ((a) & 0x3f) + 0x40ll * ((b) & 0x1);
    __cavm_csr_fatal("APAX_LSAX_DIAG_LMTMAP", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_LSAX_DIAG_LMTMAP(a,b) cavm_apax_lsax_diag_lmtmap_t
#define bustype_CAVM_APAX_LSAX_DIAG_LMTMAP(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_LSAX_DIAG_LMTMAP(a,b) "APAX_LSAX_DIAG_LMTMAP"
#define device_bar_CAVM_APAX_LSAX_DIAG_LMTMAP(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_LSAX_DIAG_LMTMAP(a,b) (a)
#define arguments_CAVM_APAX_LSAX_DIAG_LMTMAP(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_lsa#_diag_req
 *
 * APA LSA Status Diagnostic Register
 * Captures information from the atomic req flit that triggers an LMTST.
 */
union cavm_apax_lsax_diag_req
{
    uint64_t u;
    struct cavm_apax_lsax_diag_req_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t gws                   : 8;  /**< [ 57: 50](SRO/H) GWS field in the STSMAX dat flit. */
        uint64_t cnt                   : 5;  /**< [ 49: 45](SRO/H) The number of LMTLINES in a burst LMTST, from the STEOR dat flit. */
        uint64_t lmtid                 : 11; /**< [ 44: 34](SRO/H) LMTID field in the STEOR/STSMAX dat flit. */
        uint64_t txnid                 : 12; /**< [ 33: 22](SRO/H) TXNID of the STEOR/STSMAX req flit. */
        uint64_t not_secure            : 1;  /**< [ 21: 21](SRO/H) NS field in the STEOR/STSMAX req flit. */
        uint64_t first_size_m1         : 3;  /**< [ 20: 18](SRO/H) Size minus 1 of the first LMTLINE in a burst LMTST. */
        uint64_t rvu_blk               : 5;  /**< [ 17: 13](SRO/H) RVU_BLK field in the STEOR/STSMAX req flit. */
        uint64_t func                  : 8;  /**< [ 12:  5](SRO/H) FUNC field in the STEOR/STSMAX req flit. */
        uint64_t pf                    : 5;  /**< [  4:  0](SRO/H) PF field in the STEOR/STSMAX req flit. */
#else /* Word 0 - Little Endian */
        uint64_t pf                    : 5;  /**< [  4:  0](SRO/H) PF field in the STEOR/STSMAX req flit. */
        uint64_t func                  : 8;  /**< [ 12:  5](SRO/H) FUNC field in the STEOR/STSMAX req flit. */
        uint64_t rvu_blk               : 5;  /**< [ 17: 13](SRO/H) RVU_BLK field in the STEOR/STSMAX req flit. */
        uint64_t first_size_m1         : 3;  /**< [ 20: 18](SRO/H) Size minus 1 of the first LMTLINE in a burst LMTST. */
        uint64_t not_secure            : 1;  /**< [ 21: 21](SRO/H) NS field in the STEOR/STSMAX req flit. */
        uint64_t txnid                 : 12; /**< [ 33: 22](SRO/H) TXNID of the STEOR/STSMAX req flit. */
        uint64_t lmtid                 : 11; /**< [ 44: 34](SRO/H) LMTID field in the STEOR/STSMAX dat flit. */
        uint64_t cnt                   : 5;  /**< [ 49: 45](SRO/H) The number of LMTLINES in a burst LMTST, from the STEOR dat flit. */
        uint64_t gws                   : 8;  /**< [ 57: 50](SRO/H) GWS field in the STSMAX dat flit. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_lsax_diag_req_s cn; */
};
typedef union cavm_apax_lsax_diag_req cavm_apax_lsax_diag_req_t;

static inline uint64_t CAVM_APAX_LSAX_DIAG_REQ(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_LSAX_DIAG_REQ(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b<=1))
        return 0x87e051001010ll + 0x40000ll * ((a) & 0x3f) + 0x40ll * ((b) & 0x1);
    __cavm_csr_fatal("APAX_LSAX_DIAG_REQ", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_LSAX_DIAG_REQ(a,b) cavm_apax_lsax_diag_req_t
#define bustype_CAVM_APAX_LSAX_DIAG_REQ(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_LSAX_DIAG_REQ(a,b) "APAX_LSAX_DIAG_REQ"
#define device_bar_CAVM_APAX_LSAX_DIAG_REQ(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_LSAX_DIAG_REQ(a,b) (a)
#define arguments_CAVM_APAX_LSAX_DIAG_REQ(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_lsa#_diag_status
 *
 * APA LSA Status Diagnostic Register
 * Captures the execution status of the LSA engines.
 */
union cavm_apax_lsax_diag_status
{
    uint64_t u;
    struct cavm_apax_lsax_diag_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t st_dat_err            : 1;  /**< [ 63: 63](SRO/H) Saw an error in the Store data from the core. */
        uint64_t pa_dat_err            : 1;  /**< [ 62: 62](SRO/H) Saw an error in the CompData fetching the physical address. */
        uint64_t gwc_hit               : 1;  /**< [ 61: 61](SRO/H) Saw a GWC hit. */
        uint64_t gwc_val               : 1;  /**< [ 60: 60](SRO/H) Saw a GWC response. */
        uint64_t all_ro_sent           : 1;  /**< [ 59: 59](SRO/H) All ReadOnces in a burst issued. */
        uint64_t first_ro_sent         : 1;  /**< [ 58: 58](SRO/H) First ReadOnce of an LMTST issued. */
        uint64_t all_wns_sent          : 1;  /**< [ 57: 57](SRO/H) All WriteNoSnps in a burst issued. */
        uint64_t first_wns_sent        : 1;  /**< [ 56: 56](SRO/H) First WriteNoSnp of an LMTST issued. */
        uint64_t misspeculate          : 1;  /**< [ 55: 55](SRO/H) Misspeculated on LMTLINE prefetch. */
        uint64_t spec_ro_sent          : 1;  /**< [ 54: 54](SRO/H) Speculative ReadOnce to prefetch LMTLINE issued. */
        uint64_t lpc_2lmtids           : 1;  /**< [ 53: 53](SRO/H) LMTID predictor indicates engine can prefetch LMTLINE. */
        uint64_t lpc_hit               : 1;  /**< [ 52: 52](SRO/H) LPC hit. */
        uint64_t lpc_val               : 1;  /**< [ 51: 51](SRO/H) LPC response received. */
        uint64_t dat_val               : 1;  /**< [ 50: 50](SRO/H) Request valid. */
        uint64_t sched                 : 1;  /**< [ 49: 49](SRO/H) Processing a scheduled LMTST. */
        uint64_t req_err               : 1;  /**< [ 48: 48](SRO/H) Request error. */
        uint64_t req_val               : 1;  /**< [ 47: 47](SRO/H) Request valid. */
        uint64_t comp_cnt              : 5;  /**< [ 46: 42](SRO/H) Number of CompDBIDResps received from IOB. */
        uint64_t wns_cnt               : 5;  /**< [ 41: 37](SRO/H) Number of WriteNoSnps issued. */
        uint64_t ro_cnt                : 5;  /**< [ 36: 32](SRO/H) Number of ReadOnce for LMTLINEs issued. */
        uint64_t thread_status         : 32; /**< [ 31:  0](SRO/H) Status of each of 16 LSA threads. For each thread:
                                                                 2'b00: Not Started
                                                                 2'b01: Active
                                                                 2'b10: Done
                                                                 2'b11: Reserved */
#else /* Word 0 - Little Endian */
        uint64_t thread_status         : 32; /**< [ 31:  0](SRO/H) Status of each of 16 LSA threads. For each thread:
                                                                 2'b00: Not Started
                                                                 2'b01: Active
                                                                 2'b10: Done
                                                                 2'b11: Reserved */
        uint64_t ro_cnt                : 5;  /**< [ 36: 32](SRO/H) Number of ReadOnce for LMTLINEs issued. */
        uint64_t wns_cnt               : 5;  /**< [ 41: 37](SRO/H) Number of WriteNoSnps issued. */
        uint64_t comp_cnt              : 5;  /**< [ 46: 42](SRO/H) Number of CompDBIDResps received from IOB. */
        uint64_t req_val               : 1;  /**< [ 47: 47](SRO/H) Request valid. */
        uint64_t req_err               : 1;  /**< [ 48: 48](SRO/H) Request error. */
        uint64_t sched                 : 1;  /**< [ 49: 49](SRO/H) Processing a scheduled LMTST. */
        uint64_t dat_val               : 1;  /**< [ 50: 50](SRO/H) Request valid. */
        uint64_t lpc_val               : 1;  /**< [ 51: 51](SRO/H) LPC response received. */
        uint64_t lpc_hit               : 1;  /**< [ 52: 52](SRO/H) LPC hit. */
        uint64_t lpc_2lmtids           : 1;  /**< [ 53: 53](SRO/H) LMTID predictor indicates engine can prefetch LMTLINE. */
        uint64_t spec_ro_sent          : 1;  /**< [ 54: 54](SRO/H) Speculative ReadOnce to prefetch LMTLINE issued. */
        uint64_t misspeculate          : 1;  /**< [ 55: 55](SRO/H) Misspeculated on LMTLINE prefetch. */
        uint64_t first_wns_sent        : 1;  /**< [ 56: 56](SRO/H) First WriteNoSnp of an LMTST issued. */
        uint64_t all_wns_sent          : 1;  /**< [ 57: 57](SRO/H) All WriteNoSnps in a burst issued. */
        uint64_t first_ro_sent         : 1;  /**< [ 58: 58](SRO/H) First ReadOnce of an LMTST issued. */
        uint64_t all_ro_sent           : 1;  /**< [ 59: 59](SRO/H) All ReadOnces in a burst issued. */
        uint64_t gwc_val               : 1;  /**< [ 60: 60](SRO/H) Saw a GWC response. */
        uint64_t gwc_hit               : 1;  /**< [ 61: 61](SRO/H) Saw a GWC hit. */
        uint64_t pa_dat_err            : 1;  /**< [ 62: 62](SRO/H) Saw an error in the CompData fetching the physical address. */
        uint64_t st_dat_err            : 1;  /**< [ 63: 63](SRO/H) Saw an error in the Store data from the core. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_lsax_diag_status_s cn; */
};
typedef union cavm_apax_lsax_diag_status cavm_apax_lsax_diag_status_t;

static inline uint64_t CAVM_APAX_LSAX_DIAG_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_LSAX_DIAG_STATUS(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b<=1))
        return 0x87e051001000ll + 0x40000ll * ((a) & 0x3f) + 0x40ll * ((b) & 0x1);
    __cavm_csr_fatal("APAX_LSAX_DIAG_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_LSAX_DIAG_STATUS(a,b) cavm_apax_lsax_diag_status_t
#define bustype_CAVM_APAX_LSAX_DIAG_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_LSAX_DIAG_STATUS(a,b) "APAX_LSAX_DIAG_STATUS"
#define device_bar_CAVM_APAX_LSAX_DIAG_STATUS(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_LSAX_DIAG_STATUS(a,b) (a)
#define arguments_CAVM_APAX_LSAX_DIAG_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_msix_pba#
 *
 * APA MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the APA_INT_VEC_E enumeration.
 */
union cavm_apax_msix_pbax
{
    uint64_t u;
    struct cavm_apax_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated APA_MSIX_VEC()_CTL, enumerated by APA_INT_VEC_E. Bits
                                                                 that have no associated APA_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated APA_MSIX_VEC()_CTL, enumerated by APA_INT_VEC_E. Bits
                                                                 that have no associated APA_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_msix_pbax_s cn; */
};
typedef union cavm_apax_msix_pbax cavm_apax_msix_pbax_t;

static inline uint64_t CAVM_APAX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_MSIX_PBAX(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b==0))
        return 0x87e051018000ll + 0x40000ll * ((a) & 0x3f) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("APAX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_MSIX_PBAX(a,b) cavm_apax_msix_pbax_t
#define bustype_CAVM_APAX_MSIX_PBAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_MSIX_PBAX(a,b) "APAX_MSIX_PBAX"
#define device_bar_CAVM_APAX_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_APAX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_APAX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_msix_vec#_addr
 *
 * APA MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the APA_INT_VEC_E enumeration.
 */
union cavm_apax_msix_vecx_addr
{
    uint64_t u;
    struct cavm_apax_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's APA()_MSIX_VEC()_ADDR, APA()_MSIX_VEC()_CTL, and
                                                                 corresponding bit of APA()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_APA()_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's APA()_MSIX_VEC()_ADDR, APA()_MSIX_VEC()_CTL, and
                                                                 corresponding bit of APA()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_APA()_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_msix_vecx_addr_s cn; */
};
typedef union cavm_apax_msix_vecx_addr cavm_apax_msix_vecx_addr_t;

static inline uint64_t CAVM_APAX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b==0))
        return 0x87e051010000ll + 0x40000ll * ((a) & 0x3f) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("APAX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_MSIX_VECX_ADDR(a,b) cavm_apax_msix_vecx_addr_t
#define bustype_CAVM_APAX_MSIX_VECX_ADDR(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_MSIX_VECX_ADDR(a,b) "APAX_MSIX_VECX_ADDR"
#define device_bar_CAVM_APAX_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_APAX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_APAX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_msix_vec#_ctl
 *
 * APA MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the APA_INT_VEC_E enumeration.
 */
union cavm_apax_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_apax_msix_vecx_ctl_s
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
    /* struct cavm_apax_msix_vecx_ctl_s cn; */
};
typedef union cavm_apax_msix_vecx_ctl cavm_apax_msix_vecx_ctl_t;

static inline uint64_t CAVM_APAX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
    if ((a<=63) && (b==0))
        return 0x87e051010008ll + 0x40000ll * ((a) & 0x3f) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("APAX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_MSIX_VECX_CTL(a,b) cavm_apax_msix_vecx_ctl_t
#define bustype_CAVM_APAX_MSIX_VECX_CTL(a,b) CSR_TYPE_RSL
#define basename_CAVM_APAX_MSIX_VECX_CTL(a,b) "APAX_MSIX_VECX_CTL"
#define device_bar_CAVM_APAX_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_APAX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_APAX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) apa#_rvbaraddr
 *
 * APA Reset Base Address Register
 */
union cavm_apax_rvbaraddr
{
    uint64_t u;
    struct cavm_apax_rvbaraddr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t addr                  : 46; /**< [ 47:  2](SR/W) Program counter address for core reset. */
        uint64_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_1          : 2;
        uint64_t addr                  : 46; /**< [ 47:  2](SR/W) Program counter address for core reset. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_rvbaraddr_s cn; */
};
typedef union cavm_apax_rvbaraddr cavm_apax_rvbaraddr_t;

static inline uint64_t CAVM_APAX_RVBARADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_RVBARADDR(uint64_t a)
{
    if (a<=63)
        return 0x87e051000d18ll + 0x40000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_RVBARADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_RVBARADDR(a) cavm_apax_rvbaraddr_t
#define bustype_CAVM_APAX_RVBARADDR(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_RVBARADDR(a) "APAX_RVBARADDR"
#define device_bar_CAVM_APAX_RVBARADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_RVBARADDR(a) (a)
#define arguments_CAVM_APAX_RVBARADDR(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_wdog_core
 *
 * APA Watchdog Core Register
 * This register configures the timeouts for a core to receive responses.
 */
union cavm_apax_wdog_core
{
    uint64_t u;
    struct cavm_apax_wdog_core_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t enable                : 1;  /**< [ 31: 31](SR/W) Watchdog timeout enable. */
        uint64_t timeout               : 31; /**< [ 30:  0](SR/W) Timeout in units of 10ns. */
#else /* Word 0 - Little Endian */
        uint64_t timeout               : 31; /**< [ 30:  0](SR/W) Timeout in units of 10ns. */
        uint64_t enable                : 1;  /**< [ 31: 31](SR/W) Watchdog timeout enable. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_wdog_core_s cn; */
};
typedef union cavm_apax_wdog_core cavm_apax_wdog_core_t;

static inline uint64_t CAVM_APAX_WDOG_CORE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_WDOG_CORE(uint64_t a)
{
    if (a<=63)
        return 0x87e051000d00ll + 0x40000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_WDOG_CORE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_WDOG_CORE(a) cavm_apax_wdog_core_t
#define bustype_CAVM_APAX_WDOG_CORE(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_WDOG_CORE(a) "APAX_WDOG_CORE"
#define device_bar_CAVM_APAX_WDOG_CORE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_WDOG_CORE(a) (a)
#define arguments_CAVM_APAX_WDOG_CORE(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_wdog_core_diag
 *
 * APA Watchdog Core Diagnostic Register
 * This register reports and captures wdog timeouts for core. Timeouts indicate that
 * the core did not receive all the expected responses.
 */
union cavm_apax_wdog_core_diag
{
    uint64_t u;
    struct cavm_apax_wdog_core_diag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t multi                 : 1;  /**< [ 31: 31](SR/W1C/H) Another stale entry was detected but not recorded because [STALE] was already set. */
        uint64_t stale                 : 1;  /**< [ 30: 30](SR/W1C/H) Stale entry was detected and recorded. */
        uint64_t reserved_19_29        : 11;
        uint64_t state                 : 3;  /**< [ 18: 16](SRO/H) Stale entry state. */
        uint64_t epoch                 : 1;  /**< [ 15: 15](SRO/H) Stale entry epoch. */
        uint64_t reqt                  : 3;  /**< [ 14: 12](SRO/H) Stale entry REQT. */
        uint64_t txnid                 : 12; /**< [ 11:  0](SRO/H) Stale entry transaction ID. */
#else /* Word 0 - Little Endian */
        uint64_t txnid                 : 12; /**< [ 11:  0](SRO/H) Stale entry transaction ID. */
        uint64_t reqt                  : 3;  /**< [ 14: 12](SRO/H) Stale entry REQT. */
        uint64_t epoch                 : 1;  /**< [ 15: 15](SRO/H) Stale entry epoch. */
        uint64_t state                 : 3;  /**< [ 18: 16](SRO/H) Stale entry state. */
        uint64_t reserved_19_29        : 11;
        uint64_t stale                 : 1;  /**< [ 30: 30](SR/W1C/H) Stale entry was detected and recorded. */
        uint64_t multi                 : 1;  /**< [ 31: 31](SR/W1C/H) Another stale entry was detected but not recorded because [STALE] was already set. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_wdog_core_diag_s cn; */
};
typedef union cavm_apax_wdog_core_diag cavm_apax_wdog_core_diag_t;

static inline uint64_t CAVM_APAX_WDOG_CORE_DIAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_WDOG_CORE_DIAG(uint64_t a)
{
    if (a<=63)
        return 0x87e051000e20ll + 0x40000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_WDOG_CORE_DIAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_WDOG_CORE_DIAG(a) cavm_apax_wdog_core_diag_t
#define bustype_CAVM_APAX_WDOG_CORE_DIAG(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_WDOG_CORE_DIAG(a) "APAX_WDOG_CORE_DIAG"
#define device_bar_CAVM_APAX_WDOG_CORE_DIAG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_WDOG_CORE_DIAG(a) (a)
#define arguments_CAVM_APAX_WDOG_CORE_DIAG(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_wdog_struct
 *
 * APA Watchdog Structure Register
 * This register configures the timeouts for APA internal structures to clear.
 */
union cavm_apax_wdog_struct
{
    uint64_t u;
    struct cavm_apax_wdog_struct_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t enable                : 1;  /**< [ 31: 31](SR/W) Watchdog timeout enable. */
        uint64_t timeout               : 31; /**< [ 30:  0](SR/W) Timeout in units of 10ns. */
#else /* Word 0 - Little Endian */
        uint64_t timeout               : 31; /**< [ 30:  0](SR/W) Timeout in units of 10ns. */
        uint64_t enable                : 1;  /**< [ 31: 31](SR/W) Watchdog timeout enable. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_wdog_struct_s cn; */
};
typedef union cavm_apax_wdog_struct cavm_apax_wdog_struct_t;

static inline uint64_t CAVM_APAX_WDOG_STRUCT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_WDOG_STRUCT(uint64_t a)
{
    if (a<=63)
        return 0x87e051000d08ll + 0x40000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_WDOG_STRUCT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_WDOG_STRUCT(a) cavm_apax_wdog_struct_t
#define bustype_CAVM_APAX_WDOG_STRUCT(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_WDOG_STRUCT(a) "APAX_WDOG_STRUCT"
#define device_bar_CAVM_APAX_WDOG_STRUCT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_WDOG_STRUCT(a) (a)
#define arguments_CAVM_APAX_WDOG_STRUCT(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_wdog_struct_crd_diag
 *
 * APA Watchdog Structure Credit Diagnostic Register
 * This register reports and captures watchdog timeouts for CRD, which indicates that
 * an unexpected CHI protocol credit was received.
 */
union cavm_apax_wdog_struct_crd_diag
{
    uint64_t u;
    struct cavm_apax_wdog_struct_crd_diag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t multi                 : 1;  /**< [ 31: 31](SR/W1C/H) Another stale entry was detected but not recorded because [STALE] was already set. */
        uint64_t stale                 : 1;  /**< [ 30: 30](SR/W1C/H) Stale entry was detected and recorded. */
        uint64_t reserved_15_29        : 15;
        uint64_t tgtid                 : 11; /**< [ 14:  4](SRO/H) Stale entry target ID. */
        uint64_t pcrdtype              : 4;  /**< [  3:  0](SRO/H) Stale entry PCRDTYPE. */
#else /* Word 0 - Little Endian */
        uint64_t pcrdtype              : 4;  /**< [  3:  0](SRO/H) Stale entry PCRDTYPE. */
        uint64_t tgtid                 : 11; /**< [ 14:  4](SRO/H) Stale entry target ID. */
        uint64_t reserved_15_29        : 15;
        uint64_t stale                 : 1;  /**< [ 30: 30](SR/W1C/H) Stale entry was detected and recorded. */
        uint64_t multi                 : 1;  /**< [ 31: 31](SR/W1C/H) Another stale entry was detected but not recorded because [STALE] was already set. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_wdog_struct_crd_diag_s cn; */
};
typedef union cavm_apax_wdog_struct_crd_diag cavm_apax_wdog_struct_crd_diag_t;

static inline uint64_t CAVM_APAX_WDOG_STRUCT_CRD_DIAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_WDOG_STRUCT_CRD_DIAG(uint64_t a)
{
    if (a<=63)
        return 0x87e051000e28ll + 0x40000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_WDOG_STRUCT_CRD_DIAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_WDOG_STRUCT_CRD_DIAG(a) cavm_apax_wdog_struct_crd_diag_t
#define bustype_CAVM_APAX_WDOG_STRUCT_CRD_DIAG(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_WDOG_STRUCT_CRD_DIAG(a) "APAX_WDOG_STRUCT_CRD_DIAG"
#define device_bar_CAVM_APAX_WDOG_STRUCT_CRD_DIAG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_WDOG_STRUCT_CRD_DIAG(a) (a)
#define arguments_CAVM_APAX_WDOG_STRUCT_CRD_DIAG(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_wdog_struct_dat_diag
 *
 * APA WDOG STRUCT DAT DIAG Register
 * This register reports and captures watchdog timeouts for DAT, which indicates that
 * write data for a store did not get sent.
 */
union cavm_apax_wdog_struct_dat_diag
{
    uint64_t u;
    struct cavm_apax_wdog_struct_dat_diag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t multi                 : 1;  /**< [ 63: 63](SR/W1C/H) Another stale entry was detected but not recorded because [STALE] was already set. */
        uint64_t stale                 : 1;  /**< [ 62: 62](SR/W1C/H) Stale entry was detected and recorded. */
        uint64_t reserved_33_61        : 29;
        uint64_t has_lsw_idx           : 1;  /**< [ 32: 32](SRO/H) Stale entry HAS_LSW_IDX. */
        uint64_t datst3                : 2;  /**< [ 31: 30](SRO/H) Stale entry DATST3. */
        uint64_t datst2                : 2;  /**< [ 29: 28](SRO/H) Stale entry DATST2. */
        uint64_t datst1                : 2;  /**< [ 27: 26](SRO/H) Stale entry DATST1. */
        uint64_t datst0                : 2;  /**< [ 25: 24](SRO/H) Stale entry DATST0. */
        uint64_t has_dbid              : 1;  /**< [ 23: 23](SRO/H) Stale entry has a DBID. */
        uint64_t tgtid                 : 11; /**< [ 22: 12](SRO/H) Stale entry target ID. */
        uint64_t dbid                  : 12; /**< [ 11:  0](SRO/H) Stale entry DBID. */
#else /* Word 0 - Little Endian */
        uint64_t dbid                  : 12; /**< [ 11:  0](SRO/H) Stale entry DBID. */
        uint64_t tgtid                 : 11; /**< [ 22: 12](SRO/H) Stale entry target ID. */
        uint64_t has_dbid              : 1;  /**< [ 23: 23](SRO/H) Stale entry has a DBID. */
        uint64_t datst0                : 2;  /**< [ 25: 24](SRO/H) Stale entry DATST0. */
        uint64_t datst1                : 2;  /**< [ 27: 26](SRO/H) Stale entry DATST1. */
        uint64_t datst2                : 2;  /**< [ 29: 28](SRO/H) Stale entry DATST2. */
        uint64_t datst3                : 2;  /**< [ 31: 30](SRO/H) Stale entry DATST3. */
        uint64_t has_lsw_idx           : 1;  /**< [ 32: 32](SRO/H) Stale entry HAS_LSW_IDX. */
        uint64_t reserved_33_61        : 29;
        uint64_t stale                 : 1;  /**< [ 62: 62](SR/W1C/H) Stale entry was detected and recorded. */
        uint64_t multi                 : 1;  /**< [ 63: 63](SR/W1C/H) Another stale entry was detected but not recorded because [STALE] was already set. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_wdog_struct_dat_diag_s cn; */
};
typedef union cavm_apax_wdog_struct_dat_diag cavm_apax_wdog_struct_dat_diag_t;

static inline uint64_t CAVM_APAX_WDOG_STRUCT_DAT_DIAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_WDOG_STRUCT_DAT_DIAG(uint64_t a)
{
    if (a<=63)
        return 0x87e051000e40ll + 0x40000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_WDOG_STRUCT_DAT_DIAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_WDOG_STRUCT_DAT_DIAG(a) cavm_apax_wdog_struct_dat_diag_t
#define bustype_CAVM_APAX_WDOG_STRUCT_DAT_DIAG(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_WDOG_STRUCT_DAT_DIAG(a) "APAX_WDOG_STRUCT_DAT_DIAG"
#define device_bar_CAVM_APAX_WDOG_STRUCT_DAT_DIAG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_WDOG_STRUCT_DAT_DIAG(a) (a)
#define arguments_CAVM_APAX_WDOG_STRUCT_DAT_DIAG(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_wdog_struct_rqb_diag
 *
 * APA WDOG STRUCT RQB DIAG Register
 * This register reports and captures watchdog timeouts for RQB, which indicates that a
 * request has not been acknowledged.
 */
union cavm_apax_wdog_struct_rqb_diag
{
    uint64_t u;
    struct cavm_apax_wdog_struct_rqb_diag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t multi                 : 1;  /**< [ 63: 63](SR/W1C/H) Another stale entry was detected but not recorded because [STALE] was already set. */
        uint64_t stale                 : 1;  /**< [ 62: 62](SR/W1C/H) Stale entry was detected and recorded. */
        uint64_t reserved_43_61        : 19;
        uint64_t state                 : 3;  /**< [ 42: 40](SRO/H) Stale entry state. */
        uint64_t reserved_39           : 1;
        uint64_t tgtid                 : 11; /**< [ 38: 28](SRO/H) Stale entry target ID. */
        uint64_t pcrdtype              : 4;  /**< [ 27: 24](SRO/H) Stale entry PCRDTYPE. */
        uint64_t txnid_new             : 12; /**< [ 23: 12](SRO/H) Stale entry new transaction ID. */
        uint64_t txnid_orig            : 12; /**< [ 11:  0](SRO/H) Stale entry original transaction ID. */
#else /* Word 0 - Little Endian */
        uint64_t txnid_orig            : 12; /**< [ 11:  0](SRO/H) Stale entry original transaction ID. */
        uint64_t txnid_new             : 12; /**< [ 23: 12](SRO/H) Stale entry new transaction ID. */
        uint64_t pcrdtype              : 4;  /**< [ 27: 24](SRO/H) Stale entry PCRDTYPE. */
        uint64_t tgtid                 : 11; /**< [ 38: 28](SRO/H) Stale entry target ID. */
        uint64_t reserved_39           : 1;
        uint64_t state                 : 3;  /**< [ 42: 40](SRO/H) Stale entry state. */
        uint64_t reserved_43_61        : 19;
        uint64_t stale                 : 1;  /**< [ 62: 62](SR/W1C/H) Stale entry was detected and recorded. */
        uint64_t multi                 : 1;  /**< [ 63: 63](SR/W1C/H) Another stale entry was detected but not recorded because [STALE] was already set. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_wdog_struct_rqb_diag_s cn; */
};
typedef union cavm_apax_wdog_struct_rqb_diag cavm_apax_wdog_struct_rqb_diag_t;

static inline uint64_t CAVM_APAX_WDOG_STRUCT_RQB_DIAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_WDOG_STRUCT_RQB_DIAG(uint64_t a)
{
    if (a<=63)
        return 0x87e051000e38ll + 0x40000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_WDOG_STRUCT_RQB_DIAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_WDOG_STRUCT_RQB_DIAG(a) cavm_apax_wdog_struct_rqb_diag_t
#define bustype_CAVM_APAX_WDOG_STRUCT_RQB_DIAG(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_WDOG_STRUCT_RQB_DIAG(a) "APAX_WDOG_STRUCT_RQB_DIAG"
#define device_bar_CAVM_APAX_WDOG_STRUCT_RQB_DIAG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_WDOG_STRUCT_RQB_DIAG(a) (a)
#define arguments_CAVM_APAX_WDOG_STRUCT_RQB_DIAG(a) (a),-1,-1,-1

/**
 * Register (RSL) apa#_wdog_struct_txnid_diag
 *
 * APA WDOG STRUCT TXNID DIAG Register
 * This register reports and captures watchdog timeouts for TXNID, which indicates that
 * a completion was not received.
 */
union cavm_apax_wdog_struct_txnid_diag
{
    uint64_t u;
    struct cavm_apax_wdog_struct_txnid_diag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t multi                 : 1;  /**< [ 31: 31](SR/W1C/H) Another stale entry was detected but not recorded because [STALE] was already set. */
        uint64_t stale                 : 1;  /**< [ 30: 30](SR/W1C/H) Stale entry was detected and recorded. */
        uint64_t reserved_18_29        : 12;
        uint64_t txnid_new             : 6;  /**< [ 17: 12](SRO/H) Stale entry new transaction ID (low 6 bits). */
        uint64_t txnid_orig            : 12; /**< [ 11:  0](SRO/H) Stale entry original transaction ID. */
#else /* Word 0 - Little Endian */
        uint64_t txnid_orig            : 12; /**< [ 11:  0](SRO/H) Stale entry original transaction ID. */
        uint64_t txnid_new             : 6;  /**< [ 17: 12](SRO/H) Stale entry new transaction ID (low 6 bits). */
        uint64_t reserved_18_29        : 12;
        uint64_t stale                 : 1;  /**< [ 30: 30](SR/W1C/H) Stale entry was detected and recorded. */
        uint64_t multi                 : 1;  /**< [ 31: 31](SR/W1C/H) Another stale entry was detected but not recorded because [STALE] was already set. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_apax_wdog_struct_txnid_diag_s cn; */
};
typedef union cavm_apax_wdog_struct_txnid_diag cavm_apax_wdog_struct_txnid_diag_t;

static inline uint64_t CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(uint64_t a)
{
    if (a<=63)
        return 0x87e051000e30ll + 0x40000ll * ((a) & 0x3f);
    __cavm_csr_fatal("APAX_WDOG_STRUCT_TXNID_DIAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(a) cavm_apax_wdog_struct_txnid_diag_t
#define bustype_CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(a) CSR_TYPE_RSL
#define basename_CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(a) "APAX_WDOG_STRUCT_TXNID_DIAG"
#define device_bar_CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(a) (a)
#define arguments_CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_APA_H__ */
