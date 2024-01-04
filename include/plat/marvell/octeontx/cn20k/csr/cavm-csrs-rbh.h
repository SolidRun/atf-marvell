#ifndef __CAVM_CSRS_RBH_H__
#define __CAVM_CSRS_RBH_H__
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
 * RBH.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration rbh_bar_e
 *
 * RBH Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_RBH_BAR_E_RBH_PF_BAR0 (0x87e0f8000000ll)
#define CAVM_RBH_BAR_E_RBH_PF_BAR0_SIZE 0x10000ull
#define CAVM_RBH_BAR_E_RBH_PF_BAR4 (0x87e0f8800000ll)
#define CAVM_RBH_BAR_E_RBH_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration rbh_int_vec_e
 *
 * RBH MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_RBH_INT_VEC_E_INTS (0)

/**
 * Register (RSL) rbh_active_pc
 *
 * RBH Conditional Clock Counter Register
 * This register counts conditional clocks for power management.
 * This register is reset on chip reset.
 */
union cavm_rbh_active_pc
{
    uint64_t u;
    struct cavm_rbh_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional clock cycles since reset. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional clock cycles since reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_active_pc_s cn; */
};
typedef union cavm_rbh_active_pc cavm_rbh_active_pc_t;

#define CAVM_RBH_ACTIVE_PC CAVM_RBH_ACTIVE_PC_FUNC()
static inline uint64_t CAVM_RBH_ACTIVE_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_ACTIVE_PC_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e0f8000018ll;
    __cavm_csr_fatal("RBH_ACTIVE_PC", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_ACTIVE_PC cavm_rbh_active_pc_t
#define bustype_CAVM_RBH_ACTIVE_PC CSR_TYPE_RSL
#define basename_CAVM_RBH_ACTIVE_PC "RBH_ACTIVE_PC"
#define device_bar_CAVM_RBH_ACTIVE_PC 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_ACTIVE_PC 0
#define arguments_CAVM_RBH_ACTIVE_PC -1,-1,-1,-1

/**
 * Register (RSL) rbh_arfc_req_wdog
 *
 * RBH ARF Controller Request Watchdog Timer Register
 */
union cavm_rbh_arfc_req_wdog
{
    uint64_t u;
    struct cavm_rbh_arfc_req_wdog_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t lock                  : 1;  /**< [ 32: 32](SR/W1S) Lock Bit, Lock the register from any further updates until the device is reset. Once set, all
                                                                 subsequent writes have no effect and the register behaves as read only. */
        uint64_t req_timeout           : 32; /**< [ 31:  0](SR/W) ARF Request Timeout value, in ioclock cycles, that the RBH ARFC will track for
                                                                 each outgoing request
                                                                 to downstream targets. This timer is typically used to enable faster response handling to accesses
                                                                 to non-existent devices. For example, during ECAM Discovery. Once the request receives an ACK, this
                                                                 timer is no longer valid for that particular request.

                                                                 The Request Timeout must be set to be a much smaller value than the Response Timeout.

                                                                 When the request timer expires for a given request, it is removed from the outstanding requests
                                                                 and the RBH will issue a response with the error field dependent on the value set in RBH_CTL. */
#else /* Word 0 - Little Endian */
        uint64_t req_timeout           : 32; /**< [ 31:  0](SR/W) ARF Request Timeout value, in ioclock cycles, that the RBH ARFC will track for
                                                                 each outgoing request
                                                                 to downstream targets. This timer is typically used to enable faster response handling to accesses
                                                                 to non-existent devices. For example, during ECAM Discovery. Once the request receives an ACK, this
                                                                 timer is no longer valid for that particular request.

                                                                 The Request Timeout must be set to be a much smaller value than the Response Timeout.

                                                                 When the request timer expires for a given request, it is removed from the outstanding requests
                                                                 and the RBH will issue a response with the error field dependent on the value set in RBH_CTL. */
        uint64_t lock                  : 1;  /**< [ 32: 32](SR/W1S) Lock Bit, Lock the register from any further updates until the device is reset. Once set, all
                                                                 subsequent writes have no effect and the register behaves as read only. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_arfc_req_wdog_s cn; */
};
typedef union cavm_rbh_arfc_req_wdog cavm_rbh_arfc_req_wdog_t;

#define CAVM_RBH_ARFC_REQ_WDOG CAVM_RBH_ARFC_REQ_WDOG_FUNC()
static inline uint64_t CAVM_RBH_ARFC_REQ_WDOG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_ARFC_REQ_WDOG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e0f8000400ll;
    __cavm_csr_fatal("RBH_ARFC_REQ_WDOG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_ARFC_REQ_WDOG cavm_rbh_arfc_req_wdog_t
#define bustype_CAVM_RBH_ARFC_REQ_WDOG CSR_TYPE_RSL
#define basename_CAVM_RBH_ARFC_REQ_WDOG "RBH_ARFC_REQ_WDOG"
#define device_bar_CAVM_RBH_ARFC_REQ_WDOG 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_ARFC_REQ_WDOG 0
#define arguments_CAVM_RBH_ARFC_REQ_WDOG -1,-1,-1,-1

/**
 * Register (RSL) rbh_arfc_rsp_wdog
 *
 * RBH ARF Controller Response Watchdog Timer Register
 */
union cavm_rbh_arfc_rsp_wdog
{
    uint64_t u;
    struct cavm_rbh_arfc_rsp_wdog_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t lock                  : 1;  /**< [ 32: 32](SR/W1S) Lock Bit, Lock the register from any further updates until the device is reset. Once set, all
                                                                 subsequent writes have no effect and the register behaves as read only. */
        uint64_t rsp_timeout           : 32; /**< [ 31:  0](SR/W) ARF Response Timeout value, in coprocessor clocks, that the RBH ARFC will track for
                                                                 each outgoing request to downstream targets. This timer is used only if the request
                                                                 has received an ACK, which indicates that the request will be serviced but that it
                                                                 may take some time.

                                                                 The Response Timeout must be set to be a much larger value than the Request Timeout

                                                                 When the response timer expires for a given request, it is removed from the outstanding requests, a
                                                                 TAG CANCEL packet is issued to the target to abort the in process request, and the RBH will issue a
                                                                 response with the error field dependent on the value set in RBH_CTL. */
#else /* Word 0 - Little Endian */
        uint64_t rsp_timeout           : 32; /**< [ 31:  0](SR/W) ARF Response Timeout value, in coprocessor clocks, that the RBH ARFC will track for
                                                                 each outgoing request to downstream targets. This timer is used only if the request
                                                                 has received an ACK, which indicates that the request will be serviced but that it
                                                                 may take some time.

                                                                 The Response Timeout must be set to be a much larger value than the Request Timeout

                                                                 When the response timer expires for a given request, it is removed from the outstanding requests, a
                                                                 TAG CANCEL packet is issued to the target to abort the in process request, and the RBH will issue a
                                                                 response with the error field dependent on the value set in RBH_CTL. */
        uint64_t lock                  : 1;  /**< [ 32: 32](SR/W1S) Lock Bit, Lock the register from any further updates until the device is reset. Once set, all
                                                                 subsequent writes have no effect and the register behaves as read only. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_arfc_rsp_wdog_s cn; */
};
typedef union cavm_rbh_arfc_rsp_wdog cavm_rbh_arfc_rsp_wdog_t;

#define CAVM_RBH_ARFC_RSP_WDOG CAVM_RBH_ARFC_RSP_WDOG_FUNC()
static inline uint64_t CAVM_RBH_ARFC_RSP_WDOG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_ARFC_RSP_WDOG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e0f8000408ll;
    __cavm_csr_fatal("RBH_ARFC_RSP_WDOG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_ARFC_RSP_WDOG cavm_rbh_arfc_rsp_wdog_t
#define bustype_CAVM_RBH_ARFC_RSP_WDOG CSR_TYPE_RSL
#define basename_CAVM_RBH_ARFC_RSP_WDOG "RBH_ARFC_RSP_WDOG"
#define device_bar_CAVM_RBH_ARFC_RSP_WDOG 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_ARFC_RSP_WDOG 0
#define arguments_CAVM_RBH_ARFC_RSP_WDOG -1,-1,-1,-1

/**
 * Register (RSL) rbh_arfc_status
 *
 * RBH ARF Controller Status Register
 */
union cavm_rbh_arfc_status
{
    uint64_t u;
    struct cavm_rbh_arfc_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t cdc_crd_avail         : 1;  /**< [ 16: 16](SRO/H) If set, indicates that all credits from all ARF CDC modules connected directly to the RBH ARFC
                                                                 are available. This indicates that there is no request that is currently being transferred to a
                                                                 different clock domain. */
        uint64_t reserved_11_15        : 5;
        uint64_t lvf_outs              : 3;  /**< [ 10:  8](SRO/H) Number of requests outstanding on the ARF Low Performance Virtual Fabric */
        uint64_t reserved_5_7          : 3;
        uint64_t hvf_outs              : 5;  /**< [  4:  0](SRO/H) Number of requests outstanding on the ARF High Performance Virtual Fabric.

                                                                 Maximum outstanding transactions \>= (Current outstanding HPF requests +
                                                                 Current outstanding LPF requests) */
#else /* Word 0 - Little Endian */
        uint64_t hvf_outs              : 5;  /**< [  4:  0](SRO/H) Number of requests outstanding on the ARF High Performance Virtual Fabric.

                                                                 Maximum outstanding transactions \>= (Current outstanding HPF requests +
                                                                 Current outstanding LPF requests) */
        uint64_t reserved_5_7          : 3;
        uint64_t lvf_outs              : 3;  /**< [ 10:  8](SRO/H) Number of requests outstanding on the ARF Low Performance Virtual Fabric */
        uint64_t reserved_11_15        : 5;
        uint64_t cdc_crd_avail         : 1;  /**< [ 16: 16](SRO/H) If set, indicates that all credits from all ARF CDC modules connected directly to the RBH ARFC
                                                                 are available. This indicates that there is no request that is currently being transferred to a
                                                                 different clock domain. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_arfc_status_s cn; */
};
typedef union cavm_rbh_arfc_status cavm_rbh_arfc_status_t;

#define CAVM_RBH_ARFC_STATUS CAVM_RBH_ARFC_STATUS_FUNC()
static inline uint64_t CAVM_RBH_ARFC_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_ARFC_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e0f8000410ll;
    __cavm_csr_fatal("RBH_ARFC_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_ARFC_STATUS cavm_rbh_arfc_status_t
#define bustype_CAVM_RBH_ARFC_STATUS CSR_TYPE_RSL
#define basename_CAVM_RBH_ARFC_STATUS "RBH_ARFC_STATUS"
#define device_bar_CAVM_RBH_ARFC_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_ARFC_STATUS 0
#define arguments_CAVM_RBH_ARFC_STATUS -1,-1,-1,-1

/**
 * Register (RSL) rbh_axi_req_status
 *
 * RBH AXI Request Port Status Register
 */
union cavm_rbh_axi_req_status
{
    uint64_t u;
    struct cavm_rbh_axi_req_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t rsp_waiting           : 5;  /**< [ 15: 11](SRO/H) Number of requests received over the AXI port that have been sent to downstream ARF targets that
                                                                 are awaiting responses */
        uint64_t reserved_5_10         : 6;
        uint64_t req_outs              : 5;  /**< [  4:  0](SRO/H) Number of requests received over the AXI port that are currently outstanding. This includes both
                                                                 requests that have been sent to downstream ARF targets and requests that have not yet been sent
                                                                 to downstream ARF targets */
#else /* Word 0 - Little Endian */
        uint64_t req_outs              : 5;  /**< [  4:  0](SRO/H) Number of requests received over the AXI port that are currently outstanding. This includes both
                                                                 requests that have been sent to downstream ARF targets and requests that have not yet been sent
                                                                 to downstream ARF targets */
        uint64_t reserved_5_10         : 6;
        uint64_t rsp_waiting           : 5;  /**< [ 15: 11](SRO/H) Number of requests received over the AXI port that have been sent to downstream ARF targets that
                                                                 are awaiting responses */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_axi_req_status_s cn; */
};
typedef union cavm_rbh_axi_req_status cavm_rbh_axi_req_status_t;

#define CAVM_RBH_AXI_REQ_STATUS CAVM_RBH_AXI_REQ_STATUS_FUNC()
static inline uint64_t CAVM_RBH_AXI_REQ_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_AXI_REQ_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e0f8000028ll;
    __cavm_csr_fatal("RBH_AXI_REQ_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_AXI_REQ_STATUS cavm_rbh_axi_req_status_t
#define bustype_CAVM_RBH_AXI_REQ_STATUS CSR_TYPE_RSL
#define basename_CAVM_RBH_AXI_REQ_STATUS "RBH_AXI_REQ_STATUS"
#define device_bar_CAVM_RBH_AXI_REQ_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_AXI_REQ_STATUS 0
#define arguments_CAVM_RBH_AXI_REQ_STATUS -1,-1,-1,-1

/**
 * Register (RSL) rbh_ctl
 *
 * RBH Control and Configuration Register
 */
union cavm_rbh_ctl
{
    uint64_t u;
    struct cavm_rbh_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t force_gibm_clken      : 1;  /**< [  1:  1](SR/W) Force the conditional clocks in GIBM to always be enabled. For diagnostic use only. */
        uint64_t force_rbh_clken       : 1;  /**< [  0:  0](SR/W) Force the conditional clocks in RBH to always be enabled. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t force_rbh_clken       : 1;  /**< [  0:  0](SR/W) Force the conditional clocks in RBH to always be enabled. For diagnostic use only. */
        uint64_t force_gibm_clken      : 1;  /**< [  1:  1](SR/W) Force the conditional clocks in GIBM to always be enabled. For diagnostic use only. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_ctl_s cn; */
};
typedef union cavm_rbh_ctl cavm_rbh_ctl_t;

#define CAVM_RBH_CTL CAVM_RBH_CTL_FUNC()
static inline uint64_t CAVM_RBH_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e0f8000010ll;
    __cavm_csr_fatal("RBH_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_CTL cavm_rbh_ctl_t
#define bustype_CAVM_RBH_CTL CSR_TYPE_RSL
#define basename_CAVM_RBH_CTL "RBH_CTL"
#define device_bar_CAVM_RBH_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_CTL 0
#define arguments_CAVM_RBH_CTL -1,-1,-1,-1

/**
 * Register (RSL) rbh_dr_req_status#
 *
 * RBH Direct Requester Port Status Register
 */
union cavm_rbh_dr_req_statusx
{
    uint64_t u;
    struct cavm_rbh_dr_req_statusx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t rsp_waiting           : 5;  /**< [ 15: 11](SRO/H) Number of requests received over the DR ARF port that have been sent to downstream ARF targets that
                                                                 are awaiting responses */
        uint64_t reserved_5_10         : 6;
        uint64_t req_outs              : 5;  /**< [  4:  0](SRO/H) Number of requests received over the DR ARF port that are currently outstanding. This includes both
                                                                 requests that have been sent to downstream ARF targets and requests that have not yet been sent
                                                                 to downstream ARF targets */
#else /* Word 0 - Little Endian */
        uint64_t req_outs              : 5;  /**< [  4:  0](SRO/H) Number of requests received over the DR ARF port that are currently outstanding. This includes both
                                                                 requests that have been sent to downstream ARF targets and requests that have not yet been sent
                                                                 to downstream ARF targets */
        uint64_t reserved_5_10         : 6;
        uint64_t rsp_waiting           : 5;  /**< [ 15: 11](SRO/H) Number of requests received over the DR ARF port that have been sent to downstream ARF targets that
                                                                 are awaiting responses */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_dr_req_statusx_s cn; */
};
typedef union cavm_rbh_dr_req_statusx cavm_rbh_dr_req_statusx_t;

static inline uint64_t CAVM_RBH_DR_REQ_STATUSX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_DR_REQ_STATUSX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=5))
        return 0x87e0f8000100ll + 8ll * ((a) & 0x7);
    __cavm_csr_fatal("RBH_DR_REQ_STATUSX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_DR_REQ_STATUSX(a) cavm_rbh_dr_req_statusx_t
#define bustype_CAVM_RBH_DR_REQ_STATUSX(a) CSR_TYPE_RSL
#define basename_CAVM_RBH_DR_REQ_STATUSX(a) "RBH_DR_REQ_STATUSX"
#define device_bar_CAVM_RBH_DR_REQ_STATUSX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_DR_REQ_STATUSX(a) (a)
#define arguments_CAVM_RBH_DR_REQ_STATUSX(a) (a),-1,-1,-1

/**
 * Register (RSL) rbh_hvf_prg_addr_mask#
 *
 * RBH ARF High Performance Virtual Fabric Programmable Address Mask Register
 */
union cavm_rbh_hvf_prg_addr_maskx
{
    uint64_t u;
    struct cavm_rbh_hvf_prg_addr_maskx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mask                  : 48; /**< [ 63: 16](SR/W) Indicates the address mask to use along with the base address to check against requests
                                                                 to programmable io space to determine whether the device being accessed is an ARF high
                                                                 performance virtual fabric device or not. A 1 indicates the corresponding address bit will
                                                                 be compared. */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t mask                  : 48; /**< [ 63: 16](SR/W) Indicates the address mask to use along with the base address to check against requests
                                                                 to programmable io space to determine whether the device being accessed is an ARF high
                                                                 performance virtual fabric device or not. A 1 indicates the corresponding address bit will
                                                                 be compared. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_hvf_prg_addr_maskx_s cn; */
};
typedef union cavm_rbh_hvf_prg_addr_maskx cavm_rbh_hvf_prg_addr_maskx_t;

static inline uint64_t CAVM_RBH_HVF_PRG_ADDR_MASKX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_HVF_PRG_ADDR_MASKX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0f8000860ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("RBH_HVF_PRG_ADDR_MASKX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_HVF_PRG_ADDR_MASKX(a) cavm_rbh_hvf_prg_addr_maskx_t
#define bustype_CAVM_RBH_HVF_PRG_ADDR_MASKX(a) CSR_TYPE_RSL
#define basename_CAVM_RBH_HVF_PRG_ADDR_MASKX(a) "RBH_HVF_PRG_ADDR_MASKX"
#define device_bar_CAVM_RBH_HVF_PRG_ADDR_MASKX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_HVF_PRG_ADDR_MASKX(a) (a)
#define arguments_CAVM_RBH_HVF_PRG_ADDR_MASKX(a) (a),-1,-1,-1

/**
 * Register (RSL) rbh_hvf_prg_base_addr#
 *
 * RBH ARF High Performance Virtual Fabric Programmable Base Address Register
 */
union cavm_rbh_hvf_prg_base_addrx
{
    uint64_t u;
    struct cavm_rbh_hvf_prg_base_addrx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t base_addr             : 48; /**< [ 63: 16](SR/W) Indicates the base address of a block of programmable IO address space devices that
                                                                 will use the ARF high performance virtual fabric. */
        uint64_t reserved_1_15         : 15;
        uint64_t valid                 : 1;  /**< [  0:  0](SR/W) If set, RBH will compare requests with a programmable address against this register's
                                                                 corresponding BASE_ADDR and MASK to determine if the device being accessed is an ARF high
                                                                 performance virtual fabric device or not. */
#else /* Word 0 - Little Endian */
        uint64_t valid                 : 1;  /**< [  0:  0](SR/W) If set, RBH will compare requests with a programmable address against this register's
                                                                 corresponding BASE_ADDR and MASK to determine if the device being accessed is an ARF high
                                                                 performance virtual fabric device or not. */
        uint64_t reserved_1_15         : 15;
        uint64_t base_addr             : 48; /**< [ 63: 16](SR/W) Indicates the base address of a block of programmable IO address space devices that
                                                                 will use the ARF high performance virtual fabric. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_hvf_prg_base_addrx_s cn; */
};
typedef union cavm_rbh_hvf_prg_base_addrx cavm_rbh_hvf_prg_base_addrx_t;

static inline uint64_t CAVM_RBH_HVF_PRG_BASE_ADDRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_HVF_PRG_BASE_ADDRX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=3))
        return 0x87e0f8000840ll + 8ll * ((a) & 0x3);
    __cavm_csr_fatal("RBH_HVF_PRG_BASE_ADDRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_HVF_PRG_BASE_ADDRX(a) cavm_rbh_hvf_prg_base_addrx_t
#define bustype_CAVM_RBH_HVF_PRG_BASE_ADDRX(a) CSR_TYPE_RSL
#define basename_CAVM_RBH_HVF_PRG_BASE_ADDRX(a) "RBH_HVF_PRG_BASE_ADDRX"
#define device_bar_CAVM_RBH_HVF_PRG_BASE_ADDRX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_HVF_PRG_BASE_ADDRX(a) (a)
#define arguments_CAVM_RBH_HVF_PRG_BASE_ADDRX(a) (a),-1,-1,-1

/**
 * Register (RSL) rbh_int_ena_w1c
 *
 * RBH Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_rbh_int_ena_w1c
{
    uint64_t u;
    struct cavm_rbh_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t gibm_fault            : 1;  /**< [  5:  5](SR/W1C/H) Reads or clears enable for RBH_INT_SUM[GIBM_FAULT]. */
        uint64_t gibm_ecc_err          : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for RBH_INT_SUM[GIBM_ECC_ERR]. */
        uint64_t sw_ecam_non_empty     : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for RBH_INT_SUM[SW_ECAM_NON_EMPTY]. */
        uint64_t dtc_rsp_err           : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for RBH_INT_SUM[DTC_RSP_ERR]. */
        uint64_t dtc_ftl_err           : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for RBH_INT_SUM[DTC_FTL_ERR]. */
        uint64_t dtc_rsp_to            : 1;  /**< [  0:  0](SR/W1C/H) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t dtc_rsp_to            : 1;  /**< [  0:  0](SR/W1C/H) Reserved. */
        uint64_t dtc_ftl_err           : 1;  /**< [  1:  1](SR/W1C/H) Reads or clears enable for RBH_INT_SUM[DTC_FTL_ERR]. */
        uint64_t dtc_rsp_err           : 1;  /**< [  2:  2](SR/W1C/H) Reads or clears enable for RBH_INT_SUM[DTC_RSP_ERR]. */
        uint64_t sw_ecam_non_empty     : 1;  /**< [  3:  3](SR/W1C/H) Reads or clears enable for RBH_INT_SUM[SW_ECAM_NON_EMPTY]. */
        uint64_t gibm_ecc_err          : 1;  /**< [  4:  4](SR/W1C/H) Reads or clears enable for RBH_INT_SUM[GIBM_ECC_ERR]. */
        uint64_t gibm_fault            : 1;  /**< [  5:  5](SR/W1C/H) Reads or clears enable for RBH_INT_SUM[GIBM_FAULT]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_int_ena_w1c_s cn; */
};
typedef union cavm_rbh_int_ena_w1c cavm_rbh_int_ena_w1c_t;

#define CAVM_RBH_INT_ENA_W1C CAVM_RBH_INT_ENA_W1C_FUNC()
static inline uint64_t CAVM_RBH_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_INT_ENA_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e0f8001010ll;
    __cavm_csr_fatal("RBH_INT_ENA_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_INT_ENA_W1C cavm_rbh_int_ena_w1c_t
#define bustype_CAVM_RBH_INT_ENA_W1C CSR_TYPE_RSL
#define basename_CAVM_RBH_INT_ENA_W1C "RBH_INT_ENA_W1C"
#define device_bar_CAVM_RBH_INT_ENA_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_INT_ENA_W1C 0
#define arguments_CAVM_RBH_INT_ENA_W1C -1,-1,-1,-1

/**
 * Register (RSL) rbh_int_ena_w1s
 *
 * RBH Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_rbh_int_ena_w1s
{
    uint64_t u;
    struct cavm_rbh_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t gibm_fault            : 1;  /**< [  5:  5](SR/W1S/H) Reads or sets enable for RBH_INT_SUM[GIBM_FAULT]. */
        uint64_t gibm_ecc_err          : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for RBH_INT_SUM[GIBM_ECC_ERR]. */
        uint64_t sw_ecam_non_empty     : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for RBH_INT_SUM[SW_ECAM_NON_EMPTY]. */
        uint64_t dtc_rsp_err           : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for RBH_INT_SUM[DTC_RSP_ERR]. */
        uint64_t dtc_ftl_err           : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for RBH_INT_SUM[DTC_FTL_ERR]. */
        uint64_t dtc_rsp_to            : 1;  /**< [  0:  0](SR/W1S/H) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t dtc_rsp_to            : 1;  /**< [  0:  0](SR/W1S/H) Reserved. */
        uint64_t dtc_ftl_err           : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets enable for RBH_INT_SUM[DTC_FTL_ERR]. */
        uint64_t dtc_rsp_err           : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets enable for RBH_INT_SUM[DTC_RSP_ERR]. */
        uint64_t sw_ecam_non_empty     : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets enable for RBH_INT_SUM[SW_ECAM_NON_EMPTY]. */
        uint64_t gibm_ecc_err          : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets enable for RBH_INT_SUM[GIBM_ECC_ERR]. */
        uint64_t gibm_fault            : 1;  /**< [  5:  5](SR/W1S/H) Reads or sets enable for RBH_INT_SUM[GIBM_FAULT]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_int_ena_w1s_s cn; */
};
typedef union cavm_rbh_int_ena_w1s cavm_rbh_int_ena_w1s_t;

#define CAVM_RBH_INT_ENA_W1S CAVM_RBH_INT_ENA_W1S_FUNC()
static inline uint64_t CAVM_RBH_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_INT_ENA_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e0f8001018ll;
    __cavm_csr_fatal("RBH_INT_ENA_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_INT_ENA_W1S cavm_rbh_int_ena_w1s_t
#define bustype_CAVM_RBH_INT_ENA_W1S CSR_TYPE_RSL
#define basename_CAVM_RBH_INT_ENA_W1S "RBH_INT_ENA_W1S"
#define device_bar_CAVM_RBH_INT_ENA_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_INT_ENA_W1S 0
#define arguments_CAVM_RBH_INT_ENA_W1S -1,-1,-1,-1

/**
 * Register (RSL) rbh_int_sum
 *
 * RBH Interrupt Summary Register
 * This register contains the the vector of different RBH interrupts
 */
union cavm_rbh_int_sum
{
    uint64_t u;
    struct cavm_rbh_int_sum_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t gibm_fault            : 1;  /**< [  5:  5](SR/W1C/H) GIBM received a fault response when attempting to write a GIB interrupt message towards
                                                                 the GIC.  The interrupt message was dropped.  This most likely indicates a bad MSIX
                                                                 vector address, or SMMU misprogramming. */
        uint64_t gibm_ecc_err          : 1;  /**< [  4:  4](SR/W1C/H) GIBM received an Uncorrectable ECC Error. */
        uint64_t sw_ecam_non_empty     : 1;  /**< [  3:  3](SR/W1C/H) Signals that the RBH's SW ECAM trap storage is non-empty. Indicating that there are
                                                                 requests to SW ECAM address space to read out and process into Fixed ECAM space accesses. */
        uint64_t dtc_rsp_err           : 1;  /**< [  2:  2](SR/W1C/H) The ARF response received on the RBH ARF DTC had a length/size mismatch with the original
                                                                 request. */
        uint64_t dtc_ftl_err           : 1;  /**< [  1:  1](SR/W1C/H) When set, indicates an fatal error occurred on the RBH ARF DTC. This can be an uncorrectable
                                                                 ECC error. */
        uint64_t dtc_rsp_to            : 1;  /**< [  0:  0](SR/W1C/H) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t dtc_rsp_to            : 1;  /**< [  0:  0](SR/W1C/H) Reserved. */
        uint64_t dtc_ftl_err           : 1;  /**< [  1:  1](SR/W1C/H) When set, indicates an fatal error occurred on the RBH ARF DTC. This can be an uncorrectable
                                                                 ECC error. */
        uint64_t dtc_rsp_err           : 1;  /**< [  2:  2](SR/W1C/H) The ARF response received on the RBH ARF DTC had a length/size mismatch with the original
                                                                 request. */
        uint64_t sw_ecam_non_empty     : 1;  /**< [  3:  3](SR/W1C/H) Signals that the RBH's SW ECAM trap storage is non-empty. Indicating that there are
                                                                 requests to SW ECAM address space to read out and process into Fixed ECAM space accesses. */
        uint64_t gibm_ecc_err          : 1;  /**< [  4:  4](SR/W1C/H) GIBM received an Uncorrectable ECC Error. */
        uint64_t gibm_fault            : 1;  /**< [  5:  5](SR/W1C/H) GIBM received a fault response when attempting to write a GIB interrupt message towards
                                                                 the GIC.  The interrupt message was dropped.  This most likely indicates a bad MSIX
                                                                 vector address, or SMMU misprogramming. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_int_sum_s cn; */
};
typedef union cavm_rbh_int_sum cavm_rbh_int_sum_t;

#define CAVM_RBH_INT_SUM CAVM_RBH_INT_SUM_FUNC()
static inline uint64_t CAVM_RBH_INT_SUM_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_INT_SUM_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e0f8001000ll;
    __cavm_csr_fatal("RBH_INT_SUM", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_INT_SUM cavm_rbh_int_sum_t
#define bustype_CAVM_RBH_INT_SUM CSR_TYPE_RSL
#define basename_CAVM_RBH_INT_SUM "RBH_INT_SUM"
#define device_bar_CAVM_RBH_INT_SUM 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_INT_SUM 0
#define arguments_CAVM_RBH_INT_SUM -1,-1,-1,-1

/**
 * Register (RSL) rbh_int_sum_w1s
 *
 * RBH Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_rbh_int_sum_w1s
{
    uint64_t u;
    struct cavm_rbh_int_sum_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t gibm_fault            : 1;  /**< [  5:  5](SR/W1S/H) Reads or sets RBH_INT_SUM[GIBM_FAULT]. */
        uint64_t gibm_ecc_err          : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets RBH_INT_SUM[GIBM_ECC_ERR]. */
        uint64_t sw_ecam_non_empty     : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets RBH_INT_SUM[SW_ECAM_NON_EMPTY]. */
        uint64_t dtc_rsp_err           : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets RBH_INT_SUM[DTC_RSP_ERR]. */
        uint64_t dtc_ftl_err           : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets RBH_INT_SUM[DTC_FTL_ERR]. */
        uint64_t dtc_rsp_to            : 1;  /**< [  0:  0](SR/W1S/H) Reserved. */
#else /* Word 0 - Little Endian */
        uint64_t dtc_rsp_to            : 1;  /**< [  0:  0](SR/W1S/H) Reserved. */
        uint64_t dtc_ftl_err           : 1;  /**< [  1:  1](SR/W1S/H) Reads or sets RBH_INT_SUM[DTC_FTL_ERR]. */
        uint64_t dtc_rsp_err           : 1;  /**< [  2:  2](SR/W1S/H) Reads or sets RBH_INT_SUM[DTC_RSP_ERR]. */
        uint64_t sw_ecam_non_empty     : 1;  /**< [  3:  3](SR/W1S/H) Reads or sets RBH_INT_SUM[SW_ECAM_NON_EMPTY]. */
        uint64_t gibm_ecc_err          : 1;  /**< [  4:  4](SR/W1S/H) Reads or sets RBH_INT_SUM[GIBM_ECC_ERR]. */
        uint64_t gibm_fault            : 1;  /**< [  5:  5](SR/W1S/H) Reads or sets RBH_INT_SUM[GIBM_FAULT]. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_int_sum_w1s_s cn; */
};
typedef union cavm_rbh_int_sum_w1s cavm_rbh_int_sum_w1s_t;

#define CAVM_RBH_INT_SUM_W1S CAVM_RBH_INT_SUM_W1S_FUNC()
static inline uint64_t CAVM_RBH_INT_SUM_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_INT_SUM_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e0f8001008ll;
    __cavm_csr_fatal("RBH_INT_SUM_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_INT_SUM_W1S cavm_rbh_int_sum_w1s_t
#define bustype_CAVM_RBH_INT_SUM_W1S CSR_TYPE_RSL
#define basename_CAVM_RBH_INT_SUM_W1S "RBH_INT_SUM_W1S"
#define device_bar_CAVM_RBH_INT_SUM_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_INT_SUM_W1S 0
#define arguments_CAVM_RBH_INT_SUM_W1S -1,-1,-1,-1

/**
 * Register (RSL) rbh_io_device_vf#
 *
 * RBH IO Device ARF Virtual Fabric Mapping Register
 */
union cavm_rbh_io_device_vfx
{
    uint64_t u;
    struct cavm_rbh_io_device_vfx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t vf                    : 64; /**< [ 63:  0](SRO/H) If set, device is on the High Performance Virtual Fabric. If clear, Low Performance Virtual Fabric

                                                                 There is one VF bit per IO Device. These values are set by hardware.

                                                                 All devices default to being on the low performance virtual fabric. When responding to a request,
                                                                 to Fixed IO space, a device will encode whether it is a high performance virtual fabric device in
                                                                 the response which will set the corresponding bit in RBH_IO_DEVICE_VF.

                                                                 Register bit to IODID mapping is as follows. RBH_DEVICE_VF[idx].VF[n] is the
                                                                 virtual fabric bit for IODID = (idx * 64) + n
                                                                   IODID 0x010 maps to RBH_IO_DEVICE_VF[0].VF[16]
                                                                   IODID 0x108 maps to RBH_IO_DEVICE_VF[4].VF[8] */
#else /* Word 0 - Little Endian */
        uint64_t vf                    : 64; /**< [ 63:  0](SRO/H) If set, device is on the High Performance Virtual Fabric. If clear, Low Performance Virtual Fabric

                                                                 There is one VF bit per IO Device. These values are set by hardware.

                                                                 All devices default to being on the low performance virtual fabric. When responding to a request,
                                                                 to Fixed IO space, a device will encode whether it is a high performance virtual fabric device in
                                                                 the response which will set the corresponding bit in RBH_IO_DEVICE_VF.

                                                                 Register bit to IODID mapping is as follows. RBH_DEVICE_VF[idx].VF[n] is the
                                                                 virtual fabric bit for IODID = (idx * 64) + n
                                                                   IODID 0x010 maps to RBH_IO_DEVICE_VF[0].VF[16]
                                                                   IODID 0x108 maps to RBH_IO_DEVICE_VF[4].VF[8] */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_io_device_vfx_s cn; */
};
typedef union cavm_rbh_io_device_vfx cavm_rbh_io_device_vfx_t;

static inline uint64_t CAVM_RBH_IO_DEVICE_VFX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_IO_DEVICE_VFX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a<=63))
        return 0x87e0f8000600ll + 8ll * ((a) & 0x3f);
    __cavm_csr_fatal("RBH_IO_DEVICE_VFX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_IO_DEVICE_VFX(a) cavm_rbh_io_device_vfx_t
#define bustype_CAVM_RBH_IO_DEVICE_VFX(a) CSR_TYPE_RSL
#define basename_CAVM_RBH_IO_DEVICE_VFX(a) "RBH_IO_DEVICE_VFX"
#define device_bar_CAVM_RBH_IO_DEVICE_VFX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_IO_DEVICE_VFX(a) (a)
#define arguments_CAVM_RBH_IO_DEVICE_VFX(a) (a),-1,-1,-1

/**
 * Register (RSL) rbh_msix_pba#
 *
 * RBH MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table; the bit number is indexed by the RBH_INT_VEC_E enumeration.
 */
union cavm_rbh_msix_pbax
{
    uint64_t u;
    struct cavm_rbh_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated RBH_MSIX_VEC()_CTL, enumerated by RBH_INT_VEC_E.
                                                                 Bits that have no associated RBH_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated RBH_MSIX_VEC()_CTL, enumerated by RBH_INT_VEC_E.
                                                                 Bits that have no associated RBH_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_msix_pbax_s cn; */
};
typedef union cavm_rbh_msix_pbax cavm_rbh_msix_pbax_t;

static inline uint64_t CAVM_RBH_MSIX_PBAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_MSIX_PBAX(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a==0))
        return 0x87e0f88f0000ll + 8ll * ((a) & 0x0);
    __cavm_csr_fatal("RBH_MSIX_PBAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_MSIX_PBAX(a) cavm_rbh_msix_pbax_t
#define bustype_CAVM_RBH_MSIX_PBAX(a) CSR_TYPE_RSL
#define basename_CAVM_RBH_MSIX_PBAX(a) "RBH_MSIX_PBAX"
#define device_bar_CAVM_RBH_MSIX_PBAX(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_RBH_MSIX_PBAX(a) (a)
#define arguments_CAVM_RBH_MSIX_PBAX(a) (a),-1,-1,-1

/**
 * Register (RSL) rbh_msix_vec#_addr
 *
 * RBH MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the RBH_INT_VEC_E enumeration.
 */
union cavm_rbh_msix_vecx_addr
{
    uint64_t u;
    struct cavm_rbh_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's RBH_MSIX_VEC()_ADDR, RBH_MSIX_VEC()_CTL, and corresponding
                                                                 bit of RBH_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_RBH_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC])
                                                                 is set, all vectors are secure and function as if [SECVEC] was set.

                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's RBH_MSIX_VEC()_ADDR, RBH_MSIX_VEC()_CTL, and corresponding
                                                                 bit of RBH_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_RBH_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC])
                                                                 is set, all vectors are secure and function as if [SECVEC] was set.

                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_msix_vecx_addr_s cn; */
};
typedef union cavm_rbh_msix_vecx_addr cavm_rbh_msix_vecx_addr_t;

static inline uint64_t CAVM_RBH_MSIX_VECX_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_MSIX_VECX_ADDR(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a==0))
        return 0x87e0f8800000ll + 0x10ll * ((a) & 0x0);
    __cavm_csr_fatal("RBH_MSIX_VECX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_MSIX_VECX_ADDR(a) cavm_rbh_msix_vecx_addr_t
#define bustype_CAVM_RBH_MSIX_VECX_ADDR(a) CSR_TYPE_RSL
#define basename_CAVM_RBH_MSIX_VECX_ADDR(a) "RBH_MSIX_VECX_ADDR"
#define device_bar_CAVM_RBH_MSIX_VECX_ADDR(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_RBH_MSIX_VECX_ADDR(a) (a)
#define arguments_CAVM_RBH_MSIX_VECX_ADDR(a) (a),-1,-1,-1

/**
 * Register (RSL) rbh_msix_vec#_ctl
 *
 * RBH MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the RBH_INT_VEC_E enumeration.
 */
union cavm_rbh_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_rbh_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_msix_vecx_ctl_s cn; */
};
typedef union cavm_rbh_msix_vecx_ctl cavm_rbh_msix_vecx_ctl_t;

static inline uint64_t CAVM_RBH_MSIX_VECX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_MSIX_VECX_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CN20KA) && (a==0))
        return 0x87e0f8800008ll + 0x10ll * ((a) & 0x0);
    __cavm_csr_fatal("RBH_MSIX_VECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_MSIX_VECX_CTL(a) cavm_rbh_msix_vecx_ctl_t
#define bustype_CAVM_RBH_MSIX_VECX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_RBH_MSIX_VECX_CTL(a) "RBH_MSIX_VECX_CTL"
#define device_bar_CAVM_RBH_MSIX_VECX_CTL(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_RBH_MSIX_VECX_CTL(a) (a)
#define arguments_CAVM_RBH_MSIX_VECX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL) rbh_port_ecam_ctl
 *
 * RBH Requester Port ECAM Control Register
 * This register controls how RBH processes SW Visible ECAM and ECAM IODID Fixed address
 * space accesses for each requester port
 */
union cavm_rbh_port_ecam_ctl
{
    uint64_t u;
    struct cavm_rbh_port_ecam_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t axi_ecam              : 2;  /**< [ 63: 62](SR/W) SW Visible ECAM and Fixed IODID ECAM requests from the AXI requester port are treated as follows
                                                                 If this port is not available, this field has no effect.
                                                                 00 - No restriction
                                                                 01 - Fixed IODID ECAM requests allowed. RBH will reject SW Visible ECAM address
                                                                 space requests on this port
                                                                 10 - SW Visible ECAM requests allowed. RBH will reject Fixed IODID ECAM space requests on this port
                                                                 11 - Reserved */
        uint64_t reserved_16_61        : 46;
        uint64_t dr7_ecam              : 2;  /**< [ 15: 14](SR/W) SW Visible ECAM and Fixed IODID ECAM requests from the DR7 requester port are treated as follows.
                                                                 If this port is not available, this field has no effect.
                                                                 00 - No restriction
                                                                 01 - Fixed IODID ECAM requests allowed. RBH will reject SW Visible ECAM address
                                                                 space requests on this port
                                                                 10 - SW Visible ECAM requests allowed. RBH will reject Fixed IODID ECAM space requests on this port
                                                                 11 - Reserved */
        uint64_t dr6_ecam              : 2;  /**< [ 13: 12](SR/W) SW Visible ECAM and Fixed IODID ECAM requests from the DR6 requester port are treated as follows
                                                                 If this port is not available, this field has no effect.
                                                                 00 - No restriction
                                                                 01 - Fixed IODID ECAM requests allowed. RBH will reject SW Visible ECAM address
                                                                 space requests on this port
                                                                 10 - SW Visible ECAM requests allowed. RBH will reject Fixed IODID ECAM space requests on this port
                                                                 11 - Reserved */
        uint64_t dr5_ecam              : 2;  /**< [ 11: 10](SR/W) SW Visible ECAM and Fixed IODID ECAM requests from the DR5 requester port are treated as follows
                                                                 If this port is not available, this field has no effect.
                                                                 00 - No restriction
                                                                 01 - Fixed IODID ECAM requests allowed. RBH will reject SW Visible ECAM address
                                                                 space requests on this port
                                                                 10 - SW Visible ECAM requests allowed. RBH will reject Fixed IODID ECAM space requests on this port
                                                                 11 - Reserved */
        uint64_t dr4_ecam              : 2;  /**< [  9:  8](SR/W) SW Visible ECAM and Fixed IODID ECAM requests from the DR4 requester port are treated as follows
                                                                 If this port is not available, this field has no effect.
                                                                 00 - No restriction
                                                                 01 - Fixed IODID ECAM requests allowed. RBH will reject SW Visible ECAM address
                                                                 space requests on this port
                                                                 10 - SW Visible ECAM requests allowed. RBH will reject Fixed IODID ECAM space requests on this port
                                                                 11 - Reserved */
        uint64_t dr3_ecam              : 2;  /**< [  7:  6](SR/W) SW Visible ECAM and Fixed IODID ECAM requests from the DR3 requester port are treated as follows
                                                                 If this port is not available, this field has no effect.
                                                                 00 - No restriction
                                                                 01 - Fixed IODID ECAM requests allowed. RBH will reject SW Visible ECAM address
                                                                 space requests on this port
                                                                 10 - SW Visible ECAM requests allowed. RBH will reject Fixed IODID ECAM space requests on this port
                                                                 11 - Reserved */
        uint64_t dr2_ecam              : 2;  /**< [  5:  4](SR/W) SW Visible ECAM and Fixed IODID ECAM requests from the DR2 requester port are treated as follows
                                                                 If this port is not available, this field has no effect.
                                                                 00 - No restriction
                                                                 01 - Fixed IODID ECAM requests allowed. RBH will reject SW Visible ECAM address
                                                                 space requests on this port
                                                                 10 - SW Visible ECAM requests allowed. RBH will reject Fixed IODID ECAM space requests on this port
                                                                 11 - Reserved */
        uint64_t dr1_ecam              : 2;  /**< [  3:  2](SR/W) SW Visible ECAM and Fixed IODID ECAM requests from the DR1 requester port are treated as follows
                                                                 If this port is not available, this field has no effect.
                                                                 00 - No restriction
                                                                 01 - Fixed IODID ECAM requests allowed. RBH will reject SW Visible ECAM address
                                                                 space requests on this port
                                                                 10 - SW Visible ECAM requests allowed. RBH will reject Fixed IODID ECAM space requests on this port
                                                                 11 - Reserved */
        uint64_t dr0_ecam              : 2;  /**< [  1:  0](SR/W) SW Visible ECAM and Fixed IODID ECAM requests from the DR0 requester port are treated as follows
                                                                 If this port is not available, this field has no effect.
                                                                 00 - No restriction
                                                                 01 - Fixed IODID ECAM requests allowed. RBH will reject SW Visible ECAM address
                                                                 space requests on this port
                                                                 10 - SW Visible ECAM requests allowed. RBH will reject Fixed IODID ECAM space requests on this port
                                                                 11 - Reserved */
#else /* Word 0 - Little Endian */
        uint64_t dr0_ecam              : 2;  /**< [  1:  0](SR/W) SW Visible ECAM and Fixed IODID ECAM requests from the DR0 requester port are treated as follows
                                                                 If this port is not available, this field has no effect.
                                                                 00 - No restriction
                                                                 01 - Fixed IODID ECAM requests allowed. RBH will reject SW Visible ECAM address
                                                                 space requests on this port
                                                                 10 - SW Visible ECAM requests allowed. RBH will reject Fixed IODID ECAM space requests on this port
                                                                 11 - Reserved */
        uint64_t dr1_ecam              : 2;  /**< [  3:  2](SR/W) SW Visible ECAM and Fixed IODID ECAM requests from the DR1 requester port are treated as follows
                                                                 If this port is not available, this field has no effect.
                                                                 00 - No restriction
                                                                 01 - Fixed IODID ECAM requests allowed. RBH will reject SW Visible ECAM address
                                                                 space requests on this port
                                                                 10 - SW Visible ECAM requests allowed. RBH will reject Fixed IODID ECAM space requests on this port
                                                                 11 - Reserved */
        uint64_t dr2_ecam              : 2;  /**< [  5:  4](SR/W) SW Visible ECAM and Fixed IODID ECAM requests from the DR2 requester port are treated as follows
                                                                 If this port is not available, this field has no effect.
                                                                 00 - No restriction
                                                                 01 - Fixed IODID ECAM requests allowed. RBH will reject SW Visible ECAM address
                                                                 space requests on this port
                                                                 10 - SW Visible ECAM requests allowed. RBH will reject Fixed IODID ECAM space requests on this port
                                                                 11 - Reserved */
        uint64_t dr3_ecam              : 2;  /**< [  7:  6](SR/W) SW Visible ECAM and Fixed IODID ECAM requests from the DR3 requester port are treated as follows
                                                                 If this port is not available, this field has no effect.
                                                                 00 - No restriction
                                                                 01 - Fixed IODID ECAM requests allowed. RBH will reject SW Visible ECAM address
                                                                 space requests on this port
                                                                 10 - SW Visible ECAM requests allowed. RBH will reject Fixed IODID ECAM space requests on this port
                                                                 11 - Reserved */
        uint64_t dr4_ecam              : 2;  /**< [  9:  8](SR/W) SW Visible ECAM and Fixed IODID ECAM requests from the DR4 requester port are treated as follows
                                                                 If this port is not available, this field has no effect.
                                                                 00 - No restriction
                                                                 01 - Fixed IODID ECAM requests allowed. RBH will reject SW Visible ECAM address
                                                                 space requests on this port
                                                                 10 - SW Visible ECAM requests allowed. RBH will reject Fixed IODID ECAM space requests on this port
                                                                 11 - Reserved */
        uint64_t dr5_ecam              : 2;  /**< [ 11: 10](SR/W) SW Visible ECAM and Fixed IODID ECAM requests from the DR5 requester port are treated as follows
                                                                 If this port is not available, this field has no effect.
                                                                 00 - No restriction
                                                                 01 - Fixed IODID ECAM requests allowed. RBH will reject SW Visible ECAM address
                                                                 space requests on this port
                                                                 10 - SW Visible ECAM requests allowed. RBH will reject Fixed IODID ECAM space requests on this port
                                                                 11 - Reserved */
        uint64_t dr6_ecam              : 2;  /**< [ 13: 12](SR/W) SW Visible ECAM and Fixed IODID ECAM requests from the DR6 requester port are treated as follows
                                                                 If this port is not available, this field has no effect.
                                                                 00 - No restriction
                                                                 01 - Fixed IODID ECAM requests allowed. RBH will reject SW Visible ECAM address
                                                                 space requests on this port
                                                                 10 - SW Visible ECAM requests allowed. RBH will reject Fixed IODID ECAM space requests on this port
                                                                 11 - Reserved */
        uint64_t dr7_ecam              : 2;  /**< [ 15: 14](SR/W) SW Visible ECAM and Fixed IODID ECAM requests from the DR7 requester port are treated as follows.
                                                                 If this port is not available, this field has no effect.
                                                                 00 - No restriction
                                                                 01 - Fixed IODID ECAM requests allowed. RBH will reject SW Visible ECAM address
                                                                 space requests on this port
                                                                 10 - SW Visible ECAM requests allowed. RBH will reject Fixed IODID ECAM space requests on this port
                                                                 11 - Reserved */
        uint64_t reserved_16_61        : 46;
        uint64_t axi_ecam              : 2;  /**< [ 63: 62](SR/W) SW Visible ECAM and Fixed IODID ECAM requests from the AXI requester port are treated as follows
                                                                 If this port is not available, this field has no effect.
                                                                 00 - No restriction
                                                                 01 - Fixed IODID ECAM requests allowed. RBH will reject SW Visible ECAM address
                                                                 space requests on this port
                                                                 10 - SW Visible ECAM requests allowed. RBH will reject Fixed IODID ECAM space requests on this port
                                                                 11 - Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_port_ecam_ctl_s cn; */
};
typedef union cavm_rbh_port_ecam_ctl cavm_rbh_port_ecam_ctl_t;

#define CAVM_RBH_PORT_ECAM_CTL CAVM_RBH_PORT_ECAM_CTL_FUNC()
static inline uint64_t CAVM_RBH_PORT_ECAM_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_PORT_ECAM_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e0f8000020ll;
    __cavm_csr_fatal("RBH_PORT_ECAM_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_PORT_ECAM_CTL cavm_rbh_port_ecam_ctl_t
#define bustype_CAVM_RBH_PORT_ECAM_CTL CSR_TYPE_RSL
#define basename_CAVM_RBH_PORT_ECAM_CTL "RBH_PORT_ECAM_CTL"
#define device_bar_CAVM_RBH_PORT_ECAM_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_PORT_ECAM_CTL 0
#define arguments_CAVM_RBH_PORT_ECAM_CTL -1,-1,-1,-1

/**
 * Register (RSL) rbh_rvu_block_vf
 *
 * RBH RVU Block ARF Virtual Fabric Mapping Register
 */
union cavm_rbh_rvu_block_vf
{
    uint64_t u;
    struct cavm_rbh_rvu_block_vf_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t vf                    : 64; /**< [ 63:  0](SRO/H) If set, device is on the High Performance Virtual Fabric. If clear, Low Performance Virtual Fabric

                                                                 There is one VF bit per RVU Block. These values are set by hardware.

                                                                 All devices default to being on the low performance virtual fabric. When responding to a request,
                                                                 to Fixed RVU space, a device will encode whether it is a high performance virtual fabric device in
                                                                 the response which will set the corresponding bit in RBH_RVU_BLOCK_VF.

                                                                 Register bits map 1 to 1 with the 64 RVU Block values. */
#else /* Word 0 - Little Endian */
        uint64_t vf                    : 64; /**< [ 63:  0](SRO/H) If set, device is on the High Performance Virtual Fabric. If clear, Low Performance Virtual Fabric

                                                                 There is one VF bit per RVU Block. These values are set by hardware.

                                                                 All devices default to being on the low performance virtual fabric. When responding to a request,
                                                                 to Fixed RVU space, a device will encode whether it is a high performance virtual fabric device in
                                                                 the response which will set the corresponding bit in RBH_RVU_BLOCK_VF.

                                                                 Register bits map 1 to 1 with the 64 RVU Block values. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_rvu_block_vf_s cn; */
};
typedef union cavm_rbh_rvu_block_vf cavm_rbh_rvu_block_vf_t;

#define CAVM_RBH_RVU_BLOCK_VF CAVM_RBH_RVU_BLOCK_VF_FUNC()
static inline uint64_t CAVM_RBH_RVU_BLOCK_VF_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_RVU_BLOCK_VF_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e0f8000800ll;
    __cavm_csr_fatal("RBH_RVU_BLOCK_VF", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_RVU_BLOCK_VF cavm_rbh_rvu_block_vf_t
#define bustype_CAVM_RBH_RVU_BLOCK_VF CSR_TYPE_RSL
#define basename_CAVM_RBH_RVU_BLOCK_VF "RBH_RVU_BLOCK_VF"
#define device_bar_CAVM_RBH_RVU_BLOCK_VF 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_RVU_BLOCK_VF 0
#define arguments_CAVM_RBH_RVU_BLOCK_VF -1,-1,-1,-1

/**
 * Register (RSL) rbh_scratch
 *
 * RBH Scratch Register
 */
union cavm_rbh_scratch
{
    uint64_t u;
    struct cavm_rbh_scratch_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Scratch R/W register for debug access */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W) Scratch R/W register for debug access */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_scratch_s cn; */
};
typedef union cavm_rbh_scratch cavm_rbh_scratch_t;

#define CAVM_RBH_SCRATCH CAVM_RBH_SCRATCH_FUNC()
static inline uint64_t CAVM_RBH_SCRATCH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_SCRATCH_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e0f8000000ll;
    __cavm_csr_fatal("RBH_SCRATCH", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_SCRATCH cavm_rbh_scratch_t
#define bustype_CAVM_RBH_SCRATCH CSR_TYPE_RSL
#define basename_CAVM_RBH_SCRATCH "RBH_SCRATCH"
#define device_bar_CAVM_RBH_SCRATCH 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_SCRATCH 0
#define arguments_CAVM_RBH_SCRATCH -1,-1,-1,-1

/**
 * Register (RSL) rbh_sw_ecam_ctl
 *
 * RBH SW ECAM Trap Control Register
 * Allows for control/configuration of the RBH SW ECAM Trap logic
 */
union cavm_rbh_sw_ecam_ctl
{
    uint64_t u;
    struct cavm_rbh_sw_ecam_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t fifo_rst              : 1;  /**< [  0:  0](SR/W) When set, the RBH SW ECAM Trap FIFOs are flushed and returned to empty state.
                                                                 Any requests that were outstanding will generate RAO/WI responses back to
                                                                 the original source. After being set, this bit should remain set for TBD cycles
                                                                 to allow all outstanding traffic to be flushed before being cleared.

                                                                 While set, RBH will trap SW ECAM accesses but immediately generate RAO/WI
                                                                 responses back to the original source. These accesses will not enter the SW
                                                                 ECAM Trap FIFOs nor will they generate an interrupt. */
#else /* Word 0 - Little Endian */
        uint64_t fifo_rst              : 1;  /**< [  0:  0](SR/W) When set, the RBH SW ECAM Trap FIFOs are flushed and returned to empty state.
                                                                 Any requests that were outstanding will generate RAO/WI responses back to
                                                                 the original source. After being set, this bit should remain set for TBD cycles
                                                                 to allow all outstanding traffic to be flushed before being cleared.

                                                                 While set, RBH will trap SW ECAM accesses but immediately generate RAO/WI
                                                                 responses back to the original source. These accesses will not enter the SW
                                                                 ECAM Trap FIFOs nor will they generate an interrupt. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_sw_ecam_ctl_s cn; */
};
typedef union cavm_rbh_sw_ecam_ctl cavm_rbh_sw_ecam_ctl_t;

#define CAVM_RBH_SW_ECAM_CTL CAVM_RBH_SW_ECAM_CTL_FUNC()
static inline uint64_t CAVM_RBH_SW_ECAM_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_SW_ECAM_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e0f8000c00ll;
    __cavm_csr_fatal("RBH_SW_ECAM_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_SW_ECAM_CTL cavm_rbh_sw_ecam_ctl_t
#define bustype_CAVM_RBH_SW_ECAM_CTL CSR_TYPE_RSL
#define basename_CAVM_RBH_SW_ECAM_CTL "RBH_SW_ECAM_CTL"
#define device_bar_CAVM_RBH_SW_ECAM_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_SW_ECAM_CTL 0
#define arguments_CAVM_RBH_SW_ECAM_CTL -1,-1,-1,-1

/**
 * Register (RSL) rbh_sw_ecam_req_dat
 *
 * RBH SW ECAM Trap Request Data Register
 * The SW ECAM Trap Request Data Register stores write data for the trapped request
 * stored at the head of the RBH's SW ECAM Trap FiFo. If the trapped request is a
 * read, this register will contain invalid data but still must be read.
 *
 * RBH_SW_ECAM_REQ_HDR and RBH_SW_ECAM_REQ_DAT must be read as a pair.
 */
union cavm_rbh_sw_ecam_req_dat
{
    uint64_t u;
    struct cavm_rbh_sw_ecam_req_dat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wdata                 : 64; /**< [ 63:  0](SRO/H) Indicates stored SW ECAM Request's write data. Invalid if the SW ECAM Request is a read. */
#else /* Word 0 - Little Endian */
        uint64_t wdata                 : 64; /**< [ 63:  0](SRO/H) Indicates stored SW ECAM Request's write data. Invalid if the SW ECAM Request is a read. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_sw_ecam_req_dat_s cn; */
};
typedef union cavm_rbh_sw_ecam_req_dat cavm_rbh_sw_ecam_req_dat_t;

#define CAVM_RBH_SW_ECAM_REQ_DAT CAVM_RBH_SW_ECAM_REQ_DAT_FUNC()
static inline uint64_t CAVM_RBH_SW_ECAM_REQ_DAT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_SW_ECAM_REQ_DAT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e0f8000c18ll;
    __cavm_csr_fatal("RBH_SW_ECAM_REQ_DAT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_SW_ECAM_REQ_DAT cavm_rbh_sw_ecam_req_dat_t
#define bustype_CAVM_RBH_SW_ECAM_REQ_DAT CSR_TYPE_RSL
#define basename_CAVM_RBH_SW_ECAM_REQ_DAT "RBH_SW_ECAM_REQ_DAT"
#define device_bar_CAVM_RBH_SW_ECAM_REQ_DAT 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_SW_ECAM_REQ_DAT 0
#define arguments_CAVM_RBH_SW_ECAM_REQ_DAT -1,-1,-1,-1

/**
 * Register (RSL) rbh_sw_ecam_req_hdr
 *
 * RBH SW ECAM Trap Request Header Register
 * The SW ECAM Trap Request Header Register stores control information about the trapped request
 * stored at the head of the RBH's SW ECAM Trap FiFo.
 *
 * RBH_SW_ECAM_REQ_HDR and RBH_SW_ECAM_REQ_DAT must be read as a pair.
 */
union cavm_rbh_sw_ecam_req_hdr
{
    uint64_t u;
    struct cavm_rbh_sw_ecam_req_hdr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wnr                   : 1;  /**< [ 63: 63](SRO/H) Indicates stored SW ECAM Request is 0 - Read 1 - Write */
        uint64_t secure                : 1;  /**< [ 62: 62](SRO/H) Indicates stored SW ECAM Request is 0 - Nonsecure 1 - Secure */
        uint64_t source                : 3;  /**< [ 61: 59](SRO/H) Indicates the source of the stored SW ECAM Request */
        uint64_t reserved_51_58        : 8;
        uint64_t size                  : 3;  /**< [ 50: 48](SRO/H) Indicate size of the stored SW ECAM Request.
                                                                 0 - 1 byte
                                                                 1 - 2 bytes
                                                                 2 - 4 bytes
                                                                 3 - 8 bytes
                                                                 4 - 16 bytes */
        uint64_t addr                  : 48; /**< [ 47:  0](SRO/H) Indicates stored SW ECAM Request's address to access */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 48; /**< [ 47:  0](SRO/H) Indicates stored SW ECAM Request's address to access */
        uint64_t size                  : 3;  /**< [ 50: 48](SRO/H) Indicate size of the stored SW ECAM Request.
                                                                 0 - 1 byte
                                                                 1 - 2 bytes
                                                                 2 - 4 bytes
                                                                 3 - 8 bytes
                                                                 4 - 16 bytes */
        uint64_t reserved_51_58        : 8;
        uint64_t source                : 3;  /**< [ 61: 59](SRO/H) Indicates the source of the stored SW ECAM Request */
        uint64_t secure                : 1;  /**< [ 62: 62](SRO/H) Indicates stored SW ECAM Request is 0 - Nonsecure 1 - Secure */
        uint64_t wnr                   : 1;  /**< [ 63: 63](SRO/H) Indicates stored SW ECAM Request is 0 - Read 1 - Write */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_sw_ecam_req_hdr_s cn; */
};
typedef union cavm_rbh_sw_ecam_req_hdr cavm_rbh_sw_ecam_req_hdr_t;

#define CAVM_RBH_SW_ECAM_REQ_HDR CAVM_RBH_SW_ECAM_REQ_HDR_FUNC()
static inline uint64_t CAVM_RBH_SW_ECAM_REQ_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_SW_ECAM_REQ_HDR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e0f8000c10ll;
    __cavm_csr_fatal("RBH_SW_ECAM_REQ_HDR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_SW_ECAM_REQ_HDR cavm_rbh_sw_ecam_req_hdr_t
#define bustype_CAVM_RBH_SW_ECAM_REQ_HDR CSR_TYPE_RSL
#define basename_CAVM_RBH_SW_ECAM_REQ_HDR "RBH_SW_ECAM_REQ_HDR"
#define device_bar_CAVM_RBH_SW_ECAM_REQ_HDR 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_SW_ECAM_REQ_HDR 0
#define arguments_CAVM_RBH_SW_ECAM_REQ_HDR -1,-1,-1,-1

/**
 * Register (RSL) rbh_sw_ecam_rsp_dat
 *
 * RBH SW ECAM Trap Response Data Register
 * Contains response data for previous SW ECAM request. If the response is a write, this
 * data is dropped inside of RBH.
 *
 * RBH_SW_ECAM_RSP_DAT must be written before RBH_SW_ECAM_RSP_SND otherwise stale data
 * will be returned.
 */
union cavm_rbh_sw_ecam_rsp_dat
{
    uint64_t u;
    struct cavm_rbh_sw_ecam_rsp_dat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t rdata                 : 64; /**< [ 63:  0](SWO) Response data for previous SW ECAM request */
#else /* Word 0 - Little Endian */
        uint64_t rdata                 : 64; /**< [ 63:  0](SWO) Response data for previous SW ECAM request */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_sw_ecam_rsp_dat_s cn; */
};
typedef union cavm_rbh_sw_ecam_rsp_dat cavm_rbh_sw_ecam_rsp_dat_t;

#define CAVM_RBH_SW_ECAM_RSP_DAT CAVM_RBH_SW_ECAM_RSP_DAT_FUNC()
static inline uint64_t CAVM_RBH_SW_ECAM_RSP_DAT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_SW_ECAM_RSP_DAT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e0f8000c28ll;
    __cavm_csr_fatal("RBH_SW_ECAM_RSP_DAT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_SW_ECAM_RSP_DAT cavm_rbh_sw_ecam_rsp_dat_t
#define bustype_CAVM_RBH_SW_ECAM_RSP_DAT CSR_TYPE_RSL
#define basename_CAVM_RBH_SW_ECAM_RSP_DAT "RBH_SW_ECAM_RSP_DAT"
#define device_bar_CAVM_RBH_SW_ECAM_RSP_DAT 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_SW_ECAM_RSP_DAT 0
#define arguments_CAVM_RBH_SW_ECAM_RSP_DAT -1,-1,-1,-1

/**
 * Register (RSL) rbh_sw_ecam_rsp_snd
 *
 * RBH SW ECAM Trap Response Send Register
 * Writing to RBH_SW_ECAM_RSP_SND will result in a response being generated to a previous SW
 * ECAM Request.
 */
union cavm_rbh_sw_ecam_rsp_snd
{
    uint64_t u;
    struct cavm_rbh_sw_ecam_rsp_snd_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t wnr                   : 1;  /**< [ 63: 63](SWO) Indicates SW ECAM Response to be sent will be 0 - Read 1 - Write */
        uint64_t rsp_err               : 1;  /**< [ 62: 62](SWO) Indicates SW ECAM Response to be sent will indicate an error or not */
        uint64_t reserved_0_61         : 62;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_61         : 62;
        uint64_t rsp_err               : 1;  /**< [ 62: 62](SWO) Indicates SW ECAM Response to be sent will indicate an error or not */
        uint64_t wnr                   : 1;  /**< [ 63: 63](SWO) Indicates SW ECAM Response to be sent will be 0 - Read 1 - Write */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_sw_ecam_rsp_snd_s cn; */
};
typedef union cavm_rbh_sw_ecam_rsp_snd cavm_rbh_sw_ecam_rsp_snd_t;

#define CAVM_RBH_SW_ECAM_RSP_SND CAVM_RBH_SW_ECAM_RSP_SND_FUNC()
static inline uint64_t CAVM_RBH_SW_ECAM_RSP_SND_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_SW_ECAM_RSP_SND_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e0f8000c20ll;
    __cavm_csr_fatal("RBH_SW_ECAM_RSP_SND", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_SW_ECAM_RSP_SND cavm_rbh_sw_ecam_rsp_snd_t
#define bustype_CAVM_RBH_SW_ECAM_RSP_SND CSR_TYPE_RSL
#define basename_CAVM_RBH_SW_ECAM_RSP_SND "RBH_SW_ECAM_RSP_SND"
#define device_bar_CAVM_RBH_SW_ECAM_RSP_SND 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_SW_ECAM_RSP_SND 0
#define arguments_CAVM_RBH_SW_ECAM_RSP_SND -1,-1,-1,-1

/**
 * Register (RSL) rbh_sw_ecam_status
 *
 * RBH SW ECAM Trap Status Register
 * Reports information about the RBH SW ECAM Trap logic
 */
union cavm_rbh_sw_ecam_status
{
    uint64_t u;
    struct cavm_rbh_sw_ecam_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t req_non_empty         : 1;  /**< [ 63: 63](SRO/H) When set, indicates that the SW ECAM Trap Request FIFO has requests to process */
        uint64_t rsp_non_empty         : 1;  /**< [ 62: 62](SRO/H) When set, indicates that the SW ECAM Trap Response FIFO has responses to process */
        uint64_t reserved_24_61        : 38;
        uint64_t req_cnt               : 8;  /**< [ 23: 16](SRO/H) Indicates the number of requests currently in the SW ECAM Trap Request FIFO that are
                                                                 waiting to be processed. */
        uint64_t reserved_8_15         : 8;
        uint64_t rsp_cnt               : 8;  /**< [  7:  0](SRO/H) Indicates the number of respones currently in the SW ECAM Trap Response FIFO that are
                                                                 waiting to be processed */
#else /* Word 0 - Little Endian */
        uint64_t rsp_cnt               : 8;  /**< [  7:  0](SRO/H) Indicates the number of respones currently in the SW ECAM Trap Response FIFO that are
                                                                 waiting to be processed */
        uint64_t reserved_8_15         : 8;
        uint64_t req_cnt               : 8;  /**< [ 23: 16](SRO/H) Indicates the number of requests currently in the SW ECAM Trap Request FIFO that are
                                                                 waiting to be processed. */
        uint64_t reserved_24_61        : 38;
        uint64_t rsp_non_empty         : 1;  /**< [ 62: 62](SRO/H) When set, indicates that the SW ECAM Trap Response FIFO has responses to process */
        uint64_t req_non_empty         : 1;  /**< [ 63: 63](SRO/H) When set, indicates that the SW ECAM Trap Request FIFO has requests to process */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_sw_ecam_status_s cn; */
};
typedef union cavm_rbh_sw_ecam_status cavm_rbh_sw_ecam_status_t;

#define CAVM_RBH_SW_ECAM_STATUS CAVM_RBH_SW_ECAM_STATUS_FUNC()
static inline uint64_t CAVM_RBH_SW_ECAM_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_SW_ECAM_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e0f8000c08ll;
    __cavm_csr_fatal("RBH_SW_ECAM_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_SW_ECAM_STATUS cavm_rbh_sw_ecam_status_t
#define bustype_CAVM_RBH_SW_ECAM_STATUS CSR_TYPE_RSL
#define basename_CAVM_RBH_SW_ECAM_STATUS "RBH_SW_ECAM_STATUS"
#define device_bar_CAVM_RBH_SW_ECAM_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_SW_ECAM_STATUS 0
#define arguments_CAVM_RBH_SW_ECAM_STATUS -1,-1,-1,-1

/**
 * Register (RSL) rbh_sw_ecam_wdog
 *
 * RBH SW ECAM Watchdog Timeout Register
 */
union cavm_rbh_sw_ecam_wdog
{
    uint64_t u;
    struct cavm_rbh_sw_ecam_wdog_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t lock                  : 1;  /**< [ 32: 32](SR/W1S) Lock Bit, Lock the register from any further updates until the device is reset. Once set, all
                                                                 subsequent writes have no effect and the register behaves as read only. */
        uint64_t fifo_timeout          : 32; /**< [ 31:  0](SR/W) This timeout value is used to indicate when the SW ECAM FIFO is not being serviced
                                                                 and needs to be flushed.

                                                                 When the SW ECAM FIFO goes from empty to non-empty or when the FIFO is non-empty after
                                                                 an entry is popped, RBH loads the counter value and decrements each IOCLK cycle. When
                                                                 the timer expires, RBH_SW_ECAM_CTL.FIFO_RST is set and an interrupt is generated. */
#else /* Word 0 - Little Endian */
        uint64_t fifo_timeout          : 32; /**< [ 31:  0](SR/W) This timeout value is used to indicate when the SW ECAM FIFO is not being serviced
                                                                 and needs to be flushed.

                                                                 When the SW ECAM FIFO goes from empty to non-empty or when the FIFO is non-empty after
                                                                 an entry is popped, RBH loads the counter value and decrements each IOCLK cycle. When
                                                                 the timer expires, RBH_SW_ECAM_CTL.FIFO_RST is set and an interrupt is generated. */
        uint64_t lock                  : 1;  /**< [ 32: 32](SR/W1S) Lock Bit, Lock the register from any further updates until the device is reset. Once set, all
                                                                 subsequent writes have no effect and the register behaves as read only. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rbh_sw_ecam_wdog_s cn; */
};
typedef union cavm_rbh_sw_ecam_wdog cavm_rbh_sw_ecam_wdog_t;

#define CAVM_RBH_SW_ECAM_WDOG CAVM_RBH_SW_ECAM_WDOG_FUNC()
static inline uint64_t CAVM_RBH_SW_ECAM_WDOG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RBH_SW_ECAM_WDOG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN20KA))
        return 0x87e0f8000c30ll;
    __cavm_csr_fatal("RBH_SW_ECAM_WDOG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RBH_SW_ECAM_WDOG cavm_rbh_sw_ecam_wdog_t
#define bustype_CAVM_RBH_SW_ECAM_WDOG CSR_TYPE_RSL
#define basename_CAVM_RBH_SW_ECAM_WDOG "RBH_SW_ECAM_WDOG"
#define device_bar_CAVM_RBH_SW_ECAM_WDOG 0x0 /* PF_BAR0 */
#define busnum_CAVM_RBH_SW_ECAM_WDOG 0
#define arguments_CAVM_RBH_SW_ECAM_WDOG -1,-1,-1,-1

#endif /* __CAVM_CSRS_RBH_H__ */
