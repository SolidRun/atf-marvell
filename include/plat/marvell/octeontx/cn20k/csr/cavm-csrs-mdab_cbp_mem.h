#ifndef __CAVM_CSRS_MDAB_CBP_MEM_H__
#define __CAVM_CSRS_MDAB_CBP_MEM_H__
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
 * MDAB_CBP_MEM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration mdab_cbp_mem_bar_e
 */
#define CAVM_MDAB_CBP_MEM_BAR_E_MDAB_CBP_MEMX_PF_BAR0(a) (0x87e044000000ll + 0x80000ll * (a))
#define CAVM_MDAB_CBP_MEM_BAR_E_MDAB_CBP_MEMX_PF_BAR0_SIZE 0x80000ull

/**
 * Register (MULTIRSL) mdab_dsp#_mem_array#
 *
 * MDAB DSP Memory Window Array Registers
 * This address range provides OCTEON FUSION cores access to any MDAB DSP memories array. Intended for
 * debug purposes only because RSL accesses are slow. The offset use is an offset
 * related to he base of the sliding
 * window which is describe by MDAB_DSPINTR_BAR. see MDAB Direct-Access by Main core
 * for more details.
 */
union cavm_mdab_dspx_mem_arrayx
{
    uint64_t u;
    struct cavm_mdab_dspx_mem_arrayx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t qword                 : 64; /**< [ 63:  0](R/W) Quad-word (8-byte) data from DSP memory. */
#else /* Word 0 - Little Endian */
        uint64_t qword                 : 64; /**< [ 63:  0](R/W) Quad-word (8-byte) data from DSP memory. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mdab_dspx_mem_arrayx_s cn; */
};
typedef union cavm_mdab_dspx_mem_arrayx cavm_mdab_dspx_mem_arrayx_t;

static inline uint64_t CAVM_MDAB_DSPX_MEM_ARRAYX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MDAB_DSPX_MEM_ARRAYX(uint64_t a, uint64_t b)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && ((a<=47) && (b<=32767)))
        return 0x87e044040000ll + 0x80000ll * ((a) & 0x3f) + 8ll * ((b) & 0x7fff);
    __cavm_csr_fatal("MDAB_DSPX_MEM_ARRAYX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MDAB_DSPX_MEM_ARRAYX(a,b) cavm_mdab_dspx_mem_arrayx_t
#define bustype_CAVM_MDAB_DSPX_MEM_ARRAYX(a,b) CSR_TYPE_MULTIRSL
#define basename_CAVM_MDAB_DSPX_MEM_ARRAYX(a,b) "MDAB_DSPX_MEM_ARRAYX"
#define device_bar_CAVM_MDAB_DSPX_MEM_ARRAYX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MDAB_DSPX_MEM_ARRAYX(a,b) (a)
#define arguments_CAVM_MDAB_DSPX_MEM_ARRAYX(a,b) (a),(b),-1,-1

#endif /* __CAVM_CSRS_MDAB_CBP_MEM_H__ */
