#ifndef __CAVM_CSRS_I3C_H__
#define __CAVM_CSRS_I3C_H__
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
 * OcteonTX I3C.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration i3c_bar_e
 *
 * I3C Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_I3C_BAR_E_I3C_PF_BAR0 (0x87e0d0000000ll)
#define CAVM_I3C_BAR_E_I3C_PF_BAR0_SIZE 0x10000ull
#define CAVM_I3C_BAR_E_I3C_PF_BAR4 (0x87e0d0f00000ll)
#define CAVM_I3C_BAR_E_I3C_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration i3c_int_vec_e
 *
 * I3C MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_I3C_INT_VEC_E_I3C_INTR (0)

/**
 * Register (RSL32b) i3c_bus_free_timing
 *
 * I3C Ext Bus Free Timing Register
 * Bus Free Timing Register
 *
 * This register sets the Bus free time for initiating the transfer in master mode or
 * generating IBI in non-current
 * master mode.
 */
union cavm_i3c_bus_free_timing
{
    uint32_t u;
    struct cavm_i3c_bus_free_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t i3c_mst_free_cnt      : 16; /**< [ 15:  0](R/W) In Pure Bus System, this field represents tCAS parameter. In Mixed Bus system,
                                                                 this field is expected to be programmed
                                                                 to tLOW of I2C Timing. */
#else /* Word 0 - Little Endian */
        uint32_t i3c_mst_free_cnt      : 16; /**< [ 15:  0](R/W) In Pure Bus System, this field represents tCAS parameter. In Mixed Bus system,
                                                                 this field is expected to be programmed
                                                                 to tLOW of I2C Timing. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_bus_free_timing_s cn; */
};
typedef union cavm_i3c_bus_free_timing cavm_i3c_bus_free_timing_t;

#define CAVM_I3C_BUS_FREE_TIMING CAVM_I3C_BUS_FREE_TIMING_FUNC()
static inline uint64_t CAVM_I3C_BUS_FREE_TIMING_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_BUS_FREE_TIMING_FUNC(void)
{
    return 0x87e0d0000134ll;
}

#define typedef_CAVM_I3C_BUS_FREE_TIMING cavm_i3c_bus_free_timing_t
#define bustype_CAVM_I3C_BUS_FREE_TIMING CSR_TYPE_RSL32b
#define basename_CAVM_I3C_BUS_FREE_TIMING "I3C_BUS_FREE_TIMING"
#define device_bar_CAVM_I3C_BUS_FREE_TIMING 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_BUS_FREE_TIMING 0
#define arguments_CAVM_I3C_BUS_FREE_TIMING -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_bus_timing_header
 *
 * I3C Ext Bus Timing Header Register
 * Extended capability header register for Bus Timing registers.
 *
 * Every Extended Capability is introduced with Extended Capability Header that
 * comprises single EXTCAP_HEADER  register
 * and a number of capability specific register.
 */
union cavm_i3c_bus_timing_header
{
    uint32_t u;
    struct cavm_i3c_bus_timing_header_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t cap_len               : 16; /**< [ 23:  8](RO/H) Length of capability structure. */
        uint32_t cap_id                : 8;  /**< [  7:  0](RO/H) Extended capability ID. */
#else /* Word 0 - Little Endian */
        uint32_t cap_id                : 8;  /**< [  7:  0](RO/H) Extended capability ID. */
        uint32_t cap_len               : 16; /**< [ 23:  8](RO/H) Length of capability structure. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_bus_timing_header_s cn; */
};
typedef union cavm_i3c_bus_timing_header cavm_i3c_bus_timing_header_t;

#define CAVM_I3C_BUS_TIMING_HEADER CAVM_I3C_BUS_TIMING_HEADER_FUNC()
static inline uint64_t CAVM_I3C_BUS_TIMING_HEADER_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_BUS_TIMING_HEADER_FUNC(void)
{
    return 0x87e0d0000110ll;
}

#define typedef_CAVM_I3C_BUS_TIMING_HEADER cavm_i3c_bus_timing_header_t
#define bustype_CAVM_I3C_BUS_TIMING_HEADER CSR_TYPE_RSL32b
#define basename_CAVM_I3C_BUS_TIMING_HEADER "I3C_BUS_TIMING_HEADER"
#define device_bar_CAVM_I3C_BUS_TIMING_HEADER 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_BUS_TIMING_HEADER 0
#define arguments_CAVM_I3C_BUS_TIMING_HEADER -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_clken
 *
 * MIO Clock Enable Register
 * This register controls conditional clocks.
 */
union cavm_i3c_clken
{
    uint32_t u;
    struct cavm_i3c_clken_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t clken                 : 1;  /**< [  0:  0](R/W) Force the I3C interface conditional clocking to be always on. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint32_t clken                 : 1;  /**< [  0:  0](R/W) Force the I3C interface conditional clocking to be always on. For diagnostic use only. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_clken_s cn; */
};
typedef union cavm_i3c_clken cavm_i3c_clken_t;

#define CAVM_I3C_CLKEN CAVM_I3C_CLKEN_FUNC()
static inline uint64_t CAVM_I3C_CLKEN_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_CLKEN_FUNC(void)
{
    return 0x87e0d0000748ll;
}

#define typedef_CAVM_I3C_CLKEN cavm_i3c_clken_t
#define bustype_CAVM_I3C_CLKEN CSR_TYPE_RSL32b
#define basename_CAVM_I3C_CLKEN "I3C_CLKEN"
#define device_bar_CAVM_I3C_CLKEN 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_CLKEN 0
#define arguments_CAVM_I3C_CLKEN -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_command_queue_port
 *
 * I3C Ext Command Queue Port Register
 * COMMAND_QUEUE_PORT.
 * Command Descriptor structure is used on Command Ring to schedule the command to devices on I3C bus.
 * The Command Descriptor structure (64 bits) is used in two primary cases:
 *  - In PIO mode, the Command Descriptor is put to Command Queue through writes to Command Queue Port
 *  - In DMA mode, the Command Descriptor is put, as a part of Transfer Descriptor, on Command Ring
 */
union cavm_i3c_command_queue_port
{
    uint32_t u;
    struct cavm_i3c_command_queue_port_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t command               : 32; /**< [ 31:  0](WO) 32 bit command */
#else /* Word 0 - Little Endian */
        uint32_t command               : 32; /**< [ 31:  0](WO) 32 bit command */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_command_queue_port_s cn; */
};
typedef union cavm_i3c_command_queue_port cavm_i3c_command_queue_port_t;

#define CAVM_I3C_COMMAND_QUEUE_PORT CAVM_I3C_COMMAND_QUEUE_PORT_FUNC()
static inline uint64_t CAVM_I3C_COMMAND_QUEUE_PORT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_COMMAND_QUEUE_PORT_FUNC(void)
{
    return 0x87e0d0000300ll;
}

#define typedef_CAVM_I3C_COMMAND_QUEUE_PORT cavm_i3c_command_queue_port_t
#define bustype_CAVM_I3C_COMMAND_QUEUE_PORT CSR_TYPE_RSL32b
#define basename_CAVM_I3C_COMMAND_QUEUE_PORT "I3C_COMMAND_QUEUE_PORT"
#define device_bar_CAVM_I3C_COMMAND_QUEUE_PORT 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_COMMAND_QUEUE_PORT 0
#define arguments_CAVM_I3C_COMMAND_QUEUE_PORT -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_comp_manufacturer
 *
 * I3C Ext Comp Manufacturer Register
 * This register reflects the MIPI Assigned Manufacturer ID.
 */
union cavm_i3c_comp_manufacturer
{
    uint32_t u;
    struct cavm_i3c_comp_manufacturer_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t mipi_vendor_id        : 32; /**< [ 31:  0](RO/H) MIPI Assigned Manufacturer ID

                                                                 This field indicates the MIPI Assigned Manufacturer ID of DWC_mipi_i3c Component. */
#else /* Word 0 - Little Endian */
        uint32_t mipi_vendor_id        : 32; /**< [ 31:  0](RO/H) MIPI Assigned Manufacturer ID

                                                                 This field indicates the MIPI Assigned Manufacturer ID of DWC_mipi_i3c Component. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_comp_manufacturer_s cn; */
};
typedef union cavm_i3c_comp_manufacturer cavm_i3c_comp_manufacturer_t;

#define CAVM_I3C_COMP_MANUFACTURER CAVM_I3C_COMP_MANUFACTURER_FUNC()
static inline uint64_t CAVM_I3C_COMP_MANUFACTURER_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_COMP_MANUFACTURER_FUNC(void)
{
    return 0x87e0d0000104ll;
}

#define typedef_CAVM_I3C_COMP_MANUFACTURER cavm_i3c_comp_manufacturer_t
#define bustype_CAVM_I3C_COMP_MANUFACTURER CSR_TYPE_RSL32b
#define basename_CAVM_I3C_COMP_MANUFACTURER "I3C_COMP_MANUFACTURER"
#define device_bar_CAVM_I3C_COMP_MANUFACTURER 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_COMP_MANUFACTURER 0
#define arguments_CAVM_I3C_COMP_MANUFACTURER -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_comp_type
 *
 * I3C Ext Comp Type Register
 * This register reflects the current release type of DWC_mipi_i3c.
 */
union cavm_i3c_comp_type
{
    uint32_t u;
    struct cavm_i3c_comp_type_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t i3c_ver_type          : 32; /**< [ 31:  0](RO/H) This field indicates the IP current release
                                                                 type that is read by an application.

                                                                 For example, release type "ga" is represented in ASCII as 0x6761 and "ea" is
                                                                 represented as 0x6561. Lower 16 bits
                                                                 read from this register can be ignored by the application if release type is
                                                                 "ga". If release type is "ea" the lower
                                                                 16 bits represents the "ea" release version.
                                                                 An application reading this register along with the I3C_VER_ID
                                                                 register, gathers details of the current release. */
#else /* Word 0 - Little Endian */
        uint32_t i3c_ver_type          : 32; /**< [ 31:  0](RO/H) This field indicates the IP current release
                                                                 type that is read by an application.

                                                                 For example, release type "ga" is represented in ASCII as 0x6761 and "ea" is
                                                                 represented as 0x6561. Lower 16 bits
                                                                 read from this register can be ignored by the application if release type is
                                                                 "ga". If release type is "ea" the lower
                                                                 16 bits represents the "ea" release version.
                                                                 An application reading this register along with the I3C_VER_ID
                                                                 register, gathers details of the current release. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_comp_type_s cn; */
};
typedef union cavm_i3c_comp_type cavm_i3c_comp_type_t;

#define CAVM_I3C_COMP_TYPE CAVM_I3C_COMP_TYPE_FUNC()
static inline uint64_t CAVM_I3C_COMP_TYPE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_COMP_TYPE_FUNC(void)
{
    return 0x87e0d000010cll;
}

#define typedef_CAVM_I3C_COMP_TYPE cavm_i3c_comp_type_t
#define bustype_CAVM_I3C_COMP_TYPE CSR_TYPE_RSL32b
#define basename_CAVM_I3C_COMP_TYPE "I3C_COMP_TYPE"
#define device_bar_CAVM_I3C_COMP_TYPE 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_COMP_TYPE 0
#define arguments_CAVM_I3C_COMP_TYPE -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_comp_version
 *
 * I3C Ext Comp Version Register
 * This register reflects the current release number of DWC_mipi_i3c
 */
union cavm_i3c_comp_version
{
    uint32_t u;
    struct cavm_i3c_comp_version_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t i3c_ver_id            : 32; /**< [ 31:  0](RO/H) This field indicates the IP current release
                                                                 number that is read by an application.

                                                                 For example, release number "1.00a" is represented in ASCII as 0x313030. Lower 8
                                                                 bits read from this register can be
                                                                 ignored by the application. An application reading this register along with the
                                                                 I3C_VER_TYPE register, gathers
                                                                 details of the current release. */
#else /* Word 0 - Little Endian */
        uint32_t i3c_ver_id            : 32; /**< [ 31:  0](RO/H) This field indicates the IP current release
                                                                 number that is read by an application.

                                                                 For example, release number "1.00a" is represented in ASCII as 0x313030. Lower 8
                                                                 bits read from this register can be
                                                                 ignored by the application. An application reading this register along with the
                                                                 I3C_VER_TYPE register, gathers
                                                                 details of the current release. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_comp_version_s cn; */
};
typedef union cavm_i3c_comp_version cavm_i3c_comp_version_t;

#define CAVM_I3C_COMP_VERSION CAVM_I3C_COMP_VERSION_FUNC()
static inline uint64_t CAVM_I3C_COMP_VERSION_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_COMP_VERSION_FUNC(void)
{
    return 0x87e0d0000108ll;
}

#define typedef_CAVM_I3C_COMP_VERSION cavm_i3c_comp_version_t
#define bustype_CAVM_I3C_COMP_VERSION CSR_TYPE_RSL32b
#define basename_CAVM_I3C_COMP_VERSION "I3C_COMP_VERSION"
#define device_bar_CAVM_I3C_COMP_VERSION 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_COMP_VERSION 0
#define arguments_CAVM_I3C_COMP_VERSION -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dat_section_offset
 *
 * I3C Ext Dat Section Offset Register
 * The Device Address Table Section Offset register holds the offset and size of the DAT table.
 */
union cavm_i3c_dat_section_offset
{
    uint32_t u;
    struct cavm_i3c_dat_section_offset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_18_31        : 14;
        uint32_t table_size            : 6;  /**< [ 17: 12](RO/H) DAT Table Size in terms of DWORDs. */
        uint32_t table_offset          : 12; /**< [ 11:  0](RO/H) DAT Table Offset.
                                                                 Offset of the DAT relative to the BASE address of the current HCI.
                                                                 If the Host Controller does not support implementing the DAT in registers
                                                                 (thereby forcing the software to provide the Device Context in memory), then it
                                                                 should indicate this by setting this field to 12'h000. */
#else /* Word 0 - Little Endian */
        uint32_t table_offset          : 12; /**< [ 11:  0](RO/H) DAT Table Offset.
                                                                 Offset of the DAT relative to the BASE address of the current HCI.
                                                                 If the Host Controller does not support implementing the DAT in registers
                                                                 (thereby forcing the software to provide the Device Context in memory), then it
                                                                 should indicate this by setting this field to 12'h000. */
        uint32_t table_size            : 6;  /**< [ 17: 12](RO/H) DAT Table Size in terms of DWORDs. */
        uint32_t reserved_18_31        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dat_section_offset_s cn; */
};
typedef union cavm_i3c_dat_section_offset cavm_i3c_dat_section_offset_t;

#define CAVM_I3C_DAT_SECTION_OFFSET CAVM_I3C_DAT_SECTION_OFFSET_FUNC()
static inline uint64_t CAVM_I3C_DAT_SECTION_OFFSET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DAT_SECTION_OFFSET_FUNC(void)
{
    return 0x87e0d0000030ll;
}

#define typedef_CAVM_I3C_DAT_SECTION_OFFSET cavm_i3c_dat_section_offset_t
#define bustype_CAVM_I3C_DAT_SECTION_OFFSET CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DAT_SECTION_OFFSET "I3C_DAT_SECTION_OFFSET"
#define device_bar_CAVM_I3C_DAT_SECTION_OFFSET 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DAT_SECTION_OFFSET 0
#define arguments_CAVM_I3C_DAT_SECTION_OFFSET -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_data_buffer_status_level
 *
 * I3C Ext Data Buffer Status Level Register
 * Data Buffer Status Level Register
 */
union cavm_i3c_data_buffer_status_level
{
    uint32_t u;
    struct cavm_i3c_data_buffer_status_level_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t rx_buf_lvl            : 8;  /**< [ 15:  8](RO/H) Contains the number of valid data entries in the receive Buffer. */
        uint32_t tx_buf_free_lvl       : 8;  /**< [  7:  0](RO/H) Contains the number of empty locations in the transmit Buffer. */
#else /* Word 0 - Little Endian */
        uint32_t tx_buf_free_lvl       : 8;  /**< [  7:  0](RO/H) Contains the number of empty locations in the transmit Buffer. */
        uint32_t rx_buf_lvl            : 8;  /**< [ 15:  8](RO/H) Contains the number of valid data entries in the receive Buffer. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_data_buffer_status_level_s cn; */
};
typedef union cavm_i3c_data_buffer_status_level cavm_i3c_data_buffer_status_level_t;

#define CAVM_I3C_DATA_BUFFER_STATUS_LEVEL CAVM_I3C_DATA_BUFFER_STATUS_LEVEL_FUNC()
static inline uint64_t CAVM_I3C_DATA_BUFFER_STATUS_LEVEL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DATA_BUFFER_STATUS_LEVEL_FUNC(void)
{
    return 0x87e0d0000148ll;
}

#define typedef_CAVM_I3C_DATA_BUFFER_STATUS_LEVEL cavm_i3c_data_buffer_status_level_t
#define bustype_CAVM_I3C_DATA_BUFFER_STATUS_LEVEL CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DATA_BUFFER_STATUS_LEVEL "I3C_DATA_BUFFER_STATUS_LEVEL"
#define device_bar_CAVM_I3C_DATA_BUFFER_STATUS_LEVEL 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DATA_BUFFER_STATUS_LEVEL 0
#define arguments_CAVM_I3C_DATA_BUFFER_STATUS_LEVEL -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_data_buffer_thld_ctrl
 *
 * I3C Ext Data Buffer Thld Ctrl Register
 * Data Buffer Threshold Control Register used to control thresholds that are
 * triggering interrupts on specific
 * thresholds of Command, Response, Rx or Tx Data Buffer Queues.
 */
union cavm_i3c_data_buffer_thld_ctrl
{
    uint32_t u;
    struct cavm_i3c_data_buffer_thld_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t rx_start_thld         : 3;  /**< [ 26: 24](R/W) Receive Start Threshold Value

                                                                 When the controller is set up to initiate a read transfer, it waits until the
                                                                 programmed number of empty locations (or more) are
                                                                 available in its receive buffer before it initiates the read transfer on the I3C Interface.

                                                                 The following configurable options are provided:
                                                                  - Store and Forward Mode: If the threshold value is set to buffer size, then
                                                                 the controller waits for one of the following to be
                                                                  true to initiate the read command:
                                                                  -- Entire Receive FIFO to be empty if the data length is more than buffer size
                                                                  -- The data length number of locations to be empty  in the Receive FIFO if data
                                                                 length is smaller than the buffer size.
                                                                  - Threshold Mode: In this case, if the threshold value is less than buffer
                                                                 size, then the controller initiates the read command
                                                                  as soon as the programmed locations are empty  in the Receive FIFO.

                                                                  The supported values for [RX_START_THLD] are:
                                                                   0x0 = 1.
                                                                   0x1 = 4.
                                                                   0x2 = 8.
                                                                   0x3 = 16.
                                                                   0x4 = 32.
                                                                   0x5 = 64.
                                                                   0x6 = 128.
                                                                   0x7 = 256. */
        uint32_t reserved_19_23        : 5;
        uint32_t tx_start_thld         : 3;  /**< [ 18: 16](R/W) Transfer Start Threshold Value.

                                                                 When the controller is set up to initiate a write transfer, it waits until the
                                                                 programmed number of entries (or more) are
                                                                 available in its transmit buffer before it initiates the write transfer on the I3C Interface.

                                                                 The following configurable options are provided:

                                                                  - Store and Forward Mode: If the threshold value is set to buffer size, then
                                                                 the controller waits for one of the following to be
                                                                 true to initiate the write command:
                                                                  -- Entire Transmit FIFO to be full if the data length is more than buffer size
                                                                  -- The data length number of locations are filled  in the Transmit FIFO if data
                                                                 length is smaller than the buffer size.
                                                                  - Threshold Mode: In this case, if the threshold value is less than buffer
                                                                 size, then the controller initiates the write command
                                                                  as soon as the programmed locations are filled in the Transmit FIFO.

                                                                  The supported values for [TX_START_THLD] are:
                                                                   0x0 = 1.
                                                                   0x1 = 4.
                                                                   0x2 = 8.
                                                                   0x3 = 16.
                                                                   0x4 = 32.
                                                                   0x5 = 64.
                                                                   0x6 = 128.
                                                                   0x7 = 256. */
        uint32_t reserved_11_15        : 5;
        uint32_t rx_buf_thld           : 3;  /**< [ 10:  8](R/W) Receive Buffer Threshold Value.

                                                                 Controls the number of entries (or above) in the Receive FIFO that trigger the
                                                                 RX_THLD_STAT interrupt.

                                                                 If the programmed value is greater than the buffer depth, then threshold is set to IC_RX_BUF_DEPTH.
                                                                 The supported values for [RX_BUF_THLD] are:
                                                                   0x0 = 1.
                                                                   0x1 = 4.
                                                                   0x2 = 8.
                                                                   0x3 = 16.
                                                                   0x4 = 32.
                                                                   0x5 = 64.
                                                                   0x6 = 128.
                                                                   0x7 = 256. */
        uint32_t reserved_3_7          : 5;
        uint32_t tx_buf_thld           : 3;  /**< [  2:  0](R/W) Transmit Buffer Threshold Value.

                                                                 Controls the number of empty locations (or above) in the Transmit FIFO that
                                                                 trigger the TX_THLD_STAT interrupt.

                                                                 If the programmed value is greater than the buffer depth, then threshold is set to IC_TX_BUF_DEPTH.
                                                                 The supported values for [TX_BUF_THLD] are:
                                                                   0x0 = 1.
                                                                   0x1 = 4.
                                                                   0x2 = 8.
                                                                   0x3 = 16.
                                                                   0x4 = 32.
                                                                   0x5 = 64.
                                                                   0x6 = 128.
                                                                   0x7 = 256. */
#else /* Word 0 - Little Endian */
        uint32_t tx_buf_thld           : 3;  /**< [  2:  0](R/W) Transmit Buffer Threshold Value.

                                                                 Controls the number of empty locations (or above) in the Transmit FIFO that
                                                                 trigger the TX_THLD_STAT interrupt.

                                                                 If the programmed value is greater than the buffer depth, then threshold is set to IC_TX_BUF_DEPTH.
                                                                 The supported values for [TX_BUF_THLD] are:
                                                                   0x0 = 1.
                                                                   0x1 = 4.
                                                                   0x2 = 8.
                                                                   0x3 = 16.
                                                                   0x4 = 32.
                                                                   0x5 = 64.
                                                                   0x6 = 128.
                                                                   0x7 = 256. */
        uint32_t reserved_3_7          : 5;
        uint32_t rx_buf_thld           : 3;  /**< [ 10:  8](R/W) Receive Buffer Threshold Value.

                                                                 Controls the number of entries (or above) in the Receive FIFO that trigger the
                                                                 RX_THLD_STAT interrupt.

                                                                 If the programmed value is greater than the buffer depth, then threshold is set to IC_RX_BUF_DEPTH.
                                                                 The supported values for [RX_BUF_THLD] are:
                                                                   0x0 = 1.
                                                                   0x1 = 4.
                                                                   0x2 = 8.
                                                                   0x3 = 16.
                                                                   0x4 = 32.
                                                                   0x5 = 64.
                                                                   0x6 = 128.
                                                                   0x7 = 256. */
        uint32_t reserved_11_15        : 5;
        uint32_t tx_start_thld         : 3;  /**< [ 18: 16](R/W) Transfer Start Threshold Value.

                                                                 When the controller is set up to initiate a write transfer, it waits until the
                                                                 programmed number of entries (or more) are
                                                                 available in its transmit buffer before it initiates the write transfer on the I3C Interface.

                                                                 The following configurable options are provided:

                                                                  - Store and Forward Mode: If the threshold value is set to buffer size, then
                                                                 the controller waits for one of the following to be
                                                                 true to initiate the write command:
                                                                  -- Entire Transmit FIFO to be full if the data length is more than buffer size
                                                                  -- The data length number of locations are filled  in the Transmit FIFO if data
                                                                 length is smaller than the buffer size.
                                                                  - Threshold Mode: In this case, if the threshold value is less than buffer
                                                                 size, then the controller initiates the write command
                                                                  as soon as the programmed locations are filled in the Transmit FIFO.

                                                                  The supported values for [TX_START_THLD] are:
                                                                   0x0 = 1.
                                                                   0x1 = 4.
                                                                   0x2 = 8.
                                                                   0x3 = 16.
                                                                   0x4 = 32.
                                                                   0x5 = 64.
                                                                   0x6 = 128.
                                                                   0x7 = 256. */
        uint32_t reserved_19_23        : 5;
        uint32_t rx_start_thld         : 3;  /**< [ 26: 24](R/W) Receive Start Threshold Value

                                                                 When the controller is set up to initiate a read transfer, it waits until the
                                                                 programmed number of empty locations (or more) are
                                                                 available in its receive buffer before it initiates the read transfer on the I3C Interface.

                                                                 The following configurable options are provided:
                                                                  - Store and Forward Mode: If the threshold value is set to buffer size, then
                                                                 the controller waits for one of the following to be
                                                                  true to initiate the read command:
                                                                  -- Entire Receive FIFO to be empty if the data length is more than buffer size
                                                                  -- The data length number of locations to be empty  in the Receive FIFO if data
                                                                 length is smaller than the buffer size.
                                                                  - Threshold Mode: In this case, if the threshold value is less than buffer
                                                                 size, then the controller initiates the read command
                                                                  as soon as the programmed locations are empty  in the Receive FIFO.

                                                                  The supported values for [RX_START_THLD] are:
                                                                   0x0 = 1.
                                                                   0x1 = 4.
                                                                   0x2 = 8.
                                                                   0x3 = 16.
                                                                   0x4 = 32.
                                                                   0x5 = 64.
                                                                   0x6 = 128.
                                                                   0x7 = 256. */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_data_buffer_thld_ctrl_s cn; */
};
typedef union cavm_i3c_data_buffer_thld_ctrl cavm_i3c_data_buffer_thld_ctrl_t;

#define CAVM_I3C_DATA_BUFFER_THLD_CTRL CAVM_I3C_DATA_BUFFER_THLD_CTRL_FUNC()
static inline uint64_t CAVM_I3C_DATA_BUFFER_THLD_CTRL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DATA_BUFFER_THLD_CTRL_FUNC(void)
{
    return 0x87e0d0000314ll;
}

#define typedef_CAVM_I3C_DATA_BUFFER_THLD_CTRL cavm_i3c_data_buffer_thld_ctrl_t
#define bustype_CAVM_I3C_DATA_BUFFER_THLD_CTRL CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DATA_BUFFER_THLD_CTRL "I3C_DATA_BUFFER_THLD_CTRL"
#define device_bar_CAVM_I3C_DATA_BUFFER_THLD_CTRL 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DATA_BUFFER_THLD_CTRL 0
#define arguments_CAVM_I3C_DATA_BUFFER_THLD_CTRL -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dct_section_offset
 *
 * I3C Ext Dct Section Offset Register
 * The Device Characteristics Table Section Offset register holds the offset and size
 * of the DCT table.
 */
union cavm_i3c_dct_section_offset
{
    uint32_t u;
    struct cavm_i3c_dct_section_offset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_20_31        : 12;
        uint32_t table_index           : 1;  /**< [ 19: 19](R/W) DCT Table Index. Current index of the DCT, which is used as the starting index
                                                                 for the I3C ENTDAA CCC. Once the complete characteristics of device that won the
                                                                 arbitration are written to the DCT (during ENTDAA using Address Assignment
                                                                 Command) this index is incremented by 1. If needed, the software may override
                                                                 starting DCT index by setting this field. */
        uint32_t table_size            : 7;  /**< [ 18: 12](RO/H) DCT Table Size.
                                                                 Size of the DCT, in DWORDs. */
        uint32_t table_offset          : 12; /**< [ 11:  0](RO/H) DCT Table Offset.
                                                                 Offset of the DCT relative to the BASE address of the current HCI.
                                                                 If the Host Controller does not support implementing the DCT in registers,
                                                                 thereby forcing the Software to provide the Device Context, then it should
                                                                 indicate this by providing this field to 12'h000. */
#else /* Word 0 - Little Endian */
        uint32_t table_offset          : 12; /**< [ 11:  0](RO/H) DCT Table Offset.
                                                                 Offset of the DCT relative to the BASE address of the current HCI.
                                                                 If the Host Controller does not support implementing the DCT in registers,
                                                                 thereby forcing the Software to provide the Device Context, then it should
                                                                 indicate this by providing this field to 12'h000. */
        uint32_t table_size            : 7;  /**< [ 18: 12](RO/H) DCT Table Size.
                                                                 Size of the DCT, in DWORDs. */
        uint32_t table_index           : 1;  /**< [ 19: 19](R/W) DCT Table Index. Current index of the DCT, which is used as the starting index
                                                                 for the I3C ENTDAA CCC. Once the complete characteristics of device that won the
                                                                 arbitration are written to the DCT (during ENTDAA using Address Assignment
                                                                 Command) this index is incremented by 1. If needed, the software may override
                                                                 starting DCT index by setting this field. */
        uint32_t reserved_20_31        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dct_section_offset_s cn; */
};
typedef union cavm_i3c_dct_section_offset cavm_i3c_dct_section_offset_t;

#define CAVM_I3C_DCT_SECTION_OFFSET CAVM_I3C_DCT_SECTION_OFFSET_FUNC()
static inline uint64_t CAVM_I3C_DCT_SECTION_OFFSET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DCT_SECTION_OFFSET_FUNC(void)
{
    return 0x87e0d0000034ll;
}

#define typedef_CAVM_I3C_DCT_SECTION_OFFSET cavm_i3c_dct_section_offset_t
#define bustype_CAVM_I3C_DCT_SECTION_OFFSET CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DCT_SECTION_OFFSET "I3C_DCT_SECTION_OFFSET"
#define device_bar_CAVM_I3C_DCT_SECTION_OFFSET 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DCT_SECTION_OFFSET 0
#define arguments_CAVM_I3C_DCT_SECTION_OFFSET -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev0_addr_table_loc1
 *
 * I3C Ext Dev0 Addr Table1 Loc1 Register
 * Device Address Table Location 1 of Device1 through Device11.
 */
union cavm_i3c_dev0_addr_table_loc1
{
    uint32_t u;
    struct cavm_i3c_dev0_addr_table_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                  0 = I3C.
                                                                  1 = I2C. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.

                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.

                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initiated by the Master. */
        uint32_t ring_id               : 3;  /**< [ 28: 26](R/W) Ring group identification. This field is used to put IBI from specific device to
                                                                 appropriate ring bundle. */
        uint32_t reserved_24_25        : 2;
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 The MSB, bit[23], should be programmed with parity of dynamic address. */
        uint32_t ts                    : 1;  /**< [ 15: 15](R/W) Marker for Timestamping IBI for specific device. Whether IBI was timestamped or not is provided
                                                                 in IBI Status Descriptor. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  - 0x0 - Accept: ACK the Master Request
                                                                  - 0x1 - Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  - 0x0 - Accept: ACK the SIR
                                                                  - 0x1 - Reject: NACK the SIR and send auto disable CCC. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  - 0x0 - IBI Without Mandatory Byte
                                                                  - 0x1 - IBI with one or more Mandatory Bytes. */
        uint32_t reserved_7_11         : 5;
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
#else /* Word 0 - Little Endian */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
        uint32_t reserved_7_11         : 5;
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  - 0x0 - IBI Without Mandatory Byte
                                                                  - 0x1 - IBI with one or more Mandatory Bytes. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  - 0x0 - Accept: ACK the SIR
                                                                  - 0x1 - Reject: NACK the SIR and send auto disable CCC. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  - 0x0 - Accept: ACK the Master Request
                                                                  - 0x1 - Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t ts                    : 1;  /**< [ 15: 15](R/W) Marker for Timestamping IBI for specific device. Whether IBI was timestamped or not is provided
                                                                 in IBI Status Descriptor. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 The MSB, bit[23], should be programmed with parity of dynamic address. */
        uint32_t reserved_24_25        : 2;
        uint32_t ring_id               : 3;  /**< [ 28: 26](R/W) Ring group identification. This field is used to put IBI from specific device to
                                                                 appropriate ring bundle. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.

                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.

                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initiated by the Master. */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                  0 = I3C.
                                                                  1 = I2C. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev0_addr_table_loc1_s cn; */
};
typedef union cavm_i3c_dev0_addr_table_loc1 cavm_i3c_dev0_addr_table_loc1_t;

#define CAVM_I3C_DEV0_ADDR_TABLE_LOC1 CAVM_I3C_DEV0_ADDR_TABLE_LOC1_FUNC()
static inline uint64_t CAVM_I3C_DEV0_ADDR_TABLE_LOC1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV0_ADDR_TABLE_LOC1_FUNC(void)
{
    return 0x87e0d0000400ll;
}

#define typedef_CAVM_I3C_DEV0_ADDR_TABLE_LOC1 cavm_i3c_dev0_addr_table_loc1_t
#define bustype_CAVM_I3C_DEV0_ADDR_TABLE_LOC1 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV0_ADDR_TABLE_LOC1 "I3C_DEV0_ADDR_TABLE_LOC1"
#define device_bar_CAVM_I3C_DEV0_ADDR_TABLE_LOC1 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV0_ADDR_TABLE_LOC1 0
#define arguments_CAVM_I3C_DEV0_ADDR_TABLE_LOC1 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev0_addr_table_loc2
 *
 * I3C Ext Dev0 Addr Table1 Loc2 Register
 * Device Address Table Location 2 of Device1 through Device11.
 */
union cavm_i3c_dev0_addr_table_loc2
{
    uint32_t u;
    struct cavm_i3c_dev0_addr_table_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t autocmd_hdr_code      : 8;  /**< [ 26: 19](R/W) Auto command HDR code */
        uint32_t autocmd_mode          : 3;  /**< [ 18: 16](R/W) Mode of automatic Read transaction on the Bus (Auto Command feature). */
        uint32_t autocmd_value         : 8;  /**< [ 15:  8](R/W) Value of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_mask          : 8;  /**< [  7:  0](R/W) Mask of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
#else /* Word 0 - Little Endian */
        uint32_t autocmd_mask          : 8;  /**< [  7:  0](R/W) Mask of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_value         : 8;  /**< [ 15:  8](R/W) Value of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_mode          : 3;  /**< [ 18: 16](R/W) Mode of automatic Read transaction on the Bus (Auto Command feature). */
        uint32_t autocmd_hdr_code      : 8;  /**< [ 26: 19](R/W) Auto command HDR code */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev0_addr_table_loc2_s cn; */
};
typedef union cavm_i3c_dev0_addr_table_loc2 cavm_i3c_dev0_addr_table_loc2_t;

#define CAVM_I3C_DEV0_ADDR_TABLE_LOC2 CAVM_I3C_DEV0_ADDR_TABLE_LOC2_FUNC()
static inline uint64_t CAVM_I3C_DEV0_ADDR_TABLE_LOC2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV0_ADDR_TABLE_LOC2_FUNC(void)
{
    return 0x87e0d0000404ll;
}

#define typedef_CAVM_I3C_DEV0_ADDR_TABLE_LOC2 cavm_i3c_dev0_addr_table_loc2_t
#define bustype_CAVM_I3C_DEV0_ADDR_TABLE_LOC2 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV0_ADDR_TABLE_LOC2 "I3C_DEV0_ADDR_TABLE_LOC2"
#define device_bar_CAVM_I3C_DEV0_ADDR_TABLE_LOC2 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV0_ADDR_TABLE_LOC2 0
#define arguments_CAVM_I3C_DEV0_ADDR_TABLE_LOC2 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev0_char_table_loc1
 *
 * I3C Ext Dev0 Char Table1 Loc1 Register
 * Device Characteristic Table Location-1 of Device1 through Device11
 */
union cavm_i3c_dev0_char_table_loc1
{
    uint32_t u;
    struct cavm_i3c_dev0_char_table_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t msb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev0_char_table_loc1_s cn; */
};
typedef union cavm_i3c_dev0_char_table_loc1 cavm_i3c_dev0_char_table_loc1_t;

#define CAVM_I3C_DEV0_CHAR_TABLE_LOC1 CAVM_I3C_DEV0_CHAR_TABLE_LOC1_FUNC()
static inline uint64_t CAVM_I3C_DEV0_CHAR_TABLE_LOC1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV0_CHAR_TABLE_LOC1_FUNC(void)
{
    return 0x87e0d0000600ll;
}

#define typedef_CAVM_I3C_DEV0_CHAR_TABLE_LOC1 cavm_i3c_dev0_char_table_loc1_t
#define bustype_CAVM_I3C_DEV0_CHAR_TABLE_LOC1 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV0_CHAR_TABLE_LOC1 "I3C_DEV0_CHAR_TABLE_LOC1"
#define device_bar_CAVM_I3C_DEV0_CHAR_TABLE_LOC1 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV0_CHAR_TABLE_LOC1 0
#define arguments_CAVM_I3C_DEV0_CHAR_TABLE_LOC1 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev0_char_table_loc2
 *
 * I3C Ext Dev0 Char Table1 Loc2 Register
 * Device Characteristic Table Location-2 of Device1 through Device11
 */
union cavm_i3c_dev0_char_table_loc2
{
    uint32_t u;
    struct cavm_i3c_dev0_char_table_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t lsb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t lsb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev0_char_table_loc2_s cn; */
};
typedef union cavm_i3c_dev0_char_table_loc2 cavm_i3c_dev0_char_table_loc2_t;

#define CAVM_I3C_DEV0_CHAR_TABLE_LOC2 CAVM_I3C_DEV0_CHAR_TABLE_LOC2_FUNC()
static inline uint64_t CAVM_I3C_DEV0_CHAR_TABLE_LOC2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV0_CHAR_TABLE_LOC2_FUNC(void)
{
    return 0x87e0d0000604ll;
}

#define typedef_CAVM_I3C_DEV0_CHAR_TABLE_LOC2 cavm_i3c_dev0_char_table_loc2_t
#define bustype_CAVM_I3C_DEV0_CHAR_TABLE_LOC2 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV0_CHAR_TABLE_LOC2 "I3C_DEV0_CHAR_TABLE_LOC2"
#define device_bar_CAVM_I3C_DEV0_CHAR_TABLE_LOC2 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV0_CHAR_TABLE_LOC2 0
#define arguments_CAVM_I3C_DEV0_CHAR_TABLE_LOC2 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev0_char_table_loc3
 *
 * I3C Ext Dev0 Char Table1 Loc3 Register
 * Device Characteristic Table Location-3 of Device1 through Device11
 */
union cavm_i3c_dev0_char_table_loc3
{
    uint32_t u;
    struct cavm_i3c_dev0_char_table_loc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
#else /* Word 0 - Little Endian */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev0_char_table_loc3_s cn; */
};
typedef union cavm_i3c_dev0_char_table_loc3 cavm_i3c_dev0_char_table_loc3_t;

#define CAVM_I3C_DEV0_CHAR_TABLE_LOC3 CAVM_I3C_DEV0_CHAR_TABLE_LOC3_FUNC()
static inline uint64_t CAVM_I3C_DEV0_CHAR_TABLE_LOC3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV0_CHAR_TABLE_LOC3_FUNC(void)
{
    return 0x87e0d0000608ll;
}

#define typedef_CAVM_I3C_DEV0_CHAR_TABLE_LOC3 cavm_i3c_dev0_char_table_loc3_t
#define bustype_CAVM_I3C_DEV0_CHAR_TABLE_LOC3 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV0_CHAR_TABLE_LOC3 "I3C_DEV0_CHAR_TABLE_LOC3"
#define device_bar_CAVM_I3C_DEV0_CHAR_TABLE_LOC3 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV0_CHAR_TABLE_LOC3 0
#define arguments_CAVM_I3C_DEV0_CHAR_TABLE_LOC3 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev0_char_table_loc4
 *
 * I3C Ext Dev0 Char Table1 Loc4 Register
 * Device Characteristic Table Location-4 of Device1 through Device11
 */
union cavm_i3c_dev0_char_table_loc4
{
    uint32_t u;
    struct cavm_i3c_dev0_char_table_loc4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
#else /* Word 0 - Little Endian */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev0_char_table_loc4_s cn; */
};
typedef union cavm_i3c_dev0_char_table_loc4 cavm_i3c_dev0_char_table_loc4_t;

#define CAVM_I3C_DEV0_CHAR_TABLE_LOC4 CAVM_I3C_DEV0_CHAR_TABLE_LOC4_FUNC()
static inline uint64_t CAVM_I3C_DEV0_CHAR_TABLE_LOC4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV0_CHAR_TABLE_LOC4_FUNC(void)
{
    return 0x87e0d000060cll;
}

#define typedef_CAVM_I3C_DEV0_CHAR_TABLE_LOC4 cavm_i3c_dev0_char_table_loc4_t
#define bustype_CAVM_I3C_DEV0_CHAR_TABLE_LOC4 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV0_CHAR_TABLE_LOC4 "I3C_DEV0_CHAR_TABLE_LOC4"
#define device_bar_CAVM_I3C_DEV0_CHAR_TABLE_LOC4 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV0_CHAR_TABLE_LOC4 0
#define arguments_CAVM_I3C_DEV0_CHAR_TABLE_LOC4 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev10_addr_table_loc1
 *
 * I3C Ext Dev10 Addr Table1 Loc1 Register
 * Device Address Table Location 1 of Device1 through Device11.
 */
union cavm_i3c_dev10_addr_table_loc1
{
    uint32_t u;
    struct cavm_i3c_dev10_addr_table_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                  0 = I3C.
                                                                  1 = I2C. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.

                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.

                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initiated by the Master. */
        uint32_t ring_id               : 3;  /**< [ 28: 26](R/W) Ring group identification. This field is used to put IBI from specific device to
                                                                 appropriate ring bundle. */
        uint32_t reserved_24_25        : 2;
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 The MSB, bit[23], should be programmed with parity of dynamic address. */
        uint32_t ts                    : 1;  /**< [ 15: 15](R/W) Marker for Timestamping IBI for specific device. Whether IBI was timestamped or not is provided
                                                                 in IBI Status Descriptor. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  - 0x0 - Accept: ACK the Master Request
                                                                  - 0x1 - Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  - 0x0 - Accept: ACK the SIR
                                                                  - 0x1 - Reject: NACK the SIR and send auto disable CCC. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  - 0x0 - IBI Without Mandatory Byte
                                                                  - 0x1 - IBI with one or more Mandatory Bytes. */
        uint32_t reserved_7_11         : 5;
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
#else /* Word 0 - Little Endian */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
        uint32_t reserved_7_11         : 5;
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  - 0x0 - IBI Without Mandatory Byte
                                                                  - 0x1 - IBI with one or more Mandatory Bytes. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  - 0x0 - Accept: ACK the SIR
                                                                  - 0x1 - Reject: NACK the SIR and send auto disable CCC. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  - 0x0 - Accept: ACK the Master Request
                                                                  - 0x1 - Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t ts                    : 1;  /**< [ 15: 15](R/W) Marker for Timestamping IBI for specific device. Whether IBI was timestamped or not is provided
                                                                 in IBI Status Descriptor. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 The MSB, bit[23], should be programmed with parity of dynamic address. */
        uint32_t reserved_24_25        : 2;
        uint32_t ring_id               : 3;  /**< [ 28: 26](R/W) Ring group identification. This field is used to put IBI from specific device to
                                                                 appropriate ring bundle. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.

                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.

                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initiated by the Master. */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                  0 = I3C.
                                                                  1 = I2C. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev10_addr_table_loc1_s cn; */
};
typedef union cavm_i3c_dev10_addr_table_loc1 cavm_i3c_dev10_addr_table_loc1_t;

#define CAVM_I3C_DEV10_ADDR_TABLE_LOC1 CAVM_I3C_DEV10_ADDR_TABLE_LOC1_FUNC()
static inline uint64_t CAVM_I3C_DEV10_ADDR_TABLE_LOC1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV10_ADDR_TABLE_LOC1_FUNC(void)
{
    return 0x87e0d0000450ll;
}

#define typedef_CAVM_I3C_DEV10_ADDR_TABLE_LOC1 cavm_i3c_dev10_addr_table_loc1_t
#define bustype_CAVM_I3C_DEV10_ADDR_TABLE_LOC1 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV10_ADDR_TABLE_LOC1 "I3C_DEV10_ADDR_TABLE_LOC1"
#define device_bar_CAVM_I3C_DEV10_ADDR_TABLE_LOC1 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV10_ADDR_TABLE_LOC1 0
#define arguments_CAVM_I3C_DEV10_ADDR_TABLE_LOC1 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev10_addr_table_loc2
 *
 * I3C Ext Dev10 Addr Table1 Loc2 Register
 * Device Address Table Location 2 of Device1 through Device11.
 */
union cavm_i3c_dev10_addr_table_loc2
{
    uint32_t u;
    struct cavm_i3c_dev10_addr_table_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t autocmd_hdr_code      : 8;  /**< [ 26: 19](R/W) Auto command HDR code */
        uint32_t autocmd_mode          : 3;  /**< [ 18: 16](R/W) Mode of automatic Read transaction on the Bus (Auto Command feature). */
        uint32_t autocmd_value         : 8;  /**< [ 15:  8](R/W) Value of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_mask          : 8;  /**< [  7:  0](R/W) Mask of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
#else /* Word 0 - Little Endian */
        uint32_t autocmd_mask          : 8;  /**< [  7:  0](R/W) Mask of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_value         : 8;  /**< [ 15:  8](R/W) Value of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_mode          : 3;  /**< [ 18: 16](R/W) Mode of automatic Read transaction on the Bus (Auto Command feature). */
        uint32_t autocmd_hdr_code      : 8;  /**< [ 26: 19](R/W) Auto command HDR code */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev10_addr_table_loc2_s cn; */
};
typedef union cavm_i3c_dev10_addr_table_loc2 cavm_i3c_dev10_addr_table_loc2_t;

#define CAVM_I3C_DEV10_ADDR_TABLE_LOC2 CAVM_I3C_DEV10_ADDR_TABLE_LOC2_FUNC()
static inline uint64_t CAVM_I3C_DEV10_ADDR_TABLE_LOC2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV10_ADDR_TABLE_LOC2_FUNC(void)
{
    return 0x87e0d0000454ll;
}

#define typedef_CAVM_I3C_DEV10_ADDR_TABLE_LOC2 cavm_i3c_dev10_addr_table_loc2_t
#define bustype_CAVM_I3C_DEV10_ADDR_TABLE_LOC2 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV10_ADDR_TABLE_LOC2 "I3C_DEV10_ADDR_TABLE_LOC2"
#define device_bar_CAVM_I3C_DEV10_ADDR_TABLE_LOC2 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV10_ADDR_TABLE_LOC2 0
#define arguments_CAVM_I3C_DEV10_ADDR_TABLE_LOC2 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev10_char_table_loc1
 *
 * I3C Ext Dev10 Char Table1 Loc1 Register
 * Device Characteristic Table Location-1 of Device1 through Device11
 */
union cavm_i3c_dev10_char_table_loc1
{
    uint32_t u;
    struct cavm_i3c_dev10_char_table_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t msb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev10_char_table_loc1_s cn; */
};
typedef union cavm_i3c_dev10_char_table_loc1 cavm_i3c_dev10_char_table_loc1_t;

#define CAVM_I3C_DEV10_CHAR_TABLE_LOC1 CAVM_I3C_DEV10_CHAR_TABLE_LOC1_FUNC()
static inline uint64_t CAVM_I3C_DEV10_CHAR_TABLE_LOC1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV10_CHAR_TABLE_LOC1_FUNC(void)
{
    return 0x87e0d00006a0ll;
}

#define typedef_CAVM_I3C_DEV10_CHAR_TABLE_LOC1 cavm_i3c_dev10_char_table_loc1_t
#define bustype_CAVM_I3C_DEV10_CHAR_TABLE_LOC1 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV10_CHAR_TABLE_LOC1 "I3C_DEV10_CHAR_TABLE_LOC1"
#define device_bar_CAVM_I3C_DEV10_CHAR_TABLE_LOC1 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV10_CHAR_TABLE_LOC1 0
#define arguments_CAVM_I3C_DEV10_CHAR_TABLE_LOC1 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev10_char_table_loc2
 *
 * I3C Ext Dev10 Char Table1 Loc2 Register
 * Device Characteristic Table Location-2 of Device1 through Device11
 */
union cavm_i3c_dev10_char_table_loc2
{
    uint32_t u;
    struct cavm_i3c_dev10_char_table_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t lsb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t lsb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev10_char_table_loc2_s cn; */
};
typedef union cavm_i3c_dev10_char_table_loc2 cavm_i3c_dev10_char_table_loc2_t;

#define CAVM_I3C_DEV10_CHAR_TABLE_LOC2 CAVM_I3C_DEV10_CHAR_TABLE_LOC2_FUNC()
static inline uint64_t CAVM_I3C_DEV10_CHAR_TABLE_LOC2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV10_CHAR_TABLE_LOC2_FUNC(void)
{
    return 0x87e0d00006a4ll;
}

#define typedef_CAVM_I3C_DEV10_CHAR_TABLE_LOC2 cavm_i3c_dev10_char_table_loc2_t
#define bustype_CAVM_I3C_DEV10_CHAR_TABLE_LOC2 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV10_CHAR_TABLE_LOC2 "I3C_DEV10_CHAR_TABLE_LOC2"
#define device_bar_CAVM_I3C_DEV10_CHAR_TABLE_LOC2 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV10_CHAR_TABLE_LOC2 0
#define arguments_CAVM_I3C_DEV10_CHAR_TABLE_LOC2 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev10_char_table_loc3
 *
 * I3C Ext Dev10 Char Table1 Loc3 Register
 * Device Characteristic Table Location-3 of Device1 through Device11
 */
union cavm_i3c_dev10_char_table_loc3
{
    uint32_t u;
    struct cavm_i3c_dev10_char_table_loc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
#else /* Word 0 - Little Endian */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev10_char_table_loc3_s cn; */
};
typedef union cavm_i3c_dev10_char_table_loc3 cavm_i3c_dev10_char_table_loc3_t;

#define CAVM_I3C_DEV10_CHAR_TABLE_LOC3 CAVM_I3C_DEV10_CHAR_TABLE_LOC3_FUNC()
static inline uint64_t CAVM_I3C_DEV10_CHAR_TABLE_LOC3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV10_CHAR_TABLE_LOC3_FUNC(void)
{
    return 0x87e0d00006a8ll;
}

#define typedef_CAVM_I3C_DEV10_CHAR_TABLE_LOC3 cavm_i3c_dev10_char_table_loc3_t
#define bustype_CAVM_I3C_DEV10_CHAR_TABLE_LOC3 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV10_CHAR_TABLE_LOC3 "I3C_DEV10_CHAR_TABLE_LOC3"
#define device_bar_CAVM_I3C_DEV10_CHAR_TABLE_LOC3 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV10_CHAR_TABLE_LOC3 0
#define arguments_CAVM_I3C_DEV10_CHAR_TABLE_LOC3 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev10_char_table_loc4
 *
 * I3C Ext Dev10 Char Table1 Loc4 Register
 * Device Characteristic Table Location-4 of Device1 through Device11
 */
union cavm_i3c_dev10_char_table_loc4
{
    uint32_t u;
    struct cavm_i3c_dev10_char_table_loc4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
#else /* Word 0 - Little Endian */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev10_char_table_loc4_s cn; */
};
typedef union cavm_i3c_dev10_char_table_loc4 cavm_i3c_dev10_char_table_loc4_t;

#define CAVM_I3C_DEV10_CHAR_TABLE_LOC4 CAVM_I3C_DEV10_CHAR_TABLE_LOC4_FUNC()
static inline uint64_t CAVM_I3C_DEV10_CHAR_TABLE_LOC4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV10_CHAR_TABLE_LOC4_FUNC(void)
{
    return 0x87e0d00006acll;
}

#define typedef_CAVM_I3C_DEV10_CHAR_TABLE_LOC4 cavm_i3c_dev10_char_table_loc4_t
#define bustype_CAVM_I3C_DEV10_CHAR_TABLE_LOC4 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV10_CHAR_TABLE_LOC4 "I3C_DEV10_CHAR_TABLE_LOC4"
#define device_bar_CAVM_I3C_DEV10_CHAR_TABLE_LOC4 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV10_CHAR_TABLE_LOC4 0
#define arguments_CAVM_I3C_DEV10_CHAR_TABLE_LOC4 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev1_addr_table_loc1
 *
 * I3C Ext Dev1 Addr Table1 Loc1 Register
 * Device Address Table Location 1 of Device1 through Device11.
 */
union cavm_i3c_dev1_addr_table_loc1
{
    uint32_t u;
    struct cavm_i3c_dev1_addr_table_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                  0 = I3C.
                                                                  1 = I2C. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.

                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.

                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initiated by the Master. */
        uint32_t ring_id               : 3;  /**< [ 28: 26](R/W) Ring group identification. This field is used to put IBI from specific device to
                                                                 appropriate ring bundle. */
        uint32_t reserved_24_25        : 2;
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 The MSB, bit[23], should be programmed with parity of dynamic address. */
        uint32_t ts                    : 1;  /**< [ 15: 15](R/W) Marker for Timestamping IBI for specific device. Whether IBI was timestamped or not is provided
                                                                 in IBI Status Descriptor. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  - 0x0 - Accept: ACK the Master Request
                                                                  - 0x1 - Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  - 0x0 - Accept: ACK the SIR
                                                                  - 0x1 - Reject: NACK the SIR and send auto disable CCC. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  - 0x0 - IBI Without Mandatory Byte
                                                                  - 0x1 - IBI with one or more Mandatory Bytes. */
        uint32_t reserved_7_11         : 5;
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
#else /* Word 0 - Little Endian */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
        uint32_t reserved_7_11         : 5;
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  - 0x0 - IBI Without Mandatory Byte
                                                                  - 0x1 - IBI with one or more Mandatory Bytes. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  - 0x0 - Accept: ACK the SIR
                                                                  - 0x1 - Reject: NACK the SIR and send auto disable CCC. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  - 0x0 - Accept: ACK the Master Request
                                                                  - 0x1 - Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t ts                    : 1;  /**< [ 15: 15](R/W) Marker for Timestamping IBI for specific device. Whether IBI was timestamped or not is provided
                                                                 in IBI Status Descriptor. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 The MSB, bit[23], should be programmed with parity of dynamic address. */
        uint32_t reserved_24_25        : 2;
        uint32_t ring_id               : 3;  /**< [ 28: 26](R/W) Ring group identification. This field is used to put IBI from specific device to
                                                                 appropriate ring bundle. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.

                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.

                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initiated by the Master. */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                  0 = I3C.
                                                                  1 = I2C. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev1_addr_table_loc1_s cn; */
};
typedef union cavm_i3c_dev1_addr_table_loc1 cavm_i3c_dev1_addr_table_loc1_t;

#define CAVM_I3C_DEV1_ADDR_TABLE_LOC1 CAVM_I3C_DEV1_ADDR_TABLE_LOC1_FUNC()
static inline uint64_t CAVM_I3C_DEV1_ADDR_TABLE_LOC1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV1_ADDR_TABLE_LOC1_FUNC(void)
{
    return 0x87e0d0000408ll;
}

#define typedef_CAVM_I3C_DEV1_ADDR_TABLE_LOC1 cavm_i3c_dev1_addr_table_loc1_t
#define bustype_CAVM_I3C_DEV1_ADDR_TABLE_LOC1 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV1_ADDR_TABLE_LOC1 "I3C_DEV1_ADDR_TABLE_LOC1"
#define device_bar_CAVM_I3C_DEV1_ADDR_TABLE_LOC1 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV1_ADDR_TABLE_LOC1 0
#define arguments_CAVM_I3C_DEV1_ADDR_TABLE_LOC1 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev1_addr_table_loc2
 *
 * I3C Ext Dev1 Addr Table1 Loc2 Register
 * Device Address Table Location 2 of Device1 through Device11.
 */
union cavm_i3c_dev1_addr_table_loc2
{
    uint32_t u;
    struct cavm_i3c_dev1_addr_table_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t autocmd_hdr_code      : 8;  /**< [ 26: 19](R/W) Auto command HDR code */
        uint32_t autocmd_mode          : 3;  /**< [ 18: 16](R/W) Mode of automatic Read transaction on the Bus (Auto Command feature). */
        uint32_t autocmd_value         : 8;  /**< [ 15:  8](R/W) Value of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_mask          : 8;  /**< [  7:  0](R/W) Mask of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
#else /* Word 0 - Little Endian */
        uint32_t autocmd_mask          : 8;  /**< [  7:  0](R/W) Mask of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_value         : 8;  /**< [ 15:  8](R/W) Value of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_mode          : 3;  /**< [ 18: 16](R/W) Mode of automatic Read transaction on the Bus (Auto Command feature). */
        uint32_t autocmd_hdr_code      : 8;  /**< [ 26: 19](R/W) Auto command HDR code */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev1_addr_table_loc2_s cn; */
};
typedef union cavm_i3c_dev1_addr_table_loc2 cavm_i3c_dev1_addr_table_loc2_t;

#define CAVM_I3C_DEV1_ADDR_TABLE_LOC2 CAVM_I3C_DEV1_ADDR_TABLE_LOC2_FUNC()
static inline uint64_t CAVM_I3C_DEV1_ADDR_TABLE_LOC2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV1_ADDR_TABLE_LOC2_FUNC(void)
{
    return 0x87e0d000040cll;
}

#define typedef_CAVM_I3C_DEV1_ADDR_TABLE_LOC2 cavm_i3c_dev1_addr_table_loc2_t
#define bustype_CAVM_I3C_DEV1_ADDR_TABLE_LOC2 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV1_ADDR_TABLE_LOC2 "I3C_DEV1_ADDR_TABLE_LOC2"
#define device_bar_CAVM_I3C_DEV1_ADDR_TABLE_LOC2 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV1_ADDR_TABLE_LOC2 0
#define arguments_CAVM_I3C_DEV1_ADDR_TABLE_LOC2 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev1_char_table_loc1
 *
 * I3C Ext Dev1 Char Table1 Loc1 Register
 * Device Characteristic Table Location-1 of Device1 through Device11
 */
union cavm_i3c_dev1_char_table_loc1
{
    uint32_t u;
    struct cavm_i3c_dev1_char_table_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t msb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev1_char_table_loc1_s cn; */
};
typedef union cavm_i3c_dev1_char_table_loc1 cavm_i3c_dev1_char_table_loc1_t;

#define CAVM_I3C_DEV1_CHAR_TABLE_LOC1 CAVM_I3C_DEV1_CHAR_TABLE_LOC1_FUNC()
static inline uint64_t CAVM_I3C_DEV1_CHAR_TABLE_LOC1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV1_CHAR_TABLE_LOC1_FUNC(void)
{
    return 0x87e0d0000610ll;
}

#define typedef_CAVM_I3C_DEV1_CHAR_TABLE_LOC1 cavm_i3c_dev1_char_table_loc1_t
#define bustype_CAVM_I3C_DEV1_CHAR_TABLE_LOC1 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV1_CHAR_TABLE_LOC1 "I3C_DEV1_CHAR_TABLE_LOC1"
#define device_bar_CAVM_I3C_DEV1_CHAR_TABLE_LOC1 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV1_CHAR_TABLE_LOC1 0
#define arguments_CAVM_I3C_DEV1_CHAR_TABLE_LOC1 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev1_char_table_loc2
 *
 * I3C Ext Dev1 Char Table1 Loc2 Register
 * Device Characteristic Table Location-2 of Device1 through Device11
 */
union cavm_i3c_dev1_char_table_loc2
{
    uint32_t u;
    struct cavm_i3c_dev1_char_table_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t lsb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t lsb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev1_char_table_loc2_s cn; */
};
typedef union cavm_i3c_dev1_char_table_loc2 cavm_i3c_dev1_char_table_loc2_t;

#define CAVM_I3C_DEV1_CHAR_TABLE_LOC2 CAVM_I3C_DEV1_CHAR_TABLE_LOC2_FUNC()
static inline uint64_t CAVM_I3C_DEV1_CHAR_TABLE_LOC2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV1_CHAR_TABLE_LOC2_FUNC(void)
{
    return 0x87e0d0000614ll;
}

#define typedef_CAVM_I3C_DEV1_CHAR_TABLE_LOC2 cavm_i3c_dev1_char_table_loc2_t
#define bustype_CAVM_I3C_DEV1_CHAR_TABLE_LOC2 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV1_CHAR_TABLE_LOC2 "I3C_DEV1_CHAR_TABLE_LOC2"
#define device_bar_CAVM_I3C_DEV1_CHAR_TABLE_LOC2 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV1_CHAR_TABLE_LOC2 0
#define arguments_CAVM_I3C_DEV1_CHAR_TABLE_LOC2 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev1_char_table_loc3
 *
 * I3C Ext Dev1 Char Table1 Loc3 Register
 * Device Characteristic Table Location-3 of Device1 through Device11
 */
union cavm_i3c_dev1_char_table_loc3
{
    uint32_t u;
    struct cavm_i3c_dev1_char_table_loc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
#else /* Word 0 - Little Endian */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev1_char_table_loc3_s cn; */
};
typedef union cavm_i3c_dev1_char_table_loc3 cavm_i3c_dev1_char_table_loc3_t;

#define CAVM_I3C_DEV1_CHAR_TABLE_LOC3 CAVM_I3C_DEV1_CHAR_TABLE_LOC3_FUNC()
static inline uint64_t CAVM_I3C_DEV1_CHAR_TABLE_LOC3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV1_CHAR_TABLE_LOC3_FUNC(void)
{
    return 0x87e0d0000618ll;
}

#define typedef_CAVM_I3C_DEV1_CHAR_TABLE_LOC3 cavm_i3c_dev1_char_table_loc3_t
#define bustype_CAVM_I3C_DEV1_CHAR_TABLE_LOC3 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV1_CHAR_TABLE_LOC3 "I3C_DEV1_CHAR_TABLE_LOC3"
#define device_bar_CAVM_I3C_DEV1_CHAR_TABLE_LOC3 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV1_CHAR_TABLE_LOC3 0
#define arguments_CAVM_I3C_DEV1_CHAR_TABLE_LOC3 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev1_char_table_loc4
 *
 * I3C Ext Dev1 Char Table1 Loc4 Register
 * Device Characteristic Table Location-4 of Device1 through Device11
 */
union cavm_i3c_dev1_char_table_loc4
{
    uint32_t u;
    struct cavm_i3c_dev1_char_table_loc4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
#else /* Word 0 - Little Endian */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev1_char_table_loc4_s cn; */
};
typedef union cavm_i3c_dev1_char_table_loc4 cavm_i3c_dev1_char_table_loc4_t;

#define CAVM_I3C_DEV1_CHAR_TABLE_LOC4 CAVM_I3C_DEV1_CHAR_TABLE_LOC4_FUNC()
static inline uint64_t CAVM_I3C_DEV1_CHAR_TABLE_LOC4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV1_CHAR_TABLE_LOC4_FUNC(void)
{
    return 0x87e0d000061cll;
}

#define typedef_CAVM_I3C_DEV1_CHAR_TABLE_LOC4 cavm_i3c_dev1_char_table_loc4_t
#define bustype_CAVM_I3C_DEV1_CHAR_TABLE_LOC4 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV1_CHAR_TABLE_LOC4 "I3C_DEV1_CHAR_TABLE_LOC4"
#define device_bar_CAVM_I3C_DEV1_CHAR_TABLE_LOC4 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV1_CHAR_TABLE_LOC4 0
#define arguments_CAVM_I3C_DEV1_CHAR_TABLE_LOC4 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev2_addr_table_loc1
 *
 * I3C Ext Dev2 Addr Table1 Loc1 Register
 * Device Address Table Location 1 of Device1 through Device11.
 */
union cavm_i3c_dev2_addr_table_loc1
{
    uint32_t u;
    struct cavm_i3c_dev2_addr_table_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                  0 = I3C.
                                                                  1 = I2C. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.

                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.

                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initiated by the Master. */
        uint32_t ring_id               : 3;  /**< [ 28: 26](R/W) Ring group identification. This field is used to put IBI from specific device to
                                                                 appropriate ring bundle. */
        uint32_t reserved_24_25        : 2;
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 The MSB, bit[23], should be programmed with parity of dynamic address. */
        uint32_t ts                    : 1;  /**< [ 15: 15](R/W) Marker for Timestamping IBI for specific device. Whether IBI was timestamped or not is provided
                                                                 in IBI Status Descriptor. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  - 0x0 - Accept: ACK the Master Request
                                                                  - 0x1 - Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  - 0x0 - Accept: ACK the SIR
                                                                  - 0x1 - Reject: NACK the SIR and send auto disable CCC. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  - 0x0 - IBI Without Mandatory Byte
                                                                  - 0x1 - IBI with one or more Mandatory Bytes. */
        uint32_t reserved_7_11         : 5;
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
#else /* Word 0 - Little Endian */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
        uint32_t reserved_7_11         : 5;
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  - 0x0 - IBI Without Mandatory Byte
                                                                  - 0x1 - IBI with one or more Mandatory Bytes. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  - 0x0 - Accept: ACK the SIR
                                                                  - 0x1 - Reject: NACK the SIR and send auto disable CCC. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  - 0x0 - Accept: ACK the Master Request
                                                                  - 0x1 - Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t ts                    : 1;  /**< [ 15: 15](R/W) Marker for Timestamping IBI for specific device. Whether IBI was timestamped or not is provided
                                                                 in IBI Status Descriptor. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 The MSB, bit[23], should be programmed with parity of dynamic address. */
        uint32_t reserved_24_25        : 2;
        uint32_t ring_id               : 3;  /**< [ 28: 26](R/W) Ring group identification. This field is used to put IBI from specific device to
                                                                 appropriate ring bundle. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.

                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.

                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initiated by the Master. */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                  0 = I3C.
                                                                  1 = I2C. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev2_addr_table_loc1_s cn; */
};
typedef union cavm_i3c_dev2_addr_table_loc1 cavm_i3c_dev2_addr_table_loc1_t;

#define CAVM_I3C_DEV2_ADDR_TABLE_LOC1 CAVM_I3C_DEV2_ADDR_TABLE_LOC1_FUNC()
static inline uint64_t CAVM_I3C_DEV2_ADDR_TABLE_LOC1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV2_ADDR_TABLE_LOC1_FUNC(void)
{
    return 0x87e0d0000410ll;
}

#define typedef_CAVM_I3C_DEV2_ADDR_TABLE_LOC1 cavm_i3c_dev2_addr_table_loc1_t
#define bustype_CAVM_I3C_DEV2_ADDR_TABLE_LOC1 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV2_ADDR_TABLE_LOC1 "I3C_DEV2_ADDR_TABLE_LOC1"
#define device_bar_CAVM_I3C_DEV2_ADDR_TABLE_LOC1 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV2_ADDR_TABLE_LOC1 0
#define arguments_CAVM_I3C_DEV2_ADDR_TABLE_LOC1 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev2_addr_table_loc2
 *
 * I3C Ext Dev2 Addr Table1 Loc2 Register
 * Device Address Table Location 2 of Device1 through Device11.
 */
union cavm_i3c_dev2_addr_table_loc2
{
    uint32_t u;
    struct cavm_i3c_dev2_addr_table_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t autocmd_hdr_code      : 8;  /**< [ 26: 19](R/W) Auto command HDR code */
        uint32_t autocmd_mode          : 3;  /**< [ 18: 16](R/W) Mode of automatic Read transaction on the Bus (Auto Command feature). */
        uint32_t autocmd_value         : 8;  /**< [ 15:  8](R/W) Value of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_mask          : 8;  /**< [  7:  0](R/W) Mask of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
#else /* Word 0 - Little Endian */
        uint32_t autocmd_mask          : 8;  /**< [  7:  0](R/W) Mask of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_value         : 8;  /**< [ 15:  8](R/W) Value of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_mode          : 3;  /**< [ 18: 16](R/W) Mode of automatic Read transaction on the Bus (Auto Command feature). */
        uint32_t autocmd_hdr_code      : 8;  /**< [ 26: 19](R/W) Auto command HDR code */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev2_addr_table_loc2_s cn; */
};
typedef union cavm_i3c_dev2_addr_table_loc2 cavm_i3c_dev2_addr_table_loc2_t;

#define CAVM_I3C_DEV2_ADDR_TABLE_LOC2 CAVM_I3C_DEV2_ADDR_TABLE_LOC2_FUNC()
static inline uint64_t CAVM_I3C_DEV2_ADDR_TABLE_LOC2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV2_ADDR_TABLE_LOC2_FUNC(void)
{
    return 0x87e0d0000414ll;
}

#define typedef_CAVM_I3C_DEV2_ADDR_TABLE_LOC2 cavm_i3c_dev2_addr_table_loc2_t
#define bustype_CAVM_I3C_DEV2_ADDR_TABLE_LOC2 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV2_ADDR_TABLE_LOC2 "I3C_DEV2_ADDR_TABLE_LOC2"
#define device_bar_CAVM_I3C_DEV2_ADDR_TABLE_LOC2 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV2_ADDR_TABLE_LOC2 0
#define arguments_CAVM_I3C_DEV2_ADDR_TABLE_LOC2 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev2_char_table_loc1
 *
 * I3C Ext Dev2 Char Table1 Loc1 Register
 * Device Characteristic Table Location-1 of Device1 through Device11
 */
union cavm_i3c_dev2_char_table_loc1
{
    uint32_t u;
    struct cavm_i3c_dev2_char_table_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t msb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev2_char_table_loc1_s cn; */
};
typedef union cavm_i3c_dev2_char_table_loc1 cavm_i3c_dev2_char_table_loc1_t;

#define CAVM_I3C_DEV2_CHAR_TABLE_LOC1 CAVM_I3C_DEV2_CHAR_TABLE_LOC1_FUNC()
static inline uint64_t CAVM_I3C_DEV2_CHAR_TABLE_LOC1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV2_CHAR_TABLE_LOC1_FUNC(void)
{
    return 0x87e0d0000620ll;
}

#define typedef_CAVM_I3C_DEV2_CHAR_TABLE_LOC1 cavm_i3c_dev2_char_table_loc1_t
#define bustype_CAVM_I3C_DEV2_CHAR_TABLE_LOC1 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV2_CHAR_TABLE_LOC1 "I3C_DEV2_CHAR_TABLE_LOC1"
#define device_bar_CAVM_I3C_DEV2_CHAR_TABLE_LOC1 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV2_CHAR_TABLE_LOC1 0
#define arguments_CAVM_I3C_DEV2_CHAR_TABLE_LOC1 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev2_char_table_loc2
 *
 * I3C Ext Dev2 Char Table1 Loc2 Register
 * Device Characteristic Table Location-2 of Device1 through Device11
 */
union cavm_i3c_dev2_char_table_loc2
{
    uint32_t u;
    struct cavm_i3c_dev2_char_table_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t lsb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t lsb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev2_char_table_loc2_s cn; */
};
typedef union cavm_i3c_dev2_char_table_loc2 cavm_i3c_dev2_char_table_loc2_t;

#define CAVM_I3C_DEV2_CHAR_TABLE_LOC2 CAVM_I3C_DEV2_CHAR_TABLE_LOC2_FUNC()
static inline uint64_t CAVM_I3C_DEV2_CHAR_TABLE_LOC2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV2_CHAR_TABLE_LOC2_FUNC(void)
{
    return 0x87e0d0000624ll;
}

#define typedef_CAVM_I3C_DEV2_CHAR_TABLE_LOC2 cavm_i3c_dev2_char_table_loc2_t
#define bustype_CAVM_I3C_DEV2_CHAR_TABLE_LOC2 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV2_CHAR_TABLE_LOC2 "I3C_DEV2_CHAR_TABLE_LOC2"
#define device_bar_CAVM_I3C_DEV2_CHAR_TABLE_LOC2 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV2_CHAR_TABLE_LOC2 0
#define arguments_CAVM_I3C_DEV2_CHAR_TABLE_LOC2 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev2_char_table_loc3
 *
 * I3C Ext Dev2 Char Table1 Loc3 Register
 * Device Characteristic Table Location-3 of Device1 through Device11
 */
union cavm_i3c_dev2_char_table_loc3
{
    uint32_t u;
    struct cavm_i3c_dev2_char_table_loc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
#else /* Word 0 - Little Endian */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev2_char_table_loc3_s cn; */
};
typedef union cavm_i3c_dev2_char_table_loc3 cavm_i3c_dev2_char_table_loc3_t;

#define CAVM_I3C_DEV2_CHAR_TABLE_LOC3 CAVM_I3C_DEV2_CHAR_TABLE_LOC3_FUNC()
static inline uint64_t CAVM_I3C_DEV2_CHAR_TABLE_LOC3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV2_CHAR_TABLE_LOC3_FUNC(void)
{
    return 0x87e0d0000628ll;
}

#define typedef_CAVM_I3C_DEV2_CHAR_TABLE_LOC3 cavm_i3c_dev2_char_table_loc3_t
#define bustype_CAVM_I3C_DEV2_CHAR_TABLE_LOC3 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV2_CHAR_TABLE_LOC3 "I3C_DEV2_CHAR_TABLE_LOC3"
#define device_bar_CAVM_I3C_DEV2_CHAR_TABLE_LOC3 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV2_CHAR_TABLE_LOC3 0
#define arguments_CAVM_I3C_DEV2_CHAR_TABLE_LOC3 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev2_char_table_loc4
 *
 * I3C Ext Dev2 Char Table1 Loc4 Register
 * Device Characteristic Table Location-4 of Device1 through Device11
 */
union cavm_i3c_dev2_char_table_loc4
{
    uint32_t u;
    struct cavm_i3c_dev2_char_table_loc4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
#else /* Word 0 - Little Endian */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev2_char_table_loc4_s cn; */
};
typedef union cavm_i3c_dev2_char_table_loc4 cavm_i3c_dev2_char_table_loc4_t;

#define CAVM_I3C_DEV2_CHAR_TABLE_LOC4 CAVM_I3C_DEV2_CHAR_TABLE_LOC4_FUNC()
static inline uint64_t CAVM_I3C_DEV2_CHAR_TABLE_LOC4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV2_CHAR_TABLE_LOC4_FUNC(void)
{
    return 0x87e0d000062cll;
}

#define typedef_CAVM_I3C_DEV2_CHAR_TABLE_LOC4 cavm_i3c_dev2_char_table_loc4_t
#define bustype_CAVM_I3C_DEV2_CHAR_TABLE_LOC4 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV2_CHAR_TABLE_LOC4 "I3C_DEV2_CHAR_TABLE_LOC4"
#define device_bar_CAVM_I3C_DEV2_CHAR_TABLE_LOC4 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV2_CHAR_TABLE_LOC4 0
#define arguments_CAVM_I3C_DEV2_CHAR_TABLE_LOC4 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev3_addr_table_loc1
 *
 * I3C Ext Dev3 Addr Table1 Loc1 Register
 * Device Address Table Location 1 of Device1 through Device11.
 */
union cavm_i3c_dev3_addr_table_loc1
{
    uint32_t u;
    struct cavm_i3c_dev3_addr_table_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                  0 = I3C.
                                                                  1 = I2C. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.

                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.

                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initiated by the Master. */
        uint32_t ring_id               : 3;  /**< [ 28: 26](R/W) Ring group identification. This field is used to put IBI from specific device to
                                                                 appropriate ring bundle. */
        uint32_t reserved_24_25        : 2;
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 The MSB, bit[23], should be programmed with parity of dynamic address. */
        uint32_t ts                    : 1;  /**< [ 15: 15](R/W) Marker for Timestamping IBI for specific device. Whether IBI was timestamped or not is provided
                                                                 in IBI Status Descriptor. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  - 0x0 - Accept: ACK the Master Request
                                                                  - 0x1 - Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  - 0x0 - Accept: ACK the SIR
                                                                  - 0x1 - Reject: NACK the SIR and send auto disable CCC. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  - 0x0 - IBI Without Mandatory Byte
                                                                  - 0x1 - IBI with one or more Mandatory Bytes. */
        uint32_t reserved_7_11         : 5;
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
#else /* Word 0 - Little Endian */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
        uint32_t reserved_7_11         : 5;
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  - 0x0 - IBI Without Mandatory Byte
                                                                  - 0x1 - IBI with one or more Mandatory Bytes. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  - 0x0 - Accept: ACK the SIR
                                                                  - 0x1 - Reject: NACK the SIR and send auto disable CCC. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  - 0x0 - Accept: ACK the Master Request
                                                                  - 0x1 - Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t ts                    : 1;  /**< [ 15: 15](R/W) Marker for Timestamping IBI for specific device. Whether IBI was timestamped or not is provided
                                                                 in IBI Status Descriptor. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 The MSB, bit[23], should be programmed with parity of dynamic address. */
        uint32_t reserved_24_25        : 2;
        uint32_t ring_id               : 3;  /**< [ 28: 26](R/W) Ring group identification. This field is used to put IBI from specific device to
                                                                 appropriate ring bundle. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.

                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.

                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initiated by the Master. */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                  0 = I3C.
                                                                  1 = I2C. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev3_addr_table_loc1_s cn; */
};
typedef union cavm_i3c_dev3_addr_table_loc1 cavm_i3c_dev3_addr_table_loc1_t;

#define CAVM_I3C_DEV3_ADDR_TABLE_LOC1 CAVM_I3C_DEV3_ADDR_TABLE_LOC1_FUNC()
static inline uint64_t CAVM_I3C_DEV3_ADDR_TABLE_LOC1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV3_ADDR_TABLE_LOC1_FUNC(void)
{
    return 0x87e0d0000418ll;
}

#define typedef_CAVM_I3C_DEV3_ADDR_TABLE_LOC1 cavm_i3c_dev3_addr_table_loc1_t
#define bustype_CAVM_I3C_DEV3_ADDR_TABLE_LOC1 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV3_ADDR_TABLE_LOC1 "I3C_DEV3_ADDR_TABLE_LOC1"
#define device_bar_CAVM_I3C_DEV3_ADDR_TABLE_LOC1 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV3_ADDR_TABLE_LOC1 0
#define arguments_CAVM_I3C_DEV3_ADDR_TABLE_LOC1 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev3_addr_table_loc2
 *
 * I3C Ext Dev3 Addr Table1 Loc2 Register
 * Device Address Table Location 2 of Device1 through Device11.
 */
union cavm_i3c_dev3_addr_table_loc2
{
    uint32_t u;
    struct cavm_i3c_dev3_addr_table_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t autocmd_hdr_code      : 8;  /**< [ 26: 19](R/W) Auto command HDR code */
        uint32_t autocmd_mode          : 3;  /**< [ 18: 16](R/W) Mode of automatic Read transaction on the Bus (Auto Command feature). */
        uint32_t autocmd_value         : 8;  /**< [ 15:  8](R/W) Value of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_mask          : 8;  /**< [  7:  0](R/W) Mask of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
#else /* Word 0 - Little Endian */
        uint32_t autocmd_mask          : 8;  /**< [  7:  0](R/W) Mask of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_value         : 8;  /**< [ 15:  8](R/W) Value of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_mode          : 3;  /**< [ 18: 16](R/W) Mode of automatic Read transaction on the Bus (Auto Command feature). */
        uint32_t autocmd_hdr_code      : 8;  /**< [ 26: 19](R/W) Auto command HDR code */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev3_addr_table_loc2_s cn; */
};
typedef union cavm_i3c_dev3_addr_table_loc2 cavm_i3c_dev3_addr_table_loc2_t;

#define CAVM_I3C_DEV3_ADDR_TABLE_LOC2 CAVM_I3C_DEV3_ADDR_TABLE_LOC2_FUNC()
static inline uint64_t CAVM_I3C_DEV3_ADDR_TABLE_LOC2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV3_ADDR_TABLE_LOC2_FUNC(void)
{
    return 0x87e0d000041cll;
}

#define typedef_CAVM_I3C_DEV3_ADDR_TABLE_LOC2 cavm_i3c_dev3_addr_table_loc2_t
#define bustype_CAVM_I3C_DEV3_ADDR_TABLE_LOC2 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV3_ADDR_TABLE_LOC2 "I3C_DEV3_ADDR_TABLE_LOC2"
#define device_bar_CAVM_I3C_DEV3_ADDR_TABLE_LOC2 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV3_ADDR_TABLE_LOC2 0
#define arguments_CAVM_I3C_DEV3_ADDR_TABLE_LOC2 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev3_char_table_loc1
 *
 * I3C Ext Dev3 Char Table1 Loc1 Register
 * Device Characteristic Table Location-1 of Device1 through Device11
 */
union cavm_i3c_dev3_char_table_loc1
{
    uint32_t u;
    struct cavm_i3c_dev3_char_table_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t msb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev3_char_table_loc1_s cn; */
};
typedef union cavm_i3c_dev3_char_table_loc1 cavm_i3c_dev3_char_table_loc1_t;

#define CAVM_I3C_DEV3_CHAR_TABLE_LOC1 CAVM_I3C_DEV3_CHAR_TABLE_LOC1_FUNC()
static inline uint64_t CAVM_I3C_DEV3_CHAR_TABLE_LOC1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV3_CHAR_TABLE_LOC1_FUNC(void)
{
    return 0x87e0d0000630ll;
}

#define typedef_CAVM_I3C_DEV3_CHAR_TABLE_LOC1 cavm_i3c_dev3_char_table_loc1_t
#define bustype_CAVM_I3C_DEV3_CHAR_TABLE_LOC1 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV3_CHAR_TABLE_LOC1 "I3C_DEV3_CHAR_TABLE_LOC1"
#define device_bar_CAVM_I3C_DEV3_CHAR_TABLE_LOC1 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV3_CHAR_TABLE_LOC1 0
#define arguments_CAVM_I3C_DEV3_CHAR_TABLE_LOC1 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev3_char_table_loc2
 *
 * I3C Ext Dev3 Char Table1 Loc2 Register
 * Device Characteristic Table Location-2 of Device1 through Device11
 */
union cavm_i3c_dev3_char_table_loc2
{
    uint32_t u;
    struct cavm_i3c_dev3_char_table_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t lsb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t lsb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev3_char_table_loc2_s cn; */
};
typedef union cavm_i3c_dev3_char_table_loc2 cavm_i3c_dev3_char_table_loc2_t;

#define CAVM_I3C_DEV3_CHAR_TABLE_LOC2 CAVM_I3C_DEV3_CHAR_TABLE_LOC2_FUNC()
static inline uint64_t CAVM_I3C_DEV3_CHAR_TABLE_LOC2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV3_CHAR_TABLE_LOC2_FUNC(void)
{
    return 0x87e0d0000634ll;
}

#define typedef_CAVM_I3C_DEV3_CHAR_TABLE_LOC2 cavm_i3c_dev3_char_table_loc2_t
#define bustype_CAVM_I3C_DEV3_CHAR_TABLE_LOC2 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV3_CHAR_TABLE_LOC2 "I3C_DEV3_CHAR_TABLE_LOC2"
#define device_bar_CAVM_I3C_DEV3_CHAR_TABLE_LOC2 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV3_CHAR_TABLE_LOC2 0
#define arguments_CAVM_I3C_DEV3_CHAR_TABLE_LOC2 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev3_char_table_loc3
 *
 * I3C Ext Dev3 Char Table1 Loc3 Register
 * Device Characteristic Table Location-3 of Device1 through Device11
 */
union cavm_i3c_dev3_char_table_loc3
{
    uint32_t u;
    struct cavm_i3c_dev3_char_table_loc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
#else /* Word 0 - Little Endian */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev3_char_table_loc3_s cn; */
};
typedef union cavm_i3c_dev3_char_table_loc3 cavm_i3c_dev3_char_table_loc3_t;

#define CAVM_I3C_DEV3_CHAR_TABLE_LOC3 CAVM_I3C_DEV3_CHAR_TABLE_LOC3_FUNC()
static inline uint64_t CAVM_I3C_DEV3_CHAR_TABLE_LOC3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV3_CHAR_TABLE_LOC3_FUNC(void)
{
    return 0x87e0d0000638ll;
}

#define typedef_CAVM_I3C_DEV3_CHAR_TABLE_LOC3 cavm_i3c_dev3_char_table_loc3_t
#define bustype_CAVM_I3C_DEV3_CHAR_TABLE_LOC3 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV3_CHAR_TABLE_LOC3 "I3C_DEV3_CHAR_TABLE_LOC3"
#define device_bar_CAVM_I3C_DEV3_CHAR_TABLE_LOC3 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV3_CHAR_TABLE_LOC3 0
#define arguments_CAVM_I3C_DEV3_CHAR_TABLE_LOC3 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev3_char_table_loc4
 *
 * I3C Ext Dev3 Char Table1 Loc4 Register
 * Device Characteristic Table Location-4 of Device1 through Device11
 */
union cavm_i3c_dev3_char_table_loc4
{
    uint32_t u;
    struct cavm_i3c_dev3_char_table_loc4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
#else /* Word 0 - Little Endian */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev3_char_table_loc4_s cn; */
};
typedef union cavm_i3c_dev3_char_table_loc4 cavm_i3c_dev3_char_table_loc4_t;

#define CAVM_I3C_DEV3_CHAR_TABLE_LOC4 CAVM_I3C_DEV3_CHAR_TABLE_LOC4_FUNC()
static inline uint64_t CAVM_I3C_DEV3_CHAR_TABLE_LOC4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV3_CHAR_TABLE_LOC4_FUNC(void)
{
    return 0x87e0d000063cll;
}

#define typedef_CAVM_I3C_DEV3_CHAR_TABLE_LOC4 cavm_i3c_dev3_char_table_loc4_t
#define bustype_CAVM_I3C_DEV3_CHAR_TABLE_LOC4 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV3_CHAR_TABLE_LOC4 "I3C_DEV3_CHAR_TABLE_LOC4"
#define device_bar_CAVM_I3C_DEV3_CHAR_TABLE_LOC4 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV3_CHAR_TABLE_LOC4 0
#define arguments_CAVM_I3C_DEV3_CHAR_TABLE_LOC4 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev4_addr_table_loc1
 *
 * I3C Ext Dev4 Addr Table1 Loc1 Register
 * Device Address Table Location 1 of Device1 through Device11.
 */
union cavm_i3c_dev4_addr_table_loc1
{
    uint32_t u;
    struct cavm_i3c_dev4_addr_table_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                  0 = I3C.
                                                                  1 = I2C. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.

                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.

                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initiated by the Master. */
        uint32_t ring_id               : 3;  /**< [ 28: 26](R/W) Ring group identification. This field is used to put IBI from specific device to
                                                                 appropriate ring bundle. */
        uint32_t reserved_24_25        : 2;
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 The MSB, bit[23], should be programmed with parity of dynamic address. */
        uint32_t ts                    : 1;  /**< [ 15: 15](R/W) Marker for Timestamping IBI for specific device. Whether IBI was timestamped or not is provided
                                                                 in IBI Status Descriptor. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  - 0x0 - Accept: ACK the Master Request
                                                                  - 0x1 - Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  - 0x0 - Accept: ACK the SIR
                                                                  - 0x1 - Reject: NACK the SIR and send auto disable CCC. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  - 0x0 - IBI Without Mandatory Byte
                                                                  - 0x1 - IBI with one or more Mandatory Bytes. */
        uint32_t reserved_7_11         : 5;
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
#else /* Word 0 - Little Endian */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
        uint32_t reserved_7_11         : 5;
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  - 0x0 - IBI Without Mandatory Byte
                                                                  - 0x1 - IBI with one or more Mandatory Bytes. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  - 0x0 - Accept: ACK the SIR
                                                                  - 0x1 - Reject: NACK the SIR and send auto disable CCC. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  - 0x0 - Accept: ACK the Master Request
                                                                  - 0x1 - Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t ts                    : 1;  /**< [ 15: 15](R/W) Marker for Timestamping IBI for specific device. Whether IBI was timestamped or not is provided
                                                                 in IBI Status Descriptor. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 The MSB, bit[23], should be programmed with parity of dynamic address. */
        uint32_t reserved_24_25        : 2;
        uint32_t ring_id               : 3;  /**< [ 28: 26](R/W) Ring group identification. This field is used to put IBI from specific device to
                                                                 appropriate ring bundle. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.

                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.

                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initiated by the Master. */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                  0 = I3C.
                                                                  1 = I2C. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev4_addr_table_loc1_s cn; */
};
typedef union cavm_i3c_dev4_addr_table_loc1 cavm_i3c_dev4_addr_table_loc1_t;

#define CAVM_I3C_DEV4_ADDR_TABLE_LOC1 CAVM_I3C_DEV4_ADDR_TABLE_LOC1_FUNC()
static inline uint64_t CAVM_I3C_DEV4_ADDR_TABLE_LOC1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV4_ADDR_TABLE_LOC1_FUNC(void)
{
    return 0x87e0d0000420ll;
}

#define typedef_CAVM_I3C_DEV4_ADDR_TABLE_LOC1 cavm_i3c_dev4_addr_table_loc1_t
#define bustype_CAVM_I3C_DEV4_ADDR_TABLE_LOC1 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV4_ADDR_TABLE_LOC1 "I3C_DEV4_ADDR_TABLE_LOC1"
#define device_bar_CAVM_I3C_DEV4_ADDR_TABLE_LOC1 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV4_ADDR_TABLE_LOC1 0
#define arguments_CAVM_I3C_DEV4_ADDR_TABLE_LOC1 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev4_addr_table_loc2
 *
 * I3C Ext Dev4 Addr Table1 Loc2 Register
 * Device Address Table Location 2 of Device1 through Device11.
 */
union cavm_i3c_dev4_addr_table_loc2
{
    uint32_t u;
    struct cavm_i3c_dev4_addr_table_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t autocmd_hdr_code      : 8;  /**< [ 26: 19](R/W) Auto command HDR code */
        uint32_t autocmd_mode          : 3;  /**< [ 18: 16](R/W) Mode of automatic Read transaction on the Bus (Auto Command feature). */
        uint32_t autocmd_value         : 8;  /**< [ 15:  8](R/W) Value of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_mask          : 8;  /**< [  7:  0](R/W) Mask of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
#else /* Word 0 - Little Endian */
        uint32_t autocmd_mask          : 8;  /**< [  7:  0](R/W) Mask of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_value         : 8;  /**< [ 15:  8](R/W) Value of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_mode          : 3;  /**< [ 18: 16](R/W) Mode of automatic Read transaction on the Bus (Auto Command feature). */
        uint32_t autocmd_hdr_code      : 8;  /**< [ 26: 19](R/W) Auto command HDR code */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev4_addr_table_loc2_s cn; */
};
typedef union cavm_i3c_dev4_addr_table_loc2 cavm_i3c_dev4_addr_table_loc2_t;

#define CAVM_I3C_DEV4_ADDR_TABLE_LOC2 CAVM_I3C_DEV4_ADDR_TABLE_LOC2_FUNC()
static inline uint64_t CAVM_I3C_DEV4_ADDR_TABLE_LOC2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV4_ADDR_TABLE_LOC2_FUNC(void)
{
    return 0x87e0d0000424ll;
}

#define typedef_CAVM_I3C_DEV4_ADDR_TABLE_LOC2 cavm_i3c_dev4_addr_table_loc2_t
#define bustype_CAVM_I3C_DEV4_ADDR_TABLE_LOC2 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV4_ADDR_TABLE_LOC2 "I3C_DEV4_ADDR_TABLE_LOC2"
#define device_bar_CAVM_I3C_DEV4_ADDR_TABLE_LOC2 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV4_ADDR_TABLE_LOC2 0
#define arguments_CAVM_I3C_DEV4_ADDR_TABLE_LOC2 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev4_char_table_loc1
 *
 * I3C Ext Dev4 Char Table1 Loc1 Register
 * Device Characteristic Table Location-1 of Device1 through Device11
 */
union cavm_i3c_dev4_char_table_loc1
{
    uint32_t u;
    struct cavm_i3c_dev4_char_table_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t msb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev4_char_table_loc1_s cn; */
};
typedef union cavm_i3c_dev4_char_table_loc1 cavm_i3c_dev4_char_table_loc1_t;

#define CAVM_I3C_DEV4_CHAR_TABLE_LOC1 CAVM_I3C_DEV4_CHAR_TABLE_LOC1_FUNC()
static inline uint64_t CAVM_I3C_DEV4_CHAR_TABLE_LOC1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV4_CHAR_TABLE_LOC1_FUNC(void)
{
    return 0x87e0d0000640ll;
}

#define typedef_CAVM_I3C_DEV4_CHAR_TABLE_LOC1 cavm_i3c_dev4_char_table_loc1_t
#define bustype_CAVM_I3C_DEV4_CHAR_TABLE_LOC1 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV4_CHAR_TABLE_LOC1 "I3C_DEV4_CHAR_TABLE_LOC1"
#define device_bar_CAVM_I3C_DEV4_CHAR_TABLE_LOC1 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV4_CHAR_TABLE_LOC1 0
#define arguments_CAVM_I3C_DEV4_CHAR_TABLE_LOC1 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev4_char_table_loc2
 *
 * I3C Ext Dev4 Char Table1 Loc2 Register
 * Device Characteristic Table Location-2 of Device1 through Device11
 */
union cavm_i3c_dev4_char_table_loc2
{
    uint32_t u;
    struct cavm_i3c_dev4_char_table_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t lsb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t lsb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev4_char_table_loc2_s cn; */
};
typedef union cavm_i3c_dev4_char_table_loc2 cavm_i3c_dev4_char_table_loc2_t;

#define CAVM_I3C_DEV4_CHAR_TABLE_LOC2 CAVM_I3C_DEV4_CHAR_TABLE_LOC2_FUNC()
static inline uint64_t CAVM_I3C_DEV4_CHAR_TABLE_LOC2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV4_CHAR_TABLE_LOC2_FUNC(void)
{
    return 0x87e0d0000644ll;
}

#define typedef_CAVM_I3C_DEV4_CHAR_TABLE_LOC2 cavm_i3c_dev4_char_table_loc2_t
#define bustype_CAVM_I3C_DEV4_CHAR_TABLE_LOC2 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV4_CHAR_TABLE_LOC2 "I3C_DEV4_CHAR_TABLE_LOC2"
#define device_bar_CAVM_I3C_DEV4_CHAR_TABLE_LOC2 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV4_CHAR_TABLE_LOC2 0
#define arguments_CAVM_I3C_DEV4_CHAR_TABLE_LOC2 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev4_char_table_loc3
 *
 * I3C Ext Dev4 Char Table1 Loc3 Register
 * Device Characteristic Table Location-3 of Device1 through Device11
 */
union cavm_i3c_dev4_char_table_loc3
{
    uint32_t u;
    struct cavm_i3c_dev4_char_table_loc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
#else /* Word 0 - Little Endian */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev4_char_table_loc3_s cn; */
};
typedef union cavm_i3c_dev4_char_table_loc3 cavm_i3c_dev4_char_table_loc3_t;

#define CAVM_I3C_DEV4_CHAR_TABLE_LOC3 CAVM_I3C_DEV4_CHAR_TABLE_LOC3_FUNC()
static inline uint64_t CAVM_I3C_DEV4_CHAR_TABLE_LOC3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV4_CHAR_TABLE_LOC3_FUNC(void)
{
    return 0x87e0d0000648ll;
}

#define typedef_CAVM_I3C_DEV4_CHAR_TABLE_LOC3 cavm_i3c_dev4_char_table_loc3_t
#define bustype_CAVM_I3C_DEV4_CHAR_TABLE_LOC3 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV4_CHAR_TABLE_LOC3 "I3C_DEV4_CHAR_TABLE_LOC3"
#define device_bar_CAVM_I3C_DEV4_CHAR_TABLE_LOC3 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV4_CHAR_TABLE_LOC3 0
#define arguments_CAVM_I3C_DEV4_CHAR_TABLE_LOC3 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev4_char_table_loc4
 *
 * I3C Ext Dev9 Char Table1 Loc4 Register
 * Device Characteristic Table Location-4 of Device1 through Device11
 */
union cavm_i3c_dev4_char_table_loc4
{
    uint32_t u;
    struct cavm_i3c_dev4_char_table_loc4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
#else /* Word 0 - Little Endian */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev4_char_table_loc4_s cn; */
};
typedef union cavm_i3c_dev4_char_table_loc4 cavm_i3c_dev4_char_table_loc4_t;

#define CAVM_I3C_DEV4_CHAR_TABLE_LOC4 CAVM_I3C_DEV4_CHAR_TABLE_LOC4_FUNC()
static inline uint64_t CAVM_I3C_DEV4_CHAR_TABLE_LOC4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV4_CHAR_TABLE_LOC4_FUNC(void)
{
    return 0x87e0d000064cll;
}

#define typedef_CAVM_I3C_DEV4_CHAR_TABLE_LOC4 cavm_i3c_dev4_char_table_loc4_t
#define bustype_CAVM_I3C_DEV4_CHAR_TABLE_LOC4 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV4_CHAR_TABLE_LOC4 "I3C_DEV4_CHAR_TABLE_LOC4"
#define device_bar_CAVM_I3C_DEV4_CHAR_TABLE_LOC4 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV4_CHAR_TABLE_LOC4 0
#define arguments_CAVM_I3C_DEV4_CHAR_TABLE_LOC4 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev5_addr_table_loc1
 *
 * I3C Ext Dev5 Addr Table1 Loc1 Register
 * Device Address Table Location 1 of Device1 through Device11.
 */
union cavm_i3c_dev5_addr_table_loc1
{
    uint32_t u;
    struct cavm_i3c_dev5_addr_table_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                  0 = I3C.
                                                                  1 = I2C. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.

                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.

                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initiated by the Master. */
        uint32_t ring_id               : 3;  /**< [ 28: 26](R/W) Ring group identification. This field is used to put IBI from specific device to
                                                                 appropriate ring bundle. */
        uint32_t reserved_24_25        : 2;
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 The MSB, bit[23], should be programmed with parity of dynamic address. */
        uint32_t ts                    : 1;  /**< [ 15: 15](R/W) Marker for Timestamping IBI for specific device. Whether IBI was timestamped or not is provided
                                                                 in IBI Status Descriptor. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  - 0x0 - Accept: ACK the Master Request
                                                                  - 0x1 - Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  - 0x0 - Accept: ACK the SIR
                                                                  - 0x1 - Reject: NACK the SIR and send auto disable CCC. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  - 0x0 - IBI Without Mandatory Byte
                                                                  - 0x1 - IBI with one or more Mandatory Bytes. */
        uint32_t reserved_7_11         : 5;
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
#else /* Word 0 - Little Endian */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
        uint32_t reserved_7_11         : 5;
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  - 0x0 - IBI Without Mandatory Byte
                                                                  - 0x1 - IBI with one or more Mandatory Bytes. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  - 0x0 - Accept: ACK the SIR
                                                                  - 0x1 - Reject: NACK the SIR and send auto disable CCC. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  - 0x0 - Accept: ACK the Master Request
                                                                  - 0x1 - Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t ts                    : 1;  /**< [ 15: 15](R/W) Marker for Timestamping IBI for specific device. Whether IBI was timestamped or not is provided
                                                                 in IBI Status Descriptor. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 The MSB, bit[23], should be programmed with parity of dynamic address. */
        uint32_t reserved_24_25        : 2;
        uint32_t ring_id               : 3;  /**< [ 28: 26](R/W) Ring group identification. This field is used to put IBI from specific device to
                                                                 appropriate ring bundle. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.

                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.

                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initiated by the Master. */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                  0 = I3C.
                                                                  1 = I2C. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev5_addr_table_loc1_s cn; */
};
typedef union cavm_i3c_dev5_addr_table_loc1 cavm_i3c_dev5_addr_table_loc1_t;

#define CAVM_I3C_DEV5_ADDR_TABLE_LOC1 CAVM_I3C_DEV5_ADDR_TABLE_LOC1_FUNC()
static inline uint64_t CAVM_I3C_DEV5_ADDR_TABLE_LOC1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV5_ADDR_TABLE_LOC1_FUNC(void)
{
    return 0x87e0d0000428ll;
}

#define typedef_CAVM_I3C_DEV5_ADDR_TABLE_LOC1 cavm_i3c_dev5_addr_table_loc1_t
#define bustype_CAVM_I3C_DEV5_ADDR_TABLE_LOC1 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV5_ADDR_TABLE_LOC1 "I3C_DEV5_ADDR_TABLE_LOC1"
#define device_bar_CAVM_I3C_DEV5_ADDR_TABLE_LOC1 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV5_ADDR_TABLE_LOC1 0
#define arguments_CAVM_I3C_DEV5_ADDR_TABLE_LOC1 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev5_addr_table_loc2
 *
 * I3C Ext Dev5 Addr Table1 Loc2 Register
 * Device Address Table Location 2 of Device1 through Device11.
 */
union cavm_i3c_dev5_addr_table_loc2
{
    uint32_t u;
    struct cavm_i3c_dev5_addr_table_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t autocmd_hdr_code      : 8;  /**< [ 26: 19](R/W) Auto command HDR code */
        uint32_t autocmd_mode          : 3;  /**< [ 18: 16](R/W) Mode of automatic Read transaction on the Bus (Auto Command feature). */
        uint32_t autocmd_value         : 8;  /**< [ 15:  8](R/W) Value of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_mask          : 8;  /**< [  7:  0](R/W) Mask of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
#else /* Word 0 - Little Endian */
        uint32_t autocmd_mask          : 8;  /**< [  7:  0](R/W) Mask of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_value         : 8;  /**< [ 15:  8](R/W) Value of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_mode          : 3;  /**< [ 18: 16](R/W) Mode of automatic Read transaction on the Bus (Auto Command feature). */
        uint32_t autocmd_hdr_code      : 8;  /**< [ 26: 19](R/W) Auto command HDR code */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev5_addr_table_loc2_s cn; */
};
typedef union cavm_i3c_dev5_addr_table_loc2 cavm_i3c_dev5_addr_table_loc2_t;

#define CAVM_I3C_DEV5_ADDR_TABLE_LOC2 CAVM_I3C_DEV5_ADDR_TABLE_LOC2_FUNC()
static inline uint64_t CAVM_I3C_DEV5_ADDR_TABLE_LOC2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV5_ADDR_TABLE_LOC2_FUNC(void)
{
    return 0x87e0d000042cll;
}

#define typedef_CAVM_I3C_DEV5_ADDR_TABLE_LOC2 cavm_i3c_dev5_addr_table_loc2_t
#define bustype_CAVM_I3C_DEV5_ADDR_TABLE_LOC2 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV5_ADDR_TABLE_LOC2 "I3C_DEV5_ADDR_TABLE_LOC2"
#define device_bar_CAVM_I3C_DEV5_ADDR_TABLE_LOC2 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV5_ADDR_TABLE_LOC2 0
#define arguments_CAVM_I3C_DEV5_ADDR_TABLE_LOC2 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev5_char_table_loc1
 *
 * I3C Ext Dev5 Char Table1 Loc1 Register
 * Device Characteristic Table Location-1 of Device1 through Device11
 */
union cavm_i3c_dev5_char_table_loc1
{
    uint32_t u;
    struct cavm_i3c_dev5_char_table_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t msb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev5_char_table_loc1_s cn; */
};
typedef union cavm_i3c_dev5_char_table_loc1 cavm_i3c_dev5_char_table_loc1_t;

#define CAVM_I3C_DEV5_CHAR_TABLE_LOC1 CAVM_I3C_DEV5_CHAR_TABLE_LOC1_FUNC()
static inline uint64_t CAVM_I3C_DEV5_CHAR_TABLE_LOC1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV5_CHAR_TABLE_LOC1_FUNC(void)
{
    return 0x87e0d0000650ll;
}

#define typedef_CAVM_I3C_DEV5_CHAR_TABLE_LOC1 cavm_i3c_dev5_char_table_loc1_t
#define bustype_CAVM_I3C_DEV5_CHAR_TABLE_LOC1 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV5_CHAR_TABLE_LOC1 "I3C_DEV5_CHAR_TABLE_LOC1"
#define device_bar_CAVM_I3C_DEV5_CHAR_TABLE_LOC1 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV5_CHAR_TABLE_LOC1 0
#define arguments_CAVM_I3C_DEV5_CHAR_TABLE_LOC1 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev5_char_table_loc2
 *
 * I3C Ext Dev5 Char Table1 Loc2 Register
 * Device Characteristic Table Location-2 of Device1 through Device11
 */
union cavm_i3c_dev5_char_table_loc2
{
    uint32_t u;
    struct cavm_i3c_dev5_char_table_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t lsb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t lsb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev5_char_table_loc2_s cn; */
};
typedef union cavm_i3c_dev5_char_table_loc2 cavm_i3c_dev5_char_table_loc2_t;

#define CAVM_I3C_DEV5_CHAR_TABLE_LOC2 CAVM_I3C_DEV5_CHAR_TABLE_LOC2_FUNC()
static inline uint64_t CAVM_I3C_DEV5_CHAR_TABLE_LOC2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV5_CHAR_TABLE_LOC2_FUNC(void)
{
    return 0x87e0d0000654ll;
}

#define typedef_CAVM_I3C_DEV5_CHAR_TABLE_LOC2 cavm_i3c_dev5_char_table_loc2_t
#define bustype_CAVM_I3C_DEV5_CHAR_TABLE_LOC2 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV5_CHAR_TABLE_LOC2 "I3C_DEV5_CHAR_TABLE_LOC2"
#define device_bar_CAVM_I3C_DEV5_CHAR_TABLE_LOC2 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV5_CHAR_TABLE_LOC2 0
#define arguments_CAVM_I3C_DEV5_CHAR_TABLE_LOC2 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev5_char_table_loc3
 *
 * I3C Ext Dev5 Char Table1 Loc3 Register
 * Device Characteristic Table Location-3 of Device1 through Device11
 */
union cavm_i3c_dev5_char_table_loc3
{
    uint32_t u;
    struct cavm_i3c_dev5_char_table_loc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
#else /* Word 0 - Little Endian */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev5_char_table_loc3_s cn; */
};
typedef union cavm_i3c_dev5_char_table_loc3 cavm_i3c_dev5_char_table_loc3_t;

#define CAVM_I3C_DEV5_CHAR_TABLE_LOC3 CAVM_I3C_DEV5_CHAR_TABLE_LOC3_FUNC()
static inline uint64_t CAVM_I3C_DEV5_CHAR_TABLE_LOC3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV5_CHAR_TABLE_LOC3_FUNC(void)
{
    return 0x87e0d0000658ll;
}

#define typedef_CAVM_I3C_DEV5_CHAR_TABLE_LOC3 cavm_i3c_dev5_char_table_loc3_t
#define bustype_CAVM_I3C_DEV5_CHAR_TABLE_LOC3 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV5_CHAR_TABLE_LOC3 "I3C_DEV5_CHAR_TABLE_LOC3"
#define device_bar_CAVM_I3C_DEV5_CHAR_TABLE_LOC3 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV5_CHAR_TABLE_LOC3 0
#define arguments_CAVM_I3C_DEV5_CHAR_TABLE_LOC3 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev5_char_table_loc4
 *
 * I3C Ext Dev5 Char Table1 Loc4 Register
 * Device Characteristic Table Location-4 of Device1 through Device11
 */
union cavm_i3c_dev5_char_table_loc4
{
    uint32_t u;
    struct cavm_i3c_dev5_char_table_loc4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
#else /* Word 0 - Little Endian */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev5_char_table_loc4_s cn; */
};
typedef union cavm_i3c_dev5_char_table_loc4 cavm_i3c_dev5_char_table_loc4_t;

#define CAVM_I3C_DEV5_CHAR_TABLE_LOC4 CAVM_I3C_DEV5_CHAR_TABLE_LOC4_FUNC()
static inline uint64_t CAVM_I3C_DEV5_CHAR_TABLE_LOC4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV5_CHAR_TABLE_LOC4_FUNC(void)
{
    return 0x87e0d000065cll;
}

#define typedef_CAVM_I3C_DEV5_CHAR_TABLE_LOC4 cavm_i3c_dev5_char_table_loc4_t
#define bustype_CAVM_I3C_DEV5_CHAR_TABLE_LOC4 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV5_CHAR_TABLE_LOC4 "I3C_DEV5_CHAR_TABLE_LOC4"
#define device_bar_CAVM_I3C_DEV5_CHAR_TABLE_LOC4 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV5_CHAR_TABLE_LOC4 0
#define arguments_CAVM_I3C_DEV5_CHAR_TABLE_LOC4 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev6_addr_table_loc1
 *
 * I3C Ext Dev6 Addr Table1 Loc1 Register
 * Device Address Table Location 1 of Device1 through Device11.
 */
union cavm_i3c_dev6_addr_table_loc1
{
    uint32_t u;
    struct cavm_i3c_dev6_addr_table_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                  0 = I3C.
                                                                  1 = I2C. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.

                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.

                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initiated by the Master. */
        uint32_t ring_id               : 3;  /**< [ 28: 26](R/W) Ring group identification. This field is used to put IBI from specific device to
                                                                 appropriate ring bundle. */
        uint32_t reserved_24_25        : 2;
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 The MSB, bit[23], should be programmed with parity of dynamic address. */
        uint32_t ts                    : 1;  /**< [ 15: 15](R/W) Marker for Timestamping IBI for specific device. Whether IBI was timestamped or not is provided
                                                                 in IBI Status Descriptor. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  - 0x0 - Accept: ACK the Master Request
                                                                  - 0x1 - Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  - 0x0 - Accept: ACK the SIR
                                                                  - 0x1 - Reject: NACK the SIR and send auto disable CCC. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  - 0x0 - IBI Without Mandatory Byte
                                                                  - 0x1 - IBI with one or more Mandatory Bytes. */
        uint32_t reserved_7_11         : 5;
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
#else /* Word 0 - Little Endian */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
        uint32_t reserved_7_11         : 5;
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  - 0x0 - IBI Without Mandatory Byte
                                                                  - 0x1 - IBI with one or more Mandatory Bytes. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  - 0x0 - Accept: ACK the SIR
                                                                  - 0x1 - Reject: NACK the SIR and send auto disable CCC. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  - 0x0 - Accept: ACK the Master Request
                                                                  - 0x1 - Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t ts                    : 1;  /**< [ 15: 15](R/W) Marker for Timestamping IBI for specific device. Whether IBI was timestamped or not is provided
                                                                 in IBI Status Descriptor. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 The MSB, bit[23], should be programmed with parity of dynamic address. */
        uint32_t reserved_24_25        : 2;
        uint32_t ring_id               : 3;  /**< [ 28: 26](R/W) Ring group identification. This field is used to put IBI from specific device to
                                                                 appropriate ring bundle. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.

                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.

                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initiated by the Master. */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                  0 = I3C.
                                                                  1 = I2C. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev6_addr_table_loc1_s cn; */
};
typedef union cavm_i3c_dev6_addr_table_loc1 cavm_i3c_dev6_addr_table_loc1_t;

#define CAVM_I3C_DEV6_ADDR_TABLE_LOC1 CAVM_I3C_DEV6_ADDR_TABLE_LOC1_FUNC()
static inline uint64_t CAVM_I3C_DEV6_ADDR_TABLE_LOC1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV6_ADDR_TABLE_LOC1_FUNC(void)
{
    return 0x87e0d0000430ll;
}

#define typedef_CAVM_I3C_DEV6_ADDR_TABLE_LOC1 cavm_i3c_dev6_addr_table_loc1_t
#define bustype_CAVM_I3C_DEV6_ADDR_TABLE_LOC1 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV6_ADDR_TABLE_LOC1 "I3C_DEV6_ADDR_TABLE_LOC1"
#define device_bar_CAVM_I3C_DEV6_ADDR_TABLE_LOC1 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV6_ADDR_TABLE_LOC1 0
#define arguments_CAVM_I3C_DEV6_ADDR_TABLE_LOC1 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev6_addr_table_loc2
 *
 * I3C Ext Dev6 Addr Table1 Loc2 Register
 * Device Address Table Location 2 of Device1 through Device11.
 */
union cavm_i3c_dev6_addr_table_loc2
{
    uint32_t u;
    struct cavm_i3c_dev6_addr_table_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t autocmd_hdr_code      : 8;  /**< [ 26: 19](R/W) Auto command HDR code */
        uint32_t autocmd_mode          : 3;  /**< [ 18: 16](R/W) Mode of automatic Read transaction on the Bus (Auto Command feature). */
        uint32_t autocmd_value         : 8;  /**< [ 15:  8](R/W) Value of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_mask          : 8;  /**< [  7:  0](R/W) Mask of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
#else /* Word 0 - Little Endian */
        uint32_t autocmd_mask          : 8;  /**< [  7:  0](R/W) Mask of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_value         : 8;  /**< [ 15:  8](R/W) Value of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_mode          : 3;  /**< [ 18: 16](R/W) Mode of automatic Read transaction on the Bus (Auto Command feature). */
        uint32_t autocmd_hdr_code      : 8;  /**< [ 26: 19](R/W) Auto command HDR code */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev6_addr_table_loc2_s cn; */
};
typedef union cavm_i3c_dev6_addr_table_loc2 cavm_i3c_dev6_addr_table_loc2_t;

#define CAVM_I3C_DEV6_ADDR_TABLE_LOC2 CAVM_I3C_DEV6_ADDR_TABLE_LOC2_FUNC()
static inline uint64_t CAVM_I3C_DEV6_ADDR_TABLE_LOC2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV6_ADDR_TABLE_LOC2_FUNC(void)
{
    return 0x87e0d0000434ll;
}

#define typedef_CAVM_I3C_DEV6_ADDR_TABLE_LOC2 cavm_i3c_dev6_addr_table_loc2_t
#define bustype_CAVM_I3C_DEV6_ADDR_TABLE_LOC2 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV6_ADDR_TABLE_LOC2 "I3C_DEV6_ADDR_TABLE_LOC2"
#define device_bar_CAVM_I3C_DEV6_ADDR_TABLE_LOC2 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV6_ADDR_TABLE_LOC2 0
#define arguments_CAVM_I3C_DEV6_ADDR_TABLE_LOC2 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev6_char_table_loc1
 *
 * I3C Ext Dev6 Char Table1 Loc1 Register
 * Device Characteristic Table Location-1 of Device1 through Device11
 */
union cavm_i3c_dev6_char_table_loc1
{
    uint32_t u;
    struct cavm_i3c_dev6_char_table_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t msb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev6_char_table_loc1_s cn; */
};
typedef union cavm_i3c_dev6_char_table_loc1 cavm_i3c_dev6_char_table_loc1_t;

#define CAVM_I3C_DEV6_CHAR_TABLE_LOC1 CAVM_I3C_DEV6_CHAR_TABLE_LOC1_FUNC()
static inline uint64_t CAVM_I3C_DEV6_CHAR_TABLE_LOC1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV6_CHAR_TABLE_LOC1_FUNC(void)
{
    return 0x87e0d0000660ll;
}

#define typedef_CAVM_I3C_DEV6_CHAR_TABLE_LOC1 cavm_i3c_dev6_char_table_loc1_t
#define bustype_CAVM_I3C_DEV6_CHAR_TABLE_LOC1 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV6_CHAR_TABLE_LOC1 "I3C_DEV6_CHAR_TABLE_LOC1"
#define device_bar_CAVM_I3C_DEV6_CHAR_TABLE_LOC1 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV6_CHAR_TABLE_LOC1 0
#define arguments_CAVM_I3C_DEV6_CHAR_TABLE_LOC1 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev6_char_table_loc2
 *
 * I3C Ext Dev6 Char Table1 Loc2 Register
 * Device Characteristic Table Location-2 of Device1 through Device11
 */
union cavm_i3c_dev6_char_table_loc2
{
    uint32_t u;
    struct cavm_i3c_dev6_char_table_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t lsb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t lsb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev6_char_table_loc2_s cn; */
};
typedef union cavm_i3c_dev6_char_table_loc2 cavm_i3c_dev6_char_table_loc2_t;

#define CAVM_I3C_DEV6_CHAR_TABLE_LOC2 CAVM_I3C_DEV6_CHAR_TABLE_LOC2_FUNC()
static inline uint64_t CAVM_I3C_DEV6_CHAR_TABLE_LOC2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV6_CHAR_TABLE_LOC2_FUNC(void)
{
    return 0x87e0d0000664ll;
}

#define typedef_CAVM_I3C_DEV6_CHAR_TABLE_LOC2 cavm_i3c_dev6_char_table_loc2_t
#define bustype_CAVM_I3C_DEV6_CHAR_TABLE_LOC2 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV6_CHAR_TABLE_LOC2 "I3C_DEV6_CHAR_TABLE_LOC2"
#define device_bar_CAVM_I3C_DEV6_CHAR_TABLE_LOC2 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV6_CHAR_TABLE_LOC2 0
#define arguments_CAVM_I3C_DEV6_CHAR_TABLE_LOC2 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev6_char_table_loc3
 *
 * I3C Ext Dev6 Char Table1 Loc3 Register
 * Device Characteristic Table Location-3 of Device1 through Device11
 */
union cavm_i3c_dev6_char_table_loc3
{
    uint32_t u;
    struct cavm_i3c_dev6_char_table_loc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
#else /* Word 0 - Little Endian */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev6_char_table_loc3_s cn; */
};
typedef union cavm_i3c_dev6_char_table_loc3 cavm_i3c_dev6_char_table_loc3_t;

#define CAVM_I3C_DEV6_CHAR_TABLE_LOC3 CAVM_I3C_DEV6_CHAR_TABLE_LOC3_FUNC()
static inline uint64_t CAVM_I3C_DEV6_CHAR_TABLE_LOC3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV6_CHAR_TABLE_LOC3_FUNC(void)
{
    return 0x87e0d0000668ll;
}

#define typedef_CAVM_I3C_DEV6_CHAR_TABLE_LOC3 cavm_i3c_dev6_char_table_loc3_t
#define bustype_CAVM_I3C_DEV6_CHAR_TABLE_LOC3 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV6_CHAR_TABLE_LOC3 "I3C_DEV6_CHAR_TABLE_LOC3"
#define device_bar_CAVM_I3C_DEV6_CHAR_TABLE_LOC3 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV6_CHAR_TABLE_LOC3 0
#define arguments_CAVM_I3C_DEV6_CHAR_TABLE_LOC3 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev6_char_table_loc4
 *
 * I3C Ext Dev6 Char Table1 Loc4 Register
 * Device Characteristic Table Location-4 of Device1 through Device11
 */
union cavm_i3c_dev6_char_table_loc4
{
    uint32_t u;
    struct cavm_i3c_dev6_char_table_loc4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
#else /* Word 0 - Little Endian */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev6_char_table_loc4_s cn; */
};
typedef union cavm_i3c_dev6_char_table_loc4 cavm_i3c_dev6_char_table_loc4_t;

#define CAVM_I3C_DEV6_CHAR_TABLE_LOC4 CAVM_I3C_DEV6_CHAR_TABLE_LOC4_FUNC()
static inline uint64_t CAVM_I3C_DEV6_CHAR_TABLE_LOC4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV6_CHAR_TABLE_LOC4_FUNC(void)
{
    return 0x87e0d000066cll;
}

#define typedef_CAVM_I3C_DEV6_CHAR_TABLE_LOC4 cavm_i3c_dev6_char_table_loc4_t
#define bustype_CAVM_I3C_DEV6_CHAR_TABLE_LOC4 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV6_CHAR_TABLE_LOC4 "I3C_DEV6_CHAR_TABLE_LOC4"
#define device_bar_CAVM_I3C_DEV6_CHAR_TABLE_LOC4 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV6_CHAR_TABLE_LOC4 0
#define arguments_CAVM_I3C_DEV6_CHAR_TABLE_LOC4 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev7_addr_table_loc1
 *
 * I3C Ext Dev7 Addr Table1 Loc1 Register
 * Device Address Table Location 1 of Device1 through Device11.
 */
union cavm_i3c_dev7_addr_table_loc1
{
    uint32_t u;
    struct cavm_i3c_dev7_addr_table_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                  0 = I3C.
                                                                  1 = I2C. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.

                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.

                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initiated by the Master. */
        uint32_t ring_id               : 3;  /**< [ 28: 26](R/W) Ring group identification. This field is used to put IBI from specific device to
                                                                 appropriate ring bundle. */
        uint32_t reserved_24_25        : 2;
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 The MSB, bit[23], should be programmed with parity of dynamic address. */
        uint32_t ts                    : 1;  /**< [ 15: 15](R/W) Marker for Timestamping IBI for specific device. Whether IBI was timestamped or not is provided
                                                                 in IBI Status Descriptor. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  - 0x0 - Accept: ACK the Master Request
                                                                  - 0x1 - Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  - 0x0 - Accept: ACK the SIR
                                                                  - 0x1 - Reject: NACK the SIR and send auto disable CCC. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  - 0x0 - IBI Without Mandatory Byte
                                                                  - 0x1 - IBI with one or more Mandatory Bytes. */
        uint32_t reserved_7_11         : 5;
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
#else /* Word 0 - Little Endian */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
        uint32_t reserved_7_11         : 5;
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  - 0x0 - IBI Without Mandatory Byte
                                                                  - 0x1 - IBI with one or more Mandatory Bytes. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  - 0x0 - Accept: ACK the SIR
                                                                  - 0x1 - Reject: NACK the SIR and send auto disable CCC. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  - 0x0 - Accept: ACK the Master Request
                                                                  - 0x1 - Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t ts                    : 1;  /**< [ 15: 15](R/W) Marker for Timestamping IBI for specific device. Whether IBI was timestamped or not is provided
                                                                 in IBI Status Descriptor. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 The MSB, bit[23], should be programmed with parity of dynamic address. */
        uint32_t reserved_24_25        : 2;
        uint32_t ring_id               : 3;  /**< [ 28: 26](R/W) Ring group identification. This field is used to put IBI from specific device to
                                                                 appropriate ring bundle. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.

                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.

                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initiated by the Master. */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                  0 = I3C.
                                                                  1 = I2C. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev7_addr_table_loc1_s cn; */
};
typedef union cavm_i3c_dev7_addr_table_loc1 cavm_i3c_dev7_addr_table_loc1_t;

#define CAVM_I3C_DEV7_ADDR_TABLE_LOC1 CAVM_I3C_DEV7_ADDR_TABLE_LOC1_FUNC()
static inline uint64_t CAVM_I3C_DEV7_ADDR_TABLE_LOC1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV7_ADDR_TABLE_LOC1_FUNC(void)
{
    return 0x87e0d0000438ll;
}

#define typedef_CAVM_I3C_DEV7_ADDR_TABLE_LOC1 cavm_i3c_dev7_addr_table_loc1_t
#define bustype_CAVM_I3C_DEV7_ADDR_TABLE_LOC1 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV7_ADDR_TABLE_LOC1 "I3C_DEV7_ADDR_TABLE_LOC1"
#define device_bar_CAVM_I3C_DEV7_ADDR_TABLE_LOC1 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV7_ADDR_TABLE_LOC1 0
#define arguments_CAVM_I3C_DEV7_ADDR_TABLE_LOC1 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev7_addr_table_loc2
 *
 * I3C Ext Dev7 Addr Table1 Loc2 Register
 * Device Address Table Location 2 of Device1 through Device11.
 */
union cavm_i3c_dev7_addr_table_loc2
{
    uint32_t u;
    struct cavm_i3c_dev7_addr_table_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t autocmd_hdr_code      : 8;  /**< [ 26: 19](R/W) Auto command HDR code */
        uint32_t autocmd_mode          : 3;  /**< [ 18: 16](R/W) Mode of automatic Read transaction on the Bus (Auto Command feature). */
        uint32_t autocmd_value         : 8;  /**< [ 15:  8](R/W) Value of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_mask          : 8;  /**< [  7:  0](R/W) Mask of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
#else /* Word 0 - Little Endian */
        uint32_t autocmd_mask          : 8;  /**< [  7:  0](R/W) Mask of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_value         : 8;  /**< [ 15:  8](R/W) Value of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_mode          : 3;  /**< [ 18: 16](R/W) Mode of automatic Read transaction on the Bus (Auto Command feature). */
        uint32_t autocmd_hdr_code      : 8;  /**< [ 26: 19](R/W) Auto command HDR code */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev7_addr_table_loc2_s cn; */
};
typedef union cavm_i3c_dev7_addr_table_loc2 cavm_i3c_dev7_addr_table_loc2_t;

#define CAVM_I3C_DEV7_ADDR_TABLE_LOC2 CAVM_I3C_DEV7_ADDR_TABLE_LOC2_FUNC()
static inline uint64_t CAVM_I3C_DEV7_ADDR_TABLE_LOC2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV7_ADDR_TABLE_LOC2_FUNC(void)
{
    return 0x87e0d000043cll;
}

#define typedef_CAVM_I3C_DEV7_ADDR_TABLE_LOC2 cavm_i3c_dev7_addr_table_loc2_t
#define bustype_CAVM_I3C_DEV7_ADDR_TABLE_LOC2 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV7_ADDR_TABLE_LOC2 "I3C_DEV7_ADDR_TABLE_LOC2"
#define device_bar_CAVM_I3C_DEV7_ADDR_TABLE_LOC2 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV7_ADDR_TABLE_LOC2 0
#define arguments_CAVM_I3C_DEV7_ADDR_TABLE_LOC2 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev7_char_table_loc1
 *
 * I3C Ext Dev7 Char Table1 Loc1 Register
 * Device Characteristic Table Location-1 of Device1 through Device11
 */
union cavm_i3c_dev7_char_table_loc1
{
    uint32_t u;
    struct cavm_i3c_dev7_char_table_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t msb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev7_char_table_loc1_s cn; */
};
typedef union cavm_i3c_dev7_char_table_loc1 cavm_i3c_dev7_char_table_loc1_t;

#define CAVM_I3C_DEV7_CHAR_TABLE_LOC1 CAVM_I3C_DEV7_CHAR_TABLE_LOC1_FUNC()
static inline uint64_t CAVM_I3C_DEV7_CHAR_TABLE_LOC1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV7_CHAR_TABLE_LOC1_FUNC(void)
{
    return 0x87e0d0000670ll;
}

#define typedef_CAVM_I3C_DEV7_CHAR_TABLE_LOC1 cavm_i3c_dev7_char_table_loc1_t
#define bustype_CAVM_I3C_DEV7_CHAR_TABLE_LOC1 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV7_CHAR_TABLE_LOC1 "I3C_DEV7_CHAR_TABLE_LOC1"
#define device_bar_CAVM_I3C_DEV7_CHAR_TABLE_LOC1 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV7_CHAR_TABLE_LOC1 0
#define arguments_CAVM_I3C_DEV7_CHAR_TABLE_LOC1 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev7_char_table_loc2
 *
 * I3C Ext Dev7 Char Table1 Loc2 Register
 * Device Characteristic Table Location-2 of Device1 through Device11
 */
union cavm_i3c_dev7_char_table_loc2
{
    uint32_t u;
    struct cavm_i3c_dev7_char_table_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t lsb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t lsb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev7_char_table_loc2_s cn; */
};
typedef union cavm_i3c_dev7_char_table_loc2 cavm_i3c_dev7_char_table_loc2_t;

#define CAVM_I3C_DEV7_CHAR_TABLE_LOC2 CAVM_I3C_DEV7_CHAR_TABLE_LOC2_FUNC()
static inline uint64_t CAVM_I3C_DEV7_CHAR_TABLE_LOC2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV7_CHAR_TABLE_LOC2_FUNC(void)
{
    return 0x87e0d0000674ll;
}

#define typedef_CAVM_I3C_DEV7_CHAR_TABLE_LOC2 cavm_i3c_dev7_char_table_loc2_t
#define bustype_CAVM_I3C_DEV7_CHAR_TABLE_LOC2 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV7_CHAR_TABLE_LOC2 "I3C_DEV7_CHAR_TABLE_LOC2"
#define device_bar_CAVM_I3C_DEV7_CHAR_TABLE_LOC2 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV7_CHAR_TABLE_LOC2 0
#define arguments_CAVM_I3C_DEV7_CHAR_TABLE_LOC2 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev7_char_table_loc3
 *
 * I3C Ext Dev7 Char Table1 Loc3 Register
 * Device Characteristic Table Location-3 of Device1 through Device11
 */
union cavm_i3c_dev7_char_table_loc3
{
    uint32_t u;
    struct cavm_i3c_dev7_char_table_loc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
#else /* Word 0 - Little Endian */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev7_char_table_loc3_s cn; */
};
typedef union cavm_i3c_dev7_char_table_loc3 cavm_i3c_dev7_char_table_loc3_t;

#define CAVM_I3C_DEV7_CHAR_TABLE_LOC3 CAVM_I3C_DEV7_CHAR_TABLE_LOC3_FUNC()
static inline uint64_t CAVM_I3C_DEV7_CHAR_TABLE_LOC3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV7_CHAR_TABLE_LOC3_FUNC(void)
{
    return 0x87e0d0000678ll;
}

#define typedef_CAVM_I3C_DEV7_CHAR_TABLE_LOC3 cavm_i3c_dev7_char_table_loc3_t
#define bustype_CAVM_I3C_DEV7_CHAR_TABLE_LOC3 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV7_CHAR_TABLE_LOC3 "I3C_DEV7_CHAR_TABLE_LOC3"
#define device_bar_CAVM_I3C_DEV7_CHAR_TABLE_LOC3 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV7_CHAR_TABLE_LOC3 0
#define arguments_CAVM_I3C_DEV7_CHAR_TABLE_LOC3 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev7_char_table_loc4
 *
 * I3C Ext Dev7 Char Table1 Loc4 Register
 * Device Characteristic Table Location-4 of Device1 through Device11
 */
union cavm_i3c_dev7_char_table_loc4
{
    uint32_t u;
    struct cavm_i3c_dev7_char_table_loc4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
#else /* Word 0 - Little Endian */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev7_char_table_loc4_s cn; */
};
typedef union cavm_i3c_dev7_char_table_loc4 cavm_i3c_dev7_char_table_loc4_t;

#define CAVM_I3C_DEV7_CHAR_TABLE_LOC4 CAVM_I3C_DEV7_CHAR_TABLE_LOC4_FUNC()
static inline uint64_t CAVM_I3C_DEV7_CHAR_TABLE_LOC4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV7_CHAR_TABLE_LOC4_FUNC(void)
{
    return 0x87e0d000067cll;
}

#define typedef_CAVM_I3C_DEV7_CHAR_TABLE_LOC4 cavm_i3c_dev7_char_table_loc4_t
#define bustype_CAVM_I3C_DEV7_CHAR_TABLE_LOC4 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV7_CHAR_TABLE_LOC4 "I3C_DEV7_CHAR_TABLE_LOC4"
#define device_bar_CAVM_I3C_DEV7_CHAR_TABLE_LOC4 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV7_CHAR_TABLE_LOC4 0
#define arguments_CAVM_I3C_DEV7_CHAR_TABLE_LOC4 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev8_addr_table_loc1
 *
 * I3C Ext Dev8 Addr Table1 Loc1 Register
 * Device Address Table Location 1 of Device1 through Device11.
 */
union cavm_i3c_dev8_addr_table_loc1
{
    uint32_t u;
    struct cavm_i3c_dev8_addr_table_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                  0 = I3C.
                                                                  1 = I2C. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.

                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.

                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initiated by the Master. */
        uint32_t ring_id               : 3;  /**< [ 28: 26](R/W) Ring group identification. This field is used to put IBI from specific device to
                                                                 appropriate ring bundle. */
        uint32_t reserved_24_25        : 2;
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 The MSB, bit[23], should be programmed with parity of dynamic address. */
        uint32_t ts                    : 1;  /**< [ 15: 15](R/W) Marker for Timestamping IBI for specific device. Whether IBI was timestamped or not is provided
                                                                 in IBI Status Descriptor. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  - 0x0 - Accept: ACK the Master Request
                                                                  - 0x1 - Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  - 0x0 - Accept: ACK the SIR
                                                                  - 0x1 - Reject: NACK the SIR and send auto disable CCC. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  - 0x0 - IBI Without Mandatory Byte
                                                                  - 0x1 - IBI with one or more Mandatory Bytes. */
        uint32_t reserved_7_11         : 5;
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
#else /* Word 0 - Little Endian */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
        uint32_t reserved_7_11         : 5;
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  - 0x0 - IBI Without Mandatory Byte
                                                                  - 0x1 - IBI with one or more Mandatory Bytes. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  - 0x0 - Accept: ACK the SIR
                                                                  - 0x1 - Reject: NACK the SIR and send auto disable CCC. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  - 0x0 - Accept: ACK the Master Request
                                                                  - 0x1 - Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t ts                    : 1;  /**< [ 15: 15](R/W) Marker for Timestamping IBI for specific device. Whether IBI was timestamped or not is provided
                                                                 in IBI Status Descriptor. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 The MSB, bit[23], should be programmed with parity of dynamic address. */
        uint32_t reserved_24_25        : 2;
        uint32_t ring_id               : 3;  /**< [ 28: 26](R/W) Ring group identification. This field is used to put IBI from specific device to
                                                                 appropriate ring bundle. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.

                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.

                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initiated by the Master. */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                  0 = I3C.
                                                                  1 = I2C. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev8_addr_table_loc1_s cn; */
};
typedef union cavm_i3c_dev8_addr_table_loc1 cavm_i3c_dev8_addr_table_loc1_t;

#define CAVM_I3C_DEV8_ADDR_TABLE_LOC1 CAVM_I3C_DEV8_ADDR_TABLE_LOC1_FUNC()
static inline uint64_t CAVM_I3C_DEV8_ADDR_TABLE_LOC1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV8_ADDR_TABLE_LOC1_FUNC(void)
{
    return 0x87e0d0000440ll;
}

#define typedef_CAVM_I3C_DEV8_ADDR_TABLE_LOC1 cavm_i3c_dev8_addr_table_loc1_t
#define bustype_CAVM_I3C_DEV8_ADDR_TABLE_LOC1 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV8_ADDR_TABLE_LOC1 "I3C_DEV8_ADDR_TABLE_LOC1"
#define device_bar_CAVM_I3C_DEV8_ADDR_TABLE_LOC1 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV8_ADDR_TABLE_LOC1 0
#define arguments_CAVM_I3C_DEV8_ADDR_TABLE_LOC1 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev8_addr_table_loc2
 *
 * I3C Ext Dev8 Addr Table1 Loc2 Register
 * Device Address Table Location 2 of Device1 through Device11.
 */
union cavm_i3c_dev8_addr_table_loc2
{
    uint32_t u;
    struct cavm_i3c_dev8_addr_table_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t autocmd_hdr_code      : 8;  /**< [ 26: 19](R/W) Auto command HDR code */
        uint32_t autocmd_mode          : 3;  /**< [ 18: 16](R/W) Mode of automatic Read transaction on the Bus (Auto Command feature). */
        uint32_t autocmd_value         : 8;  /**< [ 15:  8](R/W) Value of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_mask          : 8;  /**< [  7:  0](R/W) Mask of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
#else /* Word 0 - Little Endian */
        uint32_t autocmd_mask          : 8;  /**< [  7:  0](R/W) Mask of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_value         : 8;  /**< [ 15:  8](R/W) Value of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_mode          : 3;  /**< [ 18: 16](R/W) Mode of automatic Read transaction on the Bus (Auto Command feature). */
        uint32_t autocmd_hdr_code      : 8;  /**< [ 26: 19](R/W) Auto command HDR code */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev8_addr_table_loc2_s cn; */
};
typedef union cavm_i3c_dev8_addr_table_loc2 cavm_i3c_dev8_addr_table_loc2_t;

#define CAVM_I3C_DEV8_ADDR_TABLE_LOC2 CAVM_I3C_DEV8_ADDR_TABLE_LOC2_FUNC()
static inline uint64_t CAVM_I3C_DEV8_ADDR_TABLE_LOC2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV8_ADDR_TABLE_LOC2_FUNC(void)
{
    return 0x87e0d0000444ll;
}

#define typedef_CAVM_I3C_DEV8_ADDR_TABLE_LOC2 cavm_i3c_dev8_addr_table_loc2_t
#define bustype_CAVM_I3C_DEV8_ADDR_TABLE_LOC2 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV8_ADDR_TABLE_LOC2 "I3C_DEV8_ADDR_TABLE_LOC2"
#define device_bar_CAVM_I3C_DEV8_ADDR_TABLE_LOC2 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV8_ADDR_TABLE_LOC2 0
#define arguments_CAVM_I3C_DEV8_ADDR_TABLE_LOC2 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev8_char_table_loc1
 *
 * I3C Ext Dev8 Char Table1 Loc1 Register
 * Device Characteristic Table Location-1 of Device1 through Device11
 */
union cavm_i3c_dev8_char_table_loc1
{
    uint32_t u;
    struct cavm_i3c_dev8_char_table_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t msb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev8_char_table_loc1_s cn; */
};
typedef union cavm_i3c_dev8_char_table_loc1 cavm_i3c_dev8_char_table_loc1_t;

#define CAVM_I3C_DEV8_CHAR_TABLE_LOC1 CAVM_I3C_DEV8_CHAR_TABLE_LOC1_FUNC()
static inline uint64_t CAVM_I3C_DEV8_CHAR_TABLE_LOC1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV8_CHAR_TABLE_LOC1_FUNC(void)
{
    return 0x87e0d0000680ll;
}

#define typedef_CAVM_I3C_DEV8_CHAR_TABLE_LOC1 cavm_i3c_dev8_char_table_loc1_t
#define bustype_CAVM_I3C_DEV8_CHAR_TABLE_LOC1 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV8_CHAR_TABLE_LOC1 "I3C_DEV8_CHAR_TABLE_LOC1"
#define device_bar_CAVM_I3C_DEV8_CHAR_TABLE_LOC1 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV8_CHAR_TABLE_LOC1 0
#define arguments_CAVM_I3C_DEV8_CHAR_TABLE_LOC1 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev8_char_table_loc2
 *
 * I3C Ext Dev8 Char Table1 Loc2 Register
 * Device Characteristic Table Location-2 of Device1 through Device11
 */
union cavm_i3c_dev8_char_table_loc2
{
    uint32_t u;
    struct cavm_i3c_dev8_char_table_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t lsb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t lsb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev8_char_table_loc2_s cn; */
};
typedef union cavm_i3c_dev8_char_table_loc2 cavm_i3c_dev8_char_table_loc2_t;

#define CAVM_I3C_DEV8_CHAR_TABLE_LOC2 CAVM_I3C_DEV8_CHAR_TABLE_LOC2_FUNC()
static inline uint64_t CAVM_I3C_DEV8_CHAR_TABLE_LOC2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV8_CHAR_TABLE_LOC2_FUNC(void)
{
    return 0x87e0d0000684ll;
}

#define typedef_CAVM_I3C_DEV8_CHAR_TABLE_LOC2 cavm_i3c_dev8_char_table_loc2_t
#define bustype_CAVM_I3C_DEV8_CHAR_TABLE_LOC2 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV8_CHAR_TABLE_LOC2 "I3C_DEV8_CHAR_TABLE_LOC2"
#define device_bar_CAVM_I3C_DEV8_CHAR_TABLE_LOC2 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV8_CHAR_TABLE_LOC2 0
#define arguments_CAVM_I3C_DEV8_CHAR_TABLE_LOC2 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev8_char_table_loc3
 *
 * I3C Ext Dev8 Char Table1 Loc3 Register
 * Device Characteristic Table Location-3 of Device1 through Device11
 */
union cavm_i3c_dev8_char_table_loc3
{
    uint32_t u;
    struct cavm_i3c_dev8_char_table_loc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
#else /* Word 0 - Little Endian */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev8_char_table_loc3_s cn; */
};
typedef union cavm_i3c_dev8_char_table_loc3 cavm_i3c_dev8_char_table_loc3_t;

#define CAVM_I3C_DEV8_CHAR_TABLE_LOC3 CAVM_I3C_DEV8_CHAR_TABLE_LOC3_FUNC()
static inline uint64_t CAVM_I3C_DEV8_CHAR_TABLE_LOC3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV8_CHAR_TABLE_LOC3_FUNC(void)
{
    return 0x87e0d0000688ll;
}

#define typedef_CAVM_I3C_DEV8_CHAR_TABLE_LOC3 cavm_i3c_dev8_char_table_loc3_t
#define bustype_CAVM_I3C_DEV8_CHAR_TABLE_LOC3 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV8_CHAR_TABLE_LOC3 "I3C_DEV8_CHAR_TABLE_LOC3"
#define device_bar_CAVM_I3C_DEV8_CHAR_TABLE_LOC3 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV8_CHAR_TABLE_LOC3 0
#define arguments_CAVM_I3C_DEV8_CHAR_TABLE_LOC3 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev8_char_table_loc4
 *
 * I3C Ext Dev8 Char Table1 Loc4 Register
 * Device Characteristic Table Location-4 of Device1 through Device11
 */
union cavm_i3c_dev8_char_table_loc4
{
    uint32_t u;
    struct cavm_i3c_dev8_char_table_loc4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
#else /* Word 0 - Little Endian */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev8_char_table_loc4_s cn; */
};
typedef union cavm_i3c_dev8_char_table_loc4 cavm_i3c_dev8_char_table_loc4_t;

#define CAVM_I3C_DEV8_CHAR_TABLE_LOC4 CAVM_I3C_DEV8_CHAR_TABLE_LOC4_FUNC()
static inline uint64_t CAVM_I3C_DEV8_CHAR_TABLE_LOC4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV8_CHAR_TABLE_LOC4_FUNC(void)
{
    return 0x87e0d000068cll;
}

#define typedef_CAVM_I3C_DEV8_CHAR_TABLE_LOC4 cavm_i3c_dev8_char_table_loc4_t
#define bustype_CAVM_I3C_DEV8_CHAR_TABLE_LOC4 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV8_CHAR_TABLE_LOC4 "I3C_DEV8_CHAR_TABLE_LOC4"
#define device_bar_CAVM_I3C_DEV8_CHAR_TABLE_LOC4 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV8_CHAR_TABLE_LOC4 0
#define arguments_CAVM_I3C_DEV8_CHAR_TABLE_LOC4 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev9_addr_table_loc1
 *
 * I3C Ext Dev9 Addr Table1 Loc1 Register
 * Device Address Table Location 1 of Device1 through Device11.
 */
union cavm_i3c_dev9_addr_table_loc1
{
    uint32_t u;
    struct cavm_i3c_dev9_addr_table_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                  0 = I3C.
                                                                  1 = I2C. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.

                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.

                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initiated by the Master. */
        uint32_t ring_id               : 3;  /**< [ 28: 26](R/W) Ring group identification. This field is used to put IBI from specific device to
                                                                 appropriate ring bundle. */
        uint32_t reserved_24_25        : 2;
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 The MSB, bit[23], should be programmed with parity of dynamic address. */
        uint32_t ts                    : 1;  /**< [ 15: 15](R/W) Marker for Timestamping IBI for specific device. Whether IBI was timestamped or not is provided
                                                                 in IBI Status Descriptor. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  - 0x0 - Accept: ACK the Master Request
                                                                  - 0x1 - Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  - 0x0 - Accept: ACK the SIR
                                                                  - 0x1 - Reject: NACK the SIR and send auto disable CCC. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  - 0x0 - IBI Without Mandatory Byte
                                                                  - 0x1 - IBI with one or more Mandatory Bytes. */
        uint32_t reserved_7_11         : 5;
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
#else /* Word 0 - Little Endian */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
        uint32_t reserved_7_11         : 5;
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  - 0x0 - IBI Without Mandatory Byte
                                                                  - 0x1 - IBI with one or more Mandatory Bytes. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  - 0x0 - Accept: ACK the SIR
                                                                  - 0x1 - Reject: NACK the SIR and send auto disable CCC. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  - 0x0 - Accept: ACK the Master Request
                                                                  - 0x1 - Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t ts                    : 1;  /**< [ 15: 15](R/W) Marker for Timestamping IBI for specific device. Whether IBI was timestamped or not is provided
                                                                 in IBI Status Descriptor. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 The MSB, bit[23], should be programmed with parity of dynamic address. */
        uint32_t reserved_24_25        : 2;
        uint32_t ring_id               : 3;  /**< [ 28: 26](R/W) Ring group identification. This field is used to put IBI from specific device to
                                                                 appropriate ring bundle. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.

                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.

                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initiated by the Master. */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                  0 = I3C.
                                                                  1 = I2C. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev9_addr_table_loc1_s cn; */
};
typedef union cavm_i3c_dev9_addr_table_loc1 cavm_i3c_dev9_addr_table_loc1_t;

#define CAVM_I3C_DEV9_ADDR_TABLE_LOC1 CAVM_I3C_DEV9_ADDR_TABLE_LOC1_FUNC()
static inline uint64_t CAVM_I3C_DEV9_ADDR_TABLE_LOC1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV9_ADDR_TABLE_LOC1_FUNC(void)
{
    return 0x87e0d0000448ll;
}

#define typedef_CAVM_I3C_DEV9_ADDR_TABLE_LOC1 cavm_i3c_dev9_addr_table_loc1_t
#define bustype_CAVM_I3C_DEV9_ADDR_TABLE_LOC1 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV9_ADDR_TABLE_LOC1 "I3C_DEV9_ADDR_TABLE_LOC1"
#define device_bar_CAVM_I3C_DEV9_ADDR_TABLE_LOC1 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV9_ADDR_TABLE_LOC1 0
#define arguments_CAVM_I3C_DEV9_ADDR_TABLE_LOC1 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev9_addr_table_loc2
 *
 * I3C Ext Dev9 Addr Table1 Loc2 Register
 * Device Address Table Location 2 of Device1 through Device11.
 */
union cavm_i3c_dev9_addr_table_loc2
{
    uint32_t u;
    struct cavm_i3c_dev9_addr_table_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t autocmd_hdr_code      : 8;  /**< [ 26: 19](R/W) Auto command HDR code */
        uint32_t autocmd_mode          : 3;  /**< [ 18: 16](R/W) Mode of automatic Read transaction on the Bus (Auto Command feature). */
        uint32_t autocmd_value         : 8;  /**< [ 15:  8](R/W) Value of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_mask          : 8;  /**< [  7:  0](R/W) Mask of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
#else /* Word 0 - Little Endian */
        uint32_t autocmd_mask          : 8;  /**< [  7:  0](R/W) Mask of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_value         : 8;  /**< [ 15:  8](R/W) Value of IBI mandatory byte that triggers automatic Read transaction on the
                                                                 Bus (Auto Command feature). */
        uint32_t autocmd_mode          : 3;  /**< [ 18: 16](R/W) Mode of automatic Read transaction on the Bus (Auto Command feature). */
        uint32_t autocmd_hdr_code      : 8;  /**< [ 26: 19](R/W) Auto command HDR code */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev9_addr_table_loc2_s cn; */
};
typedef union cavm_i3c_dev9_addr_table_loc2 cavm_i3c_dev9_addr_table_loc2_t;

#define CAVM_I3C_DEV9_ADDR_TABLE_LOC2 CAVM_I3C_DEV9_ADDR_TABLE_LOC2_FUNC()
static inline uint64_t CAVM_I3C_DEV9_ADDR_TABLE_LOC2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV9_ADDR_TABLE_LOC2_FUNC(void)
{
    return 0x87e0d000044cll;
}

#define typedef_CAVM_I3C_DEV9_ADDR_TABLE_LOC2 cavm_i3c_dev9_addr_table_loc2_t
#define bustype_CAVM_I3C_DEV9_ADDR_TABLE_LOC2 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV9_ADDR_TABLE_LOC2 "I3C_DEV9_ADDR_TABLE_LOC2"
#define device_bar_CAVM_I3C_DEV9_ADDR_TABLE_LOC2 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV9_ADDR_TABLE_LOC2 0
#define arguments_CAVM_I3C_DEV9_ADDR_TABLE_LOC2 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev9_char_table_loc1
 *
 * I3C Ext Dev9 Char Table1 Loc1 Register
 * Device Characteristic Table Location-1 of Device1 through Device11
 */
union cavm_i3c_dev9_char_table_loc1
{
    uint32_t u;
    struct cavm_i3c_dev9_char_table_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t msb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t msb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev9_char_table_loc1_s cn; */
};
typedef union cavm_i3c_dev9_char_table_loc1 cavm_i3c_dev9_char_table_loc1_t;

#define CAVM_I3C_DEV9_CHAR_TABLE_LOC1 CAVM_I3C_DEV9_CHAR_TABLE_LOC1_FUNC()
static inline uint64_t CAVM_I3C_DEV9_CHAR_TABLE_LOC1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV9_CHAR_TABLE_LOC1_FUNC(void)
{
    return 0x87e0d0000690ll;
}

#define typedef_CAVM_I3C_DEV9_CHAR_TABLE_LOC1 cavm_i3c_dev9_char_table_loc1_t
#define bustype_CAVM_I3C_DEV9_CHAR_TABLE_LOC1 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV9_CHAR_TABLE_LOC1 "I3C_DEV9_CHAR_TABLE_LOC1"
#define device_bar_CAVM_I3C_DEV9_CHAR_TABLE_LOC1 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV9_CHAR_TABLE_LOC1 0
#define arguments_CAVM_I3C_DEV9_CHAR_TABLE_LOC1 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev9_char_table_loc2
 *
 * I3C Ext Dev9 Char Table1 Loc2 Register
 * Device Characteristic Table Location-2 of Device1 through Device11
 */
union cavm_i3c_dev9_char_table_loc2
{
    uint32_t u;
    struct cavm_i3c_dev9_char_table_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t lsb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t lsb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev9_char_table_loc2_s cn; */
};
typedef union cavm_i3c_dev9_char_table_loc2 cavm_i3c_dev9_char_table_loc2_t;

#define CAVM_I3C_DEV9_CHAR_TABLE_LOC2 CAVM_I3C_DEV9_CHAR_TABLE_LOC2_FUNC()
static inline uint64_t CAVM_I3C_DEV9_CHAR_TABLE_LOC2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV9_CHAR_TABLE_LOC2_FUNC(void)
{
    return 0x87e0d0000694ll;
}

#define typedef_CAVM_I3C_DEV9_CHAR_TABLE_LOC2 cavm_i3c_dev9_char_table_loc2_t
#define bustype_CAVM_I3C_DEV9_CHAR_TABLE_LOC2 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV9_CHAR_TABLE_LOC2 "I3C_DEV9_CHAR_TABLE_LOC2"
#define device_bar_CAVM_I3C_DEV9_CHAR_TABLE_LOC2 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV9_CHAR_TABLE_LOC2 0
#define arguments_CAVM_I3C_DEV9_CHAR_TABLE_LOC2 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev9_char_table_loc3
 *
 * I3C Ext Dev9 Char Table1 Loc3 Register
 * Device Characteristic Table Location-3 of Device1 through Device11
 */
union cavm_i3c_dev9_char_table_loc3
{
    uint32_t u;
    struct cavm_i3c_dev9_char_table_loc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
#else /* Word 0 - Little Endian */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev9_char_table_loc3_s cn; */
};
typedef union cavm_i3c_dev9_char_table_loc3 cavm_i3c_dev9_char_table_loc3_t;

#define CAVM_I3C_DEV9_CHAR_TABLE_LOC3 CAVM_I3C_DEV9_CHAR_TABLE_LOC3_FUNC()
static inline uint64_t CAVM_I3C_DEV9_CHAR_TABLE_LOC3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV9_CHAR_TABLE_LOC3_FUNC(void)
{
    return 0x87e0d0000698ll;
}

#define typedef_CAVM_I3C_DEV9_CHAR_TABLE_LOC3 cavm_i3c_dev9_char_table_loc3_t
#define bustype_CAVM_I3C_DEV9_CHAR_TABLE_LOC3 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV9_CHAR_TABLE_LOC3 "I3C_DEV9_CHAR_TABLE_LOC3"
#define device_bar_CAVM_I3C_DEV9_CHAR_TABLE_LOC3 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV9_CHAR_TABLE_LOC3 0
#define arguments_CAVM_I3C_DEV9_CHAR_TABLE_LOC3 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev9_char_table_loc4
 *
 * I3C Ext Dev9 Char Table1 Loc4 Register
 * Device Characteristic Table Location-4 of Device1 through Device11
 */
union cavm_i3c_dev9_char_table_loc4
{
    uint32_t u;
    struct cavm_i3c_dev9_char_table_loc4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
#else /* Word 0 - Little Endian */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev9_char_table_loc4_s cn; */
};
typedef union cavm_i3c_dev9_char_table_loc4 cavm_i3c_dev9_char_table_loc4_t;

#define CAVM_I3C_DEV9_CHAR_TABLE_LOC4 CAVM_I3C_DEV9_CHAR_TABLE_LOC4_FUNC()
static inline uint64_t CAVM_I3C_DEV9_CHAR_TABLE_LOC4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV9_CHAR_TABLE_LOC4_FUNC(void)
{
    return 0x87e0d000069cll;
}

#define typedef_CAVM_I3C_DEV9_CHAR_TABLE_LOC4 cavm_i3c_dev9_char_table_loc4_t
#define bustype_CAVM_I3C_DEV9_CHAR_TABLE_LOC4 CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV9_CHAR_TABLE_LOC4 "I3C_DEV9_CHAR_TABLE_LOC4"
#define device_bar_CAVM_I3C_DEV9_CHAR_TABLE_LOC4 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV9_CHAR_TABLE_LOC4 0
#define arguments_CAVM_I3C_DEV9_CHAR_TABLE_LOC4 -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev_ctx_base_hi
 *
 * I3C Ext Dev Ctx Base Hi Register
 * The Device Context Address High register indicates the location of the Device
 * Context (DAT & DCT) when provided in memory.
 */
union cavm_i3c_dev_ctx_base_hi
{
    uint32_t u;
    struct cavm_i3c_dev_ctx_base_hi_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t base_hi               : 32; /**< [ 31:  0](RO/H) Device Context Base High.
                                                                 Upper 32 bits of pointer to physical memory allocated for Device Context. */
#else /* Word 0 - Little Endian */
        uint32_t base_hi               : 32; /**< [ 31:  0](RO/H) Device Context Base High.
                                                                 Upper 32 bits of pointer to physical memory allocated for Device Context. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev_ctx_base_hi_s cn; */
};
typedef union cavm_i3c_dev_ctx_base_hi cavm_i3c_dev_ctx_base_hi_t;

#define CAVM_I3C_DEV_CTX_BASE_HI CAVM_I3C_DEV_CTX_BASE_HI_FUNC()
static inline uint64_t CAVM_I3C_DEV_CTX_BASE_HI_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV_CTX_BASE_HI_FUNC(void)
{
    return 0x87e0d0000064ll;
}

#define typedef_CAVM_I3C_DEV_CTX_BASE_HI cavm_i3c_dev_ctx_base_hi_t
#define bustype_CAVM_I3C_DEV_CTX_BASE_HI CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV_CTX_BASE_HI "I3C_DEV_CTX_BASE_HI"
#define device_bar_CAVM_I3C_DEV_CTX_BASE_HI 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV_CTX_BASE_HI 0
#define arguments_CAVM_I3C_DEV_CTX_BASE_HI -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_dev_ctx_base_lo
 *
 * I3C Ext Dev Ctx Base Lo Register
 * The Device Context Address Low register indicates the location of the Device Context
 * (DAT & DCT) when provided in memory.
 */
union cavm_i3c_dev_ctx_base_lo
{
    uint32_t u;
    struct cavm_i3c_dev_ctx_base_lo_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t base_lo               : 32; /**< [ 31:  0](RO/H) Device Context Base Low.
                                                                 Lower 32 bits of pointer to physical memory allocated for the Device Context.
                                                                 The Device Context is DWORD aligned, so the last two address bits are always 2'b00. */
#else /* Word 0 - Little Endian */
        uint32_t base_lo               : 32; /**< [ 31:  0](RO/H) Device Context Base Low.
                                                                 Lower 32 bits of pointer to physical memory allocated for the Device Context.
                                                                 The Device Context is DWORD aligned, so the last two address bits are always 2'b00. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_dev_ctx_base_lo_s cn; */
};
typedef union cavm_i3c_dev_ctx_base_lo cavm_i3c_dev_ctx_base_lo_t;

#define CAVM_I3C_DEV_CTX_BASE_LO CAVM_I3C_DEV_CTX_BASE_LO_FUNC()
static inline uint64_t CAVM_I3C_DEV_CTX_BASE_LO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DEV_CTX_BASE_LO_FUNC(void)
{
    return 0x87e0d0000060ll;
}

#define typedef_CAVM_I3C_DEV_CTX_BASE_LO cavm_i3c_dev_ctx_base_lo_t
#define bustype_CAVM_I3C_DEV_CTX_BASE_LO CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DEV_CTX_BASE_LO "I3C_DEV_CTX_BASE_LO"
#define device_bar_CAVM_I3C_DEV_CTX_BASE_LO 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DEV_CTX_BASE_LO 0
#define arguments_CAVM_I3C_DEV_CTX_BASE_LO -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_ds_extcap_header
 *
 * I3C Ext Ds Extcap Header Register
 * Every Extended Capability is introduced with Extended Capability Header that
 * comprises single EXTCAP_HEADER  register
 * and a number of capability specific register.
 */
union cavm_i3c_ds_extcap_header
{
    uint32_t u;
    struct cavm_i3c_ds_extcap_header_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t cap_len               : 16; /**< [ 23:  8](RO/H) Length of capability structure. */
        uint32_t cap_id                : 8;  /**< [  7:  0](RO/H) Extended capability ID. */
#else /* Word 0 - Little Endian */
        uint32_t cap_id                : 8;  /**< [  7:  0](RO/H) Extended capability ID. */
        uint32_t cap_len               : 16; /**< [ 23:  8](RO/H) Length of capability structure. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_ds_extcap_header_s cn; */
};
typedef union cavm_i3c_ds_extcap_header cavm_i3c_ds_extcap_header_t;

#define CAVM_I3C_DS_EXTCAP_HEADER CAVM_I3C_DS_EXTCAP_HEADER_FUNC()
static inline uint64_t CAVM_I3C_DS_EXTCAP_HEADER_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_DS_EXTCAP_HEADER_FUNC(void)
{
    return 0x87e0d0000140ll;
}

#define typedef_CAVM_I3C_DS_EXTCAP_HEADER cavm_i3c_ds_extcap_header_t
#define bustype_CAVM_I3C_DS_EXTCAP_HEADER CSR_TYPE_RSL32b
#define basename_CAVM_I3C_DS_EXTCAP_HEADER "I3C_DS_EXTCAP_HEADER"
#define device_bar_CAVM_I3C_DS_EXTCAP_HEADER 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_DS_EXTCAP_HEADER 0
#define arguments_CAVM_I3C_DS_EXTCAP_HEADER -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_extcaps_section_offset
 *
 * I3C Ext Extcaps Section Offset Register
 * The Extended Capabilities Section Offset register indicates the location of the
 * Extended Capabilities section Of the register map.
 */
union cavm_i3c_extcaps_section_offset
{
    uint32_t u;
    struct cavm_i3c_extcaps_section_offset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t section_offset        : 16; /**< [ 15:  0](RO/H) Extended Capabilities Section Offset A value of 0 in this field indicates that
                                                                 the Extended Capabilities section is not implemented. */
#else /* Word 0 - Little Endian */
        uint32_t section_offset        : 16; /**< [ 15:  0](RO/H) Extended Capabilities Section Offset A value of 0 in this field indicates that
                                                                 the Extended Capabilities section is not implemented. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_extcaps_section_offset_s cn; */
};
typedef union cavm_i3c_extcaps_section_offset cavm_i3c_extcaps_section_offset_t;

#define CAVM_I3C_EXTCAPS_SECTION_OFFSET CAVM_I3C_EXTCAPS_SECTION_OFFSET_FUNC()
static inline uint64_t CAVM_I3C_EXTCAPS_SECTION_OFFSET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_EXTCAPS_SECTION_OFFSET_FUNC(void)
{
    return 0x87e0d0000040ll;
}

#define typedef_CAVM_I3C_EXTCAPS_SECTION_OFFSET cavm_i3c_extcaps_section_offset_t
#define bustype_CAVM_I3C_EXTCAPS_SECTION_OFFSET CSR_TYPE_RSL32b
#define basename_CAVM_I3C_EXTCAPS_SECTION_OFFSET "I3C_EXTCAPS_SECTION_OFFSET"
#define device_bar_CAVM_I3C_EXTCAPS_SECTION_OFFSET 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_EXTCAPS_SECTION_OFFSET 0
#define arguments_CAVM_I3C_EXTCAPS_SECTION_OFFSET -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_hc_capabilities
 *
 * I3C Ext HC Capabilities Register
 * Device Capabilities register identifies capabilities of the Master Host Controller hardware.
 */
union cavm_i3c_hc_capabilities
{
    uint32_t u;
    struct cavm_i3c_hc_capabilities_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t hdr_ts_en             : 1;  /**< [  7:  7](RO/H) Defines whether the Host Controller supports HDR-TS transfers. */
        uint32_t hdr_ddr_en            : 1;  /**< [  6:  6](RO/H) Defines whether the Host Controller supports HDR-DDR transfers. */
        uint32_t non_current_master_cap : 1; /**< [  5:  5](RO/H) Defines whether the Host Controller supports handoff of the Current Master role
                                                                 to another Device on the I3C Bus. */
        uint32_t reserved_4            : 1;
        uint32_t auto_command          : 1;  /**< [  3:  3](RO/H) Defines whether Host Controller supports IBI Auto Command functionality. */
        uint32_t combo_command         : 1;  /**< [  2:  2](RO/H) Defines whether Host Controller supports Combo Command Transfers. */
        uint32_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_1          : 2;
        uint32_t combo_command         : 1;  /**< [  2:  2](RO/H) Defines whether Host Controller supports Combo Command Transfers. */
        uint32_t auto_command          : 1;  /**< [  3:  3](RO/H) Defines whether Host Controller supports IBI Auto Command functionality. */
        uint32_t reserved_4            : 1;
        uint32_t non_current_master_cap : 1; /**< [  5:  5](RO/H) Defines whether the Host Controller supports handoff of the Current Master role
                                                                 to another Device on the I3C Bus. */
        uint32_t hdr_ddr_en            : 1;  /**< [  6:  6](RO/H) Defines whether the Host Controller supports HDR-DDR transfers. */
        uint32_t hdr_ts_en             : 1;  /**< [  7:  7](RO/H) Defines whether the Host Controller supports HDR-TS transfers. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_hc_capabilities_s cn; */
};
typedef union cavm_i3c_hc_capabilities cavm_i3c_hc_capabilities_t;

#define CAVM_I3C_HC_CAPABILITIES CAVM_I3C_HC_CAPABILITIES_FUNC()
static inline uint64_t CAVM_I3C_HC_CAPABILITIES_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_HC_CAPABILITIES_FUNC(void)
{
    return 0x87e0d000000cll;
}

#define typedef_CAVM_I3C_HC_CAPABILITIES cavm_i3c_hc_capabilities_t
#define bustype_CAVM_I3C_HC_CAPABILITIES CSR_TYPE_RSL32b
#define basename_CAVM_I3C_HC_CAPABILITIES "I3C_HC_CAPABILITIES"
#define device_bar_CAVM_I3C_HC_CAPABILITIES 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_HC_CAPABILITIES 0
#define arguments_CAVM_I3C_HC_CAPABILITIES -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_hc_control
 *
 * I3C Ext HC Control Register
 * Host Controller Control register is used to manage the Host Controller and Master Configuration.
 */
union cavm_i3c_hc_control
{
    uint32_t u;
    struct cavm_i3c_hc_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bus_enable            : 1;  /**< [ 31: 31](R/W) Host Controller Bus Enable Enables or disables the operation on the I3C Bus by
                                                                 the Host Controller. If the software sets this bit, then it also confirms that
                                                                 initialization is done, and that the Host Controller can use the programmed
                                                                 register values (For example, generation of SCL on IBI detection, and so on). If
                                                                 this bit is not set, then the Host Controller does not generate SCL for incoming
                                                                 IBI. Software may disable the Host Controller bus operation while it is active,
                                                                 However 1) If a disable request occurs while receiving IBI,the actual disabling
                                                                 does not occur until reception of the IBI is complete. 2) If a disable request
                                                                 occurs while the Host Controller still has additional Commands queued for
                                                                 transfers, then the actual disabling does not occur until transmission of all
                                                                 queued Commands is complete (that is, until the Host Controller encounters a
                                                                 Command with TOC set to 1). The Host Controller then returns to the Idle state
                                                                 (as indicated in register PRESENT_STATE). When the software reads the value 1'b0
                                                                 from this field, this indicates that the Host Controller bus operation disable
                                                                 operation has completed. */
        uint32_t resume                : 1;  /**< [ 30: 30](R/W1C) Host Controller Resume. */
        uint32_t abt                   : 1;  /**< [ 29: 29](R/W) Host Controller Abort. */
        uint32_t reserved_9_28         : 20;
        uint32_t hot_join_ctrl         : 1;  /**< [  8:  8](R/W) Hot-Join ACK/NACK Control. */
        uint32_t i2c_slave_present     : 1;  /**< [  7:  7](R/W) I2C Slave Present on Bus. */
        uint32_t reserved_1_6          : 6;
        uint32_t iba_include           : 1;  /**< [  0:  0](R/W) Include I3C Broadcast Address.
                                                                 This bit controls whether the I3C broadcast address (0x7E) is included for private transfers.
                                                                 If the I3C broadcast address is not included for private transfers, then In-band Interrupts (IBI)
                                                                 driven from Slaves might not win arbitration, potentially delaying acceptance of the IBIs. */
#else /* Word 0 - Little Endian */
        uint32_t iba_include           : 1;  /**< [  0:  0](R/W) Include I3C Broadcast Address.
                                                                 This bit controls whether the I3C broadcast address (0x7E) is included for private transfers.
                                                                 If the I3C broadcast address is not included for private transfers, then In-band Interrupts (IBI)
                                                                 driven from Slaves might not win arbitration, potentially delaying acceptance of the IBIs. */
        uint32_t reserved_1_6          : 6;
        uint32_t i2c_slave_present     : 1;  /**< [  7:  7](R/W) I2C Slave Present on Bus. */
        uint32_t hot_join_ctrl         : 1;  /**< [  8:  8](R/W) Hot-Join ACK/NACK Control. */
        uint32_t reserved_9_28         : 20;
        uint32_t abt                   : 1;  /**< [ 29: 29](R/W) Host Controller Abort. */
        uint32_t resume                : 1;  /**< [ 30: 30](R/W1C) Host Controller Resume. */
        uint32_t bus_enable            : 1;  /**< [ 31: 31](R/W) Host Controller Bus Enable Enables or disables the operation on the I3C Bus by
                                                                 the Host Controller. If the software sets this bit, then it also confirms that
                                                                 initialization is done, and that the Host Controller can use the programmed
                                                                 register values (For example, generation of SCL on IBI detection, and so on). If
                                                                 this bit is not set, then the Host Controller does not generate SCL for incoming
                                                                 IBI. Software may disable the Host Controller bus operation while it is active,
                                                                 However 1) If a disable request occurs while receiving IBI,the actual disabling
                                                                 does not occur until reception of the IBI is complete. 2) If a disable request
                                                                 occurs while the Host Controller still has additional Commands queued for
                                                                 transfers, then the actual disabling does not occur until transmission of all
                                                                 queued Commands is complete (that is, until the Host Controller encounters a
                                                                 Command with TOC set to 1). The Host Controller then returns to the Idle state
                                                                 (as indicated in register PRESENT_STATE). When the software reads the value 1'b0
                                                                 from this field, this indicates that the Host Controller bus operation disable
                                                                 operation has completed. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_hc_control_s cn; */
};
typedef union cavm_i3c_hc_control cavm_i3c_hc_control_t;

#define CAVM_I3C_HC_CONTROL CAVM_I3C_HC_CONTROL_FUNC()
static inline uint64_t CAVM_I3C_HC_CONTROL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_HC_CONTROL_FUNC(void)
{
    return 0x87e0d0000004ll;
}

#define typedef_CAVM_I3C_HC_CONTROL cavm_i3c_hc_control_t
#define bustype_CAVM_I3C_HC_CONTROL CSR_TYPE_RSL32b
#define basename_CAVM_I3C_HC_CONTROL "I3C_HC_CONTROL"
#define device_bar_CAVM_I3C_HC_CONTROL 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_HC_CONTROL 0
#define arguments_CAVM_I3C_HC_CONTROL -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_hci_version
 *
 * I3C Ext HCI Version Register
 * This register indicates the version number of the I3C HCI Specification (this
 * Specification) that the Host Controller implements.
 * The definition of this register does not change across all versions of the I3C HCI Specification.
 */
union cavm_i3c_hci_version
{
    uint32_t u;
    struct cavm_i3c_hci_version_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t hciversion            : 32; /**< [ 31:  0](RO/H) HCI Version. */
#else /* Word 0 - Little Endian */
        uint32_t hciversion            : 32; /**< [ 31:  0](RO/H) HCI Version. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_hci_version_s cn; */
};
typedef union cavm_i3c_hci_version cavm_i3c_hci_version_t;

#define CAVM_I3C_HCI_VERSION CAVM_I3C_HCI_VERSION_FUNC()
static inline uint64_t CAVM_I3C_HCI_VERSION_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_HCI_VERSION_FUNC(void)
{
    return 0x87e0d0000000ll;
}

#define typedef_CAVM_I3C_HCI_VERSION cavm_i3c_hci_version_t
#define bustype_CAVM_I3C_HCI_VERSION CSR_TYPE_RSL32b
#define basename_CAVM_I3C_HCI_VERSION "I3C_HCI_VERSION"
#define device_bar_CAVM_I3C_HCI_VERSION 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_HCI_VERSION 0
#define arguments_CAVM_I3C_HCI_VERSION -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_hw_identification_header
 *
 * I3C Ext Hw Identification Header Register
 * Extended capability header register for Hardware identification registers.
 * Every Extended Capability is introduced with Extended Capability Header that
 * comprises single EXTCAP_HEADER register
 * and a number of capability specific register.
 */
union cavm_i3c_hw_identification_header
{
    uint32_t u;
    struct cavm_i3c_hw_identification_header_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t cap_len               : 16; /**< [ 23:  8](RO/H) Length of capability structure. */
        uint32_t cap_id                : 8;  /**< [  7:  0](RO/H) Extended capability ID. */
#else /* Word 0 - Little Endian */
        uint32_t cap_id                : 8;  /**< [  7:  0](RO/H) Extended capability ID. */
        uint32_t cap_len               : 16; /**< [ 23:  8](RO/H) Length of capability structure. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_hw_identification_header_s cn; */
};
typedef union cavm_i3c_hw_identification_header cavm_i3c_hw_identification_header_t;

#define CAVM_I3C_HW_IDENTIFICATION_HEADER CAVM_I3C_HW_IDENTIFICATION_HEADER_FUNC()
static inline uint64_t CAVM_I3C_HW_IDENTIFICATION_HEADER_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_HW_IDENTIFICATION_HEADER_FUNC(void)
{
    return 0x87e0d0000100ll;
}

#define typedef_CAVM_I3C_HW_IDENTIFICATION_HEADER cavm_i3c_hw_identification_header_t
#define bustype_CAVM_I3C_HW_IDENTIFICATION_HEADER CSR_TYPE_RSL32b
#define basename_CAVM_I3C_HW_IDENTIFICATION_HEADER "I3C_HW_IDENTIFICATION_HEADER"
#define device_bar_CAVM_I3C_HW_IDENTIFICATION_HEADER 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_HW_IDENTIFICATION_HEADER 0
#define arguments_CAVM_I3C_HW_IDENTIFICATION_HEADER -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_ibi_notify_ctrl
 *
 * I3C Ext Ibi Notify Ctrl Register
 * The IBI Notify Control register enables or disables event notifications for the IBI Queue/Ring.
 */
union cavm_i3c_ibi_notify_ctrl
{
    uint32_t u;
    struct cavm_i3c_ibi_notify_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t notify_sir_rejected   : 1;  /**< [  3:  3](R/W) Notify Rejected Slave Interrupt Request Control
                                                                 Enables or disables reporting rejection of individual Slave Interrupt Requests (SIR). */
        uint32_t reserved_2            : 1;
        uint32_t notify_mr_rejected    : 1;  /**< [  1:  1](R/W) Notify Rejected Master Request Control
                                                                 Enables or disables reporting rejection of individual Master Requests. */
        uint32_t notify_hj_rejected    : 1;  /**< [  0:  0](R/W) Notify Rejected Hot-Join Control
                                                                 Enables or disables reporting rejection of individual Hot Join requests. */
#else /* Word 0 - Little Endian */
        uint32_t notify_hj_rejected    : 1;  /**< [  0:  0](R/W) Notify Rejected Hot-Join Control
                                                                 Enables or disables reporting rejection of individual Hot Join requests. */
        uint32_t notify_mr_rejected    : 1;  /**< [  1:  1](R/W) Notify Rejected Master Request Control
                                                                 Enables or disables reporting rejection of individual Master Requests. */
        uint32_t reserved_2            : 1;
        uint32_t notify_sir_rejected   : 1;  /**< [  3:  3](R/W) Notify Rejected Slave Interrupt Request Control
                                                                 Enables or disables reporting rejection of individual Slave Interrupt Requests (SIR). */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_ibi_notify_ctrl_s cn; */
};
typedef union cavm_i3c_ibi_notify_ctrl cavm_i3c_ibi_notify_ctrl_t;

#define CAVM_I3C_IBI_NOTIFY_CTRL CAVM_I3C_IBI_NOTIFY_CTRL_FUNC()
static inline uint64_t CAVM_I3C_IBI_NOTIFY_CTRL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_IBI_NOTIFY_CTRL_FUNC(void)
{
    return 0x87e0d0000058ll;
}

#define typedef_CAVM_I3C_IBI_NOTIFY_CTRL cavm_i3c_ibi_notify_ctrl_t
#define bustype_CAVM_I3C_IBI_NOTIFY_CTRL CSR_TYPE_RSL32b
#define basename_CAVM_I3C_IBI_NOTIFY_CTRL "I3C_IBI_NOTIFY_CTRL"
#define device_bar_CAVM_I3C_IBI_NOTIFY_CTRL 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_IBI_NOTIFY_CTRL 0
#define arguments_CAVM_I3C_IBI_NOTIFY_CTRL -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_ibi_port
 *
 * I3C Ext Ibi Port Register
 * IBI Port Register is used to read IBI queue status descriptor and read IBI queue
 * data (raw/opaque data)
 */
union cavm_i3c_ibi_port
{
    uint32_t u;
    struct cavm_i3c_ibi_port_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ibi_data              : 32; /**< [ 31:  0](RO/H) Data read from IBI Data Buffer

                                                                 This register is mapped to IBI ring data buffer. The IBI data is always packed
                                                                 in 4-byte aligned and put to the
                                                                 IBI ring. If the incoming data is not aligned to the 4-bytes, then there are
                                                                 unused bytes in the end location
                                                                 of the IBI data buffer. */
#else /* Word 0 - Little Endian */
        uint32_t ibi_data              : 32; /**< [ 31:  0](RO/H) Data read from IBI Data Buffer

                                                                 This register is mapped to IBI ring data buffer. The IBI data is always packed
                                                                 in 4-byte aligned and put to the
                                                                 IBI ring. If the incoming data is not aligned to the 4-bytes, then there are
                                                                 unused bytes in the end location
                                                                 of the IBI data buffer. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_ibi_port_s cn; */
};
typedef union cavm_i3c_ibi_port cavm_i3c_ibi_port_t;

#define CAVM_I3C_IBI_PORT CAVM_I3C_IBI_PORT_FUNC()
static inline uint64_t CAVM_I3C_IBI_PORT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_IBI_PORT_FUNC(void)
{
    return 0x87e0d000030cll;
}

#define typedef_CAVM_I3C_IBI_PORT cavm_i3c_ibi_port_t
#define bustype_CAVM_I3C_IBI_PORT CSR_TYPE_RSL32b
#define basename_CAVM_I3C_IBI_PORT "I3C_IBI_PORT"
#define device_bar_CAVM_I3C_IBI_PORT 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_IBI_PORT 0
#define arguments_CAVM_I3C_IBI_PORT -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_int
 *
 * I3C Ext Pio Intr Status Register
 * The PIO Interrupt Status register indicates the status of outstanding interrupts.
 */
union cavm_i3c_int
{
    uint32_t u;
    struct cavm_i3c_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_10_31        : 22;
        uint32_t transfer_err_stat     : 1;  /**< [  9:  9](R/W1C/H) The Host Controller sets this bit to 1'b1 when any tranfer error occurs on the I3C Bus.
                                                                 The Error Type for this error is available in the Response structure
                                                                 corresponding to this transfer/command.
                                                                 To clear, write 1'b0 to this bit. */
        uint32_t reserved_6_8          : 3;
        uint32_t transfer_abort_stat   : 1;  /**< [  5:  5](R/W1C/H) Transfer Abort Status
                                                                 The Host Controller sets this bit to 1'b1 when any transfer is aborted.
                                                                 To clear, write 1'b0 to this bit. */
        uint32_t resp_ready_stat       : 1;  /**< [  4:  4](RO/H) The Host Controller sets this bit to 1'b1 when the number of Response Queue
                                                                 entries is \>= the RESP_BUF_THLD threshold (See Register QUEUE_THLD_CTRL).
                                                                 The Host Controller automatically clears this field to 1'b0 when the number of
                                                                 Response Queue entries falls below the RESP_BUF_THLD threshold. */
        uint32_t cmd_queue_ready_stat  : 1;  /**< [  3:  3](RO/H) The Host Controller sets this bit to 1'b1 when the number of Command Queue
                                                                 entries is \<= the CMD_EMPTY_BUF_THLD threshold (See Register QUEUE_THLD_CTRL).
                                                                 The Host Controller automatically clears this field to 1'b0 when the number of
                                                                 Command Queue entries exceeds the RESP_BUF_THLD threshold. */
        uint32_t ibi_status_thld_stat  : 1;  /**< [  2:  2](RO/H) The Host Controller sets this bit to 1'b1 when the number of IBI Status Entries
                                                                 in the IBI Queue reaches the IBI_STATUS_THLD threshold (See Register
                                                                 QUEUE_THLD_CTRL).
                                                                 The Host Controller automatically clears this field to 1'b0 when the number of
                                                                 IBI Status entries in the IBI Queue falls below the IBI_STATUS_THLD threshold as
                                                                 a result of application reads. */
        uint32_t rx_thld_stat          : 1;  /**< [  1:  1](RO/H) The Host Controller sets this bit to 1'b1 when the number of entries in the Rx
                                                                 Data Queue is \>= the RX_BUF_THLD threshold (See Register DATA_BUFFER_THLD_CTRL).
                                                                 The Host Controller automatically clears this field to 1'b0 when the number of
                                                                 Rx Data Queue entries falls below the RX_BUF_THLD threshold. */
        uint32_t tx_thld_stat          : 1;  /**< [  0:  0](RO/H) The Host Controller sets this bit to 1'b1 when the number of entries in the Tx
                                                                 Data Queue is \<= the TX_BUF_THLD threshold (see register DATA_BUFFER_THLD_CTRL).
                                                                 The Host Controller automatically clears this field to 1'b0 when the number of
                                                                 Tx Data Queue entries exceeds the TX_BUF_THLD threshold. */
#else /* Word 0 - Little Endian */
        uint32_t tx_thld_stat          : 1;  /**< [  0:  0](RO/H) The Host Controller sets this bit to 1'b1 when the number of entries in the Tx
                                                                 Data Queue is \<= the TX_BUF_THLD threshold (see register DATA_BUFFER_THLD_CTRL).
                                                                 The Host Controller automatically clears this field to 1'b0 when the number of
                                                                 Tx Data Queue entries exceeds the TX_BUF_THLD threshold. */
        uint32_t rx_thld_stat          : 1;  /**< [  1:  1](RO/H) The Host Controller sets this bit to 1'b1 when the number of entries in the Rx
                                                                 Data Queue is \>= the RX_BUF_THLD threshold (See Register DATA_BUFFER_THLD_CTRL).
                                                                 The Host Controller automatically clears this field to 1'b0 when the number of
                                                                 Rx Data Queue entries falls below the RX_BUF_THLD threshold. */
        uint32_t ibi_status_thld_stat  : 1;  /**< [  2:  2](RO/H) The Host Controller sets this bit to 1'b1 when the number of IBI Status Entries
                                                                 in the IBI Queue reaches the IBI_STATUS_THLD threshold (See Register
                                                                 QUEUE_THLD_CTRL).
                                                                 The Host Controller automatically clears this field to 1'b0 when the number of
                                                                 IBI Status entries in the IBI Queue falls below the IBI_STATUS_THLD threshold as
                                                                 a result of application reads. */
        uint32_t cmd_queue_ready_stat  : 1;  /**< [  3:  3](RO/H) The Host Controller sets this bit to 1'b1 when the number of Command Queue
                                                                 entries is \<= the CMD_EMPTY_BUF_THLD threshold (See Register QUEUE_THLD_CTRL).
                                                                 The Host Controller automatically clears this field to 1'b0 when the number of
                                                                 Command Queue entries exceeds the RESP_BUF_THLD threshold. */
        uint32_t resp_ready_stat       : 1;  /**< [  4:  4](RO/H) The Host Controller sets this bit to 1'b1 when the number of Response Queue
                                                                 entries is \>= the RESP_BUF_THLD threshold (See Register QUEUE_THLD_CTRL).
                                                                 The Host Controller automatically clears this field to 1'b0 when the number of
                                                                 Response Queue entries falls below the RESP_BUF_THLD threshold. */
        uint32_t transfer_abort_stat   : 1;  /**< [  5:  5](R/W1C/H) Transfer Abort Status
                                                                 The Host Controller sets this bit to 1'b1 when any transfer is aborted.
                                                                 To clear, write 1'b0 to this bit. */
        uint32_t reserved_6_8          : 3;
        uint32_t transfer_err_stat     : 1;  /**< [  9:  9](R/W1C/H) The Host Controller sets this bit to 1'b1 when any tranfer error occurs on the I3C Bus.
                                                                 The Error Type for this error is available in the Response structure
                                                                 corresponding to this transfer/command.
                                                                 To clear, write 1'b0 to this bit. */
        uint32_t reserved_10_31        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_int_s cn; */
};
typedef union cavm_i3c_int cavm_i3c_int_t;

#define CAVM_I3C_INT CAVM_I3C_INT_FUNC()
static inline uint64_t CAVM_I3C_INT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_INT_FUNC(void)
{
    return 0x87e0d0000320ll;
}

#define typedef_CAVM_I3C_INT cavm_i3c_int_t
#define bustype_CAVM_I3C_INT CSR_TYPE_RSL32b
#define basename_CAVM_I3C_INT "I3C_INT"
#define device_bar_CAVM_I3C_INT 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_INT 0
#define arguments_CAVM_I3C_INT -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_int_ena_w1c
 *
 * I3C Ext Pio Intr Signal Clear(Int Mask) Register
 * The PIO Interrupt Signal Enable register enables signaling of outstanding interrupts
 * received by the Host Controller.
 */
union cavm_i3c_int_ena_w1c
{
    uint32_t u;
    struct cavm_i3c_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_10_31        : 22;
        uint32_t transfer_err_signal_en : 1; /**< [  9:  9](R/W1C/H) Reads or sets I3C()_INT[TRANSFER_ERR_STAT]. */
        uint32_t reserved_6_8          : 3;
        uint32_t transfer_abort_signal_en : 1;/**< [  5:  5](R/W1C/H) Reads or sets I3C()_INT[TRANSFER_ABORT_SIGNAL_EN]. */
        uint32_t resp_ready_signal_en  : 1;  /**< [  4:  4](R/W1C/H) Reads or sets I3C()_INT[RESP_READY_SIGNAL_EN]. */
        uint32_t cmd_queue_ready_signal_en : 1;/**< [  3:  3](R/W1C/H) Reads or sets I3C()_INT[CMD_QUEUE_READY_SIGNAL_EN]. */
        uint32_t ibi_thld_signal_en    : 1;  /**< [  2:  2](R/W1C/H) Reads or sets I3C()_INT[IBI_THLD_SIGNAL_EN]. */
        uint32_t rx_thld_signal_en     : 1;  /**< [  1:  1](R/W1C/H) Reads or sets I3C()_INT[RX_THLD_SIGNAL_EN]. */
        uint32_t tx_thld_signal_en     : 1;  /**< [  0:  0](R/W1C/H) Reads or sets I3C()_INT[TX_THLD_SIGNAL_EN]. */
#else /* Word 0 - Little Endian */
        uint32_t tx_thld_signal_en     : 1;  /**< [  0:  0](R/W1C/H) Reads or sets I3C()_INT[TX_THLD_SIGNAL_EN]. */
        uint32_t rx_thld_signal_en     : 1;  /**< [  1:  1](R/W1C/H) Reads or sets I3C()_INT[RX_THLD_SIGNAL_EN]. */
        uint32_t ibi_thld_signal_en    : 1;  /**< [  2:  2](R/W1C/H) Reads or sets I3C()_INT[IBI_THLD_SIGNAL_EN]. */
        uint32_t cmd_queue_ready_signal_en : 1;/**< [  3:  3](R/W1C/H) Reads or sets I3C()_INT[CMD_QUEUE_READY_SIGNAL_EN]. */
        uint32_t resp_ready_signal_en  : 1;  /**< [  4:  4](R/W1C/H) Reads or sets I3C()_INT[RESP_READY_SIGNAL_EN]. */
        uint32_t transfer_abort_signal_en : 1;/**< [  5:  5](R/W1C/H) Reads or sets I3C()_INT[TRANSFER_ABORT_SIGNAL_EN]. */
        uint32_t reserved_6_8          : 3;
        uint32_t transfer_err_signal_en : 1; /**< [  9:  9](R/W1C/H) Reads or sets I3C()_INT[TRANSFER_ERR_STAT]. */
        uint32_t reserved_10_31        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_int_ena_w1c_s cn; */
};
typedef union cavm_i3c_int_ena_w1c cavm_i3c_int_ena_w1c_t;

#define CAVM_I3C_INT_ENA_W1C CAVM_I3C_INT_ENA_W1C_FUNC()
static inline uint64_t CAVM_I3C_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_INT_ENA_W1C_FUNC(void)
{
    return 0x87e0d0000730ll;
}

#define typedef_CAVM_I3C_INT_ENA_W1C cavm_i3c_int_ena_w1c_t
#define bustype_CAVM_I3C_INT_ENA_W1C CSR_TYPE_RSL32b
#define basename_CAVM_I3C_INT_ENA_W1C "I3C_INT_ENA_W1C"
#define device_bar_CAVM_I3C_INT_ENA_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_INT_ENA_W1C 0
#define arguments_CAVM_I3C_INT_ENA_W1C -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_int_ena_w1s
 *
 * I3C Ext Pio Intr Status Enable(Logging) Register
 * The PIO Interrupt Status Enable register enables reporting of outstanding interrupts.
 */
union cavm_i3c_int_ena_w1s
{
    uint32_t u;
    struct cavm_i3c_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_10_31        : 22;
        uint32_t transfer_err_stat_en  : 1;  /**< [  9:  9](R/W1S) Enables reporting of I3C()_INT[TRANSFER_ERR_STAT]. */
        uint32_t reserved_6_8          : 3;
        uint32_t transfer_abort_stat_en : 1; /**< [  5:  5](R/W1S) Enables reporting of I3C()_INT[TRANSFER_ABORT_STAT]. */
        uint32_t resp_ready_stat_intr_en : 1;/**< [  4:  4](R/W1S) Enables reporting of I3C()_INT[RESP_READY_STAT]. */
        uint32_t cmd_queue_ready_stat_en : 1;/**< [  3:  3](R/W1S) Enables reporting of I3C()_INT[CMD_QUEUE_READY_STAT]. */
        uint32_t ibi_thld_stat_en      : 1;  /**< [  2:  2](R/W1S) Enables reporting of I3C()_INT[IBI_THLD_STAT]. */
        uint32_t rx_thld_stat_en       : 1;  /**< [  1:  1](R/W1S) Enables reporting of I3C()_INT[RX_THLD_STAT]. */
        uint32_t tx_thld_stat_en       : 1;  /**< [  0:  0](R/W1S) Enables reporting of I3C()_INT[TX_THLD_STAT]. */
#else /* Word 0 - Little Endian */
        uint32_t tx_thld_stat_en       : 1;  /**< [  0:  0](R/W1S) Enables reporting of I3C()_INT[TX_THLD_STAT]. */
        uint32_t rx_thld_stat_en       : 1;  /**< [  1:  1](R/W1S) Enables reporting of I3C()_INT[RX_THLD_STAT]. */
        uint32_t ibi_thld_stat_en      : 1;  /**< [  2:  2](R/W1S) Enables reporting of I3C()_INT[IBI_THLD_STAT]. */
        uint32_t cmd_queue_ready_stat_en : 1;/**< [  3:  3](R/W1S) Enables reporting of I3C()_INT[CMD_QUEUE_READY_STAT]. */
        uint32_t resp_ready_stat_intr_en : 1;/**< [  4:  4](R/W1S) Enables reporting of I3C()_INT[RESP_READY_STAT]. */
        uint32_t transfer_abort_stat_en : 1; /**< [  5:  5](R/W1S) Enables reporting of I3C()_INT[TRANSFER_ABORT_STAT]. */
        uint32_t reserved_6_8          : 3;
        uint32_t transfer_err_stat_en  : 1;  /**< [  9:  9](R/W1S) Enables reporting of I3C()_INT[TRANSFER_ERR_STAT]. */
        uint32_t reserved_10_31        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_int_ena_w1s_s cn; */
};
typedef union cavm_i3c_int_ena_w1s cavm_i3c_int_ena_w1s_t;

#define CAVM_I3C_INT_ENA_W1S CAVM_I3C_INT_ENA_W1S_FUNC()
static inline uint64_t CAVM_I3C_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_INT_ENA_W1S_FUNC(void)
{
    return 0x87e0d0000324ll;
}

#define typedef_CAVM_I3C_INT_ENA_W1S cavm_i3c_int_ena_w1s_t
#define bustype_CAVM_I3C_INT_ENA_W1S CSR_TYPE_RSL32b
#define basename_CAVM_I3C_INT_ENA_W1S "I3C_INT_ENA_W1S"
#define device_bar_CAVM_I3C_INT_ENA_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_INT_ENA_W1S 0
#define arguments_CAVM_I3C_INT_ENA_W1S -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_int_w1s
 *
 * I3C Ext Pio Intr Signal Enable(Int Mask) Register
 * The PIO Interrupt Signal Enable register enables signaling of outstanding interrupts
 * received by the Host Controller.
 */
union cavm_i3c_int_w1s
{
    uint32_t u;
    struct cavm_i3c_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_10_31        : 22;
        uint32_t transfer_err_signal_en : 1; /**< [  9:  9](R/W1S) Reads or sets I3C()_INT[TRANSFER_ERR_STAT]. */
        uint32_t reserved_6_8          : 3;
        uint32_t transfer_abort_signal_en : 1;/**< [  5:  5](R/W1S) Reads or sets I3C()_INT[TRANSFER_ABORT_SIGNAL_EN]. */
        uint32_t resp_ready_signal_en  : 1;  /**< [  4:  4](R/W1S) Reads or sets I3C()_INT[RESP_READY_SIGNAL_EN]. */
        uint32_t cmd_queue_ready_signal_en : 1;/**< [  3:  3](R/W1S) Reads or sets I3C()_INT[CMD_QUEUE_READY_SIGNAL_EN]. */
        uint32_t ibi_thld_signal_en    : 1;  /**< [  2:  2](R/W1S) Reads or sets I3C()_INT[IBI_THLD_SIGNAL_EN]. */
        uint32_t rx_thld_signal_en     : 1;  /**< [  1:  1](R/W1S) Reads or sets I3C()_INT[RX_THLD_SIGNAL_EN]. */
        uint32_t tx_thld_signal_en     : 1;  /**< [  0:  0](R/W1S) Reads or sets I3C()_INT[TX_THLD_SIGNAL_EN]. */
#else /* Word 0 - Little Endian */
        uint32_t tx_thld_signal_en     : 1;  /**< [  0:  0](R/W1S) Reads or sets I3C()_INT[TX_THLD_SIGNAL_EN]. */
        uint32_t rx_thld_signal_en     : 1;  /**< [  1:  1](R/W1S) Reads or sets I3C()_INT[RX_THLD_SIGNAL_EN]. */
        uint32_t ibi_thld_signal_en    : 1;  /**< [  2:  2](R/W1S) Reads or sets I3C()_INT[IBI_THLD_SIGNAL_EN]. */
        uint32_t cmd_queue_ready_signal_en : 1;/**< [  3:  3](R/W1S) Reads or sets I3C()_INT[CMD_QUEUE_READY_SIGNAL_EN]. */
        uint32_t resp_ready_signal_en  : 1;  /**< [  4:  4](R/W1S) Reads or sets I3C()_INT[RESP_READY_SIGNAL_EN]. */
        uint32_t transfer_abort_signal_en : 1;/**< [  5:  5](R/W1S) Reads or sets I3C()_INT[TRANSFER_ABORT_SIGNAL_EN]. */
        uint32_t reserved_6_8          : 3;
        uint32_t transfer_err_signal_en : 1; /**< [  9:  9](R/W1S) Reads or sets I3C()_INT[TRANSFER_ERR_STAT]. */
        uint32_t reserved_10_31        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_int_w1s_s cn; */
};
typedef union cavm_i3c_int_w1s cavm_i3c_int_w1s_t;

#define CAVM_I3C_INT_W1S CAVM_I3C_INT_W1S_FUNC()
static inline uint64_t CAVM_I3C_INT_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_INT_W1S_FUNC(void)
{
    return 0x87e0d0000328ll;
}

#define typedef_CAVM_I3C_INT_W1S cavm_i3c_int_w1s_t
#define bustype_CAVM_I3C_INT_W1S CSR_TYPE_RSL32b
#define basename_CAVM_I3C_INT_W1S "I3C_INT_W1S"
#define device_bar_CAVM_I3C_INT_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_INT_W1S 0
#define arguments_CAVM_I3C_INT_W1S -1,-1,-1,-1

/**
 * Register (RSL) i3c_intr
 *
 * I3C PF Interrupt Register
 * This register contains the different interrupt summary bits of the I3C.
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 * This register is reset on cold reset.
 */
union cavm_i3c_intr
{
    uint64_t u;
    struct cavm_i3c_intr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t i3c_intr_out          : 1;  /**< [  0:  0](R/W1C/H) I3C interrupt output. */
#else /* Word 0 - Little Endian */
        uint64_t i3c_intr_out          : 1;  /**< [  0:  0](R/W1C/H) I3C interrupt output. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_intr_s cn; */
};
typedef union cavm_i3c_intr cavm_i3c_intr_t;

#define CAVM_I3C_INTR CAVM_I3C_INTR_FUNC()
static inline uint64_t CAVM_I3C_INTR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_INTR_FUNC(void)
{
    return 0x87e0d0000750ll;
}

#define typedef_CAVM_I3C_INTR cavm_i3c_intr_t
#define bustype_CAVM_I3C_INTR CSR_TYPE_RSL
#define basename_CAVM_I3C_INTR "I3C_INTR"
#define device_bar_CAVM_I3C_INTR 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_INTR 0
#define arguments_CAVM_I3C_INTR -1,-1,-1,-1

/**
 * Register (RSL) i3c_intr_ena_w1c
 *
 * I3C PF Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_i3c_intr_ena_w1c
{
    uint64_t u;
    struct cavm_i3c_intr_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t i3c_intr_out          : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for I3C_INTR[I3C_INTR_OUT]. */
#else /* Word 0 - Little Endian */
        uint64_t i3c_intr_out          : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for I3C_INTR[I3C_INTR_OUT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_intr_ena_w1c_s cn; */
};
typedef union cavm_i3c_intr_ena_w1c cavm_i3c_intr_ena_w1c_t;

#define CAVM_I3C_INTR_ENA_W1C CAVM_I3C_INTR_ENA_W1C_FUNC()
static inline uint64_t CAVM_I3C_INTR_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_INTR_ENA_W1C_FUNC(void)
{
    return 0x87e0d0000760ll;
}

#define typedef_CAVM_I3C_INTR_ENA_W1C cavm_i3c_intr_ena_w1c_t
#define bustype_CAVM_I3C_INTR_ENA_W1C CSR_TYPE_RSL
#define basename_CAVM_I3C_INTR_ENA_W1C "I3C_INTR_ENA_W1C"
#define device_bar_CAVM_I3C_INTR_ENA_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_INTR_ENA_W1C 0
#define arguments_CAVM_I3C_INTR_ENA_W1C -1,-1,-1,-1

/**
 * Register (RSL) i3c_intr_ena_w1s
 *
 * I3C PF Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_i3c_intr_ena_w1s
{
    uint64_t u;
    struct cavm_i3c_intr_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t i3c_intr_out          : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for I3C_INTR[I3C_INTR_OUT]. */
#else /* Word 0 - Little Endian */
        uint64_t i3c_intr_out          : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for I3C_INTR[I3C_INTR_OUT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_intr_ena_w1s_s cn; */
};
typedef union cavm_i3c_intr_ena_w1s cavm_i3c_intr_ena_w1s_t;

#define CAVM_I3C_INTR_ENA_W1S CAVM_I3C_INTR_ENA_W1S_FUNC()
static inline uint64_t CAVM_I3C_INTR_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_INTR_ENA_W1S_FUNC(void)
{
    return 0x87e0d0000768ll;
}

#define typedef_CAVM_I3C_INTR_ENA_W1S cavm_i3c_intr_ena_w1s_t
#define bustype_CAVM_I3C_INTR_ENA_W1S CSR_TYPE_RSL
#define basename_CAVM_I3C_INTR_ENA_W1S "I3C_INTR_ENA_W1S"
#define device_bar_CAVM_I3C_INTR_ENA_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_INTR_ENA_W1S 0
#define arguments_CAVM_I3C_INTR_ENA_W1S -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_intr_force
 *
 * I3C Ext Intr Force Register
 * The Interrupt Force register is used to force a specific interrupt for debugging purposes.
 */
union cavm_i3c_intr_force
{
    uint32_t u;
    struct cavm_i3c_intr_force_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_11_31        : 21;
        uint32_t hc_internal_err_force : 1;  /**< [ 10: 10](WO) Host Controller Internal Error Force, SW mechanism to cause a interrupt. */
        uint32_t reserved_0_9          : 10;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_9          : 10;
        uint32_t hc_internal_err_force : 1;  /**< [ 10: 10](WO) Host Controller Internal Error Force, SW mechanism to cause a interrupt. */
        uint32_t reserved_11_31        : 21;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_intr_force_s cn; */
};
typedef union cavm_i3c_intr_force cavm_i3c_intr_force_t;

#define CAVM_I3C_INTR_FORCE CAVM_I3C_INTR_FORCE_FUNC()
static inline uint64_t CAVM_I3C_INTR_FORCE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_INTR_FORCE_FUNC(void)
{
    return 0x87e0d000002cll;
}

#define typedef_CAVM_I3C_INTR_FORCE cavm_i3c_intr_force_t
#define bustype_CAVM_I3C_INTR_FORCE CSR_TYPE_RSL32b
#define basename_CAVM_I3C_INTR_FORCE "I3C_INTR_FORCE"
#define device_bar_CAVM_I3C_INTR_FORCE 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_INTR_FORCE 0
#define arguments_CAVM_I3C_INTR_FORCE -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_intr_signal_enable
 *
 * I3C Ext Intr Signal Enable Register
 * Interrupt Enable.
 */
union cavm_i3c_intr_signal_enable
{
    uint32_t u;
    struct cavm_i3c_intr_signal_enable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_11_31        : 21;
        uint32_t hc_internal_err_signal_en : 1;/**< [ 10: 10](R/W) Host Controller Internal Error Signal Enable. */
        uint32_t reserved_0_9          : 10;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_9          : 10;
        uint32_t hc_internal_err_signal_en : 1;/**< [ 10: 10](R/W) Host Controller Internal Error Signal Enable. */
        uint32_t reserved_11_31        : 21;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_intr_signal_enable_s cn; */
};
typedef union cavm_i3c_intr_signal_enable cavm_i3c_intr_signal_enable_t;

#define CAVM_I3C_INTR_SIGNAL_ENABLE CAVM_I3C_INTR_SIGNAL_ENABLE_FUNC()
static inline uint64_t CAVM_I3C_INTR_SIGNAL_ENABLE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_INTR_SIGNAL_ENABLE_FUNC(void)
{
    return 0x87e0d0000028ll;
}

#define typedef_CAVM_I3C_INTR_SIGNAL_ENABLE cavm_i3c_intr_signal_enable_t
#define bustype_CAVM_I3C_INTR_SIGNAL_ENABLE CSR_TYPE_RSL32b
#define basename_CAVM_I3C_INTR_SIGNAL_ENABLE "I3C_INTR_SIGNAL_ENABLE"
#define device_bar_CAVM_I3C_INTR_SIGNAL_ENABLE 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_INTR_SIGNAL_ENABLE 0
#define arguments_CAVM_I3C_INTR_SIGNAL_ENABLE -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_intr_status
 *
 * I3C Ext Intr Status Register
 * The Interrupt Status register reflects the status of outstanding interrupt(s). The
 * status fields are either RW1C (write 1 to clear), or else are cleared based on queue
 * operations.
 */
union cavm_i3c_intr_status
{
    uint32_t u;
    struct cavm_i3c_intr_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_11_31        : 21;
        uint32_t hc_internal_err_stat  : 1;  /**< [ 10: 10](R/W1C) Host Controller Internal Non recoverable Error. */
        uint32_t reserved_0_9          : 10;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_9          : 10;
        uint32_t hc_internal_err_stat  : 1;  /**< [ 10: 10](R/W1C) Host Controller Internal Non recoverable Error. */
        uint32_t reserved_11_31        : 21;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_intr_status_s cn; */
};
typedef union cavm_i3c_intr_status cavm_i3c_intr_status_t;

#define CAVM_I3C_INTR_STATUS CAVM_I3C_INTR_STATUS_FUNC()
static inline uint64_t CAVM_I3C_INTR_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_INTR_STATUS_FUNC(void)
{
    return 0x87e0d0000020ll;
}

#define typedef_CAVM_I3C_INTR_STATUS cavm_i3c_intr_status_t
#define bustype_CAVM_I3C_INTR_STATUS CSR_TYPE_RSL32b
#define basename_CAVM_I3C_INTR_STATUS "I3C_INTR_STATUS"
#define device_bar_CAVM_I3C_INTR_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_INTR_STATUS 0
#define arguments_CAVM_I3C_INTR_STATUS -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_intr_status_enable
 *
 * I3C Ext Intr Status Enable Register
 * The Interrupt Status Enable register enables or disables reporting of outstanding interrupts.
 */
union cavm_i3c_intr_status_enable
{
    uint32_t u;
    struct cavm_i3c_intr_status_enable_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_11_31        : 21;
        uint32_t hc_internal_err_stat_en : 1;/**< [ 10: 10](R/W) Host Controller Internal Error Status Enable. */
        uint32_t reserved_0_9          : 10;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_9          : 10;
        uint32_t hc_internal_err_stat_en : 1;/**< [ 10: 10](R/W) Host Controller Internal Error Status Enable. */
        uint32_t reserved_11_31        : 21;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_intr_status_enable_s cn; */
};
typedef union cavm_i3c_intr_status_enable cavm_i3c_intr_status_enable_t;

#define CAVM_I3C_INTR_STATUS_ENABLE CAVM_I3C_INTR_STATUS_ENABLE_FUNC()
static inline uint64_t CAVM_I3C_INTR_STATUS_ENABLE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_INTR_STATUS_ENABLE_FUNC(void)
{
    return 0x87e0d0000024ll;
}

#define typedef_CAVM_I3C_INTR_STATUS_ENABLE cavm_i3c_intr_status_enable_t
#define bustype_CAVM_I3C_INTR_STATUS_ENABLE CSR_TYPE_RSL32b
#define basename_CAVM_I3C_INTR_STATUS_ENABLE "I3C_INTR_STATUS_ENABLE"
#define device_bar_CAVM_I3C_INTR_STATUS_ENABLE 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_INTR_STATUS_ENABLE 0
#define arguments_CAVM_I3C_INTR_STATUS_ENABLE -1,-1,-1,-1

/**
 * Register (RSL) i3c_intr_w1s
 *
 * I3C PF Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_i3c_intr_w1s
{
    uint64_t u;
    struct cavm_i3c_intr_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t i3c_intr_out          : 1;  /**< [  0:  0](R/W1S/H) Reads or sets I3C_INTR[I3C_INTR_OUT]. */
#else /* Word 0 - Little Endian */
        uint64_t i3c_intr_out          : 1;  /**< [  0:  0](R/W1S/H) Reads or sets I3C_INTR[I3C_INTR_OUT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_intr_w1s_s cn; */
};
typedef union cavm_i3c_intr_w1s cavm_i3c_intr_w1s_t;

#define CAVM_I3C_INTR_W1S CAVM_I3C_INTR_W1S_FUNC()
static inline uint64_t CAVM_I3C_INTR_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_INTR_W1S_FUNC(void)
{
    return 0x87e0d0000758ll;
}

#define typedef_CAVM_I3C_INTR_W1S cavm_i3c_intr_w1s_t
#define bustype_CAVM_I3C_INTR_W1S CSR_TYPE_RSL
#define basename_CAVM_I3C_INTR_W1S "I3C_INTR_W1S"
#define device_bar_CAVM_I3C_INTR_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_INTR_W1S 0
#define arguments_CAVM_I3C_INTR_W1S -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_io_ctl
 *
 * MIO I3C IO Control Register
 * This register control the I3C IO drive strength and slew rates. Index {a} of zero
 * (I3C(0)_IO_CTL) is used to control all I3C outputs on CNXXXX; other index
 * values have no effect.
 */
union cavm_i3c_io_ctl
{
    uint32_t u;
    struct cavm_i3c_io_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t drive                 : 2;  /**< [  3:  2](R/W) I3C bus pin output impedance.
                                                                 0x0 = 55 ohm.
                                                                 0x1 = 45 ohm.
                                                                 0x2 = 33 ohm.
                                                                 0x3 = 20 ohm. */
        uint32_t slew                  : 2;  /**< [  1:  0](R/W) I3C bus pins output slew rate control.
                                                                 0x0 = Weakest.
                                                                 _ ...
                                                                 0x3 = Strongest. */
#else /* Word 0 - Little Endian */
        uint32_t slew                  : 2;  /**< [  1:  0](R/W) I3C bus pins output slew rate control.
                                                                 0x0 = Weakest.
                                                                 _ ...
                                                                 0x3 = Strongest. */
        uint32_t drive                 : 2;  /**< [  3:  2](R/W) I3C bus pin output impedance.
                                                                 0x0 = 55 ohm.
                                                                 0x1 = 45 ohm.
                                                                 0x2 = 33 ohm.
                                                                 0x3 = 20 ohm. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_io_ctl_s cn; */
};
typedef union cavm_i3c_io_ctl cavm_i3c_io_ctl_t;

#define CAVM_I3C_IO_CTL CAVM_I3C_IO_CTL_FUNC()
static inline uint64_t CAVM_I3C_IO_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_IO_CTL_FUNC(void)
{
    return 0x87e0d0000740ll;
}

#define typedef_CAVM_I3C_IO_CTL cavm_i3c_io_ctl_t
#define bustype_CAVM_I3C_IO_CTL CSR_TYPE_RSL32b
#define basename_CAVM_I3C_IO_CTL "I3C_IO_CTL"
#define device_bar_CAVM_I3C_IO_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_IO_CTL 0
#define arguments_CAVM_I3C_IO_CTL -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_master_config
 *
 * I3C Ext Master Config Register
 * Master Config register reflects Master configuration parameters.
 */
union cavm_i3c_master_config
{
    uint32_t u;
    struct cavm_i3c_master_config_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t operation_mode        : 2;  /**< [  5:  4](RO/H) Host Controller modes supported.
                                                                  1 = Master only.
                                                                  2 = Slave only.
                                                                  3 = Master or Slave. */
        uint32_t app_if_data_width     : 2;  /**< [  3:  2](RO/H) Host Controller Interface Data Width field is used to reflect data width configurable parameter.
                                                                  0 = 8 bits.
                                                                  1 = 16 bits.
                                                                  2 = 32 bits.
                                                                  3 = 64 bits. */
        uint32_t app_if_mode           : 2;  /**< [  1:  0](RO/H) Host Controller Interface Mode field is used to reflect Host Controller Mode
                                                                 configurable parameter. */
#else /* Word 0 - Little Endian */
        uint32_t app_if_mode           : 2;  /**< [  1:  0](RO/H) Host Controller Interface Mode field is used to reflect Host Controller Mode
                                                                 configurable parameter. */
        uint32_t app_if_data_width     : 2;  /**< [  3:  2](RO/H) Host Controller Interface Data Width field is used to reflect data width configurable parameter.
                                                                  0 = 8 bits.
                                                                  1 = 16 bits.
                                                                  2 = 32 bits.
                                                                  3 = 64 bits. */
        uint32_t operation_mode        : 2;  /**< [  5:  4](RO/H) Host Controller modes supported.
                                                                  1 = Master only.
                                                                  2 = Slave only.
                                                                  3 = Master or Slave. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_master_config_s cn; */
};
typedef union cavm_i3c_master_config cavm_i3c_master_config_t;

#define CAVM_I3C_MASTER_CONFIG CAVM_I3C_MASTER_CONFIG_FUNC()
static inline uint64_t CAVM_I3C_MASTER_CONFIG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_MASTER_CONFIG_FUNC(void)
{
    return 0x87e0d0000158ll;
}

#define typedef_CAVM_I3C_MASTER_CONFIG cavm_i3c_master_config_t
#define bustype_CAVM_I3C_MASTER_CONFIG CSR_TYPE_RSL32b
#define basename_CAVM_I3C_MASTER_CONFIG "I3C_MASTER_CONFIG"
#define device_bar_CAVM_I3C_MASTER_CONFIG 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_MASTER_CONFIG 0
#define arguments_CAVM_I3C_MASTER_CONFIG -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_master_device_addr
 *
 * I3C Ext Master Device Addr Register
 * Master Device Address Registers.
 */
union cavm_i3c_master_device_addr
{
    uint32_t u;
    struct cavm_i3c_master_device_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dynamic_addr_valid    : 1;  /**< [ 31: 31](R/W) Device dynmaic address valid. */
        uint32_t reserved_23_30        : 8;
        uint32_t dynamic_addr          : 7;  /**< [ 22: 16](R/W) Device Dynamic Address */
        uint32_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_15         : 16;
        uint32_t dynamic_addr          : 7;  /**< [ 22: 16](R/W) Device Dynamic Address */
        uint32_t reserved_23_30        : 8;
        uint32_t dynamic_addr_valid    : 1;  /**< [ 31: 31](R/W) Device dynmaic address valid. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_master_device_addr_s cn; */
};
typedef union cavm_i3c_master_device_addr cavm_i3c_master_device_addr_t;

#define CAVM_I3C_MASTER_DEVICE_ADDR CAVM_I3C_MASTER_DEVICE_ADDR_FUNC()
static inline uint64_t CAVM_I3C_MASTER_DEVICE_ADDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_MASTER_DEVICE_ADDR_FUNC(void)
{
    return 0x87e0d0000008ll;
}

#define typedef_CAVM_I3C_MASTER_DEVICE_ADDR cavm_i3c_master_device_addr_t
#define bustype_CAVM_I3C_MASTER_DEVICE_ADDR CSR_TYPE_RSL32b
#define basename_CAVM_I3C_MASTER_DEVICE_ADDR "I3C_MASTER_DEVICE_ADDR"
#define device_bar_CAVM_I3C_MASTER_DEVICE_ADDR 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_MASTER_DEVICE_ADDR 0
#define arguments_CAVM_I3C_MASTER_DEVICE_ADDR -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_master_ext_header
 *
 * I3C Ext Master Ext Header Register
 * Every Extended Capability is introduced with Extended Capability Header that
 * comprises single EXTCAP_HEADER register
 * and a number of capability specific register.
 */
union cavm_i3c_master_ext_header
{
    uint32_t u;
    struct cavm_i3c_master_ext_header_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t cap_len               : 16; /**< [ 23:  8](RO/H) Length of capability structure. */
        uint32_t cap_id                : 8;  /**< [  7:  0](RO/H) Extended capability ID. */
#else /* Word 0 - Little Endian */
        uint32_t cap_id                : 8;  /**< [  7:  0](RO/H) Extended capability ID. */
        uint32_t cap_len               : 16; /**< [ 23:  8](RO/H) Length of capability structure. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_master_ext_header_s cn; */
};
typedef union cavm_i3c_master_ext_header cavm_i3c_master_ext_header_t;

#define CAVM_I3C_MASTER_EXT_HEADER CAVM_I3C_MASTER_EXT_HEADER_FUNC()
static inline uint64_t CAVM_I3C_MASTER_EXT_HEADER_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_MASTER_EXT_HEADER_FUNC(void)
{
    return 0x87e0d0000154ll;
}

#define typedef_CAVM_I3C_MASTER_EXT_HEADER cavm_i3c_master_ext_header_t
#define bustype_CAVM_I3C_MASTER_EXT_HEADER CSR_TYPE_RSL32b
#define basename_CAVM_I3C_MASTER_EXT_HEADER "I3C_MASTER_EXT_HEADER"
#define device_bar_CAVM_I3C_MASTER_EXT_HEADER 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_MASTER_EXT_HEADER 0
#define arguments_CAVM_I3C_MASTER_EXT_HEADER -1,-1,-1,-1

/**
 * Register (RSL) i3c_msix_pba#
 *
 * I3C MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the I3C_INT_VEC_E
 * enumeration.
 */
union cavm_i3c_msix_pbax
{
    uint64_t u;
    struct cavm_i3c_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated I3C()_MSIX_VEC()_CTL, enumerated by
                                                                 I3C_INT_VEC_E. Bits that have no associated I3C_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated I3C()_MSIX_VEC()_CTL, enumerated by
                                                                 I3C_INT_VEC_E. Bits that have no associated I3C_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_msix_pbax_s cn; */
};
typedef union cavm_i3c_msix_pbax cavm_i3c_msix_pbax_t;

static inline uint64_t CAVM_I3C_MSIX_PBAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_MSIX_PBAX(uint64_t a)
{
    if (a==0)
        return 0x87e0d0ff0000ll + 8ll * ((a) & 0x0);
    __cavm_csr_fatal("I3C_MSIX_PBAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3C_MSIX_PBAX(a) cavm_i3c_msix_pbax_t
#define bustype_CAVM_I3C_MSIX_PBAX(a) CSR_TYPE_RSL
#define basename_CAVM_I3C_MSIX_PBAX(a) "I3C_MSIX_PBAX"
#define device_bar_CAVM_I3C_MSIX_PBAX(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_I3C_MSIX_PBAX(a) (a)
#define arguments_CAVM_I3C_MSIX_PBAX(a) (a),-1,-1,-1

/**
 * Register (RSL) i3c_msix_vec#_addr
 *
 * I3C MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the I3C_INT_VEC_E enumeration.
 */
union cavm_i3c_msix_vecx_addr
{
    uint64_t u;
    struct cavm_i3c_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's I3C()_MSIX_VEC()_ADDR, I3C()_MSIX_VEC()_CTL, and corresponding
                                                                 bit of I3C()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_I3C()_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is set, all vectors are secure and function as if [SECVEC]
                                                                 was set.

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

                                                                 1 = This vector's I3C()_MSIX_VEC()_ADDR, I3C()_MSIX_VEC()_CTL, and corresponding
                                                                 bit of I3C()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_I3C()_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is set, all vectors are secure and function as if [SECVEC]
                                                                 was set.

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
    /* struct cavm_i3c_msix_vecx_addr_s cn; */
};
typedef union cavm_i3c_msix_vecx_addr cavm_i3c_msix_vecx_addr_t;

static inline uint64_t CAVM_I3C_MSIX_VECX_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_MSIX_VECX_ADDR(uint64_t a)
{
    if (a==0)
        return 0x87e0d0f00000ll + 0x10ll * ((a) & 0x0);
    __cavm_csr_fatal("I3C_MSIX_VECX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3C_MSIX_VECX_ADDR(a) cavm_i3c_msix_vecx_addr_t
#define bustype_CAVM_I3C_MSIX_VECX_ADDR(a) CSR_TYPE_RSL
#define basename_CAVM_I3C_MSIX_VECX_ADDR(a) "I3C_MSIX_VECX_ADDR"
#define device_bar_CAVM_I3C_MSIX_VECX_ADDR(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_I3C_MSIX_VECX_ADDR(a) (a)
#define arguments_CAVM_I3C_MSIX_VECX_ADDR(a) (a),-1,-1,-1

/**
 * Register (RSL) i3c_msix_vec#_ctl
 *
 * I3C MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the I3C_INT_VEC_E enumeration.
 */
union cavm_i3c_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_i3c_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts will be sent to this vector. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts will be sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_msix_vecx_ctl_s cn; */
};
typedef union cavm_i3c_msix_vecx_ctl cavm_i3c_msix_vecx_ctl_t;

static inline uint64_t CAVM_I3C_MSIX_VECX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_MSIX_VECX_CTL(uint64_t a)
{
    if (a==0)
        return 0x87e0d0f00008ll + 0x10ll * ((a) & 0x0);
    __cavm_csr_fatal("I3C_MSIX_VECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3C_MSIX_VECX_CTL(a) cavm_i3c_msix_vecx_ctl_t
#define bustype_CAVM_I3C_MSIX_VECX_CTL(a) CSR_TYPE_RSL
#define basename_CAVM_I3C_MSIX_VECX_CTL(a) "I3C_MSIX_VECX_CTL"
#define device_bar_CAVM_I3C_MSIX_VECX_CTL(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_I3C_MSIX_VECX_CTL(a) (a)
#define arguments_CAVM_I3C_MSIX_VECX_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3c_pio_intr_force
 *
 * I3C Ext Pio Intr Force Register
 * The PIO Interrupt Force register is used to force specific interrupt. It can be used
 * for debug purposes.
 */
union cavm_i3c_pio_intr_force
{
    uint32_t u;
    struct cavm_i3c_pio_intr_force_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_10_31        : 22;
        uint32_t transfer_err_force    : 1;  /**< [  9:  9](WO) For software testing, when TRANSFER_ERR_FORCE set to 1'b1, forces the
                                                                 corresponding interrupt, subject to INTR_STAT_EN and INTR_SIGNAL_EN
                                                                 configuration. */
        uint32_t reserved_6_8          : 3;
        uint32_t transfer_abort_force  : 1;  /**< [  5:  5](WO) For software testing, when  TRANSFER_ABORT_FORCE set to 1'b1, forces the
                                                                 corresponding interrupt, subject to INTR_STAT_EN and INTR_SIGNAL_EN
                                                                 configuration. */
        uint32_t resp_ready_force      : 1;  /**< [  4:  4](WO) For software testing, when  RESP_READY_FORCE set to 1'b1, forces the
                                                                 corresponding interrupt, subject to INTR_STAT_EN and INTR_SIGNAL_EN
                                                                 configuration. */
        uint32_t cmd_queue_ready_force : 1;  /**< [  3:  3](WO) For software testing, when CMD_QUEUE_READY_FORCE set to 1'b1, forces the
                                                                 corresponding interrupt, subject to INTR_STAT_EN and INTR_SIGNAL_EN
                                                                 configuration. */
        uint32_t ibi_thld_force        : 1;  /**< [  2:  2](WO) For software testing, when IBI_THLD_FORCE set to 1'b1, forces the corresponding
                                                                 interrupt, subject to INTR_STAT_EN and INTR_SIGNAL_EN configuration. */
        uint32_t rx_thld_force         : 1;  /**< [  1:  1](WO) For software testing, when RX_THLD_FORCE set to 1'b1, forces the corresponding
                                                                 interrupt, subject to INTR_STAT_EN and INTR_SIGNAL_EN configuration. */
        uint32_t tx_thld_force         : 1;  /**< [  0:  0](WO) For software testing, when TX_THLD_FORCE set to 1'b1, forces the corresponding
                                                                 interrupt, subject to INTR_STAT_EN and INTR_SIGNAL_EN configuration. */
#else /* Word 0 - Little Endian */
        uint32_t tx_thld_force         : 1;  /**< [  0:  0](WO) For software testing, when TX_THLD_FORCE set to 1'b1, forces the corresponding
                                                                 interrupt, subject to INTR_STAT_EN and INTR_SIGNAL_EN configuration. */
        uint32_t rx_thld_force         : 1;  /**< [  1:  1](WO) For software testing, when RX_THLD_FORCE set to 1'b1, forces the corresponding
                                                                 interrupt, subject to INTR_STAT_EN and INTR_SIGNAL_EN configuration. */
        uint32_t ibi_thld_force        : 1;  /**< [  2:  2](WO) For software testing, when IBI_THLD_FORCE set to 1'b1, forces the corresponding
                                                                 interrupt, subject to INTR_STAT_EN and INTR_SIGNAL_EN configuration. */
        uint32_t cmd_queue_ready_force : 1;  /**< [  3:  3](WO) For software testing, when CMD_QUEUE_READY_FORCE set to 1'b1, forces the
                                                                 corresponding interrupt, subject to INTR_STAT_EN and INTR_SIGNAL_EN
                                                                 configuration. */
        uint32_t resp_ready_force      : 1;  /**< [  4:  4](WO) For software testing, when  RESP_READY_FORCE set to 1'b1, forces the
                                                                 corresponding interrupt, subject to INTR_STAT_EN and INTR_SIGNAL_EN
                                                                 configuration. */
        uint32_t transfer_abort_force  : 1;  /**< [  5:  5](WO) For software testing, when  TRANSFER_ABORT_FORCE set to 1'b1, forces the
                                                                 corresponding interrupt, subject to INTR_STAT_EN and INTR_SIGNAL_EN
                                                                 configuration. */
        uint32_t reserved_6_8          : 3;
        uint32_t transfer_err_force    : 1;  /**< [  9:  9](WO) For software testing, when TRANSFER_ERR_FORCE set to 1'b1, forces the
                                                                 corresponding interrupt, subject to INTR_STAT_EN and INTR_SIGNAL_EN
                                                                 configuration. */
        uint32_t reserved_10_31        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_pio_intr_force_s cn; */
};
typedef union cavm_i3c_pio_intr_force cavm_i3c_pio_intr_force_t;

#define CAVM_I3C_PIO_INTR_FORCE CAVM_I3C_PIO_INTR_FORCE_FUNC()
static inline uint64_t CAVM_I3C_PIO_INTR_FORCE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_PIO_INTR_FORCE_FUNC(void)
{
    return 0x87e0d000032cll;
}

#define typedef_CAVM_I3C_PIO_INTR_FORCE cavm_i3c_pio_intr_force_t
#define bustype_CAVM_I3C_PIO_INTR_FORCE CSR_TYPE_RSL32b
#define basename_CAVM_I3C_PIO_INTR_FORCE "I3C_PIO_INTR_FORCE"
#define device_bar_CAVM_I3C_PIO_INTR_FORCE 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_PIO_INTR_FORCE 0
#define arguments_CAVM_I3C_PIO_INTR_FORCE -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_pio_section_offset
 *
 * I3C Ext Pio Section Offset Register
 * The PIO Section Offset register indicates the location of the PIO Section of the register map.
 */
union cavm_i3c_pio_section_offset
{
    uint32_t u;
    struct cavm_i3c_pio_section_offset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t section_offset        : 16; /**< [ 15:  0](RO/H) Offset of the PIO registers section of the register map, relative to the BASE
                                                                 address of the current HCI. A value of 0 in this field indicates the PIO section
                                                                 is not implemented. */
#else /* Word 0 - Little Endian */
        uint32_t section_offset        : 16; /**< [ 15:  0](RO/H) Offset of the PIO registers section of the register map, relative to the BASE
                                                                 address of the current HCI. A value of 0 in this field indicates the PIO section
                                                                 is not implemented. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_pio_section_offset_s cn; */
};
typedef union cavm_i3c_pio_section_offset cavm_i3c_pio_section_offset_t;

#define CAVM_I3C_PIO_SECTION_OFFSET CAVM_I3C_PIO_SECTION_OFFSET_FUNC()
static inline uint64_t CAVM_I3C_PIO_SECTION_OFFSET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_PIO_SECTION_OFFSET_FUNC(void)
{
    return 0x87e0d000003cll;
}

#define typedef_CAVM_I3C_PIO_SECTION_OFFSET cavm_i3c_pio_section_offset_t
#define bustype_CAVM_I3C_PIO_SECTION_OFFSET CSR_TYPE_RSL32b
#define basename_CAVM_I3C_PIO_SECTION_OFFSET "I3C_PIO_SECTION_OFFSET"
#define device_bar_CAVM_I3C_PIO_SECTION_OFFSET 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_PIO_SECTION_OFFSET 0
#define arguments_CAVM_I3C_PIO_SECTION_OFFSET -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_present_state
 *
 * I3C Ext Present State Register
 * Present state debug register.
 */
union cavm_i3c_present_state
{
    uint32_t u;
    struct cavm_i3c_present_state_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_3_31         : 29;
        uint32_t current_master        : 1;  /**< [  2:  2](RO/H) This bit indicates whether or not the Master is presently the Current Master on the I3C Bus. */
        uint32_t reserved_0_1          : 2;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_1          : 2;
        uint32_t current_master        : 1;  /**< [  2:  2](RO/H) This bit indicates whether or not the Master is presently the Current Master on the I3C Bus. */
        uint32_t reserved_3_31         : 29;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_present_state_s cn; */
};
typedef union cavm_i3c_present_state cavm_i3c_present_state_t;

#define CAVM_I3C_PRESENT_STATE CAVM_I3C_PRESENT_STATE_FUNC()
static inline uint64_t CAVM_I3C_PRESENT_STATE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_PRESENT_STATE_FUNC(void)
{
    return 0x87e0d0000014ll;
}

#define typedef_CAVM_I3C_PRESENT_STATE cavm_i3c_present_state_t
#define bustype_CAVM_I3C_PRESENT_STATE CSR_TYPE_RSL32b
#define basename_CAVM_I3C_PRESENT_STATE "I3C_PRESENT_STATE"
#define device_bar_CAVM_I3C_PRESENT_STATE 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_PRESENT_STATE 0
#define arguments_CAVM_I3C_PRESENT_STATE -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_present_state_debug
 *
 * I3C Ext Present State Debug Register
 * Present State debug register is used to get status of Host Controller. The present
 * state of the Host Controller
 * is divided into mandatory part (this register) and optional part for debug purposes
 * (PRESENT_STATE_DEBUG), part
 * of Debug Capability registers in Extended Capabilities list. The fields should not
 * be repeated between both
 * registers.
 */
union cavm_i3c_present_state_debug
{
    uint32_t u;
    struct cavm_i3c_present_state_debug_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t master_idle           : 1;  /**< [ 28: 28](RO/H) This field reflects whether the Master Controller is in Idle state or not. This
                                                                 bit is set when all the Queues (Command , Response, IBI) and Buffers (Transmit and
                                                                 Receive) are empty along with the Master State machine is in Idle state. */
        uint32_t cmd_tid               : 4;  /**< [ 27: 24](RO/H) This field reflects the Transaction-ID of the current executing command. The
                                                                 Transaction ID is optional, software defined tag for
                                                                 every command (opaque for  Host Controller) Specifically it is useful for
                                                                 detection of currently executed command while scheduling
                                                                 transfers in PIO mode. */
        uint32_t reserved_22_23        : 2;
        uint32_t cm_tfr_st_status      : 6;  /**< [ 21: 16](RO/H) Indicates the state of current transfer currently executing by the Host controller.

                                                                  0x0 = IDLE (Controller is Idle state, waiting for commands from application
                                                                 or Slave initiated In-band Interrupt).
                                                                  0x1 = START Generation State.
                                                                  0x2 = RESTART Generation State.
                                                                  0x3 = STOP Generation State.
                                                                  0x4 = START Hold Generation for the Slave Initiated START State.
                                                                  0x5 = Broadcast Write Address Header(7'h7E,W) Generation State.
                                                                  0x6 = Broadcast Read Address Header(7'h7E,R) Generation State.
                                                                  0x7 = Dynamic Address Assignment State.
                                                                  0x8 = Slave Address Generation State.
                                                                  0xB = CCC Byte Generation State.
                                                                  0xC = HDR Command Generation State.
                                                                  0xD = Write Data Transfer State.
                                                                  0xE = Read Data Transfer State.
                                                                  0xF = In-Band Interrupt (SIR) Address Read Data State.
                                                                  0x10 = In-Band Interrupt Auto-Disable State
                                                                  0x11 = HDR-DDR CRC Data Generation/Receive State.
                                                                  0x12 = Clock Extension State.
                                                                  0x13 = Halt State.
                                                                  0x14 = In-Band Interrupt (SIR) Read Data State. */
        uint32_t reserved_14_15        : 2;
        uint32_t cm_tfr_status         : 6;  /**< [ 13:  8](RO/H) Indicates the type of transfer currently executing by the DWC_mipi_i3c controller.

                                                                  0x0 = IDLE (Controller is in Idle state, waiting for commands from
                                                                 application or Slave initiated In-band Interrupt).
                                                                  0x1 = Broadcast CCC Write Transfer.
                                                                  0x2 = Directed CCC Write Transfer.
                                                                  0x3 = Directed CCC Read Transfer.
                                                                  0x4 = ENTDAA Address Assignment Transfer.
                                                                  0x5 = SETDASA Address Assignment Transfer.
                                                                  0x6 = Private I3C SDR Write Transfer.
                                                                  0x7 = Private I3C SDR Read Transfer.
                                                                  0x8 = Private I2C SDR Write Transfer.
                                                                  0x9 = Private I2C SDR Read Transfer.
                                                                  0xA = Private HDR Ternary Symbol (TS) Write Transfer.
                                                                  0xB = Private HDR Ternary Symbol (TS) Read Transfer.
                                                                  0xC = Private HDR Double-Data Rate (DDR) Write Transfer.
                                                                  0xD = Private HDR Double-Data Rate (DDR) Read Transfer.
                                                                  0xE = Servicing In-Band Interrupt Transfer.
                                                                  0xF = Halt state (Controller is in Halt State, waiting for the application to
                                                                 resume through DEVICE_CTRL Register) */
        uint32_t reserved_2_7          : 6;
        uint32_t sda_line_signal_level : 1;  /**< [  1:  1](RO/H) This bit is used to check the SDA line level to recover from errors and for debugging. This bit
                                                                 reflects the value of synchronized sda_in_a signal. */
        uint32_t scl_line_signal_level : 1;  /**< [  0:  0](RO/H) This bit is used to check the SCL line level to recover from errors and for debugging. This bit
                                                                 reflects the value of synchronized scl_in_a signal. */
#else /* Word 0 - Little Endian */
        uint32_t scl_line_signal_level : 1;  /**< [  0:  0](RO/H) This bit is used to check the SCL line level to recover from errors and for debugging. This bit
                                                                 reflects the value of synchronized scl_in_a signal. */
        uint32_t sda_line_signal_level : 1;  /**< [  1:  1](RO/H) This bit is used to check the SDA line level to recover from errors and for debugging. This bit
                                                                 reflects the value of synchronized sda_in_a signal. */
        uint32_t reserved_2_7          : 6;
        uint32_t cm_tfr_status         : 6;  /**< [ 13:  8](RO/H) Indicates the type of transfer currently executing by the DWC_mipi_i3c controller.

                                                                  0x0 = IDLE (Controller is in Idle state, waiting for commands from
                                                                 application or Slave initiated In-band Interrupt).
                                                                  0x1 = Broadcast CCC Write Transfer.
                                                                  0x2 = Directed CCC Write Transfer.
                                                                  0x3 = Directed CCC Read Transfer.
                                                                  0x4 = ENTDAA Address Assignment Transfer.
                                                                  0x5 = SETDASA Address Assignment Transfer.
                                                                  0x6 = Private I3C SDR Write Transfer.
                                                                  0x7 = Private I3C SDR Read Transfer.
                                                                  0x8 = Private I2C SDR Write Transfer.
                                                                  0x9 = Private I2C SDR Read Transfer.
                                                                  0xA = Private HDR Ternary Symbol (TS) Write Transfer.
                                                                  0xB = Private HDR Ternary Symbol (TS) Read Transfer.
                                                                  0xC = Private HDR Double-Data Rate (DDR) Write Transfer.
                                                                  0xD = Private HDR Double-Data Rate (DDR) Read Transfer.
                                                                  0xE = Servicing In-Band Interrupt Transfer.
                                                                  0xF = Halt state (Controller is in Halt State, waiting for the application to
                                                                 resume through DEVICE_CTRL Register) */
        uint32_t reserved_14_15        : 2;
        uint32_t cm_tfr_st_status      : 6;  /**< [ 21: 16](RO/H) Indicates the state of current transfer currently executing by the Host controller.

                                                                  0x0 = IDLE (Controller is Idle state, waiting for commands from application
                                                                 or Slave initiated In-band Interrupt).
                                                                  0x1 = START Generation State.
                                                                  0x2 = RESTART Generation State.
                                                                  0x3 = STOP Generation State.
                                                                  0x4 = START Hold Generation for the Slave Initiated START State.
                                                                  0x5 = Broadcast Write Address Header(7'h7E,W) Generation State.
                                                                  0x6 = Broadcast Read Address Header(7'h7E,R) Generation State.
                                                                  0x7 = Dynamic Address Assignment State.
                                                                  0x8 = Slave Address Generation State.
                                                                  0xB = CCC Byte Generation State.
                                                                  0xC = HDR Command Generation State.
                                                                  0xD = Write Data Transfer State.
                                                                  0xE = Read Data Transfer State.
                                                                  0xF = In-Band Interrupt (SIR) Address Read Data State.
                                                                  0x10 = In-Band Interrupt Auto-Disable State
                                                                  0x11 = HDR-DDR CRC Data Generation/Receive State.
                                                                  0x12 = Clock Extension State.
                                                                  0x13 = Halt State.
                                                                  0x14 = In-Band Interrupt (SIR) Read Data State. */
        uint32_t reserved_22_23        : 2;
        uint32_t cmd_tid               : 4;  /**< [ 27: 24](RO/H) This field reflects the Transaction-ID of the current executing command. The
                                                                 Transaction ID is optional, software defined tag for
                                                                 every command (opaque for  Host Controller) Specifically it is useful for
                                                                 detection of currently executed command while scheduling
                                                                 transfers in PIO mode. */
        uint32_t master_idle           : 1;  /**< [ 28: 28](RO/H) This field reflects whether the Master Controller is in Idle state or not. This
                                                                 bit is set when all the Queues (Command , Response, IBI) and Buffers (Transmit and
                                                                 Receive) are empty along with the Master State machine is in Idle state. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_present_state_debug_s cn; */
};
typedef union cavm_i3c_present_state_debug cavm_i3c_present_state_debug_t;

#define CAVM_I3C_PRESENT_STATE_DEBUG CAVM_I3C_PRESENT_STATE_DEBUG_FUNC()
static inline uint64_t CAVM_I3C_PRESENT_STATE_DEBUG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_PRESENT_STATE_DEBUG_FUNC(void)
{
    return 0x87e0d000014cll;
}

#define typedef_CAVM_I3C_PRESENT_STATE_DEBUG cavm_i3c_present_state_debug_t
#define bustype_CAVM_I3C_PRESENT_STATE_DEBUG CSR_TYPE_RSL32b
#define basename_CAVM_I3C_PRESENT_STATE_DEBUG "I3C_PRESENT_STATE_DEBUG"
#define device_bar_CAVM_I3C_PRESENT_STATE_DEBUG 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_PRESENT_STATE_DEBUG 0
#define arguments_CAVM_I3C_PRESENT_STATE_DEBUG -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_queue_size_ctrl
 *
 * I3C Ext Queue Size Ctrl Register
 * Command Queue, Response Queue, Data buffer, IBI status queue sizes.
 */
union cavm_i3c_queue_size_ctrl
{
    uint32_t u;
    struct cavm_i3c_queue_size_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t tx_data_buffer_size   : 8;  /**< [ 31: 24](RO/H) Transmit Data sing size */
        uint32_t rx_data_buffer_size   : 8;  /**< [ 23: 16](RO/H) Receive Data ring size */
        uint32_t ibi_status_size       : 8;  /**< [ 15:  8](RO/H) IBI ring size */
        uint32_t cr_queue_size         : 8;  /**< [  7:  0](RO/H) Command/Response ring size. */
#else /* Word 0 - Little Endian */
        uint32_t cr_queue_size         : 8;  /**< [  7:  0](RO/H) Command/Response ring size. */
        uint32_t ibi_status_size       : 8;  /**< [ 15:  8](RO/H) IBI ring size */
        uint32_t rx_data_buffer_size   : 8;  /**< [ 23: 16](RO/H) Receive Data ring size */
        uint32_t tx_data_buffer_size   : 8;  /**< [ 31: 24](RO/H) Transmit Data sing size */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_queue_size_ctrl_s cn; */
};
typedef union cavm_i3c_queue_size_ctrl cavm_i3c_queue_size_ctrl_t;

#define CAVM_I3C_QUEUE_SIZE_CTRL CAVM_I3C_QUEUE_SIZE_CTRL_FUNC()
static inline uint64_t CAVM_I3C_QUEUE_SIZE_CTRL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_QUEUE_SIZE_CTRL_FUNC(void)
{
    return 0x87e0d0000318ll;
}

#define typedef_CAVM_I3C_QUEUE_SIZE_CTRL cavm_i3c_queue_size_ctrl_t
#define bustype_CAVM_I3C_QUEUE_SIZE_CTRL CSR_TYPE_RSL32b
#define basename_CAVM_I3C_QUEUE_SIZE_CTRL "I3C_QUEUE_SIZE_CTRL"
#define device_bar_CAVM_I3C_QUEUE_SIZE_CTRL 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_QUEUE_SIZE_CTRL 0
#define arguments_CAVM_I3C_QUEUE_SIZE_CTRL -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_queue_status_level
 *
 * I3C Ext Queue Status Level Register
 * Queue Status Level Register.
 */
union cavm_i3c_queue_status_level
{
    uint32_t u;
    struct cavm_i3c_queue_status_level_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t ibi_status_cnt        : 5;  /**< [ 28: 24](RO/H) Contains the number of IBI status entries in the IBI Buffer. */
        uint32_t ibi_buf_blr           : 8;  /**< [ 23: 16](RO/H) Contains the number of buffer entries in the IBI Buffer. */
        uint32_t resp_buf_blr          : 8;  /**< [ 15:  8](RO/H) Contains the number of buffer entries in the response Buffer. */
        uint32_t cmd_queue_free_lvl    : 8;  /**< [  7:  0](RO/H) Contains the number of free buffer entries in the command Buffer. */
#else /* Word 0 - Little Endian */
        uint32_t cmd_queue_free_lvl    : 8;  /**< [  7:  0](RO/H) Contains the number of free buffer entries in the command Buffer. */
        uint32_t resp_buf_blr          : 8;  /**< [ 15:  8](RO/H) Contains the number of buffer entries in the response Buffer. */
        uint32_t ibi_buf_blr           : 8;  /**< [ 23: 16](RO/H) Contains the number of buffer entries in the IBI Buffer. */
        uint32_t ibi_status_cnt        : 5;  /**< [ 28: 24](RO/H) Contains the number of IBI status entries in the IBI Buffer. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_queue_status_level_s cn; */
};
typedef union cavm_i3c_queue_status_level cavm_i3c_queue_status_level_t;

#define CAVM_I3C_QUEUE_STATUS_LEVEL CAVM_I3C_QUEUE_STATUS_LEVEL_FUNC()
static inline uint64_t CAVM_I3C_QUEUE_STATUS_LEVEL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_QUEUE_STATUS_LEVEL_FUNC(void)
{
    return 0x87e0d0000144ll;
}

#define typedef_CAVM_I3C_QUEUE_STATUS_LEVEL cavm_i3c_queue_status_level_t
#define bustype_CAVM_I3C_QUEUE_STATUS_LEVEL CSR_TYPE_RSL32b
#define basename_CAVM_I3C_QUEUE_STATUS_LEVEL "I3C_QUEUE_STATUS_LEVEL"
#define device_bar_CAVM_I3C_QUEUE_STATUS_LEVEL 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_QUEUE_STATUS_LEVEL 0
#define arguments_CAVM_I3C_QUEUE_STATUS_LEVEL -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_queue_thld_ctrl
 *
 * I3C Ext Queue Thld Ctrl Register
 * Queue Threshold Control Register is used to control thresholds that are triggering
 * interrupts on specific thresholds of
 * Command, Response, IBI queues. This register assumes single Command, Response and
 * IBI queues in the Host Controller.
 */
union cavm_i3c_queue_thld_ctrl
{
    uint32_t u;
    struct cavm_i3c_queue_thld_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ibi_status_thld       : 8;  /**< [ 31: 24](R/W) IBI Status Threshold Value

                                                                 This field controls the generation of IBI_STATUS_THLD_STAT interrupt.  If this
                                                                 field is programmed to 0, then the IBI_STATUS_THLD_STAT
                                                                 interrupt gets generated when the outstanding IBI status count in the IBI queue
                                                                 reaches 1 or above. If this field is programmed to N,
                                                                 then the IBI_STATUS_THLD_STAT interrupt gets generated when the outstanding IBI
                                                                 status count in the IBI queue reaches N+1 or above.
                                                                 Note : The valid value is only 0 if IBI with payload is selected in the configuration.

                                                                 Each IBI status entry can represent the complete (IBI payload byte size \<=
                                                                 4*IBI_DATA_THLD) IBI payload or a segment
                                                                 (IBI payload byte size  \> 4*IBI_DATA_THLD) of the IBI payload. */
        uint32_t reserved_16_23        : 8;
        uint32_t resp_buf_thld         : 8;  /**< [ 15:  8](R/W) Response Buffer Threshold Value.

                                                                 Controls the number of entries (or above) in the Response Queue  that trigger
                                                                 the RESP_READY_STAT_INTR interrupt.

                                                                 The valid range is 0 to IC_RESP_BUF_DEPTH-1. The software programs only valid values.

                                                                 A value of 0 sets the threshold for 1 entry, and a value of N sets the threshold for N+1 entries. */
        uint32_t cmd_empty_buf_thld    : 8;  /**< [  7:  0](R/W) Command Buffer Empty Threshold Value
                                                                 Controls the number of empty locations (or above) in the Command Queue that
                                                                 trigger CMD_QUEUE_READY_STAT interrupt.

                                                                 The valid range is 0 to IC_CMD_BUF_DEPTH-1. The software programs only valid values.
                                                                 Value of N ranging from 1 to IC_CMD_BUF_DEPTH-1 sets the threshold to N empty locations
                                                                 and a value of 0 sets the threshold to indicate that the queue is completely empty. */
#else /* Word 0 - Little Endian */
        uint32_t cmd_empty_buf_thld    : 8;  /**< [  7:  0](R/W) Command Buffer Empty Threshold Value
                                                                 Controls the number of empty locations (or above) in the Command Queue that
                                                                 trigger CMD_QUEUE_READY_STAT interrupt.

                                                                 The valid range is 0 to IC_CMD_BUF_DEPTH-1. The software programs only valid values.
                                                                 Value of N ranging from 1 to IC_CMD_BUF_DEPTH-1 sets the threshold to N empty locations
                                                                 and a value of 0 sets the threshold to indicate that the queue is completely empty. */
        uint32_t resp_buf_thld         : 8;  /**< [ 15:  8](R/W) Response Buffer Threshold Value.

                                                                 Controls the number of entries (or above) in the Response Queue  that trigger
                                                                 the RESP_READY_STAT_INTR interrupt.

                                                                 The valid range is 0 to IC_RESP_BUF_DEPTH-1. The software programs only valid values.

                                                                 A value of 0 sets the threshold for 1 entry, and a value of N sets the threshold for N+1 entries. */
        uint32_t reserved_16_23        : 8;
        uint32_t ibi_status_thld       : 8;  /**< [ 31: 24](R/W) IBI Status Threshold Value

                                                                 This field controls the generation of IBI_STATUS_THLD_STAT interrupt.  If this
                                                                 field is programmed to 0, then the IBI_STATUS_THLD_STAT
                                                                 interrupt gets generated when the outstanding IBI status count in the IBI queue
                                                                 reaches 1 or above. If this field is programmed to N,
                                                                 then the IBI_STATUS_THLD_STAT interrupt gets generated when the outstanding IBI
                                                                 status count in the IBI queue reaches N+1 or above.
                                                                 Note : The valid value is only 0 if IBI with payload is selected in the configuration.

                                                                 Each IBI status entry can represent the complete (IBI payload byte size \<=
                                                                 4*IBI_DATA_THLD) IBI payload or a segment
                                                                 (IBI payload byte size  \> 4*IBI_DATA_THLD) of the IBI payload. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_queue_thld_ctrl_s cn; */
};
typedef union cavm_i3c_queue_thld_ctrl cavm_i3c_queue_thld_ctrl_t;

#define CAVM_I3C_QUEUE_THLD_CTRL CAVM_I3C_QUEUE_THLD_CTRL_FUNC()
static inline uint64_t CAVM_I3C_QUEUE_THLD_CTRL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_QUEUE_THLD_CTRL_FUNC(void)
{
    return 0x87e0d0000310ll;
}

#define typedef_CAVM_I3C_QUEUE_THLD_CTRL cavm_i3c_queue_thld_ctrl_t
#define bustype_CAVM_I3C_QUEUE_THLD_CTRL CSR_TYPE_RSL32b
#define basename_CAVM_I3C_QUEUE_THLD_CTRL "I3C_QUEUE_THLD_CTRL"
#define device_bar_CAVM_I3C_QUEUE_THLD_CTRL 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_QUEUE_THLD_CTRL 0
#define arguments_CAVM_I3C_QUEUE_THLD_CTRL -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_reset_control
 *
 * I3C Ext Reset Control Register
 * Reset Control register is used to reset specific functional areas of Host
 * Controller, including buffer resets.
 */
union cavm_i3c_reset_control
{
    uint32_t u;
    struct cavm_i3c_reset_control_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t ibi_queue_rst         : 1;  /**< [  5:  5](R/W) IBI Queue Reset. */
        uint32_t rx_fifo_rst           : 1;  /**< [  4:  4](R/W) Receive Queue Software reset. */
        uint32_t tx_fifo_rst           : 1;  /**< [  3:  3](R/W) Transmit Queue Software Reset. */
        uint32_t resp_queue_rst        : 1;  /**< [  2:  2](R/W) Response Queue software reset. */
        uint32_t cmd_queue_rst         : 1;  /**< [  1:  1](R/W) Command Queue Software reset. */
        uint32_t soft_rst              : 1;  /**< [  0:  0](R/W) Core software Reset. */
#else /* Word 0 - Little Endian */
        uint32_t soft_rst              : 1;  /**< [  0:  0](R/W) Core software Reset. */
        uint32_t cmd_queue_rst         : 1;  /**< [  1:  1](R/W) Command Queue Software reset. */
        uint32_t resp_queue_rst        : 1;  /**< [  2:  2](R/W) Response Queue software reset. */
        uint32_t tx_fifo_rst           : 1;  /**< [  3:  3](R/W) Transmit Queue Software Reset. */
        uint32_t rx_fifo_rst           : 1;  /**< [  4:  4](R/W) Receive Queue Software reset. */
        uint32_t ibi_queue_rst         : 1;  /**< [  5:  5](R/W) IBI Queue Reset. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_reset_control_s cn; */
};
typedef union cavm_i3c_reset_control cavm_i3c_reset_control_t;

#define CAVM_I3C_RESET_CONTROL CAVM_I3C_RESET_CONTROL_FUNC()
static inline uint64_t CAVM_I3C_RESET_CONTROL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_RESET_CONTROL_FUNC(void)
{
    return 0x87e0d0000010ll;
}

#define typedef_CAVM_I3C_RESET_CONTROL cavm_i3c_reset_control_t
#define bustype_CAVM_I3C_RESET_CONTROL CSR_TYPE_RSL32b
#define basename_CAVM_I3C_RESET_CONTROL "I3C_RESET_CONTROL"
#define device_bar_CAVM_I3C_RESET_CONTROL 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_RESET_CONTROL 0
#define arguments_CAVM_I3C_RESET_CONTROL -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_response_queue_port
 *
 * I3C Ext Response Queue Port Register
 * Response Queue Port Register
 *
 * The Response Descriptor structure is used in two primary cases:
 *  - In PIO mode, the Response Descriptor is read from Response Queue through reads
 * from Response Queue Port.
 *  - In DMA mode, the Response Descriptor is read from Response Ring.
 */
union cavm_i3c_response_queue_port
{
    uint32_t u;
    struct cavm_i3c_response_queue_port_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t err_status            : 4;  /**< [ 31: 28](RO/H) Error Status defines the Error Type of the processed command

                                                                  - 0x0: SUCCESS - Transfer successful, no error.
                                                                  - 0x1: CRC - CRC Error
                                                                  - 0x2: PARITY - Parity Error
                                                                  - 0x3: FRAME - Frame Error
                                                                  - 0x4: ADDR_HEADER - Address Header Error
                                                                  - 0x5: NACK - Address Nacked or Dynamic Address Assignment Nacked
                                                                  - 0x6: OVL - Receive Overflow or Transfer Underflow Error
                                                                  - 0x7: Reserved
                                                                  - 0x8: ABORTED
                                                                  - 0x9: Reserved
                                                                  - 0xA-0xF: Reserved */
        uint32_t tid                   : 4;  /**< [ 27: 24](RO/H) Transaction ID

                                                                 This field is used as the identification tag for the command. This value matches
                                                                 one of commands sent on the bus.
                                                                 You can represent 8 different ID's for the Command (4'b0000 to 4'b0111). The TID is
                                                                 used to link response with respective command. A command and its response has the same TID.

                                                                 The TID's from 4'b1000 to 4'b1110 are reserved.
                                                                 The TID 4'b1111 is used to indicate that CCCT field represents a CCC byte
                                                                 (Applicable only in Non-current Master mode). */
        uint32_t reserved_16_23        : 8;
        uint32_t data_length           : 16; /**< [ 15:  0](RO/H) Data Length or Device Count

                                                                  - For Write transfers, this field represents the remaining data length of the transfer.
                                                                  - For Read Transfers, this field represents the received data length in bytes.
                                                                  - For Address Assignment command, this field represents the remaining device count. */
#else /* Word 0 - Little Endian */
        uint32_t data_length           : 16; /**< [ 15:  0](RO/H) Data Length or Device Count

                                                                  - For Write transfers, this field represents the remaining data length of the transfer.
                                                                  - For Read Transfers, this field represents the received data length in bytes.
                                                                  - For Address Assignment command, this field represents the remaining device count. */
        uint32_t reserved_16_23        : 8;
        uint32_t tid                   : 4;  /**< [ 27: 24](RO/H) Transaction ID

                                                                 This field is used as the identification tag for the command. This value matches
                                                                 one of commands sent on the bus.
                                                                 You can represent 8 different ID's for the Command (4'b0000 to 4'b0111). The TID is
                                                                 used to link response with respective command. A command and its response has the same TID.

                                                                 The TID's from 4'b1000 to 4'b1110 are reserved.
                                                                 The TID 4'b1111 is used to indicate that CCCT field represents a CCC byte
                                                                 (Applicable only in Non-current Master mode). */
        uint32_t err_status            : 4;  /**< [ 31: 28](RO/H) Error Status defines the Error Type of the processed command

                                                                  - 0x0: SUCCESS - Transfer successful, no error.
                                                                  - 0x1: CRC - CRC Error
                                                                  - 0x2: PARITY - Parity Error
                                                                  - 0x3: FRAME - Frame Error
                                                                  - 0x4: ADDR_HEADER - Address Header Error
                                                                  - 0x5: NACK - Address Nacked or Dynamic Address Assignment Nacked
                                                                  - 0x6: OVL - Receive Overflow or Transfer Underflow Error
                                                                  - 0x7: Reserved
                                                                  - 0x8: ABORTED
                                                                  - 0x9: Reserved
                                                                  - 0xA-0xF: Reserved */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_response_queue_port_s cn; */
};
typedef union cavm_i3c_response_queue_port cavm_i3c_response_queue_port_t;

#define CAVM_I3C_RESPONSE_QUEUE_PORT CAVM_I3C_RESPONSE_QUEUE_PORT_FUNC()
static inline uint64_t CAVM_I3C_RESPONSE_QUEUE_PORT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_RESPONSE_QUEUE_PORT_FUNC(void)
{
    return 0x87e0d0000304ll;
}

#define typedef_CAVM_I3C_RESPONSE_QUEUE_PORT cavm_i3c_response_queue_port_t
#define bustype_CAVM_I3C_RESPONSE_QUEUE_PORT CSR_TYPE_RSL32b
#define basename_CAVM_I3C_RESPONSE_QUEUE_PORT "I3C_RESPONSE_QUEUE_PORT"
#define device_bar_CAVM_I3C_RESPONSE_QUEUE_PORT 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_RESPONSE_QUEUE_PORT 0
#define arguments_CAVM_I3C_RESPONSE_QUEUE_PORT -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_ring_headers_section_offset
 *
 * I3C Ext Ring Headers Section Offset Register
 * The Ring Headers Section Offset register.
 */
union cavm_i3c_ring_headers_section_offset
{
    uint32_t u;
    struct cavm_i3c_ring_headers_section_offset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t section_offset        : 16; /**< [ 15:  0](RO/H) Ring Headers Section Offset.
                                                                 Offset of the Ring Headers registers section of the register map, relative to
                                                                 the BASE address of the current HCI.
                                                                 A value of 0 in this register indicates that the Ring Headers section is not implemented. */
#else /* Word 0 - Little Endian */
        uint32_t section_offset        : 16; /**< [ 15:  0](RO/H) Ring Headers Section Offset.
                                                                 Offset of the Ring Headers registers section of the register map, relative to
                                                                 the BASE address of the current HCI.
                                                                 A value of 0 in this register indicates that the Ring Headers section is not implemented. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_ring_headers_section_offset_s cn; */
};
typedef union cavm_i3c_ring_headers_section_offset cavm_i3c_ring_headers_section_offset_t;

#define CAVM_I3C_RING_HEADERS_SECTION_OFFSET CAVM_I3C_RING_HEADERS_SECTION_OFFSET_FUNC()
static inline uint64_t CAVM_I3C_RING_HEADERS_SECTION_OFFSET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_RING_HEADERS_SECTION_OFFSET_FUNC(void)
{
    return 0x87e0d0000038ll;
}

#define typedef_CAVM_I3C_RING_HEADERS_SECTION_OFFSET cavm_i3c_ring_headers_section_offset_t
#define bustype_CAVM_I3C_RING_HEADERS_SECTION_OFFSET CSR_TYPE_RSL32b
#define basename_CAVM_I3C_RING_HEADERS_SECTION_OFFSET "I3C_RING_HEADERS_SECTION_OFFSET"
#define device_bar_CAVM_I3C_RING_HEADERS_SECTION_OFFSET 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_RING_HEADERS_SECTION_OFFSET 0
#define arguments_CAVM_I3C_RING_HEADERS_SECTION_OFFSET -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_scl_ext_lcnt_timing
 *
 * I3C Ext Scl Ext Lcnt Timing Register
 * This register sets the extended low periods for the I3C transfers to allow the low
 * data rates of the Slave devices
 * as specified in GETMXDS CCC.The Speed field of Transfer command
 * (COMMAND_QUEUE_PORT_TRANSFER_COMMAND) decides the selection
 * of extended low period to achieve the lower data rate for the transfers to Slave devices.
 *  - SDR1: Uses I3C_LCNT_1 field for the data transfer.
 *  - SDR2: Uses I3C_LCNT_2 field for the data transfer.
 *  - SDR3: Uses I3C_LCNT_3 field for the data transfer.
 *  - SDR4: Uses I3C_LCNT_4 field for the data transfer.
 */
union cavm_i3c_scl_ext_lcnt_timing
{
    uint32_t u;
    struct cavm_i3c_scl_ext_lcnt_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t i3c_lcnt_4            : 8;  /**< [ 31: 24](R/W) SDR4 uses this register field for data transfer. */
        uint32_t i3c_lcnt_3            : 8;  /**< [ 23: 16](R/W) SDR3 uses this register field for data transfer. */
        uint32_t i3c_lcnt_2            : 8;  /**< [ 15:  8](R/W) SDR2 uses this register field for data transfer. */
        uint32_t i3c_lcnt_1            : 8;  /**< [  7:  0](R/W) SDR1 uses this register field for data transfer. */
#else /* Word 0 - Little Endian */
        uint32_t i3c_lcnt_1            : 8;  /**< [  7:  0](R/W) SDR1 uses this register field for data transfer. */
        uint32_t i3c_lcnt_2            : 8;  /**< [ 15:  8](R/W) SDR2 uses this register field for data transfer. */
        uint32_t i3c_lcnt_3            : 8;  /**< [ 23: 16](R/W) SDR3 uses this register field for data transfer. */
        uint32_t i3c_lcnt_4            : 8;  /**< [ 31: 24](R/W) SDR4 uses this register field for data transfer. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_scl_ext_lcnt_timing_s cn; */
};
typedef union cavm_i3c_scl_ext_lcnt_timing cavm_i3c_scl_ext_lcnt_timing_t;

#define CAVM_I3C_SCL_EXT_LCNT_TIMING CAVM_I3C_SCL_EXT_LCNT_TIMING_FUNC()
static inline uint64_t CAVM_I3C_SCL_EXT_LCNT_TIMING_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_SCL_EXT_LCNT_TIMING_FUNC(void)
{
    return 0x87e0d0000128ll;
}

#define typedef_CAVM_I3C_SCL_EXT_LCNT_TIMING cavm_i3c_scl_ext_lcnt_timing_t
#define bustype_CAVM_I3C_SCL_EXT_LCNT_TIMING CSR_TYPE_RSL32b
#define basename_CAVM_I3C_SCL_EXT_LCNT_TIMING "I3C_SCL_EXT_LCNT_TIMING"
#define device_bar_CAVM_I3C_SCL_EXT_LCNT_TIMING 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_SCL_EXT_LCNT_TIMING 0
#define arguments_CAVM_I3C_SCL_EXT_LCNT_TIMING -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_scl_ext_termn_lcnt_timing
 *
 * I3C Ext Scl Ext Termn Lcnt Timing Register
 * This register is used to extend the SCL Low period for Read Termination Bit.
 */
union cavm_i3c_scl_ext_termn_lcnt_timing
{
    uint32_t u;
    struct cavm_i3c_scl_ext_termn_lcnt_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t i3c_termn_lcnt        : 4;  /**< [  3:  0](R/W) Extended I3C Read Termination Bit low count for I3C Read transfers.
                                                                 Effective Termination-Bit Low Period is derived based on the SDR speed as shown below
                                                                  * SDR0 speed: I3C_PP_LCNT + I3C_TERMN_LCNT.
                                                                  * SDR1 speed: I3C_LCNT_1 + I3C_TERMN_LCNT.
                                                                  * SDR2 speed: I3C_LCNT_2 + I3C_TERMN_LCNT.
                                                                  * SDR3 speed: I3C_LCNT_3 + I3C_TERMN_LCNT.
                                                                  * SDR4 speed: I3C_LCNT_4 + I3C_TERMN_LCNT. */
#else /* Word 0 - Little Endian */
        uint32_t i3c_termn_lcnt        : 4;  /**< [  3:  0](R/W) Extended I3C Read Termination Bit low count for I3C Read transfers.
                                                                 Effective Termination-Bit Low Period is derived based on the SDR speed as shown below
                                                                  * SDR0 speed: I3C_PP_LCNT + I3C_TERMN_LCNT.
                                                                  * SDR1 speed: I3C_LCNT_1 + I3C_TERMN_LCNT.
                                                                  * SDR2 speed: I3C_LCNT_2 + I3C_TERMN_LCNT.
                                                                  * SDR3 speed: I3C_LCNT_3 + I3C_TERMN_LCNT.
                                                                  * SDR4 speed: I3C_LCNT_4 + I3C_TERMN_LCNT. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_scl_ext_termn_lcnt_timing_s cn; */
};
typedef union cavm_i3c_scl_ext_termn_lcnt_timing cavm_i3c_scl_ext_termn_lcnt_timing_t;

#define CAVM_I3C_SCL_EXT_TERMN_LCNT_TIMING CAVM_I3C_SCL_EXT_TERMN_LCNT_TIMING_FUNC()
static inline uint64_t CAVM_I3C_SCL_EXT_TERMN_LCNT_TIMING_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_SCL_EXT_TERMN_LCNT_TIMING_FUNC(void)
{
    return 0x87e0d000012cll;
}

#define typedef_CAVM_I3C_SCL_EXT_TERMN_LCNT_TIMING cavm_i3c_scl_ext_termn_lcnt_timing_t
#define bustype_CAVM_I3C_SCL_EXT_TERMN_LCNT_TIMING CSR_TYPE_RSL32b
#define basename_CAVM_I3C_SCL_EXT_TERMN_LCNT_TIMING "I3C_SCL_EXT_TERMN_LCNT_TIMING"
#define device_bar_CAVM_I3C_SCL_EXT_TERMN_LCNT_TIMING 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_SCL_EXT_TERMN_LCNT_TIMING 0
#define arguments_CAVM_I3C_SCL_EXT_TERMN_LCNT_TIMING -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_scl_i2c_fm_timing
 *
 * I3C Ext Scl I2c Fm Timing Register
 * SCL I2C Fast Mode Timing Register
 *
 * This register sets the SCL clock high period and low period count for I2C Fast Mode
 * transfers. The count value
 * takes the number of core_clks to maintain the I/O SCL Low/High period timing.
 */
union cavm_i3c_scl_i2c_fm_timing
{
    uint32_t u;
    struct cavm_i3c_scl_i2c_fm_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t i2c_fm_hcnt           : 8;  /**< [ 23: 16](R/W) I2C Fast Mode High Count

                                                                 The SCL open-drain high count timing for I2C fast mode transfers. */
        uint32_t i2c_fm_lcnt           : 16; /**< [ 15:  0](R/W) I2C Fast Mode Low Count

                                                                 The SCL open-drain low count timing for I2C fast mode transfers. */
#else /* Word 0 - Little Endian */
        uint32_t i2c_fm_lcnt           : 16; /**< [ 15:  0](R/W) I2C Fast Mode Low Count

                                                                 The SCL open-drain low count timing for I2C fast mode transfers. */
        uint32_t i2c_fm_hcnt           : 8;  /**< [ 23: 16](R/W) I2C Fast Mode High Count

                                                                 The SCL open-drain high count timing for I2C fast mode transfers. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_scl_i2c_fm_timing_s cn; */
};
typedef union cavm_i3c_scl_i2c_fm_timing cavm_i3c_scl_i2c_fm_timing_t;

#define CAVM_I3C_SCL_I2C_FM_TIMING CAVM_I3C_SCL_I2C_FM_TIMING_FUNC()
static inline uint64_t CAVM_I3C_SCL_I2C_FM_TIMING_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_SCL_I2C_FM_TIMING_FUNC(void)
{
    return 0x87e0d000011cll;
}

#define typedef_CAVM_I3C_SCL_I2C_FM_TIMING cavm_i3c_scl_i2c_fm_timing_t
#define bustype_CAVM_I3C_SCL_I2C_FM_TIMING CSR_TYPE_RSL32b
#define basename_CAVM_I3C_SCL_I2C_FM_TIMING "I3C_SCL_I2C_FM_TIMING"
#define device_bar_CAVM_I3C_SCL_I2C_FM_TIMING 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_SCL_I2C_FM_TIMING 0
#define arguments_CAVM_I3C_SCL_I2C_FM_TIMING -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_scl_i2c_fmp_timing
 *
 * I3C Ext Scl I2c Fmp Timing Register
 * SCL I2C Fast Mode Plus Timing Register
 *
 * This register sets the SCL clock high period and low period count for I2C Fast Mode
 * Plus transfers. The count value
 * takes the number of core_clks to maintain the I/O SCL Low/High period timing.
 */
union cavm_i3c_scl_i2c_fmp_timing
{
    uint32_t u;
    struct cavm_i3c_scl_i2c_fmp_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t i2c_fmp_hcnt          : 8;  /**< [ 23: 16](R/W) I2C Fast Mode Plus High Count

                                                                 The SCL open-drain high count timing for I2C fast mode plus transfers. */
        uint32_t reserved_8_15         : 8;
        uint32_t i2c_fmp_lcnt          : 8;  /**< [  7:  0](R/W) I2C Fast Mode Plus Low Count

                                                                 The SCL open-drain low count timing for I2C fast mode plus transfers. */
#else /* Word 0 - Little Endian */
        uint32_t i2c_fmp_lcnt          : 8;  /**< [  7:  0](R/W) I2C Fast Mode Plus Low Count

                                                                 The SCL open-drain low count timing for I2C fast mode plus transfers. */
        uint32_t reserved_8_15         : 8;
        uint32_t i2c_fmp_hcnt          : 8;  /**< [ 23: 16](R/W) I2C Fast Mode Plus High Count

                                                                 The SCL open-drain high count timing for I2C fast mode plus transfers. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_scl_i2c_fmp_timing_s cn; */
};
typedef union cavm_i3c_scl_i2c_fmp_timing cavm_i3c_scl_i2c_fmp_timing_t;

#define CAVM_I3C_SCL_I2C_FMP_TIMING CAVM_I3C_SCL_I2C_FMP_TIMING_FUNC()
static inline uint64_t CAVM_I3C_SCL_I2C_FMP_TIMING_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_SCL_I2C_FMP_TIMING_FUNC(void)
{
    return 0x87e0d0000120ll;
}

#define typedef_CAVM_I3C_SCL_I2C_FMP_TIMING cavm_i3c_scl_i2c_fmp_timing_t
#define bustype_CAVM_I3C_SCL_I2C_FMP_TIMING CSR_TYPE_RSL32b
#define basename_CAVM_I3C_SCL_I2C_FMP_TIMING "I3C_SCL_I2C_FMP_TIMING"
#define device_bar_CAVM_I3C_SCL_I2C_FMP_TIMING 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_SCL_I2C_FMP_TIMING 0
#define arguments_CAVM_I3C_SCL_I2C_FMP_TIMING -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_scl_i2c_ss_timing
 *
 * I3C Ext Scl I2c Ss Timing Register
 * This register sets the SCL clock high period and low period count for I2C Fast Mode
 * transfers. The count value
 * takes the number of core_clks to maintain the I/O SCL Low/High period timing.
 */
union cavm_i3c_scl_i2c_ss_timing
{
    uint32_t u;
    struct cavm_i3c_scl_i2c_ss_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t i2c_ss_hcnt           : 16; /**< [ 31: 16](R/W) The SCL open-drain high count timing for I2C standard speed transfers. */
        uint32_t i2c_ss_lcnt           : 16; /**< [ 15:  0](R/W) The SCL open-drain low count timing for I2C standard speed transfers. */
#else /* Word 0 - Little Endian */
        uint32_t i2c_ss_lcnt           : 16; /**< [ 15:  0](R/W) The SCL open-drain low count timing for I2C standard speed transfers. */
        uint32_t i2c_ss_hcnt           : 16; /**< [ 31: 16](R/W) The SCL open-drain high count timing for I2C standard speed transfers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_scl_i2c_ss_timing_s cn; */
};
typedef union cavm_i3c_scl_i2c_ss_timing cavm_i3c_scl_i2c_ss_timing_t;

#define CAVM_I3C_SCL_I2C_SS_TIMING CAVM_I3C_SCL_I2C_SS_TIMING_FUNC()
static inline uint64_t CAVM_I3C_SCL_I2C_SS_TIMING_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_SCL_I2C_SS_TIMING_FUNC(void)
{
    return 0x87e0d0000124ll;
}

#define typedef_CAVM_I3C_SCL_I2C_SS_TIMING cavm_i3c_scl_i2c_ss_timing_t
#define bustype_CAVM_I3C_SCL_I2C_SS_TIMING CSR_TYPE_RSL32b
#define basename_CAVM_I3C_SCL_I2C_SS_TIMING "I3C_SCL_I2C_SS_TIMING"
#define device_bar_CAVM_I3C_SCL_I2C_SS_TIMING 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_SCL_I2C_SS_TIMING 0
#define arguments_CAVM_I3C_SCL_I2C_SS_TIMING -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_scl_i3c_od_timing
 *
 * I3C Ext Scl I3c Od Timing Register
 * This register sets the SCL clock high period and low period count for I3C Open Drain
 * transfers. The count value
 * takes the number of core_clks to maintain the I/O SCL High/Low Period timing.
 */
union cavm_i3c_scl_i3c_od_timing
{
    uint32_t u;
    struct cavm_i3c_scl_i3c_od_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t i3c_od_hcnt           : 8;  /**< [ 23: 16](R/W) SCL open-drain High count (I3C) for I3C transfers targeted to I3C devices. */
        uint32_t reserved_8_15         : 8;
        uint32_t i3c_od_lcnt           : 8;  /**< [  7:  0](R/W) SCL Open-drain low count for I3C transfers targeted to I3C devices. */
#else /* Word 0 - Little Endian */
        uint32_t i3c_od_lcnt           : 8;  /**< [  7:  0](R/W) SCL Open-drain low count for I3C transfers targeted to I3C devices. */
        uint32_t reserved_8_15         : 8;
        uint32_t i3c_od_hcnt           : 8;  /**< [ 23: 16](R/W) SCL open-drain High count (I3C) for I3C transfers targeted to I3C devices. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_scl_i3c_od_timing_s cn; */
};
typedef union cavm_i3c_scl_i3c_od_timing cavm_i3c_scl_i3c_od_timing_t;

#define CAVM_I3C_SCL_I3C_OD_TIMING CAVM_I3C_SCL_I3C_OD_TIMING_FUNC()
static inline uint64_t CAVM_I3C_SCL_I3C_OD_TIMING_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_SCL_I3C_OD_TIMING_FUNC(void)
{
    return 0x87e0d0000114ll;
}

#define typedef_CAVM_I3C_SCL_I3C_OD_TIMING cavm_i3c_scl_i3c_od_timing_t
#define bustype_CAVM_I3C_SCL_I3C_OD_TIMING CSR_TYPE_RSL32b
#define basename_CAVM_I3C_SCL_I3C_OD_TIMING "I3C_SCL_I3C_OD_TIMING"
#define device_bar_CAVM_I3C_SCL_I3C_OD_TIMING 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_SCL_I3C_OD_TIMING 0
#define arguments_CAVM_I3C_SCL_I3C_OD_TIMING -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_scl_i3c_pp_timing
 *
 * I3C Ext Scl I3c Pp Timing Register
 * This register sets the SCL clock high period and low period count for I3C Push Pull
 * transfers. The count value
 * takes the number of core_clks to maintain the I/O SCL High/Low Period timing.
 */
union cavm_i3c_scl_i3c_pp_timing
{
    uint32_t u;
    struct cavm_i3c_scl_i3c_pp_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t i3c_pp_hcnt           : 8;  /**< [ 23: 16](R/W) I3C Push Pull High Count.

                                                                 SCL push-pull High count for I3C transfers targeted to I3C devices. */
        uint32_t reserved_8_15         : 8;
        uint32_t i3c_pp_lcnt           : 8;  /**< [  7:  0](R/W) I3C Push Pull Low Count.

                                                                 SCL Push-pull low count for I3C transfers targeted to I3C devices. */
#else /* Word 0 - Little Endian */
        uint32_t i3c_pp_lcnt           : 8;  /**< [  7:  0](R/W) I3C Push Pull Low Count.

                                                                 SCL Push-pull low count for I3C transfers targeted to I3C devices. */
        uint32_t reserved_8_15         : 8;
        uint32_t i3c_pp_hcnt           : 8;  /**< [ 23: 16](R/W) I3C Push Pull High Count.

                                                                 SCL push-pull High count for I3C transfers targeted to I3C devices. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_scl_i3c_pp_timing_s cn; */
};
typedef union cavm_i3c_scl_i3c_pp_timing cavm_i3c_scl_i3c_pp_timing_t;

#define CAVM_I3C_SCL_I3C_PP_TIMING CAVM_I3C_SCL_I3C_PP_TIMING_FUNC()
static inline uint64_t CAVM_I3C_SCL_I3C_PP_TIMING_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_SCL_I3C_PP_TIMING_FUNC(void)
{
    return 0x87e0d0000118ll;
}

#define typedef_CAVM_I3C_SCL_I3C_PP_TIMING cavm_i3c_scl_i3c_pp_timing_t
#define bustype_CAVM_I3C_SCL_I3C_PP_TIMING CSR_TYPE_RSL32b
#define basename_CAVM_I3C_SCL_I3C_PP_TIMING "I3C_SCL_I3C_PP_TIMING"
#define device_bar_CAVM_I3C_SCL_I3C_PP_TIMING 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_SCL_I3C_PP_TIMING 0
#define arguments_CAVM_I3C_SCL_I3C_PP_TIMING -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_sda_hold_switch_dly_timing
 *
 * I3C Ext Sda Hold Switch Dly Timing Register
 * SDA Hold and Mode Switch Delay Timing Register
 *
 * The Bits [2:0] of this register are used to shift the sda_out with respect to sda_oe
 * while switching transfer from Open Drain timing to
 * Push Pull timing.
 * The bits [10:8] of this register are used to shift the sda_oe with respect to
 * sda_out while switching transfer from Pus pull timing to
 * Open Drain timing.
 * The bits [18:16] of this register are used to control the hold time of SDA during
 * transmit mode in SDR & DDR transfers.
 */
union cavm_i3c_sda_hold_switch_dly_timing
{
    uint32_t u;
    struct cavm_i3c_sda_hold_switch_dly_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_19_31        : 13;
        uint32_t sda_tx_hold           : 3;  /**< [ 18: 16](R/W) This field controls the hold time (in term of the core clock period) of the
                                                                 transmit data (SDA) with
                                                                 respect to the SCL edge in SD FM FM+ SDR and DDR speed mode of operations.
                                                                 This field is not applicable for the ternary speed modes.
                                                                 The valid values are 1 to 7. Others are Reserved. */
        uint32_t reserved_11_15        : 5;
        uint32_t sda_pp_od_switch_dly  : 3;  /**< [ 10:  8](R/W) This field is used to delay the sda_oe with respect to sda_out (in terms of the core clock period)
                                                                 while switching the transfer from PP1 (Push-Pull Mode SDA=1) to OD1 (Open-Drain SDA=1).
                                                                 The valid value can range from 0 to 4. Others are Reserved. */
        uint32_t reserved_3_7          : 5;
        uint32_t sda_od_pp_switch_dly  : 3;  /**< [  2:  0](R/W) This field is used to delay the sda_out with respect to sda_oe while switching the
                                                                 transfer from OD1 (Open-Drain Mode SDA=1) to PP1 (Push-Pull Mode SDA=1).
                                                                 The valid value can range from 0 to 4. Others are reserved. */
#else /* Word 0 - Little Endian */
        uint32_t sda_od_pp_switch_dly  : 3;  /**< [  2:  0](R/W) This field is used to delay the sda_out with respect to sda_oe while switching the
                                                                 transfer from OD1 (Open-Drain Mode SDA=1) to PP1 (Push-Pull Mode SDA=1).
                                                                 The valid value can range from 0 to 4. Others are reserved. */
        uint32_t reserved_3_7          : 5;
        uint32_t sda_pp_od_switch_dly  : 3;  /**< [ 10:  8](R/W) This field is used to delay the sda_oe with respect to sda_out (in terms of the core clock period)
                                                                 while switching the transfer from PP1 (Push-Pull Mode SDA=1) to OD1 (Open-Drain SDA=1).
                                                                 The valid value can range from 0 to 4. Others are Reserved. */
        uint32_t reserved_11_15        : 5;
        uint32_t sda_tx_hold           : 3;  /**< [ 18: 16](R/W) This field controls the hold time (in term of the core clock period) of the
                                                                 transmit data (SDA) with
                                                                 respect to the SCL edge in SD FM FM+ SDR and DDR speed mode of operations.
                                                                 This field is not applicable for the ternary speed modes.
                                                                 The valid values are 1 to 7. Others are Reserved. */
        uint32_t reserved_19_31        : 13;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_sda_hold_switch_dly_timing_s cn; */
};
typedef union cavm_i3c_sda_hold_switch_dly_timing cavm_i3c_sda_hold_switch_dly_timing_t;

#define CAVM_I3C_SDA_HOLD_SWITCH_DLY_TIMING CAVM_I3C_SDA_HOLD_SWITCH_DLY_TIMING_FUNC()
static inline uint64_t CAVM_I3C_SDA_HOLD_SWITCH_DLY_TIMING_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_SDA_HOLD_SWITCH_DLY_TIMING_FUNC(void)
{
    return 0x87e0d0000130ll;
}

#define typedef_CAVM_I3C_SDA_HOLD_SWITCH_DLY_TIMING cavm_i3c_sda_hold_switch_dly_timing_t
#define bustype_CAVM_I3C_SDA_HOLD_SWITCH_DLY_TIMING CSR_TYPE_RSL32b
#define basename_CAVM_I3C_SDA_HOLD_SWITCH_DLY_TIMING "I3C_SDA_HOLD_SWITCH_DLY_TIMING"
#define device_bar_CAVM_I3C_SDA_HOLD_SWITCH_DLY_TIMING 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_SDA_HOLD_SWITCH_DLY_TIMING 0
#define arguments_CAVM_I3C_SDA_HOLD_SWITCH_DLY_TIMING -1,-1,-1,-1

/**
 * Register (RSL32b) i3c_tx_data_port
 *
 * I3C Ext Tx Data Port Register
 * This register when written into, writes data to the TX Buffer. This has the same
 * offset as RX_DATA_PORT to provide a
 * single bi-directional data port for transmitting or receiving the data from the DWC_mipi_i3c.
 */
union cavm_i3c_tx_data_port
{
    uint32_t u;
    struct cavm_i3c_tx_data_port_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t tx_data_port          : 32; /**< [ 31:  0](WO) Transmit Data Port

                                                                 The Transmit Data port is mapped to the Tx-Data Buffer.
                                                                 The transmit data should always be packed in 4-byte aligned and written to the
                                                                 Transmit data port register.
                                                                 If the Command length is not aligned to the 4-bytes, then there are unused bytes
                                                                 in the end location of the
                                                                 transfer bytes. */
#else /* Word 0 - Little Endian */
        uint32_t tx_data_port          : 32; /**< [ 31:  0](WO) Transmit Data Port

                                                                 The Transmit Data port is mapped to the Tx-Data Buffer.
                                                                 The transmit data should always be packed in 4-byte aligned and written to the
                                                                 Transmit data port register.
                                                                 If the Command length is not aligned to the 4-bytes, then there are unused bytes
                                                                 in the end location of the
                                                                 transfer bytes. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3c_tx_data_port_s cn; */
};
typedef union cavm_i3c_tx_data_port cavm_i3c_tx_data_port_t;

#define CAVM_I3C_TX_DATA_PORT CAVM_I3C_TX_DATA_PORT_FUNC()
static inline uint64_t CAVM_I3C_TX_DATA_PORT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3C_TX_DATA_PORT_FUNC(void)
{
    return 0x87e0d0000308ll;
}

#define typedef_CAVM_I3C_TX_DATA_PORT cavm_i3c_tx_data_port_t
#define bustype_CAVM_I3C_TX_DATA_PORT CSR_TYPE_RSL32b
#define basename_CAVM_I3C_TX_DATA_PORT "I3C_TX_DATA_PORT"
#define device_bar_CAVM_I3C_TX_DATA_PORT 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3C_TX_DATA_PORT 0
#define arguments_CAVM_I3C_TX_DATA_PORT -1,-1,-1,-1

#endif /* __CAVM_CSRS_I3C_H__ */
