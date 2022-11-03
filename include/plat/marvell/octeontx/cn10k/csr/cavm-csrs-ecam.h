#ifndef __CAVM_CSRS_ECAM_H__
#define __CAVM_CSRS_ECAM_H__
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
 * OcteonTX ECAM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration ecam_bar_e
 *
 * ECAM Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_ECAM_BAR_E_ECAMX_PF_BAR0(a) (0x87e078000000ll + 0x1000000ll * (a))
#define CAVM_ECAM_BAR_E_ECAMX_PF_BAR0_SIZE 0x100000ull
#define CAVM_ECAM_BAR_E_ECAMX_PF_BAR2(a) (0x878000000000ll + 0x1000000000ll * (a))
#define CAVM_ECAM_BAR_E_ECAMX_PF_BAR2_SIZE 0x1000000000ull

/**
 * Structure ecam_cfg_addr_s
 *
 * ECAM Configuration Address Structure
 * ECAM load and store operations form an address with this structure: 8-bit, 16-bit, 32-bit and
 * 64-bit read and write operations are supported to this region.
 */
union cavm_ecam_cfg_addr_s
{
    uint64_t u;
    struct cavm_ecam_cfg_addr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t io                    : 5;  /**< [ 51: 47] Indicates I/O space. */
        uint64_t reserved_46           : 1;
        uint64_t node                  : 2;  /**< [ 45: 44] Reserved. */
        uint64_t did                   : 8;  /**< [ 43: 36] ECAM(0) DID. 0x78. */
        uint64_t setup                 : 1;  /**< [ 35: 35] Reserved, MBZ. */
        uint64_t bcst                  : 1;  /**< [ 34: 34] Reserved, MBZ. */
        uint64_t dmn                   : 6;  /**< [ 33: 28] Domain number. */
        uint64_t bus                   : 8;  /**< [ 27: 20] Bus number. */
        uint64_t func                  : 8;  /**< [ 19: 12] Function number. Note this assumes an ARI device; for external PCI devices that do not
                                                                 support ARI this contains both the device and function number. */
        uint64_t addr                  : 12; /**< [ 11:  0] Register address within the device. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 12; /**< [ 11:  0] Register address within the device. */
        uint64_t func                  : 8;  /**< [ 19: 12] Function number. Note this assumes an ARI device; for external PCI devices that do not
                                                                 support ARI this contains both the device and function number. */
        uint64_t bus                   : 8;  /**< [ 27: 20] Bus number. */
        uint64_t dmn                   : 6;  /**< [ 33: 28] Domain number. */
        uint64_t bcst                  : 1;  /**< [ 34: 34] Reserved, MBZ. */
        uint64_t setup                 : 1;  /**< [ 35: 35] Reserved, MBZ. */
        uint64_t did                   : 8;  /**< [ 43: 36] ECAM(0) DID. 0x78. */
        uint64_t node                  : 2;  /**< [ 45: 44] Reserved. */
        uint64_t reserved_46           : 1;
        uint64_t io                    : 5;  /**< [ 51: 47] Indicates I/O space. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecam_cfg_addr_s_s cn; */
};

/**
 * Register (RSL) ecam#_const
 *
 * ECAM Constants Register
 * This register contains constants for software discovery.
 */
union cavm_ecamx_const
{
    uint64_t u;
    struct cavm_ecamx_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t domains               : 8;  /**< [ 15:  8](RO) Number of domains. */
        uint64_t ecams                 : 8;  /**< [  7:  0](RO) Number of ECAM units. */
#else /* Word 0 - Little Endian */
        uint64_t ecams                 : 8;  /**< [  7:  0](RO) Number of ECAM units. */
        uint64_t domains               : 8;  /**< [ 15:  8](RO) Number of domains. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecamx_const_s cn; */
};
typedef union cavm_ecamx_const cavm_ecamx_const_t;

static inline uint64_t CAVM_ECAMX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ECAMX_CONST(uint64_t a)
{
    if (a==0)
        return 0x87e078000200ll + 0x1000000ll * ((a) & 0x0);
    __cavm_csr_fatal("ECAMX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ECAMX_CONST(a) cavm_ecamx_const_t
#define bustype_CAVM_ECAMX_CONST(a) CSR_TYPE_RSL
#define basename_CAVM_ECAMX_CONST(a) "ECAMX_CONST"
#define device_bar_CAVM_ECAMX_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ECAMX_CONST(a) (a)
#define arguments_CAVM_ECAMX_CONST(a) (a),-1,-1,-1

/**
 * Register (RSL) ecam#_dom#_bus#_permit
 *
 * ECAM Domain Bus Permit Registers
 * This register sets the permissions for an ECAM access to a device
 * using a given ECAM bus number.
 *
 * Index {a} corresponds to the ECAM address's domain (address's ECAM_CFG_ADDR_S[DMN]).
 * ECAM()_DOM()_CONST[PERMIT] is used to discover for which domains this register is
 * implemented; nonimplemented indices are RAZ.
 *
 * Index {b} corresponds to the ECAM address's bus number (address's ECAM_CFG_ADDR_S[BUS]).
 */
union cavm_ecamx_domx_busx_permit
{
    uint64_t u;
    struct cavm_ecamx_domx_busx_permit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t kill                  : 1;  /**< [  7:  7](SR/W1S) Kill the device. Once written with one, stays
                                                                 set until warm chip reset.  If set, no access
                                                                 allowed by any initiator. */
        uint64_t reserved_5_6          : 2;
        uint64_t xcp2_dis              : 1;  /**< [  4:  4](SR/W) XCP2 disable.Disable any accesses initiated by XCP2. */
        uint64_t xcp1_dis              : 1;  /**< [  3:  3](SR/W) XCP1 disable. Disable any accesses initiated by XCP1 (MCP). */
        uint64_t xcp0_dis              : 1;  /**< [  2:  2](SR/W) XCP0 disable. Disable any accesses initiated by XCP0 (SCP). */
        uint64_t nsec_dis              : 1;  /**< [  1:  1](SR/W) Nonsecure disable. Disable any non secure acceses by devices except for the ones
                                                                 from XCP0/XCP1/XCP2 */
        uint64_t sec_dis               : 1;  /**< [  0:  0](SR/W) Secure disable.Disable secure acceses from devices except for teh ones from XCP0/XCP1/XCP2. */
#else /* Word 0 - Little Endian */
        uint64_t sec_dis               : 1;  /**< [  0:  0](SR/W) Secure disable.Disable secure acceses from devices except for teh ones from XCP0/XCP1/XCP2. */
        uint64_t nsec_dis              : 1;  /**< [  1:  1](SR/W) Nonsecure disable. Disable any non secure acceses by devices except for the ones
                                                                 from XCP0/XCP1/XCP2 */
        uint64_t xcp0_dis              : 1;  /**< [  2:  2](SR/W) XCP0 disable. Disable any accesses initiated by XCP0 (SCP). */
        uint64_t xcp1_dis              : 1;  /**< [  3:  3](SR/W) XCP1 disable. Disable any accesses initiated by XCP1 (MCP). */
        uint64_t xcp2_dis              : 1;  /**< [  4:  4](SR/W) XCP2 disable.Disable any accesses initiated by XCP2. */
        uint64_t reserved_5_6          : 2;
        uint64_t kill                  : 1;  /**< [  7:  7](SR/W1S) Kill the device. Once written with one, stays
                                                                 set until warm chip reset.  If set, no access
                                                                 allowed by any initiator. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecamx_domx_busx_permit_s cn; */
};
typedef union cavm_ecamx_domx_busx_permit cavm_ecamx_domx_busx_permit_t;

static inline uint64_t CAVM_ECAMX_DOMX_BUSX_PERMIT(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ECAMX_DOMX_BUSX_PERMIT(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a==0) && ((b==0) || (b==1) || (b==2)) && (c<=255))
        return 0x87e078020000ll + 0x1000000ll * ((a) & 0x0) + 0x800ll * ((b) & 0x3) + 8ll * ((c) & 0xff);
    __cavm_csr_fatal("ECAMX_DOMX_BUSX_PERMIT", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_ECAMX_DOMX_BUSX_PERMIT(a,b,c) cavm_ecamx_domx_busx_permit_t
#define bustype_CAVM_ECAMX_DOMX_BUSX_PERMIT(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_ECAMX_DOMX_BUSX_PERMIT(a,b,c) "ECAMX_DOMX_BUSX_PERMIT"
#define device_bar_CAVM_ECAMX_DOMX_BUSX_PERMIT(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ECAMX_DOMX_BUSX_PERMIT(a,b,c) (a)
#define arguments_CAVM_ECAMX_DOMX_BUSX_PERMIT(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) ecam#_dom#_const
 *
 * ECAM Constants Register
 * This register contains constants for software discovery.
 *
 * Index {a} indicates the domain for which the attributes are to be returned.
 */
union cavm_ecamx_domx_const
{
    uint64_t u;
    struct cavm_ecamx_domx_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t pres                  : 1;  /**< [  5:  5](RO) If implemented. */
        uint64_t permit                : 1;  /**< [  4:  4](RO) If set, for this domain number, the ECAM()_DOM()_BUS()_PERMIT,
                                                                 ECAM()_DOM()_RSL()_PERMIT, and ECAM()_DOM()_DEV()_PERMIT registers are implemented. */
        uint64_t smmu                  : 4;  /**< [  3:  0](RO) Attached SMMU number. */
#else /* Word 0 - Little Endian */
        uint64_t smmu                  : 4;  /**< [  3:  0](RO) Attached SMMU number. */
        uint64_t permit                : 1;  /**< [  4:  4](RO) If set, for this domain number, the ECAM()_DOM()_BUS()_PERMIT,
                                                                 ECAM()_DOM()_RSL()_PERMIT, and ECAM()_DOM()_DEV()_PERMIT registers are implemented. */
        uint64_t pres                  : 1;  /**< [  5:  5](RO) If implemented. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecamx_domx_const_s cn; */
};
typedef union cavm_ecamx_domx_const cavm_ecamx_domx_const_t;

static inline uint64_t CAVM_ECAMX_DOMX_CONST(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ECAMX_DOMX_CONST(uint64_t a, uint64_t b)
{
    if ((a==0) && (b<=63))
        return 0x87e078000400ll + 0x1000000ll * ((a) & 0x0) + 8ll * ((b) & 0x3f);
    __cavm_csr_fatal("ECAMX_DOMX_CONST", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ECAMX_DOMX_CONST(a,b) cavm_ecamx_domx_const_t
#define bustype_CAVM_ECAMX_DOMX_CONST(a,b) CSR_TYPE_RSL
#define basename_CAVM_ECAMX_DOMX_CONST(a,b) "ECAMX_DOMX_CONST"
#define device_bar_CAVM_ECAMX_DOMX_CONST(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ECAMX_DOMX_CONST(a,b) (a)
#define arguments_CAVM_ECAMX_DOMX_CONST(a,b) (a),(b),-1,-1

/**
 * Register (RSL) ecam#_dom#_dev#_permit
 *
 * ECAM Domain Device Permit Registers
 * This register sets the permissions for a ECAM access to a bus 0 device.
 * This register is used when the bus number is 0; i.e.  address's ECAM_CFG_ADDR_S[BUS] = 0x0.
 *
 * Index {a} corresponds to the ECAM address's domain (address's ECAM_CFG_ADDR_S[DOMAIN]).
 * ECAM()_DOM()_CONST[PERMIT] is used to discover for which domains this register is
 * implemented; nonimplemented indices are RAZ.
 *
 * Index {b} corresponds to the bus 0 non-ARI device number (address's
 * ECAM_CFG_ADDR_S[FUNC]\<7:3\>).
 */
union cavm_ecamx_domx_devx_permit
{
    uint64_t u;
    struct cavm_ecamx_domx_devx_permit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t kill                  : 1;  /**< [  7:  7](SR/W1S) Kill the device. Once written with one, stays
                                                                 set until warm chip reset.  If set, no access
                                                                 allowed by any initiator. */
        uint64_t reserved_5_6          : 2;
        uint64_t xcp2_dis              : 1;  /**< [  4:  4](SR/W) XCP2 disable.Disable any accesses initiated by XCP2. */
        uint64_t xcp1_dis              : 1;  /**< [  3:  3](SR/W) XCP1 disable. Disable any accesses initiated by XCP1 (MCP). */
        uint64_t xcp0_dis              : 1;  /**< [  2:  2](SR/W) XCP0 disable. Disable any accesses initiated by XCP0 (SCP). */
        uint64_t nsec_dis              : 1;  /**< [  1:  1](SR/W) Nonsecure disable. Disable any non secure acceses by devices except for the ones
                                                                 from XCP0/XCP1/XCP2 */
        uint64_t sec_dis               : 1;  /**< [  0:  0](SR/W) Secure disable.Disable secure acceses from devices except for teh ones from XCP0/XCP1/XCP2. */
#else /* Word 0 - Little Endian */
        uint64_t sec_dis               : 1;  /**< [  0:  0](SR/W) Secure disable.Disable secure acceses from devices except for teh ones from XCP0/XCP1/XCP2. */
        uint64_t nsec_dis              : 1;  /**< [  1:  1](SR/W) Nonsecure disable. Disable any non secure acceses by devices except for the ones
                                                                 from XCP0/XCP1/XCP2 */
        uint64_t xcp0_dis              : 1;  /**< [  2:  2](SR/W) XCP0 disable. Disable any accesses initiated by XCP0 (SCP). */
        uint64_t xcp1_dis              : 1;  /**< [  3:  3](SR/W) XCP1 disable. Disable any accesses initiated by XCP1 (MCP). */
        uint64_t xcp2_dis              : 1;  /**< [  4:  4](SR/W) XCP2 disable.Disable any accesses initiated by XCP2. */
        uint64_t reserved_5_6          : 2;
        uint64_t kill                  : 1;  /**< [  7:  7](SR/W1S) Kill the device. Once written with one, stays
                                                                 set until warm chip reset.  If set, no access
                                                                 allowed by any initiator. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecamx_domx_devx_permit_s cn; */
};
typedef union cavm_ecamx_domx_devx_permit cavm_ecamx_domx_devx_permit_t;

static inline uint64_t CAVM_ECAMX_DOMX_DEVX_PERMIT(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ECAMX_DOMX_DEVX_PERMIT(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a==0) && ((b==0) || (b==1) || (b==2)) && (c<=31))
        return 0x87e078040000ll + 0x1000000ll * ((a) & 0x0) + 0x800ll * ((b) & 0x3) + 8ll * ((c) & 0x1f);
    __cavm_csr_fatal("ECAMX_DOMX_DEVX_PERMIT", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_ECAMX_DOMX_DEVX_PERMIT(a,b,c) cavm_ecamx_domx_devx_permit_t
#define bustype_CAVM_ECAMX_DOMX_DEVX_PERMIT(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_ECAMX_DOMX_DEVX_PERMIT(a,b,c) "ECAMX_DOMX_DEVX_PERMIT"
#define device_bar_CAVM_ECAMX_DOMX_DEVX_PERMIT(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ECAMX_DOMX_DEVX_PERMIT(a,b,c) (a)
#define arguments_CAVM_ECAMX_DOMX_DEVX_PERMIT(a,b,c) (a),(b),(c),-1

/**
 * Register (RSL) ecam#_dom#_rsl#_permit
 *
 * ECAM Domain Device Permit Registers
 * This register sets the permissions for an ECAM access to an RSL device.
 * This register is used when the domain and bus point to RSL; i.e.
 * address's ECAM_CFG_ADDR_S[DOMAIN]=PCC_DEV_CON_E::MRML\<21:16\>,
 * ECAM_CFG_ADDR_S[BUS] = PCC_DEV_CON_E::MRML\<15:8\>.
 *
 * Index {a} corresponds to the ECAM address's domain (address's ECAM_CFG_ADDR_S[DOMAIN]).
 * ECAM()_DOM()_CONST[PERMIT] is used to discover for which domains this register is
 * implemented; nonimplemented indices are RAZ.
 *
 * Index {b} bits 9:8 are 0x0 when the RSL device's PCC_DEV_CON_E\<9:8\> value is 0x1
 * (MRML0).
 *
 * Index {b} bits 9:8 are 0x1 when the RSL device's PCC_DEV_CON_E\<9:8\> value is 0x2
 * (MRML1).
 *
 * Index {b} bits 9:8 are 0x2 when the RSL device's PCC_DEV_CON_E\<9:8\> value is 0x3
 * (MRML2).
 *
 * Index {b} bits 9:8 are 0x3 when the RSL device's PCC_DEV_CON_E\<9:8\> value is 0x0
 * (MRML3).
 *
 * Index {b} bits 7:0 corresponds to the RSL device's PCC_DEV_CON_E\<7:0\> value.
 */
union cavm_ecamx_domx_rslx_permit
{
    uint64_t u;
    struct cavm_ecamx_domx_rslx_permit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t kill                  : 1;  /**< [  7:  7](SR/W1S) Kill the device. Once written with one, stays
                                                                 set until warm chip reset.  If set, no access
                                                                 allowed by any initiator. */
        uint64_t reserved_5_6          : 2;
        uint64_t xcp2_dis              : 1;  /**< [  4:  4](SR/W) XCP2 disable.Disable any accesses initiated by XCP2. */
        uint64_t xcp1_dis              : 1;  /**< [  3:  3](SR/W) XCP1 disable. Disable any accesses initiated by XCP1 (MCP). */
        uint64_t xcp0_dis              : 1;  /**< [  2:  2](SR/W) XCP0 disable. Disable any accesses initiated by XCP0 (SCP). */
        uint64_t nsec_dis              : 1;  /**< [  1:  1](SR/W) Nonsecure disable. Disable any non secure acceses by devices except for the ones
                                                                 from XCP0/XCP1/XCP2 */
        uint64_t sec_dis               : 1;  /**< [  0:  0](SR/W) Secure disable.Disable secure acceses from devices except for teh ones from XCP0/XCP1/XCP2. */
#else /* Word 0 - Little Endian */
        uint64_t sec_dis               : 1;  /**< [  0:  0](SR/W) Secure disable.Disable secure acceses from devices except for teh ones from XCP0/XCP1/XCP2. */
        uint64_t nsec_dis              : 1;  /**< [  1:  1](SR/W) Nonsecure disable. Disable any non secure acceses by devices except for the ones
                                                                 from XCP0/XCP1/XCP2 */
        uint64_t xcp0_dis              : 1;  /**< [  2:  2](SR/W) XCP0 disable. Disable any accesses initiated by XCP0 (SCP). */
        uint64_t xcp1_dis              : 1;  /**< [  3:  3](SR/W) XCP1 disable. Disable any accesses initiated by XCP1 (MCP). */
        uint64_t xcp2_dis              : 1;  /**< [  4:  4](SR/W) XCP2 disable.Disable any accesses initiated by XCP2. */
        uint64_t reserved_5_6          : 2;
        uint64_t kill                  : 1;  /**< [  7:  7](SR/W1S) Kill the device. Once written with one, stays
                                                                 set until warm chip reset.  If set, no access
                                                                 allowed by any initiator. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_ecamx_domx_rslx_permit_s cn; */
};
typedef union cavm_ecamx_domx_rslx_permit cavm_ecamx_domx_rslx_permit_t;

static inline uint64_t CAVM_ECAMX_DOMX_RSLX_PERMIT(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ECAMX_DOMX_RSLX_PERMIT(uint64_t a, uint64_t b, uint64_t c)
{
    if ((a==0) && ((b==0) || (b==1) || (b==2)) && (c<=1023))
        return 0x87e078060000ll + 0x1000000ll * ((a) & 0x0) + 0x2000ll * ((b) & 0x3) + 8ll * ((c) & 0x3ff);
    __cavm_csr_fatal("ECAMX_DOMX_RSLX_PERMIT", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_ECAMX_DOMX_RSLX_PERMIT(a,b,c) cavm_ecamx_domx_rslx_permit_t
#define bustype_CAVM_ECAMX_DOMX_RSLX_PERMIT(a,b,c) CSR_TYPE_RSL
#define basename_CAVM_ECAMX_DOMX_RSLX_PERMIT(a,b,c) "ECAMX_DOMX_RSLX_PERMIT"
#define device_bar_CAVM_ECAMX_DOMX_RSLX_PERMIT(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ECAMX_DOMX_RSLX_PERMIT(a,b,c) (a)
#define arguments_CAVM_ECAMX_DOMX_RSLX_PERMIT(a,b,c) (a),(b),(c),-1

#endif /* __CAVM_CSRS_ECAM_H__ */
