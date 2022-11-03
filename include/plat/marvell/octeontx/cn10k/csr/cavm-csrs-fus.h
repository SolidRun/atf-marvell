#ifndef __CAVM_CSRS_FUS_H__
#define __CAVM_CSRS_FUS_H__
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
 * OcteonTX FUS.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration fus_bar_e
 *
 * Fuse Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_FUS_BAR_E_FUS_PF_BAR0 (0x87e003000000ll)
#define CAVM_FUS_BAR_E_FUS_PF_BAR0_SIZE 0x10000ull

/**
 * Register (RSL) fus_bnk_dat#
 *
 * Fuse Bank Store Register
 * The initial state of FUS_BNK_DAT() is as if bank6 were just read,
 * i.e. DAT* = fus[895:768].
 */
union cavm_fus_bnk_datx
{
    uint64_t u;
    struct cavm_fus_bnk_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](R/W/H) Efuse bank store. For read operations, [DAT] gets the fuse bank last read. For write
                                                                 operations, the [DAT] determines which fuses to blow. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 64; /**< [ 63:  0](R/W/H) Efuse bank store. For read operations, [DAT] gets the fuse bank last read. For write
                                                                 operations, the [DAT] determines which fuses to blow. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_fus_bnk_datx_s cn; */
};
typedef union cavm_fus_bnk_datx cavm_fus_bnk_datx_t;

static inline uint64_t CAVM_FUS_BNK_DATX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_FUS_BNK_DATX(uint64_t a)
{
    if (a<=1)
        return 0x87e003001520ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("FUS_BNK_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_FUS_BNK_DATX(a) cavm_fus_bnk_datx_t
#define bustype_CAVM_FUS_BNK_DATX(a) CSR_TYPE_RSL
#define basename_CAVM_FUS_BNK_DATX(a) "FUS_BNK_DATX"
#define device_bar_CAVM_FUS_BNK_DATX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_FUS_BNK_DATX(a) (a)
#define arguments_CAVM_FUS_BNK_DATX(a) (a),-1,-1,-1

/**
 * Register (RSL) fus_cache#
 *
 * Fuse Cache Register
 * This register returns the cached state of every fuse, organized into 64-fuse
 * chunks. Each bit corresponds to a fuse enumerated by FUSE_NUM_E.
 */
union cavm_fus_cachex
{
    uint64_t u;
    struct cavm_fus_cachex_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Reads the cached fuse value.
                                                                 Modifications to the cache will take effect on the next
                                                                 chip domain reset and are lost on a cold domain reset. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Reads the cached fuse value.
                                                                 Modifications to the cache will take effect on the next
                                                                 chip domain reset and are lost on a cold domain reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_fus_cachex_s cn; */
};
typedef union cavm_fus_cachex cavm_fus_cachex_t;

static inline uint64_t CAVM_FUS_CACHEX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_FUS_CACHEX(uint64_t a)
{
    if (a<=63)
        return 0x87e003001000ll + 8ll * ((a) & 0x3f);
    __cavm_csr_fatal("FUS_CACHEX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_FUS_CACHEX(a) cavm_fus_cachex_t
#define bustype_CAVM_FUS_CACHEX(a) CSR_TYPE_RSL
#define basename_CAVM_FUS_CACHEX(a) "FUS_CACHEX"
#define device_bar_CAVM_FUS_CACHEX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_FUS_CACHEX(a) (a)
#define arguments_CAVM_FUS_CACHEX(a) (a),-1,-1,-1

/**
 * Register (RSL) fus_const
 *
 * Fuse Constants Register
 */
union cavm_fus_const
{
    uint64_t u;
    struct cavm_fus_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t repair_banks          : 8;  /**< [ 15:  8](RO) Number of 128-bit memory repair banks present. */
        uint64_t fuse_banks            : 8;  /**< [  7:  0](RO) Number of 128-bit general purpose fuse banks present. */
#else /* Word 0 - Little Endian */
        uint64_t fuse_banks            : 8;  /**< [  7:  0](RO) Number of 128-bit general purpose fuse banks present. */
        uint64_t repair_banks          : 8;  /**< [ 15:  8](RO) Number of 128-bit memory repair banks present. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_fus_const_s cn; */
};
typedef union cavm_fus_const cavm_fus_const_t;

#define CAVM_FUS_CONST CAVM_FUS_CONST_FUNC()
static inline uint64_t CAVM_FUS_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_FUS_CONST_FUNC(void)
{
    return 0x87e003001578ll;
}

#define typedef_CAVM_FUS_CONST cavm_fus_const_t
#define bustype_CAVM_FUS_CONST CSR_TYPE_RSL
#define basename_CAVM_FUS_CONST "FUS_CONST"
#define device_bar_CAVM_FUS_CONST 0x0 /* PF_BAR0 */
#define busnum_CAVM_FUS_CONST 0
#define arguments_CAVM_FUS_CONST -1,-1,-1,-1

/**
 * Register (RSL) fus_prog
 *
 * INTERNAL: Fuse Programming Register
 */
union cavm_fus_prog
{
    uint64_t u;
    struct cavm_fus_prog_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t unlock                : 1;  /**< [ 16: 16](R/W) Programming Voltage Lock Control.
                                                                 The field controls a lock on fuse programming.  To make the voltage available
                                                                 for programming, this bit must be set and then cleared 4 times while PROG_EN=0.
                                                                 If the voltage control is unlocked and PROG_EN=1 then the programming voltage
                                                                 is driven to the EFUSE macros and then the VOLTAGE field will be set.

                                                                 This field and the voltage control are reinitialized on cold reset. */
        uint64_t efuse                 : 1;  /**< [ 15: 15](R/W) Efuse storage. When set, the data is written directly to the efuse
                                                                 bank.  When cleared, data is soft blown to local storage.
                                                                 A soft blown fuse is subject to lockdown fuses.
                                                                 Soft blown fuses will become active after a chip domain reset
                                                                 but will not persist through a cold domain reset. */
        uint64_t voltage               : 1;  /**< [ 14: 14](RO) Programming Voltage Detect.  Voltage is available at the fuse macro.
                                                                 Typically set only during fuse programming of EFUSE macros. */
        uint64_t prog_en               : 1;  /**< [ 13: 13](R/W) Enable programming voltage for EFUSE macros.
                                                                 This bit must be set at least 2uS prior to setting [PROG] to
                                                                 guarantee the programming voltage is available. */
        uint64_t prog                  : 1;  /**< [ 12: 12](R/W/H)  */
        uint64_t reserved_11           : 1;
        uint64_t addr                  : 7;  /**< [ 10:  4](R/W) Indicates which of the banks of 128 fuses to blow. Software
                                                                 should not change this field while the FUS_PROG[PROG] bit is set.

                                                                 Address bits greater than the number of bits needed to the number of banks
                                                                 present (FUS_CONST[FUSE_BANKS]) must be zero. */
        uint64_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_3          : 4;
        uint64_t addr                  : 7;  /**< [ 10:  4](R/W) Indicates which of the banks of 128 fuses to blow. Software
                                                                 should not change this field while the FUS_PROG[PROG] bit is set.

                                                                 Address bits greater than the number of bits needed to the number of banks
                                                                 present (FUS_CONST[FUSE_BANKS]) must be zero. */
        uint64_t reserved_11           : 1;
        uint64_t prog                  : 1;  /**< [ 12: 12](R/W/H)  */
        uint64_t prog_en               : 1;  /**< [ 13: 13](R/W) Enable programming voltage for EFUSE macros.
                                                                 This bit must be set at least 2uS prior to setting [PROG] to
                                                                 guarantee the programming voltage is available. */
        uint64_t voltage               : 1;  /**< [ 14: 14](RO) Programming Voltage Detect.  Voltage is available at the fuse macro.
                                                                 Typically set only during fuse programming of EFUSE macros. */
        uint64_t efuse                 : 1;  /**< [ 15: 15](R/W) Efuse storage. When set, the data is written directly to the efuse
                                                                 bank.  When cleared, data is soft blown to local storage.
                                                                 A soft blown fuse is subject to lockdown fuses.
                                                                 Soft blown fuses will become active after a chip domain reset
                                                                 but will not persist through a cold domain reset. */
        uint64_t unlock                : 1;  /**< [ 16: 16](R/W) Programming Voltage Lock Control.
                                                                 The field controls a lock on fuse programming.  To make the voltage available
                                                                 for programming, this bit must be set and then cleared 4 times while PROG_EN=0.
                                                                 If the voltage control is unlocked and PROG_EN=1 then the programming voltage
                                                                 is driven to the EFUSE macros and then the VOLTAGE field will be set.

                                                                 This field and the voltage control are reinitialized on cold reset. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_fus_prog_s cn; */
};
typedef union cavm_fus_prog cavm_fus_prog_t;

#define CAVM_FUS_PROG CAVM_FUS_PROG_FUNC()
static inline uint64_t CAVM_FUS_PROG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_FUS_PROG_FUNC(void)
{
    return 0x87e003001510ll;
}

#define typedef_CAVM_FUS_PROG cavm_fus_prog_t
#define bustype_CAVM_FUS_PROG CSR_TYPE_RSL
#define basename_CAVM_FUS_PROG "FUS_PROG"
#define device_bar_CAVM_FUS_PROG 0x0 /* PF_BAR0 */
#define busnum_CAVM_FUS_PROG 0
#define arguments_CAVM_FUS_PROG -1,-1,-1,-1

/**
 * Register (RSL) fus_rcmd
 *
 * Fuse Read Command Register
 * Read Fuse Banks.
 */
union cavm_fus_rcmd
{
    uint64_t u;
    struct cavm_fus_rcmd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t efuse                 : 1;  /**< [ 15: 15](R/W) Efuse storage. When set, the return data is from the efuse
                                                                 bank directly.  When cleared data is read from the local storage. */
        uint64_t voltage               : 1;  /**< [ 14: 14](RO) Programming Voltage Detect.  Voltage is available at the fuse macro.
                                                                 Typically set only during fuse programming of EFUSE macros. */
        uint64_t reserved_13           : 1;
        uint64_t pend                  : 1;  /**< [ 12: 12](R/W/H) Software sets this bit to one on a write operation that starts
                                                                 the fuse read operation. Hardware clears this bit when the read
                                                                 operation is complete and FUS_BNK_DAT() is valid.
                                                                 FUS_READ_TIMES[RDSTB_WH] determines the time for the operation
                                                                 to complete. */
        uint64_t reserved_11           : 1;
        uint64_t addr                  : 7;  /**< [ 10:  4](R/W) Address. Specifies the bank address of 128 fuses to read.
                                                                 Software should not change this field while [PEND]
                                                                 is set. It must wait for the hardware to clear it.

                                                                 Address bits greater than the number of bits needed to the number of banks
                                                                 present (FUS_CONST[FUSE_BANKS]) must be zero. */
        uint64_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_3          : 4;
        uint64_t addr                  : 7;  /**< [ 10:  4](R/W) Address. Specifies the bank address of 128 fuses to read.
                                                                 Software should not change this field while [PEND]
                                                                 is set. It must wait for the hardware to clear it.

                                                                 Address bits greater than the number of bits needed to the number of banks
                                                                 present (FUS_CONST[FUSE_BANKS]) must be zero. */
        uint64_t reserved_11           : 1;
        uint64_t pend                  : 1;  /**< [ 12: 12](R/W/H) Software sets this bit to one on a write operation that starts
                                                                 the fuse read operation. Hardware clears this bit when the read
                                                                 operation is complete and FUS_BNK_DAT() is valid.
                                                                 FUS_READ_TIMES[RDSTB_WH] determines the time for the operation
                                                                 to complete. */
        uint64_t reserved_13           : 1;
        uint64_t voltage               : 1;  /**< [ 14: 14](RO) Programming Voltage Detect.  Voltage is available at the fuse macro.
                                                                 Typically set only during fuse programming of EFUSE macros. */
        uint64_t efuse                 : 1;  /**< [ 15: 15](R/W) Efuse storage. When set, the return data is from the efuse
                                                                 bank directly.  When cleared data is read from the local storage. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_fus_rcmd_s cn; */
};
typedef union cavm_fus_rcmd cavm_fus_rcmd_t;

#define CAVM_FUS_RCMD CAVM_FUS_RCMD_FUNC()
static inline uint64_t CAVM_FUS_RCMD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_FUS_RCMD_FUNC(void)
{
    return 0x87e003001500ll;
}

#define typedef_CAVM_FUS_RCMD cavm_fus_rcmd_t
#define bustype_CAVM_FUS_RCMD CSR_TYPE_RSL
#define basename_CAVM_FUS_RCMD "FUS_RCMD"
#define device_bar_CAVM_FUS_RCMD 0x0 /* PF_BAR0 */
#define busnum_CAVM_FUS_RCMD 0
#define arguments_CAVM_FUS_RCMD -1,-1,-1,-1

/**
 * Register (RSL) fus_read_times
 *
 * Fuse Read Times Register
 * The reset values correspond to accesses of internal fuses with PLL reference clock
 * up to 115 MHz.  If any of the formulas below result in a value less than 0x0, the
 * corresponding timing parameter should be set to zero.
 *
 * Prior to issuing a read operation to the fuse banks (via FUS_RCMD),
 * this register should be written with the timing parameters that will be read.
 * This register should not be written while FUS_RCMD[PEND] = 1.
 */
union cavm_fus_read_times
{
    uint64_t u;
    struct cavm_fus_read_times_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t margin                : 1;  /**< [ 32: 32](R/W) Margin Read.   When set, the FUS_RCMD command with [EFUSE] set performs a margin read.
                                                                 This read requires a longer read strobe time than the default.  It is used
                                                                 after programming to verify that the efuse was programmed as expected. */
        uint64_t done                  : 4;  /**< [ 31: 28](R/W) Hold time of CSB, PGENB, and LOAD with respect to falling edge
                                                                 of STROBE for read and write mode in REF_CLK_0 + 1 cycles.
                                                                 Default yields 140 ns at 100 MHz. */
        uint64_t ahd                   : 4;  /**< [ 27: 24](R/W) Hold time of A with respect to falling edge of STROBE
                                                                 for read and write modes in REF_CLK0 + 1 cycles.
                                                                 Default yields 60 ns at 100 MHz. */
        uint64_t wrstb_wh              : 12; /**< [ 23: 12](R/W) Pulse width high of STROBE in write mode in REF_CLK0 + 1 cycles.
                                                                 Default yields approximately 5 us at 100 MHz. */
        uint64_t rdstb_wh              : 4;  /**< [ 11:  8](R/W) Pulse width high of STROBE in read mode in 2*REF_CLK0 + 1 cycles.
                                                                 Default yields 250 ns at 100 MHz.
                                                                 If MARGIN is set then strobe width is 4*REF_CLK0 + 1 cycles.
                                                                 Value should be set to 0xf for a read time of 610nS at 100 Mhz. */
        uint64_t asu                   : 4;  /**< [  7:  4](R/W) Setup time of A to rising edge of STROBE for read and write
                                                                 modes in REF_CLK0 cycles.
                                                                 Default yields 50 ns at 100 MHz. */
        uint64_t setup                 : 4;  /**< [  3:  0](R/W) Setup time of CSB, PGENB, LOAD to rising edge of STROBE
                                                                 in read and write modes in REF_CLK0 + 1 cycles.
                                                                 Default yields 90 ns plus ASU cycles (50nS) equals 140nS at 100 MHz. */
#else /* Word 0 - Little Endian */
        uint64_t setup                 : 4;  /**< [  3:  0](R/W) Setup time of CSB, PGENB, LOAD to rising edge of STROBE
                                                                 in read and write modes in REF_CLK0 + 1 cycles.
                                                                 Default yields 90 ns plus ASU cycles (50nS) equals 140nS at 100 MHz. */
        uint64_t asu                   : 4;  /**< [  7:  4](R/W) Setup time of A to rising edge of STROBE for read and write
                                                                 modes in REF_CLK0 cycles.
                                                                 Default yields 50 ns at 100 MHz. */
        uint64_t rdstb_wh              : 4;  /**< [ 11:  8](R/W) Pulse width high of STROBE in read mode in 2*REF_CLK0 + 1 cycles.
                                                                 Default yields 250 ns at 100 MHz.
                                                                 If MARGIN is set then strobe width is 4*REF_CLK0 + 1 cycles.
                                                                 Value should be set to 0xf for a read time of 610nS at 100 Mhz. */
        uint64_t wrstb_wh              : 12; /**< [ 23: 12](R/W) Pulse width high of STROBE in write mode in REF_CLK0 + 1 cycles.
                                                                 Default yields approximately 5 us at 100 MHz. */
        uint64_t ahd                   : 4;  /**< [ 27: 24](R/W) Hold time of A with respect to falling edge of STROBE
                                                                 for read and write modes in REF_CLK0 + 1 cycles.
                                                                 Default yields 60 ns at 100 MHz. */
        uint64_t done                  : 4;  /**< [ 31: 28](R/W) Hold time of CSB, PGENB, and LOAD with respect to falling edge
                                                                 of STROBE for read and write mode in REF_CLK_0 + 1 cycles.
                                                                 Default yields 140 ns at 100 MHz. */
        uint64_t margin                : 1;  /**< [ 32: 32](R/W) Margin Read.   When set, the FUS_RCMD command with [EFUSE] set performs a margin read.
                                                                 This read requires a longer read strobe time than the default.  It is used
                                                                 after programming to verify that the efuse was programmed as expected. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_fus_read_times_s cn; */
};
typedef union cavm_fus_read_times cavm_fus_read_times_t;

#define CAVM_FUS_READ_TIMES CAVM_FUS_READ_TIMES_FUNC()
static inline uint64_t CAVM_FUS_READ_TIMES_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_FUS_READ_TIMES_FUNC(void)
{
    return 0x87e003001570ll;
}

#define typedef_CAVM_FUS_READ_TIMES cavm_fus_read_times_t
#define bustype_CAVM_FUS_READ_TIMES CSR_TYPE_RSL
#define basename_CAVM_FUS_READ_TIMES "FUS_READ_TIMES"
#define device_bar_CAVM_FUS_READ_TIMES 0x0 /* PF_BAR0 */
#define busnum_CAVM_FUS_READ_TIMES 0
#define arguments_CAVM_FUS_READ_TIMES -1,-1,-1,-1

/**
 * Register (RSL) fus_soft_repair
 *
 * INTERNAL: Fuse Soft Repair Register
 */
union cavm_fus_soft_repair
{
    uint64_t u;
    struct cavm_fus_soft_repair_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t auto_dly              : 16; /**< [ 47: 32](R/W/H) Reserved. */
        uint64_t reserved_18_31        : 14;
        uint64_t autoblow              : 1;  /**< [ 17: 17](R/W/H) Reserved. */
        uint64_t clr_defects           : 1;  /**< [ 16: 16](R/W) Clear defects.  Setting this bit and then reading all the repair fuse
                                                                 banks with the EFUSE field set will reinitialize the defects to zero.
                                                                 Following this [CLR_DEFECTS] should be cleared and a chip domain
                                                                 reset should be initiated.  This operation is typically done after
                                                                 too many defects have accumulated and only defects from a slower speed
                                                                 grade are required. */
        uint64_t numdefects            : 8;  /**< [ 15:  8](RO/H) After reset/BIST indicates the number of memory defects reported. Defects are
                                                                 stored in fuses FUSE_NUM_E::REPAIR() from index [NUMREPAIRS]*32 to
                                                                 ([NUMREPAIRS]*32 + [NUMDEFECTS]*32 - 1). */
        uint64_t numrepairs            : 8;  /**< [  7:  0](RO/H) Indicates the number of repairs loaded from repair mem to the memories on
                                                                 the last chip/core/mcp/scp reset. */
#else /* Word 0 - Little Endian */
        uint64_t numrepairs            : 8;  /**< [  7:  0](RO/H) Indicates the number of repairs loaded from repair mem to the memories on
                                                                 the last chip/core/mcp/scp reset. */
        uint64_t numdefects            : 8;  /**< [ 15:  8](RO/H) After reset/BIST indicates the number of memory defects reported. Defects are
                                                                 stored in fuses FUSE_NUM_E::REPAIR() from index [NUMREPAIRS]*32 to
                                                                 ([NUMREPAIRS]*32 + [NUMDEFECTS]*32 - 1). */
        uint64_t clr_defects           : 1;  /**< [ 16: 16](R/W) Clear defects.  Setting this bit and then reading all the repair fuse
                                                                 banks with the EFUSE field set will reinitialize the defects to zero.
                                                                 Following this [CLR_DEFECTS] should be cleared and a chip domain
                                                                 reset should be initiated.  This operation is typically done after
                                                                 too many defects have accumulated and only defects from a slower speed
                                                                 grade are required. */
        uint64_t autoblow              : 1;  /**< [ 17: 17](R/W/H) Reserved. */
        uint64_t reserved_18_31        : 14;
        uint64_t auto_dly              : 16; /**< [ 47: 32](R/W/H) Reserved. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_fus_soft_repair_s cn; */
};
typedef union cavm_fus_soft_repair cavm_fus_soft_repair_t;

#define CAVM_FUS_SOFT_REPAIR CAVM_FUS_SOFT_REPAIR_FUNC()
static inline uint64_t CAVM_FUS_SOFT_REPAIR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_FUS_SOFT_REPAIR_FUNC(void)
{
    return 0x87e003001540ll;
}

#define typedef_CAVM_FUS_SOFT_REPAIR cavm_fus_soft_repair_t
#define bustype_CAVM_FUS_SOFT_REPAIR CSR_TYPE_RSL
#define basename_CAVM_FUS_SOFT_REPAIR "FUS_SOFT_REPAIR"
#define device_bar_CAVM_FUS_SOFT_REPAIR 0x0 /* PF_BAR0 */
#define busnum_CAVM_FUS_SOFT_REPAIR 0
#define arguments_CAVM_FUS_SOFT_REPAIR -1,-1,-1,-1

#endif /* __CAVM_CSRS_FUS_H__ */
