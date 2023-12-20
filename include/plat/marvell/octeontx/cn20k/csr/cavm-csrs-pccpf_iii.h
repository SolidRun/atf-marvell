#ifndef __CAVM_CSRS_PCCPF_III_H__
#define __CAVM_CSRS_PCCPF_III_H__
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
 * PCCPF_III.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (PCCPF) pccpf_xxx_vsec_permit
 *
 * PCC CSR Permit Access Registers
 * This register sets the permissions for access to the CSR core of this block.
 */
union cavm_pccpf_xxx_vsec_permit
{
    uint32_t u;
    struct cavm_pccpf_xxx_vsec_permit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t lock                  : 1;  /**< [ 15: 15](SR/W1S) Lock Bit, Lock the register from any further updates Once this bit is set all
                                                                 the sbsequent writes are ignored. The whole register acts as read only. */
        uint32_t kill                  : 1;  /**< [ 14: 14](SR/W1S) Kill the device. Once written with one, stays
                                                                 set until chip domain reset.  If set, no access
                                                                 allowed by any initiator. */
        uint32_t reserved_7_13         : 7;
        uint32_t dtx_dis               : 1;  /**< [  6:  6](SR/W) DTX access disable. Disable any access targeting the DTX module. */
        uint32_t xcp3_dis              : 1;  /**< [  5:  5](SR/W) XCP3 disable. Disable any access initiated by XCP3. */
        uint32_t xcp2_dis              : 1;  /**< [  4:  4](SR/W) XCP2 disable. Disable any accesses initiated by XCP2. */
        uint32_t xcp1_dis              : 1;  /**< [  3:  3](SR/W) XCP1 disable. Disable any accesses initiated by XCP1 (MCP). */
        uint32_t xcp0_dis              : 1;  /**< [  2:  2](SR/W) XCP0 disable. Disable any accesses initiated by XCP0 (SCP). */
        uint32_t nsec_dis              : 1;  /**< [  1:  1](SR/W) Nonsecure disable. Disable any non secure acceses by devices except for the ones
                                                                 from XCP0/XCP1/XCP2 */
        uint32_t sec_dis               : 1;  /**< [  0:  0](SR/W) Secure disable. Disable secure acceses from devices except for the ones from XCP0/XCP1/XCP2. */
#else /* Word 0 - Little Endian */
        uint32_t sec_dis               : 1;  /**< [  0:  0](SR/W) Secure disable. Disable secure acceses from devices except for the ones from XCP0/XCP1/XCP2. */
        uint32_t nsec_dis              : 1;  /**< [  1:  1](SR/W) Nonsecure disable. Disable any non secure acceses by devices except for the ones
                                                                 from XCP0/XCP1/XCP2 */
        uint32_t xcp0_dis              : 1;  /**< [  2:  2](SR/W) XCP0 disable. Disable any accesses initiated by XCP0 (SCP). */
        uint32_t xcp1_dis              : 1;  /**< [  3:  3](SR/W) XCP1 disable. Disable any accesses initiated by XCP1 (MCP). */
        uint32_t xcp2_dis              : 1;  /**< [  4:  4](SR/W) XCP2 disable. Disable any accesses initiated by XCP2. */
        uint32_t xcp3_dis              : 1;  /**< [  5:  5](SR/W) XCP3 disable. Disable any access initiated by XCP3. */
        uint32_t dtx_dis               : 1;  /**< [  6:  6](SR/W) DTX access disable. Disable any access targeting the DTX module. */
        uint32_t reserved_7_13         : 7;
        uint32_t kill                  : 1;  /**< [ 14: 14](SR/W1S) Kill the device. Once written with one, stays
                                                                 set until chip domain reset.  If set, no access
                                                                 allowed by any initiator. */
        uint32_t lock                  : 1;  /**< [ 15: 15](SR/W1S) Lock Bit, Lock the register from any further updates Once this bit is set all
                                                                 the sbsequent writes are ignored. The whole register acts as read only. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_vsec_permit_s cn; */
};
typedef union cavm_pccpf_xxx_vsec_permit cavm_pccpf_xxx_vsec_permit_t;

#define CAVM_PCCPF_XXX_VSEC_PERMIT CAVM_PCCPF_XXX_VSEC_PERMIT_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_VSEC_PERMIT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_VSEC_PERMIT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x114;
    __cavm_csr_fatal("PCCPF_XXX_VSEC_PERMIT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_VSEC_PERMIT cavm_pccpf_xxx_vsec_permit_t
#define bustype_CAVM_PCCPF_XXX_VSEC_PERMIT CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_VSEC_PERMIT "PCCPF_XXX_VSEC_PERMIT"
#define busnum_CAVM_PCCPF_XXX_VSEC_PERMIT 0
#define arguments_CAVM_PCCPF_XXX_VSEC_PERMIT -1,-1,-1,-1

/**
 * Register (PCCPF) pccpf_xxx_vsec_streamid
 *
 * PCC StreamId Registers
 * Programmable Domain, Bus, and Function values used as the GIB StreamId field
 */
union cavm_pccpf_xxx_vsec_streamid
{
    uint32_t u;
    struct cavm_pccpf_xxx_vsec_streamid_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_22_31        : 10;
        uint32_t dmn                   : 6;  /**< [ 21: 16](SR/W) Domain value of the GIB StreamId. */
        uint32_t bus                   : 8;  /**< [ 15:  8](SR/W) Bus value of the GIB StreamId. */
        uint32_t func                  : 8;  /**< [  7:  0](SR/W) Function value of the GIB StreamId. This value is only used for single function PCC devices. */
#else /* Word 0 - Little Endian */
        uint32_t func                  : 8;  /**< [  7:  0](SR/W) Function value of the GIB StreamId. This value is only used for single function PCC devices. */
        uint32_t bus                   : 8;  /**< [ 15:  8](SR/W) Bus value of the GIB StreamId. */
        uint32_t dmn                   : 6;  /**< [ 21: 16](SR/W) Domain value of the GIB StreamId. */
        uint32_t reserved_22_31        : 10;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_pccpf_xxx_vsec_streamid_s cn; */
};
typedef union cavm_pccpf_xxx_vsec_streamid cavm_pccpf_xxx_vsec_streamid_t;

#define CAVM_PCCPF_XXX_VSEC_STREAMID CAVM_PCCPF_XXX_VSEC_STREAMID_FUNC()
static inline uint64_t CAVM_PCCPF_XXX_VSEC_STREAMID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_PCCPF_XXX_VSEC_STREAMID_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x118;
    __cavm_csr_fatal("PCCPF_XXX_VSEC_STREAMID", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_PCCPF_XXX_VSEC_STREAMID cavm_pccpf_xxx_vsec_streamid_t
#define bustype_CAVM_PCCPF_XXX_VSEC_STREAMID CSR_TYPE_PCCPF
#define basename_CAVM_PCCPF_XXX_VSEC_STREAMID "PCCPF_XXX_VSEC_STREAMID"
#define busnum_CAVM_PCCPF_XXX_VSEC_STREAMID 0
#define arguments_CAVM_PCCPF_XXX_VSEC_STREAMID -1,-1,-1,-1

#endif /* __CAVM_CSRS_PCCPF_III_H__ */
