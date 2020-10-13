#ifndef __CAVM_CSRS_CMEM_H__
#define __CAVM_CSRS_CMEM_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2018-2020 Marvell International Ltd.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX CMEM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RSL) cmem#_arb_priority
 *
 * Config common to all WR256 clients Register
 */
union cavm_cmemx_arb_priority
{
    uint64_t u;
    struct cavm_cmemx_arb_priority_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t rd256                 : 1;  /**< [ 16: 16](R/W) High-priority bits for all RD256 ports. */
        uint64_t reserved_1_15         : 15;
        uint64_t wr256                 : 1;  /**< [  0:  0](R/W) High-priority bits for all WR256 ports. */
#else /* Word 0 - Little Endian */
        uint64_t wr256                 : 1;  /**< [  0:  0](R/W) High-priority bits for all WR256 ports. */
        uint64_t reserved_1_15         : 15;
        uint64_t rd256                 : 1;  /**< [ 16: 16](R/W) High-priority bits for all RD256 ports. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cmemx_arb_priority_s cn; */
};
typedef union cavm_cmemx_arb_priority cavm_cmemx_arb_priority_t;

static inline uint64_t CAVM_CMEMX_ARB_PRIORITY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CMEMX_ARB_PRIORITY(uint64_t a)
{
    if (a<=8)
        return 0x87e042600140ll + 0x80000ll * ((a) & 0xf);
    __cavm_csr_fatal("CMEMX_ARB_PRIORITY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CMEMX_ARB_PRIORITY(a) cavm_cmemx_arb_priority_t
#define bustype_CAVM_CMEMX_ARB_PRIORITY(a) CSR_TYPE_RSL
#define basename_CAVM_CMEMX_ARB_PRIORITY(a) "CMEMX_ARB_PRIORITY"
#define busnum_CAVM_CMEMX_ARB_PRIORITY(a) (a)
#define arguments_CAVM_CMEMX_ARB_PRIORITY(a) (a),-1,-1,-1

/**
 * Register (RSL) cmem#_bp_test
 *
 * INTERNAL: Back Pressure Test Register
 *
 * Internal:
 * BP_TEST\<0\> = backpressure to arbiter for each port
 */
union cavm_cmemx_bp_test
{
    uint64_t u;
    struct cavm_cmemx_bp_test_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 Prevents arb from granting.
                                                                 \<others\>= unused
                                                                 \<61\> = write port 0
                                                                 \<60\> = read port 0 */
        uint64_t reserved_24_59        : 36;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                 \<others\>= unused
                                                                 \<19:18\> = write port 0
                                                                 \<17:16\> = read port 0 */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                 \<others\>= unused
                                                                 \<19:18\> = write port 0
                                                                 \<17:16\> = read port 0 */
        uint64_t reserved_24_59        : 36;
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 Prevents arb from granting.
                                                                 \<others\>= unused
                                                                 \<61\> = write port 0
                                                                 \<60\> = read port 0 */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cmemx_bp_test_s cn; */
};
typedef union cavm_cmemx_bp_test cavm_cmemx_bp_test_t;

static inline uint64_t CAVM_CMEMX_BP_TEST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CMEMX_BP_TEST(uint64_t a)
{
    if (a<=8)
        return 0x87e042600010ll + 0x80000ll * ((a) & 0xf);
    __cavm_csr_fatal("CMEMX_BP_TEST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CMEMX_BP_TEST(a) cavm_cmemx_bp_test_t
#define bustype_CAVM_CMEMX_BP_TEST(a) CSR_TYPE_RSL
#define basename_CAVM_CMEMX_BP_TEST(a) "CMEMX_BP_TEST"
#define busnum_CAVM_CMEMX_BP_TEST(a) (a)
#define arguments_CAVM_CMEMX_BP_TEST(a) (a),-1,-1,-1

/**
 * Register (RSL) cmem#_ecc_signature
 *
 * Primary Configuration Register
 */
union cavm_cmemx_ecc_signature
{
    uint64_t u;
    struct cavm_cmemx_ecc_signature_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_57_63        : 7;
        uint64_t wr256                 : 1;  /**< [ 56: 56](RO/H) If ECC event was for this port, a bit will be asserted here. */
        uint64_t reserved_49_55        : 7;
        uint64_t rd256                 : 1;  /**< [ 48: 48](RO/H) If ECC event was for this port, a bit will be asserted here. */
        uint64_t reserved_34_47        : 14;
        uint64_t dbe                   : 1;  /**< [ 33: 33](R/W1C/H) Uncorrectable double bit error(s) */
        uint64_t sbe                   : 1;  /**< [ 32: 32](R/W1C/H) Correctable single bit error(s) */
        uint64_t reserved_25_31        : 7;
        uint64_t byte_addr             : 25; /**< [ 24:  0](RO/H) Byte-aligned address of ECC event. */
#else /* Word 0 - Little Endian */
        uint64_t byte_addr             : 25; /**< [ 24:  0](RO/H) Byte-aligned address of ECC event. */
        uint64_t reserved_25_31        : 7;
        uint64_t sbe                   : 1;  /**< [ 32: 32](R/W1C/H) Correctable single bit error(s) */
        uint64_t dbe                   : 1;  /**< [ 33: 33](R/W1C/H) Uncorrectable double bit error(s) */
        uint64_t reserved_34_47        : 14;
        uint64_t rd256                 : 1;  /**< [ 48: 48](RO/H) If ECC event was for this port, a bit will be asserted here. */
        uint64_t reserved_49_55        : 7;
        uint64_t wr256                 : 1;  /**< [ 56: 56](RO/H) If ECC event was for this port, a bit will be asserted here. */
        uint64_t reserved_57_63        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cmemx_ecc_signature_s cn; */
};
typedef union cavm_cmemx_ecc_signature cavm_cmemx_ecc_signature_t;

static inline uint64_t CAVM_CMEMX_ECC_SIGNATURE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CMEMX_ECC_SIGNATURE(uint64_t a)
{
    if (a<=8)
        return 0x87e042600120ll + 0x80000ll * ((a) & 0xf);
    __cavm_csr_fatal("CMEMX_ECC_SIGNATURE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CMEMX_ECC_SIGNATURE(a) cavm_cmemx_ecc_signature_t
#define bustype_CAVM_CMEMX_ECC_SIGNATURE(a) CSR_TYPE_RSL
#define basename_CAVM_CMEMX_ECC_SIGNATURE(a) "CMEMX_ECC_SIGNATURE"
#define busnum_CAVM_CMEMX_ECC_SIGNATURE(a) (a)
#define arguments_CAVM_CMEMX_ECC_SIGNATURE(a) (a),-1,-1,-1

/**
 * Register (RSL) cmem#_eco
 *
 * INTERNAL: CMEM ECO Register
 */
union cavm_cmemx_eco
{
    uint64_t u;
    struct cavm_cmemx_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Internal:
                                                                 Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Internal:
                                                                 Reserved for ECO usage. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cmemx_eco_s cn; */
};
typedef union cavm_cmemx_eco cavm_cmemx_eco_t;

static inline uint64_t CAVM_CMEMX_ECO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CMEMX_ECO(uint64_t a)
{
    if (a<=8)
        return 0x87e042600008ll + 0x80000ll * ((a) & 0xf);
    __cavm_csr_fatal("CMEMX_ECO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CMEMX_ECO(a) cavm_cmemx_eco_t
#define bustype_CAVM_CMEMX_ECO(a) CSR_TYPE_RSL
#define basename_CAVM_CMEMX_ECO(a) "CMEMX_ECO"
#define busnum_CAVM_CMEMX_ECO(a) (a)
#define arguments_CAVM_CMEMX_ECO(a) (a),-1,-1,-1

/**
 * Register (RSL) cmem#_main_cfg
 *
 * Primary Configuration Register
 */
union cavm_cmemx_main_cfg
{
    uint64_t u;
    struct cavm_cmemx_main_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t disable_mdc_hub       : 1;  /**< [  2:  2](R/W) Connects to blk__csr_dis on mdc_hub for all tiles. */
        uint64_t load_debug_status     : 1;  /**< [  1:  1](R/W) Turn on updates to debug_status registers. */
        uint64_t force_update_state    : 1;  /**< [  0:  0](R/W) This forces state machines to update by disabling their dynamic clock gating code. */
#else /* Word 0 - Little Endian */
        uint64_t force_update_state    : 1;  /**< [  0:  0](R/W) This forces state machines to update by disabling their dynamic clock gating code. */
        uint64_t load_debug_status     : 1;  /**< [  1:  1](R/W) Turn on updates to debug_status registers. */
        uint64_t disable_mdc_hub       : 1;  /**< [  2:  2](R/W) Connects to blk__csr_dis on mdc_hub for all tiles. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cmemx_main_cfg_s cn; */
};
typedef union cavm_cmemx_main_cfg cavm_cmemx_main_cfg_t;

static inline uint64_t CAVM_CMEMX_MAIN_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CMEMX_MAIN_CFG(uint64_t a)
{
    if (a<=8)
        return 0x87e042600080ll + 0x80000ll * ((a) & 0xf);
    __cavm_csr_fatal("CMEMX_MAIN_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CMEMX_MAIN_CFG(a) cavm_cmemx_main_cfg_t
#define bustype_CAVM_CMEMX_MAIN_CFG(a) CSR_TYPE_RSL
#define basename_CAVM_CMEMX_MAIN_CFG(a) "CMEMX_MAIN_CFG"
#define busnum_CAVM_CMEMX_MAIN_CFG(a) (a)
#define arguments_CAVM_CMEMX_MAIN_CFG(a) (a),-1,-1,-1

/**
 * Register (RSL) cmem#_mem_addr
 *
 * Memory Window Registers
 */
union cavm_cmemx_mem_addr
{
    uint64_t u;
    struct cavm_cmemx_mem_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_19_63        : 45;
        uint64_t msb                   : 1;  /**< [ 18: 18](R/W) Memory window. */
        uint64_t reserved_0_17         : 18;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_17         : 18;
        uint64_t msb                   : 1;  /**< [ 18: 18](R/W) Memory window. */
        uint64_t reserved_19_63        : 45;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cmemx_mem_addr_s cn; */
};
typedef union cavm_cmemx_mem_addr cavm_cmemx_mem_addr_t;

static inline uint64_t CAVM_CMEMX_MEM_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CMEMX_MEM_ADDR(uint64_t a)
{
    if (a<=8)
        return 0x87e04263fff8ll + 0x80000ll * ((a) & 0xf);
    __cavm_csr_fatal("CMEMX_MEM_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CMEMX_MEM_ADDR(a) cavm_cmemx_mem_addr_t
#define bustype_CAVM_CMEMX_MEM_ADDR(a) CSR_TYPE_RSL
#define basename_CAVM_CMEMX_MEM_ADDR(a) "CMEMX_MEM_ADDR"
#define busnum_CAVM_CMEMX_MEM_ADDR(a) (a)
#define arguments_CAVM_CMEMX_MEM_ADDR(a) (a),-1,-1,-1

/**
 * Register (RSL) cmem#_mem_window#
 *
 * Memory Window Registers
 */
union cavm_cmemx_mem_windowx
{
    uint64_t u;
    struct cavm_cmemx_mem_windowx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Memory window. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Memory window. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cmemx_mem_windowx_s cn; */
};
typedef union cavm_cmemx_mem_windowx cavm_cmemx_mem_windowx_t;

static inline uint64_t CAVM_CMEMX_MEM_WINDOWX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CMEMX_MEM_WINDOWX(uint64_t a, uint64_t b)
{
    if ((a<=8) && (b<=32767))
        return 0x87e042640000ll + 0x80000ll * ((a) & 0xf) + 8ll * ((b) & 0x7fff);
    __cavm_csr_fatal("CMEMX_MEM_WINDOWX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CMEMX_MEM_WINDOWX(a,b) cavm_cmemx_mem_windowx_t
#define bustype_CAVM_CMEMX_MEM_WINDOWX(a,b) CSR_TYPE_RSL
#define basename_CAVM_CMEMX_MEM_WINDOWX(a,b) "CMEMX_MEM_WINDOWX"
#define busnum_CAVM_CMEMX_MEM_WINDOWX(a,b) (a)
#define arguments_CAVM_CMEMX_MEM_WINDOWX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) cmem#_rd_queue_control#
 *
 * Normalized Read Queue Control Registers
 */
union cavm_cmemx_rd_queue_controlx
{
    uint64_t u;
    struct cavm_cmemx_rd_queue_controlx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry_ptr             : 8;  /**< [ 63: 56](R/W) Pointer to queue entry to retun on debug_status.entry */
        uint64_t reserved_2_55         : 54;
        uint64_t allow_rmw_leapfrog    : 1;  /**< [  1:  1](R/W) Debug bit. Skip the read-modify-write leapfrog prevention logic. */
        uint64_t halt                  : 1;  /**< [  0:  0](R/W) Debug bit. Halt FSM updates for this queue. Kills function but allows inspection. */
#else /* Word 0 - Little Endian */
        uint64_t halt                  : 1;  /**< [  0:  0](R/W) Debug bit. Halt FSM updates for this queue. Kills function but allows inspection. */
        uint64_t allow_rmw_leapfrog    : 1;  /**< [  1:  1](R/W) Debug bit. Skip the read-modify-write leapfrog prevention logic. */
        uint64_t reserved_2_55         : 54;
        uint64_t entry_ptr             : 8;  /**< [ 63: 56](R/W) Pointer to queue entry to retun on debug_status.entry */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cmemx_rd_queue_controlx_s cn; */
};
typedef union cavm_cmemx_rd_queue_controlx cavm_cmemx_rd_queue_controlx_t;

static inline uint64_t CAVM_CMEMX_RD_QUEUE_CONTROLX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CMEMX_RD_QUEUE_CONTROLX(uint64_t a, uint64_t b)
{
    if ((a<=8) && (b==0))
        return 0x87e042600900ll + 0x80000ll * ((a) & 0xf) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("CMEMX_RD_QUEUE_CONTROLX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CMEMX_RD_QUEUE_CONTROLX(a,b) cavm_cmemx_rd_queue_controlx_t
#define bustype_CAVM_CMEMX_RD_QUEUE_CONTROLX(a,b) CSR_TYPE_RSL
#define basename_CAVM_CMEMX_RD_QUEUE_CONTROLX(a,b) "CMEMX_RD_QUEUE_CONTROLX"
#define busnum_CAVM_CMEMX_RD_QUEUE_CONTROLX(a,b) (a)
#define arguments_CAVM_CMEMX_RD_QUEUE_CONTROLX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) cmem#_rd_queue_status#
 *
 * Normalized Read Queue Control Registers
 */
union cavm_cmemx_rd_queue_statusx
{
    uint64_t u;
    struct cavm_cmemx_rd_queue_statusx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t client_req_ptr        : 8;  /**< [ 63: 56](RO/H) Current client request pointer. */
        uint64_t client_rsp_ptr        : 8;  /**< [ 55: 48](RO/H) Current client response pointer. */
        uint64_t norm_rd_req_ptr       : 8;  /**< [ 47: 40](RO/H) Current norm_rd request pointer. */
        uint64_t norm_wr_req_ptr       : 8;  /**< [ 39: 32](RO/H) Current norm_wr request pointer. */
        uint64_t overflow              : 1;  /**< [ 31: 31](RO/H) Client has overflowed credit limit. Kaboom. */
        uint64_t reserved_30           : 1;
        uint64_t entry_valid           : 1;  /**< [ 29: 29](RO/H) Queue entry is valid and in progress. */
        uint64_t entry_rmw_hazard      : 1;  /**< [ 28: 28](RO/H) Queue entry has a leapfrog hazard condition that is still active. */
        uint64_t entry_rd_complete     : 1;  /**< [ 27: 27](RO/H) Queue entry has completed any needed internal read operation. */
        uint64_t entry_wr_complete     : 1;  /**< [ 26: 26](RO/H) Queue entry has completed any needed internal write operation. */
        uint64_t entry_ecc_ded         : 1;  /**< [ 25: 25](RO/H) ECC DED status bit for this entry. */
        uint64_t entry_ecc_sec         : 1;  /**< [ 24: 24](RO/H) ECC SEC status bit for this entry. */
        uint64_t reserved_14_23        : 10;
        uint64_t entry_addr            : 14; /**< [ 13:  0](RO/H) 256-bit aligned address for queue entry */
#else /* Word 0 - Little Endian */
        uint64_t entry_addr            : 14; /**< [ 13:  0](RO/H) 256-bit aligned address for queue entry */
        uint64_t reserved_14_23        : 10;
        uint64_t entry_ecc_sec         : 1;  /**< [ 24: 24](RO/H) ECC SEC status bit for this entry. */
        uint64_t entry_ecc_ded         : 1;  /**< [ 25: 25](RO/H) ECC DED status bit for this entry. */
        uint64_t entry_wr_complete     : 1;  /**< [ 26: 26](RO/H) Queue entry has completed any needed internal write operation. */
        uint64_t entry_rd_complete     : 1;  /**< [ 27: 27](RO/H) Queue entry has completed any needed internal read operation. */
        uint64_t entry_rmw_hazard      : 1;  /**< [ 28: 28](RO/H) Queue entry has a leapfrog hazard condition that is still active. */
        uint64_t entry_valid           : 1;  /**< [ 29: 29](RO/H) Queue entry is valid and in progress. */
        uint64_t reserved_30           : 1;
        uint64_t overflow              : 1;  /**< [ 31: 31](RO/H) Client has overflowed credit limit. Kaboom. */
        uint64_t norm_wr_req_ptr       : 8;  /**< [ 39: 32](RO/H) Current norm_wr request pointer. */
        uint64_t norm_rd_req_ptr       : 8;  /**< [ 47: 40](RO/H) Current norm_rd request pointer. */
        uint64_t client_rsp_ptr        : 8;  /**< [ 55: 48](RO/H) Current client response pointer. */
        uint64_t client_req_ptr        : 8;  /**< [ 63: 56](RO/H) Current client request pointer. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cmemx_rd_queue_statusx_s cn; */
};
typedef union cavm_cmemx_rd_queue_statusx cavm_cmemx_rd_queue_statusx_t;

static inline uint64_t CAVM_CMEMX_RD_QUEUE_STATUSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CMEMX_RD_QUEUE_STATUSX(uint64_t a, uint64_t b)
{
    if ((a<=8) && (b==0))
        return 0x87e042600980ll + 0x80000ll * ((a) & 0xf) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("CMEMX_RD_QUEUE_STATUSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CMEMX_RD_QUEUE_STATUSX(a,b) cavm_cmemx_rd_queue_statusx_t
#define bustype_CAVM_CMEMX_RD_QUEUE_STATUSX(a,b) CSR_TYPE_RSL
#define basename_CAVM_CMEMX_RD_QUEUE_STATUSX(a,b) "CMEMX_RD_QUEUE_STATUSX"
#define busnum_CAVM_CMEMX_RD_QUEUE_STATUSX(a,b) (a)
#define arguments_CAVM_CMEMX_RD_QUEUE_STATUSX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) cmem#_scratch
 *
 * INTERNAL: Scratch Register
 */
union cavm_cmemx_scratch
{
    uint64_t u;
    struct cavm_cmemx_scratch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Scratch data */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Scratch data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cmemx_scratch_s cn; */
};
typedef union cavm_cmemx_scratch cavm_cmemx_scratch_t;

static inline uint64_t CAVM_CMEMX_SCRATCH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CMEMX_SCRATCH(uint64_t a)
{
    if (a<=8)
        return 0x87e042600000ll + 0x80000ll * ((a) & 0xf);
    __cavm_csr_fatal("CMEMX_SCRATCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CMEMX_SCRATCH(a) cavm_cmemx_scratch_t
#define bustype_CAVM_CMEMX_SCRATCH(a) CSR_TYPE_RSL
#define basename_CAVM_CMEMX_SCRATCH(a) "CMEMX_SCRATCH"
#define busnum_CAVM_CMEMX_SCRATCH(a) (a)
#define arguments_CAVM_CMEMX_SCRATCH(a) (a),-1,-1,-1

/**
 * Register (RSL) cmem#_wr_queue_control#
 *
 * Normalized Write Queue Control Registers
 */
union cavm_cmemx_wr_queue_controlx
{
    uint64_t u;
    struct cavm_cmemx_wr_queue_controlx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t entry_ptr             : 8;  /**< [ 63: 56](R/W) Pointer to queue entry to retun on debug_status.entry */
        uint64_t reserved_2_55         : 54;
        uint64_t allow_rmw_leapfrog    : 1;  /**< [  1:  1](R/W) Debug bit. Skip the read-modify-write leapfrog prevention logic. */
        uint64_t halt                  : 1;  /**< [  0:  0](R/W) Debug bit. Halt FSM updates for this queue. Kills function but allows inspection. */
#else /* Word 0 - Little Endian */
        uint64_t halt                  : 1;  /**< [  0:  0](R/W) Debug bit. Halt FSM updates for this queue. Kills function but allows inspection. */
        uint64_t allow_rmw_leapfrog    : 1;  /**< [  1:  1](R/W) Debug bit. Skip the read-modify-write leapfrog prevention logic. */
        uint64_t reserved_2_55         : 54;
        uint64_t entry_ptr             : 8;  /**< [ 63: 56](R/W) Pointer to queue entry to retun on debug_status.entry */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cmemx_wr_queue_controlx_s cn; */
};
typedef union cavm_cmemx_wr_queue_controlx cavm_cmemx_wr_queue_controlx_t;

static inline uint64_t CAVM_CMEMX_WR_QUEUE_CONTROLX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CMEMX_WR_QUEUE_CONTROLX(uint64_t a, uint64_t b)
{
    if ((a<=8) && (b==0))
        return 0x87e042600800ll + 0x80000ll * ((a) & 0xf) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("CMEMX_WR_QUEUE_CONTROLX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CMEMX_WR_QUEUE_CONTROLX(a,b) cavm_cmemx_wr_queue_controlx_t
#define bustype_CAVM_CMEMX_WR_QUEUE_CONTROLX(a,b) CSR_TYPE_RSL
#define basename_CAVM_CMEMX_WR_QUEUE_CONTROLX(a,b) "CMEMX_WR_QUEUE_CONTROLX"
#define busnum_CAVM_CMEMX_WR_QUEUE_CONTROLX(a,b) (a)
#define arguments_CAVM_CMEMX_WR_QUEUE_CONTROLX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) cmem#_wr_queue_status#
 *
 * Normalized Write Queue Control Registers
 */
union cavm_cmemx_wr_queue_statusx
{
    uint64_t u;
    struct cavm_cmemx_wr_queue_statusx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t client_req_ptr        : 8;  /**< [ 63: 56](RO/H) Current client request pointer. */
        uint64_t client_rsp_ptr        : 8;  /**< [ 55: 48](RO/H) Current client response pointer. */
        uint64_t norm_rd_req_ptr       : 8;  /**< [ 47: 40](RO/H) Current norm_rd request pointer. */
        uint64_t norm_wr_req_ptr       : 8;  /**< [ 39: 32](RO/H) Current norm_wr request pointer. */
        uint64_t overflow              : 1;  /**< [ 31: 31](RO/H) Client has overflowed credit limit. Kaboom. */
        uint64_t reserved_30           : 1;
        uint64_t entry_valid           : 1;  /**< [ 29: 29](RO/H) Queue entry is valid and in progress. */
        uint64_t entry_rmw_hazard      : 1;  /**< [ 28: 28](RO/H) Queue entry has a leapfrog hazard condition that is still active. */
        uint64_t entry_rd_complete     : 1;  /**< [ 27: 27](RO/H) Queue entry has completed any needed internal read operation. */
        uint64_t entry_wr_complete     : 1;  /**< [ 26: 26](RO/H) Queue entry has completed any needed internal write operation. */
        uint64_t entry_ecc_ded         : 1;  /**< [ 25: 25](RO/H) ECC DED status bit for this entry. */
        uint64_t entry_ecc_sec         : 1;  /**< [ 24: 24](RO/H) ECC SEC status bit for this entry. */
        uint64_t reserved_14_23        : 10;
        uint64_t entry_addr            : 14; /**< [ 13:  0](RO/H) 256-bit aligned address for queue entry */
#else /* Word 0 - Little Endian */
        uint64_t entry_addr            : 14; /**< [ 13:  0](RO/H) 256-bit aligned address for queue entry */
        uint64_t reserved_14_23        : 10;
        uint64_t entry_ecc_sec         : 1;  /**< [ 24: 24](RO/H) ECC SEC status bit for this entry. */
        uint64_t entry_ecc_ded         : 1;  /**< [ 25: 25](RO/H) ECC DED status bit for this entry. */
        uint64_t entry_wr_complete     : 1;  /**< [ 26: 26](RO/H) Queue entry has completed any needed internal write operation. */
        uint64_t entry_rd_complete     : 1;  /**< [ 27: 27](RO/H) Queue entry has completed any needed internal read operation. */
        uint64_t entry_rmw_hazard      : 1;  /**< [ 28: 28](RO/H) Queue entry has a leapfrog hazard condition that is still active. */
        uint64_t entry_valid           : 1;  /**< [ 29: 29](RO/H) Queue entry is valid and in progress. */
        uint64_t reserved_30           : 1;
        uint64_t overflow              : 1;  /**< [ 31: 31](RO/H) Client has overflowed credit limit. Kaboom. */
        uint64_t norm_wr_req_ptr       : 8;  /**< [ 39: 32](RO/H) Current norm_wr request pointer. */
        uint64_t norm_rd_req_ptr       : 8;  /**< [ 47: 40](RO/H) Current norm_rd request pointer. */
        uint64_t client_rsp_ptr        : 8;  /**< [ 55: 48](RO/H) Current client response pointer. */
        uint64_t client_req_ptr        : 8;  /**< [ 63: 56](RO/H) Current client request pointer. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cmemx_wr_queue_statusx_s cn; */
};
typedef union cavm_cmemx_wr_queue_statusx cavm_cmemx_wr_queue_statusx_t;

static inline uint64_t CAVM_CMEMX_WR_QUEUE_STATUSX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CMEMX_WR_QUEUE_STATUSX(uint64_t a, uint64_t b)
{
    if ((a<=8) && (b==0))
        return 0x87e042600880ll + 0x80000ll * ((a) & 0xf) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("CMEMX_WR_QUEUE_STATUSX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_CMEMX_WR_QUEUE_STATUSX(a,b) cavm_cmemx_wr_queue_statusx_t
#define bustype_CAVM_CMEMX_WR_QUEUE_STATUSX(a,b) CSR_TYPE_RSL
#define basename_CAVM_CMEMX_WR_QUEUE_STATUSX(a,b) "CMEMX_WR_QUEUE_STATUSX"
#define busnum_CAVM_CMEMX_WR_QUEUE_STATUSX(a,b) (a)
#define arguments_CAVM_CMEMX_WR_QUEUE_STATUSX(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_CMEM_H__ */
