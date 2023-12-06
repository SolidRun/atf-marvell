#ifndef __CAVM_CSRS_DSYM_H__
#define __CAVM_CSRS_DSYM_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2021-2023 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * DSYM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (RSL) dsym#_ab#_block1_ab_control
 *
 * DSYM Block1 Ab Control Register
 * Identification register.
 */
union cavm_dsymx_abx_block1_ab_control
{
    uint64_t u;
    struct cavm_dsymx_abx_block1_ab_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t jobid                 : 16; /**< [ 31: 16](R/W) Job ID. */
        uint64_t reserved_1_15         : 15;
        uint64_t start                 : 1;  /**< [  0:  0](R/W) '1' = start the AB (auto-clear). */
#else /* Word 0 - Little Endian */
        uint64_t start                 : 1;  /**< [  0:  0](R/W) '1' = start the AB (auto-clear). */
        uint64_t reserved_1_15         : 15;
        uint64_t jobid                 : 16; /**< [ 31: 16](R/W) Job ID. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block1_ab_control_s cn; */
};
typedef union cavm_dsymx_abx_block1_ab_control cavm_dsymx_abx_block1_ab_control_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_AB_CONTROL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_AB_CONTROL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e00000ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK1_AB_CONTROL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK1_AB_CONTROL(a,b) cavm_dsymx_abx_block1_ab_control_t
#define bustype_CAVM_DSYMX_ABX_BLOCK1_AB_CONTROL(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK1_AB_CONTROL(a,b) "DSYMX_ABX_BLOCK1_AB_CONTROL"
#define busnum_CAVM_DSYMX_ABX_BLOCK1_AB_CONTROL(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK1_AB_CONTROL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block1_ab_error
 *
 * DSYM Block1 Ab Error Register
 * Clear-on-writeZero status register.
 */
union cavm_dsymx_abx_block1_ab_error
{
    uint64_t u;
    struct cavm_dsymx_abx_block1_ab_error_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t jobid                 : 16; /**< [ 31: 16](R/W1C) JobID causing underflow/overflow. */
        uint64_t reserved_5_15         : 11;
        uint64_t overflow              : 1;  /**< [  4:  4](R/W1C) AB interface ReadDMA overflow error. */
        uint64_t reserved_1_3          : 3;
        uint64_t underflow             : 1;  /**< [  0:  0](R/W1C) AB interface ReadDMA underflow error. */
#else /* Word 0 - Little Endian */
        uint64_t underflow             : 1;  /**< [  0:  0](R/W1C) AB interface ReadDMA underflow error. */
        uint64_t reserved_1_3          : 3;
        uint64_t overflow              : 1;  /**< [  4:  4](R/W1C) AB interface ReadDMA overflow error. */
        uint64_t reserved_5_15         : 11;
        uint64_t jobid                 : 16; /**< [ 31: 16](R/W1C) JobID causing underflow/overflow. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block1_ab_error_s cn; */
};
typedef union cavm_dsymx_abx_block1_ab_error cavm_dsymx_abx_block1_ab_error_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_AB_ERROR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_AB_ERROR(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e00030ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK1_AB_ERROR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK1_AB_ERROR(a,b) cavm_dsymx_abx_block1_ab_error_t
#define bustype_CAVM_DSYMX_ABX_BLOCK1_AB_ERROR(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK1_AB_ERROR(a,b) "DSYMX_ABX_BLOCK1_AB_ERROR"
#define busnum_CAVM_DSYMX_ABX_BLOCK1_AB_ERROR(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK1_AB_ERROR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block1_ab_error_enable
 *
 * DSYM Block1 Ab Error Enable Register
 */
union cavm_dsymx_abx_block1_ab_error_enable
{
    uint64_t u;
    struct cavm_dsymx_abx_block1_ab_error_enable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t error_enable          : 5;  /**< [  4:  0](R/W) Error enable (when enabled over/underflow status bits get set and outputs pulsed
                                                                 when errors detected).
                                                                 0 = Not enabled.
                                                                 1 = Enabled. */
#else /* Word 0 - Little Endian */
        uint64_t error_enable          : 5;  /**< [  4:  0](R/W) Error enable (when enabled over/underflow status bits get set and outputs pulsed
                                                                 when errors detected).
                                                                 0 = Not enabled.
                                                                 1 = Enabled. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block1_ab_error_enable_s cn; */
};
typedef union cavm_dsymx_abx_block1_ab_error_enable cavm_dsymx_abx_block1_ab_error_enable_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_AB_ERROR_ENABLE(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_AB_ERROR_ENABLE(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e00040ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK1_AB_ERROR_ENABLE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK1_AB_ERROR_ENABLE(a,b) cavm_dsymx_abx_block1_ab_error_enable_t
#define bustype_CAVM_DSYMX_ABX_BLOCK1_AB_ERROR_ENABLE(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK1_AB_ERROR_ENABLE(a,b) "DSYMX_ABX_BLOCK1_AB_ERROR_ENABLE"
#define busnum_CAVM_DSYMX_ABX_BLOCK1_AB_ERROR_ENABLE(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK1_AB_ERROR_ENABLE(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block1_ab_reserved1
 *
 * DSYM Block1 Ab Reserved1 Register
 */
union cavm_dsymx_abx_block1_ab_reserved1
{
    uint64_t u;
    struct cavm_dsymx_abx_block1_ab_reserved1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t dummy                 : 1;  /**< [  0:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t dummy                 : 1;  /**< [  0:  0](R/W) Reserved. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block1_ab_reserved1_s cn; */
};
typedef union cavm_dsymx_abx_block1_ab_reserved1 cavm_dsymx_abx_block1_ab_reserved1_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_AB_RESERVED1(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_AB_RESERVED1(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e00060ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK1_AB_RESERVED1", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK1_AB_RESERVED1(a,b) cavm_dsymx_abx_block1_ab_reserved1_t
#define bustype_CAVM_DSYMX_ABX_BLOCK1_AB_RESERVED1(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK1_AB_RESERVED1(a,b) "DSYMX_ABX_BLOCK1_AB_RESERVED1"
#define busnum_CAVM_DSYMX_ABX_BLOCK1_AB_RESERVED1(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK1_AB_RESERVED1(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block1_ab_reserved2
 *
 * DSYM Block1 Ab Reserved2 Register
 */
union cavm_dsymx_abx_block1_ab_reserved2
{
    uint64_t u;
    struct cavm_dsymx_abx_block1_ab_reserved2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t dummy                 : 1;  /**< [  0:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t dummy                 : 1;  /**< [  0:  0](R/W) Reserved. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block1_ab_reserved2_s cn; */
};
typedef union cavm_dsymx_abx_block1_ab_reserved2 cavm_dsymx_abx_block1_ab_reserved2_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_AB_RESERVED2(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_AB_RESERVED2(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e00068ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK1_AB_RESERVED2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK1_AB_RESERVED2(a,b) cavm_dsymx_abx_block1_ab_reserved2_t
#define bustype_CAVM_DSYMX_ABX_BLOCK1_AB_RESERVED2(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK1_AB_RESERVED2(a,b) "DSYMX_ABX_BLOCK1_AB_RESERVED2"
#define busnum_CAVM_DSYMX_ABX_BLOCK1_AB_RESERVED2(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK1_AB_RESERVED2(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block1_ab_status
 *
 * DSYM Block1 Ab Status Register
 */
union cavm_dsymx_abx_block1_ab_status
{
    uint64_t u;
    struct cavm_dsymx_abx_block1_ab_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t busy                  : 1;  /**< [  0:  0](RO) 0' = ready, '1' = busy. */
#else /* Word 0 - Little Endian */
        uint64_t busy                  : 1;  /**< [  0:  0](RO) 0' = ready, '1' = busy. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block1_ab_status_s cn; */
};
typedef union cavm_dsymx_abx_block1_ab_status cavm_dsymx_abx_block1_ab_status_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_AB_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_AB_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e00018ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK1_AB_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK1_AB_STATUS(a,b) cavm_dsymx_abx_block1_ab_status_t
#define bustype_CAVM_DSYMX_ABX_BLOCK1_AB_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK1_AB_STATUS(a,b) "DSYMX_ABX_BLOCK1_AB_STATUS"
#define busnum_CAVM_DSYMX_ABX_BLOCK1_AB_STATUS(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK1_AB_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block1_const_ram#
 *
 * DSYM Block1 Const RAM Registers
 */
union cavm_dsymx_abx_block1_const_ramx
{
    uint64_t u;
    struct cavm_dsymx_abx_block1_const_ramx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t iq_value              : 64; /**< [ 63:  0](R/W) Constellation tables, 5 tables each with 342 (2+4+16+64+256) entries, each entry
                                                                 is 32-bit IQ value (16 bit I (15:0), 16 bit Q  (31:16)).

                                                                 One address contains two consecutive entries (32bit+32bit):
                                                                 _ Q1 = 63:48.
                                                                 _ I1 = 47:32.
                                                                 _ Q0 = 31:16.
                                                                 _ I0 = 15:0. */
#else /* Word 0 - Little Endian */
        uint64_t iq_value              : 64; /**< [ 63:  0](R/W) Constellation tables, 5 tables each with 342 (2+4+16+64+256) entries, each entry
                                                                 is 32-bit IQ value (16 bit I (15:0), 16 bit Q  (31:16)).

                                                                 One address contains two consecutive entries (32bit+32bit):
                                                                 _ Q1 = 63:48.
                                                                 _ I1 = 47:32.
                                                                 _ Q0 = 31:16.
                                                                 _ I0 = 15:0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block1_const_ramx_s cn; */
};
typedef union cavm_dsymx_abx_block1_const_ramx cavm_dsymx_abx_block1_const_ramx_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_CONST_RAMX(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_CONST_RAMX(uint64_t a, uint64_t b, uint64_t c)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3) && (c<=854)))
        return 0x87e041e00100ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3) + 8ll * ((c) & 0x3ff);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK1_CONST_RAMX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK1_CONST_RAMX(a,b,c) cavm_dsymx_abx_block1_const_ramx_t
#define bustype_CAVM_DSYMX_ABX_BLOCK1_CONST_RAMX(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK1_CONST_RAMX(a,b,c) "DSYMX_ABX_BLOCK1_CONST_RAMX"
#define busnum_CAVM_DSYMX_ABX_BLOCK1_CONST_RAMX(a,b,c) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK1_CONST_RAMX(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) dsym#_ab#_block1_errcodes
 *
 * DSYM Block1 Errcodes Register
 * 0x00A0... AB SPECIFIC, STATIC (FROM CPU).
 */
union cavm_dsymx_abx_block1_errcodes
{
    uint64_t u;
    struct cavm_dsymx_abx_block1_errcodes_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t errcode               : 32; /**< [ 31:  0](R/W/H) Debug status, internal error code bits (normally all zero), Clear-on-writeZero status register.
                                                                 _ \<0\>: Thor: AB readDMA underflow.
                                                                 _ \<1\>: Thor: AB readDMA overflow.
                                                                 _ \<3\>: Thor: AB config FIFO OVERFLOW.
                                                                 _ \<4\>: Precoder out-of inQueues for TxDiv channels.
                                                                 _ \<5\>: Busif: RefSignalGen requested for wrong channel (CH_TYPE).
                                                                 _ \<6\>: Busif: out of input data.
                                                                 _ \<7\>:  Obuffers: over/underflow when adding OFFSET_I/Q to output data (Thor B0)
                                                                 _ \<9\>:  Obuffers: OStream count mismatch (ostream=8, but no 8tx channels,
                                                                 some ostreams not written out).
                                                                 _ \<10\>:  ChConfig; 2codeword channel not enabling CHID_MASK_ENABLE.
                                                                 _ \<12\>:  Precoder: Flush needed, too much input data to Precoder.
                                                                 _ \<13\>:  Precoder number range overflow: MULT_CELL W*data complex multiplication.
                                                                 _ \<14\>:  Precoder number range overflow: FIXED_CELL U*data complex multiplication.
                                                                 _ \<15\>:  Precoder number range overflow:  NR DIAG_CELL: D*Udata complex multiplication.
                                                                 _ \<16\>:  Precoder number range overflow:  LTE DIAG_CELL output summing.
                                                                 _ \<17\>:  Precoder number range overflow: NR DIAG_CELL output summing.
                                                                 _ \<20\>:  ChParam.CHID_DATA_MASK all zeroes - not normal.
                                                                 _ \<21\>:  Precoder: "ChannelID and Mask" procudes zero for NL\>0 channel.
                                                                 _ \<22\>:  ANT vs NA config error  (4TX Channel using ANT\>4...).
                                                                 _ \<23\>:  ANT vs OSTREAM config error (4TX Channel using ANT+3\>OSTREAM).
                                                                 _ \<24\>:  Precoder number range overflow: LTE DIAG_CELL D * Udata complex multiplication.
                                                                 _ \<25\>:  Precoder number range overflow: during SCALER.
                                                                 _ \<26\>:  Obuffers: Output data count mismatch (MAX_PRB+1)*MAX_OSTREAM*12/4 writes expected.
                                                                 _ \<27\>:  Obuffers: FIFO overflow.
                                                                 _ \<28\>:  Precoder: Too many interlaved CDD channels in a symbol.
                                                                 _ \<29\>:  Precoder: Too many interlaved channels in a symbol.
                                                                 _ \<30\>:  ECC_SBE  from ConstRam.
                                                                 _ \<31\>:  ECC_DBE from ConstRam. */
#else /* Word 0 - Little Endian */
        uint64_t errcode               : 32; /**< [ 31:  0](R/W/H) Debug status, internal error code bits (normally all zero), Clear-on-writeZero status register.
                                                                 _ \<0\>: Thor: AB readDMA underflow.
                                                                 _ \<1\>: Thor: AB readDMA overflow.
                                                                 _ \<3\>: Thor: AB config FIFO OVERFLOW.
                                                                 _ \<4\>: Precoder out-of inQueues for TxDiv channels.
                                                                 _ \<5\>: Busif: RefSignalGen requested for wrong channel (CH_TYPE).
                                                                 _ \<6\>: Busif: out of input data.
                                                                 _ \<7\>:  Obuffers: over/underflow when adding OFFSET_I/Q to output data (Thor B0)
                                                                 _ \<9\>:  Obuffers: OStream count mismatch (ostream=8, but no 8tx channels,
                                                                 some ostreams not written out).
                                                                 _ \<10\>:  ChConfig; 2codeword channel not enabling CHID_MASK_ENABLE.
                                                                 _ \<12\>:  Precoder: Flush needed, too much input data to Precoder.
                                                                 _ \<13\>:  Precoder number range overflow: MULT_CELL W*data complex multiplication.
                                                                 _ \<14\>:  Precoder number range overflow: FIXED_CELL U*data complex multiplication.
                                                                 _ \<15\>:  Precoder number range overflow:  NR DIAG_CELL: D*Udata complex multiplication.
                                                                 _ \<16\>:  Precoder number range overflow:  LTE DIAG_CELL output summing.
                                                                 _ \<17\>:  Precoder number range overflow: NR DIAG_CELL output summing.
                                                                 _ \<20\>:  ChParam.CHID_DATA_MASK all zeroes - not normal.
                                                                 _ \<21\>:  Precoder: "ChannelID and Mask" procudes zero for NL\>0 channel.
                                                                 _ \<22\>:  ANT vs NA config error  (4TX Channel using ANT\>4...).
                                                                 _ \<23\>:  ANT vs OSTREAM config error (4TX Channel using ANT+3\>OSTREAM).
                                                                 _ \<24\>:  Precoder number range overflow: LTE DIAG_CELL D * Udata complex multiplication.
                                                                 _ \<25\>:  Precoder number range overflow: during SCALER.
                                                                 _ \<26\>:  Obuffers: Output data count mismatch (MAX_PRB+1)*MAX_OSTREAM*12/4 writes expected.
                                                                 _ \<27\>:  Obuffers: FIFO overflow.
                                                                 _ \<28\>:  Precoder: Too many interlaved CDD channels in a symbol.
                                                                 _ \<29\>:  Precoder: Too many interlaved channels in a symbol.
                                                                 _ \<30\>:  ECC_SBE  from ConstRam.
                                                                 _ \<31\>:  ECC_DBE from ConstRam. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block1_errcodes_s cn; */
};
typedef union cavm_dsymx_abx_block1_errcodes cavm_dsymx_abx_block1_errcodes_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_ERRCODES(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_ERRCODES(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e000a0ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK1_ERRCODES", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK1_ERRCODES(a,b) cavm_dsymx_abx_block1_errcodes_t
#define bustype_CAVM_DSYMX_ABX_BLOCK1_ERRCODES(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK1_ERRCODES(a,b) "DSYMX_ABX_BLOCK1_ERRCODES"
#define busnum_CAVM_DSYMX_ABX_BLOCK1_ERRCODES(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK1_ERRCODES(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block1_global_control
 *
 * DSYM Block1 Global Control Register
 */
union cavm_dsymx_abx_block1_global_control
{
    uint64_t u;
    struct cavm_dsymx_abx_block1_global_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_10_63        : 54;
        uint64_t dma_credit_sel        : 1;  /**< [  9:  9](R/W) Select amount of credits used in the system on WriteDMA bus.
                                                                 0 = 8 credits.
                                                                 1 = 16 credits.

                                                                 ReadDMA supports any credit amount, since hardware is always directly accepting data. */
        uint64_t zero_symalloc_ram     : 1;  /**< [  8:  8](R/W) Initialize SymbolAllocationTable RAM to zero. 0-\>1 transition will start RAM
                                                                 initialization; initialization will take 190 ns (140 clock cycles). */
        uint64_t long_zero_fill_limit  : 8;  /**< [  7:  0](R/W) Internal parameter for OBUFFER operation. Defines when ZERO-fill is treated as
                                                                 long-zero-fill. Long-zero-fill results in early BUSY signaling internally.
                                                                 ZERO_FILL_LENGTH + FIFO_LEVEL \> LONG_ZERO_FILL_LIMIT -\> BUSY. */
#else /* Word 0 - Little Endian */
        uint64_t long_zero_fill_limit  : 8;  /**< [  7:  0](R/W) Internal parameter for OBUFFER operation. Defines when ZERO-fill is treated as
                                                                 long-zero-fill. Long-zero-fill results in early BUSY signaling internally.
                                                                 ZERO_FILL_LENGTH + FIFO_LEVEL \> LONG_ZERO_FILL_LIMIT -\> BUSY. */
        uint64_t zero_symalloc_ram     : 1;  /**< [  8:  8](R/W) Initialize SymbolAllocationTable RAM to zero. 0-\>1 transition will start RAM
                                                                 initialization; initialization will take 190 ns (140 clock cycles). */
        uint64_t dma_credit_sel        : 1;  /**< [  9:  9](R/W) Select amount of credits used in the system on WriteDMA bus.
                                                                 0 = 8 credits.
                                                                 1 = 16 credits.

                                                                 ReadDMA supports any credit amount, since hardware is always directly accepting data. */
        uint64_t reserved_10_63        : 54;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block1_global_control_s cn; */
};
typedef union cavm_dsymx_abx_block1_global_control cavm_dsymx_abx_block1_global_control_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_GLOBAL_CONTROL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_GLOBAL_CONTROL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e000e0ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK1_GLOBAL_CONTROL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK1_GLOBAL_CONTROL(a,b) cavm_dsymx_abx_block1_global_control_t
#define bustype_CAVM_DSYMX_ABX_BLOCK1_GLOBAL_CONTROL(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK1_GLOBAL_CONTROL(a,b) "DSYMX_ABX_BLOCK1_GLOBAL_CONTROL"
#define busnum_CAVM_DSYMX_ABX_BLOCK1_GLOBAL_CONTROL(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK1_GLOBAL_CONTROL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block1_hab_ecc_dbe
 *
 * DSYM Block1 Hab Ecc Dbe Register
 */
union cavm_dsymx_abx_block1_hab_ecc_dbe
{
    uint64_t u;
    struct cavm_dsymx_abx_block1_hab_ecc_dbe_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t const_ram             : 1;  /**< [  0:  0](R/W/H) Two-bit error detected by constellation RAM ECC (clear-on-write). */
#else /* Word 0 - Little Endian */
        uint64_t const_ram             : 1;  /**< [  0:  0](R/W/H) Two-bit error detected by constellation RAM ECC (clear-on-write). */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block1_hab_ecc_dbe_s cn; */
};
typedef union cavm_dsymx_abx_block1_hab_ecc_dbe cavm_dsymx_abx_block1_hab_ecc_dbe_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_HAB_ECC_DBE(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_HAB_ECC_DBE(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e00078ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK1_HAB_ECC_DBE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK1_HAB_ECC_DBE(a,b) cavm_dsymx_abx_block1_hab_ecc_dbe_t
#define bustype_CAVM_DSYMX_ABX_BLOCK1_HAB_ECC_DBE(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK1_HAB_ECC_DBE(a,b) "DSYMX_ABX_BLOCK1_HAB_ECC_DBE"
#define busnum_CAVM_DSYMX_ABX_BLOCK1_HAB_ECC_DBE(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK1_HAB_ECC_DBE(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block1_hab_ecc_sbe
 *
 * DSYM Block1 Hab Ecc Sbe Register
 */
union cavm_dsymx_abx_block1_hab_ecc_sbe
{
    uint64_t u;
    struct cavm_dsymx_abx_block1_hab_ecc_sbe_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t const_ram             : 1;  /**< [  0:  0](R/W/H) Single-bit error detected by constellation RAM ECC (clear-on-write). */
#else /* Word 0 - Little Endian */
        uint64_t const_ram             : 1;  /**< [  0:  0](R/W/H) Single-bit error detected by constellation RAM ECC (clear-on-write). */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block1_hab_ecc_sbe_s cn; */
};
typedef union cavm_dsymx_abx_block1_hab_ecc_sbe cavm_dsymx_abx_block1_hab_ecc_sbe_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_HAB_ECC_SBE(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_HAB_ECC_SBE(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e00070ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK1_HAB_ECC_SBE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK1_HAB_ECC_SBE(a,b) cavm_dsymx_abx_block1_hab_ecc_sbe_t
#define bustype_CAVM_DSYMX_ABX_BLOCK1_HAB_ECC_SBE(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK1_HAB_ECC_SBE(a,b) "DSYMX_ABX_BLOCK1_HAB_ECC_SBE"
#define busnum_CAVM_DSYMX_ABX_BLOCK1_HAB_ECC_SBE(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK1_HAB_ECC_SBE(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block1_id
 *
 * DSYM Block1 Id Register
 * Identification register.
 */
union cavm_dsymx_abx_block1_id
{
    uint64_t u;
    struct cavm_dsymx_abx_block1_id_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t moduleid              : 32; /**< [ 31:  0](R/W) 0x0 = 32'h55555555 Synchronization word 0     Sync0.
                                                                 0x1 = 32'hAAAAAAAA Synchronization word 1     Sync1.
                                                                 0x2 = 32'h0002fe60 Component code             CompCode.
                                                                 0x3 = 32'h00000001 Version number             Version.
                                                                 0x4 = BUILDNUM_G Build number               Build.
                                                                 0x5 = 32'h55555555 Synchronization word 0     Sync0.

                                                                 Write: The ID pointer is defined by writing the three LSBs. The default value of
                                                                 the ID pointer is zero.
                                                                 Read: When the ID register is read the ID field pointed by the ID pointer is
                                                                 returned. After a read the ID pointer is automatically incremented by one. */
#else /* Word 0 - Little Endian */
        uint64_t moduleid              : 32; /**< [ 31:  0](R/W) 0x0 = 32'h55555555 Synchronization word 0     Sync0.
                                                                 0x1 = 32'hAAAAAAAA Synchronization word 1     Sync1.
                                                                 0x2 = 32'h0002fe60 Component code             CompCode.
                                                                 0x3 = 32'h00000001 Version number             Version.
                                                                 0x4 = BUILDNUM_G Build number               Build.
                                                                 0x5 = 32'h55555555 Synchronization word 0     Sync0.

                                                                 Write: The ID pointer is defined by writing the three LSBs. The default value of
                                                                 the ID pointer is zero.
                                                                 Read: When the ID register is read the ID field pointed by the ID pointer is
                                                                 returned. After a read the ID pointer is automatically incremented by one. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block1_id_s cn; */
};
typedef union cavm_dsymx_abx_block1_id cavm_dsymx_abx_block1_id_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_ID(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_ID(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e000c0ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK1_ID", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK1_ID(a,b) cavm_dsymx_abx_block1_id_t
#define bustype_CAVM_DSYMX_ABX_BLOCK1_ID(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK1_ID(a,b) "DSYMX_ABX_BLOCK1_ID"
#define busnum_CAVM_DSYMX_ABX_BLOCK1_ID(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK1_ID(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block1_max_time_status
 *
 * DSYM Block1 Max Time Status Register
 */
union cavm_dsymx_abx_block1_max_time_status
{
    uint64_t u;
    struct cavm_dsymx_abx_block1_max_time_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t max_sym_gen_time      : 20; /**< [ 19:  0](RO) Max value seen in [SYM_GEN_TIME] since previous asynchronous reset of the block. */
#else /* Word 0 - Little Endian */
        uint64_t max_sym_gen_time      : 20; /**< [ 19:  0](RO) Max value seen in [SYM_GEN_TIME] since previous asynchronous reset of the block. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block1_max_time_status_s cn; */
};
typedef union cavm_dsymx_abx_block1_max_time_status cavm_dsymx_abx_block1_max_time_status_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_MAX_TIME_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_MAX_TIME_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e000b8ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK1_MAX_TIME_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK1_MAX_TIME_STATUS(a,b) cavm_dsymx_abx_block1_max_time_status_t
#define bustype_CAVM_DSYMX_ABX_BLOCK1_MAX_TIME_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK1_MAX_TIME_STATUS(a,b) "DSYMX_ABX_BLOCK1_MAX_TIME_STATUS"
#define busnum_CAVM_DSYMX_ABX_BLOCK1_MAX_TIME_STATUS(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK1_MAX_TIME_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block1_nfat_error_enable
 *
 * DSYM Block1 Nfat Error Enable Register
 */
union cavm_dsymx_abx_block1_nfat_error_enable
{
    uint64_t u;
    struct cavm_dsymx_abx_block1_nfat_error_enable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t clr_nfat_status       : 1;  /**< [ 32: 32](R/W) Clear DSYM()_AB()_BLOCK1_NFAT_STATUS register. */
        uint64_t error_enable          : 32; /**< [ 31:  0](R/W) Error enable (when enabled overflow/underflow outputs pulsed when errors detected,
                                                                 status bits get set regardless of the [ERROR_ENABLE] bits).
                                                                 0 = Not enabled.
                                                                 1 = Enabled. */
#else /* Word 0 - Little Endian */
        uint64_t error_enable          : 32; /**< [ 31:  0](R/W) Error enable (when enabled overflow/underflow outputs pulsed when errors detected,
                                                                 status bits get set regardless of the [ERROR_ENABLE] bits).
                                                                 0 = Not enabled.
                                                                 1 = Enabled. */
        uint64_t clr_nfat_status       : 1;  /**< [ 32: 32](R/W) Clear DSYM()_AB()_BLOCK1_NFAT_STATUS register. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block1_nfat_error_enable_s cn; */
};
typedef union cavm_dsymx_abx_block1_nfat_error_enable cavm_dsymx_abx_block1_nfat_error_enable_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_NFAT_ERROR_ENABLE(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_NFAT_ERROR_ENABLE(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e000d0ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK1_NFAT_ERROR_ENABLE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK1_NFAT_ERROR_ENABLE(a,b) cavm_dsymx_abx_block1_nfat_error_enable_t
#define bustype_CAVM_DSYMX_ABX_BLOCK1_NFAT_ERROR_ENABLE(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK1_NFAT_ERROR_ENABLE(a,b) "DSYMX_ABX_BLOCK1_NFAT_ERROR_ENABLE"
#define busnum_CAVM_DSYMX_ABX_BLOCK1_NFAT_ERROR_ENABLE(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK1_NFAT_ERROR_ENABLE(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block1_nfat_status
 *
 * DSYM Block1 Nfat Status Register
 */
union cavm_dsymx_abx_block1_nfat_status
{
    uint64_t u;
    struct cavm_dsymx_abx_block1_nfat_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t jobid                 : 16; /**< [ 31: 16](RO) First JOBID incrementing [DISABLED_COUNTER]. */
        uint64_t disabled_counter      : 16; /**< [ 15:  0](RO) Counter for disabled [ERRCODE] pulses. */
#else /* Word 0 - Little Endian */
        uint64_t disabled_counter      : 16; /**< [ 15:  0](RO) Counter for disabled [ERRCODE] pulses. */
        uint64_t jobid                 : 16; /**< [ 31: 16](RO) First JOBID incrementing [DISABLED_COUNTER]. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block1_nfat_status_s cn; */
};
typedef union cavm_dsymx_abx_block1_nfat_status cavm_dsymx_abx_block1_nfat_status_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_NFAT_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_NFAT_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e000d8ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK1_NFAT_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK1_NFAT_STATUS(a,b) cavm_dsymx_abx_block1_nfat_status_t
#define bustype_CAVM_DSYMX_ABX_BLOCK1_NFAT_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK1_NFAT_STATUS(a,b) "DSYMX_ABX_BLOCK1_NFAT_STATUS"
#define busnum_CAVM_DSYMX_ABX_BLOCK1_NFAT_STATUS(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK1_NFAT_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block1_ofifo_ctrl
 *
 * DSYM Block1 OFIFO Control Register
 */
union cavm_dsymx_abx_block1_ofifo_ctrl
{
    uint64_t u;
    struct cavm_dsymx_abx_block1_ofifo_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t ofifo_headroom        : 8;  /**< [  7:  0](R/W) THOR B0: Internal control, use reset value. BUFFERS Fifo depth is 90 words,
                                                                 this control word sets level at which OBUFFERS signals BUSY for the signal processing path. */
#else /* Word 0 - Little Endian */
        uint64_t ofifo_headroom        : 8;  /**< [  7:  0](R/W) THOR B0: Internal control, use reset value. BUFFERS Fifo depth is 90 words,
                                                                 this control word sets level at which OBUFFERS signals BUSY for the signal processing path. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block1_ofifo_ctrl_s cn; */
};
typedef union cavm_dsymx_abx_block1_ofifo_ctrl cavm_dsymx_abx_block1_ofifo_ctrl_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_OFIFO_CTRL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_OFIFO_CTRL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e000e8ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK1_OFIFO_CTRL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK1_OFIFO_CTRL(a,b) cavm_dsymx_abx_block1_ofifo_ctrl_t
#define bustype_CAVM_DSYMX_ABX_BLOCK1_OFIFO_CTRL(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK1_OFIFO_CTRL(a,b) "DSYMX_ABX_BLOCK1_OFIFO_CTRL"
#define busnum_CAVM_DSYMX_ABX_BLOCK1_OFIFO_CTRL(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK1_OFIFO_CTRL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block1_ostatus
 *
 * DSYM Block1 Ostatus Register
 */
union cavm_dsymx_abx_block1_ostatus
{
    uint64_t u;
    struct cavm_dsymx_abx_block1_ostatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t raminit_done          : 1;  /**< [  8:  8](RO) Status of SymbolAllocation RAM initialization to zero (started by writing
                                                                 [ZERO_SYMALLOC_RAM] high).
                                                                 0 = RAM init ongoing or not started.
                                                                 1 = RAM init completed. */
        uint64_t car_done              : 8;  /**< [  7:  0](RO) Carrier-specific output symbol written out. Every time one whole symbol is
                                                                 written to output bus, a bit in this status register is inverted from its
                                                                 previous value. */
#else /* Word 0 - Little Endian */
        uint64_t car_done              : 8;  /**< [  7:  0](RO) Carrier-specific output symbol written out. Every time one whole symbol is
                                                                 written to output bus, a bit in this status register is inverted from its
                                                                 previous value. */
        uint64_t raminit_done          : 1;  /**< [  8:  8](RO) Status of SymbolAllocation RAM initialization to zero (started by writing
                                                                 [ZERO_SYMALLOC_RAM] high).
                                                                 0 = RAM init ongoing or not started.
                                                                 1 = RAM init completed. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block1_ostatus_s cn; */
};
typedef union cavm_dsymx_abx_block1_ostatus cavm_dsymx_abx_block1_ostatus_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_OSTATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_OSTATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e000a8ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK1_OSTATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK1_OSTATUS(a,b) cavm_dsymx_abx_block1_ostatus_t
#define bustype_CAVM_DSYMX_ABX_BLOCK1_OSTATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK1_OSTATUS(a,b) "DSYMX_ABX_BLOCK1_OSTATUS"
#define busnum_CAVM_DSYMX_ABX_BLOCK1_OSTATUS(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK1_OSTATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block1_time_status
 *
 * DSYM Block1 Time Status Register
 */
union cavm_dsymx_abx_block1_time_status
{
    uint64_t u;
    struct cavm_dsymx_abx_block1_time_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t job_wait_states       : 16; /**< [ 47: 32](RO) Number of clock cycles used to wait output bus access during previous one symbol job. */
        uint64_t reserved_20_31        : 12;
        uint64_t sym_gen_time          : 20; /**< [ 19:  0](RO) Number of clock cycles used to process previous one symbol job. */
#else /* Word 0 - Little Endian */
        uint64_t sym_gen_time          : 20; /**< [ 19:  0](RO) Number of clock cycles used to process previous one symbol job. */
        uint64_t reserved_20_31        : 12;
        uint64_t job_wait_states       : 16; /**< [ 47: 32](RO) Number of clock cycles used to wait output bus access during previous one symbol job. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block1_time_status_s cn; */
};
typedef union cavm_dsymx_abx_block1_time_status cavm_dsymx_abx_block1_time_status_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_TIME_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_TIME_STATUS(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e000b0ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK1_TIME_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK1_TIME_STATUS(a,b) cavm_dsymx_abx_block1_time_status_t
#define bustype_CAVM_DSYMX_ABX_BLOCK1_TIME_STATUS(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK1_TIME_STATUS(a,b) "DSYMX_ABX_BLOCK1_TIME_STATUS"
#define busnum_CAVM_DSYMX_ABX_BLOCK1_TIME_STATUS(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK1_TIME_STATUS(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block1_timing_ev
 *
 * DSYM Block1 Timing Ev Register
 * Not used.
 */
union cavm_dsymx_abx_block1_timing_ev
{
    uint64_t u;
    struct cavm_dsymx_abx_block1_timing_ev_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t addr                  : 16; /**< [ 31: 16](R/W) Not used. */
        uint64_t reserved_8_15         : 8;
        uint64_t streamid              : 8;  /**< [  7:  0](R/W) Not used. */
#else /* Word 0 - Little Endian */
        uint64_t streamid              : 8;  /**< [  7:  0](R/W) Not used. */
        uint64_t reserved_8_15         : 8;
        uint64_t addr                  : 16; /**< [ 31: 16](R/W) Not used. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block1_timing_ev_s cn; */
};
typedef union cavm_dsymx_abx_block1_timing_ev cavm_dsymx_abx_block1_timing_ev_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_TIMING_EV(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK1_TIMING_EV(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e000c8ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK1_TIMING_EV", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK1_TIMING_EV(a,b) cavm_dsymx_abx_block1_timing_ev_t
#define bustype_CAVM_DSYMX_ABX_BLOCK1_TIMING_EV(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK1_TIMING_EV(a,b) "DSYMX_ABX_BLOCK1_TIMING_EV"
#define busnum_CAVM_DSYMX_ABX_BLOCK1_TIMING_EV(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK1_TIMING_EV(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block2_codebookwr_config
 *
 * DSYM Block2 Codebookwr Config Register
 * TO BE RENAMED: SEC_LEN_CTRL.
 * Hardware loads a portion of the job configuration in this register. Software should
 * never directly write to this register.
 */
union cavm_dsymx_abx_block2_codebookwr_config
{
    uint64_t u;
    struct cavm_dsymx_abx_block2_codebookwr_config_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t extra_length          : 8;  /**< [ 63: 56](R/W) Total number of 256-bit words in extra section.
                                                                   0x0 = No extra section.
                                                                   0x1 = 1 * 256bits of extra section.
                                                                   0x2 = 2 * 256bits of extra section.
                                                                   ...
                                                                   0xFF = 255 * 256bits of extra section. */
        uint64_t reserved_51_55        : 5;
        uint64_t cba_length            : 10; /**< [ 50: 41](R/W) Total number of 256bit words of ChannelBasedAllocation (Continuous RE
                                                                 allocation, Continuous PRB allocation and RGB Mask allocation).
                                                                   0x0 = no CBA words.
                                                                   0x1 = 1 * 256bits of CBA.
                                                                   0x2 = 2 * 256bits of CBA.
                                                                   ...
                                                                   0x3FF = 1023 * 256bits of CBA. */
        uint64_t symalloc_prb_num      : 9;  /**< [ 40: 32](R/W) SymbolAllocSection total number of PRBs.
                                                                   0x0 = 0 PRBs.
                                                                   0x1 = 1 PRB.
                                                                   0x2 =  2PRBs.
                                                                   ...
                                                                   0x111 = 273 PRBs.
                                                                   0x112 = 274 PRBs.
                                                                   0x113 = 275 PRBs. */
        uint64_t reserved_25_31        : 7;
        uint64_t symalloc_prb_first    : 9;  /**< [ 24: 16](R/W) Coming, SymbolAllocSection first target PRB.
                                                                   0x0 = PRB0.
                                                                   0x1 = PRB1.
                                                                   ...
                                                                   0x110 = PRB272.
                                                                   0x111 = PRB273.
                                                                   0x112 = PRB274. */
        uint64_t length                : 16; /**< [ 15:  0](R/W) Length of codebooks section on ReadDMA, 0=no codebooks, 1=256 bits, 2=512 bits, etc. */
#else /* Word 0 - Little Endian */
        uint64_t length                : 16; /**< [ 15:  0](R/W) Length of codebooks section on ReadDMA, 0=no codebooks, 1=256 bits, 2=512 bits, etc. */
        uint64_t symalloc_prb_first    : 9;  /**< [ 24: 16](R/W) Coming, SymbolAllocSection first target PRB.
                                                                   0x0 = PRB0.
                                                                   0x1 = PRB1.
                                                                   ...
                                                                   0x110 = PRB272.
                                                                   0x111 = PRB273.
                                                                   0x112 = PRB274. */
        uint64_t reserved_25_31        : 7;
        uint64_t symalloc_prb_num      : 9;  /**< [ 40: 32](R/W) SymbolAllocSection total number of PRBs.
                                                                   0x0 = 0 PRBs.
                                                                   0x1 = 1 PRB.
                                                                   0x2 =  2PRBs.
                                                                   ...
                                                                   0x111 = 273 PRBs.
                                                                   0x112 = 274 PRBs.
                                                                   0x113 = 275 PRBs. */
        uint64_t cba_length            : 10; /**< [ 50: 41](R/W) Total number of 256bit words of ChannelBasedAllocation (Continuous RE
                                                                 allocation, Continuous PRB allocation and RGB Mask allocation).
                                                                   0x0 = no CBA words.
                                                                   0x1 = 1 * 256bits of CBA.
                                                                   0x2 = 2 * 256bits of CBA.
                                                                   ...
                                                                   0x3FF = 1023 * 256bits of CBA. */
        uint64_t reserved_51_55        : 5;
        uint64_t extra_length          : 8;  /**< [ 63: 56](R/W) Total number of 256-bit words in extra section.
                                                                   0x0 = No extra section.
                                                                   0x1 = 1 * 256bits of extra section.
                                                                   0x2 = 2 * 256bits of extra section.
                                                                   ...
                                                                   0xFF = 255 * 256bits of extra section. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block2_codebookwr_config_s cn; */
};
typedef union cavm_dsymx_abx_block2_codebookwr_config cavm_dsymx_abx_block2_codebookwr_config_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK2_CODEBOOKWR_CONFIG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK2_CODEBOOKWR_CONFIG(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e02008ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK2_CODEBOOKWR_CONFIG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK2_CODEBOOKWR_CONFIG(a,b) cavm_dsymx_abx_block2_codebookwr_config_t
#define bustype_CAVM_DSYMX_ABX_BLOCK2_CODEBOOKWR_CONFIG(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK2_CODEBOOKWR_CONFIG(a,b) "DSYMX_ABX_BLOCK2_CODEBOOKWR_CONFIG"
#define busnum_CAVM_DSYMX_ABX_BLOCK2_CODEBOOKWR_CONFIG(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK2_CODEBOOKWR_CONFIG(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block2_gen_ctrl
 *
 * DSYM Block2 Gen Ctrl Register
 * Hardware loads a portion of the job configuration in this register. Software should
 * never directly write to this register.
 */
union cavm_dsymx_abx_block2_gen_ctrl
{
    uint64_t u;
    struct cavm_dsymx_abx_block2_gen_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t x2_scaling            : 1;  /**< [ 51: 51](R/W) Select if ChParam.SCALING and Codebook.SCALER are using 2x scale.
                                                                  0 = 0xFFFF means 1.0x scaling (range 0...1.0).
                                                                  1 = 0xFFFF means 2.0x scaling (range 0...2.0). */
        uint64_t precoder_odd_subcar   : 1;  /**< [ 50: 50](R/W) Configure odd/even SUBCAR definition for PRECODER's PRB BUNDLE.
                                                                  0 = SUBCAR0 is odd subcarrier.
                                                                  1 = SUBCAR0 is even  subcarrier.
                                                                 Precoder internally numbers subcarriers: 0,1,2,3,..., even/odd bundles have
                                                                 different D-matrix k-parameter calculation.
                                                                 NOTE: Design error limits use to value 1 only if PRB Bundle size of 1PRB is used. */
        uint64_t enable_2nd_bps        : 1;  /**< [ 49: 49](R/W) Select if BPS_CONSTELLATION is used: 0=using BPS for both data access and
                                                                 constellation map selection, 1=using BPS for data access and BPS_CONSTELLATION
                                                                 for constellation map selection. */
        uint64_t precoder_odd_bundle   : 1;  /**< [ 48: 48](R/W) Configure odd/even definition for PRECODER's PRB BUNDLE.
                                                                  0 = Bundle0 is odd bundle.
                                                                  1 = Bundle0 is even bundle.

                                                                 Precoder internally numbers PRB bundles: 0,1,2,3,..., even/odd bundles have
                                                                 different D-matrix k-parameter calculation. */
        uint64_t ifft_size             : 16; /**< [ 47: 32](R/W) This parameters is needed for NR CDD D-matrix creation.
                                                                   4096 = 4096 point FFT.
                                                                   2048 = 2048 point FFT.
                                                                   1024 = 1024 point FFT.
                                                                   512 = 512 point FFT.
                                                                   256 = 256 point FFT.
                                                                   128 = 128 point FFT. */
        uint64_t ltemod_enable         : 1;  /**< [ 31: 31](R/W) Unused, value has no effect (internally fixed high). */
        uint64_t cdd_subcarrier_offset : 12; /**< [ 30: 19](R/W) For 5G CDD D matrix calculation, subcarrier offset for the begin 273*12
                                                                 subcarriers inside the 4096 subcarriers into IFFT. */
        uint64_t prbs_simple           : 1;  /**< [ 18: 18](R/W) When set high PRBS generator will only create incrementing data values
                                                                 (1,2,3,4,...) instead of actual PRBS pattern. */
        uint64_t reserved_16_17        : 2;
        uint64_t busif_chid_mask       : 8;  /**< [ 15:  8](R/W) BUSIF may share one data buffer with multiple ChannelIDs. This mask is ANDed
                                                                 with ChannelID to form the ID used for data buffer. Channel parameters are
                                                                 always for unmasked ChannelID. */
        uint64_t chid_mask             : 8;  /**< [  7:  0](R/W) Precoding will merge multiple ChannelIDs using this mask. This MASK value AND
                                                                 ChannelID value is the ChannelID that Precoding will handle. Needed for two
                                                                 codeword operation where for example channel2 and channel34 are masked to make
                                                                 both look like channel2.
                                                                 [CHID_MASK] is used only for NC=1 channels (2codewords). */
#else /* Word 0 - Little Endian */
        uint64_t chid_mask             : 8;  /**< [  7:  0](R/W) Precoding will merge multiple ChannelIDs using this mask. This MASK value AND
                                                                 ChannelID value is the ChannelID that Precoding will handle. Needed for two
                                                                 codeword operation where for example channel2 and channel34 are masked to make
                                                                 both look like channel2.
                                                                 [CHID_MASK] is used only for NC=1 channels (2codewords). */
        uint64_t busif_chid_mask       : 8;  /**< [ 15:  8](R/W) BUSIF may share one data buffer with multiple ChannelIDs. This mask is ANDed
                                                                 with ChannelID to form the ID used for data buffer. Channel parameters are
                                                                 always for unmasked ChannelID. */
        uint64_t reserved_16_17        : 2;
        uint64_t prbs_simple           : 1;  /**< [ 18: 18](R/W) When set high PRBS generator will only create incrementing data values
                                                                 (1,2,3,4,...) instead of actual PRBS pattern. */
        uint64_t cdd_subcarrier_offset : 12; /**< [ 30: 19](R/W) For 5G CDD D matrix calculation, subcarrier offset for the begin 273*12
                                                                 subcarriers inside the 4096 subcarriers into IFFT. */
        uint64_t ltemod_enable         : 1;  /**< [ 31: 31](R/W) Unused, value has no effect (internally fixed high). */
        uint64_t ifft_size             : 16; /**< [ 47: 32](R/W) This parameters is needed for NR CDD D-matrix creation.
                                                                   4096 = 4096 point FFT.
                                                                   2048 = 2048 point FFT.
                                                                   1024 = 1024 point FFT.
                                                                   512 = 512 point FFT.
                                                                   256 = 256 point FFT.
                                                                   128 = 128 point FFT. */
        uint64_t precoder_odd_bundle   : 1;  /**< [ 48: 48](R/W) Configure odd/even definition for PRECODER's PRB BUNDLE.
                                                                  0 = Bundle0 is odd bundle.
                                                                  1 = Bundle0 is even bundle.

                                                                 Precoder internally numbers PRB bundles: 0,1,2,3,..., even/odd bundles have
                                                                 different D-matrix k-parameter calculation. */
        uint64_t enable_2nd_bps        : 1;  /**< [ 49: 49](R/W) Select if BPS_CONSTELLATION is used: 0=using BPS for both data access and
                                                                 constellation map selection, 1=using BPS for data access and BPS_CONSTELLATION
                                                                 for constellation map selection. */
        uint64_t precoder_odd_subcar   : 1;  /**< [ 50: 50](R/W) Configure odd/even SUBCAR definition for PRECODER's PRB BUNDLE.
                                                                  0 = SUBCAR0 is odd subcarrier.
                                                                  1 = SUBCAR0 is even  subcarrier.
                                                                 Precoder internally numbers subcarriers: 0,1,2,3,..., even/odd bundles have
                                                                 different D-matrix k-parameter calculation.
                                                                 NOTE: Design error limits use to value 1 only if PRB Bundle size of 1PRB is used. */
        uint64_t x2_scaling            : 1;  /**< [ 51: 51](R/W) Select if ChParam.SCALING and Codebook.SCALER are using 2x scale.
                                                                  0 = 0xFFFF means 1.0x scaling (range 0...1.0).
                                                                  1 = 0xFFFF means 2.0x scaling (range 0...2.0). */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block2_gen_ctrl_s cn; */
};
typedef union cavm_dsymx_abx_block2_gen_ctrl cavm_dsymx_abx_block2_gen_ctrl_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK2_GEN_CTRL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK2_GEN_CTRL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e02018ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK2_GEN_CTRL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK2_GEN_CTRL(a,b) cavm_dsymx_abx_block2_gen_ctrl_t
#define bustype_CAVM_DSYMX_ABX_BLOCK2_GEN_CTRL(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK2_GEN_CTRL(a,b) "DSYMX_ABX_BLOCK2_GEN_CTRL"
#define busnum_CAVM_DSYMX_ABX_BLOCK2_GEN_CTRL(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK2_GEN_CTRL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block2_gen_ctrl2
 *
 * DSYM Block2 Gen Ctrl2 Register
 * Hardware loads a portion of the job configuration in this register. Software should
 * never directly write to this register.
 */
union cavm_dsymx_abx_block2_gen_ctrl2
{
    uint64_t u;
    struct cavm_dsymx_abx_block2_gen_ctrl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t refmap_00             : 32; /**< [ 63: 32](R/W) THOR B0: Constellation map for RefSignalGen data value 0 (I using bits 15:0, Q using bits 31:16). */
        uint64_t offset_q              : 8;  /**< [ 31: 24](R/W) THOR B0: Offset added to every output Q-sample right before DSYM output, signed number -128...127. */
        uint64_t offset_i              : 8;  /**< [ 23: 16](R/W) THOR B0: Offset added to every output I-sample right before DSYM output, signed number -128...127. */
        uint64_t unalloc_chid          : 8;  /**< [ 15:  8](R/W) THOR B0: ChannelID used to initialize AllocationRam. */
        uint64_t reserved_7            : 1;
        uint64_t chid_2cw_incr         : 7;  /**< [  6:  0](R/W) For 2codeword operation two channelIDs are needed (to deliver channel parameters
                                                                 and data), this parameter sets the fixed increment between these two IDs. NOTE:
                                                                 IDs must be masked with DSYM()_AB()_BLOCK2_GEN_CTRL[CHID_MASK] to appear as same ID; so this
                                                                 increment should be two's exponent (2^n)
                                                                 [CHID_2CW_INCR] = 255 - [CHID_MASK]. */
#else /* Word 0 - Little Endian */
        uint64_t chid_2cw_incr         : 7;  /**< [  6:  0](R/W) For 2codeword operation two channelIDs are needed (to deliver channel parameters
                                                                 and data), this parameter sets the fixed increment between these two IDs. NOTE:
                                                                 IDs must be masked with DSYM()_AB()_BLOCK2_GEN_CTRL[CHID_MASK] to appear as same ID; so this
                                                                 increment should be two's exponent (2^n)
                                                                 [CHID_2CW_INCR] = 255 - [CHID_MASK]. */
        uint64_t reserved_7            : 1;
        uint64_t unalloc_chid          : 8;  /**< [ 15:  8](R/W) THOR B0: ChannelID used to initialize AllocationRam. */
        uint64_t offset_i              : 8;  /**< [ 23: 16](R/W) THOR B0: Offset added to every output I-sample right before DSYM output, signed number -128...127. */
        uint64_t offset_q              : 8;  /**< [ 31: 24](R/W) THOR B0: Offset added to every output Q-sample right before DSYM output, signed number -128...127. */
        uint64_t refmap_00             : 32; /**< [ 63: 32](R/W) THOR B0: Constellation map for RefSignalGen data value 0 (I using bits 15:0, Q using bits 31:16). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block2_gen_ctrl2_s cn; */
};
typedef union cavm_dsymx_abx_block2_gen_ctrl2 cavm_dsymx_abx_block2_gen_ctrl2_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK2_GEN_CTRL2(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK2_GEN_CTRL2(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e02020ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK2_GEN_CTRL2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK2_GEN_CTRL2(a,b) cavm_dsymx_abx_block2_gen_ctrl2_t
#define bustype_CAVM_DSYMX_ABX_BLOCK2_GEN_CTRL2(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK2_GEN_CTRL2(a,b) "DSYMX_ABX_BLOCK2_GEN_CTRL2"
#define busnum_CAVM_DSYMX_ABX_BLOCK2_GEN_CTRL2(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK2_GEN_CTRL2(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block2_gen_ctrl3
 *
 * DSYM Block2 Gen Ctrl3 Register
 * Hardware loads a portion of the job configuration in this register. Software should
 * never directly write to this register.
 */
union cavm_dsymx_abx_block2_gen_ctrl3
{
    uint64_t u;
    struct cavm_dsymx_abx_block2_gen_ctrl3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t refmap_11             : 32; /**< [ 63: 32](R/W) THOR B0: Constellation map for RefSignalGen data value -1 (I using bits 15:0, Q using bits 31:16). */
        uint64_t refmap_01             : 32; /**< [ 31:  0](R/W) THOR B0: Constellation map for RefSignalGen data value +1 (I using bits 15:0, Q using bits 31:16). */
#else /* Word 0 - Little Endian */
        uint64_t refmap_01             : 32; /**< [ 31:  0](R/W) THOR B0: Constellation map for RefSignalGen data value +1 (I using bits 15:0, Q using bits 31:16). */
        uint64_t refmap_11             : 32; /**< [ 63: 32](R/W) THOR B0: Constellation map for RefSignalGen data value -1 (I using bits 15:0, Q using bits 31:16). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block2_gen_ctrl3_s cn; */
};
typedef union cavm_dsymx_abx_block2_gen_ctrl3 cavm_dsymx_abx_block2_gen_ctrl3_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK2_GEN_CTRL3(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK2_GEN_CTRL3(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e02028ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK2_GEN_CTRL3", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK2_GEN_CTRL3(a,b) cavm_dsymx_abx_block2_gen_ctrl3_t
#define bustype_CAVM_DSYMX_ABX_BLOCK2_GEN_CTRL3(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK2_GEN_CTRL3(a,b) "DSYMX_ABX_BLOCK2_GEN_CTRL3"
#define busnum_CAVM_DSYMX_ABX_BLOCK2_GEN_CTRL3(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK2_GEN_CTRL3(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block2_gold_seq_ctrl
 *
 * DSYM Block2 Gold Seq Ctrl Register
 * Initialization value for X1 of gold sequence generators.
 * Hardware loads a portion of the job configuration in this register. Software should
 * never directly write to this register.
 */
union cavm_dsymx_abx_block2_gold_seq_ctrl
{
    uint64_t u;
    struct cavm_dsymx_abx_block2_gold_seq_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_31_63        : 33;
        uint64_t x1_init               : 31; /**< [ 30:  0](R/W) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t x1_init               : 31; /**< [ 30:  0](R/W) Reserved. */
        uint64_t reserved_31_63        : 33;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block2_gold_seq_ctrl_s cn; */
};
typedef union cavm_dsymx_abx_block2_gold_seq_ctrl cavm_dsymx_abx_block2_gold_seq_ctrl_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK2_GOLD_SEQ_CTRL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK2_GOLD_SEQ_CTRL(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e02010ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK2_GOLD_SEQ_CTRL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK2_GOLD_SEQ_CTRL(a,b) cavm_dsymx_abx_block2_gold_seq_ctrl_t
#define bustype_CAVM_DSYMX_ABX_BLOCK2_GOLD_SEQ_CTRL(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK2_GOLD_SEQ_CTRL(a,b) "DSYMX_ABX_BLOCK2_GOLD_SEQ_CTRL"
#define busnum_CAVM_DSYMX_ABX_BLOCK2_GOLD_SEQ_CTRL(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK2_GOLD_SEQ_CTRL(a,b) (a),(b),-1,-1

/**
 * Register (RSL) dsym#_ab#_block2_symbol_config
 *
 * DSYM Block2 Symbol Config Register
 * Hardware loads a portion of the job configuration in this register. Software should
 * never directly write to this register.
 */
union cavm_dsymx_abx_block2_symbol_config
{
    uint64_t u;
    struct cavm_dsymx_abx_block2_symbol_config_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t nr_prb_offset         : 9;  /**< [ 63: 55](R/W) PRB index offset for PRB bundle creation. This number will be added to internal
                                                                 PRB number always starting from 0, when PRB bundle indexes are created. Can be
                                                                 used with "vertical symbol to multiple jobs splitting". */
        uint64_t ch_alloc_len          : 15; /**< [ 54: 40](R/W) Unused, value has no effect (internally left unconnected). */
        uint64_t reserved_36_39        : 4;
        uint64_t mode_prb_wise         : 1;  /**< [ 35: 35](R/W) Output data ordering.
                                                                 0 = Thor A0 mode, unallocated zero-data written in bursts as-late-as possible
                                                                 (with allocated PRB), four-RE-level zero-fill evaluation.
                                                                 1 = PRB-to-PRB WriteDMA operation, all streams (regardless of allocation)
                                                                 progress same pace, PRB-level zero-fill evaluation. */
        uint64_t req_also_chid0        : 1;  /**< [ 34: 34](R/W) DO NOT USE, always 0, Thor B0: Request also ChannelID 0 from data path (when
                                                                 this bit set 1), otherwise Channel ID0 output data (zero IQ) is generated at the
                                                                 OBUFFERS (speeds up operation, but WriteDMA is not output in simple order, ie
                                                                 some streams advance much further before some others). */
        uint64_t iq_swap               : 1;  /**< [ 33: 33](R/W) Output data I/Q swap.
                                                                   0 = No I/Q swap (I=bit 15:0, Q=bits 31:16).
                                                                   1 = I/Q swapped (Q=bit 15:0, I=bits 31:16). */
        uint64_t ch_based_alloc        : 1;  /**< [ 32: 32](R/W) ChannelAllocation section on ReadDMA contains.
                                                                   0 = Full Symbol contents (ChannelIDs for every subcrrier & prb).
                                                                   1 = ChannelBased Allocations. */
        uint64_t enable                : 1;  /**< [ 31: 31](R/W) Unused; value has no effect (internally fixed high). */
        uint64_t tx_on_off             : 1;  /**< [ 30: 30](R/W) TX On(1)/off(0) selection. In off-state, all output I&Q value is replaced by 0. */
        uint64_t cb_wr_en              : 1;  /**< [ 29: 29](R/W) Unused, value has no effect (internally left unconnected). */
        uint64_t zero_fill_disable     : 1;  /**< [ 28: 28](R/W) Select if output data stream contains zero-valued output values for sections not
                                                                 allocated to non-zero ChannelIDs.
                                                                  1 = Zero output disabled.
                                                                  0 = Zero output enabled. */
        uint64_t max_ostream           : 4;  /**< [ 27: 24](R/W) Number of output stream in next symbol. Range 1, 2, 4, 8. */
        uint64_t max_ch                : 8;  /**< [ 23: 16](R/W) Number of channels in channel parameters section. Range 0...127. */
        uint64_t reserved_13_15        : 3;
        uint64_t max_prb               : 9;  /**< [ 12:  4](R/W) Number of PRBs in symbol -1. Range 0..279. */
        uint64_t max_subcarrier        : 4;  /**< [  3:  0](R/W) Number of subcarriers in PRB - 1. Range 0..11. */
#else /* Word 0 - Little Endian */
        uint64_t max_subcarrier        : 4;  /**< [  3:  0](R/W) Number of subcarriers in PRB - 1. Range 0..11. */
        uint64_t max_prb               : 9;  /**< [ 12:  4](R/W) Number of PRBs in symbol -1. Range 0..279. */
        uint64_t reserved_13_15        : 3;
        uint64_t max_ch                : 8;  /**< [ 23: 16](R/W) Number of channels in channel parameters section. Range 0...127. */
        uint64_t max_ostream           : 4;  /**< [ 27: 24](R/W) Number of output stream in next symbol. Range 1, 2, 4, 8. */
        uint64_t zero_fill_disable     : 1;  /**< [ 28: 28](R/W) Select if output data stream contains zero-valued output values for sections not
                                                                 allocated to non-zero ChannelIDs.
                                                                  1 = Zero output disabled.
                                                                  0 = Zero output enabled. */
        uint64_t cb_wr_en              : 1;  /**< [ 29: 29](R/W) Unused, value has no effect (internally left unconnected). */
        uint64_t tx_on_off             : 1;  /**< [ 30: 30](R/W) TX On(1)/off(0) selection. In off-state, all output I&Q value is replaced by 0. */
        uint64_t enable                : 1;  /**< [ 31: 31](R/W) Unused; value has no effect (internally fixed high). */
        uint64_t ch_based_alloc        : 1;  /**< [ 32: 32](R/W) ChannelAllocation section on ReadDMA contains.
                                                                   0 = Full Symbol contents (ChannelIDs for every subcrrier & prb).
                                                                   1 = ChannelBased Allocations. */
        uint64_t iq_swap               : 1;  /**< [ 33: 33](R/W) Output data I/Q swap.
                                                                   0 = No I/Q swap (I=bit 15:0, Q=bits 31:16).
                                                                   1 = I/Q swapped (Q=bit 15:0, I=bits 31:16). */
        uint64_t req_also_chid0        : 1;  /**< [ 34: 34](R/W) DO NOT USE, always 0, Thor B0: Request also ChannelID 0 from data path (when
                                                                 this bit set 1), otherwise Channel ID0 output data (zero IQ) is generated at the
                                                                 OBUFFERS (speeds up operation, but WriteDMA is not output in simple order, ie
                                                                 some streams advance much further before some others). */
        uint64_t mode_prb_wise         : 1;  /**< [ 35: 35](R/W) Output data ordering.
                                                                 0 = Thor A0 mode, unallocated zero-data written in bursts as-late-as possible
                                                                 (with allocated PRB), four-RE-level zero-fill evaluation.
                                                                 1 = PRB-to-PRB WriteDMA operation, all streams (regardless of allocation)
                                                                 progress same pace, PRB-level zero-fill evaluation. */
        uint64_t reserved_36_39        : 4;
        uint64_t ch_alloc_len          : 15; /**< [ 54: 40](R/W) Unused, value has no effect (internally left unconnected). */
        uint64_t nr_prb_offset         : 9;  /**< [ 63: 55](R/W) PRB index offset for PRB bundle creation. This number will be added to internal
                                                                 PRB number always starting from 0, when PRB bundle indexes are created. Can be
                                                                 used with "vertical symbol to multiple jobs splitting". */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_dsymx_abx_block2_symbol_config_s cn; */
};
typedef union cavm_dsymx_abx_block2_symbol_config cavm_dsymx_abx_block2_symbol_config_t;

static inline uint64_t CAVM_DSYMX_ABX_BLOCK2_SYMBOL_CONFIG(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_DSYMX_ABX_BLOCK2_SYMBOL_CONFIG(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_ODINMP) && ((a<=3) && (b<=3)))
        return 0x87e041e02000ll + 0x80000ll * ((a) & 0x3) + 0x10000ll * ((b) & 0x3);
    __cavm_csr_fatal("DSYMX_ABX_BLOCK2_SYMBOL_CONFIG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_DSYMX_ABX_BLOCK2_SYMBOL_CONFIG(a,b) cavm_dsymx_abx_block2_symbol_config_t
#define bustype_CAVM_DSYMX_ABX_BLOCK2_SYMBOL_CONFIG(a,b) CSR_TYPE_RSL
#define basename_CAVM_DSYMX_ABX_BLOCK2_SYMBOL_CONFIG(a,b) "DSYMX_ABX_BLOCK2_SYMBOL_CONFIG"
#define busnum_CAVM_DSYMX_ABX_BLOCK2_SYMBOL_CONFIG(a,b) (a)
#define arguments_CAVM_DSYMX_ABX_BLOCK2_SYMBOL_CONFIG(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_DSYM_H__ */
