#ifndef __CAVM_CSRS_MASI_H__
#define __CAVM_CSRS_MASI_H__
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
 * MASI.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (MULTIRSL32b) masi#_axi_error_addr
 *
 * MASI AXI Master Error Address Register
 * Latest AXI error address.  Cleared on read.
 */
union cavm_masix_axi_error_addr
{
    uint32_t u;
    struct cavm_masix_axi_error_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t address               : 32; /**< [ 31:  0](RC/H) Address for the failed AXI transfer. Valid only if MASI()_AXI_ERROR_RESP[READ] or [WRITE] is set. */
#else /* Word 0 - Little Endian */
        uint32_t address               : 32; /**< [ 31:  0](RC/H) Address for the failed AXI transfer. Valid only if MASI()_AXI_ERROR_RESP[READ] or [WRITE] is set. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_masix_axi_error_addr_s cn; */
};
typedef union cavm_masix_axi_error_addr cavm_masix_axi_error_addr_t;

static inline uint64_t CAVM_MASIX_AXI_ERROR_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MASIX_AXI_ERROR_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a>=32)&&(a<=47)))
        return 0x87e04400c040ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MASIX_AXI_ERROR_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MASIX_AXI_ERROR_ADDR(a) cavm_masix_axi_error_addr_t
#define bustype_CAVM_MASIX_AXI_ERROR_ADDR(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MASIX_AXI_ERROR_ADDR(a) "MASIX_AXI_ERROR_ADDR"
#define busnum_CAVM_MASIX_AXI_ERROR_ADDR(a) (a)
#define arguments_CAVM_MASIX_AXI_ERROR_ADDR(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) masi#_axi_error_data
 *
 * MASI AXI Master Error Data Register
 * Latest AXI error data.  Cleared on read.
 */
union cavm_masix_axi_error_data
{
    uint32_t u;
    struct cavm_masix_axi_error_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RC/H) Data for the failed AXI transfer. Valid only if MASI()_AXI_ERROR_RESP[WRITE] is set. */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RC/H) Data for the failed AXI transfer. Valid only if MASI()_AXI_ERROR_RESP[WRITE] is set. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_masix_axi_error_data_s cn; */
};
typedef union cavm_masix_axi_error_data cavm_masix_axi_error_data_t;

static inline uint64_t CAVM_MASIX_AXI_ERROR_DATA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MASIX_AXI_ERROR_DATA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a>=32)&&(a<=47)))
        return 0x87e04400c050ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MASIX_AXI_ERROR_DATA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MASIX_AXI_ERROR_DATA(a) cavm_masix_axi_error_data_t
#define bustype_CAVM_MASIX_AXI_ERROR_DATA(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MASIX_AXI_ERROR_DATA(a) "MASIX_AXI_ERROR_DATA"
#define busnum_CAVM_MASIX_AXI_ERROR_DATA(a) (a)
#define arguments_CAVM_MASIX_AXI_ERROR_DATA(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) masi#_axi_error_resp
 *
 * MASI AXI Master Protocol Responses Register
 * Latest AXI protocol responses. Cleared on read.
 */
union cavm_masix_axi_error_resp
{
    uint32_t u;
    struct cavm_masix_axi_error_resp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t read                  : 1;  /**< [ 31: 31](RC/H) 0 = No RRESP latched.
                                                                 1 = Read access response latched. */
        uint32_t write                 : 1;  /**< [ 30: 30](RC/H) 0 = No BRESP latched.
                                                                 1 = Write access response latched. */
        uint32_t xresp                 : 2;  /**< [ 29: 28](RC/H) RRESP or BRESP, see bits [31:30]. */
        uint32_t xid                   : 4;  /**< [ 27: 24](RC/H) Unsupported RID or BID, see bits [31:30]. */
        uint32_t reserved_0_23         : 24;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_23         : 24;
        uint32_t xid                   : 4;  /**< [ 27: 24](RC/H) Unsupported RID or BID, see bits [31:30]. */
        uint32_t xresp                 : 2;  /**< [ 29: 28](RC/H) RRESP or BRESP, see bits [31:30]. */
        uint32_t write                 : 1;  /**< [ 30: 30](RC/H) 0 = No BRESP latched.
                                                                 1 = Write access response latched. */
        uint32_t read                  : 1;  /**< [ 31: 31](RC/H) 0 = No RRESP latched.
                                                                 1 = Read access response latched. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_masix_axi_error_resp_s cn; */
};
typedef union cavm_masix_axi_error_resp cavm_masix_axi_error_resp_t;

static inline uint64_t CAVM_MASIX_AXI_ERROR_RESP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MASIX_AXI_ERROR_RESP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a>=32)&&(a<=47)))
        return 0x87e04400c030ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MASIX_AXI_ERROR_RESP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MASIX_AXI_ERROR_RESP(a) cavm_masix_axi_error_resp_t
#define bustype_CAVM_MASIX_AXI_ERROR_RESP(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MASIX_AXI_ERROR_RESP(a) "MASIX_AXI_ERROR_RESP"
#define busnum_CAVM_MASIX_AXI_ERROR_RESP(a) (a)
#define arguments_CAVM_MASIX_AXI_ERROR_RESP(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) masi#_id
 *
 * MASI Identification Register
 * MASI ID register.
 */
union cavm_masix_id
{
    uint32_t u;
    struct cavm_masix_id_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t moduleid              : 32; /**< [ 31:  0](RO) MASI ID register - read only. */
#else /* Word 0 - Little Endian */
        uint32_t moduleid              : 32; /**< [ 31:  0](RO) MASI ID register - read only. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_masix_id_s cn; */
};
typedef union cavm_masix_id cavm_masix_id_t;

static inline uint64_t CAVM_MASIX_ID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MASIX_ID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a>=32)&&(a<=47)))
        return 0x87e04400c000ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MASIX_ID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MASIX_ID(a) cavm_masix_id_t
#define bustype_CAVM_MASIX_ID(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MASIX_ID(a) "MASIX_ID"
#define busnum_CAVM_MASIX_ID(a) (a)
#define arguments_CAVM_MASIX_ID(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) masi#_imem_ecc
 *
 * MASI IMEM ECC Error Indication Register
 * IMEM ECC error indication.
 */
union cavm_masix_imem_ecc
{
    uint32_t u;
    struct cavm_masix_imem_ecc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t ram7_ded              : 1;  /**< [ 15: 15](RO/H) 0 = No error.
                                                                 1 = Double-bit error detected. */
        uint32_t ram6_ded              : 1;  /**< [ 14: 14](RO/H) 0 = No error.
                                                                 1 = Double-bit error detected. */
        uint32_t ram5_ded              : 1;  /**< [ 13: 13](RO/H) 0 = No error.
                                                                 1 = Double-bit error detected. */
        uint32_t ram4_ded              : 1;  /**< [ 12: 12](RO/H) 0 = No error.
                                                                 1 = Double-bit error detected. */
        uint32_t ram3_ded              : 1;  /**< [ 11: 11](RO/H) 0 = No error.
                                                                 1 = Double-bit error detected. */
        uint32_t ram2_ded              : 1;  /**< [ 10: 10](RO/H) 0 = No error.
                                                                 1 = Double-bit error detected. */
        uint32_t ram1_ded              : 1;  /**< [  9:  9](RO/H) 0 = No error.
                                                                 1 = Double-bit error detected. */
        uint32_t ram0_ded              : 1;  /**< [  8:  8](RO/H) 0 = No error.
                                                                 1 = Double-bit error detected. */
        uint32_t ram7_sed              : 1;  /**< [  7:  7](RO/H) 0 = No error.
                                                                 1 = Single-bit error detected. */
        uint32_t ram6_sed              : 1;  /**< [  6:  6](RO/H) 0 = No error.
                                                                 1 = Single-bit error detected. */
        uint32_t ram5_sed              : 1;  /**< [  5:  5](RO/H) 0 = No error.
                                                                 1 = Single-bit error detected. */
        uint32_t ram4_sed              : 1;  /**< [  4:  4](RO/H) 0 = No error.
                                                                 1 = Single-bit error detected. */
        uint32_t ram3_sed              : 1;  /**< [  3:  3](RO/H) 0 = No error.
                                                                 1 = Single-bit error detected. */
        uint32_t ram2_sed              : 1;  /**< [  2:  2](RO/H) 0 = No error.
                                                                 1 = Single-bit error detected. */
        uint32_t ram1_sed              : 1;  /**< [  1:  1](RO/H) 0 = No error.
                                                                 1 = Single-bit error detected. */
        uint32_t ram0_sed              : 1;  /**< [  0:  0](RO/H) 0 = No error.
                                                                 1 = Single-bit error detected. */
#else /* Word 0 - Little Endian */
        uint32_t ram0_sed              : 1;  /**< [  0:  0](RO/H) 0 = No error.
                                                                 1 = Single-bit error detected. */
        uint32_t ram1_sed              : 1;  /**< [  1:  1](RO/H) 0 = No error.
                                                                 1 = Single-bit error detected. */
        uint32_t ram2_sed              : 1;  /**< [  2:  2](RO/H) 0 = No error.
                                                                 1 = Single-bit error detected. */
        uint32_t ram3_sed              : 1;  /**< [  3:  3](RO/H) 0 = No error.
                                                                 1 = Single-bit error detected. */
        uint32_t ram4_sed              : 1;  /**< [  4:  4](RO/H) 0 = No error.
                                                                 1 = Single-bit error detected. */
        uint32_t ram5_sed              : 1;  /**< [  5:  5](RO/H) 0 = No error.
                                                                 1 = Single-bit error detected. */
        uint32_t ram6_sed              : 1;  /**< [  6:  6](RO/H) 0 = No error.
                                                                 1 = Single-bit error detected. */
        uint32_t ram7_sed              : 1;  /**< [  7:  7](RO/H) 0 = No error.
                                                                 1 = Single-bit error detected. */
        uint32_t ram0_ded              : 1;  /**< [  8:  8](RO/H) 0 = No error.
                                                                 1 = Double-bit error detected. */
        uint32_t ram1_ded              : 1;  /**< [  9:  9](RO/H) 0 = No error.
                                                                 1 = Double-bit error detected. */
        uint32_t ram2_ded              : 1;  /**< [ 10: 10](RO/H) 0 = No error.
                                                                 1 = Double-bit error detected. */
        uint32_t ram3_ded              : 1;  /**< [ 11: 11](RO/H) 0 = No error.
                                                                 1 = Double-bit error detected. */
        uint32_t ram4_ded              : 1;  /**< [ 12: 12](RO/H) 0 = No error.
                                                                 1 = Double-bit error detected. */
        uint32_t ram5_ded              : 1;  /**< [ 13: 13](RO/H) 0 = No error.
                                                                 1 = Double-bit error detected. */
        uint32_t ram6_ded              : 1;  /**< [ 14: 14](RO/H) 0 = No error.
                                                                 1 = Double-bit error detected. */
        uint32_t ram7_ded              : 1;  /**< [ 15: 15](RO/H) 0 = No error.
                                                                 1 = Double-bit error detected. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_masix_imem_ecc_s cn; */
};
typedef union cavm_masix_imem_ecc cavm_masix_imem_ecc_t;

static inline uint64_t CAVM_MASIX_IMEM_ECC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MASIX_IMEM_ECC(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a>=32)&&(a<=47)))
        return 0x87e04400c060ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MASIX_IMEM_ECC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MASIX_IMEM_ECC(a) cavm_masix_imem_ecc_t
#define bustype_CAVM_MASIX_IMEM_ECC(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MASIX_IMEM_ECC(a) "MASIX_IMEM_ECC"
#define busnum_CAVM_MASIX_IMEM_ECC(a) (a)
#define arguments_CAVM_MASIX_IMEM_ECC(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) masi#_interrupt_int6
 *
 * MASI Interrupt Register
 * MASI interrupt source register. Cleared on read.
 */
union cavm_masix_interrupt_int6
{
    uint32_t u;
    struct cavm_masix_interrupt_int6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t axi_transfer_error    : 1;  /**< [ 31: 31](RC/H) 0 = No errors.
                                                                 1 = AXI4 protocol error.

                                                                 Read MASI()_AXI_ERROR_RESP, MASI()_AXI_ERROR_ADDR, and MASI()_AXI_ERROR_DATA registers. */
        uint32_t imem_ecc              : 1;  /**< [ 30: 30](RC/H) 0 = No ECC errors detected.
                                                                 1 = New ECC error detected.

                                                                 Read MASI()_IMEM_ECC register. */
        uint32_t reserved_0_29         : 30;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_29         : 30;
        uint32_t imem_ecc              : 1;  /**< [ 30: 30](RC/H) 0 = No ECC errors detected.
                                                                 1 = New ECC error detected.

                                                                 Read MASI()_IMEM_ECC register. */
        uint32_t axi_transfer_error    : 1;  /**< [ 31: 31](RC/H) 0 = No errors.
                                                                 1 = AXI4 protocol error.

                                                                 Read MASI()_AXI_ERROR_RESP, MASI()_AXI_ERROR_ADDR, and MASI()_AXI_ERROR_DATA registers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_masix_interrupt_int6_s cn; */
};
typedef union cavm_masix_interrupt_int6 cavm_masix_interrupt_int6_t;

static inline uint64_t CAVM_MASIX_INTERRUPT_INT6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MASIX_INTERRUPT_INT6(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a>=32)&&(a<=47)))
        return 0x87e04400c020ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MASIX_INTERRUPT_INT6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MASIX_INTERRUPT_INT6(a) cavm_masix_interrupt_int6_t
#define bustype_CAVM_MASIX_INTERRUPT_INT6(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MASIX_INTERRUPT_INT6(a) "MASIX_INTERRUPT_INT6"
#define busnum_CAVM_MASIX_INTERRUPT_INT6(a) (a)
#define arguments_CAVM_MASIX_INTERRUPT_INT6(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) masi#_scratch
 *
 * MASI Scratch Register
 * Register for R/W testing.
 */
union cavm_masix_scratch
{
    uint32_t u;
    struct cavm_masix_scratch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t value                 : 32; /**< [ 31:  0](R/W) MASI scratch register for testing purposes. */
#else /* Word 0 - Little Endian */
        uint32_t value                 : 32; /**< [ 31:  0](R/W) MASI scratch register for testing purposes. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_masix_scratch_s cn; */
};
typedef union cavm_masix_scratch cavm_masix_scratch_t;

static inline uint64_t CAVM_MASIX_SCRATCH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MASIX_SCRATCH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a>=32)&&(a<=47)))
        return 0x87e04400c010ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MASIX_SCRATCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MASIX_SCRATCH(a) cavm_masix_scratch_t
#define bustype_CAVM_MASIX_SCRATCH(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MASIX_SCRATCH(a) "MASIX_SCRATCH"
#define busnum_CAVM_MASIX_SCRATCH(a) (a)
#define arguments_CAVM_MASIX_SCRATCH(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) masi#_scratch1
 *
 * MASI Shuffler Scratch Register
 * Register for R/W testing.
 */
union cavm_masix_scratch1
{
    uint32_t u;
    struct cavm_masix_scratch1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t value                 : 32; /**< [ 31:  0](R/W) MASI scratch register for R/W testing. */
#else /* Word 0 - Little Endian */
        uint32_t value                 : 32; /**< [ 31:  0](R/W) MASI scratch register for R/W testing. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_masix_scratch1_s cn; */
};
typedef union cavm_masix_scratch1 cavm_masix_scratch1_t;

static inline uint64_t CAVM_MASIX_SCRATCH1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MASIX_SCRATCH1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a>=32)&&(a<=47)))
        return 0x87e04400c410ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MASIX_SCRATCH1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MASIX_SCRATCH1(a) cavm_masix_scratch1_t
#define bustype_CAVM_MASIX_SCRATCH1(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MASIX_SCRATCH1(a) "MASIX_SCRATCH1"
#define busnum_CAVM_MASIX_SCRATCH1(a) (a)
#define arguments_CAVM_MASIX_SCRATCH1(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) masi#_shuffler_id
 *
 * MASI Shuffler Identification Register
 * Identification register.
 */
union cavm_masix_shuffler_id
{
    uint32_t u;
    struct cavm_masix_shuffler_id_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t id                    : 32; /**< [ 31:  0](RO) MASI shuffler ID register. */
#else /* Word 0 - Little Endian */
        uint32_t id                    : 32; /**< [ 31:  0](RO) MASI shuffler ID register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_masix_shuffler_id_s cn; */
};
typedef union cavm_masix_shuffler_id cavm_masix_shuffler_id_t;

static inline uint64_t CAVM_MASIX_SHUFFLER_ID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MASIX_SHUFFLER_ID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a>=32)&&(a<=47)))
        return 0x87e04400c400ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MASIX_SHUFFLER_ID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MASIX_SHUFFLER_ID(a) cavm_masix_shuffler_id_t
#define bustype_CAVM_MASIX_SHUFFLER_ID(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MASIX_SHUFFLER_ID(a) "MASIX_SHUFFLER_ID"
#define busnum_CAVM_MASIX_SHUFFLER_ID(a) (a)
#define arguments_CAVM_MASIX_SHUFFLER_ID(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) masi#_shuffler_int4_source
 *
 * MASI SHUFFLER INT4_SOURCE Register
 * Cleared on read.
 */
union cavm_masix_shuffler_int4_source
{
    uint32_t u;
    struct cavm_masix_shuffler_int4_source_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t shuffling_slice_x     : 1;  /**< [ 31: 31](RC/H) SLICE_X RD DMA transfer done. */
        uint32_t shuffling_slice_y     : 1;  /**< [ 30: 30](RC/H) SLICE_Y RD DMA transfer done. */
        uint32_t non_shuffling_cfg_dma : 1;  /**< [ 29: 29](RC/H) Non-shuffling CFG DMA transfer done. */
        uint32_t non_shuffling_rd_dma  : 1;  /**< [ 28: 28](RC/H) Non-shuffling RD DMA transfer done. */
        uint32_t shuffling_slice_x_count : 4;/**< [ 27: 24](RC/H) Number of transferred SLICE_X RD DMAs. */
        uint32_t shuffling_slice_y_count : 4;/**< [ 23: 20](RC/H) Number of transferred SLICE_Y RD DMAs. */
        uint32_t non_shuffling_cfg_dma_count : 4;/**< [ 19: 16](RC/H) Number of transferred non-shuffling CFG DMAs. */
        uint32_t non_shuffling_rd_dma_count : 4;/**< [ 15: 12](RC/H) Number of transferred non-shuffling RD DMAs. */
        uint32_t reserved_0_11         : 12;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_11         : 12;
        uint32_t non_shuffling_rd_dma_count : 4;/**< [ 15: 12](RC/H) Number of transferred non-shuffling RD DMAs. */
        uint32_t non_shuffling_cfg_dma_count : 4;/**< [ 19: 16](RC/H) Number of transferred non-shuffling CFG DMAs. */
        uint32_t shuffling_slice_y_count : 4;/**< [ 23: 20](RC/H) Number of transferred SLICE_Y RD DMAs. */
        uint32_t shuffling_slice_x_count : 4;/**< [ 27: 24](RC/H) Number of transferred SLICE_X RD DMAs. */
        uint32_t non_shuffling_rd_dma  : 1;  /**< [ 28: 28](RC/H) Non-shuffling RD DMA transfer done. */
        uint32_t non_shuffling_cfg_dma : 1;  /**< [ 29: 29](RC/H) Non-shuffling CFG DMA transfer done. */
        uint32_t shuffling_slice_y     : 1;  /**< [ 30: 30](RC/H) SLICE_Y RD DMA transfer done. */
        uint32_t shuffling_slice_x     : 1;  /**< [ 31: 31](RC/H) SLICE_X RD DMA transfer done. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_masix_shuffler_int4_source_s cn; */
};
typedef union cavm_masix_shuffler_int4_source cavm_masix_shuffler_int4_source_t;

static inline uint64_t CAVM_MASIX_SHUFFLER_INT4_SOURCE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MASIX_SHUFFLER_INT4_SOURCE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a>=32)&&(a<=47)))
        return 0x87e04400c450ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MASIX_SHUFFLER_INT4_SOURCE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MASIX_SHUFFLER_INT4_SOURCE(a) cavm_masix_shuffler_int4_source_t
#define bustype_CAVM_MASIX_SHUFFLER_INT4_SOURCE(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MASIX_SHUFFLER_INT4_SOURCE(a) "MASIX_SHUFFLER_INT4_SOURCE"
#define busnum_CAVM_MASIX_SHUFFLER_INT4_SOURCE(a) (a)
#define arguments_CAVM_MASIX_SHUFFLER_INT4_SOURCE(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) masi#_shuffler_int5_bresp
 *
 * MASI SHUFFLER INT5_BRESP Register
 * Cleared on read.
 */
union cavm_masix_shuffler_int5_bresp
{
    uint32_t u;
    struct cavm_masix_shuffler_int5_bresp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t address               : 32; /**< [ 31:  0](RC/H) Address of the latest AXI4 write response error. */
#else /* Word 0 - Little Endian */
        uint32_t address               : 32; /**< [ 31:  0](RC/H) Address of the latest AXI4 write response error. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_masix_shuffler_int5_bresp_s cn; */
};
typedef union cavm_masix_shuffler_int5_bresp cavm_masix_shuffler_int5_bresp_t;

static inline uint64_t CAVM_MASIX_SHUFFLER_INT5_BRESP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MASIX_SHUFFLER_INT5_BRESP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a>=32)&&(a<=47)))
        return 0x87e04400c480ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MASIX_SHUFFLER_INT5_BRESP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MASIX_SHUFFLER_INT5_BRESP(a) cavm_masix_shuffler_int5_bresp_t
#define bustype_CAVM_MASIX_SHUFFLER_INT5_BRESP(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MASIX_SHUFFLER_INT5_BRESP(a) "MASIX_SHUFFLER_INT5_BRESP"
#define busnum_CAVM_MASIX_SHUFFLER_INT5_BRESP(a) (a)
#define arguments_CAVM_MASIX_SHUFFLER_INT5_BRESP(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) masi#_shuffler_int5_response
 *
 * MASI SHUFFLER INT5_RESPONSE Register
 * Cleared on read.
 */
union cavm_masix_shuffler_int5_response
{
    uint32_t u;
    struct cavm_masix_shuffler_int5_response_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bresp                 : 2;  /**< [ 31: 30](RC/H) Latest AXI4 write response error. */
        uint32_t rresp                 : 2;  /**< [ 29: 28](RC/H) Latest AXI4 read response error. */
        uint32_t reserved_0_27         : 28;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_27         : 28;
        uint32_t rresp                 : 2;  /**< [ 29: 28](RC/H) Latest AXI4 read response error. */
        uint32_t bresp                 : 2;  /**< [ 31: 30](RC/H) Latest AXI4 write response error. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_masix_shuffler_int5_response_s cn; */
};
typedef union cavm_masix_shuffler_int5_response cavm_masix_shuffler_int5_response_t;

static inline uint64_t CAVM_MASIX_SHUFFLER_INT5_RESPONSE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MASIX_SHUFFLER_INT5_RESPONSE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a>=32)&&(a<=47)))
        return 0x87e04400c470ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MASIX_SHUFFLER_INT5_RESPONSE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MASIX_SHUFFLER_INT5_RESPONSE(a) cavm_masix_shuffler_int5_response_t
#define bustype_CAVM_MASIX_SHUFFLER_INT5_RESPONSE(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MASIX_SHUFFLER_INT5_RESPONSE(a) "MASIX_SHUFFLER_INT5_RESPONSE"
#define busnum_CAVM_MASIX_SHUFFLER_INT5_RESPONSE(a) (a)
#define arguments_CAVM_MASIX_SHUFFLER_INT5_RESPONSE(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) masi#_shuffler_int5_rresp
 *
 * MASI SHUFFLER INT5_RRESP Register
 * Cleared on read.
 */
union cavm_masix_shuffler_int5_rresp
{
    uint32_t u;
    struct cavm_masix_shuffler_int5_rresp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t address               : 32; /**< [ 31:  0](RC/H) Address of the latest AXI4 read response error. */
#else /* Word 0 - Little Endian */
        uint32_t address               : 32; /**< [ 31:  0](RC/H) Address of the latest AXI4 read response error. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_masix_shuffler_int5_rresp_s cn; */
};
typedef union cavm_masix_shuffler_int5_rresp cavm_masix_shuffler_int5_rresp_t;

static inline uint64_t CAVM_MASIX_SHUFFLER_INT5_RRESP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MASIX_SHUFFLER_INT5_RRESP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a>=32)&&(a<=47)))
        return 0x87e04400c490ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MASIX_SHUFFLER_INT5_RRESP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MASIX_SHUFFLER_INT5_RRESP(a) cavm_masix_shuffler_int5_rresp_t
#define bustype_CAVM_MASIX_SHUFFLER_INT5_RRESP(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MASIX_SHUFFLER_INT5_RRESP(a) "MASIX_SHUFFLER_INT5_RRESP"
#define busnum_CAVM_MASIX_SHUFFLER_INT5_RRESP(a) (a)
#define arguments_CAVM_MASIX_SHUFFLER_INT5_RRESP(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) masi#_shuffler_int5_source
 *
 * MASI SHUFFLER INT5_SOURCE Register
 * Cleared on read.
 */
union cavm_masix_shuffler_int5_source
{
    uint32_t u;
    struct cavm_masix_shuffler_int5_source_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t shuffling_rd_dma      : 1;  /**< [ 31: 31](RC/H) 0 = No errors.
                                                                 1 = AXI4 write response error on shuffling RD DMA. */
        uint32_t non_shuffling_cfg_dma : 1;  /**< [ 30: 30](RC/H) 0 = No errors.
                                                                 1 = AXI4 write response error on non-shuffling CFG DMA. */
        uint32_t non_shuffling_rd_dma  : 1;  /**< [ 29: 29](RC/H) 0 = No errors.
                                                                 1 = AXI4 write response error on non-shuffling RD DMA. */
        uint32_t non_shuffling_wr_dma  : 1;  /**< [ 28: 28](RC/H) 0 = No errors.
                                                                 1 = AXI4 read response error on non-shuffling WR DMA. */
        uint32_t invalid_shuffling_config : 1;/**< [ 27: 27](RC/H) 0 = No errors.
                                                                 1 = Invalid shuffling configuration. */
        uint32_t reserved_0_26         : 27;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_26         : 27;
        uint32_t invalid_shuffling_config : 1;/**< [ 27: 27](RC/H) 0 = No errors.
                                                                 1 = Invalid shuffling configuration. */
        uint32_t non_shuffling_wr_dma  : 1;  /**< [ 28: 28](RC/H) 0 = No errors.
                                                                 1 = AXI4 read response error on non-shuffling WR DMA. */
        uint32_t non_shuffling_rd_dma  : 1;  /**< [ 29: 29](RC/H) 0 = No errors.
                                                                 1 = AXI4 write response error on non-shuffling RD DMA. */
        uint32_t non_shuffling_cfg_dma : 1;  /**< [ 30: 30](RC/H) 0 = No errors.
                                                                 1 = AXI4 write response error on non-shuffling CFG DMA. */
        uint32_t shuffling_rd_dma      : 1;  /**< [ 31: 31](RC/H) 0 = No errors.
                                                                 1 = AXI4 write response error on shuffling RD DMA. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_masix_shuffler_int5_source_s cn; */
};
typedef union cavm_masix_shuffler_int5_source cavm_masix_shuffler_int5_source_t;

static inline uint64_t CAVM_MASIX_SHUFFLER_INT5_SOURCE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MASIX_SHUFFLER_INT5_SOURCE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a>=32)&&(a<=47)))
        return 0x87e04400c460ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MASIX_SHUFFLER_INT5_SOURCE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MASIX_SHUFFLER_INT5_SOURCE(a) cavm_masix_shuffler_int5_source_t
#define bustype_CAVM_MASIX_SHUFFLER_INT5_SOURCE(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MASIX_SHUFFLER_INT5_SOURCE(a) "MASIX_SHUFFLER_INT5_SOURCE"
#define busnum_CAVM_MASIX_SHUFFLER_INT5_SOURCE(a) (a)
#define arguments_CAVM_MASIX_SHUFFLER_INT5_SOURCE(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) masi#_shuffler_rob
 *
 * MASI SHUFFLER ROB Register
 * (MASI Shuffler ROB register.)
 */
union cavm_masix_shuffler_rob
{
    uint32_t u;
    struct cavm_masix_shuffler_rob_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t load_settings         : 1;  /**< [ 31: 31](R/W1) When this bit is written to 1, load settings to ROB and clear buffer content.
                                                                 When written to 0, no effect.  Always read as 0. */
        uint32_t reserved_16_30        : 15;
        uint32_t vector_lanes          : 8;  /**< [ 15:  8](R/W) Number of used vector lanes (1 to 32). */
        uint32_t elements_per_lane     : 8;  /**< [  7:  0](R/W) Number of fixed 32-bit elements per lane (1 to 48). */
#else /* Word 0 - Little Endian */
        uint32_t elements_per_lane     : 8;  /**< [  7:  0](R/W) Number of fixed 32-bit elements per lane (1 to 48). */
        uint32_t vector_lanes          : 8;  /**< [ 15:  8](R/W) Number of used vector lanes (1 to 32). */
        uint32_t reserved_16_30        : 15;
        uint32_t load_settings         : 1;  /**< [ 31: 31](R/W1) When this bit is written to 1, load settings to ROB and clear buffer content.
                                                                 When written to 0, no effect.  Always read as 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_masix_shuffler_rob_s cn; */
};
typedef union cavm_masix_shuffler_rob cavm_masix_shuffler_rob_t;

static inline uint64_t CAVM_MASIX_SHUFFLER_ROB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MASIX_SHUFFLER_ROB(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a>=32)&&(a<=47)))
        return 0x87e04400c420ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MASIX_SHUFFLER_ROB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MASIX_SHUFFLER_ROB(a) cavm_masix_shuffler_rob_t
#define bustype_CAVM_MASIX_SHUFFLER_ROB(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MASIX_SHUFFLER_ROB(a) "MASIX_SHUFFLER_ROB"
#define busnum_CAVM_MASIX_SHUFFLER_ROB(a) (a)
#define arguments_CAVM_MASIX_SHUFFLER_ROB(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) masi#_shuffler_slice_x
 *
 * MASI SHUFFLER SLICE_X Register
 * (MASI Shuffler SLICE_X register.)
 */
union cavm_masix_shuffler_slice_x
{
    uint32_t u;
    struct cavm_masix_shuffler_slice_x_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t valid                 : 1;  /**< [ 31: 31](R/W) Slice settings valid. */
        uint32_t address               : 11; /**< [ 30: 20](R/W) DMEM row start address. */
        uint32_t reserved_10_19        : 10;
        uint32_t size                  : 10; /**< [  9:  0](R/W) Number of ROB buffers to be transferred (1 buffer = lanes*elements*32). */
#else /* Word 0 - Little Endian */
        uint32_t size                  : 10; /**< [  9:  0](R/W) Number of ROB buffers to be transferred (1 buffer = lanes*elements*32). */
        uint32_t reserved_10_19        : 10;
        uint32_t address               : 11; /**< [ 30: 20](R/W) DMEM row start address. */
        uint32_t valid                 : 1;  /**< [ 31: 31](R/W) Slice settings valid. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_masix_shuffler_slice_x_s cn; */
};
typedef union cavm_masix_shuffler_slice_x cavm_masix_shuffler_slice_x_t;

static inline uint64_t CAVM_MASIX_SHUFFLER_SLICE_X(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MASIX_SHUFFLER_SLICE_X(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a>=32)&&(a<=47)))
        return 0x87e04400c430ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MASIX_SHUFFLER_SLICE_X", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MASIX_SHUFFLER_SLICE_X(a) cavm_masix_shuffler_slice_x_t
#define bustype_CAVM_MASIX_SHUFFLER_SLICE_X(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MASIX_SHUFFLER_SLICE_X(a) "MASIX_SHUFFLER_SLICE_X"
#define busnum_CAVM_MASIX_SHUFFLER_SLICE_X(a) (a)
#define arguments_CAVM_MASIX_SHUFFLER_SLICE_X(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) masi#_shuffler_slice_y
 *
 * MASI SHUFFLER SLICE_Y Register
 * (MASI Shuffler SLICE_Y register.)
 */
union cavm_masix_shuffler_slice_y
{
    uint32_t u;
    struct cavm_masix_shuffler_slice_y_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t valid                 : 1;  /**< [ 31: 31](R/W) Slice settings valid. */
        uint32_t address               : 11; /**< [ 30: 20](R/W) DMEM row start address. */
        uint32_t reserved_10_19        : 10;
        uint32_t size                  : 10; /**< [  9:  0](R/W) Number of ROB buffers to be transferred (1 buffer = lanes*elements*32). */
#else /* Word 0 - Little Endian */
        uint32_t size                  : 10; /**< [  9:  0](R/W) Number of ROB buffers to be transferred (1 buffer = lanes*elements*32). */
        uint32_t reserved_10_19        : 10;
        uint32_t address               : 11; /**< [ 30: 20](R/W) DMEM row start address. */
        uint32_t valid                 : 1;  /**< [ 31: 31](R/W) Slice settings valid. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_masix_shuffler_slice_y_s cn; */
};
typedef union cavm_masix_shuffler_slice_y cavm_masix_shuffler_slice_y_t;

static inline uint64_t CAVM_MASIX_SHUFFLER_SLICE_Y(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MASIX_SHUFFLER_SLICE_Y(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a>=32)&&(a<=47)))
        return 0x87e04400c440ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MASIX_SHUFFLER_SLICE_Y", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MASIX_SHUFFLER_SLICE_Y(a) cavm_masix_shuffler_slice_y_t
#define bustype_CAVM_MASIX_SHUFFLER_SLICE_Y(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MASIX_SHUFFLER_SLICE_Y(a) "MASIX_SHUFFLER_SLICE_Y"
#define busnum_CAVM_MASIX_SHUFFLER_SLICE_Y(a) (a)
#define arguments_CAVM_MASIX_SHUFFLER_SLICE_Y(a) (a),-1,-1,-1

/**
 * Register (MULTIRSL32b) masi#_sw_control
 *
 * MASI SW Control Register
 * SW Control for MASI
 */
union cavm_masix_sw_control
{
    uint32_t u;
    struct cavm_masix_sw_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sw_ctrl               : 32; /**< [ 31:  0](WO) SW Control for MASI. */
#else /* Word 0 - Little Endian */
        uint32_t sw_ctrl               : 32; /**< [ 31:  0](WO) SW Control for MASI. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_masix_sw_control_s cn; */
};
typedef union cavm_masix_sw_control cavm_masix_sw_control_t;

static inline uint64_t CAVM_MASIX_SW_CONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MASIX_SW_CONTROL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a>=32)&&(a<=47)))
        return 0x87e04400c4a0ll + 0x80000ll * ((a) & 0x3f);
    __cavm_csr_fatal("MASIX_SW_CONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MASIX_SW_CONTROL(a) cavm_masix_sw_control_t
#define bustype_CAVM_MASIX_SW_CONTROL(a) CSR_TYPE_MULTIRSL32b
#define basename_CAVM_MASIX_SW_CONTROL(a) "MASIX_SW_CONTROL"
#define busnum_CAVM_MASIX_SW_CONTROL(a) (a)
#define arguments_CAVM_MASIX_SW_CONTROL(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_MASI_H__ */
