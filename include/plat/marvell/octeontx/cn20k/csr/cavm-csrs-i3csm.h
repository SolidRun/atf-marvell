#ifndef __CAVM_CSRS_I3CSM_H__
#define __CAVM_CSRS_I3CSM_H__
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
 * I3CSM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration i3csm_bar_e
 *
 * I3CSM Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_I3CSM_BAR_E_I3CSMX_PF_BAR0(a) (0x87e0d4000000ll + 0x1000000ll * (a))
#define CAVM_I3CSM_BAR_E_I3CSMX_PF_BAR0_SIZE 0x10000ull
#define CAVM_I3CSM_BAR_E_I3CSMX_PF_BAR4(a) (0x87e0d4f00000ll + 0x1000000ll * (a))
#define CAVM_I3CSM_BAR_E_I3CSMX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration i3csm_int_vec_e
 *
 * I3CSM MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_I3CSM_INT_VEC_E_I3CSM_INTR (0)

/**
 * Register (RSL32b) i3csm#_bus_free_avail_timing
 *
 * I3CSM Bus Free Avail Timing Register
 * Bus Free and Available Timing Register
 *
 * This register sets the Bus free time for initiating the transfer in master mode or
 * generating IBI in non-current
 * master mode.
 */
union cavm_i3csmx_bus_free_avail_timing
{
    uint32_t u;
    struct cavm_i3csmx_bus_free_avail_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t bus_available_time    : 16; /**< [ 31: 16](R/W) This register field is used only in Slave mode of operation
                                                                 Bus Available Count Value
                                                                 This field is used by the Slave/Non-current Master to initiate an IBI after STOP condition. */
        uint32_t bus_free_time         : 16; /**< [ 15:  0](R/W) This register field is used only in Master mode of operation
                                                                 I3C Bus Free Count Value.
                                                                 In Pure Bus System, this field represents tCAS parameter. In Mixed Bus system,
                                                                 this field is expected to be programmed
                                                                 to tLOW of I2C Timing. */
#else /* Word 0 - Little Endian */
        uint32_t bus_free_time         : 16; /**< [ 15:  0](R/W) This register field is used only in Master mode of operation
                                                                 I3C Bus Free Count Value.
                                                                 In Pure Bus System, this field represents tCAS parameter. In Mixed Bus system,
                                                                 this field is expected to be programmed
                                                                 to tLOW of I2C Timing. */
        uint32_t bus_available_time    : 16; /**< [ 31: 16](R/W) This register field is used only in Slave mode of operation
                                                                 Bus Available Count Value
                                                                 This field is used by the Slave/Non-current Master to initiate an IBI after STOP condition. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_bus_free_avail_timing_s cn; */
};
typedef union cavm_i3csmx_bus_free_avail_timing cavm_i3csmx_bus_free_avail_timing_t;

static inline uint64_t CAVM_I3CSMX_BUS_FREE_AVAIL_TIMING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_BUS_FREE_AVAIL_TIMING(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40000d4ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_BUS_FREE_AVAIL_TIMING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_BUS_FREE_AVAIL_TIMING(a) cavm_i3csmx_bus_free_avail_timing_t
#define bustype_CAVM_I3CSMX_BUS_FREE_AVAIL_TIMING(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_BUS_FREE_AVAIL_TIMING(a) "I3CSMX_BUS_FREE_AVAIL_TIMING"
#define device_bar_CAVM_I3CSMX_BUS_FREE_AVAIL_TIMING(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_BUS_FREE_AVAIL_TIMING(a) (a)
#define arguments_CAVM_I3CSMX_BUS_FREE_AVAIL_TIMING(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_bus_idle_timing
 *
 * I3CSM Bus Idle Timing Register
 * Bus Idle Timing Register
 * This register is used in slave mode of operation.
 * This Register programs the Bus-Idle time period used when a device dynamically joins (hot-join)
 * the I3C bus.This register is used to store the duration, used to detect the Bus-Idle condition
 * if SCL and SDA are held high for the mentioned duration.
 */
union cavm_i3csmx_bus_idle_timing
{
    uint32_t u;
    struct cavm_i3csmx_bus_idle_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_20_31        : 12;
        uint32_t bus_idle_time         : 20; /**< [ 19:  0](R/W) Bus Idle Count Value.
                                                                 This field is used by the controller in Slave or Non-Current Master mode to
                                                                 initiate Hot-Join request if the dynamic address is not valid. */
#else /* Word 0 - Little Endian */
        uint32_t bus_idle_time         : 20; /**< [ 19:  0](R/W) Bus Idle Count Value.
                                                                 This field is used by the controller in Slave or Non-Current Master mode to
                                                                 initiate Hot-Join request if the dynamic address is not valid. */
        uint32_t reserved_20_31        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_bus_idle_timing_s cn; */
};
typedef union cavm_i3csmx_bus_idle_timing cavm_i3csmx_bus_idle_timing_t;

static inline uint64_t CAVM_I3CSMX_BUS_IDLE_TIMING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_BUS_IDLE_TIMING(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40000d8ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_BUS_IDLE_TIMING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_BUS_IDLE_TIMING(a) cavm_i3csmx_bus_idle_timing_t
#define bustype_CAVM_I3CSMX_BUS_IDLE_TIMING(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_BUS_IDLE_TIMING(a) "I3CSMX_BUS_IDLE_TIMING"
#define device_bar_CAVM_I3CSMX_BUS_IDLE_TIMING(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_BUS_IDLE_TIMING(a) (a)
#define arguments_CAVM_I3CSMX_BUS_IDLE_TIMING(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_ccc_device_status
 *
 * I3CSM Ccc Device Status Register
 * Device Operating Status Register.
 *
 * This register is applicable only for I3C Slave mode of operation. This register
 * reflects the data which the Slave controller sends in response to GETSTATUS CC by
 * the Master.
 */
union cavm_i3csmx_ccc_device_status
{
    uint32_t u;
    struct cavm_i3csmx_ccc_device_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_14_31        : 18;
        uint32_t frame_error           : 1;  /**< [ 13: 13](RO) Frame Error

                                                                 This bit is set when private write request from Master has frame error in HDR-DDR/HDR-TSP/TSL mode.
                                                                 This is cleared only after Master reads the device status through GETSTATUS_CCC. */
        uint32_t buffer_not_avail      : 1;  /**< [ 12: 12](RO) Buffer not available

                                                                 This bit is set when private write request from Master is NACKED because of RX
                                                                 buffer not having RX_START_THLD
                                                                 number of empty locations or  Response buffer is full. In SDR mode of operation
                                                                 this is cleared when the
                                                                 Master issues GET_STATUS CCC or upon space becoming available in the buffer and
                                                                 the successful completion of
                                                                 the next write transfer.
                                                                 In HDR mode of operation it is cleared only when Master issues GET_STATUS CCC. */
        uint32_t data_not_ready        : 1;  /**< [ 11: 11](RO) Data not ready

                                                                 This bit is set when private read request from Master is NACKED because of any
                                                                 of the following conditions
                                                                  - Command FIFO Empty.
                                                                  - Transmit FIFO threshold is not met.
                                                                  - Response FIFO Full.
                                                                 This is cleared when the Master issues GET_STATUS CCC or upon successful
                                                                 completion of the subsequent read transfer. */
        uint32_t overflow_err          : 1;  /**< [ 10: 10](RO) Overflow Error

                                                                 Overflow error condition detected during master write transfer.
                                                                 This is cleared only after master reads the Device Status through GETSTATUS CCC. */
        uint32_t slave_busy            : 1;  /**< [  9:  9](RO) Slave Busy
                                                                 This bit is set if any change is made by the current master in to MRL register
                                                                 or occurance of any error.
                                                                 It is cleared after slave application
                                                                 resumes the slave operation by writing 1'b1 in RESUME field of Device Control Register. */
        uint32_t underflow_err         : 1;  /**< [  8:  8](RO) Underflow error

                                                                 Under Flow Error during private master read transfer. This bit is set if slave
                                                                 controller terminates a read transfer
                                                                 because of unavailability of data in the transmit buffer. This is cleared only
                                                                 after master reads the Device Status
                                                                 through GETSTATUS CCC. */
        uint32_t activity_mode         : 2;  /**< [  7:  6](RO) Activity Mode
                                                                 This field reflects the input port signal act_mode. */
        uint32_t protocol_err          : 1;  /**< [  5:  5](RO) Protocol Error

                                                                 This bit is set when the slave controller encouters a Parity/CRC error during write data transfer. */
        uint32_t reserved_4            : 1;
        uint32_t pending_intr          : 4;  /**< [  3:  0](RO) Pending Interrupt

                                                                 This field reflects the value driven on pending_int input port. */
#else /* Word 0 - Little Endian */
        uint32_t pending_intr          : 4;  /**< [  3:  0](RO) Pending Interrupt

                                                                 This field reflects the value driven on pending_int input port. */
        uint32_t reserved_4            : 1;
        uint32_t protocol_err          : 1;  /**< [  5:  5](RO) Protocol Error

                                                                 This bit is set when the slave controller encouters a Parity/CRC error during write data transfer. */
        uint32_t activity_mode         : 2;  /**< [  7:  6](RO) Activity Mode
                                                                 This field reflects the input port signal act_mode. */
        uint32_t underflow_err         : 1;  /**< [  8:  8](RO) Underflow error

                                                                 Under Flow Error during private master read transfer. This bit is set if slave
                                                                 controller terminates a read transfer
                                                                 because of unavailability of data in the transmit buffer. This is cleared only
                                                                 after master reads the Device Status
                                                                 through GETSTATUS CCC. */
        uint32_t slave_busy            : 1;  /**< [  9:  9](RO) Slave Busy
                                                                 This bit is set if any change is made by the current master in to MRL register
                                                                 or occurance of any error.
                                                                 It is cleared after slave application
                                                                 resumes the slave operation by writing 1'b1 in RESUME field of Device Control Register. */
        uint32_t overflow_err          : 1;  /**< [ 10: 10](RO) Overflow Error

                                                                 Overflow error condition detected during master write transfer.
                                                                 This is cleared only after master reads the Device Status through GETSTATUS CCC. */
        uint32_t data_not_ready        : 1;  /**< [ 11: 11](RO) Data not ready

                                                                 This bit is set when private read request from Master is NACKED because of any
                                                                 of the following conditions
                                                                  - Command FIFO Empty.
                                                                  - Transmit FIFO threshold is not met.
                                                                  - Response FIFO Full.
                                                                 This is cleared when the Master issues GET_STATUS CCC or upon successful
                                                                 completion of the subsequent read transfer. */
        uint32_t buffer_not_avail      : 1;  /**< [ 12: 12](RO) Buffer not available

                                                                 This bit is set when private write request from Master is NACKED because of RX
                                                                 buffer not having RX_START_THLD
                                                                 number of empty locations or  Response buffer is full. In SDR mode of operation
                                                                 this is cleared when the
                                                                 Master issues GET_STATUS CCC or upon space becoming available in the buffer and
                                                                 the successful completion of
                                                                 the next write transfer.
                                                                 In HDR mode of operation it is cleared only when Master issues GET_STATUS CCC. */
        uint32_t frame_error           : 1;  /**< [ 13: 13](RO) Frame Error

                                                                 This bit is set when private write request from Master has frame error in HDR-DDR/HDR-TSP/TSL mode.
                                                                 This is cleared only after Master reads the device status through GETSTATUS_CCC. */
        uint32_t reserved_14_31        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_ccc_device_status_s cn; */
};
typedef union cavm_i3csmx_ccc_device_status cavm_i3csmx_ccc_device_status_t;

static inline uint64_t CAVM_I3CSMX_CCC_DEVICE_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_CCC_DEVICE_STATUS(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000058ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_CCC_DEVICE_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_CCC_DEVICE_STATUS(a) cavm_i3csmx_ccc_device_status_t
#define bustype_CAVM_I3CSMX_CCC_DEVICE_STATUS(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_CCC_DEVICE_STATUS(a) "I3CSMX_CCC_DEVICE_STATUS"
#define device_bar_CAVM_I3CSMX_CCC_DEVICE_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_CCC_DEVICE_STATUS(a) (a)
#define arguments_CAVM_I3CSMX_CCC_DEVICE_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_clken
 *
 * MIO Clock Enable Register
 * This register controls conditional clocks.
 */
union cavm_i3csmx_clken
{
    uint32_t u;
    struct cavm_i3csmx_clken_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t clken                 : 1;  /**< [  0:  0](R/W) Force the I3CSM interface conditional clocking to be always on. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint32_t clken                 : 1;  /**< [  0:  0](R/W) Force the I3CSM interface conditional clocking to be always on. For diagnostic use only. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_clken_s cn; */
};
typedef union cavm_i3csmx_clken cavm_i3csmx_clken_t;

static inline uint64_t CAVM_I3CSMX_CLKEN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_CLKEN(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000418ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_CLKEN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_CLKEN(a) cavm_i3csmx_clken_t
#define bustype_CAVM_I3CSMX_CLKEN(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_CLKEN(a) "I3CSMX_CLKEN"
#define device_bar_CAVM_I3CSMX_CLKEN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_CLKEN(a) (a)
#define arguments_CAVM_I3CSMX_CLKEN(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_command_queue_port
 *
 * I3CSM Command Queue Port Register
 * COMMAND_QUEUE_PORT.
 *
 * In Master mode of operation:
 * Command Descriptor structure is used to schedule the transfers to devices on I3C bus.
 * There are four types of commands defined
 *  - Transfer Command
 *  - Transfer Argument
 *  - Short Data Argument
 *  - Address Assignment Command
 *
 * In Slave mode of operation:
 * Command Queue Port is used to push commands which enables the controller to respond
 * with data for a private read command
 * from the  master.
 */
union cavm_i3csmx_command_queue_port
{
    uint32_t u;
    struct cavm_i3csmx_command_queue_port_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t command               : 32; /**< [ 31:  0](WO) 32 bit command */
#else /* Word 0 - Little Endian */
        uint32_t command               : 32; /**< [ 31:  0](WO) 32 bit command */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_command_queue_port_s cn; */
};
typedef union cavm_i3csmx_command_queue_port cavm_i3csmx_command_queue_port_t;

static inline uint64_t CAVM_I3CSMX_COMMAND_QUEUE_PORT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_COMMAND_QUEUE_PORT(uint64_t a)
{
    if (a<=1)
        return 0x87e0d400000cll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_COMMAND_QUEUE_PORT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_COMMAND_QUEUE_PORT(a) cavm_i3csmx_command_queue_port_t
#define bustype_CAVM_I3CSMX_COMMAND_QUEUE_PORT(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_COMMAND_QUEUE_PORT(a) "I3CSMX_COMMAND_QUEUE_PORT"
#define device_bar_CAVM_I3CSMX_COMMAND_QUEUE_PORT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_COMMAND_QUEUE_PORT(a) (a)
#define arguments_CAVM_I3CSMX_COMMAND_QUEUE_PORT(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_data_buffer_status_level
 *
 * I3CSM Data Buffer Status Level Register
 * Data Buffer Status Level Register.
 *
 * This register reflects the status level of the Buffers in DWC_mipi_i3c.
 */
union cavm_i3csmx_data_buffer_status_level
{
    uint32_t u;
    struct cavm_i3csmx_data_buffer_status_level_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t rx_buf_blr            : 8;  /**< [ 23: 16](RO/H) Receive Buffer Level Value.

                                                                 Contains the number of valid data entries in the receive Buffer. */
        uint32_t reserved_8_15         : 8;
        uint32_t tx_buf_empty_loc      : 8;  /**< [  7:  0](RO/H) Transmit Buffer Empty Level Value.

                                                                 Contains the number of empty locations in the transmit Buffer. */
#else /* Word 0 - Little Endian */
        uint32_t tx_buf_empty_loc      : 8;  /**< [  7:  0](RO/H) Transmit Buffer Empty Level Value.

                                                                 Contains the number of empty locations in the transmit Buffer. */
        uint32_t reserved_8_15         : 8;
        uint32_t rx_buf_blr            : 8;  /**< [ 23: 16](RO/H) Receive Buffer Level Value.

                                                                 Contains the number of valid data entries in the receive Buffer. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_data_buffer_status_level_s cn; */
};
typedef union cavm_i3csmx_data_buffer_status_level cavm_i3csmx_data_buffer_status_level_t;

static inline uint64_t CAVM_I3CSMX_DATA_BUFFER_STATUS_LEVEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DATA_BUFFER_STATUS_LEVEL(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000050ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DATA_BUFFER_STATUS_LEVEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DATA_BUFFER_STATUS_LEVEL(a) cavm_i3csmx_data_buffer_status_level_t
#define bustype_CAVM_I3CSMX_DATA_BUFFER_STATUS_LEVEL(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DATA_BUFFER_STATUS_LEVEL(a) "I3CSMX_DATA_BUFFER_STATUS_LEVEL"
#define device_bar_CAVM_I3CSMX_DATA_BUFFER_STATUS_LEVEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DATA_BUFFER_STATUS_LEVEL(a) (a)
#define arguments_CAVM_I3CSMX_DATA_BUFFER_STATUS_LEVEL(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_data_buffer_thld_ctrl
 *
 * I3CSM Data Buffer Thld Ctrl Register
 * Data Buffer Threshold Control Register
 * This register is used to program the threshold settings for the Data Buffers in DWC_mipi_i3c.
 */
union cavm_i3csmx_data_buffer_thld_ctrl
{
    uint32_t u;
    struct cavm_i3csmx_data_buffer_thld_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_27_31        : 5;
        uint32_t rx_start_thld         : 3;  /**< [ 26: 24](R/W) Receive Start Threshold Value
                                                                 In master mode of operation when the controller is set up to initiate a read
                                                                 transfer, it waits until either one of the conditions are met before it
                                                                 initiates the read transfer on the I3C Interface.
                                                                  - Data length (as specified in the command) number of locations are empty in the Receive FIFO.
                                                                  - Threshold number of locations (or more) are empty  in the Receive FIFO.
                                                                 In the slave mode of operation the slave controller ACK's a write request from
                                                                 Master only if threshold number of empty locations(or more) are available in its
                                                                 receive buffer.
                                                                 The supported values for RX_START_THLD are:
                                                                 0x0 = 1.
                                                                 0x1 = 4.
                                                                 0x2 = 8.
                                                                 0x3 = 16.
                                                                 0x4 = 32.
                                                                 0x5 = 64. */
        uint32_t reserved_19_23        : 5;
        uint32_t tx_start_thld         : 3;  /**< [ 18: 16](R/W) Transfer Start Threshold Value
                                                                 In master mode of operation when the controller is set up to initiate a write
                                                                 transfer, it waits until either one of the following conditions are met before
                                                                 it initiates the write transfer on the I3C Interface.
                                                                  - Data length (as specified in the command) number of locations are filled  in the Transmit FIFO
                                                                  - Threshold number of entries (or more) are available in the Transmit FIFO
                                                                 In slave mode of operation the slave controller ACK's a read request from Master
                                                                 only if either one of the following conditions are met:
                                                                  - Data length (as specified in the command) number of locations are filled  in the Transmit FIFO
                                                                  - Threshold number of entries (or more) are available in the Transmit FIFO
                                                                 The supported values for TX_START_THLD are:
                                                                 0x0 = 1.
                                                                 0x1 = 4.
                                                                 0x2 = 8.
                                                                 0x3 = 16.
                                                                 0x4 = 32.
                                                                 0x5 = 64. */
        uint32_t reserved_11_15        : 5;
        uint32_t rx_buf_thld           : 3;  /**< [ 10:  8](R/W) Receive Buffer Threshold Value
                                                                 This field controls the number of entries (or above) in the Receive FIFO that
                                                                 trigger the RX_THLD_STAT interrupt.
                                                                 If the programmed value is greater than the buffer depth, then threshold is set to IC_RX_BUF_DEPTH.
                                                                 The supported values for RX_BUF_THLD are
                                                                 0x0 = 1.
                                                                 0x1 = 4.
                                                                 0x2 = 8.
                                                                 0x3 = 16.
                                                                 0x4 = 32.
                                                                 0x5 = 64. */
        uint32_t reserved_3_7          : 5;
        uint32_t tx_empty_buf_thld     : 3;  /**< [  2:  0](R/W) Transmit Buffer Threshold Value
                                                                 This field controls the number of empty locations (or above) in the Transmit
                                                                 FIFO that trigger the TX_THLD_STAT interrupt.
                                                                 If the programmed value is greater than the buffer depth, then threshold is set to IC_TX_BUF_DEPTH.
                                                                 The supported values for TX_BUF_THLD are
                                                                 0x0 = 1.
                                                                 0x1 = 4.
                                                                 0x2 = 8.
                                                                 0x3 = 16.
                                                                 0x4 = 32.
                                                                 0x5 = 64. */
#else /* Word 0 - Little Endian */
        uint32_t tx_empty_buf_thld     : 3;  /**< [  2:  0](R/W) Transmit Buffer Threshold Value
                                                                 This field controls the number of empty locations (or above) in the Transmit
                                                                 FIFO that trigger the TX_THLD_STAT interrupt.
                                                                 If the programmed value is greater than the buffer depth, then threshold is set to IC_TX_BUF_DEPTH.
                                                                 The supported values for TX_BUF_THLD are
                                                                 0x0 = 1.
                                                                 0x1 = 4.
                                                                 0x2 = 8.
                                                                 0x3 = 16.
                                                                 0x4 = 32.
                                                                 0x5 = 64. */
        uint32_t reserved_3_7          : 5;
        uint32_t rx_buf_thld           : 3;  /**< [ 10:  8](R/W) Receive Buffer Threshold Value
                                                                 This field controls the number of entries (or above) in the Receive FIFO that
                                                                 trigger the RX_THLD_STAT interrupt.
                                                                 If the programmed value is greater than the buffer depth, then threshold is set to IC_RX_BUF_DEPTH.
                                                                 The supported values for RX_BUF_THLD are
                                                                 0x0 = 1.
                                                                 0x1 = 4.
                                                                 0x2 = 8.
                                                                 0x3 = 16.
                                                                 0x4 = 32.
                                                                 0x5 = 64. */
        uint32_t reserved_11_15        : 5;
        uint32_t tx_start_thld         : 3;  /**< [ 18: 16](R/W) Transfer Start Threshold Value
                                                                 In master mode of operation when the controller is set up to initiate a write
                                                                 transfer, it waits until either one of the following conditions are met before
                                                                 it initiates the write transfer on the I3C Interface.
                                                                  - Data length (as specified in the command) number of locations are filled  in the Transmit FIFO
                                                                  - Threshold number of entries (or more) are available in the Transmit FIFO
                                                                 In slave mode of operation the slave controller ACK's a read request from Master
                                                                 only if either one of the following conditions are met:
                                                                  - Data length (as specified in the command) number of locations are filled  in the Transmit FIFO
                                                                  - Threshold number of entries (or more) are available in the Transmit FIFO
                                                                 The supported values for TX_START_THLD are:
                                                                 0x0 = 1.
                                                                 0x1 = 4.
                                                                 0x2 = 8.
                                                                 0x3 = 16.
                                                                 0x4 = 32.
                                                                 0x5 = 64. */
        uint32_t reserved_19_23        : 5;
        uint32_t rx_start_thld         : 3;  /**< [ 26: 24](R/W) Receive Start Threshold Value
                                                                 In master mode of operation when the controller is set up to initiate a read
                                                                 transfer, it waits until either one of the conditions are met before it
                                                                 initiates the read transfer on the I3C Interface.
                                                                  - Data length (as specified in the command) number of locations are empty in the Receive FIFO.
                                                                  - Threshold number of locations (or more) are empty  in the Receive FIFO.
                                                                 In the slave mode of operation the slave controller ACK's a write request from
                                                                 Master only if threshold number of empty locations(or more) are available in its
                                                                 receive buffer.
                                                                 The supported values for RX_START_THLD are:
                                                                 0x0 = 1.
                                                                 0x1 = 4.
                                                                 0x2 = 8.
                                                                 0x3 = 16.
                                                                 0x4 = 32.
                                                                 0x5 = 64. */
        uint32_t reserved_27_31        : 5;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_data_buffer_thld_ctrl_s cn; */
};
typedef union cavm_i3csmx_data_buffer_thld_ctrl cavm_i3csmx_data_buffer_thld_ctrl_t;

static inline uint64_t CAVM_I3CSMX_DATA_BUFFER_THLD_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DATA_BUFFER_THLD_CTRL(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000020ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DATA_BUFFER_THLD_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DATA_BUFFER_THLD_CTRL(a) cavm_i3csmx_data_buffer_thld_ctrl_t
#define bustype_CAVM_I3CSMX_DATA_BUFFER_THLD_CTRL(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DATA_BUFFER_THLD_CTRL(a) "I3CSMX_DATA_BUFFER_THLD_CTRL"
#define device_bar_CAVM_I3CSMX_DATA_BUFFER_THLD_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DATA_BUFFER_THLD_CTRL(a) (a)
#define arguments_CAVM_I3CSMX_DATA_BUFFER_THLD_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_addr_table10_loc1
 *
 * I3CSM Dev Addr Table10 Loc1 Register
 * Device Address Table Location 10
 */
union cavm_i3csmx_dev_addr_table10_loc1
{
    uint32_t u;
    struct cavm_i3csmx_dev_addr_table10_loc1_s
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
                                                                  - The incoming SIR-IBI matches with the slave address initated by the Master. */
        uint32_t diag_28_24            : 5;  /**< [ 28: 24](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 This field consists of Dynamic address and Parity Bit.
                                                                 The LSB bits [22:16] should consist of Dynamic Address field indicates the
                                                                 address to be assigned for the winning I3C device when using ENTDAA command.
                                                                 The MSB[23] bit is the odd parity of the 7-bit Dynamic address used for ENTDAA
                                                                 address assignment (~XOR(DEV_DYNAMIC_ADDR[22:16]) */
        uint32_t diag_15               : 1;  /**< [ 15: 15](RAZ) Reserved. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  0x0 =  Accept: ACK the Master Request.
                                                                  0x1 =  Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  0x0 =  Accept: ACK the SIR.
                                                                  0x1 =  Reject: NACK the SIR and send auto disable CCC. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  0x0 =  IBI Without Mandatory Byte.
                                                                  0x1 =  IBI with one or more Mandatory Bytes. */
        uint32_t ibi_pec_en            : 1;  /**< [ 11: 11](R/W) Packet Error Check enabled for accepted IBI from the device. PEC byte is
                                                                 appended at the end of IBI data from the device.
                                                                 This bit controls whether PEC check should be performed for IBI data from device.
                                                                 This bit also controls whether PEC byte has to be send for auto disable CCC when
                                                                 controller NACKs the IBI.
                                                                  0x0 =  Packet Error Check disabled for IBI.
                                                                  0x1 =  Packet Error Check enabled for IBI.
                                                                 This field is applicable only if configuration parameter 'IC_HAS_PEC' is set to 1. */
        uint32_t diag_10_7             : 4;  /**< [ 10:  7](RAZ) Reserved. */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
#else /* Word 0 - Little Endian */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
        uint32_t diag_10_7             : 4;  /**< [ 10:  7](RAZ) Reserved. */
        uint32_t ibi_pec_en            : 1;  /**< [ 11: 11](R/W) Packet Error Check enabled for accepted IBI from the device. PEC byte is
                                                                 appended at the end of IBI data from the device.
                                                                 This bit controls whether PEC check should be performed for IBI data from device.
                                                                 This bit also controls whether PEC byte has to be send for auto disable CCC when
                                                                 controller NACKs the IBI.
                                                                  0x0 =  Packet Error Check disabled for IBI.
                                                                  0x1 =  Packet Error Check enabled for IBI.
                                                                 This field is applicable only if configuration parameter 'IC_HAS_PEC' is set to 1. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  0x0 =  IBI Without Mandatory Byte.
                                                                  0x1 =  IBI with one or more Mandatory Bytes. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  0x0 =  Accept: ACK the SIR.
                                                                  0x1 =  Reject: NACK the SIR and send auto disable CCC. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  0x0 =  Accept: ACK the Master Request.
                                                                  0x1 =  Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t diag_15               : 1;  /**< [ 15: 15](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 This field consists of Dynamic address and Parity Bit.
                                                                 The LSB bits [22:16] should consist of Dynamic Address field indicates the
                                                                 address to be assigned for the winning I3C device when using ENTDAA command.
                                                                 The MSB[23] bit is the odd parity of the 7-bit Dynamic address used for ENTDAA
                                                                 address assignment (~XOR(DEV_DYNAMIC_ADDR[22:16]) */
        uint32_t diag_28_24            : 5;  /**< [ 28: 24](RAZ) Reserved. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.
                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.
                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initated by the Master. */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device
                                                                 0 = I3C.
                                                                 1 = I2C. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_addr_table10_loc1_s cn; */
};
typedef union cavm_i3csmx_dev_addr_table10_loc1 cavm_i3csmx_dev_addr_table10_loc1_t;

static inline uint64_t CAVM_I3CSMX_DEV_ADDR_TABLE10_LOC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_ADDR_TABLE10_LOC1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40002e4ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_ADDR_TABLE10_LOC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_ADDR_TABLE10_LOC1(a) cavm_i3csmx_dev_addr_table10_loc1_t
#define bustype_CAVM_I3CSMX_DEV_ADDR_TABLE10_LOC1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_ADDR_TABLE10_LOC1(a) "I3CSMX_DEV_ADDR_TABLE10_LOC1"
#define device_bar_CAVM_I3CSMX_DEV_ADDR_TABLE10_LOC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_ADDR_TABLE10_LOC1(a) (a)
#define arguments_CAVM_I3CSMX_DEV_ADDR_TABLE10_LOC1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_addr_table11_loc1
 *
 * I3CSM Dev Addr Table11 Loc1 Register
 * Device Address Table Location 11
 */
union cavm_i3csmx_dev_addr_table11_loc1
{
    uint32_t u;
    struct cavm_i3csmx_dev_addr_table11_loc1_s
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
                                                                  - The incoming SIR-IBI matches with the slave address initated by the Master. */
        uint32_t diag_28_24            : 5;  /**< [ 28: 24](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 This field consists of Dynamic address and Parity Bit.
                                                                 The LSB bits [22:16] should consist of Dynamic Address field indicates the
                                                                 address to be assigned for the winning I3C device when using ENTDAA command.
                                                                 The MSB[23] bit is the odd parity of the 7-bit Dynamic address used for ENTDAA
                                                                 address assignment (~XOR(DEV_DYNAMIC_ADDR[22:16]) */
        uint32_t diag_15               : 1;  /**< [ 15: 15](RAZ) Reserved. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  0x0 =  Accept: ACK the Master Request.
                                                                  0x1 =  Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  0x0 =  Accept: ACK the SIR.
                                                                  0x1 =  Reject: NACK the SIR and send auto disable CCC. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  0x0 =  IBI Without Mandatory Byte.
                                                                  0x1 =  IBI with one or more Mandatory Bytes. */
        uint32_t ibi_pec_en            : 1;  /**< [ 11: 11](R/W) Packet Error Check enabled for accepted IBI from the device. PEC byte is
                                                                 appended at the end of IBI data from the device.
                                                                 This bit controls whether PEC check should be performed for IBI data from device.
                                                                 This bit also controls whether PEC byte has to be send for auto disable CCC when
                                                                 controller NACKs the IBI.
                                                                  0x0 =  Packet Error Check disabled for IBI.
                                                                  0x1 =  Packet Error Check enabled for IBI.
                                                                 This field is applicable only if configuration parameter 'IC_HAS_PEC' is set to 1. */
        uint32_t diag_10_7             : 4;  /**< [ 10:  7](RAZ) Reserved. */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
#else /* Word 0 - Little Endian */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
        uint32_t diag_10_7             : 4;  /**< [ 10:  7](RAZ) Reserved. */
        uint32_t ibi_pec_en            : 1;  /**< [ 11: 11](R/W) Packet Error Check enabled for accepted IBI from the device. PEC byte is
                                                                 appended at the end of IBI data from the device.
                                                                 This bit controls whether PEC check should be performed for IBI data from device.
                                                                 This bit also controls whether PEC byte has to be send for auto disable CCC when
                                                                 controller NACKs the IBI.
                                                                  0x0 =  Packet Error Check disabled for IBI.
                                                                  0x1 =  Packet Error Check enabled for IBI.
                                                                 This field is applicable only if configuration parameter 'IC_HAS_PEC' is set to 1. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  0x0 =  IBI Without Mandatory Byte.
                                                                  0x1 =  IBI with one or more Mandatory Bytes. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  0x0 =  Accept: ACK the SIR.
                                                                  0x1 =  Reject: NACK the SIR and send auto disable CCC. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  0x0 =  Accept: ACK the Master Request.
                                                                  0x1 =  Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t diag_15               : 1;  /**< [ 15: 15](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 This field consists of Dynamic address and Parity Bit.
                                                                 The LSB bits [22:16] should consist of Dynamic Address field indicates the
                                                                 address to be assigned for the winning I3C device when using ENTDAA command.
                                                                 The MSB[23] bit is the odd parity of the 7-bit Dynamic address used for ENTDAA
                                                                 address assignment (~XOR(DEV_DYNAMIC_ADDR[22:16]) */
        uint32_t diag_28_24            : 5;  /**< [ 28: 24](RAZ) Reserved. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.
                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.
                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initated by the Master. */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device
                                                                 0 = I3C.
                                                                 1 = I2C. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_addr_table11_loc1_s cn; */
};
typedef union cavm_i3csmx_dev_addr_table11_loc1 cavm_i3csmx_dev_addr_table11_loc1_t;

static inline uint64_t CAVM_I3CSMX_DEV_ADDR_TABLE11_LOC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_ADDR_TABLE11_LOC1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40002e8ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_ADDR_TABLE11_LOC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_ADDR_TABLE11_LOC1(a) cavm_i3csmx_dev_addr_table11_loc1_t
#define bustype_CAVM_I3CSMX_DEV_ADDR_TABLE11_LOC1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_ADDR_TABLE11_LOC1(a) "I3CSMX_DEV_ADDR_TABLE11_LOC1"
#define device_bar_CAVM_I3CSMX_DEV_ADDR_TABLE11_LOC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_ADDR_TABLE11_LOC1(a) (a)
#define arguments_CAVM_I3CSMX_DEV_ADDR_TABLE11_LOC1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_addr_table1_loc1
 *
 * I3CSM Dev Addr Table1 Loc1 Register
 * Device Address Table Location of Device1
 */
union cavm_i3csmx_dev_addr_table1_loc1
{
    uint32_t u;
    struct cavm_i3csmx_dev_addr_table1_loc1_s
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
                                                                  - The incoming SIR-IBI matches with the slave address initated by the Master. */
        uint32_t diag_28_24            : 5;  /**< [ 28: 24](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 This field consists of Dynamic address and Parity Bit.
                                                                 The LSB bits [22:16] should consist of Dynamic Address field indicates the
                                                                 address to be assigned for the winning I3C device when using ENTDAA command.
                                                                 The MSB[23] bit is the odd parity of the 7-bit Dynamic address used for ENTDAA
                                                                 address assignment (~XOR(DEV_DYNAMIC_ADDR[22:16]) */
        uint32_t diag_15               : 1;  /**< [ 15: 15](RAZ) Reserved. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  0x0 = Accept: ACK the Master Request.
                                                                  0x1 = Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  0x0 = Accept: ACK the SIR.
                                                                  0x1 = Reject: NACK the SIR and send auto disable CCC. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  0x0 = IBI Without Mandatory Byte.
                                                                  0x1 = IBI with one or more Mandatory Bytes. */
        uint32_t ibi_pec_en            : 1;  /**< [ 11: 11](R/W) Packet Error Check enabled for accepted IBI from the device. PEC byte is
                                                                 appended at the end of IBI data from the device.
                                                                 This bit controls whether PEC check should be performed for IBI data from device.
                                                                 This bit also controls whether PEC byte has to be send for auto disable CCC when
                                                                 controller NACKs the IBI.
                                                                 0x0 = Packet Error Check disabled for IBI.
                                                                 0x1 = Packet Error Check enabled for IBI.
                                                                 This field is applicable only if configuration parameter 'IC_HAS_PEC' is set to 1. */
        uint32_t diag_10_7             : 4;  /**< [ 10:  7](RAZ) Reserved. */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
#else /* Word 0 - Little Endian */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
        uint32_t diag_10_7             : 4;  /**< [ 10:  7](RAZ) Reserved. */
        uint32_t ibi_pec_en            : 1;  /**< [ 11: 11](R/W) Packet Error Check enabled for accepted IBI from the device. PEC byte is
                                                                 appended at the end of IBI data from the device.
                                                                 This bit controls whether PEC check should be performed for IBI data from device.
                                                                 This bit also controls whether PEC byte has to be send for auto disable CCC when
                                                                 controller NACKs the IBI.
                                                                 0x0 = Packet Error Check disabled for IBI.
                                                                 0x1 = Packet Error Check enabled for IBI.
                                                                 This field is applicable only if configuration parameter 'IC_HAS_PEC' is set to 1. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  0x0 = IBI Without Mandatory Byte.
                                                                  0x1 = IBI with one or more Mandatory Bytes. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  0x0 = Accept: ACK the SIR.
                                                                  0x1 = Reject: NACK the SIR and send auto disable CCC. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  0x0 = Accept: ACK the Master Request.
                                                                  0x1 = Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t diag_15               : 1;  /**< [ 15: 15](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 This field consists of Dynamic address and Parity Bit.
                                                                 The LSB bits [22:16] should consist of Dynamic Address field indicates the
                                                                 address to be assigned for the winning I3C device when using ENTDAA command.
                                                                 The MSB[23] bit is the odd parity of the 7-bit Dynamic address used for ENTDAA
                                                                 address assignment (~XOR(DEV_DYNAMIC_ADDR[22:16]) */
        uint32_t diag_28_24            : 5;  /**< [ 28: 24](RAZ) Reserved. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.
                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.
                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initated by the Master. */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                 0 = I3C.
                                                                 1 = I2C. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_addr_table1_loc1_s cn; */
};
typedef union cavm_i3csmx_dev_addr_table1_loc1 cavm_i3csmx_dev_addr_table1_loc1_t;

static inline uint64_t CAVM_I3CSMX_DEV_ADDR_TABLE1_LOC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_ADDR_TABLE1_LOC1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40002c0ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_ADDR_TABLE1_LOC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_ADDR_TABLE1_LOC1(a) cavm_i3csmx_dev_addr_table1_loc1_t
#define bustype_CAVM_I3CSMX_DEV_ADDR_TABLE1_LOC1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_ADDR_TABLE1_LOC1(a) "I3CSMX_DEV_ADDR_TABLE1_LOC1"
#define device_bar_CAVM_I3CSMX_DEV_ADDR_TABLE1_LOC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_ADDR_TABLE1_LOC1(a) (a)
#define arguments_CAVM_I3CSMX_DEV_ADDR_TABLE1_LOC1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_addr_table2_loc1
 *
 * I3CSM Dev Addr Table2 Loc1 Register
 * Device Address Table Location 2
 */
union cavm_i3csmx_dev_addr_table2_loc1
{
    uint32_t u;
    struct cavm_i3csmx_dev_addr_table2_loc1_s
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
                                                                  - The incoming SIR-IBI matches with the slave address initated by the Master. */
        uint32_t diag_28_24            : 5;  /**< [ 28: 24](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 This field consists of Dynamic address and Parity Bit.
                                                                 The LSB bits [22:16] should consist of Dynamic Address field indicates the
                                                                 address to be assigned for the winning I3C device when using ENTDAA command.
                                                                 The MSB[23] bit is the odd parity of the 7-bit Dynamic address used for ENTDAA
                                                                 address assignment (~XOR(DEV_DYNAMIC_ADDR[22:16]) */
        uint32_t diag_15               : 1;  /**< [ 15: 15](RAZ) Reserved. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  0x0 = Accept: ACK the Master Request.
                                                                  0x1 = Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  0x0 = Accept: ACK the SIR.
                                                                  0x1 = Reject: NACK the SIR and send auto disable CCC. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  0x0 = IBI Without Mandatory Byte.
                                                                  0x1 = IBI with one or more Mandatory Bytes. */
        uint32_t ibi_pec_en            : 1;  /**< [ 11: 11](R/W) Packet Error Check enabled for accepted IBI from the device. PEC byte is
                                                                 appended at the end of IBI data from the device.
                                                                 This bit controls whether PEC check should be performed for IBI data from device.
                                                                 This bit also controls whether PEC byte has to be send for auto disable CCC when
                                                                 controller NACKs the IBI.
                                                                  0x0 = Packet Error Check disabled for IBI.
                                                                  0x1 = Packet Error Check enabled for IBI.
                                                                 This field is applicable only if configuration parameter 'IC_HAS_PEC' is set to 1. */
        uint32_t diag_10_7             : 4;  /**< [ 10:  7](RAZ) Reserved. */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
#else /* Word 0 - Little Endian */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
        uint32_t diag_10_7             : 4;  /**< [ 10:  7](RAZ) Reserved. */
        uint32_t ibi_pec_en            : 1;  /**< [ 11: 11](R/W) Packet Error Check enabled for accepted IBI from the device. PEC byte is
                                                                 appended at the end of IBI data from the device.
                                                                 This bit controls whether PEC check should be performed for IBI data from device.
                                                                 This bit also controls whether PEC byte has to be send for auto disable CCC when
                                                                 controller NACKs the IBI.
                                                                  0x0 = Packet Error Check disabled for IBI.
                                                                  0x1 = Packet Error Check enabled for IBI.
                                                                 This field is applicable only if configuration parameter 'IC_HAS_PEC' is set to 1. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  0x0 = IBI Without Mandatory Byte.
                                                                  0x1 = IBI with one or more Mandatory Bytes. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  0x0 = Accept: ACK the SIR.
                                                                  0x1 = Reject: NACK the SIR and send auto disable CCC. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  0x0 = Accept: ACK the Master Request.
                                                                  0x1 = Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t diag_15               : 1;  /**< [ 15: 15](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 This field consists of Dynamic address and Parity Bit.
                                                                 The LSB bits [22:16] should consist of Dynamic Address field indicates the
                                                                 address to be assigned for the winning I3C device when using ENTDAA command.
                                                                 The MSB[23] bit is the odd parity of the 7-bit Dynamic address used for ENTDAA
                                                                 address assignment (~XOR(DEV_DYNAMIC_ADDR[22:16]) */
        uint32_t diag_28_24            : 5;  /**< [ 28: 24](RAZ) Reserved. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.
                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.
                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initated by the Master. */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                 0 = I3C.
                                                                 1 = I2C. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_addr_table2_loc1_s cn; */
};
typedef union cavm_i3csmx_dev_addr_table2_loc1 cavm_i3csmx_dev_addr_table2_loc1_t;

static inline uint64_t CAVM_I3CSMX_DEV_ADDR_TABLE2_LOC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_ADDR_TABLE2_LOC1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40002c4ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_ADDR_TABLE2_LOC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_ADDR_TABLE2_LOC1(a) cavm_i3csmx_dev_addr_table2_loc1_t
#define bustype_CAVM_I3CSMX_DEV_ADDR_TABLE2_LOC1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_ADDR_TABLE2_LOC1(a) "I3CSMX_DEV_ADDR_TABLE2_LOC1"
#define device_bar_CAVM_I3CSMX_DEV_ADDR_TABLE2_LOC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_ADDR_TABLE2_LOC1(a) (a)
#define arguments_CAVM_I3CSMX_DEV_ADDR_TABLE2_LOC1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_addr_table3_loc1
 *
 * I3CSM Dev Addr Table3 Loc1 Register
 * Device Address Table of Device3
 * This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_addr_table3_loc1
{
    uint32_t u;
    struct cavm_i3csmx_dev_addr_table3_loc1_s
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
                                                                  - The incoming SIR-IBI matches with the slave address initated by the Master. */
        uint32_t diag_28_24            : 5;  /**< [ 28: 24](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 This field consists of Dynamic address and Parity Bit.
                                                                 The LSB bits [22:16] should consist of Dynamic Address field indicates the
                                                                 address to be assigned for the winning I3C device when using ENTDAA command.
                                                                 The MSB[23] bit is the odd parity of the 7-bit Dynamic address used for ENTDAA
                                                                 address assignment (~XOR(DEV_DYNAMIC_ADDR[22:16]) */
        uint32_t diag_15               : 1;  /**< [ 15: 15](RAZ) Reserved. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  0x0 = Accept: ACK the Master Request.
                                                                  0x1 = Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  0x0 = Accept: ACK the SIR.
                                                                  0x1 = Reject: NACK the SIR and send auto disable CCC. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  0x0 = IBI Without Mandatory Byte.
                                                                  0x1 = IBI with one or more Mandatory Bytes. */
        uint32_t ibi_pec_en            : 1;  /**< [ 11: 11](R/W) Packet Error Check enabled for accepted IBI from the device. PEC byte is
                                                                 appended at the end of IBI data from the device.
                                                                 This bit controls whether PEC check should be performed for IBI data from device.
                                                                 This bit also controls whether PEC byte has to be send for auto disable CCC when
                                                                 controller NACKs the IBI.
                                                                  0x0 =  Packet Error Check disabled for IBI.
                                                                  0x1 =  Packet Error Check enabled for IBI.
                                                                 This field is applicable only if configuration parameter 'IC_HAS_PEC' is set to 1. */
        uint32_t diag_10_7             : 4;  /**< [ 10:  7](RAZ) Reserved. */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
#else /* Word 0 - Little Endian */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
        uint32_t diag_10_7             : 4;  /**< [ 10:  7](RAZ) Reserved. */
        uint32_t ibi_pec_en            : 1;  /**< [ 11: 11](R/W) Packet Error Check enabled for accepted IBI from the device. PEC byte is
                                                                 appended at the end of IBI data from the device.
                                                                 This bit controls whether PEC check should be performed for IBI data from device.
                                                                 This bit also controls whether PEC byte has to be send for auto disable CCC when
                                                                 controller NACKs the IBI.
                                                                  0x0 =  Packet Error Check disabled for IBI.
                                                                  0x1 =  Packet Error Check enabled for IBI.
                                                                 This field is applicable only if configuration parameter 'IC_HAS_PEC' is set to 1. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  0x0 = IBI Without Mandatory Byte.
                                                                  0x1 = IBI with one or more Mandatory Bytes. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  0x0 = Accept: ACK the SIR.
                                                                  0x1 = Reject: NACK the SIR and send auto disable CCC. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  0x0 = Accept: ACK the Master Request.
                                                                  0x1 = Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t diag_15               : 1;  /**< [ 15: 15](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 This field consists of Dynamic address and Parity Bit.
                                                                 The LSB bits [22:16] should consist of Dynamic Address field indicates the
                                                                 address to be assigned for the winning I3C device when using ENTDAA command.
                                                                 The MSB[23] bit is the odd parity of the 7-bit Dynamic address used for ENTDAA
                                                                 address assignment (~XOR(DEV_DYNAMIC_ADDR[22:16]) */
        uint32_t diag_28_24            : 5;  /**< [ 28: 24](RAZ) Reserved. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.
                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.
                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initated by the Master. */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device

                                                                 0 = I3C.
                                                                 1 = I2C. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_addr_table3_loc1_s cn; */
};
typedef union cavm_i3csmx_dev_addr_table3_loc1 cavm_i3csmx_dev_addr_table3_loc1_t;

static inline uint64_t CAVM_I3CSMX_DEV_ADDR_TABLE3_LOC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_ADDR_TABLE3_LOC1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40002c8ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_ADDR_TABLE3_LOC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_ADDR_TABLE3_LOC1(a) cavm_i3csmx_dev_addr_table3_loc1_t
#define bustype_CAVM_I3CSMX_DEV_ADDR_TABLE3_LOC1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_ADDR_TABLE3_LOC1(a) "I3CSMX_DEV_ADDR_TABLE3_LOC1"
#define device_bar_CAVM_I3CSMX_DEV_ADDR_TABLE3_LOC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_ADDR_TABLE3_LOC1(a) (a)
#define arguments_CAVM_I3CSMX_DEV_ADDR_TABLE3_LOC1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_addr_table4_loc1
 *
 * I3CSM Dev Addr Table4 Loc1 Register
 * Device Address Table Location 4
 */
union cavm_i3csmx_dev_addr_table4_loc1
{
    uint32_t u;
    struct cavm_i3csmx_dev_addr_table4_loc1_s
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
                                                                  - The incoming SIR-IBI matches with the slave address initated by the Master. */
        uint32_t diag_28_24            : 5;  /**< [ 28: 24](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 This field consists of Dynamic address and Parity Bit.
                                                                 The LSB bits [22:16] should consist of Dynamic Address field indicates the
                                                                 address to be assigned for the winning I3C device when using ENTDAA command.
                                                                 The MSB[23] bit is the odd parity of the 7-bit Dynamic address used for ENTDAA
                                                                 address assignment (~XOR(DEV_DYNAMIC_ADDR[22:16]) */
        uint32_t diag_15               : 1;  /**< [ 15: 15](RAZ) Reserved. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  0x0 =  Accept: ACK the Master Request.
                                                                  0x1 =  Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  0x0 =  Accept: ACK the SIR.
                                                                  0x1 =  Reject: NACK the SIR and send auto disable CCC. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  0x0 =  IBI Without Mandatory Byte.
                                                                  0x1 =  IBI with one or more Mandatory Bytes. */
        uint32_t ibi_pec_en            : 1;  /**< [ 11: 11](R/W) Packet Error Check enabled for accepted IBI from the device. PEC byte is
                                                                 appended at the end of IBI data from the device.
                                                                 This bit controls whether PEC check should be performed for IBI data from device.
                                                                 This bit also controls whether PEC byte has to be send for auto disable CCC when
                                                                 controller NACKs the IBI.
                                                                  0x0 =  Packet Error Check disabled for IBI.
                                                                  0x1 =  Packet Error Check enabled for IBI.
                                                                 This field is applicable only if configuration parameter 'IC_HAS_PEC' is set to 1. */
        uint32_t diag_10_7             : 4;  /**< [ 10:  7](RAZ) Reserved. */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
#else /* Word 0 - Little Endian */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
        uint32_t diag_10_7             : 4;  /**< [ 10:  7](RAZ) Reserved. */
        uint32_t ibi_pec_en            : 1;  /**< [ 11: 11](R/W) Packet Error Check enabled for accepted IBI from the device. PEC byte is
                                                                 appended at the end of IBI data from the device.
                                                                 This bit controls whether PEC check should be performed for IBI data from device.
                                                                 This bit also controls whether PEC byte has to be send for auto disable CCC when
                                                                 controller NACKs the IBI.
                                                                  0x0 =  Packet Error Check disabled for IBI.
                                                                  0x1 =  Packet Error Check enabled for IBI.
                                                                 This field is applicable only if configuration parameter 'IC_HAS_PEC' is set to 1. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  0x0 =  IBI Without Mandatory Byte.
                                                                  0x1 =  IBI with one or more Mandatory Bytes. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  0x0 =  Accept: ACK the SIR.
                                                                  0x1 =  Reject: NACK the SIR and send auto disable CCC. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  0x0 =  Accept: ACK the Master Request.
                                                                  0x1 =  Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t diag_15               : 1;  /**< [ 15: 15](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 This field consists of Dynamic address and Parity Bit.
                                                                 The LSB bits [22:16] should consist of Dynamic Address field indicates the
                                                                 address to be assigned for the winning I3C device when using ENTDAA command.
                                                                 The MSB[23] bit is the odd parity of the 7-bit Dynamic address used for ENTDAA
                                                                 address assignment (~XOR(DEV_DYNAMIC_ADDR[22:16]) */
        uint32_t diag_28_24            : 5;  /**< [ 28: 24](RAZ) Reserved. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.
                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.
                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initated by the Master. */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device
                                                                 0 = I3C.
                                                                 1 = I2C. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_addr_table4_loc1_s cn; */
};
typedef union cavm_i3csmx_dev_addr_table4_loc1 cavm_i3csmx_dev_addr_table4_loc1_t;

static inline uint64_t CAVM_I3CSMX_DEV_ADDR_TABLE4_LOC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_ADDR_TABLE4_LOC1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40002ccll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_ADDR_TABLE4_LOC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_ADDR_TABLE4_LOC1(a) cavm_i3csmx_dev_addr_table4_loc1_t
#define bustype_CAVM_I3CSMX_DEV_ADDR_TABLE4_LOC1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_ADDR_TABLE4_LOC1(a) "I3CSMX_DEV_ADDR_TABLE4_LOC1"
#define device_bar_CAVM_I3CSMX_DEV_ADDR_TABLE4_LOC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_ADDR_TABLE4_LOC1(a) (a)
#define arguments_CAVM_I3CSMX_DEV_ADDR_TABLE4_LOC1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_addr_table5_loc1
 *
 * I3CSM Dev Addr Table5 Loc1 Register
 * Device Address Table Location 5
 */
union cavm_i3csmx_dev_addr_table5_loc1
{
    uint32_t u;
    struct cavm_i3csmx_dev_addr_table5_loc1_s
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
                                                                  - The incoming SIR-IBI matches with the slave address initated by the Master. */
        uint32_t diag_28_24            : 5;  /**< [ 28: 24](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 This field consists of Dynamic address and Parity Bit.
                                                                 The LSB bits [22:16] should consist of Dynamic Address field indicates the
                                                                 address to be assigned for the winning I3C device when using ENTDAA command.
                                                                 The MSB[23] bit is the odd parity of the 7-bit Dynamic address used for ENTDAA
                                                                 address assignment (~XOR(DEV_DYNAMIC_ADDR[22:16]) */
        uint32_t diag_15               : 1;  /**< [ 15: 15](RAZ) Reserved. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  0x0 =  Accept: ACK the Master Request.
                                                                  0x1 =  Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  0x0 =  Accept: ACK the SIR.
                                                                  0x1 =  Reject: NACK the SIR and send auto disable CCC. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  0x0 =  IBI Without Mandatory Byte.
                                                                  0x1 =  IBI with one or more Mandatory Bytes. */
        uint32_t ibi_pec_en            : 1;  /**< [ 11: 11](R/W) Packet Error Check enabled for accepted IBI from the device. PEC byte is
                                                                 appended at the end of IBI data from the device.
                                                                 This bit controls whether PEC check should be performed for IBI data from device.
                                                                 This bit also controls whether PEC byte has to be send for auto disable CCC when
                                                                 controller NACKs the IBI.
                                                                  0x0 =  Packet Error Check disabled for IBI.
                                                                  0x1 =  Packet Error Check enabled for IBI.
                                                                 This field is applicable only if configuration parameter 'IC_HAS_PEC' is set to 1. */
        uint32_t diag_10_7             : 4;  /**< [ 10:  7](RAZ) Reserved. */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
#else /* Word 0 - Little Endian */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
        uint32_t diag_10_7             : 4;  /**< [ 10:  7](RAZ) Reserved. */
        uint32_t ibi_pec_en            : 1;  /**< [ 11: 11](R/W) Packet Error Check enabled for accepted IBI from the device. PEC byte is
                                                                 appended at the end of IBI data from the device.
                                                                 This bit controls whether PEC check should be performed for IBI data from device.
                                                                 This bit also controls whether PEC byte has to be send for auto disable CCC when
                                                                 controller NACKs the IBI.
                                                                  0x0 =  Packet Error Check disabled for IBI.
                                                                  0x1 =  Packet Error Check enabled for IBI.
                                                                 This field is applicable only if configuration parameter 'IC_HAS_PEC' is set to 1. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  0x0 =  IBI Without Mandatory Byte.
                                                                  0x1 =  IBI with one or more Mandatory Bytes. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  0x0 =  Accept: ACK the SIR.
                                                                  0x1 =  Reject: NACK the SIR and send auto disable CCC. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  0x0 =  Accept: ACK the Master Request.
                                                                  0x1 =  Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t diag_15               : 1;  /**< [ 15: 15](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 This field consists of Dynamic address and Parity Bit.
                                                                 The LSB bits [22:16] should consist of Dynamic Address field indicates the
                                                                 address to be assigned for the winning I3C device when using ENTDAA command.
                                                                 The MSB[23] bit is the odd parity of the 7-bit Dynamic address used for ENTDAA
                                                                 address assignment (~XOR(DEV_DYNAMIC_ADDR[22:16]) */
        uint32_t diag_28_24            : 5;  /**< [ 28: 24](RAZ) Reserved. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.
                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.
                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initated by the Master. */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device
                                                                 0 = I3C.
                                                                 1 = I2C. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_addr_table5_loc1_s cn; */
};
typedef union cavm_i3csmx_dev_addr_table5_loc1 cavm_i3csmx_dev_addr_table5_loc1_t;

static inline uint64_t CAVM_I3CSMX_DEV_ADDR_TABLE5_LOC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_ADDR_TABLE5_LOC1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40002d0ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_ADDR_TABLE5_LOC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_ADDR_TABLE5_LOC1(a) cavm_i3csmx_dev_addr_table5_loc1_t
#define bustype_CAVM_I3CSMX_DEV_ADDR_TABLE5_LOC1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_ADDR_TABLE5_LOC1(a) "I3CSMX_DEV_ADDR_TABLE5_LOC1"
#define device_bar_CAVM_I3CSMX_DEV_ADDR_TABLE5_LOC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_ADDR_TABLE5_LOC1(a) (a)
#define arguments_CAVM_I3CSMX_DEV_ADDR_TABLE5_LOC1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_addr_table6_loc1
 *
 * I3CSM Dev Addr Table6 Loc1 Register
 * Device Address Table Location 6
 */
union cavm_i3csmx_dev_addr_table6_loc1
{
    uint32_t u;
    struct cavm_i3csmx_dev_addr_table6_loc1_s
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
                                                                  - The incoming SIR-IBI matches with the slave address initated by the Master. */
        uint32_t diag_28_24            : 5;  /**< [ 28: 24](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 This field consists of Dynamic address and Parity Bit.
                                                                 The LSB bits [22:16] should consist of Dynamic Address field indicates the
                                                                 address to be assigned for the winning I3C device when using ENTDAA command.
                                                                 The MSB[23] bit is the odd parity of the 7-bit Dynamic address used for ENTDAA
                                                                 address assignment (~XOR(DEV_DYNAMIC_ADDR[22:16]) */
        uint32_t diag_15               : 1;  /**< [ 15: 15](RAZ) Reserved. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  0x0 =  Accept: ACK the Master Request.
                                                                  0x1 =  Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  0x0 =  Accept: ACK the SIR.
                                                                  0x1 =  Reject: NACK the SIR and send auto disable CCC. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  0x0 =  IBI Without Mandatory Byte.
                                                                  0x1 =  IBI with one or more Mandatory Bytes. */
        uint32_t ibi_pec_en            : 1;  /**< [ 11: 11](R/W) Packet Error Check enabled for accepted IBI from the device. PEC byte is
                                                                 appended at the end of IBI data from the device.
                                                                 This bit controls whether PEC check should be performed for IBI data from device.
                                                                 This bit also controls whether PEC byte has to be send for auto disable CCC when
                                                                 controller NACKs the IBI.
                                                                  0x0 =  Packet Error Check disabled for IBI.
                                                                  0x1 =  Packet Error Check enabled for IBI.
                                                                 This field is applicable only if configuration parameter 'IC_HAS_PEC' is set to 1. */
        uint32_t diag_10_7             : 4;  /**< [ 10:  7](RAZ) Reserved. */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
#else /* Word 0 - Little Endian */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
        uint32_t diag_10_7             : 4;  /**< [ 10:  7](RAZ) Reserved. */
        uint32_t ibi_pec_en            : 1;  /**< [ 11: 11](R/W) Packet Error Check enabled for accepted IBI from the device. PEC byte is
                                                                 appended at the end of IBI data from the device.
                                                                 This bit controls whether PEC check should be performed for IBI data from device.
                                                                 This bit also controls whether PEC byte has to be send for auto disable CCC when
                                                                 controller NACKs the IBI.
                                                                  0x0 =  Packet Error Check disabled for IBI.
                                                                  0x1 =  Packet Error Check enabled for IBI.
                                                                 This field is applicable only if configuration parameter 'IC_HAS_PEC' is set to 1. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  0x0 =  IBI Without Mandatory Byte.
                                                                  0x1 =  IBI with one or more Mandatory Bytes. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  0x0 =  Accept: ACK the SIR.
                                                                  0x1 =  Reject: NACK the SIR and send auto disable CCC. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  0x0 =  Accept: ACK the Master Request.
                                                                  0x1 =  Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t diag_15               : 1;  /**< [ 15: 15](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 This field consists of Dynamic address and Parity Bit.
                                                                 The LSB bits [22:16] should consist of Dynamic Address field indicates the
                                                                 address to be assigned for the winning I3C device when using ENTDAA command.
                                                                 The MSB[23] bit is the odd parity of the 7-bit Dynamic address used for ENTDAA
                                                                 address assignment (~XOR(DEV_DYNAMIC_ADDR[22:16]) */
        uint32_t diag_28_24            : 5;  /**< [ 28: 24](RAZ) Reserved. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.
                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.
                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initated by the Master. */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device
                                                                 0 = I3C.
                                                                 1 = I2C. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_addr_table6_loc1_s cn; */
};
typedef union cavm_i3csmx_dev_addr_table6_loc1 cavm_i3csmx_dev_addr_table6_loc1_t;

static inline uint64_t CAVM_I3CSMX_DEV_ADDR_TABLE6_LOC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_ADDR_TABLE6_LOC1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40002d4ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_ADDR_TABLE6_LOC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_ADDR_TABLE6_LOC1(a) cavm_i3csmx_dev_addr_table6_loc1_t
#define bustype_CAVM_I3CSMX_DEV_ADDR_TABLE6_LOC1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_ADDR_TABLE6_LOC1(a) "I3CSMX_DEV_ADDR_TABLE6_LOC1"
#define device_bar_CAVM_I3CSMX_DEV_ADDR_TABLE6_LOC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_ADDR_TABLE6_LOC1(a) (a)
#define arguments_CAVM_I3CSMX_DEV_ADDR_TABLE6_LOC1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_addr_table7_loc1
 *
 * I3CSM Dev Addr Table7 Loc1 Register
 * Device Address Table Location 7
 */
union cavm_i3csmx_dev_addr_table7_loc1
{
    uint32_t u;
    struct cavm_i3csmx_dev_addr_table7_loc1_s
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
                                                                  - The incoming SIR-IBI matches with the slave address initated by the Master. */
        uint32_t diag_28_24            : 5;  /**< [ 28: 24](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 This field consists of Dynamic address and Parity Bit.
                                                                 The LSB bits [22:16] should consist of Dynamic Address field indicates the
                                                                 address to be assigned for the winning I3C device when using ENTDAA command.
                                                                 The MSB[23] bit is the odd parity of the 7-bit Dynamic address used for ENTDAA
                                                                 address assignment (~XOR(DEV_DYNAMIC_ADDR[22:16]) */
        uint32_t diag_15               : 1;  /**< [ 15: 15](RAZ) Reserved. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  0x0 =  Accept: ACK the Master Request.
                                                                  0x1 =  Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  0x0 =  Accept: ACK the SIR.
                                                                  0x1 =  Reject: NACK the SIR and send auto disable CCC. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  0x0 =  IBI Without Mandatory Byte.
                                                                  0x1 =  IBI with one or more Mandatory Bytes. */
        uint32_t ibi_pec_en            : 1;  /**< [ 11: 11](R/W) Packet Error Check enabled for accepted IBI from the device. PEC byte is
                                                                 appended at the end of IBI data from the device.
                                                                 This bit controls whether PEC check should be performed for IBI data from device.
                                                                 This bit also controls whether PEC byte has to be send for auto disable CCC when
                                                                 controller NACKs the IBI.
                                                                  0x0 =  Packet Error Check disabled for IBI.
                                                                  0x1 =  Packet Error Check enabled for IBI.
                                                                 This field is applicable only if configuration parameter 'IC_HAS_PEC' is set to 1. */
        uint32_t diag_10_7             : 4;  /**< [ 10:  7](RAZ) Reserved. */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
#else /* Word 0 - Little Endian */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
        uint32_t diag_10_7             : 4;  /**< [ 10:  7](RAZ) Reserved. */
        uint32_t ibi_pec_en            : 1;  /**< [ 11: 11](R/W) Packet Error Check enabled for accepted IBI from the device. PEC byte is
                                                                 appended at the end of IBI data from the device.
                                                                 This bit controls whether PEC check should be performed for IBI data from device.
                                                                 This bit also controls whether PEC byte has to be send for auto disable CCC when
                                                                 controller NACKs the IBI.
                                                                  0x0 =  Packet Error Check disabled for IBI.
                                                                  0x1 =  Packet Error Check enabled for IBI.
                                                                 This field is applicable only if configuration parameter 'IC_HAS_PEC' is set to 1. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  0x0 =  IBI Without Mandatory Byte.
                                                                  0x1 =  IBI with one or more Mandatory Bytes. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  0x0 =  Accept: ACK the SIR.
                                                                  0x1 =  Reject: NACK the SIR and send auto disable CCC. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  0x0 =  Accept: ACK the Master Request.
                                                                  0x1 =  Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t diag_15               : 1;  /**< [ 15: 15](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 This field consists of Dynamic address and Parity Bit.
                                                                 The LSB bits [22:16] should consist of Dynamic Address field indicates the
                                                                 address to be assigned for the winning I3C device when using ENTDAA command.
                                                                 The MSB[23] bit is the odd parity of the 7-bit Dynamic address used for ENTDAA
                                                                 address assignment (~XOR(DEV_DYNAMIC_ADDR[22:16]) */
        uint32_t diag_28_24            : 5;  /**< [ 28: 24](RAZ) Reserved. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.
                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.
                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initated by the Master. */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device
                                                                 0 = I3C.
                                                                 1 = I2C. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_addr_table7_loc1_s cn; */
};
typedef union cavm_i3csmx_dev_addr_table7_loc1 cavm_i3csmx_dev_addr_table7_loc1_t;

static inline uint64_t CAVM_I3CSMX_DEV_ADDR_TABLE7_LOC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_ADDR_TABLE7_LOC1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40002d8ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_ADDR_TABLE7_LOC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_ADDR_TABLE7_LOC1(a) cavm_i3csmx_dev_addr_table7_loc1_t
#define bustype_CAVM_I3CSMX_DEV_ADDR_TABLE7_LOC1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_ADDR_TABLE7_LOC1(a) "I3CSMX_DEV_ADDR_TABLE7_LOC1"
#define device_bar_CAVM_I3CSMX_DEV_ADDR_TABLE7_LOC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_ADDR_TABLE7_LOC1(a) (a)
#define arguments_CAVM_I3CSMX_DEV_ADDR_TABLE7_LOC1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_addr_table8_loc1
 *
 * I3CSM Dev Addr Table8 Loc1 Register
 * Device Address Table Location 8
 */
union cavm_i3csmx_dev_addr_table8_loc1
{
    uint32_t u;
    struct cavm_i3csmx_dev_addr_table8_loc1_s
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
                                                                  - The incoming SIR-IBI matches with the slave address initated by the Master. */
        uint32_t diag_28_24            : 5;  /**< [ 28: 24](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 This field consists of Dynamic address and Parity Bit.
                                                                 The LSB bits [22:16] should consist of Dynamic Address field indicates the
                                                                 address to be assigned for the winning I3C device when using ENTDAA command.
                                                                 The MSB[23] bit is the odd parity of the 7-bit Dynamic address used for ENTDAA
                                                                 address assignment (~XOR(DEV_DYNAMIC_ADDR[22:16]) */
        uint32_t diag_15               : 1;  /**< [ 15: 15](RAZ) Reserved. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  0x0 =  Accept: ACK the Master Request.
                                                                  0x1 =  Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  0x0 =  Accept: ACK the SIR.
                                                                  0x1 =  Reject: NACK the SIR and send auto disable CCC. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  0x0 =  IBI Without Mandatory Byte.
                                                                  0x1 =  IBI with one or more Mandatory Bytes. */
        uint32_t ibi_pec_en            : 1;  /**< [ 11: 11](R/W) Packet Error Check enabled for accepted IBI from the device. PEC byte is
                                                                 appended at the end of IBI data from the device.
                                                                 This bit controls whether PEC check should be performed for IBI data from device.
                                                                 This bit also controls whether PEC byte has to be send for auto disable CCC when
                                                                 controller NACKs the IBI.
                                                                  0x0 =  Packet Error Check disabled for IBI.
                                                                  0x1 =  Packet Error Check enabled for IBI.
                                                                 This field is applicable only if configuration parameter 'IC_HAS_PEC' is set to 1. */
        uint32_t diag_10_7             : 4;  /**< [ 10:  7](RAZ) Reserved. */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
#else /* Word 0 - Little Endian */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
        uint32_t diag_10_7             : 4;  /**< [ 10:  7](RAZ) Reserved. */
        uint32_t ibi_pec_en            : 1;  /**< [ 11: 11](R/W) Packet Error Check enabled for accepted IBI from the device. PEC byte is
                                                                 appended at the end of IBI data from the device.
                                                                 This bit controls whether PEC check should be performed for IBI data from device.
                                                                 This bit also controls whether PEC byte has to be send for auto disable CCC when
                                                                 controller NACKs the IBI.
                                                                  0x0 =  Packet Error Check disabled for IBI.
                                                                  0x1 =  Packet Error Check enabled for IBI.
                                                                 This field is applicable only if configuration parameter 'IC_HAS_PEC' is set to 1. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  0x0 =  IBI Without Mandatory Byte.
                                                                  0x1 =  IBI with one or more Mandatory Bytes. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  0x0 =  Accept: ACK the SIR.
                                                                  0x1 =  Reject: NACK the SIR and send auto disable CCC. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  0x0 =  Accept: ACK the Master Request.
                                                                  0x1 =  Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t diag_15               : 1;  /**< [ 15: 15](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 This field consists of Dynamic address and Parity Bit.
                                                                 The LSB bits [22:16] should consist of Dynamic Address field indicates the
                                                                 address to be assigned for the winning I3C device when using ENTDAA command.
                                                                 The MSB[23] bit is the odd parity of the 7-bit Dynamic address used for ENTDAA
                                                                 address assignment (~XOR(DEV_DYNAMIC_ADDR[22:16]) */
        uint32_t diag_28_24            : 5;  /**< [ 28: 24](RAZ) Reserved. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.
                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.
                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initated by the Master. */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device
                                                                 0 = I3C.
                                                                 1 = I2C. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_addr_table8_loc1_s cn; */
};
typedef union cavm_i3csmx_dev_addr_table8_loc1 cavm_i3csmx_dev_addr_table8_loc1_t;

static inline uint64_t CAVM_I3CSMX_DEV_ADDR_TABLE8_LOC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_ADDR_TABLE8_LOC1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40002dcll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_ADDR_TABLE8_LOC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_ADDR_TABLE8_LOC1(a) cavm_i3csmx_dev_addr_table8_loc1_t
#define bustype_CAVM_I3CSMX_DEV_ADDR_TABLE8_LOC1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_ADDR_TABLE8_LOC1(a) "I3CSMX_DEV_ADDR_TABLE8_LOC1"
#define device_bar_CAVM_I3CSMX_DEV_ADDR_TABLE8_LOC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_ADDR_TABLE8_LOC1(a) (a)
#define arguments_CAVM_I3CSMX_DEV_ADDR_TABLE8_LOC1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_addr_table9_loc1
 *
 * I3CSM Dev Addr Table9 Loc1 Register
 * Device Address Table Location 9
 */
union cavm_i3csmx_dev_addr_table9_loc1
{
    uint32_t u;
    struct cavm_i3csmx_dev_addr_table9_loc1_s
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
                                                                  - The incoming SIR-IBI matches with the slave address initated by the Master. */
        uint32_t diag_28_24            : 5;  /**< [ 28: 24](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 This field consists of Dynamic address and Parity Bit.
                                                                 The LSB bits [22:16] should consist of Dynamic Address field indicates the
                                                                 address to be assigned for the winning I3C device when using ENTDAA command.
                                                                 The MSB[23] bit is the odd parity of the 7-bit Dynamic address used for ENTDAA
                                                                 address assignment (~XOR(DEV_DYNAMIC_ADDR[22:16]) */
        uint32_t diag_15               : 1;  /**< [ 15: 15](RAZ) Reserved. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  0x0 =  Accept: ACK the Master Request.
                                                                  0x1 =  Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  0x0 =  Accept: ACK the SIR.
                                                                  0x1 =  Reject: NACK the SIR and send auto disable CCC. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  0x0 =  IBI Without Mandatory Byte.
                                                                  0x1 =  IBI with one or more Mandatory Bytes. */
        uint32_t ibi_pec_en            : 1;  /**< [ 11: 11](R/W) Packet Error Check enabled for accepted IBI from the device. PEC byte is
                                                                 appended at the end of IBI data from the device.
                                                                 This bit controls whether PEC check should be performed for IBI data from device.
                                                                 This bit also controls whether PEC byte has to be send for auto disable CCC when
                                                                 controller NACKs the IBI.
                                                                  0x0 =  Packet Error Check disabled for IBI.
                                                                  0x1 =  Packet Error Check enabled for IBI.
                                                                 This field is applicable only if configuration parameter 'IC_HAS_PEC' is set to 1. */
        uint32_t diag_10_7             : 4;  /**< [ 10:  7](RAZ) Reserved. */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
#else /* Word 0 - Little Endian */
        uint32_t static_address        : 7;  /**< [  6:  0](R/W) Device Static Address. */
        uint32_t diag_10_7             : 4;  /**< [ 10:  7](RAZ) Reserved. */
        uint32_t ibi_pec_en            : 1;  /**< [ 11: 11](R/W) Packet Error Check enabled for accepted IBI from the device. PEC byte is
                                                                 appended at the end of IBI data from the device.
                                                                 This bit controls whether PEC check should be performed for IBI data from device.
                                                                 This bit also controls whether PEC byte has to be send for auto disable CCC when
                                                                 controller NACKs the IBI.
                                                                  0x0 =  Packet Error Check disabled for IBI.
                                                                  0x1 =  Packet Error Check enabled for IBI.
                                                                 This field is applicable only if configuration parameter 'IC_HAS_PEC' is set to 1. */
        uint32_t ibi_with_data         : 1;  /**< [ 12: 12](R/W) Mandatory one or more data bytes follow the accepted IBI from the device. Data
                                                                 byte continuation is indicated by T-Bit.
                                                                  0x0 =  IBI Without Mandatory Byte.
                                                                  0x1 =  IBI with one or more Mandatory Bytes. */
        uint32_t sir_reject            : 1;  /**< [ 13: 13](R/W) In-Band Slave Interrupt Request Reject field is used to control, per device,
                                                                 whether to accept Slave Interrupt
                                                                 request from Devices.
                                                                  0x0 =  Accept: ACK the SIR.
                                                                  0x1 =  Reject: NACK the SIR and send auto disable CCC. */
        uint32_t mr_reject             : 1;  /**< [ 14: 14](R/W) In-Band Master Request Reject field is used to control, per device, whether to
                                                                 accept Master request
                                                                 from Devices.
                                                                  0x0 =  Accept: ACK the Master Request.
                                                                  0x1 =  Reject: NACK the Master Request and send auto disable CCC. */
        uint32_t diag_15               : 1;  /**< [ 15: 15](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [ 23: 16](R/W) Device Dynamic Address with parity.
                                                                 This field consists of Dynamic address and Parity Bit.
                                                                 The LSB bits [22:16] should consist of Dynamic Address field indicates the
                                                                 address to be assigned for the winning I3C device when using ENTDAA command.
                                                                 The MSB[23] bit is the odd parity of the 7-bit Dynamic address used for ENTDAA
                                                                 address assignment (~XOR(DEV_DYNAMIC_ADDR[22:16]) */
        uint32_t diag_28_24            : 5;  /**< [ 28: 24](RAZ) Reserved. */
        uint32_t dev_nack_retry_cnt    : 2;  /**< [ 30: 29](R/W) This field is used to set the Device NACK Retry count for the particular device.
                                                                 If the Device NACK's for the device address, the controller automatically
                                                                 retries the same device until
                                                                 this count expires. If the Slave does not ACK for the mentioned number of retries, then Controller
                                                                 generates an error response and move to the Halt state.
                                                                 This feature is used for Retry Model for the following features mentioned in the I3C Specification:
                                                                  - Retry Model for Direct GET CCC Commands.
                                                                  - The incoming SIR-IBI matches with the slave address initated by the Master. */
        uint32_t device                : 1;  /**< [ 31: 31](R/W) Type of device
                                                                 0 = I3C.
                                                                 1 = I2C. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_addr_table9_loc1_s cn; */
};
typedef union cavm_i3csmx_dev_addr_table9_loc1 cavm_i3csmx_dev_addr_table9_loc1_t;

static inline uint64_t CAVM_I3CSMX_DEV_ADDR_TABLE9_LOC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_ADDR_TABLE9_LOC1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40002e0ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_ADDR_TABLE9_LOC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_ADDR_TABLE9_LOC1(a) cavm_i3csmx_dev_addr_table9_loc1_t
#define bustype_CAVM_I3CSMX_DEV_ADDR_TABLE9_LOC1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_ADDR_TABLE9_LOC1(a) "I3CSMX_DEV_ADDR_TABLE9_LOC1"
#define device_bar_CAVM_I3CSMX_DEV_ADDR_TABLE9_LOC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_ADDR_TABLE9_LOC1(a) (a)
#define arguments_CAVM_I3CSMX_DEV_ADDR_TABLE9_LOC1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table10_loc1
 *
 * I3CSM Dev Char Table10 Loc1 Register
 * Device Characteristic Table Location-1 of Device10
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table10_loc1
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table10_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lsb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t lsb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table10_loc1_s cn; */
};
typedef union cavm_i3csmx_dev_char_table10_loc1 cavm_i3csmx_dev_char_table10_loc1_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000290ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE10_LOC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC1(a) cavm_i3csmx_dev_char_table10_loc1_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC1(a) "I3CSMX_DEV_CHAR_TABLE10_LOC1"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC1(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table10_loc2
 *
 * I3CSM Dev Char Table10 Loc2 Register
 * Device Characteristic Table Location-2 of Device10
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table10_loc2
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table10_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
        uint32_t msb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t msb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table10_loc2_s cn; */
};
typedef union cavm_i3csmx_dev_char_table10_loc2 cavm_i3csmx_dev_char_table10_loc2_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC2(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000294ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE10_LOC2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC2(a) cavm_i3csmx_dev_char_table10_loc2_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC2(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC2(a) "I3CSMX_DEV_CHAR_TABLE10_LOC2"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC2(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table10_loc3
 *
 * I3CSM Dev Char Table10 Loc3 Register
 * Device Characteristic Table Location-3 of Device10
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table10_loc3
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table10_loc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
#else /* Word 0 - Little Endian */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table10_loc3_s cn; */
};
typedef union cavm_i3csmx_dev_char_table10_loc3 cavm_i3csmx_dev_char_table10_loc3_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC3(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000298ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE10_LOC3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC3(a) cavm_i3csmx_dev_char_table10_loc3_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC3(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC3(a) "I3CSMX_DEV_CHAR_TABLE10_LOC3"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC3(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table10_loc4
 *
 * I3CSM Dev Char Table10 Loc4 Register
 * Device Characteristic Table Location-4 of Device10
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table10_loc4
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table10_loc4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_8             : 24; /**< [ 31:  8](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
#else /* Word 0 - Little Endian */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
        uint32_t diag_31_8             : 24; /**< [ 31:  8](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table10_loc4_s cn; */
};
typedef union cavm_i3csmx_dev_char_table10_loc4 cavm_i3csmx_dev_char_table10_loc4_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC4(uint64_t a)
{
    if (a<=1)
        return 0x87e0d400029cll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE10_LOC4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC4(a) cavm_i3csmx_dev_char_table10_loc4_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC4(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC4(a) "I3CSMX_DEV_CHAR_TABLE10_LOC4"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC4(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE10_LOC4(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table11_loc1
 *
 * I3CSM Dev Char Table11 Loc1 Register
 * Device Characteristic Table Location-1 of Device11
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table11_loc1
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table11_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lsb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t lsb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table11_loc1_s cn; */
};
typedef union cavm_i3csmx_dev_char_table11_loc1 cavm_i3csmx_dev_char_table11_loc1_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40002a0ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE11_LOC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC1(a) cavm_i3csmx_dev_char_table11_loc1_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC1(a) "I3CSMX_DEV_CHAR_TABLE11_LOC1"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC1(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table11_loc2
 *
 * I3CSM Dev Char Table11 Loc2 Register
 * Device Characteristic Table Location-2 of Device11
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table11_loc2
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table11_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
        uint32_t msb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t msb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table11_loc2_s cn; */
};
typedef union cavm_i3csmx_dev_char_table11_loc2 cavm_i3csmx_dev_char_table11_loc2_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC2(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40002a4ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE11_LOC2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC2(a) cavm_i3csmx_dev_char_table11_loc2_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC2(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC2(a) "I3CSMX_DEV_CHAR_TABLE11_LOC2"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC2(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table11_loc3
 *
 * I3CSM Dev Char Table11 Loc3 Register
 * Device Characteristic Table Location-3 of Device11
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table11_loc3
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table11_loc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
#else /* Word 0 - Little Endian */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table11_loc3_s cn; */
};
typedef union cavm_i3csmx_dev_char_table11_loc3 cavm_i3csmx_dev_char_table11_loc3_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC3(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40002a8ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE11_LOC3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC3(a) cavm_i3csmx_dev_char_table11_loc3_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC3(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC3(a) "I3CSMX_DEV_CHAR_TABLE11_LOC3"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC3(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table11_loc4
 *
 * I3CSM Dev Char Table11 Loc4 Register
 * Device Characteristic Table Location-4 of Device11
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table11_loc4
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table11_loc4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_8             : 24; /**< [ 31:  8](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
#else /* Word 0 - Little Endian */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
        uint32_t diag_31_8             : 24; /**< [ 31:  8](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table11_loc4_s cn; */
};
typedef union cavm_i3csmx_dev_char_table11_loc4 cavm_i3csmx_dev_char_table11_loc4_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC4(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40002acll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE11_LOC4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC4(a) cavm_i3csmx_dev_char_table11_loc4_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC4(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC4(a) "I3CSMX_DEV_CHAR_TABLE11_LOC4"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC4(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE11_LOC4(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table1_loc1
 *
 * I3CSM Dev Char Table1 Loc1 Register
 * Device Characteristic Table Location-1 of Device1
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table1_loc1
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table1_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lsb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t lsb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table1_loc1_s cn; */
};
typedef union cavm_i3csmx_dev_char_table1_loc1 cavm_i3csmx_dev_char_table1_loc1_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000200ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE1_LOC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC1(a) cavm_i3csmx_dev_char_table1_loc1_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC1(a) "I3CSMX_DEV_CHAR_TABLE1_LOC1"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC1(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table1_loc2
 *
 * I3CSM Dev Char Table1 Loc2 Register
 * Device Characteristic Table Location-2 of Device1
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table1_loc2
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table1_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
        uint32_t msb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t msb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table1_loc2_s cn; */
};
typedef union cavm_i3csmx_dev_char_table1_loc2 cavm_i3csmx_dev_char_table1_loc2_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC2(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000204ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE1_LOC2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC2(a) cavm_i3csmx_dev_char_table1_loc2_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC2(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC2(a) "I3CSMX_DEV_CHAR_TABLE1_LOC2"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC2(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table1_loc3
 *
 * I3CSM Dev Char Table1 Loc3 Register
 * Device Characteristic Table Location-3 of Device1
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table1_loc3
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table1_loc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
#else /* Word 0 - Little Endian */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table1_loc3_s cn; */
};
typedef union cavm_i3csmx_dev_char_table1_loc3 cavm_i3csmx_dev_char_table1_loc3_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC3(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000208ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE1_LOC3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC3(a) cavm_i3csmx_dev_char_table1_loc3_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC3(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC3(a) "I3CSMX_DEV_CHAR_TABLE1_LOC3"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC3(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table1_loc4
 *
 * I3CSM Dev Char Table1 Loc4 Register
 * Device Characteristic Table Location-4 of Device1
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table1_loc4
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table1_loc4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_8             : 24; /**< [ 31:  8](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
#else /* Word 0 - Little Endian */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
        uint32_t diag_31_8             : 24; /**< [ 31:  8](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table1_loc4_s cn; */
};
typedef union cavm_i3csmx_dev_char_table1_loc4 cavm_i3csmx_dev_char_table1_loc4_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC4(uint64_t a)
{
    if (a<=1)
        return 0x87e0d400020cll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE1_LOC4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC4(a) cavm_i3csmx_dev_char_table1_loc4_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC4(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC4(a) "I3CSMX_DEV_CHAR_TABLE1_LOC4"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC4(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE1_LOC4(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table2_loc1
 *
 * I3CSM Dev Char Table2 Loc1 Register
 * Device Characteristic Table Location-1 of Device2
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table2_loc1
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table2_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lsb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t lsb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table2_loc1_s cn; */
};
typedef union cavm_i3csmx_dev_char_table2_loc1 cavm_i3csmx_dev_char_table2_loc1_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000210ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE2_LOC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC1(a) cavm_i3csmx_dev_char_table2_loc1_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC1(a) "I3CSMX_DEV_CHAR_TABLE2_LOC1"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC1(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table2_loc2
 *
 * I3CSM Dev Char Table2 Loc2 Register
 * Device Characteristic Table Location-2 of Device2
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table2_loc2
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table2_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
        uint32_t msb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t msb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table2_loc2_s cn; */
};
typedef union cavm_i3csmx_dev_char_table2_loc2 cavm_i3csmx_dev_char_table2_loc2_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC2(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000214ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE2_LOC2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC2(a) cavm_i3csmx_dev_char_table2_loc2_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC2(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC2(a) "I3CSMX_DEV_CHAR_TABLE2_LOC2"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC2(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table2_loc3
 *
 * I3CSM Dev Char Table2 Loc3 Register
 * Device Characteristic Table Location-3 of Device2
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table2_loc3
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table2_loc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
#else /* Word 0 - Little Endian */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table2_loc3_s cn; */
};
typedef union cavm_i3csmx_dev_char_table2_loc3 cavm_i3csmx_dev_char_table2_loc3_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC3(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000218ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE2_LOC3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC3(a) cavm_i3csmx_dev_char_table2_loc3_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC3(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC3(a) "I3CSMX_DEV_CHAR_TABLE2_LOC3"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC3(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table2_loc4
 *
 * I3CSM Dev Char Table2 Loc4 Register
 * Device Characteristic Table Location-4 of Device2
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table2_loc4
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table2_loc4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_8             : 24; /**< [ 31:  8](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
#else /* Word 0 - Little Endian */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
        uint32_t diag_31_8             : 24; /**< [ 31:  8](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table2_loc4_s cn; */
};
typedef union cavm_i3csmx_dev_char_table2_loc4 cavm_i3csmx_dev_char_table2_loc4_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC4(uint64_t a)
{
    if (a<=1)
        return 0x87e0d400021cll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE2_LOC4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC4(a) cavm_i3csmx_dev_char_table2_loc4_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC4(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC4(a) "I3CSMX_DEV_CHAR_TABLE2_LOC4"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC4(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE2_LOC4(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table3_loc1
 *
 * I3CSM Dev Char Table3 Loc1 Register
 * Device Characteristic Table Location-1 of Device3
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table3_loc1
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table3_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lsb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t lsb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table3_loc1_s cn; */
};
typedef union cavm_i3csmx_dev_char_table3_loc1 cavm_i3csmx_dev_char_table3_loc1_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000220ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE3_LOC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC1(a) cavm_i3csmx_dev_char_table3_loc1_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC1(a) "I3CSMX_DEV_CHAR_TABLE3_LOC1"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC1(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table3_loc2
 *
 * I3CSM Dev Char Table3 Loc2 Register
 * Device Characteristic Table Location-2 of Device3
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table3_loc2
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table3_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
        uint32_t msb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t msb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table3_loc2_s cn; */
};
typedef union cavm_i3csmx_dev_char_table3_loc2 cavm_i3csmx_dev_char_table3_loc2_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC2(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000224ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE3_LOC2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC2(a) cavm_i3csmx_dev_char_table3_loc2_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC2(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC2(a) "I3CSMX_DEV_CHAR_TABLE3_LOC2"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC2(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table3_loc3
 *
 * I3CSM Dev Char Table3 Loc3 Register
 * Device Characteristic Table Location-3 of Device3
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table3_loc3
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table3_loc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
#else /* Word 0 - Little Endian */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table3_loc3_s cn; */
};
typedef union cavm_i3csmx_dev_char_table3_loc3 cavm_i3csmx_dev_char_table3_loc3_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC3(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000228ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE3_LOC3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC3(a) cavm_i3csmx_dev_char_table3_loc3_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC3(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC3(a) "I3CSMX_DEV_CHAR_TABLE3_LOC3"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC3(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table3_loc4
 *
 * I3CSM Dev Char Table3 Loc4 Register
 * Device Characteristic Table Location-4 of Device3
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table3_loc4
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table3_loc4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_8             : 24; /**< [ 31:  8](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
#else /* Word 0 - Little Endian */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
        uint32_t diag_31_8             : 24; /**< [ 31:  8](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table3_loc4_s cn; */
};
typedef union cavm_i3csmx_dev_char_table3_loc4 cavm_i3csmx_dev_char_table3_loc4_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC4(uint64_t a)
{
    if (a<=1)
        return 0x87e0d400022cll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE3_LOC4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC4(a) cavm_i3csmx_dev_char_table3_loc4_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC4(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC4(a) "I3CSMX_DEV_CHAR_TABLE3_LOC4"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC4(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE3_LOC4(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table4_loc1
 *
 * I3CSM Dev Char Table4 Loc1 Register
 * Device Characteristic Table Location-1 of Device4
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table4_loc1
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table4_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lsb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t lsb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table4_loc1_s cn; */
};
typedef union cavm_i3csmx_dev_char_table4_loc1 cavm_i3csmx_dev_char_table4_loc1_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000230ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE4_LOC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC1(a) cavm_i3csmx_dev_char_table4_loc1_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC1(a) "I3CSMX_DEV_CHAR_TABLE4_LOC1"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC1(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table4_loc2
 *
 * I3CSM Dev Char Table4 Loc2 Register
 * Device Characteristic Table Location-2 of Device4
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table4_loc2
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table4_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
        uint32_t msb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t msb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table4_loc2_s cn; */
};
typedef union cavm_i3csmx_dev_char_table4_loc2 cavm_i3csmx_dev_char_table4_loc2_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC2(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000234ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE4_LOC2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC2(a) cavm_i3csmx_dev_char_table4_loc2_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC2(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC2(a) "I3CSMX_DEV_CHAR_TABLE4_LOC2"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC2(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table4_loc3
 *
 * I3CSM Dev Char Table4 Loc3 Register
 * Device Characteristic Table Location-3 of Device4
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table4_loc3
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table4_loc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
#else /* Word 0 - Little Endian */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table4_loc3_s cn; */
};
typedef union cavm_i3csmx_dev_char_table4_loc3 cavm_i3csmx_dev_char_table4_loc3_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC3(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000238ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE4_LOC3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC3(a) cavm_i3csmx_dev_char_table4_loc3_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC3(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC3(a) "I3CSMX_DEV_CHAR_TABLE4_LOC3"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC3(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table4_loc4
 *
 * I3CSM Dev Char Table4 Loc4 Register
 * Device Characteristic Table Location-4 of Device4
 */
union cavm_i3csmx_dev_char_table4_loc4
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table4_loc4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_8             : 24; /**< [ 31:  8](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
#else /* Word 0 - Little Endian */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
        uint32_t diag_31_8             : 24; /**< [ 31:  8](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table4_loc4_s cn; */
};
typedef union cavm_i3csmx_dev_char_table4_loc4 cavm_i3csmx_dev_char_table4_loc4_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC4(uint64_t a)
{
    if (a<=1)
        return 0x87e0d400023cll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE4_LOC4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC4(a) cavm_i3csmx_dev_char_table4_loc4_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC4(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC4(a) "I3CSMX_DEV_CHAR_TABLE4_LOC4"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC4(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE4_LOC4(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table5_loc1
 *
 * I3CSM Dev Char Table5 Loc1 Register
 * Device Characteristic Table Location-1 of Device5
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table5_loc1
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table5_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lsb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t lsb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table5_loc1_s cn; */
};
typedef union cavm_i3csmx_dev_char_table5_loc1 cavm_i3csmx_dev_char_table5_loc1_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000240ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE5_LOC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC1(a) cavm_i3csmx_dev_char_table5_loc1_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC1(a) "I3CSMX_DEV_CHAR_TABLE5_LOC1"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC1(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table5_loc2
 *
 * I3CSM Dev Char Table5 Loc2 Register
 * Device Characteristic Table Location-2 of Device5
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table5_loc2
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table5_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
        uint32_t msb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t msb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table5_loc2_s cn; */
};
typedef union cavm_i3csmx_dev_char_table5_loc2 cavm_i3csmx_dev_char_table5_loc2_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC2(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000244ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE5_LOC2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC2(a) cavm_i3csmx_dev_char_table5_loc2_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC2(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC2(a) "I3CSMX_DEV_CHAR_TABLE5_LOC2"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC2(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table5_loc3
 *
 * I3CSM Dev Char Table5 Loc3 Register
 * Device Characteristic Table Location-3 of Device5
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table5_loc3
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table5_loc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
#else /* Word 0 - Little Endian */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table5_loc3_s cn; */
};
typedef union cavm_i3csmx_dev_char_table5_loc3 cavm_i3csmx_dev_char_table5_loc3_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC3(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000248ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE5_LOC3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC3(a) cavm_i3csmx_dev_char_table5_loc3_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC3(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC3(a) "I3CSMX_DEV_CHAR_TABLE5_LOC3"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC3(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table5_loc4
 *
 * I3CSM Dev Char Table5 Loc4 Register
 * Device Characteristic Table Location-4 of Device5
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table5_loc4
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table5_loc4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_8             : 24; /**< [ 31:  8](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
#else /* Word 0 - Little Endian */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
        uint32_t diag_31_8             : 24; /**< [ 31:  8](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table5_loc4_s cn; */
};
typedef union cavm_i3csmx_dev_char_table5_loc4 cavm_i3csmx_dev_char_table5_loc4_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC4(uint64_t a)
{
    if (a<=1)
        return 0x87e0d400024cll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE5_LOC4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC4(a) cavm_i3csmx_dev_char_table5_loc4_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC4(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC4(a) "I3CSMX_DEV_CHAR_TABLE5_LOC4"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC4(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE5_LOC4(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table6_loc1
 *
 * I3CSM Dev Char Table6 Loc1 Register
 * Device Characteristic Table Location-1 of Device6
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table6_loc1
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table6_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lsb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t lsb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table6_loc1_s cn; */
};
typedef union cavm_i3csmx_dev_char_table6_loc1 cavm_i3csmx_dev_char_table6_loc1_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000250ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE6_LOC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC1(a) cavm_i3csmx_dev_char_table6_loc1_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC1(a) "I3CSMX_DEV_CHAR_TABLE6_LOC1"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC1(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table6_loc2
 *
 * I3CSM Dev Char Table6 Loc2 Register
 * Device Characteristic Table Location-2 of Device6
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table6_loc2
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table6_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
        uint32_t msb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t msb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table6_loc2_s cn; */
};
typedef union cavm_i3csmx_dev_char_table6_loc2 cavm_i3csmx_dev_char_table6_loc2_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC2(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000254ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE6_LOC2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC2(a) cavm_i3csmx_dev_char_table6_loc2_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC2(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC2(a) "I3CSMX_DEV_CHAR_TABLE6_LOC2"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC2(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table6_loc3
 *
 * I3CSM Dev Char Table6 Loc3 Register
 * Device Characteristic Table Location-3 of Device6
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table6_loc3
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table6_loc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
#else /* Word 0 - Little Endian */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table6_loc3_s cn; */
};
typedef union cavm_i3csmx_dev_char_table6_loc3 cavm_i3csmx_dev_char_table6_loc3_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC3(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000258ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE6_LOC3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC3(a) cavm_i3csmx_dev_char_table6_loc3_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC3(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC3(a) "I3CSMX_DEV_CHAR_TABLE6_LOC3"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC3(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table6_loc4
 *
 * I3CSM Dev Char Table6 Loc4 Register
 * Device Characteristic Table Location-4 of Device6
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table6_loc4
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table6_loc4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_8             : 24; /**< [ 31:  8](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
#else /* Word 0 - Little Endian */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
        uint32_t diag_31_8             : 24; /**< [ 31:  8](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table6_loc4_s cn; */
};
typedef union cavm_i3csmx_dev_char_table6_loc4 cavm_i3csmx_dev_char_table6_loc4_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC4(uint64_t a)
{
    if (a<=1)
        return 0x87e0d400025cll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE6_LOC4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC4(a) cavm_i3csmx_dev_char_table6_loc4_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC4(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC4(a) "I3CSMX_DEV_CHAR_TABLE6_LOC4"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC4(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE6_LOC4(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table7_loc1
 *
 * I3CSM Dev Char Table7 Loc1 Register
 * Device Characteristic Table Location-1 of Device7
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table7_loc1
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table7_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lsb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t lsb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table7_loc1_s cn; */
};
typedef union cavm_i3csmx_dev_char_table7_loc1 cavm_i3csmx_dev_char_table7_loc1_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000260ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE7_LOC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC1(a) cavm_i3csmx_dev_char_table7_loc1_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC1(a) "I3CSMX_DEV_CHAR_TABLE7_LOC1"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC1(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table7_loc2
 *
 * I3CSM Dev Char Table7 Loc2 Register
 * Device Characteristic Table Location-2 of Device7
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table7_loc2
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table7_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
        uint32_t msb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t msb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table7_loc2_s cn; */
};
typedef union cavm_i3csmx_dev_char_table7_loc2 cavm_i3csmx_dev_char_table7_loc2_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC2(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000264ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE7_LOC2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC2(a) cavm_i3csmx_dev_char_table7_loc2_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC2(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC2(a) "I3CSMX_DEV_CHAR_TABLE7_LOC2"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC2(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table7_loc3
 *
 * I3CSM Dev Char Table7 Loc3 Register
 * Device Characteristic Table Location-3 of Device7
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table7_loc3
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table7_loc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
#else /* Word 0 - Little Endian */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table7_loc3_s cn; */
};
typedef union cavm_i3csmx_dev_char_table7_loc3 cavm_i3csmx_dev_char_table7_loc3_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC3(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000268ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE7_LOC3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC3(a) cavm_i3csmx_dev_char_table7_loc3_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC3(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC3(a) "I3CSMX_DEV_CHAR_TABLE7_LOC3"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC3(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table7_loc4
 *
 * I3CSM Dev Char Table7 Loc4 Register
 * Device Characteristic Table Location-4 of Device7
 */
union cavm_i3csmx_dev_char_table7_loc4
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table7_loc4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_8             : 24; /**< [ 31:  8](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
#else /* Word 0 - Little Endian */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
        uint32_t diag_31_8             : 24; /**< [ 31:  8](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table7_loc4_s cn; */
};
typedef union cavm_i3csmx_dev_char_table7_loc4 cavm_i3csmx_dev_char_table7_loc4_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC4(uint64_t a)
{
    if (a<=1)
        return 0x87e0d400026cll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE7_LOC4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC4(a) cavm_i3csmx_dev_char_table7_loc4_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC4(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC4(a) "I3CSMX_DEV_CHAR_TABLE7_LOC4"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC4(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE7_LOC4(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table8_loc1
 *
 * I3CSM Dev Char Table8 Loc1 Register
 * Device Characteristic Table Location-1 of Device8
 */
union cavm_i3csmx_dev_char_table8_loc1
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table8_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lsb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t lsb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table8_loc1_s cn; */
};
typedef union cavm_i3csmx_dev_char_table8_loc1 cavm_i3csmx_dev_char_table8_loc1_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000270ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE8_LOC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC1(a) cavm_i3csmx_dev_char_table8_loc1_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC1(a) "I3CSMX_DEV_CHAR_TABLE8_LOC1"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC1(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table8_loc2
 *
 * I3CSM Dev Char Table8 Loc2 Register
 * Device Characteristic Table Location-2 of Device8
 */
union cavm_i3csmx_dev_char_table8_loc2
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table8_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
        uint32_t msb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t msb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table8_loc2_s cn; */
};
typedef union cavm_i3csmx_dev_char_table8_loc2 cavm_i3csmx_dev_char_table8_loc2_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC2(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000274ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE8_LOC2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC2(a) cavm_i3csmx_dev_char_table8_loc2_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC2(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC2(a) "I3CSMX_DEV_CHAR_TABLE8_LOC2"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC2(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table8_loc3
 *
 * I3CSM Dev Char Table8 Loc3 Register
 * Device Characteristic Table Location-3 of Device8
 */
union cavm_i3csmx_dev_char_table8_loc3
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table8_loc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
#else /* Word 0 - Little Endian */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table8_loc3_s cn; */
};
typedef union cavm_i3csmx_dev_char_table8_loc3 cavm_i3csmx_dev_char_table8_loc3_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC3(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000278ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE8_LOC3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC3(a) cavm_i3csmx_dev_char_table8_loc3_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC3(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC3(a) "I3CSMX_DEV_CHAR_TABLE8_LOC3"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC3(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table8_loc4
 *
 * I3CSM Dev Char Table8 Loc4 Register
 * Device Characteristic Table Location-4 of Device8
 */
union cavm_i3csmx_dev_char_table8_loc4
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table8_loc4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_8             : 24; /**< [ 31:  8](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
#else /* Word 0 - Little Endian */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
        uint32_t diag_31_8             : 24; /**< [ 31:  8](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table8_loc4_s cn; */
};
typedef union cavm_i3csmx_dev_char_table8_loc4 cavm_i3csmx_dev_char_table8_loc4_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC4(uint64_t a)
{
    if (a<=1)
        return 0x87e0d400027cll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE8_LOC4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC4(a) cavm_i3csmx_dev_char_table8_loc4_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC4(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC4(a) "I3CSMX_DEV_CHAR_TABLE8_LOC4"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC4(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE8_LOC4(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table9_loc1
 *
 * I3CSM Dev Char Table9 Loc1 Register
 * Device Characteristic Table Location-1 of Device9
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table9_loc1
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table9_loc1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t lsb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t lsb_provisional_id    : 32; /**< [ 31:  0](RO/H) The LSB 32-bit value of Provisional-ID */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table9_loc1_s cn; */
};
typedef union cavm_i3csmx_dev_char_table9_loc1 cavm_i3csmx_dev_char_table9_loc1_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000280ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE9_LOC1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC1(a) cavm_i3csmx_dev_char_table9_loc1_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC1(a) "I3CSMX_DEV_CHAR_TABLE9_LOC1"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC1(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table9_loc2
 *
 * I3CSM Dev Char Table9 Loc2 Register
 * Device Characteristic Table Location-2 of Device9
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table9_loc2
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table9_loc2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
        uint32_t msb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
#else /* Word 0 - Little Endian */
        uint32_t msb_provisional_id    : 16; /**< [ 15:  0](RO/H) The MSB 16-bit value of Provisional-ID */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table9_loc2_s cn; */
};
typedef union cavm_i3csmx_dev_char_table9_loc2 cavm_i3csmx_dev_char_table9_loc2_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC2(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000284ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE9_LOC2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC2(a) cavm_i3csmx_dev_char_table9_loc2_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC2(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC2(a) "I3CSMX_DEV_CHAR_TABLE9_LOC2"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC2(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC2(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table9_loc3
 *
 * I3CSM Dev Char Table9 Loc3 Register
 * Device Characteristic Table Location-3 of Device9
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table9_loc3
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table9_loc3_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
#else /* Word 0 - Little Endian */
        uint32_t dcr                   : 8;  /**< [  7:  0](RO/H) Device Characteristic Value */
        uint32_t bcr                   : 8;  /**< [ 15:  8](RO/H) Bus Characteristic Value */
        uint32_t diag_31_16            : 16; /**< [ 31: 16](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table9_loc3_s cn; */
};
typedef union cavm_i3csmx_dev_char_table9_loc3 cavm_i3csmx_dev_char_table9_loc3_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC3(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000288ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE9_LOC3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC3(a) cavm_i3csmx_dev_char_table9_loc3_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC3(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC3(a) "I3CSMX_DEV_CHAR_TABLE9_LOC3"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC3(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC3(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC3(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table9_loc4
 *
 * I3CSM Dev Char Table9 Loc4 Register
 * Device Characteristic Table Location-4 of Device9
 *   This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table9_loc4
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table9_loc4_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t diag_31_8             : 24; /**< [ 31:  8](RAZ) Reserved. */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
#else /* Word 0 - Little Endian */
        uint32_t dev_dynamic_addr      : 8;  /**< [  7:  0](RO/H) Device Dynamic Address assigned. */
        uint32_t diag_31_8             : 24; /**< [ 31:  8](RAZ) Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table9_loc4_s cn; */
};
typedef union cavm_i3csmx_dev_char_table9_loc4 cavm_i3csmx_dev_char_table9_loc4_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC4(uint64_t a)
{
    if (a<=1)
        return 0x87e0d400028cll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE9_LOC4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC4(a) cavm_i3csmx_dev_char_table9_loc4_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC4(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC4(a) "I3CSMX_DEV_CHAR_TABLE9_LOC4"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC4(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC4(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE9_LOC4(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_dev_char_table_pointer
 *
 * I3CSM Dev Char Table Pointer Register
 * Pointer for Device Characteristics Table
 *
 * This register is used in master mode of operation.
 */
union cavm_i3csmx_dev_char_table_pointer
{
    uint32_t u;
    struct cavm_i3csmx_dev_char_table_pointer_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_23_31        : 9;
        uint32_t present_dev_char_table_indx : 4;/**< [ 22: 19](R/W) Current index of Device Characteristics Table.

                                                                 This field returns the current location of Device Characteristics Table index.
                                                                 Initially, this index points to 0.
                                                                 Once the complete characteristics information of a Slave device is written into
                                                                 Device Characteristics Table during ENTDAA,
                                                                 this index increments by 1. The first winning device information is stored in
                                                                 Device Characteristics Table index 0,
                                                                 the second winning device information in index 1, and so on.
                                                                 If required, this index can be used to override the location, where
                                                                 characteristic information of Slave devices on the I3C bus are written during
                                                                 ENTDAA. Hence, this field is useful only if the
                                                                 device is Current Master. During DEFSLV CCC, the index always starts from 0.
                                                                 In Non-current Master, this field is always read-only. */
        uint32_t dev_char_table_depth  : 7;  /**< [ 18: 12](RO) Depth of Device Characteristics Table */
        uint32_t p_dev_char_table_start_addr : 12;/**< [ 11:  0](RO) Start Address of Device Characteristics Table. */
#else /* Word 0 - Little Endian */
        uint32_t p_dev_char_table_start_addr : 12;/**< [ 11:  0](RO) Start Address of Device Characteristics Table. */
        uint32_t dev_char_table_depth  : 7;  /**< [ 18: 12](RO) Depth of Device Characteristics Table */
        uint32_t present_dev_char_table_indx : 4;/**< [ 22: 19](R/W) Current index of Device Characteristics Table.

                                                                 This field returns the current location of Device Characteristics Table index.
                                                                 Initially, this index points to 0.
                                                                 Once the complete characteristics information of a Slave device is written into
                                                                 Device Characteristics Table during ENTDAA,
                                                                 this index increments by 1. The first winning device information is stored in
                                                                 Device Characteristics Table index 0,
                                                                 the second winning device information in index 1, and so on.
                                                                 If required, this index can be used to override the location, where
                                                                 characteristic information of Slave devices on the I3C bus are written during
                                                                 ENTDAA. Hence, this field is useful only if the
                                                                 device is Current Master. During DEFSLV CCC, the index always starts from 0.
                                                                 In Non-current Master, this field is always read-only. */
        uint32_t reserved_23_31        : 9;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_dev_char_table_pointer_s cn; */
};
typedef union cavm_i3csmx_dev_char_table_pointer cavm_i3csmx_dev_char_table_pointer_t;

static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE_POINTER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEV_CHAR_TABLE_POINTER(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000060ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEV_CHAR_TABLE_POINTER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEV_CHAR_TABLE_POINTER(a) cavm_i3csmx_dev_char_table_pointer_t
#define bustype_CAVM_I3CSMX_DEV_CHAR_TABLE_POINTER(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEV_CHAR_TABLE_POINTER(a) "I3CSMX_DEV_CHAR_TABLE_POINTER"
#define device_bar_CAVM_I3CSMX_DEV_CHAR_TABLE_POINTER(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEV_CHAR_TABLE_POINTER(a) (a)
#define arguments_CAVM_I3CSMX_DEV_CHAR_TABLE_POINTER(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_device_addr
 *
 * I3CSM Device Addr Register
 * In the master mode of operation this Register is used to program the Device Dynamic
 * Addresses and its respective valid bit.
 * In the slave mode of operation this Register reflects the Static and Dynamic
 * Addresses and their respective valid bits of the slave controller.
 */
union cavm_i3csmx_device_addr
{
    uint32_t u;
    struct cavm_i3csmx_device_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dynamic_addr_valid    : 1;  /**< [ 31: 31](R/W) Dynamic Address Valid
                                                                 This bit is used to control whether the DYNAMIC_ADDR is valid or not.
                                                                  - In I3C Main Master mode, the user sets this bit to 1 as it self-assigns its dynamic address.
                                                                  - In all other operation modes, the Controller sets this bit to 1 when Main
                                                                 Master assigns the Dynamic address during ENTDAA or SETDASA mechanism.
                                                                 Application can stll program the Dynamic address valid if required under special
                                                                 circumstances like after exiting the low power mode in slave mode of operation.
                                                                  - In I3C Slave Mode the Controller sets this bit to 1 when Main Master assigns
                                                                 the Dynamic address during ENTDAA or SETDASA mechanism.Application can stll
                                                                 program the Dynamic address valid if required under special circumstances like
                                                                 after exiting the low power mode in slave mode of operation */
        uint32_t reserved_23_30        : 8;
        uint32_t dynamic_addr          : 7;  /**< [ 22: 16](R/W) Device Dynamic Address.

                                                                 This field is used to program the Device Dynamic Address. The Controller uses
                                                                 this address for I3C transfers.Application can program the Dynamic Address
                                                                 through the Slave Interface.
                                                                  - In Main Master mode, the user/application has to program the Dynamic Address
                                                                 through the Slave interface as it self-assigns its Dynamic Address.
                                                                  - In all other modes, the Main Master assigns this address during ENTDAA or
                                                                 SETDASA mechanism. Application can stll program the Dynamic address if required
                                                                 under special circumstances like after exiting the low power mode in slave mode
                                                                 of operation.
                                                                  - The Main Master assigns this address during ENTDAA or SETDASA
                                                                 mechanism.Application can stll program the Dynamic address if required under
                                                                 special circumstances like after exiting the low power mode in slave mode of
                                                                 operation */
        uint32_t static_addr_valid     : 1;  /**< [ 15: 15](R/W) Static Address Valid.
                                                                 In slave mode of operation this bit reflects the value of static_addr_en input
                                                                 port. The input port static_addr_en is expected to be driven to 1
                                                                 only if the device supports I2C or I3C Static Address. */
        uint32_t reserved_7_14         : 8;
        uint32_t static_addr           : 7;  /**< [  6:  0](R/W) Device Static Address.
                                                                 In slave mode of operation this field reflects the value of static_addr input
                                                                 port. The controller uses this address to respond to
                                                                 SETDASA CCC Command to get the Dynamic Address if static address is valid
                                                                 (static_addr_en port is set to 1). */
#else /* Word 0 - Little Endian */
        uint32_t static_addr           : 7;  /**< [  6:  0](R/W) Device Static Address.
                                                                 In slave mode of operation this field reflects the value of static_addr input
                                                                 port. The controller uses this address to respond to
                                                                 SETDASA CCC Command to get the Dynamic Address if static address is valid
                                                                 (static_addr_en port is set to 1). */
        uint32_t reserved_7_14         : 8;
        uint32_t static_addr_valid     : 1;  /**< [ 15: 15](R/W) Static Address Valid.
                                                                 In slave mode of operation this bit reflects the value of static_addr_en input
                                                                 port. The input port static_addr_en is expected to be driven to 1
                                                                 only if the device supports I2C or I3C Static Address. */
        uint32_t dynamic_addr          : 7;  /**< [ 22: 16](R/W) Device Dynamic Address.

                                                                 This field is used to program the Device Dynamic Address. The Controller uses
                                                                 this address for I3C transfers.Application can program the Dynamic Address
                                                                 through the Slave Interface.
                                                                  - In Main Master mode, the user/application has to program the Dynamic Address
                                                                 through the Slave interface as it self-assigns its Dynamic Address.
                                                                  - In all other modes, the Main Master assigns this address during ENTDAA or
                                                                 SETDASA mechanism. Application can stll program the Dynamic address if required
                                                                 under special circumstances like after exiting the low power mode in slave mode
                                                                 of operation.
                                                                  - The Main Master assigns this address during ENTDAA or SETDASA
                                                                 mechanism.Application can stll program the Dynamic address if required under
                                                                 special circumstances like after exiting the low power mode in slave mode of
                                                                 operation */
        uint32_t reserved_23_30        : 8;
        uint32_t dynamic_addr_valid    : 1;  /**< [ 31: 31](R/W) Dynamic Address Valid
                                                                 This bit is used to control whether the DYNAMIC_ADDR is valid or not.
                                                                  - In I3C Main Master mode, the user sets this bit to 1 as it self-assigns its dynamic address.
                                                                  - In all other operation modes, the Controller sets this bit to 1 when Main
                                                                 Master assigns the Dynamic address during ENTDAA or SETDASA mechanism.
                                                                 Application can stll program the Dynamic address valid if required under special
                                                                 circumstances like after exiting the low power mode in slave mode of operation.
                                                                  - In I3C Slave Mode the Controller sets this bit to 1 when Main Master assigns
                                                                 the Dynamic address during ENTDAA or SETDASA mechanism.Application can stll
                                                                 program the Dynamic address valid if required under special circumstances like
                                                                 after exiting the low power mode in slave mode of operation */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_device_addr_s cn; */
};
typedef union cavm_i3csmx_device_addr cavm_i3csmx_device_addr_t;

static inline uint64_t CAVM_I3CSMX_DEVICE_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEVICE_ADDR(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000004ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEVICE_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEVICE_ADDR(a) cavm_i3csmx_device_addr_t
#define bustype_CAVM_I3CSMX_DEVICE_ADDR(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEVICE_ADDR(a) "I3CSMX_DEVICE_ADDR"
#define device_bar_CAVM_I3CSMX_DEVICE_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEVICE_ADDR(a) (a)
#define arguments_CAVM_I3CSMX_DEVICE_ADDR(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_device_addr_table_pointer
 *
 * I3CSM Device Addr Table Pointer Register
 * Pointer for Device Address Table
 *
 * This register is used in master mode of operation.
 */
union cavm_i3csmx_device_addr_table_pointer
{
    uint32_t u;
    struct cavm_i3csmx_device_addr_table_pointer_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t dev_addr_table_depth  : 16; /**< [ 31: 16](RO) Depth of Device Address Table */
        uint32_t p_dev_addr_table_start_addr : 16;/**< [ 15:  0](RO) Start Address of Device Address Table. */
#else /* Word 0 - Little Endian */
        uint32_t p_dev_addr_table_start_addr : 16;/**< [ 15:  0](RO) Start Address of Device Address Table. */
        uint32_t dev_addr_table_depth  : 16; /**< [ 31: 16](RO) Depth of Device Address Table */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_device_addr_table_pointer_s cn; */
};
typedef union cavm_i3csmx_device_addr_table_pointer cavm_i3csmx_device_addr_table_pointer_t;

static inline uint64_t CAVM_I3CSMX_DEVICE_ADDR_TABLE_POINTER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEVICE_ADDR_TABLE_POINTER(uint64_t a)
{
    if (a<=1)
        return 0x87e0d400005cll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEVICE_ADDR_TABLE_POINTER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEVICE_ADDR_TABLE_POINTER(a) cavm_i3csmx_device_addr_table_pointer_t
#define bustype_CAVM_I3CSMX_DEVICE_ADDR_TABLE_POINTER(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEVICE_ADDR_TABLE_POINTER(a) "I3CSMX_DEVICE_ADDR_TABLE_POINTER"
#define device_bar_CAVM_I3CSMX_DEVICE_ADDR_TABLE_POINTER(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEVICE_ADDR_TABLE_POINTER(a) (a)
#define arguments_CAVM_I3CSMX_DEVICE_ADDR_TABLE_POINTER(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_device_ctrl
 *
 * I3CSM Device Ctrl Register
 * DWC_mipi_i3c control Register
 * This Register controls the transfer properties and disposition of controller's capabilities.
 */
union cavm_i3csmx_device_ctrl
{
    uint32_t u;
    struct cavm_i3csmx_device_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t enable                : 1;  /**< [ 31: 31](R/W) Controls whether or not DWC_mipi_i3c is enabled.
                                                                 1 = Enables the DWC_mipi_i3c controller.
                                                                 0 = Disables the DWC_mipi_i3c controller.

                                                                 In Master mode of operation, software can disable DWC_mipi_i3c while it is active.
                                                                 However, the controller may not get disabled immediately and is 'Disabled' after
                                                                 commands in the Command queue (if any) are executed leading to a STOP condition
                                                                 on the bus and Master FSM is in IDLE state (as indicated by PRESENT_STATE
                                                                 Register).
                                                                 In Slave mode of operation, software can disable DWC_mipi_i3c while it is
                                                                 active. However, the disable happens after the ongoing transfer is
                                                                 completed on the I3C bus. Software can read back 1'b0 from this field once
                                                                 disabling of DWC_mipi_i3c is completed.
                                                                 After power on reset, the software can enable I3C slave controller by
                                                                 programming this bit to 1'b1. However, the I3C bus interface of the controller,
                                                                 responds to transfer on the bus only after it observes Bus Available condition
                                                                 for BUS_AVAILABLE_TIME*IDLE_CNT_MULTPLIER counts of pclk period. The successful
                                                                 completion of Enable/Disable of the controller depends on availability of SCL to
                                                                 the controller at the time of performing this operation, and hence may not
                                                                 happen instantly. */
        uint32_t resume                : 1;  /**< [ 30: 30](R/W) DWC_mipi_i3c Resume

                                                                 This bit is used to resume the controller after it goes to the halt state.
                                                                 In the Master mode of operation, the controller goes to the halt state (as
                                                                 indicated in PRESENT_STATE Register) due to any type of error
                                                                 in the transfer (the type of error is indicated by ERR_STATUS field in the
                                                                 RESPONSE_QUEUE_PORT register).
                                                                 After the controller gones to the halt state, the application has to write 1'b1
                                                                 to this bit to resume the controller.
                                                                 This bit is auto-cleared once the controller resumes the transfers by initiating the next command.
                                                                 In the Slave mode of operation, the controller goes to the halt state due to following conditions:
                                                                  - Any type of error in the transfer (the type of error is indicated by
                                                                 ERR_STATUS field in the RESPONSE_QUEUE_PORT register)
                                                                  - MRL Register updated by the master through SETMRL CCC.
                                                                 After the controller goes to the halt state, the application has to take
                                                                 necessary action to handle the error condition and then write 1'b1
                                                                 to this bit to resume the controller.
                                                                 This bit is auto-cleared once the controller is ready to accept new transfers. */
        uint32_t abt                   : 1;  /**< [ 29: 29](R/W) DWC_mipi_i3c Abort

                                                                 This bit is used in Master mode of operation.
                                                                 This bit allows the controller to relinquish the DWC_mipi_i3c bus before
                                                                 completing the issued transfer.
                                                                 In response to an ABORT request, the controller issues the STOP condition after the complete
                                                                 data byte is transferred or received.
                                                                 This bit is auto-cleared once the transfer is aborted and the controller issues
                                                                 a 'Transfer Abort' interrupt. */
        uint32_t reserved_28           : 1;
        uint32_t adaptive_i2c_i3c      : 1;  /**< [ 27: 27](R/W) This field is used in Slave mode of operation.
                                                                 Note that when mode_i2c strap is driven to '0', the Slave controller operates in Adaptive Mode.
                                                                 Setting of this bit is NOT required to put the controller in Adaptive Mode.
                                                                 It is only used  to enable some features of the Slave controller to adapt to
                                                                 "Adaptive I2C/I3C mode"
                                                                 of operation. This bit is cleared automatically if the controller determines the mode as I3C.
                                                                 Effect on Hot-Join:
                                                                 If this bit is programmed to 1'b1, the controller initiates a
                                                                 Hot-Join request only after it has switched to I3C mode of operation.
                                                                 If this bit is not set, the controller initiates a Hot-Join
                                                                 without determining the bus mode assuming itself to be
                                                                 on DWC_mipi_i3c bus. This bit should be set only if the Slave application
                                                                 does not know to which bus the device is connected to. */
        uint32_t reserved_26           : 1;
        uint32_t idle_cnt_multplier    : 2;  /**< [ 25: 24](R/W) Idle Count Multiplier

                                                                 This bit is used in Slave mode of operation.

                                                                 After power-on reset, the Slave controller is enabled only after it sees both
                                                                 SDA and SCL lines idle for a specified time.
                                                                 This idle time is calculated by multipliying IDLE_CNT_MULITPLIER with
                                                                 BUS_AVAILABLE_TIME field in the BUS_FREE_AVAIL_TIMING register.
                                                                 0x0 = BUS_AVAILABLE_TIME * 1.
                                                                 0x1 = BUS_AVAILABLE_TIME * 2.
                                                                 0x2 = BUS_AVAILABLE_TIME * 4.
                                                                 0x3 = BUS_AVAILABLE_TIME * 8. */
        uint32_t reserved_9_23         : 15;
        uint32_t hot_join_ctrl         : 1;  /**< [  8:  8](R/W) Hot-Join ACK/NACK Control
                                                                 This bit is used in master mode of operation.
                                                                 This bit acts as a global control to ACK/NACK the Hot-Join request from the
                                                                 devices. The DWC_mipi_i3c Master
                                                                  ACK/NACKs the Hot-Join request from other devices connected on the DWC_mipi_i3c
                                                                 bus, based on programming of this bit.
                                                                 0 = ACK the Hot-join request.
                                                                 1 = NACK and send broadcast CCC to disable Hot-Join. */
        uint32_t i2c_slave_present     : 1;  /**< [  7:  7](R/W) I2C Slave Present
                                                                 This bit is used in master mode of operation.
                                                                 This bit indicates whether any Legacy I2C devices are present in the system.
                                                                 In HDR mode, this field is used to select TSL over TSP in a mixed bus configuration. */
        uint32_t reserved_1_6          : 6;
        uint32_t iba_include           : 1;  /**< [  0:  0](R/W) I3C Broadcast Address include
                                                                 This bit is used in Master mode of operation.
                                                                 This bit is used to include DWC_mipi_i3c broadcast address (0x7E) for private transfer.
                                                                 Note: If DWC_mipi_i3c broadcast address is not included for the private
                                                                 transfers, In-band Interrupts (IBI)
                                                                 driven from Slaves might not win address arbitration. Hence, the IBIs get delayed. */
#else /* Word 0 - Little Endian */
        uint32_t iba_include           : 1;  /**< [  0:  0](R/W) I3C Broadcast Address include
                                                                 This bit is used in Master mode of operation.
                                                                 This bit is used to include DWC_mipi_i3c broadcast address (0x7E) for private transfer.
                                                                 Note: If DWC_mipi_i3c broadcast address is not included for the private
                                                                 transfers, In-band Interrupts (IBI)
                                                                 driven from Slaves might not win address arbitration. Hence, the IBIs get delayed. */
        uint32_t reserved_1_6          : 6;
        uint32_t i2c_slave_present     : 1;  /**< [  7:  7](R/W) I2C Slave Present
                                                                 This bit is used in master mode of operation.
                                                                 This bit indicates whether any Legacy I2C devices are present in the system.
                                                                 In HDR mode, this field is used to select TSL over TSP in a mixed bus configuration. */
        uint32_t hot_join_ctrl         : 1;  /**< [  8:  8](R/W) Hot-Join ACK/NACK Control
                                                                 This bit is used in master mode of operation.
                                                                 This bit acts as a global control to ACK/NACK the Hot-Join request from the
                                                                 devices. The DWC_mipi_i3c Master
                                                                  ACK/NACKs the Hot-Join request from other devices connected on the DWC_mipi_i3c
                                                                 bus, based on programming of this bit.
                                                                 0 = ACK the Hot-join request.
                                                                 1 = NACK and send broadcast CCC to disable Hot-Join. */
        uint32_t reserved_9_23         : 15;
        uint32_t idle_cnt_multplier    : 2;  /**< [ 25: 24](R/W) Idle Count Multiplier

                                                                 This bit is used in Slave mode of operation.

                                                                 After power-on reset, the Slave controller is enabled only after it sees both
                                                                 SDA and SCL lines idle for a specified time.
                                                                 This idle time is calculated by multipliying IDLE_CNT_MULITPLIER with
                                                                 BUS_AVAILABLE_TIME field in the BUS_FREE_AVAIL_TIMING register.
                                                                 0x0 = BUS_AVAILABLE_TIME * 1.
                                                                 0x1 = BUS_AVAILABLE_TIME * 2.
                                                                 0x2 = BUS_AVAILABLE_TIME * 4.
                                                                 0x3 = BUS_AVAILABLE_TIME * 8. */
        uint32_t reserved_26           : 1;
        uint32_t adaptive_i2c_i3c      : 1;  /**< [ 27: 27](R/W) This field is used in Slave mode of operation.
                                                                 Note that when mode_i2c strap is driven to '0', the Slave controller operates in Adaptive Mode.
                                                                 Setting of this bit is NOT required to put the controller in Adaptive Mode.
                                                                 It is only used  to enable some features of the Slave controller to adapt to
                                                                 "Adaptive I2C/I3C mode"
                                                                 of operation. This bit is cleared automatically if the controller determines the mode as I3C.
                                                                 Effect on Hot-Join:
                                                                 If this bit is programmed to 1'b1, the controller initiates a
                                                                 Hot-Join request only after it has switched to I3C mode of operation.
                                                                 If this bit is not set, the controller initiates a Hot-Join
                                                                 without determining the bus mode assuming itself to be
                                                                 on DWC_mipi_i3c bus. This bit should be set only if the Slave application
                                                                 does not know to which bus the device is connected to. */
        uint32_t reserved_28           : 1;
        uint32_t abt                   : 1;  /**< [ 29: 29](R/W) DWC_mipi_i3c Abort

                                                                 This bit is used in Master mode of operation.
                                                                 This bit allows the controller to relinquish the DWC_mipi_i3c bus before
                                                                 completing the issued transfer.
                                                                 In response to an ABORT request, the controller issues the STOP condition after the complete
                                                                 data byte is transferred or received.
                                                                 This bit is auto-cleared once the transfer is aborted and the controller issues
                                                                 a 'Transfer Abort' interrupt. */
        uint32_t resume                : 1;  /**< [ 30: 30](R/W) DWC_mipi_i3c Resume

                                                                 This bit is used to resume the controller after it goes to the halt state.
                                                                 In the Master mode of operation, the controller goes to the halt state (as
                                                                 indicated in PRESENT_STATE Register) due to any type of error
                                                                 in the transfer (the type of error is indicated by ERR_STATUS field in the
                                                                 RESPONSE_QUEUE_PORT register).
                                                                 After the controller gones to the halt state, the application has to write 1'b1
                                                                 to this bit to resume the controller.
                                                                 This bit is auto-cleared once the controller resumes the transfers by initiating the next command.
                                                                 In the Slave mode of operation, the controller goes to the halt state due to following conditions:
                                                                  - Any type of error in the transfer (the type of error is indicated by
                                                                 ERR_STATUS field in the RESPONSE_QUEUE_PORT register)
                                                                  - MRL Register updated by the master through SETMRL CCC.
                                                                 After the controller goes to the halt state, the application has to take
                                                                 necessary action to handle the error condition and then write 1'b1
                                                                 to this bit to resume the controller.
                                                                 This bit is auto-cleared once the controller is ready to accept new transfers. */
        uint32_t enable                : 1;  /**< [ 31: 31](R/W) Controls whether or not DWC_mipi_i3c is enabled.
                                                                 1 = Enables the DWC_mipi_i3c controller.
                                                                 0 = Disables the DWC_mipi_i3c controller.

                                                                 In Master mode of operation, software can disable DWC_mipi_i3c while it is active.
                                                                 However, the controller may not get disabled immediately and is 'Disabled' after
                                                                 commands in the Command queue (if any) are executed leading to a STOP condition
                                                                 on the bus and Master FSM is in IDLE state (as indicated by PRESENT_STATE
                                                                 Register).
                                                                 In Slave mode of operation, software can disable DWC_mipi_i3c while it is
                                                                 active. However, the disable happens after the ongoing transfer is
                                                                 completed on the I3C bus. Software can read back 1'b0 from this field once
                                                                 disabling of DWC_mipi_i3c is completed.
                                                                 After power on reset, the software can enable I3C slave controller by
                                                                 programming this bit to 1'b1. However, the I3C bus interface of the controller,
                                                                 responds to transfer on the bus only after it observes Bus Available condition
                                                                 for BUS_AVAILABLE_TIME*IDLE_CNT_MULTPLIER counts of pclk period. The successful
                                                                 completion of Enable/Disable of the controller depends on availability of SCL to
                                                                 the controller at the time of performing this operation, and hence may not
                                                                 happen instantly. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_device_ctrl_s cn; */
};
typedef union cavm_i3csmx_device_ctrl cavm_i3csmx_device_ctrl_t;

static inline uint64_t CAVM_I3CSMX_DEVICE_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEVICE_CTRL(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000000ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEVICE_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEVICE_CTRL(a) cavm_i3csmx_device_ctrl_t
#define bustype_CAVM_I3CSMX_DEVICE_CTRL(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEVICE_CTRL(a) "I3CSMX_DEVICE_CTRL"
#define device_bar_CAVM_I3CSMX_DEVICE_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEVICE_CTRL(a) (a)
#define arguments_CAVM_I3CSMX_DEVICE_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_device_ctrl_extended
 *
 * I3CSM Device Ctrl Extended Register
 * Device Control Extended register.
 *
 * This register is relevant to both Master and Slave modes of operation and hosts
 * functions related to Slaves disposition to incoming GETACCMST CCC from current
 * master. It also allows for the Device Role to be fixed through Software programming
 * in some configurations.
 */
union cavm_i3csmx_device_ctrl_extended
{
    uint32_t u;
    struct cavm_i3csmx_device_ctrl_extended_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t reqmst_ack_ctrl       : 1;  /**< [  3:  3](R/W) In Slave mode of operation, this bit serves as a control to ACK/NACK GETACCMST
                                                                 CCC from current master.
                                                                 0 = ACK GETACCMST CCC.
                                                                 1 = NACK GETACCMST CCC. */
        uint32_t reserved_2            : 1;
        uint32_t dev_operation_mode    : 2;  /**< [  1:  0](R/W) This bit is used to select the Device Operation Mode before the controller is enabled.
                                                                 This field is written only when the DWC_mipi_i3c is disabled.
                                                                 0x0 = Master.
                                                                 0x1 = Slave.
                                                                 0x2 = Reserved.
                                                                 0x3 = Reserved.
                                                                 This field is automatically updated by the controller once the role change
                                                                 happens in secondary master mode.. */
#else /* Word 0 - Little Endian */
        uint32_t dev_operation_mode    : 2;  /**< [  1:  0](R/W) This bit is used to select the Device Operation Mode before the controller is enabled.
                                                                 This field is written only when the DWC_mipi_i3c is disabled.
                                                                 0x0 = Master.
                                                                 0x1 = Slave.
                                                                 0x2 = Reserved.
                                                                 0x3 = Reserved.
                                                                 This field is automatically updated by the controller once the role change
                                                                 happens in secondary master mode.. */
        uint32_t reserved_2            : 1;
        uint32_t reqmst_ack_ctrl       : 1;  /**< [  3:  3](R/W) In Slave mode of operation, this bit serves as a control to ACK/NACK GETACCMST
                                                                 CCC from current master.
                                                                 0 = ACK GETACCMST CCC.
                                                                 1 = NACK GETACCMST CCC. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_device_ctrl_extended_s cn; */
};
typedef union cavm_i3csmx_device_ctrl_extended cavm_i3csmx_device_ctrl_extended_t;

static inline uint64_t CAVM_I3CSMX_DEVICE_CTRL_EXTENDED(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_DEVICE_CTRL_EXTENDED(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40000b0ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_DEVICE_CTRL_EXTENDED", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_DEVICE_CTRL_EXTENDED(a) cavm_i3csmx_device_ctrl_extended_t
#define bustype_CAVM_I3CSMX_DEVICE_CTRL_EXTENDED(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_DEVICE_CTRL_EXTENDED(a) "I3CSMX_DEVICE_CTRL_EXTENDED"
#define device_bar_CAVM_I3CSMX_DEVICE_CTRL_EXTENDED(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_DEVICE_CTRL_EXTENDED(a) (a)
#define arguments_CAVM_I3CSMX_DEVICE_CTRL_EXTENDED(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_hw_capability
 *
 * I3CSM Hw Capability Register
 * Hardware Capability register
 * This register reflects the configured capabilities of DWC_mipi_i3c.
 */
union cavm_i3csmx_hw_capability
{
    uint32_t u;
    struct cavm_i3csmx_hw_capability_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_20_31        : 12;
        uint32_t slv_ibi_cap           : 1;  /**< [ 19: 19](RO) Reflects the IC_SLV_IBI Configurable Parameter.
                                                                 Specifies slave's capability to initiate slave interrupt requests. */
        uint32_t slv_hj_cap            : 1;  /**< [ 18: 18](RO) Reflects the IC_SLV_HJ Configurable Parameter.
                                                                 Specifies slave's capability to initiate Hot-join request. */
        uint32_t dma_en                : 1;  /**< [ 17: 17](RO) Reflects the IC_HAS_DMA Configurable Parameter.
                                                                 Specifies whether controller is configured to have DMA handshaking interface. */
        uint32_t hdr_tx_clock_period   : 6;  /**< [ 16: 11](RO) Reflects the IC_HDR_TX_CLK_PERIOD Configurable Parameter. */
        uint32_t clock_period          : 6;  /**< [ 10:  5](RO) Reflects the IC_CLK_PERIOD Configurable Parameter */
        uint32_t hdr_ts_en             : 1;  /**< [  4:  4](RO) Reflects the IC_SPEED_HDR_TS Configurable Parameter.
                                                                 Specifies the Controllers  capability to perform HDR-TS transfers.
                                                                 0 = HDR-TS not supported.
                                                                 1 = HDR-TS supported. */
        uint32_t hdr_ddr_en            : 1;  /**< [  3:  3](RO) Reflects the IC_SPEED_HDR_DDR Configurable Parameter.
                                                                 Specifies the Controllers capability to perform HDR-DDR transfers.
                                                                 0 = HDR-DDR not supported.
                                                                 1 = HDR-DDR supported. */
        uint32_t device_role_config    : 3;  /**< [  2:  0](RO) Reflects the IC_DEVICE_ROLE Configurable Parameter.
                                                                 Specifies the configured role of DWC_mipi_i3c controller
                                                                 0x1 = Master Only.
                                                                 0x2 = Programmable Master-Slave.
                                                                 0x3 = Secondary Master.
                                                                 0x4 = Slave Only. */
#else /* Word 0 - Little Endian */
        uint32_t device_role_config    : 3;  /**< [  2:  0](RO) Reflects the IC_DEVICE_ROLE Configurable Parameter.
                                                                 Specifies the configured role of DWC_mipi_i3c controller
                                                                 0x1 = Master Only.
                                                                 0x2 = Programmable Master-Slave.
                                                                 0x3 = Secondary Master.
                                                                 0x4 = Slave Only. */
        uint32_t hdr_ddr_en            : 1;  /**< [  3:  3](RO) Reflects the IC_SPEED_HDR_DDR Configurable Parameter.
                                                                 Specifies the Controllers capability to perform HDR-DDR transfers.
                                                                 0 = HDR-DDR not supported.
                                                                 1 = HDR-DDR supported. */
        uint32_t hdr_ts_en             : 1;  /**< [  4:  4](RO) Reflects the IC_SPEED_HDR_TS Configurable Parameter.
                                                                 Specifies the Controllers  capability to perform HDR-TS transfers.
                                                                 0 = HDR-TS not supported.
                                                                 1 = HDR-TS supported. */
        uint32_t clock_period          : 6;  /**< [ 10:  5](RO) Reflects the IC_CLK_PERIOD Configurable Parameter */
        uint32_t hdr_tx_clock_period   : 6;  /**< [ 16: 11](RO) Reflects the IC_HDR_TX_CLK_PERIOD Configurable Parameter. */
        uint32_t dma_en                : 1;  /**< [ 17: 17](RO) Reflects the IC_HAS_DMA Configurable Parameter.
                                                                 Specifies whether controller is configured to have DMA handshaking interface. */
        uint32_t slv_hj_cap            : 1;  /**< [ 18: 18](RO) Reflects the IC_SLV_HJ Configurable Parameter.
                                                                 Specifies slave's capability to initiate Hot-join request. */
        uint32_t slv_ibi_cap           : 1;  /**< [ 19: 19](RO) Reflects the IC_SLV_IBI Configurable Parameter.
                                                                 Specifies slave's capability to initiate slave interrupt requests. */
        uint32_t reserved_20_31        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_hw_capability_s cn; */
};
typedef union cavm_i3csmx_hw_capability cavm_i3csmx_hw_capability_t;

static inline uint64_t CAVM_I3CSMX_HW_CAPABILITY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_HW_CAPABILITY(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000008ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_HW_CAPABILITY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_HW_CAPABILITY(a) cavm_i3csmx_hw_capability_t
#define bustype_CAVM_I3CSMX_HW_CAPABILITY(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_HW_CAPABILITY(a) "I3CSMX_HW_CAPABILITY"
#define device_bar_CAVM_I3CSMX_HW_CAPABILITY(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_HW_CAPABILITY(a) (a)
#define arguments_CAVM_I3CSMX_HW_CAPABILITY(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_i3c_ver_id
 *
 * I3CSM I3c Ver Id Register
 * This register reflects the current release number of DWC_mipi_i3c
 */
union cavm_i3csmx_i3c_ver_id
{
    uint32_t u;
    struct cavm_i3csmx_i3c_ver_id_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t i3c_ver_id            : 32; /**< [ 31:  0](RO) Current release number

                                                                 This field indicates the DWC_mipi_i3c current release
                                                                 number that is read by an application.
                                                                 For example, release number "1.00a" is represented in ASCII as 0x313030. Lower 8
                                                                 bits read from this register can be
                                                                 ignored by the application. An application reading this register along with the
                                                                 I3C_VER_TYPE register, gathers
                                                                 details of the current release. */
#else /* Word 0 - Little Endian */
        uint32_t i3c_ver_id            : 32; /**< [ 31:  0](RO) Current release number

                                                                 This field indicates the DWC_mipi_i3c current release
                                                                 number that is read by an application.
                                                                 For example, release number "1.00a" is represented in ASCII as 0x313030. Lower 8
                                                                 bits read from this register can be
                                                                 ignored by the application. An application reading this register along with the
                                                                 I3C_VER_TYPE register, gathers
                                                                 details of the current release. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_i3c_ver_id_s cn; */
};
typedef union cavm_i3csmx_i3c_ver_id cavm_i3csmx_i3c_ver_id_t;

static inline uint64_t CAVM_I3CSMX_I3C_VER_ID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_I3C_VER_ID(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40000e0ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_I3C_VER_ID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_I3C_VER_ID(a) cavm_i3csmx_i3c_ver_id_t
#define bustype_CAVM_I3CSMX_I3C_VER_ID(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_I3C_VER_ID(a) "I3CSMX_I3C_VER_ID"
#define device_bar_CAVM_I3CSMX_I3C_VER_ID(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_I3C_VER_ID(a) (a)
#define arguments_CAVM_I3CSMX_I3C_VER_ID(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_i3c_ver_type
 *
 * I3CSM I3c Ver Type Register
 * This register reflects the current release type of DWC_mipi_i3c.
 */
union cavm_i3csmx_i3c_ver_type
{
    uint32_t u;
    struct cavm_i3csmx_i3c_ver_type_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t i3c_ver_type          : 32; /**< [ 31:  0](RO) Current release type

                                                                 This field indicates the DWC_mipi_i3c current release
                                                                 type that is read by an application.
                                                                 For example, release type "ga" is represented in ASCII as 0x6761 and "ea" is
                                                                 represented as 0x6561. Lower 16 bits
                                                                 read from this register can be ignored by the application if release type is
                                                                 "ga". If release type is "ea" the lower
                                                                 16 bits represents the "ea" release version.
                                                                 An application reading this register along with the I3C_VER_ID
                                                                 register, gathers details of the current release. */
#else /* Word 0 - Little Endian */
        uint32_t i3c_ver_type          : 32; /**< [ 31:  0](RO) Current release type

                                                                 This field indicates the DWC_mipi_i3c current release
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
    /* struct cavm_i3csmx_i3c_ver_type_s cn; */
};
typedef union cavm_i3csmx_i3c_ver_type cavm_i3csmx_i3c_ver_type_t;

static inline uint64_t CAVM_I3CSMX_I3C_VER_TYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_I3C_VER_TYPE(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40000e4ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_I3C_VER_TYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_I3C_VER_TYPE(a) cavm_i3csmx_i3c_ver_type_t
#define bustype_CAVM_I3CSMX_I3C_VER_TYPE(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_I3C_VER_TYPE(a) "I3CSMX_I3C_VER_TYPE"
#define device_bar_CAVM_I3CSMX_I3C_VER_TYPE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_I3C_VER_TYPE(a) (a)
#define arguments_CAVM_I3CSMX_I3C_VER_TYPE(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_ibi_queue_ctrl
 *
 * I3CSM Ibi Queue Ctrl Register
 * This Register is used to control whether or not to intimate the application if an
 * IBI request is rejected (Nacked).
 * This register is only used in master mode of operation
 */
union cavm_i3csmx_ibi_queue_ctrl
{
    uint32_t u;
    struct cavm_i3csmx_ibi_queue_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_4_31         : 28;
        uint32_t notify_sir_rejected   : 1;  /**< [  3:  3](R/W) Notify Rejected Slave Interrupt Request Control.
                                                                 This bit is used to suppress reporting to the application about SIR request rejected.
                                                                 0 = Suppress passing the IBI Status to the IBI FIFO (hence not notifying the
                                                                 application) when a Slave Interrupt Request is NACKed and auto-disabled based on
                                                                 the IBI_SIR_REQ_REJECT Register.
                                                                 1 =  Writes IBI Status to the IBI FIFO (hence notifying the application) when
                                                                 a Slave Interrupt Request is NACKed and auto-disabled based on the
                                                                 IBI_SIR_REQ_REJECT Register. */
        uint32_t reserved_2            : 1;
        uint32_t notify_mr_rejected    : 1;  /**< [  1:  1](R/W) Notify Rejected Master Request Control.
                                                                 This bit is used to suppress reporting to the application about Master request rejected.
                                                                 0 = Suppress passing the IBI Status to the IBI FIFO (hence not notifying the
                                                                 application) when a MR Request is NACKed and auto-disabled based on the
                                                                 IBI_MR_REQ_REJECT Register.
                                                                 1 =  Writes IBI Status to the IBI FIFO (hence notifying the application) when
                                                                 a MR Request is NACKed and auto-disabled based on the IBI_MR_REQ_REJECT
                                                                 Register. */
        uint32_t notify_hj_rejected    : 1;  /**< [  0:  0](R/W) Notify Rejected Hot-Join Control.

                                                                 This bit is used to suppress reporting to the application about Hot-Join request
                                                                 rejected (NACK and Auto Disable).
                                                                 0 = Suppress passing the IBI Status to the IBI FIFO (hence not notifying the
                                                                 application) when a HJ Request is NACKed and auto-disabled based on the
                                                                 DEVICE_CTRL.HOT_JOIN_CTRL.
                                                                 1 =  Writes IBI Status to the IBI FIFO (hence notifying the application) when
                                                                 a HJ Request is NACKed and auto-disabled based on the DEVICE_CTRL.HOT_JOIN_CTRL. */
#else /* Word 0 - Little Endian */
        uint32_t notify_hj_rejected    : 1;  /**< [  0:  0](R/W) Notify Rejected Hot-Join Control.

                                                                 This bit is used to suppress reporting to the application about Hot-Join request
                                                                 rejected (NACK and Auto Disable).
                                                                 0 = Suppress passing the IBI Status to the IBI FIFO (hence not notifying the
                                                                 application) when a HJ Request is NACKed and auto-disabled based on the
                                                                 DEVICE_CTRL.HOT_JOIN_CTRL.
                                                                 1 =  Writes IBI Status to the IBI FIFO (hence notifying the application) when
                                                                 a HJ Request is NACKed and auto-disabled based on the DEVICE_CTRL.HOT_JOIN_CTRL. */
        uint32_t notify_mr_rejected    : 1;  /**< [  1:  1](R/W) Notify Rejected Master Request Control.
                                                                 This bit is used to suppress reporting to the application about Master request rejected.
                                                                 0 = Suppress passing the IBI Status to the IBI FIFO (hence not notifying the
                                                                 application) when a MR Request is NACKed and auto-disabled based on the
                                                                 IBI_MR_REQ_REJECT Register.
                                                                 1 =  Writes IBI Status to the IBI FIFO (hence notifying the application) when
                                                                 a MR Request is NACKed and auto-disabled based on the IBI_MR_REQ_REJECT
                                                                 Register. */
        uint32_t reserved_2            : 1;
        uint32_t notify_sir_rejected   : 1;  /**< [  3:  3](R/W) Notify Rejected Slave Interrupt Request Control.
                                                                 This bit is used to suppress reporting to the application about SIR request rejected.
                                                                 0 = Suppress passing the IBI Status to the IBI FIFO (hence not notifying the
                                                                 application) when a Slave Interrupt Request is NACKed and auto-disabled based on
                                                                 the IBI_SIR_REQ_REJECT Register.
                                                                 1 =  Writes IBI Status to the IBI FIFO (hence notifying the application) when
                                                                 a Slave Interrupt Request is NACKed and auto-disabled based on the
                                                                 IBI_SIR_REQ_REJECT Register. */
        uint32_t reserved_4_31         : 28;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_ibi_queue_ctrl_s cn; */
};
typedef union cavm_i3csmx_ibi_queue_ctrl cavm_i3csmx_ibi_queue_ctrl_t;

static inline uint64_t CAVM_I3CSMX_IBI_QUEUE_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_IBI_QUEUE_CTRL(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000024ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_IBI_QUEUE_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_IBI_QUEUE_CTRL(a) cavm_i3csmx_ibi_queue_ctrl_t
#define bustype_CAVM_I3CSMX_IBI_QUEUE_CTRL(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_IBI_QUEUE_CTRL(a) "I3CSMX_IBI_QUEUE_CTRL"
#define device_bar_CAVM_I3CSMX_IBI_QUEUE_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_IBI_QUEUE_CTRL(a) (a)
#define arguments_CAVM_I3CSMX_IBI_QUEUE_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_ibi_queue_status
 *
 * I3CSM Ibi Queue Status Register
 * In-Band Interrupt Queue Status Register
 * This register is used in master mode of operation. It is expected that this register
 * is read whenever INTR_STATUS.IBI_THLD_STS is set.
 * This register when read from, returns the data from the IBI Queue and indicates how
 * the controller responded to incoming IBI (SIR,MR and HJ).
 */
union cavm_i3csmx_ibi_queue_status
{
    uint32_t u;
    struct cavm_i3csmx_ibi_queue_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ibi_sts               : 4;  /**< [ 31: 28](RO) IBI Received Status.
                                                                 Defines the master response for IBI received.
                                                                 4'b0xxx = Responded with ACK.
                                                                 4'b1xxx = Responded with NACK.
                                                                 Others  = RESERVED. */
        uint32_t reserved_16_27        : 12;
        uint32_t ibi_id                : 8;  /**< [ 15:  8](RO) IBI Identifier.
                                                                 The byte received after START which includes the address and the R/W bit.
                                                                  - Device address and R/W bit in case of Slave Interrupt or Master Request.
                                                                  - Hot-Join ID and R/W bit in case of Hot-Join IBI. */
        uint32_t data_length           : 8;  /**< [  7:  0](RO) In-Band Interrupt data length.
                                                                 This field represents the length of data received along with the IBI, in bytes. */
#else /* Word 0 - Little Endian */
        uint32_t data_length           : 8;  /**< [  7:  0](RO) In-Band Interrupt data length.
                                                                 This field represents the length of data received along with the IBI, in bytes. */
        uint32_t ibi_id                : 8;  /**< [ 15:  8](RO) IBI Identifier.
                                                                 The byte received after START which includes the address and the R/W bit.
                                                                  - Device address and R/W bit in case of Slave Interrupt or Master Request.
                                                                  - Hot-Join ID and R/W bit in case of Hot-Join IBI. */
        uint32_t reserved_16_27        : 12;
        uint32_t ibi_sts               : 4;  /**< [ 31: 28](RO) IBI Received Status.
                                                                 Defines the master response for IBI received.
                                                                 4'b0xxx = Responded with ACK.
                                                                 4'b1xxx = Responded with NACK.
                                                                 Others  = RESERVED. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_ibi_queue_status_s cn; */
};
typedef union cavm_i3csmx_ibi_queue_status cavm_i3csmx_ibi_queue_status_t;

static inline uint64_t CAVM_I3CSMX_IBI_QUEUE_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_IBI_QUEUE_STATUS(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000018ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_IBI_QUEUE_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_IBI_QUEUE_STATUS(a) cavm_i3csmx_ibi_queue_status_t
#define bustype_CAVM_I3CSMX_IBI_QUEUE_STATUS(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_IBI_QUEUE_STATUS(a) "I3CSMX_IBI_QUEUE_STATUS"
#define device_bar_CAVM_I3CSMX_IBI_QUEUE_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_IBI_QUEUE_STATUS(a) (a)
#define arguments_CAVM_I3CSMX_IBI_QUEUE_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_intf_ctrl1
 *
 * I3CSM_INTF_CTRL1 Register
 * This register contains certain programmable inputs for mipi i3c core .Only for
 * target mode of operation
 */
union cavm_i3csmx_intf_ctrl1
{
    uint32_t u;
    struct cavm_i3csmx_intf_ctrl1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t mode_i2c              : 1;  /**< [ 31: 31](R/W) mode_i2c control. */
        uint32_t act_mode              : 2;  /**< [ 30: 29](R/W) act_mode control. */
        uint32_t static_addr_en        : 1;  /**< [ 28: 28](R/W) static_addr_en control */
        uint32_t static_addr           : 7;  /**< [ 27: 21](R/W) static_addr control */
        uint32_t slv_max_rd_speed      : 3;  /**< [ 20: 18](R/W) slv_max_rd_speed control */
        uint32_t slv_max_wr_speed      : 3;  /**< [ 17: 15](R/W) slv_max_wr_speed control */
        uint32_t slv_dcr               : 8;  /**< [ 14:  7](R/W) slv_dcr control */
        uint32_t slv_clk_data_turn_time : 3; /**< [  6:  4](R/W) slv_clk_data_turn_time control */
        uint32_t reserved_0_3          : 4;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_3          : 4;
        uint32_t slv_clk_data_turn_time : 3; /**< [  6:  4](R/W) slv_clk_data_turn_time control */
        uint32_t slv_dcr               : 8;  /**< [ 14:  7](R/W) slv_dcr control */
        uint32_t slv_max_wr_speed      : 3;  /**< [ 17: 15](R/W) slv_max_wr_speed control */
        uint32_t slv_max_rd_speed      : 3;  /**< [ 20: 18](R/W) slv_max_rd_speed control */
        uint32_t static_addr           : 7;  /**< [ 27: 21](R/W) static_addr control */
        uint32_t static_addr_en        : 1;  /**< [ 28: 28](R/W) static_addr_en control */
        uint32_t act_mode              : 2;  /**< [ 30: 29](R/W) act_mode control. */
        uint32_t mode_i2c              : 1;  /**< [ 31: 31](R/W) mode_i2c control. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_intf_ctrl1_s cn; */
};
typedef union cavm_i3csmx_intf_ctrl1 cavm_i3csmx_intf_ctrl1_t;

static inline uint64_t CAVM_I3CSMX_INTF_CTRL1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_INTF_CTRL1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000440ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_INTF_CTRL1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_INTF_CTRL1(a) cavm_i3csmx_intf_ctrl1_t
#define bustype_CAVM_I3CSMX_INTF_CTRL1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_INTF_CTRL1(a) "I3CSMX_INTF_CTRL1"
#define device_bar_CAVM_I3CSMX_INTF_CTRL1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_INTF_CTRL1(a) (a)
#define arguments_CAVM_I3CSMX_INTF_CTRL1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_intf_ctrl2
 *
 * I3CSM_INTF_CTRL2 Register
 * This register contains certain programmable inputs for mipi i3c core .Only for
 * target mode of operation
 */
union cavm_i3csmx_intf_ctrl2
{
    uint32_t u;
    struct cavm_i3csmx_intf_ctrl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t pending_int_soft      : 4;  /**< [ 31: 28](R/W) Software computed pending interrupt.The software will compute the pending int
                                                                 and will update this field.The pending_int port ofI3CSM core gets driven by this
                                                                 value. This value will be used by CCC_DEVICE_STATUS register to respond to
                                                                 GETSTATUS CC by the Master. */
        uint32_t pending_int_soft_en   : 1;  /**< [ 27: 27](R/W) Software computed pending interrupt enable. When set the soft ware computed
                                                                 pending interrupt will be connected to the IP.This bit is not used in hardware
                                                                 due to the updated functionality of the pending interrupt. */
        uint32_t int_lvl_edge_ctrl     : 1;  /**< [ 26: 26](R/W) Reserved. */
        uint32_t reserved_0_25         : 26;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_25         : 26;
        uint32_t int_lvl_edge_ctrl     : 1;  /**< [ 26: 26](R/W) Reserved. */
        uint32_t pending_int_soft_en   : 1;  /**< [ 27: 27](R/W) Software computed pending interrupt enable. When set the soft ware computed
                                                                 pending interrupt will be connected to the IP.This bit is not used in hardware
                                                                 due to the updated functionality of the pending interrupt. */
        uint32_t pending_int_soft      : 4;  /**< [ 31: 28](R/W) Software computed pending interrupt.The software will compute the pending int
                                                                 and will update this field.The pending_int port ofI3CSM core gets driven by this
                                                                 value. This value will be used by CCC_DEVICE_STATUS register to respond to
                                                                 GETSTATUS CC by the Master. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_intf_ctrl2_s cn; */
};
typedef union cavm_i3csmx_intf_ctrl2 cavm_i3csmx_intf_ctrl2_t;

static inline uint64_t CAVM_I3CSMX_INTF_CTRL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_INTF_CTRL2(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000444ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_INTF_CTRL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_INTF_CTRL2(a) cavm_i3csmx_intf_ctrl2_t
#define bustype_CAVM_I3CSMX_INTF_CTRL2(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_INTF_CTRL2(a) "I3CSMX_INTF_CTRL2"
#define device_bar_CAVM_I3CSMX_INTF_CTRL2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_INTF_CTRL2(a) (a)
#define arguments_CAVM_I3CSMX_INTF_CTRL2(a) (a),-1,-1,-1

/**
 * Register (RSL) i3csm#_intr
 *
 * I3CSM PF Interrupt Register
 * This register contains the different interrupt summary bits of the I3C.
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 * This register is reset on cold reset.
 */
union cavm_i3csmx_intr
{
    uint64_t u;
    struct cavm_i3csmx_intr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t i3csm_intr_out        : 1;  /**< [  0:  0](R/W1C/H) I3CSM interrupt output. */
#else /* Word 0 - Little Endian */
        uint64_t i3csm_intr_out        : 1;  /**< [  0:  0](R/W1C/H) I3CSM interrupt output. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_intr_s cn; */
};
typedef union cavm_i3csmx_intr cavm_i3csmx_intr_t;

static inline uint64_t CAVM_I3CSMX_INTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_INTR(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000420ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_INTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_INTR(a) cavm_i3csmx_intr_t
#define bustype_CAVM_I3CSMX_INTR(a) CSR_TYPE_RSL
#define basename_CAVM_I3CSMX_INTR(a) "I3CSMX_INTR"
#define device_bar_CAVM_I3CSMX_INTR(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_INTR(a) (a)
#define arguments_CAVM_I3CSMX_INTR(a) (a),-1,-1,-1

/**
 * Register (RSL) i3csm#_intr_ena_w1c
 *
 * I3CSM PF Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_i3csmx_intr_ena_w1c
{
    uint64_t u;
    struct cavm_i3csmx_intr_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t i3csm_intr_out        : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for I3CSM(0..1)_INTR[I3CSM_INTR_OUT]. */
#else /* Word 0 - Little Endian */
        uint64_t i3csm_intr_out        : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for I3CSM(0..1)_INTR[I3CSM_INTR_OUT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_intr_ena_w1c_s cn; */
};
typedef union cavm_i3csmx_intr_ena_w1c cavm_i3csmx_intr_ena_w1c_t;

static inline uint64_t CAVM_I3CSMX_INTR_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_INTR_ENA_W1C(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000430ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_INTR_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_INTR_ENA_W1C(a) cavm_i3csmx_intr_ena_w1c_t
#define bustype_CAVM_I3CSMX_INTR_ENA_W1C(a) CSR_TYPE_RSL
#define basename_CAVM_I3CSMX_INTR_ENA_W1C(a) "I3CSMX_INTR_ENA_W1C"
#define device_bar_CAVM_I3CSMX_INTR_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_INTR_ENA_W1C(a) (a)
#define arguments_CAVM_I3CSMX_INTR_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RSL) i3csm#_intr_ena_w1s
 *
 * I3CSM PF Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_i3csmx_intr_ena_w1s
{
    uint64_t u;
    struct cavm_i3csmx_intr_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t i3csm_intr_out        : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for I3CSM(0..1)_INTR[I3CSM_INTR_OUT]. */
#else /* Word 0 - Little Endian */
        uint64_t i3csm_intr_out        : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for I3CSM(0..1)_INTR[I3CSM_INTR_OUT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_intr_ena_w1s_s cn; */
};
typedef union cavm_i3csmx_intr_ena_w1s cavm_i3csmx_intr_ena_w1s_t;

static inline uint64_t CAVM_I3CSMX_INTR_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_INTR_ENA_W1S(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000438ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_INTR_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_INTR_ENA_W1S(a) cavm_i3csmx_intr_ena_w1s_t
#define bustype_CAVM_I3CSMX_INTR_ENA_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_I3CSMX_INTR_ENA_W1S(a) "I3CSMX_INTR_ENA_W1S"
#define device_bar_CAVM_I3CSMX_INTR_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_INTR_ENA_W1S(a) (a)
#define arguments_CAVM_I3CSMX_INTR_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_intr_force
 *
 * I3CSM Intr Force Register
 * Interrupt Force Enable Register
 *
 * Individual interrupts can be forcefully triggered if corresponding Force Enable bit
 * is set, provided
 * the corresponding bit in the INTR_STATUS_EN register is set.
 */
union cavm_i3csmx_intr_force
{
    uint32_t u;
    struct cavm_i3csmx_intr_force_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_14_31        : 18;
        uint32_t busowner_updated_force_en : 1;/**< [ 13: 13](WO) Bus owner Updated Force Enable */
        uint32_t ibi_updated_force_en  : 1;  /**< [ 12: 12](WO) IBI Updated Force Enable
                                                                 This field is used in slave mode of operation. */
        uint32_t read_req_force_en     : 1;  /**< [ 11: 11](WO) Read Request Received Force Enable
                                                                 This field is used in slave mode of operation. */
        uint32_t defslv_force_en       : 1;  /**< [ 10: 10](WO) Define Slave CCC Received Force Enable */
        uint32_t transfer_err_force_en : 1;  /**< [  9:  9](WO) Transfer Error Force Enable */
        uint32_t dyn_addr_assgn_force_en : 1;/**< [  8:  8](WO) Dynamic Address Assigned Force Enable
                                                                 This field is used in slave mode of operation. */
        uint32_t reserved_7            : 1;
        uint32_t ccc_updated_force_en  : 1;  /**< [  6:  6](WO) CCC Table Updated Force Enable
                                                                 This field is used in slave mode of operation. */
        uint32_t transfer_abort_force_en : 1;/**< [  5:  5](WO) Transfer Abort Force Enable
                                                                 This field is used in master mode of operation. */
        uint32_t resp_ready_force_en   : 1;  /**< [  4:  4](WO) Response Queue Ready Force Enable */
        uint32_t cmd_queue_ready_force_en : 1;/**< [  3:  3](WO) Command Queue Ready Force Enable */
        uint32_t ibi_thld_force_en     : 1;  /**< [  2:  2](WO) IBI Buffer Threshold Force Enable
                                                                 This field is used in master mode of operation. */
        uint32_t rx_thld_force_en      : 1;  /**< [  1:  1](WO) Receive Buffer Threshold Force Enable */
        uint32_t tx_thld_force_en      : 1;  /**< [  0:  0](WO) Transmit Buffer Threshold Force Enable */
#else /* Word 0 - Little Endian */
        uint32_t tx_thld_force_en      : 1;  /**< [  0:  0](WO) Transmit Buffer Threshold Force Enable */
        uint32_t rx_thld_force_en      : 1;  /**< [  1:  1](WO) Receive Buffer Threshold Force Enable */
        uint32_t ibi_thld_force_en     : 1;  /**< [  2:  2](WO) IBI Buffer Threshold Force Enable
                                                                 This field is used in master mode of operation. */
        uint32_t cmd_queue_ready_force_en : 1;/**< [  3:  3](WO) Command Queue Ready Force Enable */
        uint32_t resp_ready_force_en   : 1;  /**< [  4:  4](WO) Response Queue Ready Force Enable */
        uint32_t transfer_abort_force_en : 1;/**< [  5:  5](WO) Transfer Abort Force Enable
                                                                 This field is used in master mode of operation. */
        uint32_t ccc_updated_force_en  : 1;  /**< [  6:  6](WO) CCC Table Updated Force Enable
                                                                 This field is used in slave mode of operation. */
        uint32_t reserved_7            : 1;
        uint32_t dyn_addr_assgn_force_en : 1;/**< [  8:  8](WO) Dynamic Address Assigned Force Enable
                                                                 This field is used in slave mode of operation. */
        uint32_t transfer_err_force_en : 1;  /**< [  9:  9](WO) Transfer Error Force Enable */
        uint32_t defslv_force_en       : 1;  /**< [ 10: 10](WO) Define Slave CCC Received Force Enable */
        uint32_t read_req_force_en     : 1;  /**< [ 11: 11](WO) Read Request Received Force Enable
                                                                 This field is used in slave mode of operation. */
        uint32_t ibi_updated_force_en  : 1;  /**< [ 12: 12](WO) IBI Updated Force Enable
                                                                 This field is used in slave mode of operation. */
        uint32_t busowner_updated_force_en : 1;/**< [ 13: 13](WO) Bus owner Updated Force Enable */
        uint32_t reserved_14_31        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_intr_force_s cn; */
};
typedef union cavm_i3csmx_intr_force cavm_i3csmx_intr_force_t;

static inline uint64_t CAVM_I3CSMX_INTR_FORCE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_INTR_FORCE(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000048ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_INTR_FORCE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_INTR_FORCE(a) cavm_i3csmx_intr_force_t
#define bustype_CAVM_I3CSMX_INTR_FORCE(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_INTR_FORCE(a) "I3CSMX_INTR_FORCE"
#define device_bar_CAVM_I3CSMX_INTR_FORCE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_INTR_FORCE(a) (a)
#define arguments_CAVM_I3CSMX_INTR_FORCE(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_intr_signal_en
 *
 * I3CSM Intr Signal En Register
 * Interrupt Signal Enable Register
 *
 * The interrupt pin is triggered based on INTR_STATUS only if corresponding Signal Enable bit is set.
 */
union cavm_i3csmx_intr_signal_en
{
    uint32_t u;
    struct cavm_i3csmx_intr_signal_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_14_31        : 18;
        uint32_t busowner_updated_signal_en : 1;/**< [ 13: 13](R/W) Bus owner Updated Signal Enable */
        uint32_t ibi_updated_signal_en : 1;  /**< [ 12: 12](R/W) IBI Updated Signal Enable
                                                                 This field is used in slave mode of operation. */
        uint32_t read_req_recv_signal_en : 1;/**< [ 11: 11](R/W) Read Request Received Signal Enable
                                                                 This field is used in slave mode of operation. */
        uint32_t defslv_signal_en      : 1;  /**< [ 10: 10](R/W) Define Slave CCC Received Signal Enable */
        uint32_t transfer_err_signal_en : 1; /**< [  9:  9](R/W) Transfer Error Signal Enable */
        uint32_t dyn_addr_assgn_signal_en : 1;/**< [  8:  8](R/W) Dynamic Address Assigned Signal Enable
                                                                 This field is used in slave mode of operation. */
        uint32_t reserved_7            : 1;
        uint32_t ccc_updated_signal_en : 1;  /**< [  6:  6](R/W) CCC Table Updated Signal Enable
                                                                 This field is used in slave mode of operation. */
        uint32_t transfer_abort_signal_en : 1;/**< [  5:  5](R/W) Transfer Abort Signal Enable
                                                                 This field is used in master mode of operation. */
        uint32_t resp_ready_signal_en  : 1;  /**< [  4:  4](R/W) Response Queue Ready Signal Enable */
        uint32_t cmd_queue_ready_signal_en : 1;/**< [  3:  3](R/W) Command Queue Ready Signal Enable */
        uint32_t ibi_thld_signal_en    : 1;  /**< [  2:  2](R/W) IBI Buffer Threshold Signal Enable
                                                                 This field is used in master mode of operation. */
        uint32_t rx_thld_signal_en     : 1;  /**< [  1:  1](R/W) Receive Buffer Threshold Signal Enable */
        uint32_t tx_thld_signal_en     : 1;  /**< [  0:  0](R/W) Transmit Buffer Threshold Signal Enable */
#else /* Word 0 - Little Endian */
        uint32_t tx_thld_signal_en     : 1;  /**< [  0:  0](R/W) Transmit Buffer Threshold Signal Enable */
        uint32_t rx_thld_signal_en     : 1;  /**< [  1:  1](R/W) Receive Buffer Threshold Signal Enable */
        uint32_t ibi_thld_signal_en    : 1;  /**< [  2:  2](R/W) IBI Buffer Threshold Signal Enable
                                                                 This field is used in master mode of operation. */
        uint32_t cmd_queue_ready_signal_en : 1;/**< [  3:  3](R/W) Command Queue Ready Signal Enable */
        uint32_t resp_ready_signal_en  : 1;  /**< [  4:  4](R/W) Response Queue Ready Signal Enable */
        uint32_t transfer_abort_signal_en : 1;/**< [  5:  5](R/W) Transfer Abort Signal Enable
                                                                 This field is used in master mode of operation. */
        uint32_t ccc_updated_signal_en : 1;  /**< [  6:  6](R/W) CCC Table Updated Signal Enable
                                                                 This field is used in slave mode of operation. */
        uint32_t reserved_7            : 1;
        uint32_t dyn_addr_assgn_signal_en : 1;/**< [  8:  8](R/W) Dynamic Address Assigned Signal Enable
                                                                 This field is used in slave mode of operation. */
        uint32_t transfer_err_signal_en : 1; /**< [  9:  9](R/W) Transfer Error Signal Enable */
        uint32_t defslv_signal_en      : 1;  /**< [ 10: 10](R/W) Define Slave CCC Received Signal Enable */
        uint32_t read_req_recv_signal_en : 1;/**< [ 11: 11](R/W) Read Request Received Signal Enable
                                                                 This field is used in slave mode of operation. */
        uint32_t ibi_updated_signal_en : 1;  /**< [ 12: 12](R/W) IBI Updated Signal Enable
                                                                 This field is used in slave mode of operation. */
        uint32_t busowner_updated_signal_en : 1;/**< [ 13: 13](R/W) Bus owner Updated Signal Enable */
        uint32_t reserved_14_31        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_intr_signal_en_s cn; */
};
typedef union cavm_i3csmx_intr_signal_en cavm_i3csmx_intr_signal_en_t;

static inline uint64_t CAVM_I3CSMX_INTR_SIGNAL_EN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_INTR_SIGNAL_EN(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000044ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_INTR_SIGNAL_EN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_INTR_SIGNAL_EN(a) cavm_i3csmx_intr_signal_en_t
#define bustype_CAVM_I3CSMX_INTR_SIGNAL_EN(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_INTR_SIGNAL_EN(a) "I3CSMX_INTR_SIGNAL_EN"
#define device_bar_CAVM_I3CSMX_INTR_SIGNAL_EN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_INTR_SIGNAL_EN(a) (a)
#define arguments_CAVM_I3CSMX_INTR_SIGNAL_EN(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_intr_status
 *
 * I3CSM Intr Status Register
 * Interrupt Status Register
 */
union cavm_i3csmx_intr_status
{
    uint32_t u;
    struct cavm_i3csmx_intr_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_14_31        : 18;
        uint32_t busowner_updated_sts  : 1;  /**< [ 13: 13](R/W1C) This interrupt is set when the role of the controller changes from being a
                                                                 Master to Slave or vice versa.
                                                                 This bit can be cleared by writing 1'b1. */
        uint32_t ibi_updated_sts       : 1;  /**< [ 12: 12](R/W1C) IBI status is updated.

                                                                 This field is used only in slave mode of operation.
                                                                 It indicates that the IBI request initiated through SIR request register is
                                                                 addressed and status is updated. */
        uint32_t read_req_recv_sts     : 1;  /**< [ 11: 11](R/W1C) Read Request Received.

                                                                 This field is used only in slave mode of operation.
                                                                 Read Request received from the current master when CMDQ is empty. This bit can
                                                                 be cleared by writing 1'b1. */
        uint32_t defslv_sts            : 1;  /**< [ 10: 10](R/W1C) Define Slave CCC Received Status.
                                                                 This interrupt is generated if DEFSLV  CCC is received.
                                                                 This bit can be cleared by writing 1'b1. */
        uint32_t transfer_err_sts      : 1;  /**< [  9:  9](R/W1C) Transfer Error Status.

                                                                 This interrupt is generated if any error occurs during transfer. The error type is specified in
                                                                 the response packet associated with the command (in ERR_STATUS field of
                                                                 RESPONSE_QUEUE_PORT register).
                                                                 This bit can be cleared by writing 1'b1. */
        uint32_t dyn_addr_assgn_sts    : 1;  /**< [  8:  8](R/W1C) Dynamic Address Assigned Status.

                                                                 This field is used only in slave mode of operation.
                                                                 This interrupt is generated if the device's Dynamic Address is assigned through
                                                                 SETDASA or ENTDAA CCC.
                                                                 This bit can be cleared by writing 1'b1. */
        uint32_t reserved_7            : 1;
        uint32_t ccc_updated_sts       : 1;  /**< [  6:  6](R/W1C) CCC Table Updated Status.

                                                                 This field is used only in slave mode of operation.
                                                                 This interrupt is generated if any of the CCC registers are updated by I3C
                                                                 Master through CCC commands.
                                                                 This interrupt can be cleared by writing 1'b1. */
        uint32_t transfer_abort_sts    : 1;  /**< [  5:  5](R/W1C) Transfer Abort Status.

                                                                 This field is used only in master mode of operation.
                                                                 This interrupt is generated if transfer is aborted. This interrupt can be cleared by writing 1'b1. */
        uint32_t resp_ready_sts        : 1;  /**< [  4:  4](RO) Response Queue Ready Status.

                                                                 This interrupt is generated when number of entries in response queue is greater
                                                                 than or equal to threshold value
                                                                 specified by RESP_BUF_THLD field in QUEUE_THLD_CTRL register. This interrupt is
                                                                 cleared automatically when
                                                                 number of entries in response buffer is less than threshold value specified. */
        uint32_t cmd_queue_ready_sts   : 1;  /**< [  3:  3](RO) Command Queue Ready.

                                                                 This interrupt is generated when number of empty locations in command queue is
                                                                 greater than or equal to threshold
                                                                 value specified by CMD_EMPTY_BUF_THLD field in QUEUE_THLD_CTRL register. This
                                                                 interrupt is cleared automatically
                                                                 when number of empty locations in command buffer is less than threshold value specified. */
        uint32_t ibi_thld_sts          : 1;  /**< [  2:  2](RO) IBI Buffer Threshold Status.

                                                                 This field is only used in master mode of operation
                                                                 This interrupt is generated when number of entries in IBI buffer is greater than
                                                                 or equal to threshold value
                                                                 specified by IBI_BUF_THLD field in QUEUE_THLD_CTRL register. This interrupt is
                                                                 cleared automatically
                                                                 when number of entries in IBI buffer is less than threshold value specified. */
        uint32_t rx_thld_sts           : 1;  /**< [  1:  1](RO) Receive Buffer Threshold Status.

                                                                 This interrupt is generated when number of entries in receive buffer is greater
                                                                 than or equal to threshold
                                                                 value specified by RX_BUF_THLD field in DATA_BUFFER_THLD_CTRL register. This interrupt is cleared
                                                                 automatically when number of entries in receive buffer is less than threshold value specified. */
        uint32_t tx_thld_sts           : 1;  /**< [  0:  0](RO) Transmit Buffer Threshold Status

                                                                 This interrupt is generated when the number of empty locations in transmit
                                                                 buffer is greater than or equal to
                                                                 threshold value specified by TX_EMPTY_BUF_THLD field in DATA_BUFFER_THLD_CTRL
                                                                 register. This interrupt is cleared automatically when number of empty locations
                                                                 in transmit buffer is less than threshold value
                                                                 specified. */
#else /* Word 0 - Little Endian */
        uint32_t tx_thld_sts           : 1;  /**< [  0:  0](RO) Transmit Buffer Threshold Status

                                                                 This interrupt is generated when the number of empty locations in transmit
                                                                 buffer is greater than or equal to
                                                                 threshold value specified by TX_EMPTY_BUF_THLD field in DATA_BUFFER_THLD_CTRL
                                                                 register. This interrupt is cleared automatically when number of empty locations
                                                                 in transmit buffer is less than threshold value
                                                                 specified. */
        uint32_t rx_thld_sts           : 1;  /**< [  1:  1](RO) Receive Buffer Threshold Status.

                                                                 This interrupt is generated when number of entries in receive buffer is greater
                                                                 than or equal to threshold
                                                                 value specified by RX_BUF_THLD field in DATA_BUFFER_THLD_CTRL register. This interrupt is cleared
                                                                 automatically when number of entries in receive buffer is less than threshold value specified. */
        uint32_t ibi_thld_sts          : 1;  /**< [  2:  2](RO) IBI Buffer Threshold Status.

                                                                 This field is only used in master mode of operation
                                                                 This interrupt is generated when number of entries in IBI buffer is greater than
                                                                 or equal to threshold value
                                                                 specified by IBI_BUF_THLD field in QUEUE_THLD_CTRL register. This interrupt is
                                                                 cleared automatically
                                                                 when number of entries in IBI buffer is less than threshold value specified. */
        uint32_t cmd_queue_ready_sts   : 1;  /**< [  3:  3](RO) Command Queue Ready.

                                                                 This interrupt is generated when number of empty locations in command queue is
                                                                 greater than or equal to threshold
                                                                 value specified by CMD_EMPTY_BUF_THLD field in QUEUE_THLD_CTRL register. This
                                                                 interrupt is cleared automatically
                                                                 when number of empty locations in command buffer is less than threshold value specified. */
        uint32_t resp_ready_sts        : 1;  /**< [  4:  4](RO) Response Queue Ready Status.

                                                                 This interrupt is generated when number of entries in response queue is greater
                                                                 than or equal to threshold value
                                                                 specified by RESP_BUF_THLD field in QUEUE_THLD_CTRL register. This interrupt is
                                                                 cleared automatically when
                                                                 number of entries in response buffer is less than threshold value specified. */
        uint32_t transfer_abort_sts    : 1;  /**< [  5:  5](R/W1C) Transfer Abort Status.

                                                                 This field is used only in master mode of operation.
                                                                 This interrupt is generated if transfer is aborted. This interrupt can be cleared by writing 1'b1. */
        uint32_t ccc_updated_sts       : 1;  /**< [  6:  6](R/W1C) CCC Table Updated Status.

                                                                 This field is used only in slave mode of operation.
                                                                 This interrupt is generated if any of the CCC registers are updated by I3C
                                                                 Master through CCC commands.
                                                                 This interrupt can be cleared by writing 1'b1. */
        uint32_t reserved_7            : 1;
        uint32_t dyn_addr_assgn_sts    : 1;  /**< [  8:  8](R/W1C) Dynamic Address Assigned Status.

                                                                 This field is used only in slave mode of operation.
                                                                 This interrupt is generated if the device's Dynamic Address is assigned through
                                                                 SETDASA or ENTDAA CCC.
                                                                 This bit can be cleared by writing 1'b1. */
        uint32_t transfer_err_sts      : 1;  /**< [  9:  9](R/W1C) Transfer Error Status.

                                                                 This interrupt is generated if any error occurs during transfer. The error type is specified in
                                                                 the response packet associated with the command (in ERR_STATUS field of
                                                                 RESPONSE_QUEUE_PORT register).
                                                                 This bit can be cleared by writing 1'b1. */
        uint32_t defslv_sts            : 1;  /**< [ 10: 10](R/W1C) Define Slave CCC Received Status.
                                                                 This interrupt is generated if DEFSLV  CCC is received.
                                                                 This bit can be cleared by writing 1'b1. */
        uint32_t read_req_recv_sts     : 1;  /**< [ 11: 11](R/W1C) Read Request Received.

                                                                 This field is used only in slave mode of operation.
                                                                 Read Request received from the current master when CMDQ is empty. This bit can
                                                                 be cleared by writing 1'b1. */
        uint32_t ibi_updated_sts       : 1;  /**< [ 12: 12](R/W1C) IBI status is updated.

                                                                 This field is used only in slave mode of operation.
                                                                 It indicates that the IBI request initiated through SIR request register is
                                                                 addressed and status is updated. */
        uint32_t busowner_updated_sts  : 1;  /**< [ 13: 13](R/W1C) This interrupt is set when the role of the controller changes from being a
                                                                 Master to Slave or vice versa.
                                                                 This bit can be cleared by writing 1'b1. */
        uint32_t reserved_14_31        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_intr_status_s cn; */
};
typedef union cavm_i3csmx_intr_status cavm_i3csmx_intr_status_t;

static inline uint64_t CAVM_I3CSMX_INTR_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_INTR_STATUS(uint64_t a)
{
    if (a<=1)
        return 0x87e0d400003cll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_INTR_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_INTR_STATUS(a) cavm_i3csmx_intr_status_t
#define bustype_CAVM_I3CSMX_INTR_STATUS(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_INTR_STATUS(a) "I3CSMX_INTR_STATUS"
#define device_bar_CAVM_I3CSMX_INTR_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_INTR_STATUS(a) (a)
#define arguments_CAVM_I3CSMX_INTR_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_intr_status_en
 *
 * I3CSM Intr Status En Register
 * Interrupt Status Enable Register.
 *
 * The interrupt status is updated in INTR_STATUS register only if corresponding Status
 * Enable bit is set.
 */
union cavm_i3csmx_intr_status_en
{
    uint32_t u;
    struct cavm_i3csmx_intr_status_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_14_31        : 18;
        uint32_t busowner_updated_sts_en : 1;/**< [ 13: 13](R/W) Bus owner Updated Status Enable */
        uint32_t ibi_updated_sts_en    : 1;  /**< [ 12: 12](R/W) IBI Updated Status Enable
                                                                 This field is used in slave mode of operation. */
        uint32_t read_req_recv_sts_en  : 1;  /**< [ 11: 11](R/W) Read Request Received Status Enable
                                                                 This field is used in slave mode of operation. */
        uint32_t defslv_sts_en         : 1;  /**< [ 10: 10](R/W) Define Slave CCC Received Status Enable */
        uint32_t transfer_err_sts_en   : 1;  /**< [  9:  9](R/W) Transfer Error Status Enable */
        uint32_t dyn_addr_assgn_sts_en : 1;  /**< [  8:  8](R/W) Dynamic Address Assigned Status Enable
                                                                 This field is used in slave mode of operation. */
        uint32_t reserved_7            : 1;
        uint32_t ccc_updated_sts_en    : 1;  /**< [  6:  6](R/W) CCC Table Updated Status Enable.

                                                                 This field is used in slave mode of operation. */
        uint32_t transfer_abort_sts_en : 1;  /**< [  5:  5](R/W) Transfer Abort Status Enable.

                                                                 This field is used only in master mode of operation. */
        uint32_t resp_ready_sts_en     : 1;  /**< [  4:  4](R/W) Response Queue Ready Status Enable */
        uint32_t cmd_queue_ready_sts_en : 1; /**< [  3:  3](R/W) Command Queue Ready Status Enable */
        uint32_t ibi_thld_sts_en       : 1;  /**< [  2:  2](R/W) IBI Buffer Threshold Status Enable.

                                                                 This field is used only in master mode of operation. */
        uint32_t rx_thld_sts_en        : 1;  /**< [  1:  1](R/W) Receive Buffer Threshold Status Enable */
        uint32_t tx_thld_sts_en        : 1;  /**< [  0:  0](R/W) Transmit Buffer Threshold Status Enable. */
#else /* Word 0 - Little Endian */
        uint32_t tx_thld_sts_en        : 1;  /**< [  0:  0](R/W) Transmit Buffer Threshold Status Enable. */
        uint32_t rx_thld_sts_en        : 1;  /**< [  1:  1](R/W) Receive Buffer Threshold Status Enable */
        uint32_t ibi_thld_sts_en       : 1;  /**< [  2:  2](R/W) IBI Buffer Threshold Status Enable.

                                                                 This field is used only in master mode of operation. */
        uint32_t cmd_queue_ready_sts_en : 1; /**< [  3:  3](R/W) Command Queue Ready Status Enable */
        uint32_t resp_ready_sts_en     : 1;  /**< [  4:  4](R/W) Response Queue Ready Status Enable */
        uint32_t transfer_abort_sts_en : 1;  /**< [  5:  5](R/W) Transfer Abort Status Enable.

                                                                 This field is used only in master mode of operation. */
        uint32_t ccc_updated_sts_en    : 1;  /**< [  6:  6](R/W) CCC Table Updated Status Enable.

                                                                 This field is used in slave mode of operation. */
        uint32_t reserved_7            : 1;
        uint32_t dyn_addr_assgn_sts_en : 1;  /**< [  8:  8](R/W) Dynamic Address Assigned Status Enable
                                                                 This field is used in slave mode of operation. */
        uint32_t transfer_err_sts_en   : 1;  /**< [  9:  9](R/W) Transfer Error Status Enable */
        uint32_t defslv_sts_en         : 1;  /**< [ 10: 10](R/W) Define Slave CCC Received Status Enable */
        uint32_t read_req_recv_sts_en  : 1;  /**< [ 11: 11](R/W) Read Request Received Status Enable
                                                                 This field is used in slave mode of operation. */
        uint32_t ibi_updated_sts_en    : 1;  /**< [ 12: 12](R/W) IBI Updated Status Enable
                                                                 This field is used in slave mode of operation. */
        uint32_t busowner_updated_sts_en : 1;/**< [ 13: 13](R/W) Bus owner Updated Status Enable */
        uint32_t reserved_14_31        : 18;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_intr_status_en_s cn; */
};
typedef union cavm_i3csmx_intr_status_en cavm_i3csmx_intr_status_en_t;

static inline uint64_t CAVM_I3CSMX_INTR_STATUS_EN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_INTR_STATUS_EN(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000040ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_INTR_STATUS_EN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_INTR_STATUS_EN(a) cavm_i3csmx_intr_status_en_t
#define bustype_CAVM_I3CSMX_INTR_STATUS_EN(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_INTR_STATUS_EN(a) "I3CSMX_INTR_STATUS_EN"
#define device_bar_CAVM_I3CSMX_INTR_STATUS_EN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_INTR_STATUS_EN(a) (a)
#define arguments_CAVM_I3CSMX_INTR_STATUS_EN(a) (a),-1,-1,-1

/**
 * Register (RSL) i3csm#_intr_w1s
 *
 * I3CSM PF Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_i3csmx_intr_w1s
{
    uint64_t u;
    struct cavm_i3csmx_intr_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t i3csm_intr_out        : 1;  /**< [  0:  0](R/W1S/H) Reads or sets I3CSM(0..1)_INTR[I3CSM_INTR_OUT]. */
#else /* Word 0 - Little Endian */
        uint64_t i3csm_intr_out        : 1;  /**< [  0:  0](R/W1S/H) Reads or sets I3CSM(0..1)_INTR[I3CSM_INTR_OUT]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_intr_w1s_s cn; */
};
typedef union cavm_i3csmx_intr_w1s cavm_i3csmx_intr_w1s_t;

static inline uint64_t CAVM_I3CSMX_INTR_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_INTR_W1S(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000428ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_INTR_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_INTR_W1S(a) cavm_i3csmx_intr_w1s_t
#define bustype_CAVM_I3CSMX_INTR_W1S(a) CSR_TYPE_RSL
#define basename_CAVM_I3CSMX_INTR_W1S(a) "I3CSMX_INTR_W1S"
#define device_bar_CAVM_I3CSMX_INTR_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_INTR_W1S(a) (a)
#define arguments_CAVM_I3CSMX_INTR_W1S(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_io_ctl
 *
 * MIO I3CSM IO Control Register
 * This register control the I3CSM IO drive strength and slew rates. Index {a} of zero
 * (I3C(0)_IO_CTL) is used to control all I3CSM outputs on CNXXXX; other index
 * values have no effect.
 */
union cavm_i3csmx_io_ctl
{
    uint32_t u;
    struct cavm_i3csmx_io_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_12_31        : 20;
        uint32_t flt_sel               : 2;  /**< [ 11: 10](R/W) Active high, I2C mode enable signal
                                                                 FLT_SEL[1:0] = 00 - Normal mode, no deglitch filter
                                                                 FLT_SEL[1:0] = 01 - 10ns spike filter(input path) for HS I2C mode
                                                                 FLT_SEL[1:0] = 10 - 50ns spike filter(input path) for FS I2C mode
                                                                 FLT_SEL[1:0] = 11 - not allowed */
        uint32_t i2c_sel               : 2;  /**< [  9:  8](R/W) Active high, to enable deglitch circuitry
                                                                 I2C_SEL[1:0] = 00 - I3C push pull mode
                                                                 I2C_SEL[1:0] = 01 - Fast-mode I2C
                                                                 I2C_SEL[1:0] = 10 - High-speed / Fast-Mode Plus I2C */
        uint32_t lp                    : 1;  /**< [  7:  7](R/W) Active high, low power mode. Recommended to set LP=1 */
        uint32_t pu_sel                : 3;  /**< [  6:  4](R/W) 0x0 = 25.00 kohms  for I2C mode; 50.00 kohms for non-I2C mode.
                                                                 0x1 = 2.82 kohms.
                                                                 0x2 = 1.61 kohms.
                                                                 0x3 = 1.13 kohms.
                                                                 0x4 = 0.87 kohms.
                                                                 0x5 = 0.70 kohms.
                                                                 0x6 = 0.59 kohms.
                                                                 0x7 = 0.51 kohms. */
        uint32_t drive                 : 2;  /**< [  3:  2](R/W) I3CSM bus pin output impedance.
                                                                 0x0 = 55 ohm.
                                                                 0x1 = 45 ohm.
                                                                 0x2 = 33 ohm.
                                                                 0x3 = 20 ohm. */
        uint32_t slew                  : 2;  /**< [  1:  0](R/W) I3CSM bus pins output slew rate control.
                                                                 0x0 = Weakest.
                                                                 _ ...
                                                                 0x3 = Strongest. */
#else /* Word 0 - Little Endian */
        uint32_t slew                  : 2;  /**< [  1:  0](R/W) I3CSM bus pins output slew rate control.
                                                                 0x0 = Weakest.
                                                                 _ ...
                                                                 0x3 = Strongest. */
        uint32_t drive                 : 2;  /**< [  3:  2](R/W) I3CSM bus pin output impedance.
                                                                 0x0 = 55 ohm.
                                                                 0x1 = 45 ohm.
                                                                 0x2 = 33 ohm.
                                                                 0x3 = 20 ohm. */
        uint32_t pu_sel                : 3;  /**< [  6:  4](R/W) 0x0 = 25.00 kohms  for I2C mode; 50.00 kohms for non-I2C mode.
                                                                 0x1 = 2.82 kohms.
                                                                 0x2 = 1.61 kohms.
                                                                 0x3 = 1.13 kohms.
                                                                 0x4 = 0.87 kohms.
                                                                 0x5 = 0.70 kohms.
                                                                 0x6 = 0.59 kohms.
                                                                 0x7 = 0.51 kohms. */
        uint32_t lp                    : 1;  /**< [  7:  7](R/W) Active high, low power mode. Recommended to set LP=1 */
        uint32_t i2c_sel               : 2;  /**< [  9:  8](R/W) Active high, to enable deglitch circuitry
                                                                 I2C_SEL[1:0] = 00 - I3C push pull mode
                                                                 I2C_SEL[1:0] = 01 - Fast-mode I2C
                                                                 I2C_SEL[1:0] = 10 - High-speed / Fast-Mode Plus I2C */
        uint32_t flt_sel               : 2;  /**< [ 11: 10](R/W) Active high, I2C mode enable signal
                                                                 FLT_SEL[1:0] = 00 - Normal mode, no deglitch filter
                                                                 FLT_SEL[1:0] = 01 - 10ns spike filter(input path) for HS I2C mode
                                                                 FLT_SEL[1:0] = 10 - 50ns spike filter(input path) for FS I2C mode
                                                                 FLT_SEL[1:0] = 11 - not allowed */
        uint32_t reserved_12_31        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_io_ctl_s cn; */
};
typedef union cavm_i3csmx_io_ctl cavm_i3csmx_io_ctl_t;

static inline uint64_t CAVM_I3CSMX_IO_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_IO_CTL(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000410ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_IO_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_IO_CTL(a) cavm_i3csmx_io_ctl_t
#define bustype_CAVM_I3CSMX_IO_CTL(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_IO_CTL(a) "I3CSMX_IO_CTL"
#define device_bar_CAVM_I3CSMX_IO_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_IO_CTL(a) (a)
#define arguments_CAVM_I3CSMX_IO_CTL(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_max_data_speed
 *
 * I3CSM Max Data Speed Register
 * The values in this register are returned by the slave as GETACCMST CCC data. .
 *
 * This register is used in slave mode of operation.
 */
union cavm_i3csmx_max_data_speed
{
    uint32_t u;
    struct cavm_i3csmx_max_data_speed_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_19_31        : 13;
        uint32_t mxds_clk_data_turn    : 3;  /**< [ 18: 16](R/W) Specifies the clock to data turnaround time (Tsco parameter) of DWC_mipi_i3c Slave device
                                                                  0x0 = 8ns.
                                                                  0x1 = 9ns.
                                                                  0x2 = 10ns.
                                                                  0x3 = 11ns.
                                                                  0x4 = 12ns.
                                                                  0x5-7 = Reserved/user Defined. */
        uint32_t reserved_11_15        : 5;
        uint32_t mxds_max_rd_speed     : 3;  /**< [ 10:  8](R/W) Specifies the Maximum Sustained Data Rate for non-CCC messages sent by
                                                                 DWC_mipi_i3c Slave Device to Master Device
                                                                 0x0 = 12.5MHz.
                                                                 0x1 = 8MHZ.
                                                                 0x2 = 6MHz.
                                                                 0x3 = 4MHz.
                                                                 0x4 = 2MHz.
                                                                 0x5-7 = Reserved/User Defined */
        uint32_t reserved_3_7          : 5;
        uint32_t mxds_max_wr_speed     : 3;  /**< [  2:  0](R/W) Specifies the Maximum Sustained Data Rate for non-CCC messages sent by Master
                                                                 Device to DWC_mipi_i3c Slave device
                                                                 0x0 = 12.5MHz.
                                                                 0x1 = 8MHZ.
                                                                 0x2 = 6MHz.
                                                                 0x3 = 4MHz.
                                                                 0x4 = 2MHz.
                                                                 0x5-7 = Reserved/User Defined. */
#else /* Word 0 - Little Endian */
        uint32_t mxds_max_wr_speed     : 3;  /**< [  2:  0](R/W) Specifies the Maximum Sustained Data Rate for non-CCC messages sent by Master
                                                                 Device to DWC_mipi_i3c Slave device
                                                                 0x0 = 12.5MHz.
                                                                 0x1 = 8MHZ.
                                                                 0x2 = 6MHz.
                                                                 0x3 = 4MHz.
                                                                 0x4 = 2MHz.
                                                                 0x5-7 = Reserved/User Defined. */
        uint32_t reserved_3_7          : 5;
        uint32_t mxds_max_rd_speed     : 3;  /**< [ 10:  8](R/W) Specifies the Maximum Sustained Data Rate for non-CCC messages sent by
                                                                 DWC_mipi_i3c Slave Device to Master Device
                                                                 0x0 = 12.5MHz.
                                                                 0x1 = 8MHZ.
                                                                 0x2 = 6MHz.
                                                                 0x3 = 4MHz.
                                                                 0x4 = 2MHz.
                                                                 0x5-7 = Reserved/User Defined */
        uint32_t reserved_11_15        : 5;
        uint32_t mxds_clk_data_turn    : 3;  /**< [ 18: 16](R/W) Specifies the clock to data turnaround time (Tsco parameter) of DWC_mipi_i3c Slave device
                                                                  0x0 = 8ns.
                                                                  0x1 = 9ns.
                                                                  0x2 = 10ns.
                                                                  0x3 = 11ns.
                                                                  0x4 = 12ns.
                                                                  0x5-7 = Reserved/user Defined. */
        uint32_t reserved_19_31        : 13;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_max_data_speed_s cn; */
};
typedef union cavm_i3csmx_max_data_speed cavm_i3csmx_max_data_speed_t;

static inline uint64_t CAVM_I3CSMX_MAX_DATA_SPEED(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_MAX_DATA_SPEED(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000084ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_MAX_DATA_SPEED", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_MAX_DATA_SPEED(a) cavm_i3csmx_max_data_speed_t
#define bustype_CAVM_I3CSMX_MAX_DATA_SPEED(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_MAX_DATA_SPEED(a) "I3CSMX_MAX_DATA_SPEED"
#define device_bar_CAVM_I3CSMX_MAX_DATA_SPEED(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_MAX_DATA_SPEED(a) (a)
#define arguments_CAVM_I3CSMX_MAX_DATA_SPEED(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_max_read_turnaround
 *
 * I3CSM Max Read Turnaround Register
 * MXDS Maximum Read Turnaround Time.
 *
 * This register is used in slave mode of operation and the value in this register is
 * returned by the slave as GETMXDS CCC data.
 */
union cavm_i3csmx_max_read_turnaround
{
    uint32_t u;
    struct cavm_i3csmx_max_read_turnaround_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t mxds_max_rd_turn      : 24; /**< [ 23:  0](RO) Specifies the maximum read turnaround time (in microseconds (us)) of DWC_mipi_i3c Slave. */
#else /* Word 0 - Little Endian */
        uint32_t mxds_max_rd_turn      : 24; /**< [ 23:  0](RO) Specifies the maximum read turnaround time (in microseconds (us)) of DWC_mipi_i3c Slave. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_max_read_turnaround_s cn; */
};
typedef union cavm_i3csmx_max_read_turnaround cavm_i3csmx_max_read_turnaround_t;

static inline uint64_t CAVM_I3CSMX_MAX_READ_TURNAROUND(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_MAX_READ_TURNAROUND(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000080ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_MAX_READ_TURNAROUND", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_MAX_READ_TURNAROUND(a) cavm_i3csmx_max_read_turnaround_t
#define bustype_CAVM_I3CSMX_MAX_READ_TURNAROUND(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_MAX_READ_TURNAROUND(a) "I3CSMX_MAX_READ_TURNAROUND"
#define device_bar_CAVM_I3CSMX_MAX_READ_TURNAROUND(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_MAX_READ_TURNAROUND(a) (a)
#define arguments_CAVM_I3CSMX_MAX_READ_TURNAROUND(a) (a),-1,-1,-1

/**
 * Register (RSL) i3csm#_msix_pba#
 *
 * I3CSM MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the I3CSM_INT_VEC_E
 * enumeration.
 */
union cavm_i3csmx_msix_pbax
{
    uint64_t u;
    struct cavm_i3csmx_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated I3C()_MSIX_VEC()_CTL, enumerated by
                                                                 I3CSM_INT_VEC_E. Bits that have no associated I3CSM_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated I3C()_MSIX_VEC()_CTL, enumerated by
                                                                 I3CSM_INT_VEC_E. Bits that have no associated I3CSM_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_msix_pbax_s cn; */
};
typedef union cavm_i3csmx_msix_pbax cavm_i3csmx_msix_pbax_t;

static inline uint64_t CAVM_I3CSMX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_MSIX_PBAX(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b==0))
        return 0x87e0d4ff0000ll + 0x1000000ll * ((a) & 0x1) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("I3CSMX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_MSIX_PBAX(a,b) cavm_i3csmx_msix_pbax_t
#define bustype_CAVM_I3CSMX_MSIX_PBAX(a,b) CSR_TYPE_RSL
#define basename_CAVM_I3CSMX_MSIX_PBAX(a,b) "I3CSMX_MSIX_PBAX"
#define device_bar_CAVM_I3CSMX_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_I3CSMX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_I3CSMX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (RSL) i3csm#_msix_vec#_addr
 *
 * I3CSM MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the I3CSM_INT_VEC_E enumeration.
 */
union cavm_i3csmx_msix_vecx_addr
{
    uint64_t u;
    struct cavm_i3csmx_msix_vecx_addr_s
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
    /* struct cavm_i3csmx_msix_vecx_addr_s cn; */
};
typedef union cavm_i3csmx_msix_vecx_addr cavm_i3csmx_msix_vecx_addr_t;

static inline uint64_t CAVM_I3CSMX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b==0))
        return 0x87e0d4f00000ll + 0x1000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("I3CSMX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_MSIX_VECX_ADDR(a,b) cavm_i3csmx_msix_vecx_addr_t
#define bustype_CAVM_I3CSMX_MSIX_VECX_ADDR(a,b) CSR_TYPE_RSL
#define basename_CAVM_I3CSMX_MSIX_VECX_ADDR(a,b) "I3CSMX_MSIX_VECX_ADDR"
#define device_bar_CAVM_I3CSMX_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_I3CSMX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_I3CSMX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (RSL) i3csm#_msix_vec#_ctl
 *
 * I3CSM MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the I3CSM_INT_VEC_E enumeration.
 */
union cavm_i3csmx_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_i3csmx_msix_vecx_ctl_s
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
    /* struct cavm_i3csmx_msix_vecx_ctl_s cn; */
};
typedef union cavm_i3csmx_msix_vecx_ctl cavm_i3csmx_msix_vecx_ctl_t;

static inline uint64_t CAVM_I3CSMX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
    if ((a<=1) && (b==0))
        return 0x87e0d4f00008ll + 0x1000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("I3CSMX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_MSIX_VECX_CTL(a,b) cavm_i3csmx_msix_vecx_ctl_t
#define bustype_CAVM_I3CSMX_MSIX_VECX_CTL(a,b) CSR_TYPE_RSL
#define basename_CAVM_I3CSMX_MSIX_VECX_CTL(a,b) "I3CSMX_MSIX_VECX_CTL"
#define device_bar_CAVM_I3CSMX_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_I3CSMX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_I3CSMX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (RSL32b) i3csm#_present_state
 *
 * I3CSM Present State Register
 * The user can get status of the DWC_mipi_i3c Controller from this 32-bit read only
 * register. This register is relevant in both master and slave mode of operation and
 * is meant to be used to get debug information related to the controllers internal
 * states.
 */
union cavm_i3csmx_present_state
{
    uint32_t u;
    struct cavm_i3csmx_present_state_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t controller_idle       : 1;  /**< [ 28: 28](RO/H) This field reflects whether the Controller Mode is in Idle state or not. This
                                                                 bit is set when all the Queues(Command , Response, IBI) and Buffers(Transmit and
                                                                 Receive) are empty along with the Controller State machine is in Idle state. */
        uint32_t cmd_tid               : 4;  /**< [ 27: 24](RO) This field reflects the Transaction-ID of the current executing command. */
        uint32_t reserved_22_23        : 2;
        uint32_t cm_tfr_st_sts         : 6;  /**< [ 21: 16](RO) Current Master Transfer State Status.

                                                                 Indicates the state of current transfer currently executing by the DWC_mipi_i3c controller.
                                                                 This is valid in Master mode only.
                                                                 0x0 = IDLE (Controller is Idle state, waiting for commands from application
                                                                 or Slave initated In-band Interrupt)
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
                                                                 0xF = In-Band Interrupt(SIR) Read Data State.
                                                                 0x10 =  In-Band Interrupt Auto-Disable State
                                                                 0x11 = HDR-DDR CRC Data Generation/Receive State.
                                                                 0x12 = Clock Extension State.
                                                                 0x13 = Halt State. */
        uint32_t reserved_14_15        : 2;
        uint32_t cm_tfr_sts            : 6;  /**< [ 13:  8](RO) Transfer Type Status

                                                                 Indicates the type of transfer currently executing by the DWC_mipi_i3c controller.

                                                                 In Master mode of operation:
                                                                 0x0 = IDLE (Controller is in Idle state, waiting for commands from
                                                                 application or Slave initated In-band Interrupt)
                                                                 0x1 = Broadcast CCC Write Transfer.
                                                                 0x2 = Directed CCC Write Transfer.
                                                                 0x3 = Directed CCC Read Transfer.
                                                                 0x4 = ENTDAA Address Assignment Transfer.
                                                                 0x5 = SETDASA Address Assignment Transfer.
                                                                 0x6 = Private I3C SDR Write Transfer.
                                                                 0x7 = Private I3C SDR Read Transfer.
                                                                 0x8 = Private I2C SDR Write Transfer.
                                                                 0x9 = Private I2C SDR Read Transfer.
                                                                 0xA = Private HDR Ternary Symbol(TS) Write Transfer.
                                                                 0xB = Private HDR Ternary Symbol(TS) Read Transfer.
                                                                 0xC = Private HDR Double-Data Rate(DDR) Write Transfer.
                                                                 0xD = Private HDR Double-Data Rate(DDR) Read Transfer.
                                                                 0xE = Servicing In-Band Interrupt Transfer.
                                                                 0xF = Halt state (Controller is in Halt State, waiting for the application to
                                                                 resume through DEVICE_CTRL Register)

                                                                 In Slave mode of operation:
                                                                 0x0 = IDLE (Controller is in Idle state).
                                                                 0x1 = Hot-Join transfer state.
                                                                 0x2 = IBI transfer state.
                                                                 0x3 = Master write transfer ongoing.
                                                                 0x4 = Read data prefetch state.
                                                                 0x5 = Master read transfer ongoing.
                                                                 0x6 = Slave controller in Halt State waiting for resume from application. */
        uint32_t reserved_3_7          : 5;
        uint32_t current_master        : 1;  /**< [  2:  2](RO/H) This Bit is used to check whether the Master is Current Master or not. The
                                                                 Current Master is the Master
                                                                 that owns the SCL line.
                                                                 If this bit is set to 0, the Master is not Current Master and requires to request and the ownership
                                                                 before initiating any transfer on the line.
                                                                 If this bit is set to 1, the Master is the Current Master and can initate the
                                                                 transfers on the line.
                                                                 0 = Master is not Current Master.
                                                                 1 = Master is Current Master. */
        uint32_t sda_line_signal_level : 1;  /**< [  1:  1](RO/H) This bit is used to check the SDA line level to recover from errors and for debugging. This bit
                                                                 reflects the value of synchronized sda_in_a signal. */
        uint32_t scl_line_signal_level : 1;  /**< [  0:  0](RO/H) This bit is used to check the SCL line level to recover from errors and for debugging. This bit
                                                                 reflects the value of synchronized scl_in_a signal. */
#else /* Word 0 - Little Endian */
        uint32_t scl_line_signal_level : 1;  /**< [  0:  0](RO/H) This bit is used to check the SCL line level to recover from errors and for debugging. This bit
                                                                 reflects the value of synchronized scl_in_a signal. */
        uint32_t sda_line_signal_level : 1;  /**< [  1:  1](RO/H) This bit is used to check the SDA line level to recover from errors and for debugging. This bit
                                                                 reflects the value of synchronized sda_in_a signal. */
        uint32_t current_master        : 1;  /**< [  2:  2](RO/H) This Bit is used to check whether the Master is Current Master or not. The
                                                                 Current Master is the Master
                                                                 that owns the SCL line.
                                                                 If this bit is set to 0, the Master is not Current Master and requires to request and the ownership
                                                                 before initiating any transfer on the line.
                                                                 If this bit is set to 1, the Master is the Current Master and can initate the
                                                                 transfers on the line.
                                                                 0 = Master is not Current Master.
                                                                 1 = Master is Current Master. */
        uint32_t reserved_3_7          : 5;
        uint32_t cm_tfr_sts            : 6;  /**< [ 13:  8](RO) Transfer Type Status

                                                                 Indicates the type of transfer currently executing by the DWC_mipi_i3c controller.

                                                                 In Master mode of operation:
                                                                 0x0 = IDLE (Controller is in Idle state, waiting for commands from
                                                                 application or Slave initated In-band Interrupt)
                                                                 0x1 = Broadcast CCC Write Transfer.
                                                                 0x2 = Directed CCC Write Transfer.
                                                                 0x3 = Directed CCC Read Transfer.
                                                                 0x4 = ENTDAA Address Assignment Transfer.
                                                                 0x5 = SETDASA Address Assignment Transfer.
                                                                 0x6 = Private I3C SDR Write Transfer.
                                                                 0x7 = Private I3C SDR Read Transfer.
                                                                 0x8 = Private I2C SDR Write Transfer.
                                                                 0x9 = Private I2C SDR Read Transfer.
                                                                 0xA = Private HDR Ternary Symbol(TS) Write Transfer.
                                                                 0xB = Private HDR Ternary Symbol(TS) Read Transfer.
                                                                 0xC = Private HDR Double-Data Rate(DDR) Write Transfer.
                                                                 0xD = Private HDR Double-Data Rate(DDR) Read Transfer.
                                                                 0xE = Servicing In-Band Interrupt Transfer.
                                                                 0xF = Halt state (Controller is in Halt State, waiting for the application to
                                                                 resume through DEVICE_CTRL Register)

                                                                 In Slave mode of operation:
                                                                 0x0 = IDLE (Controller is in Idle state).
                                                                 0x1 = Hot-Join transfer state.
                                                                 0x2 = IBI transfer state.
                                                                 0x3 = Master write transfer ongoing.
                                                                 0x4 = Read data prefetch state.
                                                                 0x5 = Master read transfer ongoing.
                                                                 0x6 = Slave controller in Halt State waiting for resume from application. */
        uint32_t reserved_14_15        : 2;
        uint32_t cm_tfr_st_sts         : 6;  /**< [ 21: 16](RO) Current Master Transfer State Status.

                                                                 Indicates the state of current transfer currently executing by the DWC_mipi_i3c controller.
                                                                 This is valid in Master mode only.
                                                                 0x0 = IDLE (Controller is Idle state, waiting for commands from application
                                                                 or Slave initated In-band Interrupt)
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
                                                                 0xF = In-Band Interrupt(SIR) Read Data State.
                                                                 0x10 =  In-Band Interrupt Auto-Disable State
                                                                 0x11 = HDR-DDR CRC Data Generation/Receive State.
                                                                 0x12 = Clock Extension State.
                                                                 0x13 = Halt State. */
        uint32_t reserved_22_23        : 2;
        uint32_t cmd_tid               : 4;  /**< [ 27: 24](RO) This field reflects the Transaction-ID of the current executing command. */
        uint32_t controller_idle       : 1;  /**< [ 28: 28](RO/H) This field reflects whether the Controller Mode is in Idle state or not. This
                                                                 bit is set when all the Queues(Command , Response, IBI) and Buffers(Transmit and
                                                                 Receive) are empty along with the Controller State machine is in Idle state. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_present_state_s cn; */
};
typedef union cavm_i3csmx_present_state cavm_i3csmx_present_state_t;

static inline uint64_t CAVM_I3CSMX_PRESENT_STATE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_PRESENT_STATE(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000054ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_PRESENT_STATE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_PRESENT_STATE(a) cavm_i3csmx_present_state_t
#define bustype_CAVM_I3CSMX_PRESENT_STATE(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_PRESENT_STATE(a) "I3CSMX_PRESENT_STATE"
#define device_bar_CAVM_I3CSMX_PRESENT_STATE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_PRESENT_STATE(a) (a)
#define arguments_CAVM_I3CSMX_PRESENT_STATE(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_queue_size_capability
 *
 * I3CSM Queue Size Capability Register
 * This register reflects the configured size of the Data Buffer and Queues in DWC_mipi_i3c.
 */
union cavm_i3csmx_queue_size_capability
{
    uint32_t u;
    struct cavm_i3csmx_queue_size_capability_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_20_31        : 12;
        uint32_t ibi_buf_size          : 4;  /**< [ 19: 16](RO) IBI Queue Size
                                                                 This field reflects the configured IBI Queue size (in DWORDS) in Encoded Values.
                                                                 Values:
                                                                 0x0 = 2 DWORDS.
                                                                 0x1 = 4 DWORDS.
                                                                 0x2 = 8 DWORDS.
                                                                 0x3 = 16 DWORDS. */
        uint32_t resp_buf_size         : 4;  /**< [ 15: 12](RO) Response Queue Size
                                                                 This field reflects the configured Response Queue size (in DWORDS) in Encoded Values.
                                                                 Values:
                                                                 0x0 = 2 DWORDS.
                                                                 0x1 = 4 DWORDS.
                                                                 0x2 = 8 DWORDS.
                                                                 0x3 = 16 DWORDS. */
        uint32_t cmd_buf_size          : 4;  /**< [ 11:  8](RO) Command Queue Size

                                                                 This field reflects the configured Command Queue size (in DWORDS) in Encoded Values.
                                                                 Values:
                                                                 0x0 = 2 DWORDS.
                                                                 0x1 = 4 DWORDS.
                                                                 0x2 = 8 DWORDS.
                                                                 0x3 = 16 DWORDS. */
        uint32_t rx_buf_size           : 4;  /**< [  7:  4](RO) Receive Data Buffer Size
                                                                 This field reflects the configured Receive Buffer size (in DWORDS) in Encoded Values.
                                                                 Values:
                                                                 0x0 = 2 DWORDS.
                                                                 0x1 = 4 DWORDS.
                                                                 0x2 = 8 DWORDS.
                                                                 0x3 = 16 DWORDS.
                                                                 0x4 = 32 DWORDS.
                                                                 0x5 = 64 DWORDS. */
        uint32_t tx_buf_size           : 4;  /**< [  3:  0](RO) Transmit Data Buffer Size
                                                                 This field reflects the configured Transmit Buffer size (in DWORDS) in Encoded Values.
                                                                 Values:
                                                                 0x0 = 2 DWORDS.
                                                                 0x1 = 4 DWORDS.
                                                                 0x2 = 8 DWORDS.
                                                                 0x3 = 16 DWORDS.
                                                                 0x4 = 32 DWORDS.
                                                                 0x5 = 64 DWORDS. */
#else /* Word 0 - Little Endian */
        uint32_t tx_buf_size           : 4;  /**< [  3:  0](RO) Transmit Data Buffer Size
                                                                 This field reflects the configured Transmit Buffer size (in DWORDS) in Encoded Values.
                                                                 Values:
                                                                 0x0 = 2 DWORDS.
                                                                 0x1 = 4 DWORDS.
                                                                 0x2 = 8 DWORDS.
                                                                 0x3 = 16 DWORDS.
                                                                 0x4 = 32 DWORDS.
                                                                 0x5 = 64 DWORDS. */
        uint32_t rx_buf_size           : 4;  /**< [  7:  4](RO) Receive Data Buffer Size
                                                                 This field reflects the configured Receive Buffer size (in DWORDS) in Encoded Values.
                                                                 Values:
                                                                 0x0 = 2 DWORDS.
                                                                 0x1 = 4 DWORDS.
                                                                 0x2 = 8 DWORDS.
                                                                 0x3 = 16 DWORDS.
                                                                 0x4 = 32 DWORDS.
                                                                 0x5 = 64 DWORDS. */
        uint32_t cmd_buf_size          : 4;  /**< [ 11:  8](RO) Command Queue Size

                                                                 This field reflects the configured Command Queue size (in DWORDS) in Encoded Values.
                                                                 Values:
                                                                 0x0 = 2 DWORDS.
                                                                 0x1 = 4 DWORDS.
                                                                 0x2 = 8 DWORDS.
                                                                 0x3 = 16 DWORDS. */
        uint32_t resp_buf_size         : 4;  /**< [ 15: 12](RO) Response Queue Size
                                                                 This field reflects the configured Response Queue size (in DWORDS) in Encoded Values.
                                                                 Values:
                                                                 0x0 = 2 DWORDS.
                                                                 0x1 = 4 DWORDS.
                                                                 0x2 = 8 DWORDS.
                                                                 0x3 = 16 DWORDS. */
        uint32_t ibi_buf_size          : 4;  /**< [ 19: 16](RO) IBI Queue Size
                                                                 This field reflects the configured IBI Queue size (in DWORDS) in Encoded Values.
                                                                 Values:
                                                                 0x0 = 2 DWORDS.
                                                                 0x1 = 4 DWORDS.
                                                                 0x2 = 8 DWORDS.
                                                                 0x3 = 16 DWORDS. */
        uint32_t reserved_20_31        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_queue_size_capability_s cn; */
};
typedef union cavm_i3csmx_queue_size_capability cavm_i3csmx_queue_size_capability_t;

static inline uint64_t CAVM_I3CSMX_QUEUE_SIZE_CAPABILITY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_QUEUE_SIZE_CAPABILITY(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40000e8ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_QUEUE_SIZE_CAPABILITY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_QUEUE_SIZE_CAPABILITY(a) cavm_i3csmx_queue_size_capability_t
#define bustype_CAVM_I3CSMX_QUEUE_SIZE_CAPABILITY(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_QUEUE_SIZE_CAPABILITY(a) "I3CSMX_QUEUE_SIZE_CAPABILITY"
#define device_bar_CAVM_I3CSMX_QUEUE_SIZE_CAPABILITY(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_QUEUE_SIZE_CAPABILITY(a) (a)
#define arguments_CAVM_I3CSMX_QUEUE_SIZE_CAPABILITY(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_queue_status_level
 *
 * I3CSM Queue Status Level Register
 * Queue Status Level Register.
 *
 * This register reflects the status level of the Queues in DWC_mipi_i3c.
 */
union cavm_i3csmx_queue_status_level
{
    uint32_t u;
    struct cavm_i3csmx_queue_status_level_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_29_31        : 3;
        uint32_t ibi_sts_cnt           : 5;  /**< [ 28: 24](RO/H) IBI Buffer Status Count.

                                                                 When IC_HAS_IBI_DATA =0, this field is reserved and always returns 0.
                                                                 When IC_HAS_IBI_DATA=1, Contains the number of valid IBI Status entries in the IBI Status Buffer.
                                                                 This field is used in master mode of operation. */
        uint32_t ibi_buf_blr           : 8;  /**< [ 23: 16](RO/H) IBI Buffer Level Value.

                                                                 When IC_HAS_IBI_DATA =0, Contains the number of Valid IBI Status entries in the IBI Buffer.
                                                                 When IC_HAS_IBI_DATA=1, Contains the number of valid IBI Data entries in the IBI Data Buffer.
                                                                 This field is used in master mode of operation. */
        uint32_t resp_buf_blr          : 8;  /**< [ 15:  8](RO/H) Response Buffer Level Value.
                                                                 Contains the number of valid data entries in the response Buffer. */
        uint32_t cmd_queue_empty_loc   : 8;  /**< [  7:  0](RO/H) Command Queue Empty Locations.
                                                                 Contains the number of empty locations in the command Buffer. */
#else /* Word 0 - Little Endian */
        uint32_t cmd_queue_empty_loc   : 8;  /**< [  7:  0](RO/H) Command Queue Empty Locations.
                                                                 Contains the number of empty locations in the command Buffer. */
        uint32_t resp_buf_blr          : 8;  /**< [ 15:  8](RO/H) Response Buffer Level Value.
                                                                 Contains the number of valid data entries in the response Buffer. */
        uint32_t ibi_buf_blr           : 8;  /**< [ 23: 16](RO/H) IBI Buffer Level Value.

                                                                 When IC_HAS_IBI_DATA =0, Contains the number of Valid IBI Status entries in the IBI Buffer.
                                                                 When IC_HAS_IBI_DATA=1, Contains the number of valid IBI Data entries in the IBI Data Buffer.
                                                                 This field is used in master mode of operation. */
        uint32_t ibi_sts_cnt           : 5;  /**< [ 28: 24](RO/H) IBI Buffer Status Count.

                                                                 When IC_HAS_IBI_DATA =0, this field is reserved and always returns 0.
                                                                 When IC_HAS_IBI_DATA=1, Contains the number of valid IBI Status entries in the IBI Status Buffer.
                                                                 This field is used in master mode of operation. */
        uint32_t reserved_29_31        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_queue_status_level_s cn; */
};
typedef union cavm_i3csmx_queue_status_level cavm_i3csmx_queue_status_level_t;

static inline uint64_t CAVM_I3CSMX_QUEUE_STATUS_LEVEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_QUEUE_STATUS_LEVEL(uint64_t a)
{
    if (a<=1)
        return 0x87e0d400004cll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_QUEUE_STATUS_LEVEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_QUEUE_STATUS_LEVEL(a) cavm_i3csmx_queue_status_level_t
#define bustype_CAVM_I3CSMX_QUEUE_STATUS_LEVEL(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_QUEUE_STATUS_LEVEL(a) "I3CSMX_QUEUE_STATUS_LEVEL"
#define device_bar_CAVM_I3CSMX_QUEUE_STATUS_LEVEL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_QUEUE_STATUS_LEVEL(a) (a)
#define arguments_CAVM_I3CSMX_QUEUE_STATUS_LEVEL(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_queue_thld_ctrl
 *
 * I3CSM Queue Thld Ctrl Register
 * Queue Threshold Control Register
 * This register is used to program the threshold settings for the Queues in DWC_mipi_i3c.
 */
union cavm_i3csmx_queue_thld_ctrl
{
    uint32_t u;
    struct cavm_i3csmx_queue_thld_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ibi_status_thld       : 8;  /**< [ 31: 24](R/W) In-Band Interrupt Status Threshold Value.
                                                                 Every In Band Interrupt received (with or without Payload) by I3C controller
                                                                 generates an IBI status. This field controls the number of IBI status
                                                                 entries (or greater) in the IBI queue that trigger the IBI_THLD_STAT interrupt.
                                                                 The valid range is 0 to IC_IBI_BUF_DEPTH-1. The software programs only valid values.
                                                                 A value of 0 sets the threshold for 1 entry, and a value of N sets the threshold for N+1 entries.
                                                                 NOTE: The valid value is only 0 if IBI with payload is selected in the configuration.
                                                                 Each IBI status entry can represent the complete (IBI payload byte size \<=
                                                                 4*IBI_DATA_THLD) IBI payload or a segment (IBI payload byte size  \>
                                                                 4*IBI_DATA_THLD) of the IBI payload. */
        uint32_t ibi_data_thld         : 8;  /**< [ 23: 16](R/W) IBI Data Threshold Value
                                                                 This field represents the IBI data segment size in Dwords (4 bytes). The minimum
                                                                 supported segment size is 1 (4 bytes) and the maximum
                                                                 supported size is IC_IBI_DATA_BUF_DEPTH-1. The IBI_DATA_THLD field enables the
                                                                 slicing of the incoming IBI data and generate individual status and thereby
                                                                 promotes the cut-through operation in reading out the IBI data. */
        uint32_t resp_buf_thld         : 8;  /**< [ 15:  8](R/W) Response Buffer Threshold Value.
                                                                 Controls the number of entries (or greater) in the Response Queue  that trigger
                                                                 the RESP_READY_STAT_INTR interrupt.
                                                                 The valid range is 0 to IC_RESP_BUF_DEPTH-1. The software programs only valid values.
                                                                 A value of 0 sets the threshold for 1 entry, and a value of N sets the threshold for N+1 entries. */
        uint32_t cmd_empty_buf_thld    : 8;  /**< [  7:  0](R/W) Command Buffer Empty Threshold Value.
                                                                 Controls the number of empty locations (or greater) in the Command Queue that
                                                                 trigger CMD_QUEUE_READY_STAT interrupt.
                                                                 The valid range is 0 to IC_CMD_BUF_DEPTH-1. The software programs only valid values.
                                                                 Value of N ranging from 1 to IC_CMD_BUF_DEPTH-1 sets the threshold to N empty locations
                                                                 and a value of 0 sets the threshold to indicate that the queue is completely empty. */
#else /* Word 0 - Little Endian */
        uint32_t cmd_empty_buf_thld    : 8;  /**< [  7:  0](R/W) Command Buffer Empty Threshold Value.
                                                                 Controls the number of empty locations (or greater) in the Command Queue that
                                                                 trigger CMD_QUEUE_READY_STAT interrupt.
                                                                 The valid range is 0 to IC_CMD_BUF_DEPTH-1. The software programs only valid values.
                                                                 Value of N ranging from 1 to IC_CMD_BUF_DEPTH-1 sets the threshold to N empty locations
                                                                 and a value of 0 sets the threshold to indicate that the queue is completely empty. */
        uint32_t resp_buf_thld         : 8;  /**< [ 15:  8](R/W) Response Buffer Threshold Value.
                                                                 Controls the number of entries (or greater) in the Response Queue  that trigger
                                                                 the RESP_READY_STAT_INTR interrupt.
                                                                 The valid range is 0 to IC_RESP_BUF_DEPTH-1. The software programs only valid values.
                                                                 A value of 0 sets the threshold for 1 entry, and a value of N sets the threshold for N+1 entries. */
        uint32_t ibi_data_thld         : 8;  /**< [ 23: 16](R/W) IBI Data Threshold Value
                                                                 This field represents the IBI data segment size in Dwords (4 bytes). The minimum
                                                                 supported segment size is 1 (4 bytes) and the maximum
                                                                 supported size is IC_IBI_DATA_BUF_DEPTH-1. The IBI_DATA_THLD field enables the
                                                                 slicing of the incoming IBI data and generate individual status and thereby
                                                                 promotes the cut-through operation in reading out the IBI data. */
        uint32_t ibi_status_thld       : 8;  /**< [ 31: 24](R/W) In-Band Interrupt Status Threshold Value.
                                                                 Every In Band Interrupt received (with or without Payload) by I3C controller
                                                                 generates an IBI status. This field controls the number of IBI status
                                                                 entries (or greater) in the IBI queue that trigger the IBI_THLD_STAT interrupt.
                                                                 The valid range is 0 to IC_IBI_BUF_DEPTH-1. The software programs only valid values.
                                                                 A value of 0 sets the threshold for 1 entry, and a value of N sets the threshold for N+1 entries.
                                                                 NOTE: The valid value is only 0 if IBI with payload is selected in the configuration.
                                                                 Each IBI status entry can represent the complete (IBI payload byte size \<=
                                                                 4*IBI_DATA_THLD) IBI payload or a segment (IBI payload byte size  \>
                                                                 4*IBI_DATA_THLD) of the IBI payload. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_queue_thld_ctrl_s cn; */
};
typedef union cavm_i3csmx_queue_thld_ctrl cavm_i3csmx_queue_thld_ctrl_t;

static inline uint64_t CAVM_I3CSMX_QUEUE_THLD_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_QUEUE_THLD_CTRL(uint64_t a)
{
    if (a<=1)
        return 0x87e0d400001cll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_QUEUE_THLD_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_QUEUE_THLD_CTRL(a) cavm_i3csmx_queue_thld_ctrl_t
#define bustype_CAVM_I3CSMX_QUEUE_THLD_CTRL(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_QUEUE_THLD_CTRL(a) "I3CSMX_QUEUE_THLD_CTRL"
#define device_bar_CAVM_I3CSMX_QUEUE_THLD_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_QUEUE_THLD_CTRL(a) (a)
#define arguments_CAVM_I3CSMX_QUEUE_THLD_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_reset_ctrl
 *
 * I3CSM Reset Ctrl Register
 * This Register is used for general software reset and for individual buffer reset.
 */
union cavm_i3csmx_reset_ctrl
{
    uint32_t u;
    struct cavm_i3csmx_reset_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_6_31         : 26;
        uint32_t ibi_queue_rst         : 1;  /**< [  5:  5](R/W) IBI Queue Software Reset.
                                                                 This bit is only used in master mode of operation.
                                                                 Write 1'b1 to this bit to exercise IBI Queue reset
                                                                 This bit is cleared automatically once the IBI Queue reset is completed. */
        uint32_t rx_fifo_rst           : 1;  /**< [  4:  4](R/W) Receive Buffer Software Reset.
                                                                 Write 1'b1 to this bit to exercise Receive Buffer reset.
                                                                 This bit is cleared automatically once the Receive buffer reset is completed. */
        uint32_t tx_fifo_rst           : 1;  /**< [  3:  3](R/W) Transmit Buffer Software Reset
                                                                 Write 1'b1 to this bit to exercise Transmit Buffer reset.
                                                                 This bit is cleared automatically once the Transmit Buffer reset is completed. */
        uint32_t resp_queue_rst        : 1;  /**< [  2:  2](R/W) Response Queue Software Reset
                                                                 Write 1'b1 to this bit to exercise Response Queue reset.
                                                                 This bit is cleared automatically once the Response Queue reset is complete. */
        uint32_t cmd_queue_rst         : 1;  /**< [  1:  1](R/W) Command Queue Software Reset

                                                                 Write 1'b1 to this bit to exercise Command Queue reset.
                                                                 This bit is cleared automatically once the Command Queue reset is complete. */
        uint32_t soft_rst              : 1;  /**< [  0:  0](R/W) Core Software Reset.

                                                                 Write 1'b1 to this bit to exercise software reset.
                                                                 This resets all Buffers - Receive, Transmit, Command, and Response
                                                                 This bit is cleared automatically once the core reset is complete. */
#else /* Word 0 - Little Endian */
        uint32_t soft_rst              : 1;  /**< [  0:  0](R/W) Core Software Reset.

                                                                 Write 1'b1 to this bit to exercise software reset.
                                                                 This resets all Buffers - Receive, Transmit, Command, and Response
                                                                 This bit is cleared automatically once the core reset is complete. */
        uint32_t cmd_queue_rst         : 1;  /**< [  1:  1](R/W) Command Queue Software Reset

                                                                 Write 1'b1 to this bit to exercise Command Queue reset.
                                                                 This bit is cleared automatically once the Command Queue reset is complete. */
        uint32_t resp_queue_rst        : 1;  /**< [  2:  2](R/W) Response Queue Software Reset
                                                                 Write 1'b1 to this bit to exercise Response Queue reset.
                                                                 This bit is cleared automatically once the Response Queue reset is complete. */
        uint32_t tx_fifo_rst           : 1;  /**< [  3:  3](R/W) Transmit Buffer Software Reset
                                                                 Write 1'b1 to this bit to exercise Transmit Buffer reset.
                                                                 This bit is cleared automatically once the Transmit Buffer reset is completed. */
        uint32_t rx_fifo_rst           : 1;  /**< [  4:  4](R/W) Receive Buffer Software Reset.
                                                                 Write 1'b1 to this bit to exercise Receive Buffer reset.
                                                                 This bit is cleared automatically once the Receive buffer reset is completed. */
        uint32_t ibi_queue_rst         : 1;  /**< [  5:  5](R/W) IBI Queue Software Reset.
                                                                 This bit is only used in master mode of operation.
                                                                 Write 1'b1 to this bit to exercise IBI Queue reset
                                                                 This bit is cleared automatically once the IBI Queue reset is completed. */
        uint32_t reserved_6_31         : 26;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_reset_ctrl_s cn; */
};
typedef union cavm_i3csmx_reset_ctrl cavm_i3csmx_reset_ctrl_t;

static inline uint64_t CAVM_I3CSMX_RESET_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_RESET_CTRL(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000034ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_RESET_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_RESET_CTRL(a) cavm_i3csmx_reset_ctrl_t
#define bustype_CAVM_I3CSMX_RESET_CTRL(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_RESET_CTRL(a) "I3CSMX_RESET_CTRL"
#define device_bar_CAVM_I3CSMX_RESET_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_RESET_CTRL(a) (a)
#define arguments_CAVM_I3CSMX_RESET_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_response_queue_port
 *
 * I3CSM Response Queue Port Register
 * In Master mode of operation:
 * The response status for each Command is written into the Response Queue by the
 * controller if ROC (Response On Completion) bit is set or
 * if transfer error occurs. The Response Queue can be read through this register.
 * It is expected that this register
 * is be read whenever RESP_READY_STAT_INTR bit is set in INTR_STATUS register. Not
 * doing so might result in execution of new commands getting stalled. A new command is
 * executed only if there is space available in Response Queue to push the
 * corresponding response.
 *
 * In Slave mode of operation:
 * The response status for each Command is written into the Response Queue. The
 * Response Queue can be read through this register.
 * It is expected that this register is read whenever RESP_READY_STAT_INTR bit is set
 * in INTR_STATUS register. Not doing so might result in execution of new commands
 * getting stalled. A new command is executed only if there is space available in
 * Response Queue to push
 * the corresponding response. Reset value of this register is not defined as it is
 * internally mapped to a queue.
 */
union cavm_i3csmx_response_queue_port
{
    uint32_t u;
    struct cavm_i3csmx_response_queue_port_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t response              : 32; /**< [ 31:  0](RO) 32 bit Response */
#else /* Word 0 - Little Endian */
        uint32_t response              : 32; /**< [ 31:  0](RO) 32 bit Response */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_response_queue_port_s cn; */
};
typedef union cavm_i3csmx_response_queue_port cavm_i3csmx_response_queue_port_t;

static inline uint64_t CAVM_I3CSMX_RESPONSE_QUEUE_PORT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_RESPONSE_QUEUE_PORT(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000010ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_RESPONSE_QUEUE_PORT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_RESPONSE_QUEUE_PORT(a) cavm_i3csmx_response_queue_port_t
#define bustype_CAVM_I3CSMX_RESPONSE_QUEUE_PORT(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_RESPONSE_QUEUE_PORT(a) "I3CSMX_RESPONSE_QUEUE_PORT"
#define device_bar_CAVM_I3CSMX_RESPONSE_QUEUE_PORT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_RESPONSE_QUEUE_PORT(a) (a)
#define arguments_CAVM_I3CSMX_RESPONSE_QUEUE_PORT(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_scl_ext_lcnt_timing
 *
 * I3CSM Scl Ext Lcnt Timing Register
 * SCL Extended Low Count Timing Register.
 *
 * This register sets the extended low periods for the I3C transfers to allow the low
 * data rates of the Slave devices
 * as specified in GETMXDS CCC.The Speed field of Transfer command
 * (COMMAND_QUEUE_PORT_TRANSFER_COMMAND) decides the selection
 * of extended low period to achieve the lower data rate for the transfers to Slave devices.
 *  SDR1 = Uses I3C_EXT_LCNT_1 field for the data transfer.
 *  SDR2 = Uses I3C_EXT_LCNT_2 field for the data transfer.
 *  SDR3 = Uses I3C_EXT_LCNT_3 field for the data transfer.
 *  SDR4 = Uses I3C_EXT_LCNT_4 field for the data transfer.
 */
union cavm_i3csmx_scl_ext_lcnt_timing
{
    uint32_t u;
    struct cavm_i3csmx_scl_ext_lcnt_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t i3c_ext_lcnt_4        : 8;  /**< [ 31: 24](R/W) I3C Extended Low Count Register 4

                                                                 SDR4 uses this register field for data transfer. */
        uint32_t i3c_ext_lcnt_3        : 8;  /**< [ 23: 16](R/W) I3C Extended Low Count Register 3

                                                                 SDR3 uses this register field for data transfer. */
        uint32_t i3c_ext_lcnt_2        : 8;  /**< [ 15:  8](R/W) I3C Extended Low Count Register 2

                                                                 SDR2 uses this register field for data transfer. */
        uint32_t i3c_ext_lcnt_1        : 8;  /**< [  7:  0](R/W) I3C Extended Low Count Register 1

                                                                 SDR1 uses this register field for data transfer. */
#else /* Word 0 - Little Endian */
        uint32_t i3c_ext_lcnt_1        : 8;  /**< [  7:  0](R/W) I3C Extended Low Count Register 1

                                                                 SDR1 uses this register field for data transfer. */
        uint32_t i3c_ext_lcnt_2        : 8;  /**< [ 15:  8](R/W) I3C Extended Low Count Register 2

                                                                 SDR2 uses this register field for data transfer. */
        uint32_t i3c_ext_lcnt_3        : 8;  /**< [ 23: 16](R/W) I3C Extended Low Count Register 3

                                                                 SDR3 uses this register field for data transfer. */
        uint32_t i3c_ext_lcnt_4        : 8;  /**< [ 31: 24](R/W) I3C Extended Low Count Register 4

                                                                 SDR4 uses this register field for data transfer. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_scl_ext_lcnt_timing_s cn; */
};
typedef union cavm_i3csmx_scl_ext_lcnt_timing cavm_i3csmx_scl_ext_lcnt_timing_t;

static inline uint64_t CAVM_I3CSMX_SCL_EXT_LCNT_TIMING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_SCL_EXT_LCNT_TIMING(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40000c8ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_SCL_EXT_LCNT_TIMING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_SCL_EXT_LCNT_TIMING(a) cavm_i3csmx_scl_ext_lcnt_timing_t
#define bustype_CAVM_I3CSMX_SCL_EXT_LCNT_TIMING(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_SCL_EXT_LCNT_TIMING(a) "I3CSMX_SCL_EXT_LCNT_TIMING"
#define device_bar_CAVM_I3CSMX_SCL_EXT_LCNT_TIMING(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_SCL_EXT_LCNT_TIMING(a) (a)
#define arguments_CAVM_I3CSMX_SCL_EXT_LCNT_TIMING(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_scl_ext_termn_lcnt_timing
 *
 * I3CSM Scl Ext Termn Lcnt Timing Register
 * SCL Termination Bit Low Count Timing Register
 *
 * This register is used to extend the SCL Low period for Read Termination Bit.
 */
union cavm_i3csmx_scl_ext_termn_lcnt_timing
{
    uint32_t u;
    struct cavm_i3csmx_scl_ext_termn_lcnt_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t stop_hld_cnt          : 4;  /**< [ 31: 28](R/W) STOP HOLD Count.

                                                                 Stop Hold Count in terms of core_clks which is used for generation of Stop Hold
                                                                 generation in Controller Mode. */
        uint32_t reserved_4_27         : 24;
        uint32_t i3c_ext_termn_lcnt    : 4;  /**< [  3:  0](R/W) I3C Read Termination Bit Low count.

                                                                 Extended I3C Read Termination Bit low count for I3C Read transfers.
                                                                 Effective Termination-Bit Low Period is derived based on the SDR speed as shown below
                                                                  SDR0 speed = I3C_PP_LCNT + I3C_EXT_TERMN_LCNT.
                                                                  SDR1 speed = I3C_EXT_LCNT_1 + I3C_EXT_TERMN_LCNT.
                                                                  SDR2 speed = I3C_EXT_LCNT_2 + I3C_EXT_TERMN_LCNT.
                                                                  SDR3 speed = I3C_EXT_LCNT_3 + I3C_EXT_TERMN_LCNT.
                                                                  SDR4 speed = I3C_EXT_LCNT_4 + I3C_EXT_TERMN_LCNT. */
#else /* Word 0 - Little Endian */
        uint32_t i3c_ext_termn_lcnt    : 4;  /**< [  3:  0](R/W) I3C Read Termination Bit Low count.

                                                                 Extended I3C Read Termination Bit low count for I3C Read transfers.
                                                                 Effective Termination-Bit Low Period is derived based on the SDR speed as shown below
                                                                  SDR0 speed = I3C_PP_LCNT + I3C_EXT_TERMN_LCNT.
                                                                  SDR1 speed = I3C_EXT_LCNT_1 + I3C_EXT_TERMN_LCNT.
                                                                  SDR2 speed = I3C_EXT_LCNT_2 + I3C_EXT_TERMN_LCNT.
                                                                  SDR3 speed = I3C_EXT_LCNT_3 + I3C_EXT_TERMN_LCNT.
                                                                  SDR4 speed = I3C_EXT_LCNT_4 + I3C_EXT_TERMN_LCNT. */
        uint32_t reserved_4_27         : 24;
        uint32_t stop_hld_cnt          : 4;  /**< [ 31: 28](R/W) STOP HOLD Count.

                                                                 Stop Hold Count in terms of core_clks which is used for generation of Stop Hold
                                                                 generation in Controller Mode. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_scl_ext_termn_lcnt_timing_s cn; */
};
typedef union cavm_i3csmx_scl_ext_termn_lcnt_timing cavm_i3csmx_scl_ext_termn_lcnt_timing_t;

static inline uint64_t CAVM_I3CSMX_SCL_EXT_TERMN_LCNT_TIMING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_SCL_EXT_TERMN_LCNT_TIMING(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40000ccll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_SCL_EXT_TERMN_LCNT_TIMING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_SCL_EXT_TERMN_LCNT_TIMING(a) cavm_i3csmx_scl_ext_termn_lcnt_timing_t
#define bustype_CAVM_I3CSMX_SCL_EXT_TERMN_LCNT_TIMING(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_SCL_EXT_TERMN_LCNT_TIMING(a) "I3CSMX_SCL_EXT_TERMN_LCNT_TIMING"
#define device_bar_CAVM_I3CSMX_SCL_EXT_TERMN_LCNT_TIMING(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_SCL_EXT_TERMN_LCNT_TIMING(a) (a)
#define arguments_CAVM_I3CSMX_SCL_EXT_TERMN_LCNT_TIMING(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_scl_i2c_fm_timing
 *
 * I3CSM Scl I2c Fm Timing Register
 * SCL I2C Fast Mode Timing Register
 *
 * This register sets the SCL clock high period and low period count for I2C Fast Mode
 * transfers. The count value
 * takes the number of core_clks to maintain the I/O SCL Low/High period timing.
 */
union cavm_i3csmx_scl_i2c_fm_timing
{
    uint32_t u;
    struct cavm_i3csmx_scl_i2c_fm_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t i2c_fm_hcnt           : 16; /**< [ 31: 16](R/W) I2C Fast Mode High Count

                                                                 The SCL open-drain high count timing for I2C fast mode transfers. */
        uint32_t i2c_fm_lcnt           : 16; /**< [ 15:  0](R/W) I2C Fast Mode Low Count

                                                                 The SCL open-drain low count timing for I2C fast mode transfers. */
#else /* Word 0 - Little Endian */
        uint32_t i2c_fm_lcnt           : 16; /**< [ 15:  0](R/W) I2C Fast Mode Low Count

                                                                 The SCL open-drain low count timing for I2C fast mode transfers. */
        uint32_t i2c_fm_hcnt           : 16; /**< [ 31: 16](R/W) I2C Fast Mode High Count

                                                                 The SCL open-drain high count timing for I2C fast mode transfers. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_scl_i2c_fm_timing_s cn; */
};
typedef union cavm_i3csmx_scl_i2c_fm_timing cavm_i3csmx_scl_i2c_fm_timing_t;

static inline uint64_t CAVM_I3CSMX_SCL_I2C_FM_TIMING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_SCL_I2C_FM_TIMING(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40000bcll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_SCL_I2C_FM_TIMING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_SCL_I2C_FM_TIMING(a) cavm_i3csmx_scl_i2c_fm_timing_t
#define bustype_CAVM_I3CSMX_SCL_I2C_FM_TIMING(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_SCL_I2C_FM_TIMING(a) "I3CSMX_SCL_I2C_FM_TIMING"
#define device_bar_CAVM_I3CSMX_SCL_I2C_FM_TIMING(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_SCL_I2C_FM_TIMING(a) (a)
#define arguments_CAVM_I3CSMX_SCL_I2C_FM_TIMING(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_scl_i2c_fmp_timing
 *
 * I3CSM Scl I2c Fmp Timing Register
 * SCL I2C Fast Mode Plus Timing Register
 *
 * This register sets the SCL clock high period and low period count for I2C Fast Mode
 * Plus transfers. The count value
 * takes the number of core_clks to maintain the I/O SCL Low/High period timing.
 */
union cavm_i3csmx_scl_i2c_fmp_timing
{
    uint32_t u;
    struct cavm_i3csmx_scl_i2c_fmp_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t i2c_fmp_hcnt          : 8;  /**< [ 23: 16](R/W) I2C Fast Mode Plus High Count

                                                                 The SCL open-drain high count timing for I2C fast mode plus transfers. */
        uint32_t i2c_fmp_lcnt          : 16; /**< [ 15:  0](R/W) I2C Fast Mode Plus Low Count

                                                                 The SCL open-drain low count timing for I2C fast mode plus transfers. */
#else /* Word 0 - Little Endian */
        uint32_t i2c_fmp_lcnt          : 16; /**< [ 15:  0](R/W) I2C Fast Mode Plus Low Count

                                                                 The SCL open-drain low count timing for I2C fast mode plus transfers. */
        uint32_t i2c_fmp_hcnt          : 8;  /**< [ 23: 16](R/W) I2C Fast Mode Plus High Count

                                                                 The SCL open-drain high count timing for I2C fast mode plus transfers. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_scl_i2c_fmp_timing_s cn; */
};
typedef union cavm_i3csmx_scl_i2c_fmp_timing cavm_i3csmx_scl_i2c_fmp_timing_t;

static inline uint64_t CAVM_I3CSMX_SCL_I2C_FMP_TIMING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_SCL_I2C_FMP_TIMING(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40000c0ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_SCL_I2C_FMP_TIMING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_SCL_I2C_FMP_TIMING(a) cavm_i3csmx_scl_i2c_fmp_timing_t
#define bustype_CAVM_I3CSMX_SCL_I2C_FMP_TIMING(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_SCL_I2C_FMP_TIMING(a) "I3CSMX_SCL_I2C_FMP_TIMING"
#define device_bar_CAVM_I3CSMX_SCL_I2C_FMP_TIMING(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_SCL_I2C_FMP_TIMING(a) (a)
#define arguments_CAVM_I3CSMX_SCL_I2C_FMP_TIMING(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_scl_i3c_od_timing
 *
 * I3CSM Scl I3c Od Timing Register
 * SCL I3C Open Drain Timing Register
 *
 * This register sets the SCL clock high period and low period count for I3C Open Drain
 * transfers. The count value
 * takes the number of core_clks to maintain the I/O SCL High/Low Period timing.
 */
union cavm_i3csmx_scl_i3c_od_timing
{
    uint32_t u;
    struct cavm_i3csmx_scl_i3c_od_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t i3c_od_hcnt           : 8;  /**< [ 23: 16](R/W) I3C Open Drain High Count.

                                                                 SCL open-drain High count (I3C) for I3C transfers targeted to I3C devices. */
        uint32_t reserved_8_15         : 8;
        uint32_t i3c_od_lcnt           : 8;  /**< [  7:  0](R/W) I3C Open Drain Low Count.

                                                                 SCL Open-drain low count for I3C transfers targeted to I3C devices. */
#else /* Word 0 - Little Endian */
        uint32_t i3c_od_lcnt           : 8;  /**< [  7:  0](R/W) I3C Open Drain Low Count.

                                                                 SCL Open-drain low count for I3C transfers targeted to I3C devices. */
        uint32_t reserved_8_15         : 8;
        uint32_t i3c_od_hcnt           : 8;  /**< [ 23: 16](R/W) I3C Open Drain High Count.

                                                                 SCL open-drain High count (I3C) for I3C transfers targeted to I3C devices. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_scl_i3c_od_timing_s cn; */
};
typedef union cavm_i3csmx_scl_i3c_od_timing cavm_i3csmx_scl_i3c_od_timing_t;

static inline uint64_t CAVM_I3CSMX_SCL_I3C_OD_TIMING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_SCL_I3C_OD_TIMING(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40000b4ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_SCL_I3C_OD_TIMING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_SCL_I3C_OD_TIMING(a) cavm_i3csmx_scl_i3c_od_timing_t
#define bustype_CAVM_I3CSMX_SCL_I3C_OD_TIMING(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_SCL_I3C_OD_TIMING(a) "I3CSMX_SCL_I3C_OD_TIMING"
#define device_bar_CAVM_I3CSMX_SCL_I3C_OD_TIMING(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_SCL_I3C_OD_TIMING(a) (a)
#define arguments_CAVM_I3CSMX_SCL_I3C_OD_TIMING(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_scl_i3c_pp_timing
 *
 * I3CSM Scl I3c Pp Timing Register
 * SCL I3C Push Pull Timing Register
 *
 * This register sets the SCL clock high period and low period count for I3C Push Pull
 * transfers. The count value
 * takes the number of core_clks to maintain the I/O SCL High/Low Period timing.
 */
union cavm_i3csmx_scl_i3c_pp_timing
{
    uint32_t u;
    struct cavm_i3csmx_scl_i3c_pp_timing_s
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
    /* struct cavm_i3csmx_scl_i3c_pp_timing_s cn; */
};
typedef union cavm_i3csmx_scl_i3c_pp_timing cavm_i3csmx_scl_i3c_pp_timing_t;

static inline uint64_t CAVM_I3CSMX_SCL_I3C_PP_TIMING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_SCL_I3C_PP_TIMING(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40000b8ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_SCL_I3C_PP_TIMING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_SCL_I3C_PP_TIMING(a) cavm_i3csmx_scl_i3c_pp_timing_t
#define bustype_CAVM_I3CSMX_SCL_I3C_PP_TIMING(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_SCL_I3C_PP_TIMING(a) "I3CSMX_SCL_I3C_PP_TIMING"
#define device_bar_CAVM_I3CSMX_SCL_I3C_PP_TIMING(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_SCL_I3C_PP_TIMING(a) (a)
#define arguments_CAVM_I3CSMX_SCL_I3C_PP_TIMING(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_sda_hold_switch_dly_timing
 *
 * I3CSM Sda Hold Switch Dly Timing Register
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
union cavm_i3csmx_sda_hold_switch_dly_timing
{
    uint32_t u;
    struct cavm_i3csmx_sda_hold_switch_dly_timing_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_19_31        : 13;
        uint32_t sda_tx_hold           : 3;  /**< [ 18: 16](R/W) This field controls the hold time (in term of the core clock period) of the
                                                                 transmit data (SDA) with
                                                                 respect to the SCL edge in FM FM+ SDR and DDR speed mode of operations.
                                                                 This field is not applicable for the ternary speed modes.
                                                                 The valid values are 1 to 7. Others are Reserved. */
        uint32_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_15         : 16;
        uint32_t sda_tx_hold           : 3;  /**< [ 18: 16](R/W) This field controls the hold time (in term of the core clock period) of the
                                                                 transmit data (SDA) with
                                                                 respect to the SCL edge in FM FM+ SDR and DDR speed mode of operations.
                                                                 This field is not applicable for the ternary speed modes.
                                                                 The valid values are 1 to 7. Others are Reserved. */
        uint32_t reserved_19_31        : 13;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_sda_hold_switch_dly_timing_s cn; */
};
typedef union cavm_i3csmx_sda_hold_switch_dly_timing cavm_i3csmx_sda_hold_switch_dly_timing_t;

static inline uint64_t CAVM_I3CSMX_SDA_HOLD_SWITCH_DLY_TIMING(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_SDA_HOLD_SWITCH_DLY_TIMING(uint64_t a)
{
    if (a<=1)
        return 0x87e0d40000d0ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_SDA_HOLD_SWITCH_DLY_TIMING", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_SDA_HOLD_SWITCH_DLY_TIMING(a) cavm_i3csmx_sda_hold_switch_dly_timing_t
#define bustype_CAVM_I3CSMX_SDA_HOLD_SWITCH_DLY_TIMING(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_SDA_HOLD_SWITCH_DLY_TIMING(a) "I3CSMX_SDA_HOLD_SWITCH_DLY_TIMING"
#define device_bar_CAVM_I3CSMX_SDA_HOLD_SWITCH_DLY_TIMING(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_SDA_HOLD_SWITCH_DLY_TIMING(a) (a)
#define arguments_CAVM_I3CSMX_SDA_HOLD_SWITCH_DLY_TIMING(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_slv_char_ctrl
 *
 * I3CSM Slv Char Ctrl Register
 * I3C Slave Characteristic Register.
 *
 * This register is used in slave mode of operation.
 */
union cavm_i3csmx_slv_char_ctrl
{
    uint32_t u;
    struct cavm_i3csmx_slv_char_ctrl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t hdr_cap               : 8;  /**< [ 23: 16](RO) I3C Device HDR Capability Register Value.
                                                                 HDR_CAP[2] = HDR Mode 2 (IC_SPEED_HDR_TS)
                                                                 HDR_CAP[1] = HDR Mode 1 (IC_SPEED_HDR_TS)
                                                                 HDR_CAP[1] = HDR Mode 0 (IC_SPEED_HDR_DDR)
                                                                 Others - Reserved */
        uint32_t dcr                   : 8;  /**< [ 15:  8](R/W) I3C Device Characteristic Value. */
        uint32_t device_role           : 2;  /**< [  7:  6](R/W) Device Role field in Bus Characteristic Register (BCR[7:6]).
                                                                 This field is set to 1 by default if configuration parameter IC_DEVICE_ROLE is
                                                                 set to 3(Secondary Master).
                                                                 The application is not expected to change the role once configured. But if the
                                                                 application chooses to operate the secondary master configuration
                                                                 (IC_DEVICE_ROLE==3) as "Slave Only" through programming, then the Device Role
                                                                 can be overwritten as Slave (BCR[7:6] = 2'b00).
                                                                 The field is Reset to its default value upon HW/SW Reset. SW must program the
                                                                 values again after issuing reset. */
        uint32_t hdr_capable           : 1;  /**< [  5:  5](R/W) SDR Only or SDR and HDR Capable field in Bus Characteristic Register (BCR[5]).
                                                                 This bit is set if any of the configuration parameter IC_SPEED_HDR_TS or
                                                                 IC_SPEED_HDR_DDR is set to 1.
                                                                 It is to be noted that the programming this field to 0 does not Disable the HDR
                                                                 Feature itself. This bit can be modified by the application if it does not want
                                                                 to advertize Slaves HDR capability to Master.
                                                                 The field is Reset to its default value upon HW/SW Reset. SW must program the
                                                                 values again after issuing reset. */
        uint32_t bridge_identifier     : 1;  /**< [  4:  4](RO) Bridge Identifier field in Bus Characteristic Register (BCR[4]).
                                                                 This bit is set if configuration parameter IC_SLV_BRIDGE is set to 1. */
        uint32_t offline_capable       : 1;  /**< [  3:  3](RO) Offline Capable field in Bus Characteristic Register (BCR[3]).
                                                                 This bit is set if configuration parameter IC_SLV_OFFLINE_CAP is set to 1. */
        uint32_t ibi_payload           : 1;  /**< [  2:  2](RO) IBI Payload field in Bus Characteristic Register (BCR[2]).
                                                                 This bit is set if configuration parameter IC_SLV_IBI_DATA is set to 1. */
        uint32_t ibi_request_capable   : 1;  /**< [  1:  1](RO) IBI Request Capable field in Bus Characteristic Register (BCR[1]).
                                                                 This bit is set if configuration parameter IC_SLV_IBI is set to 1. */
        uint32_t max_data_speed_limit  : 1;  /**< [  0:  0](R/W) Max Data Speed Limitation field in Bus Characteristic Register (BCR[0]).
                                                                 Specifies whether or not DWC_mipi_i3c has maximum data speed limitation.
                                                                 If this bit is set to 0, controller NACK's the GETMXDS CCC sent by Master.
                                                                 If this bit is set to 1, controller returns the data in MAX_DATA_SPEED and
                                                                 MAX_READ_TURNAROUND register in response the GETMXDS CCC sent by Master.
                                                                 The field is Reset to its default value upon HW/SW Reset. SW must program the
                                                                 values again after issuing reset. */
#else /* Word 0 - Little Endian */
        uint32_t max_data_speed_limit  : 1;  /**< [  0:  0](R/W) Max Data Speed Limitation field in Bus Characteristic Register (BCR[0]).
                                                                 Specifies whether or not DWC_mipi_i3c has maximum data speed limitation.
                                                                 If this bit is set to 0, controller NACK's the GETMXDS CCC sent by Master.
                                                                 If this bit is set to 1, controller returns the data in MAX_DATA_SPEED and
                                                                 MAX_READ_TURNAROUND register in response the GETMXDS CCC sent by Master.
                                                                 The field is Reset to its default value upon HW/SW Reset. SW must program the
                                                                 values again after issuing reset. */
        uint32_t ibi_request_capable   : 1;  /**< [  1:  1](RO) IBI Request Capable field in Bus Characteristic Register (BCR[1]).
                                                                 This bit is set if configuration parameter IC_SLV_IBI is set to 1. */
        uint32_t ibi_payload           : 1;  /**< [  2:  2](RO) IBI Payload field in Bus Characteristic Register (BCR[2]).
                                                                 This bit is set if configuration parameter IC_SLV_IBI_DATA is set to 1. */
        uint32_t offline_capable       : 1;  /**< [  3:  3](RO) Offline Capable field in Bus Characteristic Register (BCR[3]).
                                                                 This bit is set if configuration parameter IC_SLV_OFFLINE_CAP is set to 1. */
        uint32_t bridge_identifier     : 1;  /**< [  4:  4](RO) Bridge Identifier field in Bus Characteristic Register (BCR[4]).
                                                                 This bit is set if configuration parameter IC_SLV_BRIDGE is set to 1. */
        uint32_t hdr_capable           : 1;  /**< [  5:  5](R/W) SDR Only or SDR and HDR Capable field in Bus Characteristic Register (BCR[5]).
                                                                 This bit is set if any of the configuration parameter IC_SPEED_HDR_TS or
                                                                 IC_SPEED_HDR_DDR is set to 1.
                                                                 It is to be noted that the programming this field to 0 does not Disable the HDR
                                                                 Feature itself. This bit can be modified by the application if it does not want
                                                                 to advertize Slaves HDR capability to Master.
                                                                 The field is Reset to its default value upon HW/SW Reset. SW must program the
                                                                 values again after issuing reset. */
        uint32_t device_role           : 2;  /**< [  7:  6](R/W) Device Role field in Bus Characteristic Register (BCR[7:6]).
                                                                 This field is set to 1 by default if configuration parameter IC_DEVICE_ROLE is
                                                                 set to 3(Secondary Master).
                                                                 The application is not expected to change the role once configured. But if the
                                                                 application chooses to operate the secondary master configuration
                                                                 (IC_DEVICE_ROLE==3) as "Slave Only" through programming, then the Device Role
                                                                 can be overwritten as Slave (BCR[7:6] = 2'b00).
                                                                 The field is Reset to its default value upon HW/SW Reset. SW must program the
                                                                 values again after issuing reset. */
        uint32_t dcr                   : 8;  /**< [ 15:  8](R/W) I3C Device Characteristic Value. */
        uint32_t hdr_cap               : 8;  /**< [ 23: 16](RO) I3C Device HDR Capability Register Value.
                                                                 HDR_CAP[2] = HDR Mode 2 (IC_SPEED_HDR_TS)
                                                                 HDR_CAP[1] = HDR Mode 1 (IC_SPEED_HDR_TS)
                                                                 HDR_CAP[1] = HDR Mode 0 (IC_SPEED_HDR_DDR)
                                                                 Others - Reserved */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_slv_char_ctrl_s cn; */
};
typedef union cavm_i3csmx_slv_char_ctrl cavm_i3csmx_slv_char_ctrl_t;

static inline uint64_t CAVM_I3CSMX_SLV_CHAR_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_SLV_CHAR_CTRL(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000078ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_SLV_CHAR_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_SLV_CHAR_CTRL(a) cavm_i3csmx_slv_char_ctrl_t
#define bustype_CAVM_I3CSMX_SLV_CHAR_CTRL(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_SLV_CHAR_CTRL(a) "I3CSMX_SLV_CHAR_CTRL"
#define device_bar_CAVM_I3CSMX_SLV_CHAR_CTRL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_SLV_CHAR_CTRL(a) (a)
#define arguments_CAVM_I3CSMX_SLV_CHAR_CTRL(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_slv_event_status
 *
 * I3CSM Slv Event Status Register
 * This register indicates the status/values of some events/controls that are relavant
 * to slave mode of operation. These values are set by Master initiated CCCs.
 */
union cavm_i3csmx_slv_event_status
{
    uint32_t u;
    struct cavm_i3csmx_slv_event_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_8_31         : 24;
        uint32_t mwl_updated           : 1;  /**< [  7:  7](R/W1C) MWL Updated Status.

                                                                 This bit indicates a SETMWL CCC is received by the slave. The updated MWL value
                                                                 can be read from SLV_MAX_LEN register.
                                                                 This status can be cleared by writing 1'b1 to this field after reading the updated MWL. */
        uint32_t mrl_updated           : 1;  /**< [  6:  6](R/W1C) MRL Updated Status.

                                                                 This bit indicates a SETMRL CCC is received by the slave. The updated MRL value
                                                                 can be read from SLV_MAX_LEN register.
                                                                 This status can be cleared by writing 1'b1 to this field after reading the updated MRL. */
        uint32_t activity_state        : 2;  /**< [  5:  4](RO) Activity State Status.

                                                                  ENTAS0 - 00
                                                                  ENTAS1 - 01
                                                                  ENTAS2 - 10
                                                                  ENTAS3 - 11

                                                                 This bit reflects the Activity State of slave set by the Master. */
        uint32_t hj_en                 : 1;  /**< [  3:  3](R/W) Hot-Join Interrupt Enable

                                                                 This bit reflects whether the Hot-Join Request Interrupts are allowed on the I3C bus or not.
                                                                 The Slave application can choose to Disable HJ Capability of the SLave
                                                                 Controller (if selected) by setting this field to 0 before 'Enabling' the
                                                                 Controller. When done so, the Slave does not initiate Hot Join and takes part in
                                                                 Address Assignment without initiating Hot Join.
                                                                 If this field is NOT set to 0 by slave application, it can be set or cleared by
                                                                 the I3C Master through ENEC or DISEC CCCs.
                                                                 Once Disabled by software, CCCs do not have any effect on this field. */
        uint32_t reserved_2            : 1;
        uint32_t mr_en                 : 1;  /**< [  1:  1](RO) Master Request Enable.

                                                                 In Slave mode of operation, this bit reflects whether the controller can
                                                                 initiate the Master Request on the I3C bus or not.
                                                                 Usually, this bit is set or cleared by the I3C Master through ENEC or DISEC CCC. */
        uint32_t sir_en                : 1;  /**< [  0:  0](RO) Slave Interrupt Request Enable.

                                                                 In Slave mode of operation, this bit reflects whether the controller can
                                                                 initiate the SIR on the I3C bus or not.
                                                                 Usually, this bit is set or cleared by the I3C Master through ENEC or DISEC CCC. */
#else /* Word 0 - Little Endian */
        uint32_t sir_en                : 1;  /**< [  0:  0](RO) Slave Interrupt Request Enable.

                                                                 In Slave mode of operation, this bit reflects whether the controller can
                                                                 initiate the SIR on the I3C bus or not.
                                                                 Usually, this bit is set or cleared by the I3C Master through ENEC or DISEC CCC. */
        uint32_t mr_en                 : 1;  /**< [  1:  1](RO) Master Request Enable.

                                                                 In Slave mode of operation, this bit reflects whether the controller can
                                                                 initiate the Master Request on the I3C bus or not.
                                                                 Usually, this bit is set or cleared by the I3C Master through ENEC or DISEC CCC. */
        uint32_t reserved_2            : 1;
        uint32_t hj_en                 : 1;  /**< [  3:  3](R/W) Hot-Join Interrupt Enable

                                                                 This bit reflects whether the Hot-Join Request Interrupts are allowed on the I3C bus or not.
                                                                 The Slave application can choose to Disable HJ Capability of the SLave
                                                                 Controller (if selected) by setting this field to 0 before 'Enabling' the
                                                                 Controller. When done so, the Slave does not initiate Hot Join and takes part in
                                                                 Address Assignment without initiating Hot Join.
                                                                 If this field is NOT set to 0 by slave application, it can be set or cleared by
                                                                 the I3C Master through ENEC or DISEC CCCs.
                                                                 Once Disabled by software, CCCs do not have any effect on this field. */
        uint32_t activity_state        : 2;  /**< [  5:  4](RO) Activity State Status.

                                                                  ENTAS0 - 00
                                                                  ENTAS1 - 01
                                                                  ENTAS2 - 10
                                                                  ENTAS3 - 11

                                                                 This bit reflects the Activity State of slave set by the Master. */
        uint32_t mrl_updated           : 1;  /**< [  6:  6](R/W1C) MRL Updated Status.

                                                                 This bit indicates a SETMRL CCC is received by the slave. The updated MRL value
                                                                 can be read from SLV_MAX_LEN register.
                                                                 This status can be cleared by writing 1'b1 to this field after reading the updated MRL. */
        uint32_t mwl_updated           : 1;  /**< [  7:  7](R/W1C) MWL Updated Status.

                                                                 This bit indicates a SETMWL CCC is received by the slave. The updated MWL value
                                                                 can be read from SLV_MAX_LEN register.
                                                                 This status can be cleared by writing 1'b1 to this field after reading the updated MWL. */
        uint32_t reserved_8_31         : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_slv_event_status_s cn; */
};
typedef union cavm_i3csmx_slv_event_status cavm_i3csmx_slv_event_status_t;

static inline uint64_t CAVM_I3CSMX_SLV_EVENT_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_SLV_EVENT_STATUS(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000038ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_SLV_EVENT_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_SLV_EVENT_STATUS(a) cavm_i3csmx_slv_event_status_t
#define bustype_CAVM_I3CSMX_SLV_EVENT_STATUS(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_SLV_EVENT_STATUS(a) "I3CSMX_SLV_EVENT_STATUS"
#define device_bar_CAVM_I3CSMX_SLV_EVENT_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_SLV_EVENT_STATUS(a) (a)
#define arguments_CAVM_I3CSMX_SLV_EVENT_STATUS(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_slv_ibi_data_payload
 *
 * I3CSM_SLV_IBI_DATA Register
 * This register contains certain programmable inputs for mipi i3c core .Only for
 * target mode of operation
 */
union cavm_i3csmx_slv_ibi_data_payload
{
    uint32_t u;
    struct cavm_i3csmx_slv_ibi_data_payload_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t ibi_pay_load          : 8;  /**< [ 31: 24](RO/H) PAY LOAD SIZE. */
        uint32_t reserved_0_23         : 24;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_23         : 24;
        uint32_t ibi_pay_load          : 8;  /**< [ 31: 24](RO/H) PAY LOAD SIZE. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_slv_ibi_data_payload_s cn; */
};
typedef union cavm_i3csmx_slv_ibi_data_payload cavm_i3csmx_slv_ibi_data_payload_t;

static inline uint64_t CAVM_I3CSMX_SLV_IBI_DATA_PAYLOAD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_SLV_IBI_DATA_PAYLOAD(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000450ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_SLV_IBI_DATA_PAYLOAD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_SLV_IBI_DATA_PAYLOAD(a) cavm_i3csmx_slv_ibi_data_payload_t
#define bustype_CAVM_I3CSMX_SLV_IBI_DATA_PAYLOAD(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_SLV_IBI_DATA_PAYLOAD(a) "I3CSMX_SLV_IBI_DATA_PAYLOAD"
#define device_bar_CAVM_I3CSMX_SLV_IBI_DATA_PAYLOAD(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_SLV_IBI_DATA_PAYLOAD(a) (a)
#define arguments_CAVM_I3CSMX_SLV_IBI_DATA_PAYLOAD(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_slv_ibi_resp
 *
 * I3CSM Slv Ibi Resp Register
 * This Register stores IBI status and Number of Data byte remaining due to early termination.
 */
union cavm_i3csmx_slv_ibi_resp
{
    uint32_t u;
    struct cavm_i3csmx_slv_ibi_resp_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t sir_resp_data_length  : 16; /**< [ 23:  8](RO) Data Length for SIR  Response

                                                                 The value in this filed will indicate the number of bytes remaining that was not
                                                                 transmitted because of Master early terminating the SIR transfer. */
        uint32_t reserved_2_7          : 6;
        uint32_t ibi_sts               : 2;  /**< [  1:  0](RO) IBI Completion Status
                                                                 This field is common for SIR and MR
                                                                 0x0 = Reserved.
                                                                 0x1 = IBI accepted by the Master (ACK response received).
                                                                 0x2 = Master Early Terminate (only for SIR with Data).
                                                                 0x3 = IBI Not Attempted. */
#else /* Word 0 - Little Endian */
        uint32_t ibi_sts               : 2;  /**< [  1:  0](RO) IBI Completion Status
                                                                 This field is common for SIR and MR
                                                                 0x0 = Reserved.
                                                                 0x1 = IBI accepted by the Master (ACK response received).
                                                                 0x2 = Master Early Terminate (only for SIR with Data).
                                                                 0x3 = IBI Not Attempted. */
        uint32_t reserved_2_7          : 6;
        uint32_t sir_resp_data_length  : 16; /**< [ 23:  8](RO) Data Length for SIR  Response

                                                                 The value in this filed will indicate the number of bytes remaining that was not
                                                                 transmitted because of Master early terminating the SIR transfer. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_slv_ibi_resp_s cn; */
};
typedef union cavm_i3csmx_slv_ibi_resp cavm_i3csmx_slv_ibi_resp_t;

static inline uint64_t CAVM_I3CSMX_SLV_IBI_RESP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_SLV_IBI_RESP(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000098ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_SLV_IBI_RESP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_SLV_IBI_RESP(a) cavm_i3csmx_slv_ibi_resp_t
#define bustype_CAVM_I3CSMX_SLV_IBI_RESP(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_SLV_IBI_RESP(a) "I3CSMX_SLV_IBI_RESP"
#define device_bar_CAVM_I3CSMX_SLV_IBI_RESP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_SLV_IBI_RESP(a) (a)
#define arguments_CAVM_I3CSMX_SLV_IBI_RESP(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_slv_intr_req
 *
 * I3CSM Slv Intr Req Register
 * This register is used in slave mode of operation.
 *
 * This register is used to program the bits that control Slave Interrupt Request and
 * to read the status of the interrupt.
 */
union cavm_i3csmx_slv_intr_req
{
    uint32_t u;
    struct cavm_i3csmx_slv_intr_req_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_24_31        : 8;
        uint32_t sir_data_length       : 8;  /**< [ 23: 16](R/W) SIR DATA LENGTH

                                                                 This field should be programmed by the slave application to give the data length
                                                                 for the payload data other than the MDB byte. This field is only applicable when
                                                                 BCR[2] is set indicating that SIR supports payload data. */
        uint32_t mdb                   : 8;  /**< [ 15:  8](R/W) Mandatory Data Byte

                                                                 This field gives the mandatory data byte which is required to be transmitted
                                                                 after the Master ACK the slave address during SIR transfer. This field is only
                                                                 applicable when BCR[2] is set indicating that SIR supports payload data. */
        uint32_t reserved_5_7          : 3;
        uint32_t ts                    : 1;  /**< [  4:  4](R/W) Support for Time Stamp.
                                                                 The application should program the SIR bit and the MDB byte. The time stamp data
                                                                 will be given to the application through a 16 bit input strap (async_ts_timer).
                                                                 This field is only applicable when BCR[2] is set indicating that SIR supports payload data. */
        uint32_t mr                    : 1;  /**< [  3:  3](R/W) Master Request

                                                                 When set, the controller attempts to issue the MR on the I3C bus. Once issued
                                                                 and when the current master accepts (ACK) or if the controller is unable to
                                                                 issue the MR, then the controller clears this bit automatically and updates the
                                                                 IBI_STS field. If NACK response is received for the MR, the controller
                                                                 reattempts the MR upon detecting the next START condition from the master or
                                                                 after the Bus Available time. This bit is available only in the secondary master
                                                                 configuration. For other configurations, this bit is reserved and returns 0 when
                                                                 read. Once set, the application cannot clear this bit. */
        uint32_t sir_ctrl              : 2;  /**< [  2:  1](R/W) Slave Interrupt Request Control

                                                                 0x0 = Indicates source of SIR data to be from the registers.
                                                                 0x1 = Indicates the source of SIR data to be from Tx FIFO.
                                                                 0x2 = Reserved.
                                                                 0x3 = Reserved. */
        uint32_t sir                   : 1;  /**< [  0:  0](R/W) Slave Interrupt Request

                                                                 When set, the slave controller attempts to issue the SIR on the I3C bus. Once
                                                                 issued and when the current master accepts (ACK) or if the controller is unable
                                                                 to issue the SIR, then the controller clears this bit automatically and updates
                                                                 the IBI_STS field. If the NACK response is received for the SIR, the controller
                                                                 reattempts the SIR upon detecting the next START condition from the master or
                                                                 after the Bus Available Time. Once set, the application cannot clear this bit. */
#else /* Word 0 - Little Endian */
        uint32_t sir                   : 1;  /**< [  0:  0](R/W) Slave Interrupt Request

                                                                 When set, the slave controller attempts to issue the SIR on the I3C bus. Once
                                                                 issued and when the current master accepts (ACK) or if the controller is unable
                                                                 to issue the SIR, then the controller clears this bit automatically and updates
                                                                 the IBI_STS field. If the NACK response is received for the SIR, the controller
                                                                 reattempts the SIR upon detecting the next START condition from the master or
                                                                 after the Bus Available Time. Once set, the application cannot clear this bit. */
        uint32_t sir_ctrl              : 2;  /**< [  2:  1](R/W) Slave Interrupt Request Control

                                                                 0x0 = Indicates source of SIR data to be from the registers.
                                                                 0x1 = Indicates the source of SIR data to be from Tx FIFO.
                                                                 0x2 = Reserved.
                                                                 0x3 = Reserved. */
        uint32_t mr                    : 1;  /**< [  3:  3](R/W) Master Request

                                                                 When set, the controller attempts to issue the MR on the I3C bus. Once issued
                                                                 and when the current master accepts (ACK) or if the controller is unable to
                                                                 issue the MR, then the controller clears this bit automatically and updates the
                                                                 IBI_STS field. If NACK response is received for the MR, the controller
                                                                 reattempts the MR upon detecting the next START condition from the master or
                                                                 after the Bus Available time. This bit is available only in the secondary master
                                                                 configuration. For other configurations, this bit is reserved and returns 0 when
                                                                 read. Once set, the application cannot clear this bit. */
        uint32_t ts                    : 1;  /**< [  4:  4](R/W) Support for Time Stamp.
                                                                 The application should program the SIR bit and the MDB byte. The time stamp data
                                                                 will be given to the application through a 16 bit input strap (async_ts_timer).
                                                                 This field is only applicable when BCR[2] is set indicating that SIR supports payload data. */
        uint32_t reserved_5_7          : 3;
        uint32_t mdb                   : 8;  /**< [ 15:  8](R/W) Mandatory Data Byte

                                                                 This field gives the mandatory data byte which is required to be transmitted
                                                                 after the Master ACK the slave address during SIR transfer. This field is only
                                                                 applicable when BCR[2] is set indicating that SIR supports payload data. */
        uint32_t sir_data_length       : 8;  /**< [ 23: 16](R/W) SIR DATA LENGTH

                                                                 This field should be programmed by the slave application to give the data length
                                                                 for the payload data other than the MDB byte. This field is only applicable when
                                                                 BCR[2] is set indicating that SIR supports payload data. */
        uint32_t reserved_24_31        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_slv_intr_req_s cn; */
};
typedef union cavm_i3csmx_slv_intr_req cavm_i3csmx_slv_intr_req_t;

static inline uint64_t CAVM_I3CSMX_SLV_INTR_REQ(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_SLV_INTR_REQ(uint64_t a)
{
    if (a<=1)
        return 0x87e0d400008cll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_SLV_INTR_REQ", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_SLV_INTR_REQ(a) cavm_i3csmx_slv_intr_req_t
#define bustype_CAVM_I3CSMX_SLV_INTR_REQ(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_SLV_INTR_REQ(a) "I3CSMX_SLV_INTR_REQ"
#define device_bar_CAVM_I3CSMX_SLV_INTR_REQ(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_SLV_INTR_REQ(a) (a)
#define arguments_CAVM_I3CSMX_SLV_INTR_REQ(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_slv_max_len
 *
 * I3CSM Slv Max Len Register
 * I3C Max Write/Read Length Register.
 *
 * This register is used in slave mode of operation.
 */
union cavm_i3csmx_slv_max_len
{
    uint32_t u;
    struct cavm_i3csmx_slv_max_len_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t mrl                   : 16; /**< [ 31: 16](RO) I3C Device Max Read Length. */
        uint32_t mwl                   : 16; /**< [ 15:  0](RO) I3C Device Max Write Length */
#else /* Word 0 - Little Endian */
        uint32_t mwl                   : 16; /**< [ 15:  0](RO) I3C Device Max Write Length */
        uint32_t mrl                   : 16; /**< [ 31: 16](RO) I3C Device Max Read Length. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_slv_max_len_s cn; */
};
typedef union cavm_i3csmx_slv_max_len cavm_i3csmx_slv_max_len_t;

static inline uint64_t CAVM_I3CSMX_SLV_MAX_LEN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_SLV_MAX_LEN(uint64_t a)
{
    if (a<=1)
        return 0x87e0d400007cll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_SLV_MAX_LEN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_SLV_MAX_LEN(a) cavm_i3csmx_slv_max_len_t
#define bustype_CAVM_I3CSMX_SLV_MAX_LEN(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_SLV_MAX_LEN(a) "I3CSMX_SLV_MAX_LEN"
#define device_bar_CAVM_I3CSMX_SLV_MAX_LEN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_SLV_MAX_LEN(a) (a)
#define arguments_CAVM_I3CSMX_SLV_MAX_LEN(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_slv_mipi_id_value
 *
 * I3CSM Slv Mipi Id Value Register
 * I3C MIPI Manufacturer ID Register.
 *
 * This register is used in slave mode of operation.
 */
union cavm_i3csmx_slv_mipi_id_value
{
    uint32_t u;
    struct cavm_i3csmx_slv_mipi_id_value_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t slv_mipi_mfg_id       : 15; /**< [ 15:  1](R/W) Specifies the MIPI Manufacturer ID. (PID[47:33]). */
        uint32_t slv_prov_id_sel       : 1;  /**< [  0:  0](R/W) Specifies the Provisional ID Type Selector (PID[32]).
                                                                 0 = Vendor Fixed Value.
                                                                 1 = Random Value. */
#else /* Word 0 - Little Endian */
        uint32_t slv_prov_id_sel       : 1;  /**< [  0:  0](R/W) Specifies the Provisional ID Type Selector (PID[32]).
                                                                 0 = Vendor Fixed Value.
                                                                 1 = Random Value. */
        uint32_t slv_mipi_mfg_id       : 15; /**< [ 15:  1](R/W) Specifies the MIPI Manufacturer ID. (PID[47:33]). */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_slv_mipi_id_value_s cn; */
};
typedef union cavm_i3csmx_slv_mipi_id_value cavm_i3csmx_slv_mipi_id_value_t;

static inline uint64_t CAVM_I3CSMX_SLV_MIPI_ID_VALUE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_SLV_MIPI_ID_VALUE(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000070ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_SLV_MIPI_ID_VALUE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_SLV_MIPI_ID_VALUE(a) cavm_i3csmx_slv_mipi_id_value_t
#define bustype_CAVM_I3CSMX_SLV_MIPI_ID_VALUE(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_SLV_MIPI_ID_VALUE(a) "I3CSMX_SLV_MIPI_ID_VALUE"
#define device_bar_CAVM_I3CSMX_SLV_MIPI_ID_VALUE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_SLV_MIPI_ID_VALUE(a) (a)
#define arguments_CAVM_I3CSMX_SLV_MIPI_ID_VALUE(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_slv_pid_lsb
 *
 * I3CSM_SLV_PID_LSB Register
 * This register contains certain programmable inputs for mipi i3c core .Only for
 * target mode of operation
 */
union cavm_i3csmx_slv_pid_lsb
{
    uint32_t u;
    struct cavm_i3csmx_slv_pid_lsb_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t part_id               : 16; /**< [ 31: 16](R/W) Reset value of SLV_PART_ID of I3CSM_SLV_PID_VALUE register (0x74) is driven by this register. */
        uint32_t reserved_12_15        : 4;
        uint32_t additional            : 12; /**< [ 11:  0](R/W) The meaning of this 12-bit field is left for definition with additional
                                                                 meaning.For details on this field refer 5.1.4.1.1 of mipi alliance i3c
                                                                 specification Version 1.1.1 */
#else /* Word 0 - Little Endian */
        uint32_t additional            : 12; /**< [ 11:  0](R/W) The meaning of this 12-bit field is left for definition with additional
                                                                 meaning.For details on this field refer 5.1.4.1.1 of mipi alliance i3c
                                                                 specification Version 1.1.1 */
        uint32_t reserved_12_15        : 4;
        uint32_t part_id               : 16; /**< [ 31: 16](R/W) Reset value of SLV_PART_ID of I3CSM_SLV_PID_VALUE register (0x74) is driven by this register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_slv_pid_lsb_s cn; */
};
typedef union cavm_i3csmx_slv_pid_lsb cavm_i3csmx_slv_pid_lsb_t;

static inline uint64_t CAVM_I3CSMX_SLV_PID_LSB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_SLV_PID_LSB(uint64_t a)
{
    if (a<=1)
        return 0x87e0d400044cll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_SLV_PID_LSB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_SLV_PID_LSB(a) cavm_i3csmx_slv_pid_lsb_t
#define bustype_CAVM_I3CSMX_SLV_PID_LSB(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_SLV_PID_LSB(a) "I3CSMX_SLV_PID_LSB"
#define device_bar_CAVM_I3CSMX_SLV_PID_LSB(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_SLV_PID_LSB(a) (a)
#define arguments_CAVM_I3CSMX_SLV_PID_LSB(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_slv_pid_msb
 *
 * I3CSM_SLV_PID_MSB Register
 * This register contains certain programmable inputs for mipi i3c core related to SLV_PID .Only for
 * target mode of operation
 */
union cavm_i3csmx_slv_pid_msb
{
    uint32_t u;
    struct cavm_i3csmx_slv_pid_msb_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t manufacturer_id       : 15; /**< [ 31: 17](R/W) This register field is used to provide the reset value for the SLV_MIPI_MFG_ID
                                                                 field of the I3CSM_SLV_MIPI_ID_VALUE register (0x70).To change the Manufacturer
                                                                 ID value please program I3CSM_SLV_MIPI_ID_VALUE(0x70). */
        uint32_t provisional_id_type_selector : 1;/**< [ 16: 16](R/W) This register field is used to provide the reset value for the SLV_PROV_ID_SEL
                                                                 field of the I3CSM_SLV_MIPI_ID_VALUE register (0x70).To change the
                                                                 SLV_PROV_ID_SEL value please program I3CSM_SLV_MIPI_ID_VALUE(0x70).
                                                                 0 = Vendor Fixed Value.
                                                                 1 = Random Value. */
        uint32_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint32_t reserved_0_15         : 16;
        uint32_t provisional_id_type_selector : 1;/**< [ 16: 16](R/W) This register field is used to provide the reset value for the SLV_PROV_ID_SEL
                                                                 field of the I3CSM_SLV_MIPI_ID_VALUE register (0x70).To change the
                                                                 SLV_PROV_ID_SEL value please program I3CSM_SLV_MIPI_ID_VALUE(0x70).
                                                                 0 = Vendor Fixed Value.
                                                                 1 = Random Value. */
        uint32_t manufacturer_id       : 15; /**< [ 31: 17](R/W) This register field is used to provide the reset value for the SLV_MIPI_MFG_ID
                                                                 field of the I3CSM_SLV_MIPI_ID_VALUE register (0x70).To change the Manufacturer
                                                                 ID value please program I3CSM_SLV_MIPI_ID_VALUE(0x70). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_slv_pid_msb_s cn; */
};
typedef union cavm_i3csmx_slv_pid_msb cavm_i3csmx_slv_pid_msb_t;

static inline uint64_t CAVM_I3CSMX_SLV_PID_MSB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_SLV_PID_MSB(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000448ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_SLV_PID_MSB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_SLV_PID_MSB(a) cavm_i3csmx_slv_pid_msb_t
#define bustype_CAVM_I3CSMX_SLV_PID_MSB(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_SLV_PID_MSB(a) "I3CSMX_SLV_PID_MSB"
#define device_bar_CAVM_I3CSMX_SLV_PID_MSB(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_SLV_PID_MSB(a) (a)
#define arguments_CAVM_I3CSMX_SLV_PID_MSB(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_slv_pid_value
 *
 * I3CSM Slv Pid Value Register
 * I3C Normal Provisional ID Register.
 *
 * This register is used in slave mode of operation.
 */
union cavm_i3csmx_slv_pid_value
{
    uint32_t u;
    struct cavm_i3csmx_slv_pid_value_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t slv_part_id           : 16; /**< [ 31: 16](R/W) Specifies the Part ID of DWC_mipi_i3c device (PID[31:16]).Random ID from the
                                                                 eHSM will be read by software and
                                                                 this field will be updated, if provisional ID type is set to 1. */
        uint32_t slv_inst_id           : 4;  /**< [ 15: 12](R/W) This field is used to program the instance ID of the Slave. The reset value of
                                                                 this register is taken from input port 'inst_id'. */
        uint32_t slv_pid_dcr           : 12; /**< [ 11:  0](R/W) Specifies the additional 12-bit ID of DWC_mipi_i3c device (PID[11:0]). */
#else /* Word 0 - Little Endian */
        uint32_t slv_pid_dcr           : 12; /**< [ 11:  0](R/W) Specifies the additional 12-bit ID of DWC_mipi_i3c device (PID[11:0]). */
        uint32_t slv_inst_id           : 4;  /**< [ 15: 12](R/W) This field is used to program the instance ID of the Slave. The reset value of
                                                                 this register is taken from input port 'inst_id'. */
        uint32_t slv_part_id           : 16; /**< [ 31: 16](R/W) Specifies the Part ID of DWC_mipi_i3c device (PID[31:16]).Random ID from the
                                                                 eHSM will be read by software and
                                                                 this field will be updated, if provisional ID type is set to 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_slv_pid_value_s cn; */
};
typedef union cavm_i3csmx_slv_pid_value cavm_i3csmx_slv_pid_value_t;

static inline uint64_t CAVM_I3CSMX_SLV_PID_VALUE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_SLV_PID_VALUE(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000074ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_SLV_PID_VALUE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_SLV_PID_VALUE(a) cavm_i3csmx_slv_pid_value_t
#define bustype_CAVM_I3CSMX_SLV_PID_VALUE(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_SLV_PID_VALUE(a) "I3CSMX_SLV_PID_VALUE"
#define device_bar_CAVM_I3CSMX_SLV_PID_VALUE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_SLV_PID_VALUE(a) (a)
#define arguments_CAVM_I3CSMX_SLV_PID_VALUE(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_slv_sir_data
 *
 * I3CSM Slv Sir Data Register
 * This Register holds the four byte of SIR DATA that will be passed after the MDB when
 * SIR is initiated by the application on writing into SIR bit in SLV_INTR_REQ Register
 */
union cavm_i3csmx_slv_sir_data
{
    uint32_t u;
    struct cavm_i3csmx_slv_sir_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t sir_data_byte3        : 8;  /**< [ 31: 24](R/W) Slave Interrupt Request Data Byte0
                                                                 This register SLV_SIR_DATA containing  four bytes of SIR Data will be in effect
                                                                 only when SIR_CTRL field in SLV_INTR_REQ is programmed to 00 provided the data
                                                                 length is upto 4
                                                                 This field holds the fourth byte of SIR DATA that will be passed after the MDB
                                                                 when SIR is initiated by the application on writing into SIR bit in SLV_INTR_REQ
                                                                 Register */
        uint32_t sir_data_byte2        : 8;  /**< [ 23: 16](R/W) Slave Interrupt Request Data Byte2
                                                                 This register SLV_SIR_DATA containing  four bytes of SIR Data will be in effect
                                                                 only when SIR_CTRL field in SLV_INTR_REQ is programmed to 00 00 provided the
                                                                 data length is upto 3.
                                                                 This field holds the third byte of SIR DATA that will be passed after the MDB
                                                                 when SIR is initiated by the application on writing into SIR bit in SLV_INTR_REQ
                                                                 Register. */
        uint32_t sir_data_byte1        : 8;  /**< [ 15:  8](R/W) Slave Interrupt Request Data Byte1
                                                                 This register SLV_SIR_DATA containing  four bytes of SIR Data will be in effect
                                                                 only when SIR_CTRL field in SLV_INTR_REQ is programmed to 0000 provided the data
                                                                 length is upto 2
                                                                 This field holds the second byte of SIR DATA that will be passed after the MDB
                                                                 when SIR is initiated by the application on writing into SIR bit in SLV_INTR_REQ
                                                                 Register. */
        uint32_t sir_data_byte0        : 8;  /**< [  7:  0](R/W) Slave Interrupt Request Data Byte0

                                                                 This register SLV_SIR_DATA containing  four bytes of SIR Data will be in effect
                                                                 only when SIR_CTRL field in SLV_INTR_REQ is programmed to 00 00 provided the
                                                                 data length is upto 1
                                                                 This field holds the first byte of SIR DATA that will be passed after the MDB
                                                                 when SIR is initiated by the application on writing into SIR bit in SLV_INTR_REQ
                                                                 Register */
#else /* Word 0 - Little Endian */
        uint32_t sir_data_byte0        : 8;  /**< [  7:  0](R/W) Slave Interrupt Request Data Byte0

                                                                 This register SLV_SIR_DATA containing  four bytes of SIR Data will be in effect
                                                                 only when SIR_CTRL field in SLV_INTR_REQ is programmed to 00 00 provided the
                                                                 data length is upto 1
                                                                 This field holds the first byte of SIR DATA that will be passed after the MDB
                                                                 when SIR is initiated by the application on writing into SIR bit in SLV_INTR_REQ
                                                                 Register */
        uint32_t sir_data_byte1        : 8;  /**< [ 15:  8](R/W) Slave Interrupt Request Data Byte1
                                                                 This register SLV_SIR_DATA containing  four bytes of SIR Data will be in effect
                                                                 only when SIR_CTRL field in SLV_INTR_REQ is programmed to 0000 provided the data
                                                                 length is upto 2
                                                                 This field holds the second byte of SIR DATA that will be passed after the MDB
                                                                 when SIR is initiated by the application on writing into SIR bit in SLV_INTR_REQ
                                                                 Register. */
        uint32_t sir_data_byte2        : 8;  /**< [ 23: 16](R/W) Slave Interrupt Request Data Byte2
                                                                 This register SLV_SIR_DATA containing  four bytes of SIR Data will be in effect
                                                                 only when SIR_CTRL field in SLV_INTR_REQ is programmed to 00 00 provided the
                                                                 data length is upto 3.
                                                                 This field holds the third byte of SIR DATA that will be passed after the MDB
                                                                 when SIR is initiated by the application on writing into SIR bit in SLV_INTR_REQ
                                                                 Register. */
        uint32_t sir_data_byte3        : 8;  /**< [ 31: 24](R/W) Slave Interrupt Request Data Byte0
                                                                 This register SLV_SIR_DATA containing  four bytes of SIR Data will be in effect
                                                                 only when SIR_CTRL field in SLV_INTR_REQ is programmed to 00 provided the data
                                                                 length is upto 4
                                                                 This field holds the fourth byte of SIR DATA that will be passed after the MDB
                                                                 when SIR is initiated by the application on writing into SIR bit in SLV_INTR_REQ
                                                                 Register */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_slv_sir_data_s cn; */
};
typedef union cavm_i3csmx_slv_sir_data cavm_i3csmx_slv_sir_data_t;

static inline uint64_t CAVM_I3CSMX_SLV_SIR_DATA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_SLV_SIR_DATA(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000094ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_SLV_SIR_DATA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_SLV_SIR_DATA(a) cavm_i3csmx_slv_sir_data_t
#define bustype_CAVM_I3CSMX_SLV_SIR_DATA(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_SLV_SIR_DATA(a) "I3CSMX_SLV_SIR_DATA"
#define device_bar_CAVM_I3CSMX_SLV_SIR_DATA(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_SLV_SIR_DATA(a) (a)
#define arguments_CAVM_I3CSMX_SLV_SIR_DATA(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_soft_reset
 *
 * I3CSM SOFT RESET Register
 * This register is used as soft reset.
 */
union cavm_i3csmx_soft_reset
{
    uint32_t u;
    struct cavm_i3csmx_soft_reset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_1_31         : 31;
        uint32_t soft_reset            : 1;  /**< [  0:  0](R/W) This register field is used as soft reset. */
#else /* Word 0 - Little Endian */
        uint32_t soft_reset            : 1;  /**< [  0:  0](R/W) This register field is used as soft reset. */
        uint32_t reserved_1_31         : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_soft_reset_s cn; */
};
typedef union cavm_i3csmx_soft_reset cavm_i3csmx_soft_reset_t;

static inline uint64_t CAVM_I3CSMX_SOFT_RESET(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_SOFT_RESET(uint64_t a)
{
    if (a<=1)
        return 0x87e0d400045cll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_SOFT_RESET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_SOFT_RESET(a) cavm_i3csmx_soft_reset_t
#define bustype_CAVM_I3CSMX_SOFT_RESET(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_SOFT_RESET(a) "I3CSMX_SOFT_RESET"
#define device_bar_CAVM_I3CSMX_SOFT_RESET(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_SOFT_RESET(a) (a)
#define arguments_CAVM_I3CSMX_SOFT_RESET(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_tie_off_0
 *
 * I3CSM TIE OFF 0 Register
 * This register is used to tie any ports with '0'
 */
union cavm_i3csmx_tie_off_0
{
    uint32_t u;
    struct cavm_i3csmx_tie_off_0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t tie_off_0             : 32; /**< [ 31:  0](R/W) This register field is used to tie any ports with '0'. */
#else /* Word 0 - Little Endian */
        uint32_t tie_off_0             : 32; /**< [ 31:  0](R/W) This register field is used to tie any ports with '0'. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_tie_off_0_s cn; */
};
typedef union cavm_i3csmx_tie_off_0 cavm_i3csmx_tie_off_0_t;

static inline uint64_t CAVM_I3CSMX_TIE_OFF_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_TIE_OFF_0(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000454ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_TIE_OFF_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_TIE_OFF_0(a) cavm_i3csmx_tie_off_0_t
#define bustype_CAVM_I3CSMX_TIE_OFF_0(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_TIE_OFF_0(a) "I3CSMX_TIE_OFF_0"
#define device_bar_CAVM_I3CSMX_TIE_OFF_0(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_TIE_OFF_0(a) (a)
#define arguments_CAVM_I3CSMX_TIE_OFF_0(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_tie_off_1
 *
 * I3CSM TIE OFF 1 Register
 * This register is used to tie any ports with '1'
 */
union cavm_i3csmx_tie_off_1
{
    uint32_t u;
    struct cavm_i3csmx_tie_off_1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t tie_off_1             : 32; /**< [ 31:  0](R/W) This register field is used to tie any ports with '1'. */
#else /* Word 0 - Little Endian */
        uint32_t tie_off_1             : 32; /**< [ 31:  0](R/W) This register field is used to tie any ports with '1'. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_tie_off_1_s cn; */
};
typedef union cavm_i3csmx_tie_off_1 cavm_i3csmx_tie_off_1_t;

static inline uint64_t CAVM_I3CSMX_TIE_OFF_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_TIE_OFF_1(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000458ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_TIE_OFF_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_TIE_OFF_1(a) cavm_i3csmx_tie_off_1_t
#define bustype_CAVM_I3CSMX_TIE_OFF_1(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_TIE_OFF_1(a) "I3CSMX_TIE_OFF_1"
#define device_bar_CAVM_I3CSMX_TIE_OFF_1(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_TIE_OFF_1(a) (a)
#define arguments_CAVM_I3CSMX_TIE_OFF_1(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_tx_data_port
 *
 * I3CSM Tx Data Port Register
 * Transmit Data Port Register
 *
 * This register when written into, writes data to the TX Buffer. This has the same
 * offset as RX_DATA_PORT to provide a
 * single bi-directional data port for transmitting or receiving the data from the DWC_mipi_i3c.
 */
union cavm_i3csmx_tx_data_port
{
    uint32_t u;
    struct cavm_i3csmx_tx_data_port_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t tx_data_port          : 32; /**< [ 31:  0](WO) Transmit Data Port
                                                                 The Transmit Data port is mapped to the Tx-Data Buffer.
                                                                 The transmit data should always be packed as 4-byte aligned data words and
                                                                 written to the Transmit Data Port register.
                                                                 If the Command length is not aligned to 4-bytes, then the additional bytes are ignored. */
#else /* Word 0 - Little Endian */
        uint32_t tx_data_port          : 32; /**< [ 31:  0](WO) Transmit Data Port
                                                                 The Transmit Data port is mapped to the Tx-Data Buffer.
                                                                 The transmit data should always be packed as 4-byte aligned data words and
                                                                 written to the Transmit Data Port register.
                                                                 If the Command length is not aligned to 4-bytes, then the additional bytes are ignored. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_tx_data_port_s cn; */
};
typedef union cavm_i3csmx_tx_data_port cavm_i3csmx_tx_data_port_t;

static inline uint64_t CAVM_I3CSMX_TX_DATA_PORT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_TX_DATA_PORT(uint64_t a)
{
    if (a<=1)
        return 0x87e0d4000014ll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_TX_DATA_PORT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_TX_DATA_PORT(a) cavm_i3csmx_tx_data_port_t
#define bustype_CAVM_I3CSMX_TX_DATA_PORT(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_TX_DATA_PORT(a) "I3CSMX_TX_DATA_PORT"
#define device_bar_CAVM_I3CSMX_TX_DATA_PORT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_TX_DATA_PORT(a) (a)
#define arguments_CAVM_I3CSMX_TX_DATA_PORT(a) (a),-1,-1,-1

/**
 * Register (RSL32b) i3csm#_vendor_specific_reg_pointer
 *
 * I3CSM Vendor Specific Reg Pointer Register
 * Pointer for Vendor Specific Registers.
 *
 * This register is used in master mode of operation.
 */
union cavm_i3csmx_vendor_specific_reg_pointer
{
    uint32_t u;
    struct cavm_i3csmx_vendor_specific_reg_pointer_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t p_vendor_reg_start_addr : 16;/**< [ 15:  0](RO) Start Address of Vendor specific registers. */
#else /* Word 0 - Little Endian */
        uint32_t p_vendor_reg_start_addr : 16;/**< [ 15:  0](RO) Start Address of Vendor specific registers. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_i3csmx_vendor_specific_reg_pointer_s cn; */
};
typedef union cavm_i3csmx_vendor_specific_reg_pointer cavm_i3csmx_vendor_specific_reg_pointer_t;

static inline uint64_t CAVM_I3CSMX_VENDOR_SPECIFIC_REG_POINTER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_I3CSMX_VENDOR_SPECIFIC_REG_POINTER(uint64_t a)
{
    if (a<=1)
        return 0x87e0d400006cll + 0x1000000ll * ((a) & 0x1);
    __cavm_csr_fatal("I3CSMX_VENDOR_SPECIFIC_REG_POINTER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_I3CSMX_VENDOR_SPECIFIC_REG_POINTER(a) cavm_i3csmx_vendor_specific_reg_pointer_t
#define bustype_CAVM_I3CSMX_VENDOR_SPECIFIC_REG_POINTER(a) CSR_TYPE_RSL32b
#define basename_CAVM_I3CSMX_VENDOR_SPECIFIC_REG_POINTER(a) "I3CSMX_VENDOR_SPECIFIC_REG_POINTER"
#define device_bar_CAVM_I3CSMX_VENDOR_SPECIFIC_REG_POINTER(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_I3CSMX_VENDOR_SPECIFIC_REG_POINTER(a) (a)
#define arguments_CAVM_I3CSMX_VENDOR_SPECIFIC_REG_POINTER(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_I3CSM_H__ */
