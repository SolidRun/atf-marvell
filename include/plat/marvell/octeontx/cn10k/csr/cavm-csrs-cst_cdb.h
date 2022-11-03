#ifndef __CAVM_CSRS_CST_CDB_H__
#define __CAVM_CSRS_CST_CDB_H__
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
 * OcteonTX CST_CDB.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (NCB32b) cst_cdb#_ap_ctiappclear
 *
 * CST Cdb Ap Ctiappclear Register
 * Clears bits of the Application Trigger register.
 */
union cavm_cst_cdbx_ap_ctiappclear
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiappclear_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](WO) This field is RAZWI */
        uint32_t appclear3             : 1;  /**< [  3:  3](WO) Application trigger &lt;x&gt; disable.
                                                                 Writing to this bit has the following effect: */
        uint32_t appclear2             : 1;  /**< [  2:  2](WO) Application trigger &lt;x&gt; disable.
                                                                 Writing to this bit has the following effect: */
        uint32_t appclear1             : 1;  /**< [  1:  1](WO) Application trigger &lt;x&gt; disable.
                                                                 Writing to this bit has the following effect: */
        uint32_t appclear0             : 1;  /**< [  0:  0](WO) Application trigger &lt;x&gt; disable.
                                                                 Writing to this bit has the following effect: */
#else /* Word 0 - Little Endian */
        uint32_t appclear0             : 1;  /**< [  0:  0](WO) Application trigger &lt;x&gt; disable.
                                                                 Writing to this bit has the following effect: */
        uint32_t appclear1             : 1;  /**< [  1:  1](WO) Application trigger &lt;x&gt; disable.
                                                                 Writing to this bit has the following effect: */
        uint32_t appclear2             : 1;  /**< [  2:  2](WO) Application trigger &lt;x&gt; disable.
                                                                 Writing to this bit has the following effect: */
        uint32_t appclear3             : 1;  /**< [  3:  3](WO) Application trigger &lt;x&gt; disable.
                                                                 Writing to this bit has the following effect: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](WO) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiappclear_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiappclear cavm_cst_cdbx_ap_ctiappclear_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIAPPCLEAR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIAPPCLEAR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010018ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010018ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010018ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010018ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIAPPCLEAR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIAPPCLEAR(a) cavm_cst_cdbx_ap_ctiappclear_t
#define bustype_CAVM_CST_CDBX_AP_CTIAPPCLEAR(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIAPPCLEAR(a) "CST_CDBX_AP_CTIAPPCLEAR"
#define busnum_CAVM_CST_CDBX_AP_CTIAPPCLEAR(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIAPPCLEAR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiapppulse
 *
 * CST Cdb Ap Ctiapppulse Register
 * Causes event pulses to be generated on ECT channels.
 */
union cavm_cst_cdbx_ap_ctiapppulse
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiapppulse_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](WO) This field is RAZWI */
        uint32_t apppulse3             : 1;  /**< [  3:  3](WO) Generate event pulse on ECT channel &lt;x&gt;.
                                                                 Writing to this bit has the following effect: */
        uint32_t apppulse2             : 1;  /**< [  2:  2](WO) Generate event pulse on ECT channel &lt;x&gt;.
                                                                 Writing to this bit has the following effect: */
        uint32_t apppulse1             : 1;  /**< [  1:  1](WO) Generate event pulse on ECT channel &lt;x&gt;.
                                                                 Writing to this bit has the following effect: */
        uint32_t apppulse0             : 1;  /**< [  0:  0](WO) Generate event pulse on ECT channel &lt;x&gt;.
                                                                 Writing to this bit has the following effect: */
#else /* Word 0 - Little Endian */
        uint32_t apppulse0             : 1;  /**< [  0:  0](WO) Generate event pulse on ECT channel &lt;x&gt;.
                                                                 Writing to this bit has the following effect: */
        uint32_t apppulse1             : 1;  /**< [  1:  1](WO) Generate event pulse on ECT channel &lt;x&gt;.
                                                                 Writing to this bit has the following effect: */
        uint32_t apppulse2             : 1;  /**< [  2:  2](WO) Generate event pulse on ECT channel &lt;x&gt;.
                                                                 Writing to this bit has the following effect: */
        uint32_t apppulse3             : 1;  /**< [  3:  3](WO) Generate event pulse on ECT channel &lt;x&gt;.
                                                                 Writing to this bit has the following effect: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](WO) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiapppulse_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiapppulse cavm_cst_cdbx_ap_ctiapppulse_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIAPPPULSE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIAPPPULSE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a08001001cll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a08001001cll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a08001001cll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a08001001cll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIAPPPULSE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIAPPPULSE(a) cavm_cst_cdbx_ap_ctiapppulse_t
#define bustype_CAVM_CST_CDBX_AP_CTIAPPPULSE(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIAPPPULSE(a) "CST_CDBX_AP_CTIAPPPULSE"
#define busnum_CAVM_CST_CDBX_AP_CTIAPPPULSE(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIAPPPULSE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiappset
 *
 * CST Cdb Ap Ctiappset Register
 * Sets bits of the Application Trigger register.
 */
union cavm_cst_cdbx_ap_ctiappset
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiappset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t appset3               : 1;  /**< [  3:  3](R/W) Application trigger &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t appset2               : 1;  /**< [  2:  2](R/W) Application trigger &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t appset1               : 1;  /**< [  1:  1](R/W) Application trigger &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t appset0               : 1;  /**< [  0:  0](R/W) Application trigger &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t appset0               : 1;  /**< [  0:  0](R/W) Application trigger &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t appset1               : 1;  /**< [  1:  1](R/W) Application trigger &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t appset2               : 1;  /**< [  2:  2](R/W) Application trigger &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t appset3               : 1;  /**< [  3:  3](R/W) Application trigger &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiappset_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiappset cavm_cst_cdbx_ap_ctiappset_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIAPPSET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIAPPSET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010014ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010014ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010014ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010014ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIAPPSET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIAPPSET(a) cavm_cst_cdbx_ap_ctiappset_t
#define bustype_CAVM_CST_CDBX_AP_CTIAPPSET(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIAPPSET(a) "CST_CDBX_AP_CTIAPPSET"
#define busnum_CAVM_CST_CDBX_AP_CTIAPPSET(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIAPPSET(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiauthstatus
 *
 * CST Cdb Ap Ctiauthstatus Register
 * Provides information about the state of the authentication interface for CTI.
 */
union cavm_cst_cdbx_ap_ctiauthstatus
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiauthstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t raz                   : 4;  /**< [  7:  4](RO) This field is RAZ */
        uint32_t nsnid                 : 2;  /**< [  3:  2](RO) Holds the same value as ext-DBGAUTHSTATUS_EL1.SNID. */
        uint32_t nsid                  : 2;  /**< [  1:  0](RO) Holds the same value as ext-DBGAUTHSTATUS_EL1.SID. */
#else /* Word 0 - Little Endian */
        uint32_t nsid                  : 2;  /**< [  1:  0](RO) Holds the same value as ext-DBGAUTHSTATUS_EL1.SID. */
        uint32_t nsnid                 : 2;  /**< [  3:  2](RO) Holds the same value as ext-DBGAUTHSTATUS_EL1.SNID. */
        uint32_t raz                   : 4;  /**< [  7:  4](RO) This field is RAZ */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiauthstatus_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiauthstatus cavm_cst_cdbx_ap_ctiauthstatus_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIAUTHSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIAUTHSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010fb8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010fb8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010fb8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010fb8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIAUTHSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIAUTHSTATUS(a) cavm_cst_cdbx_ap_ctiauthstatus_t
#define bustype_CAVM_CST_CDBX_AP_CTIAUTHSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIAUTHSTATUS(a) "CST_CDBX_AP_CTIAUTHSTATUS"
#define busnum_CAVM_CST_CDBX_AP_CTIAUTHSTATUS(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIAUTHSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctichinstatus
 *
 * CST Cdb Ap Ctichinstatus Register
 * Provides the raw status of the ECT channel inputs to the CTI.
 */
union cavm_cst_cdbx_ap_ctichinstatus
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctichinstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz                   : 28; /**< [ 31:  4](RO) This field is RAZ */
        uint32_t chin3                 : 1;  /**< [  3:  3](RO) Input channel &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t chin2                 : 1;  /**< [  2:  2](RO) Input channel &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t chin1                 : 1;  /**< [  1:  1](RO) Input channel &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t chin0                 : 1;  /**< [  0:  0](RO) Input channel &lt;n&gt; status.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t chin0                 : 1;  /**< [  0:  0](RO) Input channel &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t chin1                 : 1;  /**< [  1:  1](RO) Input channel &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t chin2                 : 1;  /**< [  2:  2](RO) Input channel &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t chin3                 : 1;  /**< [  3:  3](RO) Input channel &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t raz                   : 28; /**< [ 31:  4](RO) This field is RAZ */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctichinstatus_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctichinstatus cavm_cst_cdbx_ap_ctichinstatus_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTICHINSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTICHINSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010138ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010138ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010138ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010138ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTICHINSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTICHINSTATUS(a) cavm_cst_cdbx_ap_ctichinstatus_t
#define bustype_CAVM_CST_CDBX_AP_CTICHINSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTICHINSTATUS(a) "CST_CDBX_AP_CTICHINSTATUS"
#define busnum_CAVM_CST_CDBX_AP_CTICHINSTATUS(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTICHINSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctichoutstatus
 *
 * CST Cdb Ap Ctichoutstatus Register
 * Provides the status of the ECT channel outputs from the CTI.
 */
union cavm_cst_cdbx_ap_ctichoutstatus
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctichoutstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz                   : 28; /**< [ 31:  4](RO) This field is RAZ */
        uint32_t chout3                : 1;  /**< [  3:  3](RO) Output channel &lt;n&gt; status.
                                                                 Possible values of this bit are:
                                                                 [note]The value in CTICHOUTSTATUS is after gating by the channel gate. For more
                                                                 information, see ext-CTIGATE.[/note] */
        uint32_t chout2                : 1;  /**< [  2:  2](RO) Output channel &lt;n&gt; status.
                                                                 Possible values of this bit are:
                                                                 [note]The value in CTICHOUTSTATUS is after gating by the channel gate. For more
                                                                 information, see ext-CTIGATE.[/note] */
        uint32_t chout1                : 1;  /**< [  1:  1](RO) Output channel &lt;n&gt; status.
                                                                 Possible values of this bit are:
                                                                 [note]The value in CTICHOUTSTATUS is after gating by the channel gate. For more
                                                                 information, see ext-CTIGATE.[/note] */
        uint32_t chout0                : 1;  /**< [  0:  0](RO) Output channel &lt;n&gt; status.
                                                                 Possible values of this bit are:
                                                                 [note]The value in CTICHOUTSTATUS is after gating by the channel gate. For more
                                                                 information, see ext-CTIGATE.[/note] */
#else /* Word 0 - Little Endian */
        uint32_t chout0                : 1;  /**< [  0:  0](RO) Output channel &lt;n&gt; status.
                                                                 Possible values of this bit are:
                                                                 [note]The value in CTICHOUTSTATUS is after gating by the channel gate. For more
                                                                 information, see ext-CTIGATE.[/note] */
        uint32_t chout1                : 1;  /**< [  1:  1](RO) Output channel &lt;n&gt; status.
                                                                 Possible values of this bit are:
                                                                 [note]The value in CTICHOUTSTATUS is after gating by the channel gate. For more
                                                                 information, see ext-CTIGATE.[/note] */
        uint32_t chout2                : 1;  /**< [  2:  2](RO) Output channel &lt;n&gt; status.
                                                                 Possible values of this bit are:
                                                                 [note]The value in CTICHOUTSTATUS is after gating by the channel gate. For more
                                                                 information, see ext-CTIGATE.[/note] */
        uint32_t chout3                : 1;  /**< [  3:  3](RO) Output channel &lt;n&gt; status.
                                                                 Possible values of this bit are:
                                                                 [note]The value in CTICHOUTSTATUS is after gating by the channel gate. For more
                                                                 information, see ext-CTIGATE.[/note] */
        uint32_t raz                   : 28; /**< [ 31:  4](RO) This field is RAZ */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctichoutstatus_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctichoutstatus cavm_cst_cdbx_ap_ctichoutstatus_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTICHOUTSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTICHOUTSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a08001013cll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a08001013cll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a08001013cll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a08001013cll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTICHOUTSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTICHOUTSTATUS(a) cavm_cst_cdbx_ap_ctichoutstatus_t
#define bustype_CAVM_CST_CDBX_AP_CTICHOUTSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTICHOUTSTATUS(a) "CST_CDBX_AP_CTICHOUTSTATUS"
#define busnum_CAVM_CST_CDBX_AP_CTICHOUTSTATUS(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTICHOUTSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_cticidr0
 *
 * CST Cdb Ap Cticidr0 Register
 * Provides information to identify a CTI component.
 */
union cavm_cst_cdbx_ap_cticidr0
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_cticidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_cticidr0_s cn; */
};
typedef union cavm_cst_cdbx_ap_cticidr0 cavm_cst_cdbx_ap_cticidr0_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTICIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTICIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010ff0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010ff0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010ff0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010ff0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTICIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTICIDR0(a) cavm_cst_cdbx_ap_cticidr0_t
#define bustype_CAVM_CST_CDBX_AP_CTICIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTICIDR0(a) "CST_CDBX_AP_CTICIDR0"
#define busnum_CAVM_CST_CDBX_AP_CTICIDR0(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTICIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_cticidr1
 *
 * CST Cdb Ap Cticidr1 Register
 * Provides information to identify a CTI component.
 */
union cavm_cst_cdbx_ap_cticidr1
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_cticidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t class_f               : 4;  /**< [  7:  4](RO) Component class. */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](RO) Preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](RO) Preamble. */
        uint32_t class_f               : 4;  /**< [  7:  4](RO) Component class. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_cticidr1_s cn; */
};
typedef union cavm_cst_cdbx_ap_cticidr1 cavm_cst_cdbx_ap_cticidr1_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTICIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTICIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010ff4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010ff4ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010ff4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010ff4ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTICIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTICIDR1(a) cavm_cst_cdbx_ap_cticidr1_t
#define bustype_CAVM_CST_CDBX_AP_CTICIDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTICIDR1(a) "CST_CDBX_AP_CTICIDR1"
#define busnum_CAVM_CST_CDBX_AP_CTICIDR1(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTICIDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_cticidr2
 *
 * CST Cdb Ap Cticidr2 Register
 * Provides information to identify a CTI component.
 */
union cavm_cst_cdbx_ap_cticidr2
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_cticidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_cticidr2_s cn; */
};
typedef union cavm_cst_cdbx_ap_cticidr2 cavm_cst_cdbx_ap_cticidr2_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTICIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTICIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010ff8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010ff8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010ff8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010ff8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTICIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTICIDR2(a) cavm_cst_cdbx_ap_cticidr2_t
#define bustype_CAVM_CST_CDBX_AP_CTICIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTICIDR2(a) "CST_CDBX_AP_CTICIDR2"
#define busnum_CAVM_CST_CDBX_AP_CTICIDR2(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTICIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_cticidr3
 *
 * CST Cdb Ap Cticidr3 Register
 * Provides information to identify a CTI component.
 */
union cavm_cst_cdbx_ap_cticidr3
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_cticidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_cticidr3_s cn; */
};
typedef union cavm_cst_cdbx_ap_cticidr3 cavm_cst_cdbx_ap_cticidr3_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTICIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTICIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010ffcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010ffcll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010ffcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010ffcll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTICIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTICIDR3(a) cavm_cst_cdbx_ap_cticidr3_t
#define bustype_CAVM_CST_CDBX_AP_CTICIDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTICIDR3(a) "CST_CDBX_AP_CTICIDR3"
#define busnum_CAVM_CST_CDBX_AP_CTICIDR3(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTICIDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_cticlaimclr
 *
 * CST Cdb Ap Cticlaimclr Register
 * Used by software to read the values of the CLAIM bits, and to clear these bits to 0.
 */
union cavm_cst_cdbx_ap_cticlaimclr
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_cticlaimclr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t claim3                : 1;  /**< [  3:  3](R/W) CLAIM tag clear bit. */
        uint32_t claim2                : 1;  /**< [  2:  2](R/W) CLAIM tag clear bit. */
        uint32_t claim1                : 1;  /**< [  1:  1](R/W) CLAIM tag clear bit. */
        uint32_t claim0                : 1;  /**< [  0:  0](R/W) CLAIM tag clear bit. */
#else /* Word 0 - Little Endian */
        uint32_t claim0                : 1;  /**< [  0:  0](R/W) CLAIM tag clear bit. */
        uint32_t claim1                : 1;  /**< [  1:  1](R/W) CLAIM tag clear bit. */
        uint32_t claim2                : 1;  /**< [  2:  2](R/W) CLAIM tag clear bit. */
        uint32_t claim3                : 1;  /**< [  3:  3](R/W) CLAIM tag clear bit. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_cticlaimclr_s cn; */
};
typedef union cavm_cst_cdbx_ap_cticlaimclr cavm_cst_cdbx_ap_cticlaimclr_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTICLAIMCLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTICLAIMCLR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010fa4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010fa4ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010fa4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010fa4ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTICLAIMCLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTICLAIMCLR(a) cavm_cst_cdbx_ap_cticlaimclr_t
#define bustype_CAVM_CST_CDBX_AP_CTICLAIMCLR(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTICLAIMCLR(a) "CST_CDBX_AP_CTICLAIMCLR"
#define busnum_CAVM_CST_CDBX_AP_CTICLAIMCLR(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTICLAIMCLR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_cticlaimset
 *
 * CST Cdb Ap Cticlaimset Register
 * Used by software to set CLAIM bits to 1.
 */
union cavm_cst_cdbx_ap_cticlaimset
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_cticlaimset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t claim3                : 1;  /**< [  3:  3](R/W) CLAIM tag set bit. */
        uint32_t claim2                : 1;  /**< [  2:  2](R/W) CLAIM tag set bit. */
        uint32_t claim1                : 1;  /**< [  1:  1](R/W) CLAIM tag set bit. */
        uint32_t claim0                : 1;  /**< [  0:  0](R/W) CLAIM tag set bit. */
#else /* Word 0 - Little Endian */
        uint32_t claim0                : 1;  /**< [  0:  0](R/W) CLAIM tag set bit. */
        uint32_t claim1                : 1;  /**< [  1:  1](R/W) CLAIM tag set bit. */
        uint32_t claim2                : 1;  /**< [  2:  2](R/W) CLAIM tag set bit. */
        uint32_t claim3                : 1;  /**< [  3:  3](R/W) CLAIM tag set bit. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_cticlaimset_s cn; */
};
typedef union cavm_cst_cdbx_ap_cticlaimset cavm_cst_cdbx_ap_cticlaimset_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTICLAIMSET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTICLAIMSET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010fa0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010fa0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010fa0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010fa0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTICLAIMSET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTICLAIMSET(a) cavm_cst_cdbx_ap_cticlaimset_t
#define bustype_CAVM_CST_CDBX_AP_CTICLAIMSET(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTICLAIMSET(a) "CST_CDBX_AP_CTICLAIMSET"
#define busnum_CAVM_CST_CDBX_AP_CTICLAIMSET(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTICLAIMSET(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_cticontrol
 *
 * CST Cdb Ap Cticontrol Register
 * Controls whether the CTI is enabled.
 */
union cavm_cst_cdbx_ap_cticontrol
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_cticontrol_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t glben                 : 1;  /**< [  0:  0](R/W) Enables or disables the CTI mapping functions. Possible values of this field are:
                                                                 When GLBEN is 0, the input channel to output trigger, input trigger to output
                                                                 channel, and application trigger functions are disabled and do not signal new
                                                                 events on either output triggers or output channels. If a previously asserted
                                                                 output trigger has not been acknowledged, it remains asserted after the mapping
                                                                 functions are disabled. All output triggers are disabled by CTI reset. */
#else /* Word 0 - Little Endian */
        uint32_t glben                 : 1;  /**< [  0:  0](R/W) Enables or disables the CTI mapping functions. Possible values of this field are:
                                                                 When GLBEN is 0, the input channel to output trigger, input trigger to output
                                                                 channel, and application trigger functions are disabled and do not signal new
                                                                 events on either output triggers or output channels. If a previously asserted
                                                                 output trigger has not been acknowledged, it remains asserted after the mapping
                                                                 functions are disabled. All output triggers are disabled by CTI reset. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_cticontrol_s cn; */
};
typedef union cavm_cst_cdbx_ap_cticontrol cavm_cst_cdbx_ap_cticontrol_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTICONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTICONTROL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010000ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010000ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010000ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010000ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTICONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTICONTROL(a) cavm_cst_cdbx_ap_cticontrol_t
#define bustype_CAVM_CST_CDBX_AP_CTICONTROL(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTICONTROL(a) "CST_CDBX_AP_CTICONTROL"
#define busnum_CAVM_CST_CDBX_AP_CTICONTROL(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTICONTROL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctidevaff0
 *
 * CST Cdb Ap Ctidevaff0 Register
 * Copy of the low half of the PE AArch64-MPIDR_EL1 register that allows a debugger to
 * determine which PE in a multiprocessor system the CTI component relates to.
 */
union cavm_cst_cdbx_ap_ctidevaff0
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctidevaff0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t mpidr_el1             : 32; /**< [ 31:  0](RO) This field is a read-only copy of the low half of any of the cores'
                                                                 AArch64-MPIDR_EL1, as seen from the highest implemented Exception level, but
                                                                 with bits [15:8] set to 0x80. */
#else /* Word 0 - Little Endian */
        uint32_t mpidr_el1             : 32; /**< [ 31:  0](RO) This field is a read-only copy of the low half of any of the cores'
                                                                 AArch64-MPIDR_EL1, as seen from the highest implemented Exception level, but
                                                                 with bits [15:8] set to 0x80. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctidevaff0_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctidevaff0 cavm_cst_cdbx_ap_ctidevaff0_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIDEVAFF0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIDEVAFF0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010fa8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010fa8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010fa8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010fa8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIDEVAFF0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIDEVAFF0(a) cavm_cst_cdbx_ap_ctidevaff0_t
#define bustype_CAVM_CST_CDBX_AP_CTIDEVAFF0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIDEVAFF0(a) "CST_CDBX_AP_CTIDEVAFF0"
#define busnum_CAVM_CST_CDBX_AP_CTIDEVAFF0(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIDEVAFF0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctidevaff1
 *
 * CST Cdb Ap Ctidevaff1 Register
 * Copy of the high half of the PE AArch64-MPIDR_EL1 register that allows a debugger to
 * determine which PE in a multiprocessor system the CTI component relates to.
 */
union cavm_cst_cdbx_ap_ctidevaff1
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctidevaff1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t mpidr_el1             : 32; /**< [ 31:  0](RO) This field is a read-only copy of the high half of any of the cores'
                                                                 AArch64-MPIDR_EL1, as seen from the highest implemented Exception level. */
#else /* Word 0 - Little Endian */
        uint32_t mpidr_el1             : 32; /**< [ 31:  0](RO) This field is a read-only copy of the high half of any of the cores'
                                                                 AArch64-MPIDR_EL1, as seen from the highest implemented Exception level. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctidevaff1_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctidevaff1 cavm_cst_cdbx_ap_ctidevaff1_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIDEVAFF1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIDEVAFF1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010facll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010facll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010facll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010facll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIDEVAFF1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIDEVAFF1(a) cavm_cst_cdbx_ap_ctidevaff1_t
#define bustype_CAVM_CST_CDBX_AP_CTIDEVAFF1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIDEVAFF1(a) "CST_CDBX_AP_CTIDEVAFF1"
#define busnum_CAVM_CST_CDBX_AP_CTIDEVAFF1(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIDEVAFF1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctidevarch
 *
 * CST Cdb Ap Ctidevarch Register
 * Identifies the programmers' model architecture of the CTI component.
 */
union cavm_cst_cdbx_ap_ctidevarch
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctidevarch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t architect             : 11; /**< [ 31: 21](RO) Architect. */
        uint32_t present               : 1;  /**< [ 20: 20](RO) Present. */
        uint32_t revision              : 4;  /**< [ 19: 16](RO) Revision. Defines the architecture revision of the component. */
        uint32_t archid                : 16; /**< [ 15:  0](RO) Architecture ID. */
#else /* Word 0 - Little Endian */
        uint32_t archid                : 16; /**< [ 15:  0](RO) Architecture ID. */
        uint32_t revision              : 4;  /**< [ 19: 16](RO) Revision. Defines the architecture revision of the component. */
        uint32_t present               : 1;  /**< [ 20: 20](RO) Present. */
        uint32_t architect             : 11; /**< [ 31: 21](RO) Architect. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctidevarch_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctidevarch cavm_cst_cdbx_ap_ctidevarch_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIDEVARCH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIDEVARCH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010fbcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010fbcll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010fbcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010fbcll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIDEVARCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIDEVARCH(a) cavm_cst_cdbx_ap_ctidevarch_t
#define bustype_CAVM_CST_CDBX_AP_CTIDEVARCH(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIDEVARCH(a) "CST_CDBX_AP_CTIDEVARCH"
#define busnum_CAVM_CST_CDBX_AP_CTIDEVARCH(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIDEVARCH(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctidevctl
 *
 * CST Cdb Ap Ctidevctl Register
 * Provides target-specific device controls
 */
union cavm_cst_cdbx_ap_ctidevctl
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctidevctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t rce                   : 1;  /**< [  1:  1](R/W) Reset Catch Enable. */
        uint32_t osuce                 : 1;  /**< [  0:  0](R/W) OS Unlock Catch Enable */
#else /* Word 0 - Little Endian */
        uint32_t osuce                 : 1;  /**< [  0:  0](R/W) OS Unlock Catch Enable */
        uint32_t rce                   : 1;  /**< [  1:  1](R/W) Reset Catch Enable. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctidevctl_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctidevctl cavm_cst_cdbx_ap_ctidevctl_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIDEVCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIDEVCTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010150ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010150ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010150ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010150ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIDEVCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIDEVCTL(a) cavm_cst_cdbx_ap_ctidevctl_t
#define bustype_CAVM_CST_CDBX_AP_CTIDEVCTL(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIDEVCTL(a) "CST_CDBX_AP_CTIDEVCTL"
#define busnum_CAVM_CST_CDBX_AP_CTIDEVCTL(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIDEVCTL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctidevid
 *
 * CST Cdb Ap Ctidevid Register
 * Describes the CTI component to the debugger.
 */
union cavm_cst_cdbx_ap_ctidevid
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctidevid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_26_31        : 6;
        uint32_t inout_f               : 2;  /**< [ 25: 24](RO) Input/output options. Indicates presence of the input gate.
                                                                 All other values are reserved. */
        uint32_t reserved_22_23        : 2;
        uint32_t numchan               : 6;  /**< [ 21: 16](RO) Number of ECT channels implemented. */
        uint32_t reserved_14_15        : 2;
        uint32_t numtrig               : 6;  /**< [ 13:  8](RO) Number of triggers implemented. */
        uint32_t reserved_5_7          : 3;
        uint32_t extmuxnum             : 5;  /**< [  4:  0](RO) Number of multiplexors available on triggers. This value is used in conjunction
                                                                 with External Control register, ext-ASICCTL. */
#else /* Word 0 - Little Endian */
        uint32_t extmuxnum             : 5;  /**< [  4:  0](RO) Number of multiplexors available on triggers. This value is used in conjunction
                                                                 with External Control register, ext-ASICCTL. */
        uint32_t reserved_5_7          : 3;
        uint32_t numtrig               : 6;  /**< [ 13:  8](RO) Number of triggers implemented. */
        uint32_t reserved_14_15        : 2;
        uint32_t numchan               : 6;  /**< [ 21: 16](RO) Number of ECT channels implemented. */
        uint32_t reserved_22_23        : 2;
        uint32_t inout_f               : 2;  /**< [ 25: 24](RO) Input/output options. Indicates presence of the input gate.
                                                                 All other values are reserved. */
        uint32_t reserved_26_31        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctidevid_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctidevid cavm_cst_cdbx_ap_ctidevid_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIDEVID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIDEVID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010fc8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010fc8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010fc8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010fc8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIDEVID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIDEVID(a) cavm_cst_cdbx_ap_ctidevid_t
#define bustype_CAVM_CST_CDBX_AP_CTIDEVID(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIDEVID(a) "CST_CDBX_AP_CTIDEVID"
#define busnum_CAVM_CST_CDBX_AP_CTIDEVID(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIDEVID(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctidevid1
 *
 * CST Cdb Ap Ctidevid1 Register
 * Reserved for future information about the CTI component to the debugger.
 */
union cavm_cst_cdbx_ap_ctidevid1
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctidevid1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctidevid1_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctidevid1 cavm_cst_cdbx_ap_ctidevid1_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIDEVID1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIDEVID1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010fc4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010fc4ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010fc4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010fc4ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIDEVID1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIDEVID1(a) cavm_cst_cdbx_ap_ctidevid1_t
#define bustype_CAVM_CST_CDBX_AP_CTIDEVID1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIDEVID1(a) "CST_CDBX_AP_CTIDEVID1"
#define busnum_CAVM_CST_CDBX_AP_CTIDEVID1(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIDEVID1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctidevid2
 *
 * CST Cdb Ap Ctidevid2 Register
 * Reserved for future information about the CTI component to the debugger.
 */
union cavm_cst_cdbx_ap_ctidevid2
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctidevid2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctidevid2_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctidevid2 cavm_cst_cdbx_ap_ctidevid2_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIDEVID2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIDEVID2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010fc0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010fc0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010fc0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010fc0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIDEVID2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIDEVID2(a) cavm_cst_cdbx_ap_ctidevid2_t
#define bustype_CAVM_CST_CDBX_AP_CTIDEVID2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIDEVID2(a) "CST_CDBX_AP_CTIDEVID2"
#define busnum_CAVM_CST_CDBX_AP_CTIDEVID2(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIDEVID2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctidevtype
 *
 * CST Cdb Ap Ctidevtype Register
 * Indicates to a debugger that this component is part of a PEs cross-trigger interface.
 */
union cavm_cst_cdbx_ap_ctidevtype
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctidevtype_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Subtype. */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major type. */
#else /* Word 0 - Little Endian */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major type. */
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Subtype. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctidevtype_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctidevtype cavm_cst_cdbx_ap_ctidevtype_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIDEVTYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIDEVTYPE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010fccll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010fccll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010fccll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010fccll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIDEVTYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIDEVTYPE(a) cavm_cst_cdbx_ap_ctidevtype_t
#define bustype_CAVM_CST_CDBX_AP_CTIDEVTYPE(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIDEVTYPE(a) "CST_CDBX_AP_CTIDEVTYPE"
#define busnum_CAVM_CST_CDBX_AP_CTIDEVTYPE(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIDEVTYPE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctigate
 *
 * CST Cdb Ap Ctigate Register
 * Determines whether events on channels propagate through the CTM to other ECT
 * components, or from the CTM into the CTI.
 */
union cavm_cst_cdbx_ap_ctigate
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctigate_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t gate3                 : 1;  /**< [  3:  3](R/W) Channel &lt;x&gt; gate enable.
                                                                 Possible values of this bit are:
                                                                 If GATE[x] is set to 0, no new events will be propagated to the ECT and any
                                                                 existing output channel events will be terminated. */
        uint32_t gate2                 : 1;  /**< [  2:  2](R/W) Channel &lt;x&gt; gate enable.
                                                                 Possible values of this bit are:
                                                                 If GATE[x] is set to 0, no new events will be propagated to the ECT and any
                                                                 existing output channel events will be terminated. */
        uint32_t gate1                 : 1;  /**< [  1:  1](R/W) Channel &lt;x&gt; gate enable.
                                                                 Possible values of this bit are:
                                                                 If GATE[x] is set to 0, no new events will be propagated to the ECT and any
                                                                 existing output channel events will be terminated. */
        uint32_t gate0                 : 1;  /**< [  0:  0](R/W) Channel &lt;x&gt; gate enable.
                                                                 Possible values of this bit are:
                                                                 If GATE[x] is set to 0, no new events will be propagated to the ECT and any
                                                                 existing output channel events will be terminated. */
#else /* Word 0 - Little Endian */
        uint32_t gate0                 : 1;  /**< [  0:  0](R/W) Channel &lt;x&gt; gate enable.
                                                                 Possible values of this bit are:
                                                                 If GATE[x] is set to 0, no new events will be propagated to the ECT and any
                                                                 existing output channel events will be terminated. */
        uint32_t gate1                 : 1;  /**< [  1:  1](R/W) Channel &lt;x&gt; gate enable.
                                                                 Possible values of this bit are:
                                                                 If GATE[x] is set to 0, no new events will be propagated to the ECT and any
                                                                 existing output channel events will be terminated. */
        uint32_t gate2                 : 1;  /**< [  2:  2](R/W) Channel &lt;x&gt; gate enable.
                                                                 Possible values of this bit are:
                                                                 If GATE[x] is set to 0, no new events will be propagated to the ECT and any
                                                                 existing output channel events will be terminated. */
        uint32_t gate3                 : 1;  /**< [  3:  3](R/W) Channel &lt;x&gt; gate enable.
                                                                 Possible values of this bit are:
                                                                 If GATE[x] is set to 0, no new events will be propagated to the ECT and any
                                                                 existing output channel events will be terminated. */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctigate_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctigate cavm_cst_cdbx_ap_ctigate_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIGATE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIGATE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010140ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010140ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010140ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010140ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIGATE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIGATE(a) cavm_cst_cdbx_ap_ctigate_t
#define bustype_CAVM_CST_CDBX_AP_CTIGATE(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIGATE(a) "CST_CDBX_AP_CTIGATE"
#define busnum_CAVM_CST_CDBX_AP_CTIGATE(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIGATE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiinen0
 *
 * CST Cdb Ap Ctiinen0 Register
 * Enables the signaling of an event on output channels when input trigger event n is
 * received by the CTI.
 */
union cavm_cst_cdbx_ap_ctiinen0
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiinen0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiinen0_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiinen0 cavm_cst_cdbx_ap_ctiinen0_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIINEN0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIINEN0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010020ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010020ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010020ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010020ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIINEN0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIINEN0(a) cavm_cst_cdbx_ap_ctiinen0_t
#define bustype_CAVM_CST_CDBX_AP_CTIINEN0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIINEN0(a) "CST_CDBX_AP_CTIINEN0"
#define busnum_CAVM_CST_CDBX_AP_CTIINEN0(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIINEN0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiinen1
 *
 * CST Cdb Ap Ctiinen1 Register
 * Enables the signaling of an event on output channels when input trigger event n is
 * received by the CTI.
 */
union cavm_cst_cdbx_ap_ctiinen1
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiinen1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiinen1_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiinen1 cavm_cst_cdbx_ap_ctiinen1_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIINEN1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIINEN1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010024ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010024ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010024ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010024ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIINEN1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIINEN1(a) cavm_cst_cdbx_ap_ctiinen1_t
#define bustype_CAVM_CST_CDBX_AP_CTIINEN1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIINEN1(a) "CST_CDBX_AP_CTIINEN1"
#define busnum_CAVM_CST_CDBX_AP_CTIINEN1(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIINEN1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiinen2
 *
 * CST Cdb Ap Ctiinen2 Register
 * Enables the signaling of an event on output channels when input trigger event n is
 * received by the CTI.
 */
union cavm_cst_cdbx_ap_ctiinen2
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiinen2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiinen2_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiinen2 cavm_cst_cdbx_ap_ctiinen2_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIINEN2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIINEN2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010028ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010028ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010028ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010028ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIINEN2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIINEN2(a) cavm_cst_cdbx_ap_ctiinen2_t
#define bustype_CAVM_CST_CDBX_AP_CTIINEN2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIINEN2(a) "CST_CDBX_AP_CTIINEN2"
#define busnum_CAVM_CST_CDBX_AP_CTIINEN2(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIINEN2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiinen3
 *
 * CST Cdb Ap Ctiinen3 Register
 * Enables the signaling of an event on output channels when input trigger event n is
 * received by the CTI.
 */
union cavm_cst_cdbx_ap_ctiinen3
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiinen3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiinen3_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiinen3 cavm_cst_cdbx_ap_ctiinen3_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIINEN3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIINEN3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a08001002cll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a08001002cll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a08001002cll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a08001002cll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIINEN3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIINEN3(a) cavm_cst_cdbx_ap_ctiinen3_t
#define bustype_CAVM_CST_CDBX_AP_CTIINEN3(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIINEN3(a) "CST_CDBX_AP_CTIINEN3"
#define busnum_CAVM_CST_CDBX_AP_CTIINEN3(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIINEN3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiinen4
 *
 * CST Cdb Ap Ctiinen4 Register
 * Enables the signaling of an event on output channels when input trigger event n is
 * received by the CTI.
 */
union cavm_cst_cdbx_ap_ctiinen4
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiinen4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiinen4_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiinen4 cavm_cst_cdbx_ap_ctiinen4_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIINEN4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIINEN4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010030ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010030ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010030ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010030ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIINEN4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIINEN4(a) cavm_cst_cdbx_ap_ctiinen4_t
#define bustype_CAVM_CST_CDBX_AP_CTIINEN4(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIINEN4(a) "CST_CDBX_AP_CTIINEN4"
#define busnum_CAVM_CST_CDBX_AP_CTIINEN4(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIINEN4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiinen5
 *
 * CST Cdb Ap Ctiinen5 Register
 * Enables the signaling of an event on output channels when input trigger event n is
 * received by the CTI.
 */
union cavm_cst_cdbx_ap_ctiinen5
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiinen5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiinen5_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiinen5 cavm_cst_cdbx_ap_ctiinen5_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIINEN5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIINEN5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010034ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010034ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010034ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010034ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIINEN5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIINEN5(a) cavm_cst_cdbx_ap_ctiinen5_t
#define bustype_CAVM_CST_CDBX_AP_CTIINEN5(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIINEN5(a) "CST_CDBX_AP_CTIINEN5"
#define busnum_CAVM_CST_CDBX_AP_CTIINEN5(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIINEN5(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiinen6
 *
 * CST Cdb Ap Ctiinen6 Register
 * Enables the signaling of an event on output channels when input trigger event n is
 * received by the CTI.
 */
union cavm_cst_cdbx_ap_ctiinen6
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiinen6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiinen6_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiinen6 cavm_cst_cdbx_ap_ctiinen6_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIINEN6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIINEN6(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010038ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010038ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010038ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010038ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIINEN6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIINEN6(a) cavm_cst_cdbx_ap_ctiinen6_t
#define bustype_CAVM_CST_CDBX_AP_CTIINEN6(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIINEN6(a) "CST_CDBX_AP_CTIINEN6"
#define busnum_CAVM_CST_CDBX_AP_CTIINEN6(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIINEN6(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiinen7
 *
 * CST Cdb Ap Ctiinen7 Register
 * Enables the signaling of an event on output channels when input trigger event n is
 * received by the CTI.
 */
union cavm_cst_cdbx_ap_ctiinen7
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiinen7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiinen7_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiinen7 cavm_cst_cdbx_ap_ctiinen7_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIINEN7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIINEN7(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a08001003cll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a08001003cll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a08001003cll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a08001003cll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIINEN7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIINEN7(a) cavm_cst_cdbx_ap_ctiinen7_t
#define bustype_CAVM_CST_CDBX_AP_CTIINEN7(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIINEN7(a) "CST_CDBX_AP_CTIINEN7"
#define busnum_CAVM_CST_CDBX_AP_CTIINEN7(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIINEN7(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiinen8
 *
 * CST Cdb Ap Ctiinen8 Register
 * Enables the signaling of an event on output channels when input trigger event n is
 * received by the CTI.
 */
union cavm_cst_cdbx_ap_ctiinen8
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiinen8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiinen8_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiinen8 cavm_cst_cdbx_ap_ctiinen8_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIINEN8(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIINEN8(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010040ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010040ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010040ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010040ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIINEN8", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIINEN8(a) cavm_cst_cdbx_ap_ctiinen8_t
#define bustype_CAVM_CST_CDBX_AP_CTIINEN8(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIINEN8(a) "CST_CDBX_AP_CTIINEN8"
#define busnum_CAVM_CST_CDBX_AP_CTIINEN8(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIINEN8(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiinen9
 *
 * CST Cdb Ap Ctiinen9 Register
 * Enables the signaling of an event on output channels when input trigger event n is
 * received by the CTI.
 */
union cavm_cst_cdbx_ap_ctiinen9
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiinen9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiinen9_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiinen9 cavm_cst_cdbx_ap_ctiinen9_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIINEN9(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIINEN9(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010044ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010044ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010044ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010044ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIINEN9", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIINEN9(a) cavm_cst_cdbx_ap_ctiinen9_t
#define bustype_CAVM_CST_CDBX_AP_CTIINEN9(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIINEN9(a) "CST_CDBX_AP_CTIINEN9"
#define busnum_CAVM_CST_CDBX_AP_CTIINEN9(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIINEN9(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiintack
 *
 * CST Cdb Ap Ctiintack Register
 * Can be used to deactivate the output triggers.
 */
union cavm_cst_cdbx_ap_ctiintack
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiintack_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 22; /**< [ 31: 10](WO) This field is RAZWI */
        uint32_t ack9                  : 1;  /**< [  9:  9](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack8                  : 1;  /**< [  8:  8](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack7                  : 1;  /**< [  7:  7](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack6                  : 1;  /**< [  6:  6](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack5                  : 1;  /**< [  5:  5](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack4                  : 1;  /**< [  4:  4](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack3                  : 1;  /**< [  3:  3](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack2                  : 1;  /**< [  2:  2](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack1                  : 1;  /**< [  1:  1](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack0                  : 1;  /**< [  0:  0](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
#else /* Word 0 - Little Endian */
        uint32_t ack0                  : 1;  /**< [  0:  0](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack1                  : 1;  /**< [  1:  1](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack2                  : 1;  /**< [  2:  2](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack3                  : 1;  /**< [  3:  3](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack4                  : 1;  /**< [  4:  4](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack5                  : 1;  /**< [  5:  5](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack6                  : 1;  /**< [  6:  6](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack7                  : 1;  /**< [  7:  7](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack8                  : 1;  /**< [  8:  8](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack9                  : 1;  /**< [  9:  9](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t raz_wi                : 22; /**< [ 31: 10](WO) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiintack_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiintack cavm_cst_cdbx_ap_ctiintack_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIINTACK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIINTACK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010010ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010010ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010010ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010010ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIINTACK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIINTACK(a) cavm_cst_cdbx_ap_ctiintack_t
#define bustype_CAVM_CST_CDBX_AP_CTIINTACK(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIINTACK(a) "CST_CDBX_AP_CTIINTACK"
#define busnum_CAVM_CST_CDBX_AP_CTIINTACK(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIINTACK(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiouten0
 *
 * CST Cdb Ap Ctiouten0 Register
 * Defines which input channels generate output trigger n.
 */
union cavm_cst_cdbx_ap_ctiouten0
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiouten0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiouten0_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiouten0 cavm_cst_cdbx_ap_ctiouten0_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIOUTEN0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIOUTEN0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0800100a0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0800100a0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0800100a0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0800100a0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIOUTEN0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIOUTEN0(a) cavm_cst_cdbx_ap_ctiouten0_t
#define bustype_CAVM_CST_CDBX_AP_CTIOUTEN0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIOUTEN0(a) "CST_CDBX_AP_CTIOUTEN0"
#define busnum_CAVM_CST_CDBX_AP_CTIOUTEN0(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIOUTEN0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiouten1
 *
 * CST Cdb Ap Ctiouten1 Register
 * Defines which input channels generate output trigger n.
 */
union cavm_cst_cdbx_ap_ctiouten1
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiouten1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiouten1_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiouten1 cavm_cst_cdbx_ap_ctiouten1_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIOUTEN1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIOUTEN1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0800100a4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0800100a4ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0800100a4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0800100a4ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIOUTEN1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIOUTEN1(a) cavm_cst_cdbx_ap_ctiouten1_t
#define bustype_CAVM_CST_CDBX_AP_CTIOUTEN1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIOUTEN1(a) "CST_CDBX_AP_CTIOUTEN1"
#define busnum_CAVM_CST_CDBX_AP_CTIOUTEN1(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIOUTEN1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiouten2
 *
 * CST Cdb Ap Ctiouten2 Register
 * Defines which input channels generate output trigger n.
 */
union cavm_cst_cdbx_ap_ctiouten2
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiouten2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiouten2_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiouten2 cavm_cst_cdbx_ap_ctiouten2_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIOUTEN2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIOUTEN2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0800100a8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0800100a8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0800100a8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0800100a8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIOUTEN2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIOUTEN2(a) cavm_cst_cdbx_ap_ctiouten2_t
#define bustype_CAVM_CST_CDBX_AP_CTIOUTEN2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIOUTEN2(a) "CST_CDBX_AP_CTIOUTEN2"
#define busnum_CAVM_CST_CDBX_AP_CTIOUTEN2(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIOUTEN2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiouten3
 *
 * CST Cdb Ap Ctiouten3 Register
 * Defines which input channels generate output trigger n.
 */
union cavm_cst_cdbx_ap_ctiouten3
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiouten3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiouten3_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiouten3 cavm_cst_cdbx_ap_ctiouten3_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIOUTEN3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIOUTEN3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0800100acll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0800100acll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0800100acll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0800100acll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIOUTEN3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIOUTEN3(a) cavm_cst_cdbx_ap_ctiouten3_t
#define bustype_CAVM_CST_CDBX_AP_CTIOUTEN3(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIOUTEN3(a) "CST_CDBX_AP_CTIOUTEN3"
#define busnum_CAVM_CST_CDBX_AP_CTIOUTEN3(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIOUTEN3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiouten4
 *
 * CST Cdb Ap Ctiouten4 Register
 * Defines which input channels generate output trigger n.
 */
union cavm_cst_cdbx_ap_ctiouten4
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiouten4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiouten4_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiouten4 cavm_cst_cdbx_ap_ctiouten4_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIOUTEN4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIOUTEN4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0800100b0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0800100b0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0800100b0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0800100b0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIOUTEN4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIOUTEN4(a) cavm_cst_cdbx_ap_ctiouten4_t
#define bustype_CAVM_CST_CDBX_AP_CTIOUTEN4(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIOUTEN4(a) "CST_CDBX_AP_CTIOUTEN4"
#define busnum_CAVM_CST_CDBX_AP_CTIOUTEN4(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIOUTEN4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiouten5
 *
 * CST Cdb Ap Ctiouten5 Register
 * Defines which input channels generate output trigger n.
 */
union cavm_cst_cdbx_ap_ctiouten5
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiouten5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiouten5_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiouten5 cavm_cst_cdbx_ap_ctiouten5_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIOUTEN5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIOUTEN5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0800100b4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0800100b4ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0800100b4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0800100b4ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIOUTEN5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIOUTEN5(a) cavm_cst_cdbx_ap_ctiouten5_t
#define bustype_CAVM_CST_CDBX_AP_CTIOUTEN5(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIOUTEN5(a) "CST_CDBX_AP_CTIOUTEN5"
#define busnum_CAVM_CST_CDBX_AP_CTIOUTEN5(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIOUTEN5(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiouten6
 *
 * CST Cdb Ap Ctiouten6 Register
 * Defines which input channels generate output trigger n.
 */
union cavm_cst_cdbx_ap_ctiouten6
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiouten6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiouten6_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiouten6 cavm_cst_cdbx_ap_ctiouten6_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIOUTEN6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIOUTEN6(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0800100b8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0800100b8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0800100b8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0800100b8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIOUTEN6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIOUTEN6(a) cavm_cst_cdbx_ap_ctiouten6_t
#define bustype_CAVM_CST_CDBX_AP_CTIOUTEN6(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIOUTEN6(a) "CST_CDBX_AP_CTIOUTEN6"
#define busnum_CAVM_CST_CDBX_AP_CTIOUTEN6(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIOUTEN6(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiouten7
 *
 * CST Cdb Ap Ctiouten7 Register
 * Defines which input channels generate output trigger n.
 */
union cavm_cst_cdbx_ap_ctiouten7
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiouten7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiouten7_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiouten7 cavm_cst_cdbx_ap_ctiouten7_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIOUTEN7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIOUTEN7(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0800100bcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0800100bcll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0800100bcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0800100bcll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIOUTEN7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIOUTEN7(a) cavm_cst_cdbx_ap_ctiouten7_t
#define bustype_CAVM_CST_CDBX_AP_CTIOUTEN7(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIOUTEN7(a) "CST_CDBX_AP_CTIOUTEN7"
#define busnum_CAVM_CST_CDBX_AP_CTIOUTEN7(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIOUTEN7(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiouten8
 *
 * CST Cdb Ap Ctiouten8 Register
 * Defines which input channels generate output trigger n.
 */
union cavm_cst_cdbx_ap_ctiouten8
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiouten8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiouten8_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiouten8 cavm_cst_cdbx_ap_ctiouten8_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIOUTEN8(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIOUTEN8(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0800100c0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0800100c0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0800100c0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0800100c0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIOUTEN8", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIOUTEN8(a) cavm_cst_cdbx_ap_ctiouten8_t
#define bustype_CAVM_CST_CDBX_AP_CTIOUTEN8(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIOUTEN8(a) "CST_CDBX_AP_CTIOUTEN8"
#define busnum_CAVM_CST_CDBX_AP_CTIOUTEN8(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIOUTEN8(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctiouten9
 *
 * CST Cdb Ap Ctiouten9 Register
 * Defines which input channels generate output trigger n.
 */
union cavm_cst_cdbx_ap_ctiouten9
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctiouten9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctiouten9_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctiouten9 cavm_cst_cdbx_ap_ctiouten9_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIOUTEN9(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIOUTEN9(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0800100c4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0800100c4ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0800100c4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0800100c4ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIOUTEN9", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIOUTEN9(a) cavm_cst_cdbx_ap_ctiouten9_t
#define bustype_CAVM_CST_CDBX_AP_CTIOUTEN9(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIOUTEN9(a) "CST_CDBX_AP_CTIOUTEN9"
#define busnum_CAVM_CST_CDBX_AP_CTIOUTEN9(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIOUTEN9(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctipidr0
 *
 * CST Cdb Ap Ctipidr0 Register
 * Provides information to identify a CTI component.
 */
union cavm_cst_cdbx_ap_ctipidr0
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctipidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number bits [7:0]. */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number bits [7:0]. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctipidr0_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctipidr0 cavm_cst_cdbx_ap_ctipidr0_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIPIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIPIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010fe0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010fe0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010fe0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010fe0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIPIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIPIDR0(a) cavm_cst_cdbx_ap_ctipidr0_t
#define bustype_CAVM_CST_CDBX_AP_CTIPIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIPIDR0(a) "CST_CDBX_AP_CTIPIDR0"
#define busnum_CAVM_CST_CDBX_AP_CTIPIDR0(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIPIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctipidr1
 *
 * CST Cdb Ap Ctipidr1 Register
 * Provides information to identify a CTI component.
 */
union cavm_cst_cdbx_ap_ctipidr1
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctipidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t des_0                 : 4;  /**< [  7:  4](RO) JEP106 identification code bits [3:0]. */
        uint32_t part_1                : 4;  /**< [  3:  0](RO) Part number bits [11:8]. */
#else /* Word 0 - Little Endian */
        uint32_t part_1                : 4;  /**< [  3:  0](RO) Part number bits [11:8]. */
        uint32_t des_0                 : 4;  /**< [  7:  4](RO) JEP106 identification code bits [3:0]. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctipidr1_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctipidr1 cavm_cst_cdbx_ap_ctipidr1_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIPIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIPIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010fe4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010fe4ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010fe4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010fe4ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIPIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIPIDR1(a) cavm_cst_cdbx_ap_ctipidr1_t
#define bustype_CAVM_CST_CDBX_AP_CTIPIDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIPIDR1(a) "CST_CDBX_AP_CTIPIDR1"
#define busnum_CAVM_CST_CDBX_AP_CTIPIDR1(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIPIDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctipidr2
 *
 * CST Cdb Ap Ctipidr2 Register
 * Provides information to identify a CTI component.
 */
union cavm_cst_cdbx_ap_ctipidr2
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctipidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revision              : 4;  /**< [  7:  4](RO) Component major revision.
                                                                 For Theodul:
                                                                 - Major revision 0 corresponds to r0p0.
                                                                 - Major revision 1 corresponds to r1p0.
                                                                 - Major revision 2 corresponds to r2p0. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) JEDEC assignee. */
        uint32_t des_1                 : 3;  /**< [  2:  0](RO) JEP106 identification code bits [6:4]. */
#else /* Word 0 - Little Endian */
        uint32_t des_1                 : 3;  /**< [  2:  0](RO) JEP106 identification code bits [6:4]. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) JEDEC assignee. */
        uint32_t revision              : 4;  /**< [  7:  4](RO) Component major revision.
                                                                 For Theodul:
                                                                 - Major revision 0 corresponds to r0p0.
                                                                 - Major revision 1 corresponds to r1p0.
                                                                 - Major revision 2 corresponds to r2p0. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctipidr2_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctipidr2 cavm_cst_cdbx_ap_ctipidr2_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIPIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIPIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010fe8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010fe8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010fe8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010fe8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIPIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIPIDR2(a) cavm_cst_cdbx_ap_ctipidr2_t
#define bustype_CAVM_CST_CDBX_AP_CTIPIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIPIDR2(a) "CST_CDBX_AP_CTIPIDR2"
#define busnum_CAVM_CST_CDBX_AP_CTIPIDR2(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIPIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctipidr3
 *
 * CST Cdb Ap Ctipidr3 Register
 * Provides information to identify a CTI component.
 */
union cavm_cst_cdbx_ap_ctipidr3
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctipidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revand                : 4;  /**< [  7:  4](RO) Component minor revision. */
        uint32_t cmod                  : 4;  /**< [  3:  0](RO) Customer Modified. */
#else /* Word 0 - Little Endian */
        uint32_t cmod                  : 4;  /**< [  3:  0](RO) Customer Modified. */
        uint32_t revand                : 4;  /**< [  7:  4](RO) Component minor revision. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctipidr3_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctipidr3 cavm_cst_cdbx_ap_ctipidr3_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIPIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIPIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010fecll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010fecll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010fecll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010fecll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIPIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIPIDR3(a) cavm_cst_cdbx_ap_ctipidr3_t
#define bustype_CAVM_CST_CDBX_AP_CTIPIDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIPIDR3(a) "CST_CDBX_AP_CTIPIDR3"
#define busnum_CAVM_CST_CDBX_AP_CTIPIDR3(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIPIDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctipidr4
 *
 * CST Cdb Ap Ctipidr4 Register
 * Provides information to identify a CTI component.
 */
union cavm_cst_cdbx_ap_ctipidr4
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctipidr4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t size                  : 4;  /**< [  7:  4](RO) 4KB count. */
        uint32_t des_2                 : 4;  /**< [  3:  0](RO) JEP106 continuation code. */
#else /* Word 0 - Little Endian */
        uint32_t des_2                 : 4;  /**< [  3:  0](RO) JEP106 continuation code. */
        uint32_t size                  : 4;  /**< [  7:  4](RO) 4KB count. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctipidr4_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctipidr4 cavm_cst_cdbx_ap_ctipidr4_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTIPIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTIPIDR4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010fd0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010fd0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010fd0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010fd0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTIPIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTIPIDR4(a) cavm_cst_cdbx_ap_ctipidr4_t
#define bustype_CAVM_CST_CDBX_AP_CTIPIDR4(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTIPIDR4(a) "CST_CDBX_AP_CTIPIDR4"
#define busnum_CAVM_CST_CDBX_AP_CTIPIDR4(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTIPIDR4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctitriginstatus
 *
 * CST Cdb Ap Ctitriginstatus Register
 * Provides the status of the trigger inputs.
 */
union cavm_cst_cdbx_ap_ctitriginstatus
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctitriginstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz                   : 22; /**< [ 31: 10](RO) This field is RAZ */
        uint32_t trin9                 : 1;  /**< [  9:  9](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin8                 : 1;  /**< [  8:  8](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin7                 : 1;  /**< [  7:  7](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin6                 : 1;  /**< [  6:  6](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin5                 : 1;  /**< [  5:  5](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin4                 : 1;  /**< [  4:  4](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin3                 : 1;  /**< [  3:  3](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin2                 : 1;  /**< [  2:  2](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin1                 : 1;  /**< [  1:  1](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin0                 : 1;  /**< [  0:  0](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t trin0                 : 1;  /**< [  0:  0](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin1                 : 1;  /**< [  1:  1](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin2                 : 1;  /**< [  2:  2](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin3                 : 1;  /**< [  3:  3](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin4                 : 1;  /**< [  4:  4](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin5                 : 1;  /**< [  5:  5](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin6                 : 1;  /**< [  6:  6](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin7                 : 1;  /**< [  7:  7](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin8                 : 1;  /**< [  8:  8](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin9                 : 1;  /**< [  9:  9](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t raz                   : 22; /**< [ 31: 10](RO) This field is RAZ */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctitriginstatus_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctitriginstatus cavm_cst_cdbx_ap_ctitriginstatus_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTITRIGINSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTITRIGINSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010130ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010130ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010130ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010130ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTITRIGINSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTITRIGINSTATUS(a) cavm_cst_cdbx_ap_ctitriginstatus_t
#define bustype_CAVM_CST_CDBX_AP_CTITRIGINSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTITRIGINSTATUS(a) "CST_CDBX_AP_CTITRIGINSTATUS"
#define busnum_CAVM_CST_CDBX_AP_CTITRIGINSTATUS(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTITRIGINSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_ap_ctitrigoutstatus
 *
 * CST Cdb Ap Ctitrigoutstatus Register
 * Provides the raw status of the trigger outputs after processing by trigger interface logic.
 */
union cavm_cst_cdbx_ap_ctitrigoutstatus
{
    uint32_t u;
    struct cavm_cst_cdbx_ap_ctitrigoutstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz                   : 22; /**< [ 31: 10](RO) This field is RAZ */
        uint32_t trout9                : 1;  /**< [  9:  9](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout8                : 1;  /**< [  8:  8](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout7                : 1;  /**< [  7:  7](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout6                : 1;  /**< [  6:  6](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout5                : 1;  /**< [  5:  5](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout4                : 1;  /**< [  4:  4](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout3                : 1;  /**< [  3:  3](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout2                : 1;  /**< [  2:  2](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout1                : 1;  /**< [  1:  1](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout0                : 1;  /**< [  0:  0](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
#else /* Word 0 - Little Endian */
        uint32_t trout0                : 1;  /**< [  0:  0](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout1                : 1;  /**< [  1:  1](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout2                : 1;  /**< [  2:  2](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout3                : 1;  /**< [  3:  3](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout4                : 1;  /**< [  4:  4](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout5                : 1;  /**< [  5:  5](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout6                : 1;  /**< [  6:  6](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout7                : 1;  /**< [  7:  7](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout8                : 1;  /**< [  8:  8](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout9                : 1;  /**< [  9:  9](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t raz                   : 22; /**< [ 31: 10](RO) This field is RAZ */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_ap_ctitrigoutstatus_s cn; */
};
typedef union cavm_cst_cdbx_ap_ctitrigoutstatus cavm_cst_cdbx_ap_ctitrigoutstatus_t;

static inline uint64_t CAVM_CST_CDBX_AP_CTITRIGOUTSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_AP_CTITRIGOUTSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080010134ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080010134ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080010134ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080010134ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_AP_CTITRIGOUTSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_AP_CTITRIGOUTSTATUS(a) cavm_cst_cdbx_ap_ctitrigoutstatus_t
#define bustype_CAVM_CST_CDBX_AP_CTITRIGOUTSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_AP_CTITRIGOUTSTATUS(a) "CST_CDBX_AP_CTITRIGOUTSTATUS"
#define busnum_CAVM_CST_CDBX_AP_CTITRIGOUTSTATUS(a) (a)
#define arguments_CAVM_CST_CDBX_AP_CTITRIGOUTSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiappclear
 *
 * CST Cdb Cluster Ctiappclear Register
 * Clears bits of the Application Trigger register.
 */
union cavm_cst_cdbx_cluster_ctiappclear
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiappclear_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](WO) This field is RAZWI */
        uint32_t appclear3             : 1;  /**< [  3:  3](WO) Application trigger &lt;x&gt; disable.
                                                                 Writing to this bit has the following effect: */
        uint32_t appclear2             : 1;  /**< [  2:  2](WO) Application trigger &lt;x&gt; disable.
                                                                 Writing to this bit has the following effect: */
        uint32_t appclear1             : 1;  /**< [  1:  1](WO) Application trigger &lt;x&gt; disable.
                                                                 Writing to this bit has the following effect: */
        uint32_t appclear0             : 1;  /**< [  0:  0](WO) Application trigger &lt;x&gt; disable.
                                                                 Writing to this bit has the following effect: */
#else /* Word 0 - Little Endian */
        uint32_t appclear0             : 1;  /**< [  0:  0](WO) Application trigger &lt;x&gt; disable.
                                                                 Writing to this bit has the following effect: */
        uint32_t appclear1             : 1;  /**< [  1:  1](WO) Application trigger &lt;x&gt; disable.
                                                                 Writing to this bit has the following effect: */
        uint32_t appclear2             : 1;  /**< [  2:  2](WO) Application trigger &lt;x&gt; disable.
                                                                 Writing to this bit has the following effect: */
        uint32_t appclear3             : 1;  /**< [  3:  3](WO) Application trigger &lt;x&gt; disable.
                                                                 Writing to this bit has the following effect: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](WO) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiappclear_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiappclear cavm_cst_cdbx_cluster_ctiappclear_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIAPPCLEAR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIAPPCLEAR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230018ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230018ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230018ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230018ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIAPPCLEAR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIAPPCLEAR(a) cavm_cst_cdbx_cluster_ctiappclear_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIAPPCLEAR(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIAPPCLEAR(a) "CST_CDBX_CLUSTER_CTIAPPCLEAR"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIAPPCLEAR(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIAPPCLEAR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiapppulse
 *
 * CST Cdb Cluster Ctiapppulse Register
 * Causes event pulses to be generated on ECT channels.
 */
union cavm_cst_cdbx_cluster_ctiapppulse
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiapppulse_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](WO) This field is RAZWI */
        uint32_t apppulse3             : 1;  /**< [  3:  3](WO) Generate event pulse on ECT channel &lt;x&gt;.
                                                                 Writing to this bit has the following effect: */
        uint32_t apppulse2             : 1;  /**< [  2:  2](WO) Generate event pulse on ECT channel &lt;x&gt;.
                                                                 Writing to this bit has the following effect: */
        uint32_t apppulse1             : 1;  /**< [  1:  1](WO) Generate event pulse on ECT channel &lt;x&gt;.
                                                                 Writing to this bit has the following effect: */
        uint32_t apppulse0             : 1;  /**< [  0:  0](WO) Generate event pulse on ECT channel &lt;x&gt;.
                                                                 Writing to this bit has the following effect: */
#else /* Word 0 - Little Endian */
        uint32_t apppulse0             : 1;  /**< [  0:  0](WO) Generate event pulse on ECT channel &lt;x&gt;.
                                                                 Writing to this bit has the following effect: */
        uint32_t apppulse1             : 1;  /**< [  1:  1](WO) Generate event pulse on ECT channel &lt;x&gt;.
                                                                 Writing to this bit has the following effect: */
        uint32_t apppulse2             : 1;  /**< [  2:  2](WO) Generate event pulse on ECT channel &lt;x&gt;.
                                                                 Writing to this bit has the following effect: */
        uint32_t apppulse3             : 1;  /**< [  3:  3](WO) Generate event pulse on ECT channel &lt;x&gt;.
                                                                 Writing to this bit has the following effect: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](WO) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiapppulse_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiapppulse cavm_cst_cdbx_cluster_ctiapppulse_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIAPPPULSE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIAPPPULSE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a08023001cll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a08023001cll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a08023001cll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a08023001cll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIAPPPULSE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIAPPPULSE(a) cavm_cst_cdbx_cluster_ctiapppulse_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIAPPPULSE(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIAPPPULSE(a) "CST_CDBX_CLUSTER_CTIAPPPULSE"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIAPPPULSE(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIAPPPULSE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiappset
 *
 * CST Cdb Cluster Ctiappset Register
 * Sets bits of the Application Trigger register.
 */
union cavm_cst_cdbx_cluster_ctiappset
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiappset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t appset3               : 1;  /**< [  3:  3](R/W) Application trigger &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t appset2               : 1;  /**< [  2:  2](R/W) Application trigger &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t appset1               : 1;  /**< [  1:  1](R/W) Application trigger &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t appset0               : 1;  /**< [  0:  0](R/W) Application trigger &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t appset0               : 1;  /**< [  0:  0](R/W) Application trigger &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t appset1               : 1;  /**< [  1:  1](R/W) Application trigger &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t appset2               : 1;  /**< [  2:  2](R/W) Application trigger &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t appset3               : 1;  /**< [  3:  3](R/W) Application trigger &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiappset_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiappset cavm_cst_cdbx_cluster_ctiappset_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIAPPSET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIAPPSET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230014ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230014ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230014ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230014ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIAPPSET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIAPPSET(a) cavm_cst_cdbx_cluster_ctiappset_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIAPPSET(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIAPPSET(a) "CST_CDBX_CLUSTER_CTIAPPSET"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIAPPSET(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIAPPSET(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiauthstatus
 *
 * CST Cdb Cluster Ctiauthstatus Register
 * Provides information about the state of the authentication interface for CTI.
 */
union cavm_cst_cdbx_cluster_ctiauthstatus
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiauthstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t raz                   : 4;  /**< [  7:  4](RO) This field is RAZ */
        uint32_t nsnid                 : 2;  /**< [  3:  2](RO) Holds the same value as ext-DBGAUTHSTATUS_EL1.SNID. */
        uint32_t nsid                  : 2;  /**< [  1:  0](RO) Holds the same value as ext-DBGAUTHSTATUS_EL1.SID. */
#else /* Word 0 - Little Endian */
        uint32_t nsid                  : 2;  /**< [  1:  0](RO) Holds the same value as ext-DBGAUTHSTATUS_EL1.SID. */
        uint32_t nsnid                 : 2;  /**< [  3:  2](RO) Holds the same value as ext-DBGAUTHSTATUS_EL1.SNID. */
        uint32_t raz                   : 4;  /**< [  7:  4](RO) This field is RAZ */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiauthstatus_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiauthstatus cavm_cst_cdbx_cluster_ctiauthstatus_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIAUTHSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIAUTHSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230fb8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230fb8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230fb8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230fb8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIAUTHSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIAUTHSTATUS(a) cavm_cst_cdbx_cluster_ctiauthstatus_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIAUTHSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIAUTHSTATUS(a) "CST_CDBX_CLUSTER_CTIAUTHSTATUS"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIAUTHSTATUS(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIAUTHSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctichinstatus
 *
 * CST Cdb Cluster Ctichinstatus Register
 * Provides the raw status of the ECT channel inputs to the CTI.
 */
union cavm_cst_cdbx_cluster_ctichinstatus
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctichinstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz                   : 28; /**< [ 31:  4](RO) This field is RAZ */
        uint32_t chin3                 : 1;  /**< [  3:  3](RO) Input channel &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t chin2                 : 1;  /**< [  2:  2](RO) Input channel &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t chin1                 : 1;  /**< [  1:  1](RO) Input channel &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t chin0                 : 1;  /**< [  0:  0](RO) Input channel &lt;n&gt; status.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t chin0                 : 1;  /**< [  0:  0](RO) Input channel &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t chin1                 : 1;  /**< [  1:  1](RO) Input channel &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t chin2                 : 1;  /**< [  2:  2](RO) Input channel &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t chin3                 : 1;  /**< [  3:  3](RO) Input channel &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t raz                   : 28; /**< [ 31:  4](RO) This field is RAZ */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctichinstatus_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctichinstatus cavm_cst_cdbx_cluster_ctichinstatus_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTICHINSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTICHINSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230138ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230138ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230138ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230138ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTICHINSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTICHINSTATUS(a) cavm_cst_cdbx_cluster_ctichinstatus_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTICHINSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTICHINSTATUS(a) "CST_CDBX_CLUSTER_CTICHINSTATUS"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTICHINSTATUS(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTICHINSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctichoutstatus
 *
 * CST Cdb Cluster Ctichoutstatus Register
 * Provides the status of the ECT channel outputs from the CTI.
 */
union cavm_cst_cdbx_cluster_ctichoutstatus
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctichoutstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz                   : 28; /**< [ 31:  4](RO) This field is RAZ */
        uint32_t chout3                : 1;  /**< [  3:  3](RO) Output channel &lt;n&gt; status.
                                                                 Possible values of this bit are:
                                                                 [note]The value in CTICHOUTSTATUS is after gating by the channel gate. For more
                                                                 information, see ext-CTIGATE.[/note] */
        uint32_t chout2                : 1;  /**< [  2:  2](RO) Output channel &lt;n&gt; status.
                                                                 Possible values of this bit are:
                                                                 [note]The value in CTICHOUTSTATUS is after gating by the channel gate. For more
                                                                 information, see ext-CTIGATE.[/note] */
        uint32_t chout1                : 1;  /**< [  1:  1](RO) Output channel &lt;n&gt; status.
                                                                 Possible values of this bit are:
                                                                 [note]The value in CTICHOUTSTATUS is after gating by the channel gate. For more
                                                                 information, see ext-CTIGATE.[/note] */
        uint32_t chout0                : 1;  /**< [  0:  0](RO) Output channel &lt;n&gt; status.
                                                                 Possible values of this bit are:
                                                                 [note]The value in CTICHOUTSTATUS is after gating by the channel gate. For more
                                                                 information, see ext-CTIGATE.[/note] */
#else /* Word 0 - Little Endian */
        uint32_t chout0                : 1;  /**< [  0:  0](RO) Output channel &lt;n&gt; status.
                                                                 Possible values of this bit are:
                                                                 [note]The value in CTICHOUTSTATUS is after gating by the channel gate. For more
                                                                 information, see ext-CTIGATE.[/note] */
        uint32_t chout1                : 1;  /**< [  1:  1](RO) Output channel &lt;n&gt; status.
                                                                 Possible values of this bit are:
                                                                 [note]The value in CTICHOUTSTATUS is after gating by the channel gate. For more
                                                                 information, see ext-CTIGATE.[/note] */
        uint32_t chout2                : 1;  /**< [  2:  2](RO) Output channel &lt;n&gt; status.
                                                                 Possible values of this bit are:
                                                                 [note]The value in CTICHOUTSTATUS is after gating by the channel gate. For more
                                                                 information, see ext-CTIGATE.[/note] */
        uint32_t chout3                : 1;  /**< [  3:  3](RO) Output channel &lt;n&gt; status.
                                                                 Possible values of this bit are:
                                                                 [note]The value in CTICHOUTSTATUS is after gating by the channel gate. For more
                                                                 information, see ext-CTIGATE.[/note] */
        uint32_t raz                   : 28; /**< [ 31:  4](RO) This field is RAZ */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctichoutstatus_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctichoutstatus cavm_cst_cdbx_cluster_ctichoutstatus_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTICHOUTSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTICHOUTSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a08023013cll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a08023013cll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a08023013cll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a08023013cll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTICHOUTSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTICHOUTSTATUS(a) cavm_cst_cdbx_cluster_ctichoutstatus_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTICHOUTSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTICHOUTSTATUS(a) "CST_CDBX_CLUSTER_CTICHOUTSTATUS"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTICHOUTSTATUS(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTICHOUTSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_cticidr0
 *
 * CST Cdb Cluster Cticidr0 Register
 * Provides information to identify a CTI component.
 */
union cavm_cst_cdbx_cluster_cticidr0
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_cticidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) Preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_cticidr0_s cn; */
};
typedef union cavm_cst_cdbx_cluster_cticidr0 cavm_cst_cdbx_cluster_cticidr0_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTICIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTICIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230ff0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230ff0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230ff0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230ff0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTICIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTICIDR0(a) cavm_cst_cdbx_cluster_cticidr0_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTICIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTICIDR0(a) "CST_CDBX_CLUSTER_CTICIDR0"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTICIDR0(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTICIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_cticidr1
 *
 * CST Cdb Cluster Cticidr1 Register
 * Provides information to identify a CTI component.
 */
union cavm_cst_cdbx_cluster_cticidr1
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_cticidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t class_f               : 4;  /**< [  7:  4](RO) Component class. */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](RO) Preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](RO) Preamble. */
        uint32_t class_f               : 4;  /**< [  7:  4](RO) Component class. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_cticidr1_s cn; */
};
typedef union cavm_cst_cdbx_cluster_cticidr1 cavm_cst_cdbx_cluster_cticidr1_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTICIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTICIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230ff4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230ff4ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230ff4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230ff4ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTICIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTICIDR1(a) cavm_cst_cdbx_cluster_cticidr1_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTICIDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTICIDR1(a) "CST_CDBX_CLUSTER_CTICIDR1"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTICIDR1(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTICIDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_cticidr2
 *
 * CST Cdb Cluster Cticidr2 Register
 * Provides information to identify a CTI component.
 */
union cavm_cst_cdbx_cluster_cticidr2
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_cticidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) Preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_cticidr2_s cn; */
};
typedef union cavm_cst_cdbx_cluster_cticidr2 cavm_cst_cdbx_cluster_cticidr2_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTICIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTICIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230ff8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230ff8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230ff8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230ff8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTICIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTICIDR2(a) cavm_cst_cdbx_cluster_cticidr2_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTICIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTICIDR2(a) "CST_CDBX_CLUSTER_CTICIDR2"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTICIDR2(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTICIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_cticidr3
 *
 * CST Cdb Cluster Cticidr3 Register
 * Provides information to identify a CTI component.
 */
union cavm_cst_cdbx_cluster_cticidr3
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_cticidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) Preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_cticidr3_s cn; */
};
typedef union cavm_cst_cdbx_cluster_cticidr3 cavm_cst_cdbx_cluster_cticidr3_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTICIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTICIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230ffcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230ffcll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230ffcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230ffcll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTICIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTICIDR3(a) cavm_cst_cdbx_cluster_cticidr3_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTICIDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTICIDR3(a) "CST_CDBX_CLUSTER_CTICIDR3"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTICIDR3(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTICIDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_cticlaimclr
 *
 * CST Cdb Cluster Cticlaimclr Register
 * Used by software to read the values of the CLAIM bits, and to clear these bits to 0.
 */
union cavm_cst_cdbx_cluster_cticlaimclr
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_cticlaimclr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t claim3                : 1;  /**< [  3:  3](R/W) CLAIM tag clear bit. */
        uint32_t claim2                : 1;  /**< [  2:  2](R/W) CLAIM tag clear bit. */
        uint32_t claim1                : 1;  /**< [  1:  1](R/W) CLAIM tag clear bit. */
        uint32_t claim0                : 1;  /**< [  0:  0](R/W) CLAIM tag clear bit. */
#else /* Word 0 - Little Endian */
        uint32_t claim0                : 1;  /**< [  0:  0](R/W) CLAIM tag clear bit. */
        uint32_t claim1                : 1;  /**< [  1:  1](R/W) CLAIM tag clear bit. */
        uint32_t claim2                : 1;  /**< [  2:  2](R/W) CLAIM tag clear bit. */
        uint32_t claim3                : 1;  /**< [  3:  3](R/W) CLAIM tag clear bit. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_cticlaimclr_s cn; */
};
typedef union cavm_cst_cdbx_cluster_cticlaimclr cavm_cst_cdbx_cluster_cticlaimclr_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTICLAIMCLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTICLAIMCLR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230fa4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230fa4ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230fa4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230fa4ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTICLAIMCLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTICLAIMCLR(a) cavm_cst_cdbx_cluster_cticlaimclr_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTICLAIMCLR(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTICLAIMCLR(a) "CST_CDBX_CLUSTER_CTICLAIMCLR"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTICLAIMCLR(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTICLAIMCLR(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_cticlaimset
 *
 * CST Cdb Cluster Cticlaimset Register
 * Used by software to set CLAIM bits to 1.
 */
union cavm_cst_cdbx_cluster_cticlaimset
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_cticlaimset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t claim3                : 1;  /**< [  3:  3](R/W) CLAIM tag set bit. */
        uint32_t claim2                : 1;  /**< [  2:  2](R/W) CLAIM tag set bit. */
        uint32_t claim1                : 1;  /**< [  1:  1](R/W) CLAIM tag set bit. */
        uint32_t claim0                : 1;  /**< [  0:  0](R/W) CLAIM tag set bit. */
#else /* Word 0 - Little Endian */
        uint32_t claim0                : 1;  /**< [  0:  0](R/W) CLAIM tag set bit. */
        uint32_t claim1                : 1;  /**< [  1:  1](R/W) CLAIM tag set bit. */
        uint32_t claim2                : 1;  /**< [  2:  2](R/W) CLAIM tag set bit. */
        uint32_t claim3                : 1;  /**< [  3:  3](R/W) CLAIM tag set bit. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_cticlaimset_s cn; */
};
typedef union cavm_cst_cdbx_cluster_cticlaimset cavm_cst_cdbx_cluster_cticlaimset_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTICLAIMSET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTICLAIMSET(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230fa0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230fa0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230fa0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230fa0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTICLAIMSET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTICLAIMSET(a) cavm_cst_cdbx_cluster_cticlaimset_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTICLAIMSET(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTICLAIMSET(a) "CST_CDBX_CLUSTER_CTICLAIMSET"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTICLAIMSET(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTICLAIMSET(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_cticontrol
 *
 * CST Cdb Cluster Cticontrol Register
 * Controls whether the CTI is enabled.
 */
union cavm_cst_cdbx_cluster_cticontrol
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_cticontrol_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t glben                 : 1;  /**< [  0:  0](R/W) Enables or disables the CTI mapping functions. Possible values of this field are:
                                                                 When GLBEN is 0, the input channel to output trigger, input trigger to output
                                                                 channel, and application trigger functions are disabled and do not signal new
                                                                 events on either output triggers or output channels. If a previously asserted
                                                                 output trigger has not been acknowledged, it remains asserted after the mapping
                                                                 functions are disabled. All output triggers are disabled by CTI reset. */
#else /* Word 0 - Little Endian */
        uint32_t glben                 : 1;  /**< [  0:  0](R/W) Enables or disables the CTI mapping functions. Possible values of this field are:
                                                                 When GLBEN is 0, the input channel to output trigger, input trigger to output
                                                                 channel, and application trigger functions are disabled and do not signal new
                                                                 events on either output triggers or output channels. If a previously asserted
                                                                 output trigger has not been acknowledged, it remains asserted after the mapping
                                                                 functions are disabled. All output triggers are disabled by CTI reset. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_cticontrol_s cn; */
};
typedef union cavm_cst_cdbx_cluster_cticontrol cavm_cst_cdbx_cluster_cticontrol_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTICONTROL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTICONTROL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230000ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230000ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230000ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230000ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTICONTROL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTICONTROL(a) cavm_cst_cdbx_cluster_cticontrol_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTICONTROL(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTICONTROL(a) "CST_CDBX_CLUSTER_CTICONTROL"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTICONTROL(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTICONTROL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctidevaff0
 *
 * CST Cdb Cluster Ctidevaff0 Register
 * Copy of the low half of the PE AArch64-MPIDR_EL1 register that allows a debugger to
 * determine which PE in a multiprocessor system the CTI component relates to.
 */
union cavm_cst_cdbx_cluster_ctidevaff0
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctidevaff0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t mpidr_el1             : 32; /**< [ 31:  0](RO) This field is a read-only copy of the low half of any of the cores'
                                                                 AArch64-MPIDR_EL1, as seen from the highest implemented Exception level, but
                                                                 with bits [15:8] set to 0x80. */
#else /* Word 0 - Little Endian */
        uint32_t mpidr_el1             : 32; /**< [ 31:  0](RO) This field is a read-only copy of the low half of any of the cores'
                                                                 AArch64-MPIDR_EL1, as seen from the highest implemented Exception level, but
                                                                 with bits [15:8] set to 0x80. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctidevaff0_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctidevaff0 cavm_cst_cdbx_cluster_ctidevaff0_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIDEVAFF0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIDEVAFF0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230fa8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230fa8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230fa8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230fa8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIDEVAFF0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIDEVAFF0(a) cavm_cst_cdbx_cluster_ctidevaff0_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIDEVAFF0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIDEVAFF0(a) "CST_CDBX_CLUSTER_CTIDEVAFF0"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIDEVAFF0(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIDEVAFF0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctidevaff1
 *
 * CST Cdb Cluster Ctidevaff1 Register
 * Copy of the high half of the PE AArch64-MPIDR_EL1 register that allows a debugger to
 * determine which PE in a multiprocessor system the CTI component relates to.
 */
union cavm_cst_cdbx_cluster_ctidevaff1
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctidevaff1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t mpidr_el1             : 32; /**< [ 31:  0](RO) This field is a read-only copy of the high half of any of the cores'
                                                                 AArch64-MPIDR_EL1, as seen from the highest implemented Exception level. */
#else /* Word 0 - Little Endian */
        uint32_t mpidr_el1             : 32; /**< [ 31:  0](RO) This field is a read-only copy of the high half of any of the cores'
                                                                 AArch64-MPIDR_EL1, as seen from the highest implemented Exception level. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctidevaff1_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctidevaff1 cavm_cst_cdbx_cluster_ctidevaff1_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIDEVAFF1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIDEVAFF1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230facll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230facll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230facll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230facll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIDEVAFF1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIDEVAFF1(a) cavm_cst_cdbx_cluster_ctidevaff1_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIDEVAFF1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIDEVAFF1(a) "CST_CDBX_CLUSTER_CTIDEVAFF1"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIDEVAFF1(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIDEVAFF1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctidevarch
 *
 * CST Cdb Cluster Ctidevarch Register
 * Identifies the programmers' model architecture of the CTI component.
 */
union cavm_cst_cdbx_cluster_ctidevarch
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctidevarch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t architect             : 11; /**< [ 31: 21](RO) Architect. */
        uint32_t present               : 1;  /**< [ 20: 20](RO) Present. */
        uint32_t revision              : 4;  /**< [ 19: 16](RO) Revision. Defines the architecture revision of the component. */
        uint32_t archid                : 16; /**< [ 15:  0](RO) Architecture ID. */
#else /* Word 0 - Little Endian */
        uint32_t archid                : 16; /**< [ 15:  0](RO) Architecture ID. */
        uint32_t revision              : 4;  /**< [ 19: 16](RO) Revision. Defines the architecture revision of the component. */
        uint32_t present               : 1;  /**< [ 20: 20](RO) Present. */
        uint32_t architect             : 11; /**< [ 31: 21](RO) Architect. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctidevarch_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctidevarch cavm_cst_cdbx_cluster_ctidevarch_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIDEVARCH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIDEVARCH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230fbcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230fbcll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230fbcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230fbcll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIDEVARCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIDEVARCH(a) cavm_cst_cdbx_cluster_ctidevarch_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIDEVARCH(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIDEVARCH(a) "CST_CDBX_CLUSTER_CTIDEVARCH"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIDEVARCH(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIDEVARCH(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctidevctl
 *
 * CST Cdb Cluster Ctidevctl Register
 * Provides target-specific device controls
 */
union cavm_cst_cdbx_cluster_ctidevctl
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctidevctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t rce                   : 1;  /**< [  1:  1](R/W) Reset Catch Enable. */
        uint32_t osuce                 : 1;  /**< [  0:  0](R/W) OS Unlock Catch Enable */
#else /* Word 0 - Little Endian */
        uint32_t osuce                 : 1;  /**< [  0:  0](R/W) OS Unlock Catch Enable */
        uint32_t rce                   : 1;  /**< [  1:  1](R/W) Reset Catch Enable. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctidevctl_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctidevctl cavm_cst_cdbx_cluster_ctidevctl_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIDEVCTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIDEVCTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230150ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230150ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230150ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230150ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIDEVCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIDEVCTL(a) cavm_cst_cdbx_cluster_ctidevctl_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIDEVCTL(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIDEVCTL(a) "CST_CDBX_CLUSTER_CTIDEVCTL"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIDEVCTL(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIDEVCTL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctidevid
 *
 * CST Cdb Cluster Ctidevid Register
 * Describes the CTI component to the debugger.
 */
union cavm_cst_cdbx_cluster_ctidevid
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctidevid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_26_31        : 6;
        uint32_t inout_f               : 2;  /**< [ 25: 24](RO) Input/output options. Indicates presence of the input gate.
                                                                 All other values are reserved. */
        uint32_t reserved_22_23        : 2;
        uint32_t numchan               : 6;  /**< [ 21: 16](RO) Number of ECT channels implemented. */
        uint32_t reserved_14_15        : 2;
        uint32_t numtrig               : 6;  /**< [ 13:  8](RO) Number of triggers implemented. */
        uint32_t reserved_5_7          : 3;
        uint32_t extmuxnum             : 5;  /**< [  4:  0](RO) Number of multiplexors available on triggers. This value is used in conjunction
                                                                 with External Control register, ext-ASICCTL. */
#else /* Word 0 - Little Endian */
        uint32_t extmuxnum             : 5;  /**< [  4:  0](RO) Number of multiplexors available on triggers. This value is used in conjunction
                                                                 with External Control register, ext-ASICCTL. */
        uint32_t reserved_5_7          : 3;
        uint32_t numtrig               : 6;  /**< [ 13:  8](RO) Number of triggers implemented. */
        uint32_t reserved_14_15        : 2;
        uint32_t numchan               : 6;  /**< [ 21: 16](RO) Number of ECT channels implemented. */
        uint32_t reserved_22_23        : 2;
        uint32_t inout_f               : 2;  /**< [ 25: 24](RO) Input/output options. Indicates presence of the input gate.
                                                                 All other values are reserved. */
        uint32_t reserved_26_31        : 6;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctidevid_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctidevid cavm_cst_cdbx_cluster_ctidevid_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIDEVID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIDEVID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230fc8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230fc8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230fc8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230fc8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIDEVID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIDEVID(a) cavm_cst_cdbx_cluster_ctidevid_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIDEVID(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIDEVID(a) "CST_CDBX_CLUSTER_CTIDEVID"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIDEVID(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIDEVID(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctidevid1
 *
 * CST Cdb Cluster Ctidevid1 Register
 * Reserved for future information about the CTI component to the debugger.
 */
union cavm_cst_cdbx_cluster_ctidevid1
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctidevid1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctidevid1_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctidevid1 cavm_cst_cdbx_cluster_ctidevid1_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIDEVID1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIDEVID1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230fc4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230fc4ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230fc4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230fc4ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIDEVID1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIDEVID1(a) cavm_cst_cdbx_cluster_ctidevid1_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIDEVID1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIDEVID1(a) "CST_CDBX_CLUSTER_CTIDEVID1"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIDEVID1(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIDEVID1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctidevid2
 *
 * CST Cdb Cluster Ctidevid2 Register
 * Reserved for future information about the CTI component to the debugger.
 */
union cavm_cst_cdbx_cluster_ctidevid2
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctidevid2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_0_31         : 32;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_31         : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctidevid2_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctidevid2 cavm_cst_cdbx_cluster_ctidevid2_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIDEVID2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIDEVID2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230fc0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230fc0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230fc0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230fc0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIDEVID2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIDEVID2(a) cavm_cst_cdbx_cluster_ctidevid2_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIDEVID2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIDEVID2(a) "CST_CDBX_CLUSTER_CTIDEVID2"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIDEVID2(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIDEVID2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctidevtype
 *
 * CST Cdb Cluster Ctidevtype Register
 * Indicates to a debugger that this component is part of a PEs cross-trigger interface.
 */
union cavm_cst_cdbx_cluster_ctidevtype
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctidevtype_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Subtype. */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major type. */
#else /* Word 0 - Little Endian */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major type. */
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Subtype. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctidevtype_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctidevtype cavm_cst_cdbx_cluster_ctidevtype_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIDEVTYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIDEVTYPE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230fccll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230fccll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230fccll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230fccll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIDEVTYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIDEVTYPE(a) cavm_cst_cdbx_cluster_ctidevtype_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIDEVTYPE(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIDEVTYPE(a) "CST_CDBX_CLUSTER_CTIDEVTYPE"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIDEVTYPE(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIDEVTYPE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctigate
 *
 * CST Cdb Cluster Ctigate Register
 * Determines whether events on channels propagate through the CTM to other ECT
 * components, or from the CTM into the CTI.
 */
union cavm_cst_cdbx_cluster_ctigate
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctigate_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t gate3                 : 1;  /**< [  3:  3](R/W) Channel &lt;x&gt; gate enable.
                                                                 Possible values of this bit are:
                                                                 If GATE[x] is set to 0, no new events will be propagated to the ECT and any
                                                                 existing output channel events will be terminated. */
        uint32_t gate2                 : 1;  /**< [  2:  2](R/W) Channel &lt;x&gt; gate enable.
                                                                 Possible values of this bit are:
                                                                 If GATE[x] is set to 0, no new events will be propagated to the ECT and any
                                                                 existing output channel events will be terminated. */
        uint32_t gate1                 : 1;  /**< [  1:  1](R/W) Channel &lt;x&gt; gate enable.
                                                                 Possible values of this bit are:
                                                                 If GATE[x] is set to 0, no new events will be propagated to the ECT and any
                                                                 existing output channel events will be terminated. */
        uint32_t gate0                 : 1;  /**< [  0:  0](R/W) Channel &lt;x&gt; gate enable.
                                                                 Possible values of this bit are:
                                                                 If GATE[x] is set to 0, no new events will be propagated to the ECT and any
                                                                 existing output channel events will be terminated. */
#else /* Word 0 - Little Endian */
        uint32_t gate0                 : 1;  /**< [  0:  0](R/W) Channel &lt;x&gt; gate enable.
                                                                 Possible values of this bit are:
                                                                 If GATE[x] is set to 0, no new events will be propagated to the ECT and any
                                                                 existing output channel events will be terminated. */
        uint32_t gate1                 : 1;  /**< [  1:  1](R/W) Channel &lt;x&gt; gate enable.
                                                                 Possible values of this bit are:
                                                                 If GATE[x] is set to 0, no new events will be propagated to the ECT and any
                                                                 existing output channel events will be terminated. */
        uint32_t gate2                 : 1;  /**< [  2:  2](R/W) Channel &lt;x&gt; gate enable.
                                                                 Possible values of this bit are:
                                                                 If GATE[x] is set to 0, no new events will be propagated to the ECT and any
                                                                 existing output channel events will be terminated. */
        uint32_t gate3                 : 1;  /**< [  3:  3](R/W) Channel &lt;x&gt; gate enable.
                                                                 Possible values of this bit are:
                                                                 If GATE[x] is set to 0, no new events will be propagated to the ECT and any
                                                                 existing output channel events will be terminated. */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctigate_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctigate cavm_cst_cdbx_cluster_ctigate_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIGATE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIGATE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230140ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230140ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230140ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230140ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIGATE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIGATE(a) cavm_cst_cdbx_cluster_ctigate_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIGATE(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIGATE(a) "CST_CDBX_CLUSTER_CTIGATE"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIGATE(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIGATE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiinen0
 *
 * CST Cdb Cluster Ctiinen0 Register
 * Enables the signaling of an event on output channels when input trigger event n is
 * received by the CTI.
 */
union cavm_cst_cdbx_cluster_ctiinen0
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiinen0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiinen0_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiinen0 cavm_cst_cdbx_cluster_ctiinen0_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIINEN0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIINEN0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230020ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230020ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230020ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230020ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIINEN0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIINEN0(a) cavm_cst_cdbx_cluster_ctiinen0_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIINEN0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIINEN0(a) "CST_CDBX_CLUSTER_CTIINEN0"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIINEN0(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIINEN0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiinen1
 *
 * CST Cdb Cluster Ctiinen1 Register
 * Enables the signaling of an event on output channels when input trigger event n is
 * received by the CTI.
 */
union cavm_cst_cdbx_cluster_ctiinen1
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiinen1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiinen1_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiinen1 cavm_cst_cdbx_cluster_ctiinen1_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIINEN1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIINEN1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230024ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230024ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230024ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230024ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIINEN1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIINEN1(a) cavm_cst_cdbx_cluster_ctiinen1_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIINEN1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIINEN1(a) "CST_CDBX_CLUSTER_CTIINEN1"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIINEN1(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIINEN1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiinen2
 *
 * CST Cdb Cluster Ctiinen2 Register
 * Enables the signaling of an event on output channels when input trigger event n is
 * received by the CTI.
 */
union cavm_cst_cdbx_cluster_ctiinen2
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiinen2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiinen2_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiinen2 cavm_cst_cdbx_cluster_ctiinen2_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIINEN2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIINEN2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230028ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230028ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230028ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230028ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIINEN2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIINEN2(a) cavm_cst_cdbx_cluster_ctiinen2_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIINEN2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIINEN2(a) "CST_CDBX_CLUSTER_CTIINEN2"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIINEN2(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIINEN2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiinen3
 *
 * CST Cdb Cluster Ctiinen3 Register
 * Enables the signaling of an event on output channels when input trigger event n is
 * received by the CTI.
 */
union cavm_cst_cdbx_cluster_ctiinen3
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiinen3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiinen3_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiinen3 cavm_cst_cdbx_cluster_ctiinen3_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIINEN3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIINEN3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a08023002cll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a08023002cll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a08023002cll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a08023002cll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIINEN3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIINEN3(a) cavm_cst_cdbx_cluster_ctiinen3_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIINEN3(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIINEN3(a) "CST_CDBX_CLUSTER_CTIINEN3"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIINEN3(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIINEN3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiinen4
 *
 * CST Cdb Cluster Ctiinen4 Register
 * Enables the signaling of an event on output channels when input trigger event n is
 * received by the CTI.
 */
union cavm_cst_cdbx_cluster_ctiinen4
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiinen4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiinen4_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiinen4 cavm_cst_cdbx_cluster_ctiinen4_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIINEN4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIINEN4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230030ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230030ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230030ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230030ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIINEN4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIINEN4(a) cavm_cst_cdbx_cluster_ctiinen4_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIINEN4(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIINEN4(a) "CST_CDBX_CLUSTER_CTIINEN4"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIINEN4(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIINEN4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiinen5
 *
 * CST Cdb Cluster Ctiinen5 Register
 * Enables the signaling of an event on output channels when input trigger event n is
 * received by the CTI.
 */
union cavm_cst_cdbx_cluster_ctiinen5
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiinen5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiinen5_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiinen5 cavm_cst_cdbx_cluster_ctiinen5_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIINEN5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIINEN5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230034ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230034ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230034ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230034ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIINEN5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIINEN5(a) cavm_cst_cdbx_cluster_ctiinen5_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIINEN5(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIINEN5(a) "CST_CDBX_CLUSTER_CTIINEN5"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIINEN5(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIINEN5(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiinen6
 *
 * CST Cdb Cluster Ctiinen6 Register
 * Enables the signaling of an event on output channels when input trigger event n is
 * received by the CTI.
 */
union cavm_cst_cdbx_cluster_ctiinen6
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiinen6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiinen6_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiinen6 cavm_cst_cdbx_cluster_ctiinen6_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIINEN6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIINEN6(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230038ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230038ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230038ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230038ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIINEN6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIINEN6(a) cavm_cst_cdbx_cluster_ctiinen6_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIINEN6(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIINEN6(a) "CST_CDBX_CLUSTER_CTIINEN6"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIINEN6(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIINEN6(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiinen7
 *
 * CST Cdb Cluster Ctiinen7 Register
 * Enables the signaling of an event on output channels when input trigger event n is
 * received by the CTI.
 */
union cavm_cst_cdbx_cluster_ctiinen7
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiinen7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiinen7_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiinen7 cavm_cst_cdbx_cluster_ctiinen7_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIINEN7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIINEN7(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a08023003cll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a08023003cll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a08023003cll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a08023003cll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIINEN7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIINEN7(a) cavm_cst_cdbx_cluster_ctiinen7_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIINEN7(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIINEN7(a) "CST_CDBX_CLUSTER_CTIINEN7"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIINEN7(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIINEN7(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiinen8
 *
 * CST Cdb Cluster Ctiinen8 Register
 * Enables the signaling of an event on output channels when input trigger event n is
 * received by the CTI.
 */
union cavm_cst_cdbx_cluster_ctiinen8
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiinen8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiinen8_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiinen8 cavm_cst_cdbx_cluster_ctiinen8_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIINEN8(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIINEN8(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230040ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230040ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230040ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230040ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIINEN8", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIINEN8(a) cavm_cst_cdbx_cluster_ctiinen8_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIINEN8(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIINEN8(a) "CST_CDBX_CLUSTER_CTIINEN8"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIINEN8(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIINEN8(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiinen9
 *
 * CST Cdb Cluster Ctiinen9 Register
 * Enables the signaling of an event on output channels when input trigger event n is
 * received by the CTI.
 */
union cavm_cst_cdbx_cluster_ctiinen9
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiinen9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t inen0                 : 1;  /**< [  0:  0](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen1                 : 1;  /**< [  1:  1](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen2                 : 1;  /**< [  2:  2](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t inen3                 : 1;  /**< [  3:  3](R/W) Input trigger &lt;n&gt; to output channel &lt;x&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiinen9_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiinen9 cavm_cst_cdbx_cluster_ctiinen9_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIINEN9(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIINEN9(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230044ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230044ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230044ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230044ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIINEN9", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIINEN9(a) cavm_cst_cdbx_cluster_ctiinen9_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIINEN9(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIINEN9(a) "CST_CDBX_CLUSTER_CTIINEN9"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIINEN9(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIINEN9(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiintack
 *
 * CST Cdb Cluster Ctiintack Register
 * Can be used to deactivate the output triggers.
 */
union cavm_cst_cdbx_cluster_ctiintack
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiintack_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 22; /**< [ 31: 10](WO) This field is RAZWI */
        uint32_t ack9                  : 1;  /**< [  9:  9](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack8                  : 1;  /**< [  8:  8](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack7                  : 1;  /**< [  7:  7](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack6                  : 1;  /**< [  6:  6](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack5                  : 1;  /**< [  5:  5](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack4                  : 1;  /**< [  4:  4](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack3                  : 1;  /**< [  3:  3](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack2                  : 1;  /**< [  2:  2](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack1                  : 1;  /**< [  1:  1](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack0                  : 1;  /**< [  0:  0](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
#else /* Word 0 - Little Endian */
        uint32_t ack0                  : 1;  /**< [  0:  0](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack1                  : 1;  /**< [  1:  1](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack2                  : 1;  /**< [  2:  2](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack3                  : 1;  /**< [  3:  3](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack4                  : 1;  /**< [  4:  4](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack5                  : 1;  /**< [  5:  5](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack6                  : 1;  /**< [  6:  6](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack7                  : 1;  /**< [  7:  7](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack8                  : 1;  /**< [  8:  8](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t ack9                  : 1;  /**< [  9:  9](WO) Acknowledge for output trigger &lt;n&gt;.
                                                                 If any of the following is true, writes to ACK&lt;n&gt; are ignored:
                                                                   - n \>= ext-CTIDEVID.NUMTRIG, the number of implemented triggers.
                                                                   - Output trigger n is not active.
                                                                   - The channel mapping function output, as controlled by ext-CTIOUTEN&lt;n&gt;, is still active.
                                                                   - Output trigger n is not implemented.
                                                                   - Output trigger n is not connected.
                                                                   - Output trigger n is self-acknowledging and does not require software acknowledge.
                                                                 Otherwise, the behavior on writes to ACK&lt;n&gt; is as follows: */
        uint32_t raz_wi                : 22; /**< [ 31: 10](WO) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiintack_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiintack cavm_cst_cdbx_cluster_ctiintack_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIINTACK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIINTACK(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230010ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230010ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230010ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230010ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIINTACK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIINTACK(a) cavm_cst_cdbx_cluster_ctiintack_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIINTACK(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIINTACK(a) "CST_CDBX_CLUSTER_CTIINTACK"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIINTACK(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIINTACK(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiouten0
 *
 * CST Cdb Cluster Ctiouten0 Register
 * Defines which input channels generate output trigger n.
 */
union cavm_cst_cdbx_cluster_ctiouten0
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiouten0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiouten0_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiouten0 cavm_cst_cdbx_cluster_ctiouten0_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIOUTEN0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIOUTEN0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0802300a0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0802300a0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0802300a0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0802300a0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIOUTEN0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIOUTEN0(a) cavm_cst_cdbx_cluster_ctiouten0_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIOUTEN0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIOUTEN0(a) "CST_CDBX_CLUSTER_CTIOUTEN0"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIOUTEN0(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIOUTEN0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiouten1
 *
 * CST Cdb Cluster Ctiouten1 Register
 * Defines which input channels generate output trigger n.
 */
union cavm_cst_cdbx_cluster_ctiouten1
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiouten1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiouten1_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiouten1 cavm_cst_cdbx_cluster_ctiouten1_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIOUTEN1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIOUTEN1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0802300a4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0802300a4ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0802300a4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0802300a4ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIOUTEN1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIOUTEN1(a) cavm_cst_cdbx_cluster_ctiouten1_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIOUTEN1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIOUTEN1(a) "CST_CDBX_CLUSTER_CTIOUTEN1"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIOUTEN1(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIOUTEN1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiouten2
 *
 * CST Cdb Cluster Ctiouten2 Register
 * Defines which input channels generate output trigger n.
 */
union cavm_cst_cdbx_cluster_ctiouten2
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiouten2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiouten2_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiouten2 cavm_cst_cdbx_cluster_ctiouten2_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIOUTEN2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIOUTEN2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0802300a8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0802300a8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0802300a8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0802300a8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIOUTEN2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIOUTEN2(a) cavm_cst_cdbx_cluster_ctiouten2_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIOUTEN2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIOUTEN2(a) "CST_CDBX_CLUSTER_CTIOUTEN2"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIOUTEN2(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIOUTEN2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiouten3
 *
 * CST Cdb Cluster Ctiouten3 Register
 * Defines which input channels generate output trigger n.
 */
union cavm_cst_cdbx_cluster_ctiouten3
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiouten3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiouten3_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiouten3 cavm_cst_cdbx_cluster_ctiouten3_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIOUTEN3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIOUTEN3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0802300acll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0802300acll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0802300acll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0802300acll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIOUTEN3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIOUTEN3(a) cavm_cst_cdbx_cluster_ctiouten3_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIOUTEN3(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIOUTEN3(a) "CST_CDBX_CLUSTER_CTIOUTEN3"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIOUTEN3(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIOUTEN3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiouten4
 *
 * CST Cdb Cluster Ctiouten4 Register
 * Defines which input channels generate output trigger n.
 */
union cavm_cst_cdbx_cluster_ctiouten4
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiouten4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiouten4_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiouten4 cavm_cst_cdbx_cluster_ctiouten4_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIOUTEN4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIOUTEN4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0802300b0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0802300b0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0802300b0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0802300b0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIOUTEN4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIOUTEN4(a) cavm_cst_cdbx_cluster_ctiouten4_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIOUTEN4(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIOUTEN4(a) "CST_CDBX_CLUSTER_CTIOUTEN4"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIOUTEN4(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIOUTEN4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiouten5
 *
 * CST Cdb Cluster Ctiouten5 Register
 * Defines which input channels generate output trigger n.
 */
union cavm_cst_cdbx_cluster_ctiouten5
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiouten5_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiouten5_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiouten5 cavm_cst_cdbx_cluster_ctiouten5_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIOUTEN5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIOUTEN5(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0802300b4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0802300b4ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0802300b4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0802300b4ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIOUTEN5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIOUTEN5(a) cavm_cst_cdbx_cluster_ctiouten5_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIOUTEN5(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIOUTEN5(a) "CST_CDBX_CLUSTER_CTIOUTEN5"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIOUTEN5(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIOUTEN5(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiouten6
 *
 * CST Cdb Cluster Ctiouten6 Register
 * Defines which input channels generate output trigger n.
 */
union cavm_cst_cdbx_cluster_ctiouten6
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiouten6_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiouten6_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiouten6 cavm_cst_cdbx_cluster_ctiouten6_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIOUTEN6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIOUTEN6(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0802300b8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0802300b8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0802300b8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0802300b8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIOUTEN6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIOUTEN6(a) cavm_cst_cdbx_cluster_ctiouten6_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIOUTEN6(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIOUTEN6(a) "CST_CDBX_CLUSTER_CTIOUTEN6"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIOUTEN6(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIOUTEN6(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiouten7
 *
 * CST Cdb Cluster Ctiouten7 Register
 * Defines which input channels generate output trigger n.
 */
union cavm_cst_cdbx_cluster_ctiouten7
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiouten7_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiouten7_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiouten7 cavm_cst_cdbx_cluster_ctiouten7_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIOUTEN7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIOUTEN7(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0802300bcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0802300bcll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0802300bcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0802300bcll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIOUTEN7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIOUTEN7(a) cavm_cst_cdbx_cluster_ctiouten7_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIOUTEN7(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIOUTEN7(a) "CST_CDBX_CLUSTER_CTIOUTEN7"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIOUTEN7(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIOUTEN7(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiouten8
 *
 * CST Cdb Cluster Ctiouten8 Register
 * Defines which input channels generate output trigger n.
 */
union cavm_cst_cdbx_cluster_ctiouten8
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiouten8_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiouten8_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiouten8 cavm_cst_cdbx_cluster_ctiouten8_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIOUTEN8(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIOUTEN8(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0802300c0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0802300c0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0802300c0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0802300c0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIOUTEN8", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIOUTEN8(a) cavm_cst_cdbx_cluster_ctiouten8_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIOUTEN8(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIOUTEN8(a) "CST_CDBX_CLUSTER_CTIOUTEN8"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIOUTEN8(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIOUTEN8(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctiouten9
 *
 * CST Cdb Cluster Ctiouten9 Register
 * Defines which input channels generate output trigger n.
 */
union cavm_cst_cdbx_cluster_ctiouten9
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctiouten9_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t outen0                : 1;  /**< [  0:  0](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen1                : 1;  /**< [  1:  1](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen2                : 1;  /**< [  2:  2](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t outen3                : 1;  /**< [  3:  3](R/W) Input channel &lt;x&gt; to output trigger &lt;n&gt; enable.
                                                                 Possible values of this bit are: */
        uint32_t raz_wi                : 28; /**< [ 31:  4](R/W) This field is RAZWI */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctiouten9_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctiouten9 cavm_cst_cdbx_cluster_ctiouten9_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIOUTEN9(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIOUTEN9(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a0802300c4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a0802300c4ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a0802300c4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a0802300c4ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIOUTEN9", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIOUTEN9(a) cavm_cst_cdbx_cluster_ctiouten9_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIOUTEN9(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIOUTEN9(a) "CST_CDBX_CLUSTER_CTIOUTEN9"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIOUTEN9(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIOUTEN9(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctipidr0
 *
 * CST Cdb Cluster Ctipidr0 Register
 * Provides information to identify a CTI component.
 */
union cavm_cst_cdbx_cluster_ctipidr0
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctipidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number bits [7:0]. */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number bits [7:0]. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctipidr0_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctipidr0 cavm_cst_cdbx_cluster_ctipidr0_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIPIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIPIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230fe0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230fe0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230fe0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230fe0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIPIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIPIDR0(a) cavm_cst_cdbx_cluster_ctipidr0_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIPIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIPIDR0(a) "CST_CDBX_CLUSTER_CTIPIDR0"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIPIDR0(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIPIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctipidr1
 *
 * CST Cdb Cluster Ctipidr1 Register
 * Provides information to identify a CTI component.
 */
union cavm_cst_cdbx_cluster_ctipidr1
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctipidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t des_0                 : 4;  /**< [  7:  4](RO) JEP106 identification code bits [3:0]. */
        uint32_t part_1                : 4;  /**< [  3:  0](RO) Part number bits [11:8]. */
#else /* Word 0 - Little Endian */
        uint32_t part_1                : 4;  /**< [  3:  0](RO) Part number bits [11:8]. */
        uint32_t des_0                 : 4;  /**< [  7:  4](RO) JEP106 identification code bits [3:0]. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctipidr1_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctipidr1 cavm_cst_cdbx_cluster_ctipidr1_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIPIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIPIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230fe4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230fe4ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230fe4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230fe4ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIPIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIPIDR1(a) cavm_cst_cdbx_cluster_ctipidr1_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIPIDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIPIDR1(a) "CST_CDBX_CLUSTER_CTIPIDR1"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIPIDR1(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIPIDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctipidr2
 *
 * CST Cdb Cluster Ctipidr2 Register
 * Provides information to identify a CTI component.
 */
union cavm_cst_cdbx_cluster_ctipidr2
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctipidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revision              : 4;  /**< [  7:  4](RO) Component major revision.
                                                                 For Theodul:
                                                                 - Major revision 0 corresponds to r0p0.
                                                                 - Major revision 1 corresponds to r1p0.
                                                                 - Major revision 2 corresponds to r2p0. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) JEDEC assignee. */
        uint32_t des_1                 : 3;  /**< [  2:  0](RO) JEP106 identification code bits [6:4]. */
#else /* Word 0 - Little Endian */
        uint32_t des_1                 : 3;  /**< [  2:  0](RO) JEP106 identification code bits [6:4]. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) JEDEC assignee. */
        uint32_t revision              : 4;  /**< [  7:  4](RO) Component major revision.
                                                                 For Theodul:
                                                                 - Major revision 0 corresponds to r0p0.
                                                                 - Major revision 1 corresponds to r1p0.
                                                                 - Major revision 2 corresponds to r2p0. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctipidr2_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctipidr2 cavm_cst_cdbx_cluster_ctipidr2_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIPIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIPIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230fe8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230fe8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230fe8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230fe8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIPIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIPIDR2(a) cavm_cst_cdbx_cluster_ctipidr2_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIPIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIPIDR2(a) "CST_CDBX_CLUSTER_CTIPIDR2"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIPIDR2(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIPIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctipidr3
 *
 * CST Cdb Cluster Ctipidr3 Register
 * Provides information to identify a CTI component.
 */
union cavm_cst_cdbx_cluster_ctipidr3
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctipidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revand                : 4;  /**< [  7:  4](RO) Component minor revision. */
        uint32_t cmod                  : 4;  /**< [  3:  0](RO) Customer Modified. */
#else /* Word 0 - Little Endian */
        uint32_t cmod                  : 4;  /**< [  3:  0](RO) Customer Modified. */
        uint32_t revand                : 4;  /**< [  7:  4](RO) Component minor revision. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctipidr3_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctipidr3 cavm_cst_cdbx_cluster_ctipidr3_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIPIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIPIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230fecll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230fecll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230fecll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230fecll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIPIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIPIDR3(a) cavm_cst_cdbx_cluster_ctipidr3_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIPIDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIPIDR3(a) "CST_CDBX_CLUSTER_CTIPIDR3"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIPIDR3(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIPIDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctipidr4
 *
 * CST Cdb Cluster Ctipidr4 Register
 * Provides information to identify a CTI component.
 */
union cavm_cst_cdbx_cluster_ctipidr4
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctipidr4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t size                  : 4;  /**< [  7:  4](RO) 4KB count. */
        uint32_t des_2                 : 4;  /**< [  3:  0](RO) JEP106 continuation code. */
#else /* Word 0 - Little Endian */
        uint32_t des_2                 : 4;  /**< [  3:  0](RO) JEP106 continuation code. */
        uint32_t size                  : 4;  /**< [  7:  4](RO) 4KB count. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctipidr4_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctipidr4 cavm_cst_cdbx_cluster_ctipidr4_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIPIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTIPIDR4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230fd0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230fd0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230fd0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230fd0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTIPIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTIPIDR4(a) cavm_cst_cdbx_cluster_ctipidr4_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTIPIDR4(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTIPIDR4(a) "CST_CDBX_CLUSTER_CTIPIDR4"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTIPIDR4(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTIPIDR4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctitriginstatus
 *
 * CST Cdb Cluster Ctitriginstatus Register
 * Provides the status of the trigger inputs.
 */
union cavm_cst_cdbx_cluster_ctitriginstatus
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctitriginstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz                   : 22; /**< [ 31: 10](RO) This field is RAZ */
        uint32_t trin9                 : 1;  /**< [  9:  9](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin8                 : 1;  /**< [  8:  8](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin7                 : 1;  /**< [  7:  7](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin6                 : 1;  /**< [  6:  6](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin5                 : 1;  /**< [  5:  5](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin4                 : 1;  /**< [  4:  4](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin3                 : 1;  /**< [  3:  3](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin2                 : 1;  /**< [  2:  2](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin1                 : 1;  /**< [  1:  1](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin0                 : 1;  /**< [  0:  0](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
#else /* Word 0 - Little Endian */
        uint32_t trin0                 : 1;  /**< [  0:  0](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin1                 : 1;  /**< [  1:  1](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin2                 : 1;  /**< [  2:  2](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin3                 : 1;  /**< [  3:  3](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin4                 : 1;  /**< [  4:  4](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin5                 : 1;  /**< [  5:  5](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin6                 : 1;  /**< [  6:  6](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin7                 : 1;  /**< [  7:  7](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin8                 : 1;  /**< [  8:  8](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t trin9                 : 1;  /**< [  9:  9](RO) Trigger input &lt;n&gt; status.
                                                                 Possible values of this bit are: */
        uint32_t raz                   : 22; /**< [ 31: 10](RO) This field is RAZ */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctitriginstatus_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctitriginstatus cavm_cst_cdbx_cluster_ctitriginstatus_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTITRIGINSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTITRIGINSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230130ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230130ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230130ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230130ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTITRIGINSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTITRIGINSTATUS(a) cavm_cst_cdbx_cluster_ctitriginstatus_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTITRIGINSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTITRIGINSTATUS(a) "CST_CDBX_CLUSTER_CTITRIGINSTATUS"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTITRIGINSTATUS(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTITRIGINSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_cluster_ctitrigoutstatus
 *
 * CST Cdb Cluster Ctitrigoutstatus Register
 * Provides the raw status of the trigger outputs after processing by trigger interface logic.
 */
union cavm_cst_cdbx_cluster_ctitrigoutstatus
{
    uint32_t u;
    struct cavm_cst_cdbx_cluster_ctitrigoutstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t raz                   : 22; /**< [ 31: 10](RO) This field is RAZ */
        uint32_t trout9                : 1;  /**< [  9:  9](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout8                : 1;  /**< [  8:  8](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout7                : 1;  /**< [  7:  7](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout6                : 1;  /**< [  6:  6](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout5                : 1;  /**< [  5:  5](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout4                : 1;  /**< [  4:  4](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout3                : 1;  /**< [  3:  3](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout2                : 1;  /**< [  2:  2](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout1                : 1;  /**< [  1:  1](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout0                : 1;  /**< [  0:  0](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
#else /* Word 0 - Little Endian */
        uint32_t trout0                : 1;  /**< [  0:  0](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout1                : 1;  /**< [  1:  1](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout2                : 1;  /**< [  2:  2](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout3                : 1;  /**< [  3:  3](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout4                : 1;  /**< [  4:  4](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout5                : 1;  /**< [  5:  5](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout6                : 1;  /**< [  6:  6](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout7                : 1;  /**< [  7:  7](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout8                : 1;  /**< [  8:  8](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t trout9                : 1;  /**< [  9:  9](RO) Trigger output &lt;n&gt; status.
                                                                 Otherwise when n &lt; N TROUT&lt;n&gt; is RAZ. */
        uint32_t raz                   : 22; /**< [ 31: 10](RO) This field is RAZ */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_cluster_ctitrigoutstatus_s cn; */
};
typedef union cavm_cst_cdbx_cluster_ctitrigoutstatus cavm_cst_cdbx_cluster_ctitrigoutstatus_t;

static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTITRIGOUTSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_CLUSTER_CTITRIGOUTSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080230134ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080230134ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080230134ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080230134ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_CLUSTER_CTITRIGOUTSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_CLUSTER_CTITRIGOUTSTATUS(a) cavm_cst_cdbx_cluster_ctitrigoutstatus_t
#define bustype_CAVM_CST_CDBX_CLUSTER_CTITRIGOUTSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_CLUSTER_CTITRIGOUTSTATUS(a) "CST_CDBX_CLUSTER_CTITRIGOUTSTATUS"
#define busnum_CAVM_CST_CDBX_CLUSTER_CTITRIGOUTSTATUS(a) (a)
#define arguments_CAVM_CST_CDBX_CLUSTER_CTITRIGOUTSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_dbrom_authstatus
 *
 * CST Cdb Dbrom Authstatus Register
 * Provides information about the state of the authentication interface for debug.
 */
union cavm_cst_cdbx_dbrom_authstatus
{
    uint32_t u;
    struct cavm_cst_cdbx_dbrom_authstatus_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t snid                  : 2;  /**< [  7:  6](RO) Secure Non-invasive Debug.
                                                                 ExternalSecureNoninvasiveDebugEnabled() == ExternalSecureInvasiveDebugEnabled().
                                                                 This field has the same value as the SID field. */
        uint32_t sid                   : 2;  /**< [  5:  4](RO) Secure Invasive Debug. */
        uint32_t nsnid                 : 2;  /**< [  3:  2](RO) Non-secure Non-invasive Debug. */
        uint32_t nsid                  : 2;  /**< [  1:  0](RO) Non-secure Invasive Debug. */
#else /* Word 0 - Little Endian */
        uint32_t nsid                  : 2;  /**< [  1:  0](RO) Non-secure Invasive Debug. */
        uint32_t nsnid                 : 2;  /**< [  3:  2](RO) Non-secure Non-invasive Debug. */
        uint32_t sid                   : 2;  /**< [  5:  4](RO) Secure Invasive Debug. */
        uint32_t snid                  : 2;  /**< [  7:  6](RO) Secure Non-invasive Debug.
                                                                 ExternalSecureNoninvasiveDebugEnabled() == ExternalSecureInvasiveDebugEnabled().
                                                                 This field has the same value as the SID field. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_dbrom_authstatus_s cn; */
};
typedef union cavm_cst_cdbx_dbrom_authstatus cavm_cst_cdbx_dbrom_authstatus_t;

static inline uint64_t CAVM_CST_CDBX_DBROM_AUTHSTATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_DBROM_AUTHSTATUS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080000fb8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080000fb8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080000fb8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080000fb8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_DBROM_AUTHSTATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_DBROM_AUTHSTATUS(a) cavm_cst_cdbx_dbrom_authstatus_t
#define bustype_CAVM_CST_CDBX_DBROM_AUTHSTATUS(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_DBROM_AUTHSTATUS(a) "CST_CDBX_DBROM_AUTHSTATUS"
#define busnum_CAVM_CST_CDBX_DBROM_AUTHSTATUS(a) (a)
#define arguments_CAVM_CST_CDBX_DBROM_AUTHSTATUS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_dbrom_cidr0
 *
 * CST Cdb Dbrom Cidr0 Register
 * Provides CoreSight discovery information.
 */
union cavm_cst_cdbx_dbrom_cidr0
{
    uint32_t u;
    struct cavm_cst_cdbx_dbrom_cidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) CoreSight component identification preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_0               : 8;  /**< [  7:  0](RO) CoreSight component identification preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_dbrom_cidr0_s cn; */
};
typedef union cavm_cst_cdbx_dbrom_cidr0 cavm_cst_cdbx_dbrom_cidr0_t;

static inline uint64_t CAVM_CST_CDBX_DBROM_CIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_DBROM_CIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080000ff0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080000ff0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080000ff0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080000ff0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_DBROM_CIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_DBROM_CIDR0(a) cavm_cst_cdbx_dbrom_cidr0_t
#define bustype_CAVM_CST_CDBX_DBROM_CIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_DBROM_CIDR0(a) "CST_CDBX_DBROM_CIDR0"
#define busnum_CAVM_CST_CDBX_DBROM_CIDR0(a) (a)
#define arguments_CAVM_CST_CDBX_DBROM_CIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_dbrom_cidr1
 *
 * CST Cdb Dbrom Cidr1 Register
 * Provides CoreSight discovery information.
 */
union cavm_cst_cdbx_dbrom_cidr1
{
    uint32_t u;
    struct cavm_cst_cdbx_dbrom_cidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t class_f               : 4;  /**< [  7:  4](RO) CoreSight component class. */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](RO) CoreSight component identification preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_1               : 4;  /**< [  3:  0](RO) CoreSight component identification preamble. */
        uint32_t class_f               : 4;  /**< [  7:  4](RO) CoreSight component class. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_dbrom_cidr1_s cn; */
};
typedef union cavm_cst_cdbx_dbrom_cidr1 cavm_cst_cdbx_dbrom_cidr1_t;

static inline uint64_t CAVM_CST_CDBX_DBROM_CIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_DBROM_CIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080000ff4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080000ff4ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080000ff4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080000ff4ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_DBROM_CIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_DBROM_CIDR1(a) cavm_cst_cdbx_dbrom_cidr1_t
#define bustype_CAVM_CST_CDBX_DBROM_CIDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_DBROM_CIDR1(a) "CST_CDBX_DBROM_CIDR1"
#define busnum_CAVM_CST_CDBX_DBROM_CIDR1(a) (a)
#define arguments_CAVM_CST_CDBX_DBROM_CIDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_dbrom_cidr2
 *
 * CST Cdb Dbrom Cidr2 Register
 * Provides CoreSight discovery information.
 */
union cavm_cst_cdbx_dbrom_cidr2
{
    uint32_t u;
    struct cavm_cst_cdbx_dbrom_cidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) CoreSight component identification preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_2               : 8;  /**< [  7:  0](RO) CoreSight component identification preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_dbrom_cidr2_s cn; */
};
typedef union cavm_cst_cdbx_dbrom_cidr2 cavm_cst_cdbx_dbrom_cidr2_t;

static inline uint64_t CAVM_CST_CDBX_DBROM_CIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_DBROM_CIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080000ff8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080000ff8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080000ff8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080000ff8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_DBROM_CIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_DBROM_CIDR2(a) cavm_cst_cdbx_dbrom_cidr2_t
#define bustype_CAVM_CST_CDBX_DBROM_CIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_DBROM_CIDR2(a) "CST_CDBX_DBROM_CIDR2"
#define busnum_CAVM_CST_CDBX_DBROM_CIDR2(a) (a)
#define arguments_CAVM_CST_CDBX_DBROM_CIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_dbrom_cidr3
 *
 * CST Cdb Dbrom Cidr3 Register
 * Provides CoreSight discovery information.
 */
union cavm_cst_cdbx_dbrom_cidr3
{
    uint32_t u;
    struct cavm_cst_cdbx_dbrom_cidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) CoreSight component identification preamble. */
#else /* Word 0 - Little Endian */
        uint32_t prmbl_3               : 8;  /**< [  7:  0](RO) CoreSight component identification preamble. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_dbrom_cidr3_s cn; */
};
typedef union cavm_cst_cdbx_dbrom_cidr3 cavm_cst_cdbx_dbrom_cidr3_t;

static inline uint64_t CAVM_CST_CDBX_DBROM_CIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_DBROM_CIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080000ffcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080000ffcll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080000ffcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080000ffcll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_DBROM_CIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_DBROM_CIDR3(a) cavm_cst_cdbx_dbrom_cidr3_t
#define bustype_CAVM_CST_CDBX_DBROM_CIDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_DBROM_CIDR3(a) "CST_CDBX_DBROM_CIDR3"
#define busnum_CAVM_CST_CDBX_DBROM_CIDR3(a) (a)
#define arguments_CAVM_CST_CDBX_DBROM_CIDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_dbrom_dbgpcr0
 *
 * CST Cdb Dbrom Dbgpcr0 Register
 * Controls power requests for PDCLUSTER.
 */
union cavm_cst_cdbx_dbrom_dbgpcr0
{
    uint32_t u;
    struct cavm_cst_cdbx_dbrom_dbgpcr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t pr                    : 1;  /**< [  1:  1](R/W) Power Request. */
        uint32_t present               : 1;  /**< [  0:  0](R/W) Power request implemented. */
#else /* Word 0 - Little Endian */
        uint32_t present               : 1;  /**< [  0:  0](R/W) Power request implemented. */
        uint32_t pr                    : 1;  /**< [  1:  1](R/W) Power Request. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_dbrom_dbgpcr0_s cn; */
};
typedef union cavm_cst_cdbx_dbrom_dbgpcr0 cavm_cst_cdbx_dbrom_dbgpcr0_t;

static inline uint64_t CAVM_CST_CDBX_DBROM_DBGPCR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_DBROM_DBGPCR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080000a00ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080000a00ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080000a00ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080000a00ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_DBROM_DBGPCR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_DBROM_DBGPCR0(a) cavm_cst_cdbx_dbrom_dbgpcr0_t
#define bustype_CAVM_CST_CDBX_DBROM_DBGPCR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_DBROM_DBGPCR0(a) "CST_CDBX_DBROM_DBGPCR0"
#define busnum_CAVM_CST_CDBX_DBROM_DBGPCR0(a) (a)
#define arguments_CAVM_CST_CDBX_DBROM_DBGPCR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_dbrom_dbgpsr0
 *
 * CST Cdb Dbrom Dbgpsr0 Register
 * Indicates the power status for PDCLUSTER.
 */
union cavm_cst_cdbx_dbrom_dbgpsr0
{
    uint32_t u;
    struct cavm_cst_cdbx_dbrom_dbgpsr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t ps                    : 2;  /**< [  1:  0](RO) Power Status. */
#else /* Word 0 - Little Endian */
        uint32_t ps                    : 2;  /**< [  1:  0](RO) Power Status. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_dbrom_dbgpsr0_s cn; */
};
typedef union cavm_cst_cdbx_dbrom_dbgpsr0 cavm_cst_cdbx_dbrom_dbgpsr0_t;

static inline uint64_t CAVM_CST_CDBX_DBROM_DBGPSR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_DBROM_DBGPSR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080000a80ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080000a80ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080000a80ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080000a80ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_DBROM_DBGPSR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_DBROM_DBGPSR0(a) cavm_cst_cdbx_dbrom_dbgpsr0_t
#define bustype_CAVM_CST_CDBX_DBROM_DBGPSR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_DBROM_DBGPSR0(a) "CST_CDBX_DBROM_DBGPSR0"
#define busnum_CAVM_CST_CDBX_DBROM_DBGPSR0(a) (a)
#define arguments_CAVM_CST_CDBX_DBROM_DBGPSR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_dbrom_devarch
 *
 * CST Cdb Dbrom Devarch Register
 * Identifies the architect and architecture of a CoreSight component.
 */
union cavm_cst_cdbx_dbrom_devarch
{
    uint32_t u;
    struct cavm_cst_cdbx_dbrom_devarch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t architect             : 11; /**< [ 31: 21](RO) Architect. */
        uint32_t present               : 1;  /**< [ 20: 20](RO) Present. */
        uint32_t revision              : 4;  /**< [ 19: 16](RO) Revision. */
        uint32_t archid                : 16; /**< [ 15:  0](RO) Architecture ID. */
#else /* Word 0 - Little Endian */
        uint32_t archid                : 16; /**< [ 15:  0](RO) Architecture ID. */
        uint32_t revision              : 4;  /**< [ 19: 16](RO) Revision. */
        uint32_t present               : 1;  /**< [ 20: 20](RO) Present. */
        uint32_t architect             : 11; /**< [ 31: 21](RO) Architect. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_dbrom_devarch_s cn; */
};
typedef union cavm_cst_cdbx_dbrom_devarch cavm_cst_cdbx_dbrom_devarch_t;

static inline uint64_t CAVM_CST_CDBX_DBROM_DEVARCH(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_DBROM_DEVARCH(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080000fbcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080000fbcll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080000fbcll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080000fbcll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_DBROM_DEVARCH", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_DBROM_DEVARCH(a) cavm_cst_cdbx_dbrom_devarch_t
#define bustype_CAVM_CST_CDBX_DBROM_DEVARCH(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_DBROM_DEVARCH(a) "CST_CDBX_DBROM_DEVARCH"
#define busnum_CAVM_CST_CDBX_DBROM_DEVARCH(a) (a)
#define arguments_CAVM_CST_CDBX_DBROM_DEVARCH(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_dbrom_devid
 *
 * CST Cdb Dbrom Devid Register
 * Indicates the capabilities of the component.
 */
union cavm_cst_cdbx_dbrom_devid
{
    uint32_t u;
    struct cavm_cst_cdbx_dbrom_devid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t prr                   : 1;  /**< [  5:  5](RO) Power Request functionality included. */
        uint32_t sysmem                : 1;  /**< [  4:  4](RO) System memory present. */
        uint32_t format                : 4;  /**< [  3:  0](RO) ROM format. */
#else /* Word 0 - Little Endian */
        uint32_t format                : 4;  /**< [  3:  0](RO) ROM format. */
        uint32_t sysmem                : 1;  /**< [  4:  4](RO) System memory present. */
        uint32_t prr                   : 1;  /**< [  5:  5](RO) Power Request functionality included. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_dbrom_devid_s cn; */
};
typedef union cavm_cst_cdbx_dbrom_devid cavm_cst_cdbx_dbrom_devid_t;

static inline uint64_t CAVM_CST_CDBX_DBROM_DEVID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_DBROM_DEVID(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080000fc8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080000fc8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080000fc8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080000fc8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_DBROM_DEVID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_DBROM_DEVID(a) cavm_cst_cdbx_dbrom_devid_t
#define bustype_CAVM_CST_CDBX_DBROM_DEVID(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_DBROM_DEVID(a) "CST_CDBX_DBROM_DEVID"
#define busnum_CAVM_CST_CDBX_DBROM_DEVID(a) (a)
#define arguments_CAVM_CST_CDBX_DBROM_DEVID(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_dbrom_devtype
 *
 * CST Cdb Dbrom Devtype Register
 * A debugger can use DEVTYPE to obtain information about a component that has an
 * unrecognized part number.
 */
union cavm_cst_cdbx_dbrom_devtype
{
    uint32_t u;
    struct cavm_cst_cdbx_dbrom_devtype_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Sub number */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major number */
#else /* Word 0 - Little Endian */
        uint32_t major                 : 4;  /**< [  3:  0](RO) Major number */
        uint32_t sub                   : 4;  /**< [  7:  4](RO) Sub number */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_dbrom_devtype_s cn; */
};
typedef union cavm_cst_cdbx_dbrom_devtype cavm_cst_cdbx_dbrom_devtype_t;

static inline uint64_t CAVM_CST_CDBX_DBROM_DEVTYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_DBROM_DEVTYPE(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080000fccll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080000fccll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080000fccll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080000fccll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_DBROM_DEVTYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_DBROM_DEVTYPE(a) cavm_cst_cdbx_dbrom_devtype_t
#define bustype_CAVM_CST_CDBX_DBROM_DEVTYPE(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_DBROM_DEVTYPE(a) "CST_CDBX_DBROM_DEVTYPE"
#define busnum_CAVM_CST_CDBX_DBROM_DEVTYPE(a) (a)
#define arguments_CAVM_CST_CDBX_DBROM_DEVTYPE(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_dbrom_pidr0
 *
 * CST Cdb Dbrom Pidr0 Register
 * Provides CoreSight discovery information.
 */
union cavm_cst_cdbx_dbrom_pidr0
{
    uint32_t u;
    struct cavm_cst_cdbx_dbrom_pidr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number bits [7:0]. */
#else /* Word 0 - Little Endian */
        uint32_t part_0                : 8;  /**< [  7:  0](RO) Part number bits [7:0]. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_dbrom_pidr0_s cn; */
};
typedef union cavm_cst_cdbx_dbrom_pidr0 cavm_cst_cdbx_dbrom_pidr0_t;

static inline uint64_t CAVM_CST_CDBX_DBROM_PIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_DBROM_PIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080000fe0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080000fe0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080000fe0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080000fe0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_DBROM_PIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_DBROM_PIDR0(a) cavm_cst_cdbx_dbrom_pidr0_t
#define bustype_CAVM_CST_CDBX_DBROM_PIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_DBROM_PIDR0(a) "CST_CDBX_DBROM_PIDR0"
#define busnum_CAVM_CST_CDBX_DBROM_PIDR0(a) (a)
#define arguments_CAVM_CST_CDBX_DBROM_PIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_dbrom_pidr1
 *
 * CST Cdb Dbrom Pidr1 Register
 * Provides CoreSight discovery information.
 */
union cavm_cst_cdbx_dbrom_pidr1
{
    uint32_t u;
    struct cavm_cst_cdbx_dbrom_pidr1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t des_0                 : 4;  /**< [  7:  4](RO) JEP106 identification code bits [3:0]. */
        uint32_t part_1                : 4;  /**< [  3:  0](RO) Part number bits [11:8]. */
#else /* Word 0 - Little Endian */
        uint32_t part_1                : 4;  /**< [  3:  0](RO) Part number bits [11:8]. */
        uint32_t des_0                 : 4;  /**< [  7:  4](RO) JEP106 identification code bits [3:0]. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_dbrom_pidr1_s cn; */
};
typedef union cavm_cst_cdbx_dbrom_pidr1 cavm_cst_cdbx_dbrom_pidr1_t;

static inline uint64_t CAVM_CST_CDBX_DBROM_PIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_DBROM_PIDR1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080000fe4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080000fe4ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080000fe4ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080000fe4ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_DBROM_PIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_DBROM_PIDR1(a) cavm_cst_cdbx_dbrom_pidr1_t
#define bustype_CAVM_CST_CDBX_DBROM_PIDR1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_DBROM_PIDR1(a) "CST_CDBX_DBROM_PIDR1"
#define busnum_CAVM_CST_CDBX_DBROM_PIDR1(a) (a)
#define arguments_CAVM_CST_CDBX_DBROM_PIDR1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_dbrom_pidr2
 *
 * CST Cdb Dbrom Pidr2 Register
 * Provides CoreSight discovery information.
 */
union cavm_cst_cdbx_dbrom_pidr2
{
    uint32_t u;
    struct cavm_cst_cdbx_dbrom_pidr2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revision              : 4;  /**< [  7:  4](RO) Component major revision.
                                                                 For Theodul:
                                                                 - Major revision 0 corresponds to r0p0.
                                                                 - Major revision 1 corresponds to r1p0.
                                                                 - Major revision 2 corresponds to r2p0. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) JEDEC assignee. */
        uint32_t des_1                 : 3;  /**< [  2:  0](RO) JEP106 identification code bits [6:4]. */
#else /* Word 0 - Little Endian */
        uint32_t des_1                 : 3;  /**< [  2:  0](RO) JEP106 identification code bits [6:4]. */
        uint32_t jedec                 : 1;  /**< [  3:  3](RO) JEDEC assignee. */
        uint32_t revision              : 4;  /**< [  7:  4](RO) Component major revision.
                                                                 For Theodul:
                                                                 - Major revision 0 corresponds to r0p0.
                                                                 - Major revision 1 corresponds to r1p0.
                                                                 - Major revision 2 corresponds to r2p0. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_dbrom_pidr2_s cn; */
};
typedef union cavm_cst_cdbx_dbrom_pidr2 cavm_cst_cdbx_dbrom_pidr2_t;

static inline uint64_t CAVM_CST_CDBX_DBROM_PIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_DBROM_PIDR2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080000fe8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080000fe8ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080000fe8ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080000fe8ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_DBROM_PIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_DBROM_PIDR2(a) cavm_cst_cdbx_dbrom_pidr2_t
#define bustype_CAVM_CST_CDBX_DBROM_PIDR2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_DBROM_PIDR2(a) "CST_CDBX_DBROM_PIDR2"
#define busnum_CAVM_CST_CDBX_DBROM_PIDR2(a) (a)
#define arguments_CAVM_CST_CDBX_DBROM_PIDR2(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_dbrom_pidr3
 *
 * CST Cdb Dbrom Pidr3 Register
 * Provides CoreSight discovery information.
 */
union cavm_cst_cdbx_dbrom_pidr3
{
    uint32_t u;
    struct cavm_cst_cdbx_dbrom_pidr3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t revand                : 4;  /**< [  7:  4](RO) Component minor revision. */
        uint32_t cmod                  : 4;  /**< [  3:  0](RO) Customer Modified. */
#else /* Word 0 - Little Endian */
        uint32_t cmod                  : 4;  /**< [  3:  0](RO) Customer Modified. */
        uint32_t revand                : 4;  /**< [  7:  4](RO) Component minor revision. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_dbrom_pidr3_s cn; */
};
typedef union cavm_cst_cdbx_dbrom_pidr3 cavm_cst_cdbx_dbrom_pidr3_t;

static inline uint64_t CAVM_CST_CDBX_DBROM_PIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_DBROM_PIDR3(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080000fecll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080000fecll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080000fecll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080000fecll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_DBROM_PIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_DBROM_PIDR3(a) cavm_cst_cdbx_dbrom_pidr3_t
#define bustype_CAVM_CST_CDBX_DBROM_PIDR3(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_DBROM_PIDR3(a) "CST_CDBX_DBROM_PIDR3"
#define busnum_CAVM_CST_CDBX_DBROM_PIDR3(a) (a)
#define arguments_CAVM_CST_CDBX_DBROM_PIDR3(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_dbrom_pidr4
 *
 * CST Cdb Dbrom Pidr4 Register
 * Provides CoreSight discovery information.
 */
union cavm_cst_cdbx_dbrom_pidr4
{
    uint32_t u;
    struct cavm_cst_cdbx_dbrom_pidr4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t size                  : 4;  /**< [  7:  4](RO) 4KB count. */
        uint32_t des_2                 : 4;  /**< [  3:  0](RO) JEP106 continuation code. */
#else /* Word 0 - Little Endian */
        uint32_t des_2                 : 4;  /**< [  3:  0](RO) JEP106 continuation code. */
        uint32_t size                  : 4;  /**< [  7:  4](RO) 4KB count. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_dbrom_pidr4_s cn; */
};
typedef union cavm_cst_cdbx_dbrom_pidr4 cavm_cst_cdbx_dbrom_pidr4_t;

static inline uint64_t CAVM_CST_CDBX_DBROM_PIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_DBROM_PIDR4(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080000fd0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080000fd0ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080000fd0ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080000fd0ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_DBROM_PIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_DBROM_PIDR4(a) cavm_cst_cdbx_dbrom_pidr4_t
#define bustype_CAVM_CST_CDBX_DBROM_PIDR4(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_DBROM_PIDR4(a) "CST_CDBX_DBROM_PIDR4"
#define busnum_CAVM_CST_CDBX_DBROM_PIDR4(a) (a)
#define arguments_CAVM_CST_CDBX_DBROM_PIDR4(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_dbrom_pridr0
 *
 * CST Cdb Dbrom Pridr0 Register
 * Indicates the features of the power request functionality.
 */
union cavm_cst_cdbx_dbrom_pridr0
{
    uint32_t u;
    struct cavm_cst_cdbx_dbrom_pridr0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t sysrr                 : 1;  /**< [  5:  5](RO) System reset request functionality present. */
        uint32_t dbgrr                 : 1;  /**< [  4:  4](RO) Debug reset request functionality present. */
        uint32_t version_f             : 4;  /**< [  3:  0](RO) Version of the power request functionality. */
#else /* Word 0 - Little Endian */
        uint32_t version_f             : 4;  /**< [  3:  0](RO) Version of the power request functionality. */
        uint32_t dbgrr                 : 1;  /**< [  4:  4](RO) Debug reset request functionality present. */
        uint32_t sysrr                 : 1;  /**< [  5:  5](RO) System reset request functionality present. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_dbrom_pridr0_s cn; */
};
typedef union cavm_cst_cdbx_dbrom_pridr0 cavm_cst_cdbx_dbrom_pridr0_t;

static inline uint64_t CAVM_CST_CDBX_DBROM_PRIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_DBROM_PRIDR0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080000c00ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080000c00ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080000c00ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080000c00ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_DBROM_PRIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_DBROM_PRIDR0(a) cavm_cst_cdbx_dbrom_pridr0_t
#define bustype_CAVM_CST_CDBX_DBROM_PRIDR0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_DBROM_PRIDR0(a) "CST_CDBX_DBROM_PRIDR0"
#define busnum_CAVM_CST_CDBX_DBROM_PRIDR0(a) (a)
#define arguments_CAVM_CST_CDBX_DBROM_PRIDR0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_dbrom_romentry0
 *
 * CST Cdb Dbrom Romentry0 Register
 * Provides the address offset for one CoreSight component.
 */
union cavm_cst_cdbx_dbrom_romentry0
{
    uint32_t u;
    struct cavm_cst_cdbx_dbrom_romentry0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t offset                : 20; /**< [ 31: 12](RO) The component address, relative to the base address of this ROM Table. The
                                                                 component address is calculated using the following equation:
                                                                 Component Address = ROM Table Base Address + (OFFSET \<\< 12). */
        uint32_t reserved_9_11         : 3;
        uint32_t powerid               : 5;  /**< [  8:  4](RO) The power domain ID of the component. */
        uint32_t reserved_3            : 1;
        uint32_t poweridvalid          : 1;  /**< [  2:  2](RO) Indicates if the Power domain ID field contains a Power domain ID. */
        uint32_t present               : 2;  /**< [  1:  0](RO) Indicates whether an entry is present at this location in the ROM Table. */
#else /* Word 0 - Little Endian */
        uint32_t present               : 2;  /**< [  1:  0](RO) Indicates whether an entry is present at this location in the ROM Table. */
        uint32_t poweridvalid          : 1;  /**< [  2:  2](RO) Indicates if the Power domain ID field contains a Power domain ID. */
        uint32_t reserved_3            : 1;
        uint32_t powerid               : 5;  /**< [  8:  4](RO) The power domain ID of the component. */
        uint32_t reserved_9_11         : 3;
        uint32_t offset                : 20; /**< [ 31: 12](RO) The component address, relative to the base address of this ROM Table. The
                                                                 component address is calculated using the following equation:
                                                                 Component Address = ROM Table Base Address + (OFFSET \<\< 12). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_dbrom_romentry0_s cn; */
};
typedef union cavm_cst_cdbx_dbrom_romentry0 cavm_cst_cdbx_dbrom_romentry0_t;

static inline uint64_t CAVM_CST_CDBX_DBROM_ROMENTRY0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_DBROM_ROMENTRY0(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080000000ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080000000ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080000000ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080000000ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_DBROM_ROMENTRY0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_DBROM_ROMENTRY0(a) cavm_cst_cdbx_dbrom_romentry0_t
#define bustype_CAVM_CST_CDBX_DBROM_ROMENTRY0(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_DBROM_ROMENTRY0(a) "CST_CDBX_DBROM_ROMENTRY0"
#define busnum_CAVM_CST_CDBX_DBROM_ROMENTRY0(a) (a)
#define arguments_CAVM_CST_CDBX_DBROM_ROMENTRY0(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_dbrom_romentry1
 *
 * CST Cdb Dbrom Romentry1 Register
 * Provides the address offset for one CoreSight component.
 */
union cavm_cst_cdbx_dbrom_romentry1
{
    uint32_t u;
    struct cavm_cst_cdbx_dbrom_romentry1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t offset                : 20; /**< [ 31: 12](RO) The component address, relative to the base address of this ROM Table. The
                                                                 component address is calculated using the following equation:
                                                                 Component Address = ROM Table Base Address + (OFFSET \<\< 12). */
        uint32_t reserved_3_11         : 9;
        uint32_t poweridvalid          : 1;  /**< [  2:  2](RO) Indicates if the Power domain ID field contains a Power domain ID. */
        uint32_t present               : 2;  /**< [  1:  0](RO) Indicates whether an entry is present at this location in the ROM Table. */
#else /* Word 0 - Little Endian */
        uint32_t present               : 2;  /**< [  1:  0](RO) Indicates whether an entry is present at this location in the ROM Table. */
        uint32_t poweridvalid          : 1;  /**< [  2:  2](RO) Indicates if the Power domain ID field contains a Power domain ID. */
        uint32_t reserved_3_11         : 9;
        uint32_t offset                : 20; /**< [ 31: 12](RO) The component address, relative to the base address of this ROM Table. The
                                                                 component address is calculated using the following equation:
                                                                 Component Address = ROM Table Base Address + (OFFSET \<\< 12). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_dbrom_romentry1_s cn; */
};
typedef union cavm_cst_cdbx_dbrom_romentry1 cavm_cst_cdbx_dbrom_romentry1_t;

static inline uint64_t CAVM_CST_CDBX_DBROM_ROMENTRY1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_DBROM_ROMENTRY1(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080000004ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080000004ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080000004ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080000004ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_DBROM_ROMENTRY1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_DBROM_ROMENTRY1(a) cavm_cst_cdbx_dbrom_romentry1_t
#define bustype_CAVM_CST_CDBX_DBROM_ROMENTRY1(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_DBROM_ROMENTRY1(a) "CST_CDBX_DBROM_ROMENTRY1"
#define busnum_CAVM_CST_CDBX_DBROM_ROMENTRY1(a) (a)
#define arguments_CAVM_CST_CDBX_DBROM_ROMENTRY1(a) (a),-1,-1,-1

/**
 * Register (NCB32b) cst_cdb#_dbrom_romentry2
 *
 * CST Cdb Dbrom Romentry2 Register
 * Provides the address offset for one CoreSight component.
 */
union cavm_cst_cdbx_dbrom_romentry2
{
    uint32_t u;
    struct cavm_cst_cdbx_dbrom_romentry2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t offset                : 20; /**< [ 31: 12](RO) The component address, relative to the base address of this ROM Table. The
                                                                 component address is calculated using the following equation:
                                                                 Component Address = ROM Table Base Address + (OFFSET \<\< 12). */
        uint32_t reserved_3_11         : 9;
        uint32_t poweridvalid          : 1;  /**< [  2:  2](RO) Indicates if the Power domain ID field contains a Power domain ID. */
        uint32_t present               : 2;  /**< [  1:  0](RO) Indicates whether an entry is present at this location in the ROM Table. */
#else /* Word 0 - Little Endian */
        uint32_t present               : 2;  /**< [  1:  0](RO) Indicates whether an entry is present at this location in the ROM Table. */
        uint32_t poweridvalid          : 1;  /**< [  2:  2](RO) Indicates if the Power domain ID field contains a Power domain ID. */
        uint32_t reserved_3_11         : 9;
        uint32_t offset                : 20; /**< [ 31: 12](RO) The component address, relative to the base address of this ROM Table. The
                                                                 component address is calculated using the following equation:
                                                                 Component Address = ROM Table Base Address + (OFFSET \<\< 12). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_cst_cdbx_dbrom_romentry2_s cn; */
};
typedef union cavm_cst_cdbx_dbrom_romentry2 cavm_cst_cdbx_dbrom_romentry2_t;

static inline uint64_t CAVM_CST_CDBX_DBROM_ROMENTRY2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_CST_CDBX_DBROM_ROMENTRY2(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN10KA) && (a<=23))
        return 0x87a080000008ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CN10KB) && (a<=7))
        return 0x87a080000008ll + 0x2000000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CNF10KA) && (a<=17))
        return 0x87a080000008ll + 0x2000000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF10KB) && (a<=11))
        return 0x87a080000008ll + 0x2000000ll * ((a) & 0xf);
    __cavm_csr_fatal("CST_CDBX_DBROM_ROMENTRY2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_CST_CDBX_DBROM_ROMENTRY2(a) cavm_cst_cdbx_dbrom_romentry2_t
#define bustype_CAVM_CST_CDBX_DBROM_ROMENTRY2(a) CSR_TYPE_NCB32b
#define basename_CAVM_CST_CDBX_DBROM_ROMENTRY2(a) "CST_CDBX_DBROM_ROMENTRY2"
#define busnum_CAVM_CST_CDBX_DBROM_ROMENTRY2(a) (a)
#define arguments_CAVM_CST_CDBX_DBROM_ROMENTRY2(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_CST_CDB_H__ */
