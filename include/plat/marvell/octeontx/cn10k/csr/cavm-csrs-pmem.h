#ifndef __CAVM_CSRS_PMEM_H__
#define __CAVM_CSRS_PMEM_H__
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
 * OcteonTX PMEM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RSL) pmem_arb_priority
 *
 * Config of high-priority for internal norm clients Register
 */
union cavm_pmem_arb_priority
{
    uint64_t u;
    struct cavm_pmem_arb_priority_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t rd512                 : 8;  /**< [ 39: 32](R/W) High-priority bits for each norm client from RD512 ports. */
        uint64_t reserved_18_31        : 14;
        uint64_t rd256                 : 2;  /**< [ 17: 16](R/W) High-priority bits for each norm client from RD256 ports. */
        uint64_t reserved_2_15         : 14;
        uint64_t wr256                 : 2;  /**< [  1:  0](R/W) High-priority bits for each norm client from WR256 ports. */
#else /* Word 0 - Little Endian */
        uint64_t wr256                 : 2;  /**< [  1:  0](R/W) High-priority bits for each norm client from WR256 ports. */
        uint64_t reserved_2_15         : 14;
        uint64_t rd256                 : 2;  /**< [ 17: 16](R/W) High-priority bits for each norm client from RD256 ports. */
        uint64_t reserved_18_31        : 14;
        uint64_t rd512                 : 8;  /**< [ 39: 32](R/W) High-priority bits for each norm client from RD512 ports. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pmem_arb_priority_s cn; */
};
typedef union cavm_pmem_arb_priority cavm_pmem_arb_priority_t;

#define CAVM_PMEM_ARB_PRIORITY CAVM_PMEM_ARB_PRIORITY_FUNC()
static inline uint64_t CAVM_PMEM_ARB_PRIORITY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PMEM_ARB_PRIORITY_FUNC(void)
{
    return 0x87e042580140ll;
}

#define typedef_CAVM_PMEM_ARB_PRIORITY cavm_pmem_arb_priority_t
#define bustype_CAVM_PMEM_ARB_PRIORITY CSR_TYPE_RSL
#define basename_CAVM_PMEM_ARB_PRIORITY "PMEM_ARB_PRIORITY"
#define busnum_CAVM_PMEM_ARB_PRIORITY 0
#define arguments_CAVM_PMEM_ARB_PRIORITY -1,-1,-1,-1

/**
 * Register (RSL) pmem_bp_test#
 *
 * INTERNAL: Back Pressure Test Register
 *
 * Internal:
 * BP_TEST\<0\> = backpressure to rd512 ports
 * BP_TEST\<1\> = backpressure to rd256 and wr256 ports
 */
union cavm_pmem_bp_testx
{
    uint64_t u;
    struct cavm_pmem_bp_testx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 Prevents arb from granting. */
        uint64_t reserved_24_59        : 36;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time. */
        uint64_t reserved_24_59        : 36;
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 Prevents arb from granting. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pmem_bp_testx_s cn; */
};
typedef union cavm_pmem_bp_testx cavm_pmem_bp_testx_t;

static inline uint64_t CAVM_PMEM_BP_TESTX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PMEM_BP_TESTX(uint64_t a)
{
    if (a<=1)
        return 0x87e042580080ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("PMEM_BP_TESTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PMEM_BP_TESTX(a) cavm_pmem_bp_testx_t
#define bustype_CAVM_PMEM_BP_TESTX(a) CSR_TYPE_RSL
#define basename_CAVM_PMEM_BP_TESTX(a) "PMEM_BP_TESTX"
#define busnum_CAVM_PMEM_BP_TESTX(a) (a)
#define arguments_CAVM_PMEM_BP_TESTX(a) (a),-1,-1,-1

/**
 * Register (RSL) pmem_ecc_signature
 *
 * Primary Configuration Register
 */
union cavm_pmem_ecc_signature
{
    uint64_t u;
    struct cavm_pmem_ecc_signature_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t wr256                 : 2;  /**< [ 57: 56](RO/H) If ECC event was for this port, a bit will be asserted here. */
        uint64_t reserved_50_55        : 6;
        uint64_t rd256                 : 2;  /**< [ 49: 48](RO/H) If ECC event was for this port, a bit will be asserted here. */
        uint64_t reserved_44_47        : 4;
        uint64_t rd512                 : 4;  /**< [ 43: 40](RO/H) If ECC event was for this port, a bit will be asserted here. */
        uint64_t reserved_34_39        : 6;
        uint64_t dbe                   : 1;  /**< [ 33: 33](R/W1C/H) Uncorrectable double bit error(s) */
        uint64_t sbe                   : 1;  /**< [ 32: 32](R/W1C/H) Correctable single bit error(s) */
        uint64_t reserved_25_31        : 7;
        uint64_t byte_addr             : 25; /**< [ 24:  0](RO/H) Byte-aligned address of ECC event. */
#else /* Word 0 - Little Endian */
        uint64_t byte_addr             : 25; /**< [ 24:  0](RO/H) Byte-aligned address of ECC event. */
        uint64_t reserved_25_31        : 7;
        uint64_t sbe                   : 1;  /**< [ 32: 32](R/W1C/H) Correctable single bit error(s) */
        uint64_t dbe                   : 1;  /**< [ 33: 33](R/W1C/H) Uncorrectable double bit error(s) */
        uint64_t reserved_34_39        : 6;
        uint64_t rd512                 : 4;  /**< [ 43: 40](RO/H) If ECC event was for this port, a bit will be asserted here. */
        uint64_t reserved_44_47        : 4;
        uint64_t rd256                 : 2;  /**< [ 49: 48](RO/H) If ECC event was for this port, a bit will be asserted here. */
        uint64_t reserved_50_55        : 6;
        uint64_t wr256                 : 2;  /**< [ 57: 56](RO/H) If ECC event was for this port, a bit will be asserted here. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pmem_ecc_signature_s cn; */
};
typedef union cavm_pmem_ecc_signature cavm_pmem_ecc_signature_t;

#define CAVM_PMEM_ECC_SIGNATURE CAVM_PMEM_ECC_SIGNATURE_FUNC()
static inline uint64_t CAVM_PMEM_ECC_SIGNATURE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PMEM_ECC_SIGNATURE_FUNC(void)
{
    return 0x87e042580120ll;
}

#define typedef_CAVM_PMEM_ECC_SIGNATURE cavm_pmem_ecc_signature_t
#define bustype_CAVM_PMEM_ECC_SIGNATURE CSR_TYPE_RSL
#define basename_CAVM_PMEM_ECC_SIGNATURE "PMEM_ECC_SIGNATURE"
#define busnum_CAVM_PMEM_ECC_SIGNATURE 0
#define arguments_CAVM_PMEM_ECC_SIGNATURE -1,-1,-1,-1

/**
 * Register (RSL) pmem_eco
 *
 * INTERNAL: PMEM ECO Register
 */
union cavm_pmem_eco
{
    uint64_t u;
    struct cavm_pmem_eco_s
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
    /* struct cavm_pmem_eco_s cn; */
};
typedef union cavm_pmem_eco cavm_pmem_eco_t;

#define CAVM_PMEM_ECO CAVM_PMEM_ECO_FUNC()
static inline uint64_t CAVM_PMEM_ECO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PMEM_ECO_FUNC(void)
{
    return 0x87e042580008ll;
}

#define typedef_CAVM_PMEM_ECO cavm_pmem_eco_t
#define bustype_CAVM_PMEM_ECO CSR_TYPE_RSL
#define basename_CAVM_PMEM_ECO "PMEM_ECO"
#define busnum_CAVM_PMEM_ECO 0
#define arguments_CAVM_PMEM_ECO -1,-1,-1,-1

/**
 * Register (RSL) pmem_main_cfg
 *
 * Primary Configuration Register
 */
union cavm_pmem_main_cfg
{
    uint64_t u;
    struct cavm_pmem_main_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t disable_mdc_hub       : 1;  /**< [  4:  4](R/W) Connects to blk__csr_dis on mdc_hub for all tiles. */
        uint64_t reserved_1_3          : 3;
        uint64_t force_update_state    : 1;  /**< [  0:  0](R/W) Debug bit. This forces state machines to update by disabling their dynamic clock gating code. */
#else /* Word 0 - Little Endian */
        uint64_t force_update_state    : 1;  /**< [  0:  0](R/W) Debug bit. This forces state machines to update by disabling their dynamic clock gating code. */
        uint64_t reserved_1_3          : 3;
        uint64_t disable_mdc_hub       : 1;  /**< [  4:  4](R/W) Connects to blk__csr_dis on mdc_hub for all tiles. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pmem_main_cfg_s cn; */
};
typedef union cavm_pmem_main_cfg cavm_pmem_main_cfg_t;

#define CAVM_PMEM_MAIN_CFG CAVM_PMEM_MAIN_CFG_FUNC()
static inline uint64_t CAVM_PMEM_MAIN_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PMEM_MAIN_CFG_FUNC(void)
{
    return 0x87e042580100ll;
}

#define typedef_CAVM_PMEM_MAIN_CFG cavm_pmem_main_cfg_t
#define bustype_CAVM_PMEM_MAIN_CFG CSR_TYPE_RSL
#define basename_CAVM_PMEM_MAIN_CFG "PMEM_MAIN_CFG"
#define busnum_CAVM_PMEM_MAIN_CFG 0
#define arguments_CAVM_PMEM_MAIN_CFG -1,-1,-1,-1

/**
 * Register (RSL) pmem_mem_addr
 *
 * Memory Window Registers
 */
union cavm_pmem_mem_addr
{
    uint64_t u;
    struct cavm_pmem_mem_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_23_63        : 41;
        uint64_t msb                   : 5;  /**< [ 22: 18](R/W) Memory window. */
        uint64_t reserved_0_17         : 18;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_17         : 18;
        uint64_t msb                   : 5;  /**< [ 22: 18](R/W) Memory window. */
        uint64_t reserved_23_63        : 41;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pmem_mem_addr_s cn; */
};
typedef union cavm_pmem_mem_addr cavm_pmem_mem_addr_t;

#define CAVM_PMEM_MEM_ADDR CAVM_PMEM_MEM_ADDR_FUNC()
static inline uint64_t CAVM_PMEM_MEM_ADDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PMEM_MEM_ADDR_FUNC(void)
{
    return 0x87e0425bfff8ll;
}

#define typedef_CAVM_PMEM_MEM_ADDR cavm_pmem_mem_addr_t
#define bustype_CAVM_PMEM_MEM_ADDR CSR_TYPE_RSL
#define basename_CAVM_PMEM_MEM_ADDR "PMEM_MEM_ADDR"
#define busnum_CAVM_PMEM_MEM_ADDR 0
#define arguments_CAVM_PMEM_MEM_ADDR -1,-1,-1,-1

/**
 * Register (RSL) pmem_mem_window#
 *
 * Memory Window Registers
 */
union cavm_pmem_mem_windowx
{
    uint64_t u;
    struct cavm_pmem_mem_windowx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Memory window. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Memory window. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pmem_mem_windowx_s cn; */
};
typedef union cavm_pmem_mem_windowx cavm_pmem_mem_windowx_t;

static inline uint64_t CAVM_PMEM_MEM_WINDOWX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PMEM_MEM_WINDOWX(uint64_t a)
{
    if (a<=32767)
        return 0x87e0425c0000ll + 8ll * ((a) & 0x7fff);
    __cavm_csr_fatal("PMEM_MEM_WINDOWX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PMEM_MEM_WINDOWX(a) cavm_pmem_mem_windowx_t
#define bustype_CAVM_PMEM_MEM_WINDOWX(a) CSR_TYPE_RSL
#define basename_CAVM_PMEM_MEM_WINDOWX(a) "PMEM_MEM_WINDOWX"
#define busnum_CAVM_PMEM_MEM_WINDOWX(a) (a)
#define arguments_CAVM_PMEM_MEM_WINDOWX(a) (a),-1,-1,-1

/**
 * Register (RSL) pmem_rd_queue_control#
 *
 * Normalized Read Queue Control Registers
 */
union cavm_pmem_rd_queue_controlx
{
    uint64_t u;
    struct cavm_pmem_rd_queue_controlx_s
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
    /* struct cavm_pmem_rd_queue_controlx_s cn; */
};
typedef union cavm_pmem_rd_queue_controlx cavm_pmem_rd_queue_controlx_t;

static inline uint64_t CAVM_PMEM_RD_QUEUE_CONTROLX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PMEM_RD_QUEUE_CONTROLX(uint64_t a)
{
    if (a<=9)
        return 0x87e042580900ll + 8ll * ((a) & 0xf);
    __cavm_csr_fatal("PMEM_RD_QUEUE_CONTROLX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PMEM_RD_QUEUE_CONTROLX(a) cavm_pmem_rd_queue_controlx_t
#define bustype_CAVM_PMEM_RD_QUEUE_CONTROLX(a) CSR_TYPE_RSL
#define basename_CAVM_PMEM_RD_QUEUE_CONTROLX(a) "PMEM_RD_QUEUE_CONTROLX"
#define busnum_CAVM_PMEM_RD_QUEUE_CONTROLX(a) (a)
#define arguments_CAVM_PMEM_RD_QUEUE_CONTROLX(a) (a),-1,-1,-1

/**
 * Register (RSL) pmem_rd_queue_status#
 *
 * Normalized Read Queue Control Registers
 */
union cavm_pmem_rd_queue_statusx
{
    uint64_t u;
    struct cavm_pmem_rd_queue_statusx_s
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
        uint64_t reserved_18_23        : 6;
        uint64_t entry_addr            : 18; /**< [ 17:  0](RO/H) 256-bit aligned address for queue entry */
#else /* Word 0 - Little Endian */
        uint64_t entry_addr            : 18; /**< [ 17:  0](RO/H) 256-bit aligned address for queue entry */
        uint64_t reserved_18_23        : 6;
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
    /* struct cavm_pmem_rd_queue_statusx_s cn; */
};
typedef union cavm_pmem_rd_queue_statusx cavm_pmem_rd_queue_statusx_t;

static inline uint64_t CAVM_PMEM_RD_QUEUE_STATUSX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PMEM_RD_QUEUE_STATUSX(uint64_t a)
{
    if (a<=9)
        return 0x87e042580980ll + 8ll * ((a) & 0xf);
    __cavm_csr_fatal("PMEM_RD_QUEUE_STATUSX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PMEM_RD_QUEUE_STATUSX(a) cavm_pmem_rd_queue_statusx_t
#define bustype_CAVM_PMEM_RD_QUEUE_STATUSX(a) CSR_TYPE_RSL
#define basename_CAVM_PMEM_RD_QUEUE_STATUSX(a) "PMEM_RD_QUEUE_STATUSX"
#define busnum_CAVM_PMEM_RD_QUEUE_STATUSX(a) (a)
#define arguments_CAVM_PMEM_RD_QUEUE_STATUSX(a) (a),-1,-1,-1

/**
 * Register (RSL) pmem_scratch
 *
 * INTERNAL: Scratch Register
 */
union cavm_pmem_scratch
{
    uint64_t u;
    struct cavm_pmem_scratch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Scratch data */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Scratch data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pmem_scratch_s cn; */
};
typedef union cavm_pmem_scratch cavm_pmem_scratch_t;

#define CAVM_PMEM_SCRATCH CAVM_PMEM_SCRATCH_FUNC()
static inline uint64_t CAVM_PMEM_SCRATCH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PMEM_SCRATCH_FUNC(void)
{
    return 0x87e042580000ll;
}

#define typedef_CAVM_PMEM_SCRATCH cavm_pmem_scratch_t
#define bustype_CAVM_PMEM_SCRATCH CSR_TYPE_RSL
#define basename_CAVM_PMEM_SCRATCH "PMEM_SCRATCH"
#define busnum_CAVM_PMEM_SCRATCH 0
#define arguments_CAVM_PMEM_SCRATCH -1,-1,-1,-1

/**
 * Register (RSL) pmem_wr_queue_control#
 *
 * Normalized Write Queue Control Registers
 */
union cavm_pmem_wr_queue_controlx
{
    uint64_t u;
    struct cavm_pmem_wr_queue_controlx_s
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
    /* struct cavm_pmem_wr_queue_controlx_s cn; */
};
typedef union cavm_pmem_wr_queue_controlx cavm_pmem_wr_queue_controlx_t;

static inline uint64_t CAVM_PMEM_WR_QUEUE_CONTROLX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PMEM_WR_QUEUE_CONTROLX(uint64_t a)
{
    if (a<=1)
        return 0x87e042580800ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("PMEM_WR_QUEUE_CONTROLX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PMEM_WR_QUEUE_CONTROLX(a) cavm_pmem_wr_queue_controlx_t
#define bustype_CAVM_PMEM_WR_QUEUE_CONTROLX(a) CSR_TYPE_RSL
#define basename_CAVM_PMEM_WR_QUEUE_CONTROLX(a) "PMEM_WR_QUEUE_CONTROLX"
#define busnum_CAVM_PMEM_WR_QUEUE_CONTROLX(a) (a)
#define arguments_CAVM_PMEM_WR_QUEUE_CONTROLX(a) (a),-1,-1,-1

/**
 * Register (RSL) pmem_wr_queue_status#
 *
 * Normalized Write Queue Control Registers
 */
union cavm_pmem_wr_queue_statusx
{
    uint64_t u;
    struct cavm_pmem_wr_queue_statusx_s
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
        uint64_t reserved_18_23        : 6;
        uint64_t entry_addr            : 18; /**< [ 17:  0](RO/H) 256-bit aligned address for queue entry */
#else /* Word 0 - Little Endian */
        uint64_t entry_addr            : 18; /**< [ 17:  0](RO/H) 256-bit aligned address for queue entry */
        uint64_t reserved_18_23        : 6;
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
    /* struct cavm_pmem_wr_queue_statusx_s cn; */
};
typedef union cavm_pmem_wr_queue_statusx cavm_pmem_wr_queue_statusx_t;

static inline uint64_t CAVM_PMEM_WR_QUEUE_STATUSX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PMEM_WR_QUEUE_STATUSX(uint64_t a)
{
    if (a<=1)
        return 0x87e042580880ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("PMEM_WR_QUEUE_STATUSX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PMEM_WR_QUEUE_STATUSX(a) cavm_pmem_wr_queue_statusx_t
#define bustype_CAVM_PMEM_WR_QUEUE_STATUSX(a) CSR_TYPE_RSL
#define basename_CAVM_PMEM_WR_QUEUE_STATUSX(a) "PMEM_WR_QUEUE_STATUSX"
#define busnum_CAVM_PMEM_WR_QUEUE_STATUSX(a) (a)
#define arguments_CAVM_PMEM_WR_QUEUE_STATUSX(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_PMEM_H__ */
