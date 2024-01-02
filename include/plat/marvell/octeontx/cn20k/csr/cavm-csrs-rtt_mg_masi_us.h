#ifndef __CAVM_CSRS_RTT_MG_MASI_US_H__
#define __CAVM_CSRS_RTT_MG_MASI_US_H__
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
 * RTT_MG_MASI_US.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (NCB32b) rtt_mg_masi_us#_cfg_mgi
 *
 * RTT Mg Masi Us Cfg Mgi Register
 * Config message generation information
 */
union cavm_rtt_mg_masi_usx_cfg_mgi
{
    uint32_t u;
    struct cavm_rtt_mg_masi_usx_cfg_mgi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t index_length          : 8;  /**< [ 15:  8](RO/H) Index length of system. */
        uint32_t msg_generation        : 8;  /**< [  7:  0](RO) Message Generation.
                                                                 0 = Generation 1
                                                                 1 = Generation 2 */
#else /* Word 0 - Little Endian */
        uint32_t msg_generation        : 8;  /**< [  7:  0](RO) Message Generation.
                                                                 0 = Generation 1
                                                                 1 = Generation 2 */
        uint32_t index_length          : 8;  /**< [ 15:  8](RO/H) Index length of system. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_usx_cfg_mgi_s cn; */
};
typedef union cavm_rtt_mg_masi_usx_cfg_mgi cavm_rtt_mg_masi_usx_cfg_mgi_t;

static inline uint64_t CAVM_RTT_MG_MASI_USX_CFG_MGI(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_USX_CFG_MGI(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=15))
        return 0x80e0808b0030 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_USX_CFG_MGI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_USX_CFG_MGI(a) cavm_rtt_mg_masi_usx_cfg_mgi_t
#define bustype_CAVM_RTT_MG_MASI_USX_CFG_MGI(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_USX_CFG_MGI(a) "RTT_MG_MASI_USX_CFG_MGI"
#define busnum_CAVM_RTT_MG_MASI_USX_CFG_MGI(a) (a)
#define arguments_CAVM_RTT_MG_MASI_USX_CFG_MGI(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_us#_ds_buf_sts
 *
 * RTT Mg Masi Us Ds Buf Sts Register
 * Downstream buffer status
 */
union cavm_rtt_mg_masi_usx_ds_buf_sts
{
    uint32_t u;
    struct cavm_rtt_mg_masi_usx_ds_buf_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t messages              : 11; /**< [ 26: 16](RO) Number of whole messages contained in the downstream buffer. */
        uint32_t total_entries         : 12; /**< [ 15:  4](RO) Number of buffer entries containing valid message data
                                                                 (32 bits per entry). */
        uint32_t wr_ongoing            : 1;  /**< [  3:  3](RO) Write ongoing. Part of a message has been received from
                                                                 the message interface. */
        uint32_t rd_ongoing            : 1;  /**< [  2:  2](RO) Read ongoing. Part of a message has been read out of the
                                                                 buffer via ds_data. */
        uint32_t empty                 : 1;  /**< [  1:  1](RO) Downstream buffer is empty. */
        uint32_t full                  : 1;  /**< [  0:  0](RO) Downstream buffer is full. */
#else /* Word 0 - Little Endian */
        uint32_t full                  : 1;  /**< [  0:  0](RO) Downstream buffer is full. */
        uint32_t empty                 : 1;  /**< [  1:  1](RO) Downstream buffer is empty. */
        uint32_t rd_ongoing            : 1;  /**< [  2:  2](RO) Read ongoing. Part of a message has been read out of the
                                                                 buffer via ds_data. */
        uint32_t wr_ongoing            : 1;  /**< [  3:  3](RO) Write ongoing. Part of a message has been received from
                                                                 the message interface. */
        uint32_t total_entries         : 12; /**< [ 15:  4](RO) Number of buffer entries containing valid message data
                                                                 (32 bits per entry). */
        uint32_t messages              : 11; /**< [ 26: 16](RO) Number of whole messages contained in the downstream buffer. */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_usx_ds_buf_sts_s cn; */
};
typedef union cavm_rtt_mg_masi_usx_ds_buf_sts cavm_rtt_mg_masi_usx_ds_buf_sts_t;

static inline uint64_t CAVM_RTT_MG_MASI_USX_DS_BUF_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_USX_DS_BUF_STS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=15))
        return 0x80e0808b0090 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_USX_DS_BUF_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_USX_DS_BUF_STS(a) cavm_rtt_mg_masi_usx_ds_buf_sts_t
#define bustype_CAVM_RTT_MG_MASI_USX_DS_BUF_STS(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_USX_DS_BUF_STS(a) "RTT_MG_MASI_USX_DS_BUF_STS"
#define busnum_CAVM_RTT_MG_MASI_USX_DS_BUF_STS(a) (a)
#define arguments_CAVM_RTT_MG_MASI_USX_DS_BUF_STS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_us#_ds_ctl
 *
 * RTT Mg Masi Us Ds Ctl Register
 * Downstream general control
 */
union cavm_rtt_mg_masi_usx_ds_ctl
{
    uint32_t u;
    struct cavm_rtt_mg_masi_usx_ds_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_7_31         : 25;
        uint32_t int_polarity          : 1;  /**< [  6:  6](R/W/H) Downstream interrupt output is active high when this bit is 1, or active
                                                                 low when 0. Initial value at reset is set according to an instantiation
                                                                 parameter, so it should not be necessary to change the value of this bit. */
        uint32_t int_type              : 1;  /**< [  5:  5](R/W) Downstream interrupt output is a pulse when this bit is 1,
                                                                 or a level when it is 0. */
        uint32_t int_en                : 1;  /**< [  4:  4](R/W) Downstream master interrupt enable. */
        uint32_t msg_stall             : 1;  /**< [  3:  3](R/W) Stall the downstream message interface to prevent new downstream
                                                                 data accumulating in the downstream buffer.
                                                                 Debug option; do not set without consulting UltraSoC. */
        uint32_t reserved_2            : 1;
        uint32_t clear                 : 1;  /**< [  1:  1](R/W) Clear downstream message buffer.
                                                                 Debug option; do not set without consulting UltraSoC. */
        uint32_t enable                : 1;  /**< [  0:  0](R/W) Downstream enable */
#else /* Word 0 - Little Endian */
        uint32_t enable                : 1;  /**< [  0:  0](R/W) Downstream enable */
        uint32_t clear                 : 1;  /**< [  1:  1](R/W) Clear downstream message buffer.
                                                                 Debug option; do not set without consulting UltraSoC. */
        uint32_t reserved_2            : 1;
        uint32_t msg_stall             : 1;  /**< [  3:  3](R/W) Stall the downstream message interface to prevent new downstream
                                                                 data accumulating in the downstream buffer.
                                                                 Debug option; do not set without consulting UltraSoC. */
        uint32_t int_en                : 1;  /**< [  4:  4](R/W) Downstream master interrupt enable. */
        uint32_t int_type              : 1;  /**< [  5:  5](R/W) Downstream interrupt output is a pulse when this bit is 1,
                                                                 or a level when it is 0. */
        uint32_t int_polarity          : 1;  /**< [  6:  6](R/W/H) Downstream interrupt output is active high when this bit is 1, or active
                                                                 low when 0. Initial value at reset is set according to an instantiation
                                                                 parameter, so it should not be necessary to change the value of this bit. */
        uint32_t reserved_7_31         : 25;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_usx_ds_ctl_s cn; */
};
typedef union cavm_rtt_mg_masi_usx_ds_ctl cavm_rtt_mg_masi_usx_ds_ctl_t;

static inline uint64_t CAVM_RTT_MG_MASI_USX_DS_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_USX_DS_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=15))
        return 0x80e0808b0080 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_USX_DS_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_USX_DS_CTL(a) cavm_rtt_mg_masi_usx_ds_ctl_t
#define bustype_CAVM_RTT_MG_MASI_USX_DS_CTL(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_USX_DS_CTL(a) "RTT_MG_MASI_USX_DS_CTL"
#define busnum_CAVM_RTT_MG_MASI_USX_DS_CTL(a) (a)
#define arguments_CAVM_RTT_MG_MASI_USX_DS_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_us#_ds_data
 *
 * RTT Mg Masi Us Ds Data Register
 * Downstream message data
 */
union cavm_rtt_mg_masi_usx_ds_data
{
    uint32_t u;
    struct cavm_rtt_mg_masi_usx_ds_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) Downstream message data. */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](RO) Downstream message data. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_usx_ds_data_s cn; */
};
typedef union cavm_rtt_mg_masi_usx_ds_data cavm_rtt_mg_masi_usx_ds_data_t;

static inline uint64_t CAVM_RTT_MG_MASI_USX_DS_DATA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_USX_DS_DATA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=15))
        return 0x80e0808b008c + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_USX_DS_DATA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_USX_DS_DATA(a) cavm_rtt_mg_masi_usx_ds_data_t
#define bustype_CAVM_RTT_MG_MASI_USX_DS_DATA(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_USX_DS_DATA(a) "RTT_MG_MASI_USX_DS_DATA"
#define busnum_CAVM_RTT_MG_MASI_USX_DS_DATA(a) (a)
#define arguments_CAVM_RTT_MG_MASI_USX_DS_DATA(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_us#_ds_evt
 *
 * RTT Mg Masi Us Ds Evt Register
 * Downstream event
 */
union cavm_rtt_mg_masi_usx_ds_evt
{
    uint32_t u;
    struct cavm_rtt_mg_masi_usx_ds_evt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_9_31         : 23;
        uint32_t valid                 : 1;  /**< [  8:  8](RO) Event valid. */
        uint32_t ds_event              : 8;  /**< [  7:  0](RO) Event number received (when valid is 1). */
#else /* Word 0 - Little Endian */
        uint32_t ds_event              : 8;  /**< [  7:  0](RO) Event number received (when valid is 1). */
        uint32_t valid                 : 1;  /**< [  8:  8](RO) Event valid. */
        uint32_t reserved_9_31         : 23;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_usx_ds_evt_s cn; */
};
typedef union cavm_rtt_mg_masi_usx_ds_evt cavm_rtt_mg_masi_usx_ds_evt_t;

static inline uint64_t CAVM_RTT_MG_MASI_USX_DS_EVT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_USX_DS_EVT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=15))
        return 0x80e0808b009c + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_USX_DS_EVT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_USX_DS_EVT(a) cavm_rtt_mg_masi_usx_ds_evt_t
#define bustype_CAVM_RTT_MG_MASI_USX_DS_EVT(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_USX_DS_EVT(a) "RTT_MG_MASI_USX_DS_EVT"
#define busnum_CAVM_RTT_MG_MASI_USX_DS_EVT(a) (a)
#define arguments_CAVM_RTT_MG_MASI_USX_DS_EVT(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_us#_ds_evt_ctl
 *
 * RTT Mg Masi Us Ds Evt Ctl Register
 * Downstream event control
 */
union cavm_rtt_mg_masi_usx_ds_evt_ctl
{
    uint32_t u;
    struct cavm_rtt_mg_masi_usx_ds_evt_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_2_31         : 30;
        uint32_t flush                 : 1;  /**< [  1:  1](R/W) Flush the downstream event FIFO.
                                                                 Once set, all events will be discarded until a zero is
                                                                 written to this bit. */
        uint32_t enable                : 1;  /**< [  0:  0](R/W) Event FIFO enable.
                                                                 Must be set in order to receive events via ds_evt. */
#else /* Word 0 - Little Endian */
        uint32_t enable                : 1;  /**< [  0:  0](R/W) Event FIFO enable.
                                                                 Must be set in order to receive events via ds_evt. */
        uint32_t flush                 : 1;  /**< [  1:  1](R/W) Flush the downstream event FIFO.
                                                                 Once set, all events will be discarded until a zero is
                                                                 written to this bit. */
        uint32_t reserved_2_31         : 30;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_usx_ds_evt_ctl_s cn; */
};
typedef union cavm_rtt_mg_masi_usx_ds_evt_ctl cavm_rtt_mg_masi_usx_ds_evt_ctl_t;

static inline uint64_t CAVM_RTT_MG_MASI_USX_DS_EVT_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_USX_DS_EVT_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=15))
        return 0x80e0808b00a0 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_USX_DS_EVT_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_USX_DS_EVT_CTL(a) cavm_rtt_mg_masi_usx_ds_evt_ctl_t
#define bustype_CAVM_RTT_MG_MASI_USX_DS_EVT_CTL(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_USX_DS_EVT_CTL(a) "RTT_MG_MASI_USX_DS_EVT_CTL"
#define busnum_CAVM_RTT_MG_MASI_USX_DS_EVT_CTL(a) (a)
#define arguments_CAVM_RTT_MG_MASI_USX_DS_EVT_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_us#_ds_evt_sts
 *
 * RTT Mg Masi Us Ds Evt Sts Register
 * Downstream event status
 */
union cavm_rtt_mg_masi_usx_ds_evt_sts
{
    uint32_t u;
    struct cavm_rtt_mg_masi_usx_ds_evt_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_10_31        : 22;
        uint32_t full                  : 1;  /**< [  9:  9](RO) Indicates that the downstream event FIFO is full. */
        uint32_t empty                 : 1;  /**< [  8:  8](RO) Indicates that the downstream event FIFO is empty. */
        uint32_t events                : 8;  /**< [  7:  0](RO) Number of events in the downstream event FIFO. */
#else /* Word 0 - Little Endian */
        uint32_t events                : 8;  /**< [  7:  0](RO) Number of events in the downstream event FIFO. */
        uint32_t empty                 : 1;  /**< [  8:  8](RO) Indicates that the downstream event FIFO is empty. */
        uint32_t full                  : 1;  /**< [  9:  9](RO) Indicates that the downstream event FIFO is full. */
        uint32_t reserved_10_31        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_usx_ds_evt_sts_s cn; */
};
typedef union cavm_rtt_mg_masi_usx_ds_evt_sts cavm_rtt_mg_masi_usx_ds_evt_sts_t;

static inline uint64_t CAVM_RTT_MG_MASI_USX_DS_EVT_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_USX_DS_EVT_STS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=15))
        return 0x80e0808b00a4 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_USX_DS_EVT_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_USX_DS_EVT_STS(a) cavm_rtt_mg_masi_usx_ds_evt_sts_t
#define bustype_CAVM_RTT_MG_MASI_USX_DS_EVT_STS(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_USX_DS_EVT_STS(a) "RTT_MG_MASI_USX_DS_EVT_STS"
#define busnum_CAVM_RTT_MG_MASI_USX_DS_EVT_STS(a) (a)
#define arguments_CAVM_RTT_MG_MASI_USX_DS_EVT_STS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_us#_ds_int_ctl
 *
 * RTT Mg Masi Us Ds Int Ctl Register
 * Downstream interrupt control
 */
union cavm_rtt_mg_masi_usx_ds_int_ctl
{
    uint32_t u;
    struct cavm_rtt_mg_masi_usx_ds_int_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_5_31         : 27;
        uint32_t evt_overflow          : 1;  /**< [  4:  4](R/W) Enable event FIFO overflow interrupt. */
        uint32_t evt_avail             : 1;  /**< [  3:  3](R/W) Enable event available interrupt. */
        uint32_t not_empty             : 1;  /**< [  2:  2](R/W) Enable buffer not empty interrupt. */
        uint32_t full                  : 1;  /**< [  1:  1](R/W) Enable buffer full interrupt. */
        uint32_t ds_err                : 1;  /**< [  0:  0](R/W) Enable downstream error interrupt. */
#else /* Word 0 - Little Endian */
        uint32_t ds_err                : 1;  /**< [  0:  0](R/W) Enable downstream error interrupt. */
        uint32_t full                  : 1;  /**< [  1:  1](R/W) Enable buffer full interrupt. */
        uint32_t not_empty             : 1;  /**< [  2:  2](R/W) Enable buffer not empty interrupt. */
        uint32_t evt_avail             : 1;  /**< [  3:  3](R/W) Enable event available interrupt. */
        uint32_t evt_overflow          : 1;  /**< [  4:  4](R/W) Enable event FIFO overflow interrupt. */
        uint32_t reserved_5_31         : 27;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_usx_ds_int_ctl_s cn; */
};
typedef union cavm_rtt_mg_masi_usx_ds_int_ctl cavm_rtt_mg_masi_usx_ds_int_ctl_t;

static inline uint64_t CAVM_RTT_MG_MASI_USX_DS_INT_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_USX_DS_INT_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=15))
        return 0x80e0808b0084 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_USX_DS_INT_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_USX_DS_INT_CTL(a) cavm_rtt_mg_masi_usx_ds_int_ctl_t
#define bustype_CAVM_RTT_MG_MASI_USX_DS_INT_CTL(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_USX_DS_INT_CTL(a) "RTT_MG_MASI_USX_DS_INT_CTL"
#define busnum_CAVM_RTT_MG_MASI_USX_DS_INT_CTL(a) (a)
#define arguments_CAVM_RTT_MG_MASI_USX_DS_INT_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_us#_ds_int_sts
 *
 * RTT Mg Masi Us Ds Int Sts Register
 * Downstream interrupt status
 */
union cavm_rtt_mg_masi_usx_ds_int_sts
{
    uint32_t u;
    struct cavm_rtt_mg_masi_usx_ds_int_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_5_31         : 27;
        uint32_t evt_overflow          : 1;  /**< [  4:  4](R/W1C) Event FIFO overflow interrupt.
                                                                 A downstream event was lost because there was no room
                                                                 to store it in the downstream event FIFO. */
        uint32_t evt_avail             : 1;  /**< [  3:  3](R/W1C) Event available interrupt.
                                                                 The downstream event FIFO is no longer empty. */
        uint32_t not_empty             : 1;  /**< [  2:  2](R/W1C) Downstream buffer not empty interrupt.
                                                                 A new message is available and can be read from ds_data. */
        uint32_t full                  : 1;  /**< [  1:  1](R/W1C) Downstream buffer full interrupt.
                                                                 The downstream message buffer is full, indicating that no
                                                                 further messages can be accepted and backpressure is being
                                                                 applied to the downstream message interface. */
        uint32_t ds_err                : 1;  /**< [  0:  0](R/W1C) Downstream error interrupt.
                                                                 This indicates ds_data was read when there was no
                                                                 message data available. */
#else /* Word 0 - Little Endian */
        uint32_t ds_err                : 1;  /**< [  0:  0](R/W1C) Downstream error interrupt.
                                                                 This indicates ds_data was read when there was no
                                                                 message data available. */
        uint32_t full                  : 1;  /**< [  1:  1](R/W1C) Downstream buffer full interrupt.
                                                                 The downstream message buffer is full, indicating that no
                                                                 further messages can be accepted and backpressure is being
                                                                 applied to the downstream message interface. */
        uint32_t not_empty             : 1;  /**< [  2:  2](R/W1C) Downstream buffer not empty interrupt.
                                                                 A new message is available and can be read from ds_data. */
        uint32_t evt_avail             : 1;  /**< [  3:  3](R/W1C) Event available interrupt.
                                                                 The downstream event FIFO is no longer empty. */
        uint32_t evt_overflow          : 1;  /**< [  4:  4](R/W1C) Event FIFO overflow interrupt.
                                                                 A downstream event was lost because there was no room
                                                                 to store it in the downstream event FIFO. */
        uint32_t reserved_5_31         : 27;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_usx_ds_int_sts_s cn; */
};
typedef union cavm_rtt_mg_masi_usx_ds_int_sts cavm_rtt_mg_masi_usx_ds_int_sts_t;

static inline uint64_t CAVM_RTT_MG_MASI_USX_DS_INT_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_USX_DS_INT_STS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=15))
        return 0x80e0808b0088 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_USX_DS_INT_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_USX_DS_INT_STS(a) cavm_rtt_mg_masi_usx_ds_int_sts_t
#define bustype_CAVM_RTT_MG_MASI_USX_DS_INT_STS(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_USX_DS_INT_STS(a) "RTT_MG_MASI_USX_DS_INT_STS"
#define busnum_CAVM_RTT_MG_MASI_USX_DS_INT_STS(a) (a)
#define arguments_CAVM_RTT_MG_MASI_USX_DS_INT_STS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_us#_ds_rd_sts
 *
 * RTT Mg Masi Us Ds Rd Sts Register
 * Downstream read status
 */
union cavm_rtt_mg_masi_usx_ds_rd_sts
{
    uint32_t u;
    struct cavm_rtt_mg_masi_usx_ds_rd_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t header                : 8;  /**< [ 15:  8](RO) Header (byte 0) of the message being read from the downstream
                                                                 message buffer (only valid if rd_ongoing is 1). */
        uint32_t entries               : 4;  /**< [  7:  4](RO) Number of 32-bit words of a message yet to be read out
                                                                 of the downstream buffer (only valid if rd_ongoing is 1). */
        uint32_t reserved_2_3          : 2;
        uint32_t rd_ongoing            : 1;  /**< [  1:  1](RO) Read ongoing. Part of a message has been read out of the
                                                                 buffer via ds_data. */
        uint32_t ready                 : 1;  /**< [  0:  0](RO) Downstream buffer contains a complete message ready for reading. */
#else /* Word 0 - Little Endian */
        uint32_t ready                 : 1;  /**< [  0:  0](RO) Downstream buffer contains a complete message ready for reading. */
        uint32_t rd_ongoing            : 1;  /**< [  1:  1](RO) Read ongoing. Part of a message has been read out of the
                                                                 buffer via ds_data. */
        uint32_t reserved_2_3          : 2;
        uint32_t entries               : 4;  /**< [  7:  4](RO) Number of 32-bit words of a message yet to be read out
                                                                 of the downstream buffer (only valid if rd_ongoing is 1). */
        uint32_t header                : 8;  /**< [ 15:  8](RO) Header (byte 0) of the message being read from the downstream
                                                                 message buffer (only valid if rd_ongoing is 1). */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_usx_ds_rd_sts_s cn; */
};
typedef union cavm_rtt_mg_masi_usx_ds_rd_sts cavm_rtt_mg_masi_usx_ds_rd_sts_t;

static inline uint64_t CAVM_RTT_MG_MASI_USX_DS_RD_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_USX_DS_RD_STS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=15))
        return 0x80e0808b0094 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_USX_DS_RD_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_USX_DS_RD_STS(a) cavm_rtt_mg_masi_usx_ds_rd_sts_t
#define bustype_CAVM_RTT_MG_MASI_USX_DS_RD_STS(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_USX_DS_RD_STS(a) "RTT_MG_MASI_USX_DS_RD_STS"
#define busnum_CAVM_RTT_MG_MASI_USX_DS_RD_STS(a) (a)
#define arguments_CAVM_RTT_MG_MASI_USX_DS_RD_STS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_us#_us_buf_sts
 *
 * RTT Mg Masi Us Us Buf Sts Register
 * Upstream buffer status
 */
union cavm_rtt_mg_masi_usx_us_buf_sts
{
    uint32_t u;
    struct cavm_rtt_mg_masi_usx_us_buf_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t messages              : 11; /**< [ 26: 16](RO) Number of whole messages contained in the upstream buffer */
        uint32_t reserved_4_15         : 12;
        uint32_t wr_ongoing            : 1;  /**< [  3:  3](RO) Write ongoing.
                                                                 Part of a message has been written in to the buffer via us_data. */
        uint32_t rd_ongoing            : 1;  /**< [  2:  2](RO) Read ongoing.
                                                                 Part of a message has been output from the message interface. */
        uint32_t empty                 : 1;  /**< [  1:  1](RO) Upstream buffer is empty. */
        uint32_t full                  : 1;  /**< [  0:  0](RO) Upstream buffer is full. */
#else /* Word 0 - Little Endian */
        uint32_t full                  : 1;  /**< [  0:  0](RO) Upstream buffer is full. */
        uint32_t empty                 : 1;  /**< [  1:  1](RO) Upstream buffer is empty. */
        uint32_t rd_ongoing            : 1;  /**< [  2:  2](RO) Read ongoing.
                                                                 Part of a message has been output from the message interface. */
        uint32_t wr_ongoing            : 1;  /**< [  3:  3](RO) Write ongoing.
                                                                 Part of a message has been written in to the buffer via us_data. */
        uint32_t reserved_4_15         : 12;
        uint32_t messages              : 11; /**< [ 26: 16](RO) Number of whole messages contained in the upstream buffer */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_usx_us_buf_sts_s cn; */
};
typedef union cavm_rtt_mg_masi_usx_us_buf_sts cavm_rtt_mg_masi_usx_us_buf_sts_t;

static inline uint64_t CAVM_RTT_MG_MASI_USX_US_BUF_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_USX_US_BUF_STS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=15))
        return 0x80e0808b0010 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_USX_US_BUF_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_USX_US_BUF_STS(a) cavm_rtt_mg_masi_usx_us_buf_sts_t
#define bustype_CAVM_RTT_MG_MASI_USX_US_BUF_STS(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_USX_US_BUF_STS(a) "RTT_MG_MASI_USX_US_BUF_STS"
#define busnum_CAVM_RTT_MG_MASI_USX_US_BUF_STS(a) (a)
#define arguments_CAVM_RTT_MG_MASI_USX_US_BUF_STS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_us#_us_ctl
 *
 * RTT Mg Masi Us Us Ctl Register
 * Upstream control configuration
 */
union cavm_rtt_mg_masi_usx_us_ctl
{
    uint32_t u;
    struct cavm_rtt_mg_masi_usx_us_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_7_31         : 25;
        uint32_t int_polarity          : 1;  /**< [  6:  6](R/W/H) Upstream interrupt output is active high when this bit is 1, or active
                                                                 low when 0. Initial value at reset is set according to an instantiation
                                                                 parameter, so it should not be necessary to change the value of this
                                                                 bit. */
        uint32_t int_type              : 1;  /**< [  5:  5](R/W) Upstream interrupt output is a pulse when this bit is 1, or a level when
                                                                 it is 0. */
        uint32_t int_en                : 1;  /**< [  4:  4](R/W) Upstream master interrupt enable */
        uint32_t reserved_3            : 1;
        uint32_t flush                 : 1;  /**< [  2:  2](R/W1C) Flush the message currently being written from upstream message buffer.
                                                                 Must be applied before the last write of a message.
                                                                 Selfclearing, so always reads as zero */
        uint32_t clear                 : 1;  /**< [  1:  1](R/W) Clear upstream message buffer.
                                                                 Debug option; do not set without consulting UltraSoC */
        uint32_t enable                : 1;  /**< [  0:  0](R/W) Upstream enable */
#else /* Word 0 - Little Endian */
        uint32_t enable                : 1;  /**< [  0:  0](R/W) Upstream enable */
        uint32_t clear                 : 1;  /**< [  1:  1](R/W) Clear upstream message buffer.
                                                                 Debug option; do not set without consulting UltraSoC */
        uint32_t flush                 : 1;  /**< [  2:  2](R/W1C) Flush the message currently being written from upstream message buffer.
                                                                 Must be applied before the last write of a message.
                                                                 Selfclearing, so always reads as zero */
        uint32_t reserved_3            : 1;
        uint32_t int_en                : 1;  /**< [  4:  4](R/W) Upstream master interrupt enable */
        uint32_t int_type              : 1;  /**< [  5:  5](R/W) Upstream interrupt output is a pulse when this bit is 1, or a level when
                                                                 it is 0. */
        uint32_t int_polarity          : 1;  /**< [  6:  6](R/W/H) Upstream interrupt output is active high when this bit is 1, or active
                                                                 low when 0. Initial value at reset is set according to an instantiation
                                                                 parameter, so it should not be necessary to change the value of this
                                                                 bit. */
        uint32_t reserved_7_31         : 25;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_usx_us_ctl_s cn; */
};
typedef union cavm_rtt_mg_masi_usx_us_ctl cavm_rtt_mg_masi_usx_us_ctl_t;

static inline uint64_t CAVM_RTT_MG_MASI_USX_US_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_USX_US_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=15))
        return 0x80e0808b0000 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_USX_US_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_USX_US_CTL(a) cavm_rtt_mg_masi_usx_us_ctl_t
#define bustype_CAVM_RTT_MG_MASI_USX_US_CTL(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_USX_US_CTL(a) "RTT_MG_MASI_USX_US_CTL"
#define busnum_CAVM_RTT_MG_MASI_USX_US_CTL(a) (a)
#define arguments_CAVM_RTT_MG_MASI_USX_US_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_us#_us_data
 *
 * RTT Mg Masi Us Us Data Register
 * Upstream message data
 */
union cavm_rtt_mg_masi_usx_us_data
{
    uint32_t u;
    struct cavm_rtt_mg_masi_usx_us_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) Upstream message data */
#else /* Word 0 - Little Endian */
        uint32_t data                  : 32; /**< [ 31:  0](WO) Upstream message data */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_usx_us_data_s cn; */
};
typedef union cavm_rtt_mg_masi_usx_us_data cavm_rtt_mg_masi_usx_us_data_t;

static inline uint64_t CAVM_RTT_MG_MASI_USX_US_DATA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_USX_US_DATA(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=15))
        return 0x80e0808b000c + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_USX_US_DATA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_USX_US_DATA(a) cavm_rtt_mg_masi_usx_us_data_t
#define bustype_CAVM_RTT_MG_MASI_USX_US_DATA(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_USX_US_DATA(a) "RTT_MG_MASI_USX_US_DATA"
#define busnum_CAVM_RTT_MG_MASI_USX_US_DATA(a) (a)
#define arguments_CAVM_RTT_MG_MASI_USX_US_DATA(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_us#_us_evt
 *
 * RTT Mg Masi Us Us Evt Register
 * Upstream event
 */
union cavm_rtt_mg_masi_usx_us_evt
{
    uint32_t u;
    struct cavm_rtt_mg_masi_usx_us_evt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t us_event              : 8;  /**< [  7:  0](R/W) Event number to send. */
#else /* Word 0 - Little Endian */
        uint32_t us_event              : 8;  /**< [  7:  0](R/W) Event number to send. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_usx_us_evt_s cn; */
};
typedef union cavm_rtt_mg_masi_usx_us_evt cavm_rtt_mg_masi_usx_us_evt_t;

static inline uint64_t CAVM_RTT_MG_MASI_USX_US_EVT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_USX_US_EVT(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=15))
        return 0x80e0808b001c + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_USX_US_EVT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_USX_US_EVT(a) cavm_rtt_mg_masi_usx_us_evt_t
#define bustype_CAVM_RTT_MG_MASI_USX_US_EVT(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_USX_US_EVT(a) "RTT_MG_MASI_USX_US_EVT"
#define busnum_CAVM_RTT_MG_MASI_USX_US_EVT(a) (a)
#define arguments_CAVM_RTT_MG_MASI_USX_US_EVT(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_us#_us_gp
 *
 * RTT Mg Masi Us Us Gp Register
 * Upstream general purpose
 */
union cavm_rtt_mg_masi_usx_us_gp
{
    uint32_t u;
    struct cavm_rtt_mg_masi_usx_us_gp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t gp                    : 8;  /**< [  7:  0](R/W) General purpose location. */
#else /* Word 0 - Little Endian */
        uint32_t gp                    : 8;  /**< [  7:  0](R/W) General purpose location. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_usx_us_gp_s cn; */
};
typedef union cavm_rtt_mg_masi_usx_us_gp cavm_rtt_mg_masi_usx_us_gp_t;

static inline uint64_t CAVM_RTT_MG_MASI_USX_US_GP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_USX_US_GP(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=15))
        return 0x80e0808b0018 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_USX_US_GP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_USX_US_GP(a) cavm_rtt_mg_masi_usx_us_gp_t
#define bustype_CAVM_RTT_MG_MASI_USX_US_GP(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_USX_US_GP(a) "RTT_MG_MASI_USX_US_GP"
#define busnum_CAVM_RTT_MG_MASI_USX_US_GP(a) (a)
#define arguments_CAVM_RTT_MG_MASI_USX_US_GP(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_us#_us_int_ctl
 *
 * RTT Mg Masi Us Us Int Ctl Register
 * Upstream interrupt control
 */
union cavm_rtt_mg_masi_usx_us_int_ctl
{
    uint32_t u;
    struct cavm_rtt_mg_masi_usx_us_int_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t empty                 : 1;  /**< [  2:  2](R/W) Enable buffer empty interrupt. The upstream message buffer is empty,
                                                                 and there is therefore sufficient space to write an entire message
                                                                 via us_data */
        uint32_t not_full              : 1;  /**< [  1:  1](R/W) Enable buffer not full interrupt. The upstream message buffer is no
                                                                 longer full, and further message data can be written via us_data */
        uint32_t us_err                : 1;  /**< [  0:  0](R/W) Enable upstream error interrupt. This indicates us_data was written
                                                                 when there was no space available in the upstream message buffer
                                                                 (us_buf_sts full bit set). */
#else /* Word 0 - Little Endian */
        uint32_t us_err                : 1;  /**< [  0:  0](R/W) Enable upstream error interrupt. This indicates us_data was written
                                                                 when there was no space available in the upstream message buffer
                                                                 (us_buf_sts full bit set). */
        uint32_t not_full              : 1;  /**< [  1:  1](R/W) Enable buffer not full interrupt. The upstream message buffer is no
                                                                 longer full, and further message data can be written via us_data */
        uint32_t empty                 : 1;  /**< [  2:  2](R/W) Enable buffer empty interrupt. The upstream message buffer is empty,
                                                                 and there is therefore sufficient space to write an entire message
                                                                 via us_data */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_usx_us_int_ctl_s cn; */
};
typedef union cavm_rtt_mg_masi_usx_us_int_ctl cavm_rtt_mg_masi_usx_us_int_ctl_t;

static inline uint64_t CAVM_RTT_MG_MASI_USX_US_INT_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_USX_US_INT_CTL(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=15))
        return 0x80e0808b0004 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_USX_US_INT_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_USX_US_INT_CTL(a) cavm_rtt_mg_masi_usx_us_int_ctl_t
#define bustype_CAVM_RTT_MG_MASI_USX_US_INT_CTL(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_USX_US_INT_CTL(a) "RTT_MG_MASI_USX_US_INT_CTL"
#define busnum_CAVM_RTT_MG_MASI_USX_US_INT_CTL(a) (a)
#define arguments_CAVM_RTT_MG_MASI_USX_US_INT_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_us#_us_int_sts
 *
 * RTT Mg Masi Us Us Int Sts Register
 * Upstream interrupt status
 */
union cavm_rtt_mg_masi_usx_us_int_sts
{
    uint32_t u;
    struct cavm_rtt_mg_masi_usx_us_int_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t empty                 : 1;  /**< [  2:  2](R/W1C) Enable buffer empty interrupt. The upstream message buffer is empty,
                                                                 and there is therefore sufficient space to write an entire message
                                                                 via us_data */
        uint32_t not_full              : 1;  /**< [  1:  1](R/W1C) Enable buffer not full interrupt. The upstream message buffer is no
                                                                 longer full, and further message data can be written via us_data. */
        uint32_t us_err                : 1;  /**< [  0:  0](R/W1C) Enable upstream error interrupt. This indicates us_data was written
                                                                 when there was no space available in the upstream message buffer
                                                                 (us_buf_sts full bit set). */
#else /* Word 0 - Little Endian */
        uint32_t us_err                : 1;  /**< [  0:  0](R/W1C) Enable upstream error interrupt. This indicates us_data was written
                                                                 when there was no space available in the upstream message buffer
                                                                 (us_buf_sts full bit set). */
        uint32_t not_full              : 1;  /**< [  1:  1](R/W1C) Enable buffer not full interrupt. The upstream message buffer is no
                                                                 longer full, and further message data can be written via us_data. */
        uint32_t empty                 : 1;  /**< [  2:  2](R/W1C) Enable buffer empty interrupt. The upstream message buffer is empty,
                                                                 and there is therefore sufficient space to write an entire message
                                                                 via us_data */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_usx_us_int_sts_s cn; */
};
typedef union cavm_rtt_mg_masi_usx_us_int_sts cavm_rtt_mg_masi_usx_us_int_sts_t;

static inline uint64_t CAVM_RTT_MG_MASI_USX_US_INT_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_USX_US_INT_STS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=15))
        return 0x80e0808b0008 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_USX_US_INT_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_USX_US_INT_STS(a) cavm_rtt_mg_masi_usx_us_int_sts_t
#define bustype_CAVM_RTT_MG_MASI_USX_US_INT_STS(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_USX_US_INT_STS(a) "RTT_MG_MASI_USX_US_INT_STS"
#define busnum_CAVM_RTT_MG_MASI_USX_US_INT_STS(a) (a)
#define arguments_CAVM_RTT_MG_MASI_USX_US_INT_STS(a) (a),-1,-1,-1

/**
 * Register (NCB32b) rtt_mg_masi_us#_us_wr_sts
 *
 * RTT Mg Masi Us Us Wr Sts Register
 * Upstream write status
 */
union cavm_rtt_mg_masi_usx_us_wr_sts
{
    uint32_t u;
    struct cavm_rtt_mg_masi_usx_us_wr_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t header                : 8;  /**< [ 15:  8](RO) Header (byte 0) of the message being written into upstream
                                                                 message buffer (only valid if wr_ongoing is 1). */
        uint32_t entries               : 4;  /**< [  7:  4](RO) Number of 32-bit words of an incomplete message written into the
                                                                 upstream buffer (only valid if wr_ongoing is 1). */
        uint32_t reserved_2_3          : 2;
        uint32_t wr_ongoing            : 1;  /**< [  1:  1](RO) Write ongoing.
                                                                 Part of a message has been written in to the buffer via us_data. */
        uint32_t done                  : 1;  /**< [  0:  0](RO) Upstream buffer contains a complete message. */
#else /* Word 0 - Little Endian */
        uint32_t done                  : 1;  /**< [  0:  0](RO) Upstream buffer contains a complete message. */
        uint32_t wr_ongoing            : 1;  /**< [  1:  1](RO) Write ongoing.
                                                                 Part of a message has been written in to the buffer via us_data. */
        uint32_t reserved_2_3          : 2;
        uint32_t entries               : 4;  /**< [  7:  4](RO) Number of 32-bit words of an incomplete message written into the
                                                                 upstream buffer (only valid if wr_ongoing is 1). */
        uint32_t header                : 8;  /**< [ 15:  8](RO) Header (byte 0) of the message being written into upstream
                                                                 message buffer (only valid if wr_ongoing is 1). */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rtt_mg_masi_usx_us_wr_sts_s cn; */
};
typedef union cavm_rtt_mg_masi_usx_us_wr_sts cavm_rtt_mg_masi_usx_us_wr_sts_t;

static inline uint64_t CAVM_RTT_MG_MASI_USX_US_WR_STS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RTT_MG_MASI_USX_US_WR_STS(uint64_t a)
{
    if (cavm_is_model(OCTEONTX_CNF20KA) && (a<=15))
        return 0x80e0808b0014 + ((a&0x1)*0x800000+((a&0xe)>>1)*0x80000);
    __cavm_csr_fatal("RTT_MG_MASI_USX_US_WR_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RTT_MG_MASI_USX_US_WR_STS(a) cavm_rtt_mg_masi_usx_us_wr_sts_t
#define bustype_CAVM_RTT_MG_MASI_USX_US_WR_STS(a) CSR_TYPE_NCB32b
#define basename_CAVM_RTT_MG_MASI_USX_US_WR_STS(a) "RTT_MG_MASI_USX_US_WR_STS"
#define busnum_CAVM_RTT_MG_MASI_USX_US_WR_STS(a) (a)
#define arguments_CAVM_RTT_MG_MASI_USX_US_WR_STS(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_RTT_MG_MASI_US_H__ */
