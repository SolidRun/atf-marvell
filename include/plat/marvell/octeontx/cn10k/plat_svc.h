/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from this
 * software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef __PLAT_SVC_H__
#define __PLAT_SVC_H__

/*
 * No input
 * Return:
 *	0x0 -- Success
 */
#define PLAT_OCTEONTX_DISABLE_RVU_LFS	0xc2000b01

#define PLAT_OCTEONTX_FLSF_FW_BOOTED	0xc2000b02
/*
 * No input
 * Return:
 *	0x0 -- Success
 */
#define PLAT_OCTEONTX_FLSF_CLEAR_FORCE_2NDRY	0xc2000b03
/*
 * x1 - ooo
 * Return:
 *	0x0 -- Success
 *	0x2 -- Fail
 */
#define PLAT_OCTEONTX_OOO_CONFIG	0xc2000b04

/*
 * x1[15:8]:	lane index or 0xff if no lane provided
 *		in which case it will be executed for
 *		all the lanes assigned for the given port
 *
 * x1[7:0]	port index
 *
 * For Write command only (when any of x2[5,3,1] bit is set):
 * x2 - rx_init, polarity, gray code, pre code:
 *	x2[6]	do Rx init
 *	x2[5:4] polarity provided & value
 *	x2[3:2] gray code provided & value
 *	x2[1:0] pre code provided & value
 *
 * Return:
 *	x0:
 *		0x0 -- Success
 *		other -- Fail
 *
 *	x1:
 *		SERDES_SETTINGS_DATA_BASE address, where
 *		the following structure is stored:
 *		struct rx_eq_params {
 *			int32_t dfe_taps[24];
 *			uint32_t int ctle_params[13];
 *			int polarity;
 *			int gray_code;
 *			int pre_code;
 *			int squelch_detected;
 *		} params[4];
 *
 *	x2[31:24]: gserm number
 *	x2[23:8] : port lane# to gserm lane# mapping
 *	x2[7:0]  : Number of lanes assigned to the given port
 *
 */
#define PLAT_OCTEONTX_SERDES_DBG_RX_TUNING	0xc2000d05

/*
 * x1[15:8]:	lane index or 0xff if no lane provided
 *		in which case it will be executed for
 *		all the lanes assigned for the given port
 *
 * x1[7:0] is port index
 *
 * For Write command only (when any of x4[9,7,5,3:0] bit is set):
 * x2 - pre2, pre1, where:
 *	x2[31:16] is pre2
 *	x2[15:0] is pre1
 *
 * x3 - post, main where:
 *	x3[31:16] is post
 *	x3[15:0] is main
 *
 * x4 - flags, where:
 *	x4[9:8] polarity provided & value
 *	x4[7:6] gray code provided & value
 *	x4[5:4] pre code provided & value
 *	x4[3] means main provided
 *	x4[2] means post provided
 *	x4[1] means pre1 provided
 *	x4[0] means pre2 provided
 *
 * Return:
 *	x0:
 *		0x0 -- Success
 *		other -- Fail
 *
 *	For Read command only (all the input x4[3:0] bits are zero):
 *	x1:
 *		SERDES_SETTINGS_DATA_BASE address, where
 *		the following structure is stored:
 *		struct tx_eq_params {
 *			uint16_t pre2;
 *			uint16_t pre1;
 *			uint16_t post;
 *			uint16_t main;
 *			int polarity;
 *			int gray_code;
 *			int pre_code;
 *			int tx_idle;
 *		} params[4];
 *
 *	For all commands:
 *	x2[31:24]: gserm number
 *	x2[23:8] : port lane# to gserm lane# mapping
 *	x2[7:0]  : Number of lanes assigned to the given port
 *
 */
#define PLAT_OCTEONTX_SERDES_DBG_TX_TUNING	0xc2000d06

/*
 * x1[15:8]:	lane index or 0xff if no lane provided
 *		in which case it will be executed for
 *		all the lanes assigned for the given
 *		port
 *
 * x1[7:0]:	port index
 *
 * x2 - type of loopback, where:
 *	0 is "No Loopback"
 *	1 is NEA
 *	2 is NED
 *	3 is FED
 *
 * Return:
 *	x0:
 *		0x0 -- Success
 *		other -- Fail
 *
 *	x1[31:24]: gserm number
 *	x1[23:8] : port lane# to gserm lane# mapping
 *	x1[7:0]  : Number of lanes assigned to the given port
 *
 */
#define PLAT_OCTEONTX_SERDES_DBG_LOOPBACK	0xc2000d07

/*
 * x1[18:16] is command:
 *	0 - start prbs
 *	1 - show prbs
 *	2 - clear prbs
 *	3 - stop prbs
 *	4 - inject errors
 *
 * x1[15:8]:	lane index or 0xff if no lane provided
 *		in which case it will be executed for
 *		all the lanes assigned for the given
 *		port
 *
 * x1[7:0]:	port index
 *
 * x2 - prbs pattern for generator (start & stop commands only)
 * x3 - prbs pattern for checker (start & stop commands only)
 * x4 - number of errors to be injected (inject errors command only)
 *
 * Return:
 *	x0:
 *		0x0 -- Success
 *		other -- Fail
 *
 *	Show command only:
 *	x1:
 *		SERDES_PRBS_DATA_BASE address, where the following
 *		structure is stored to return prbs statistics
 *		data for maximum of 4 lanes + gen/checker patterns:
 *
 *		struct prbs_error_stats {
 *			uint64_t total_bits;
 *			uint64_t error_bits;
 *			int locked;
 *		} stats[4];
 *		int gen_pattern;
 *		int check_pattern;
 *
 *	For all commands:
 *	x2[31:24]: gserm number
 *	x2[23:8] : port lane# to gserm lane# mapping
 *	x2[7:0]  : Number of lanes assigned to the given port
 *
 */
#define PLAT_OCTEONTX_SERDES_DBG_PRBS		0xc2000d08

/*
 * x1[15:8]:	lane index
 * x1[7:0]:	port index
 *
 * x2: cmd:
 *     0 - start training
 *     1 - check status
 *     2 - stop training
 *
 * Return:
 *	x0:
 *		0 -- success
 *		negative - error
 *
 *	x1[31:24]: gserm number
 *	x1[23:8] : port lane# to gserm lane# mapping
 *	x1[7:0]  : Number of lanes assigned to the given port
 *
 *	check status cmd only:
 *	x2[0]: 1 - training completed, 0 otherwise
 *	x2[1]: 1 - training failed, 0 - training succeded
 *
 */
#define PLAT_OCTEONTX_SERDES_DBG_RX_TRAINING	0xc2000d09

/*
 * x1[7:0]:	port index
 *
 * x2[3:0]: cmd:
 *	0 - ECP_NOTIFY_LOOPBACK_NO_LOOPBACK
 *	1 - ECP_NOTIFY_LOOPBACK_NEA
 *	2 - ECP_NOTIFY_LOOPBACK_NED
 *	3 - ECP_NOTIFY_LOOPBACK_FED
 *	4 - ECP_NOTIFY_PRBS_MODE_GEN_ENA
 *	5 - ECP_NOTIFY_PRBS_MODE_CHECK_ENA
 *	6 - ECP_NOTIFY_PRBS_MODE_GEN_CHECK_ENA
 *	7 - ECP_NOTIFY_PRBS_MODE_GEN_DIS
 *	8 - ECP_NOTIFY_PRBS_MODE_CHECK_DIS
 *	9 - ECP_NOTIFY_PRBS_MODE_GEN_CHECK_DIS
 *
 * Return:
 *	x0:
 *		0 -- success
 *		negative - error
 *
 */
#define PLAT_OCTEONTX_SERDES_DBG_NOTIFY_ECP	0xc2000d0a

/*
 * x1 - cmd
 *	1 - PHY_PRBS_START_CMD - start phy prbs with config (x2)
 *					for phy @eth(x3),lmac(x4)
 *	2 - PHY_PRBS_STOP_CMD  - stop phy prbs with config (x2)
 *					for phy @eth(x3),lmac(x4)
 *	3 - PHY_PRBS_GET_DATA_CMD - get prbs error counters with config(x2)
 *                                   for phy @eth(x3),lmac(x4)
 * x2 - config, fields are:
 *	- x2[4:3] is pattern selector, options are:
 *		0x00 - PRBS_7
 *		0x01 - PRBS_23
 *		0x10 - PRBS_31
 *		0x11 - PRBS_1010
 *	- x2[2:1] is the mode
 *		1 - Generator
 *		2 - Checker
 *		3 - Generator & Checker
 *	- x2[0] is denoting host or line side:
 *		1 - host side
 *		0 - line side
 * x3 - eth
 * x4 - lmac
 * Return:
 *	x0: 0 (Success) or -1 (Fail)
 *			or
 *		prbs error count for host/line side
 *			(PHY_PRBS_GET_DATA_CMD only)
 */
#define PLAT_OCTEONTX_PHY_DBG_PRBS		0xc2000e00

/*
 * x1 - cmd
 *	1 - PHY_LOOPBACK_START_CMD - start phy loopback with config (x2)
 *					for phy @eth(x3),lmac(x4)
 *	2 - PHY_LOOPBACK_STOP_CMD  - stop phy loopback with config (x2)
 *					for phy @eth(x3),lmac(x4)
 * x2 - config, fields are:
 *	- x2[3:2] is loopback selector, options are:
 *		0x00 - PCS_SHALLOW
 *		0x01 - PCS_DEEP
 *		0x10 - PMA_DEEP
 *	- x2[1:0] is denoting host or line side:
 *		1 - host side
 *		0 - line side
 * x3 - eth
 * x4 - lmac
 * Return:
 *	x0: 0 (Success) or -1 (Fail)
 */
#define PLAT_OCTEONTX_PHY_LOOPBACK		0xc2000e01

/*
 * x1 - eth
 * x2 - lmac
 * Return:
 *	x0: 0 (Success) or -1 (Fail)
 *	x1: Avaraged temperature sensor reading of phy @eth(x1), lmac(x2)
 */
#define PLAT_OCTEONTX_PHY_GET_TEMP		0xc2000e02

/*
 * x1 - cmd
 *	0 - PHY_GET_SERDES_CFG
 *	1 - PHY_SET_SERDES_CFG
 * x2 - phy's SERDES config (only Tx amplitude supported):
 *	x2[2:0] SGMII VOD level (Tx ampl.), one of:
 *		000 = 14mV
 *		001 = 112mV
 *		010 = 210mV
 *		011 = 308mV
 *		100 = 406mV
 *		101 = 504mV
 *		110 = 602mV
 *		111 = 700mV
 * x3 - eth
 * x4 - lmac
 * Return:
 *	x0: 0 (Success) or -1 (Fail)
 *	x1: config in the same format as in x2
 *		(PHY_GET_SERDES_CFG cmd only)
 *
 */
#define PLAT_OCTEONTX_PHY_SERDES_CFG		0xc2000e03

/*
 * x1 - cmd, clause and device addr:
 *	x1[0]: command
 *		0 - Read PHY register
 *		1 - Write PHY register
 *	x1[1]: MDIO clause
 *		0 - clause22
 *		1 - clause45
 *
 *	x1[6:2]: device addr (clause45)
 *			or
 *		page nr (paged access in clause22)
 *
 *
 * x2 - register address and/or value
 *	x2[15:0]: register address
 *	x2[31:16]: register value (only in case of Write cmd)
 *
 * x3 - eth
 * x4 - lmac
 *
 * Return:
 *	x0: 0 (Success) or -1 (Fail)
 *	x1: register value (only in case of Read cmd)
 *
 */
#define PLAT_OCTEONTX_PHY_MDIO			0xc2000e04

/*
 * x1 - MAC address index
 * x2 - MAC address value
 *
 * Return:
 *	x0: 0 (Success) or -1 (Fail)
 *
 */
#define PLAT_OCTEONTX_MAC_MGMT_SET_ADDR		0xc2000e10

/*
 * x1 - user_buffer
 * x2 - size
 * x3 - bus
 * x4 - chip select
 * x5 - secondary location
 *
 * Return:
 *	x0:
 *		0 -- Success
 *		-1 -- Invalid Arguments
 *		-2 -- SPI_CONFIG_ERR
 *		-3 -- SPI_MMAP_ERR
 *		-4 -- SPI_IMG_VALIDATE_ERR
 *		-5 -- SPI_IMG_UPDATE_ERR
 */
#define PLAT_OCTEONTX_SPI_SECURE_UPDATE		0xc2000b05

/*
 * x1 - super_image_buffer_pointer
 * x2 - cm3_image_buffer_pointer
 *
 * Return:
 *	x0:
 *		0 -- Success
 *		-1 -- Invalid Arguments
 *		-2 -- SPI_CONFIG_ERR
 *		-3 -- SPI_MMAP_ERR
 *		-5 -- EIO
 *	x1: cm3 Image size
 */
#define PLAT_OCTEONTX_LOAD_SWITCH_FW		0xc2000b06

/*
 * Return:
 *	x0:
 *		0 -- Success
 *	x1: region address
 *	x2: region size
 */
#define PLAT_OCTEONTX_RVU_RSVD_REG_INFO		0xc2000b07

/*
 * x1 - image ID
 * x2 - efi_image_buffer_pointer
 *
 * Return:
 *	x0:
 *		0 -- Success
 *		-1 -- Invalid Arguments
 *		-2 -- SPI_CONFIG_ERR
 *		-3 -- SPI_MMAP_ERR
 *		-5 -- EIO
 *	x1: efi Image size
 */
#define PLAT_OCTEONTX_LOAD_EFI_APP		0xc2000b08

/*
 *
 * Return:
 *	x0:
 *		0 -- Success
 *		-1 -- Invalid Arguments
 *		-5 -- EIO
 *	x1: efi shared memory physical address
 *	x2: efi shared memory size
 */
#define PLAT_OCTEONTX_GET_EFI_SHARED_MEM	0xc2000b09

/*
 * x1 - user_buffer
 * x2 - size
 * x3 - bus
 * x4 - chip select
 *
 * Return:
 *	x0:
 *		0 -- Success
 *		-1 -- Invalid Arguments
 *	x1: efi Image size
 */
#define PLAT_OCTEONTX_WRITE_EFI_VAR		0xc2000b0a

/*
 * x1 - Offset in flash
 * x2 - Buffer
 * x3 - Operation size in bytes
 * x4 - x3[3:0] - Bus, x3[7:4] - Chipselect, x3[8-15] - operation
 *	Read - 1, Info - 4
 *
 * Return:
 *	x0:
 *		0 -- Success
 *		-1 -- Invalid Arguments
 */
#define PLAT_OCTEONTX_SEC_SPI_OP		0xc2000b0b

/*
 * x1 - descriptor address
 * x2 - descriptor size
 *
 * return:
 *	x0:
 *		0 -- success
 *		-1 -- error, check descriptor return codes
 *	x1:
 *		verify return code
 */
#define PLAT_OCTEONTX_VERIFY_FIRMWARE		0xc2000b0c

/*
 * SMC Call ID
 * x0 - PLAT_OCTEONTX_PERSIST_DATA_COMMAND
 * Input Args:
 * x1 - Persistent data type
 *	1 - UPDATE_USERDEF_PRESERVE_MEMSZ (update user defined
 *		preserve region size)
 * x2 - Size of the user defined preserve memory
 *		If size is 0, the region will be disabled.
 *		If size is non-zero, preserve memory size will
 *		be updated in SPI flash
 *
 * Returns:
 *	x0
 *		0 on success
 *		-1 on failure
 */
#define PLAT_OCTEONTX_PERSIST_DATA_COMMAND	0xc2000b0d

#define UPDATE_USERDEF_PRESERVE_MEMSZ	1

/*
 * SMC Call ID
 * x0 - PLAT_OCTEONTX_PERSIST_DATA_COMMAND
 *
 * Returns:
 *	x0
 *		0 if async_op is ready
 *		1 if async_op is in progress
 */
#define PLAT_OCTEONTX_ASYNC_SPI_STATUS		0xc2000b0e

/*
 * SMC Call ID
 * x0 - PLAT_OCTEONTX_RESET_RNG_EBG_HEALTH_STATE
 * Return:
 *      0 on Success
 *      -1 on Failure
 */
#define PLAT_OCTEONTX_RESET_RNG_EBG_HEALTH_STATE    0xc2000b0f

/*
 * SMC Call ID
 * x0 - PLAT_OCTEONTX_INJECT_ERROR RAS ECC injection
 * Return:
 *      0 on Success
 *      -1 on Failure
 */
#define PLAT_OCTEONTX_INJECT_ERROR	0xc2000b10

#define PLAT_OCTEONTX_EINJ_DSS		(0xd)

/*
 * x1 - user_buffer
 * x2 - size
 *
 * Return:
 *	x0:
 *		0 -- Success
 *		-1 -- Invalid Arguments
 *		-2 -- SPI_CONFIG_ERR
 *		-3 -- SPI_MMAP_ERR
 */
#define PLAT_OCTEONTX_SPI_READ_FLASH	0xc2000b11

/*
 * Return:
 *	x0: 0 -- Success
 *	x1: fwdata base physical address
 *	x2: fwdata size
 */
#define PLAT_OCTEONTX_GET_FWDATA_BASE 0xc2000b12

/*
 * x1[31:0]  - portm index
 *		or
 * x1[31:16] - eth id
 * x1[15:0]  - lmac id
 *
 * x2 - determines if x1 is portm index or eth/lmac
 *	0 - x1 is portm idx
 *	1 - x1 is eth/lmac
 *
 * Return:
 *	x0:
 *		 0 -- Success
 *		-1 -- failure (invalid input)
 *		-2 -- failure (non-Ethernet port selected)
 *	x1: sfp info offset in fwdata
 */
#define PLAT_OCTEONTX_GET_SFP_INFO_OFFSET 0xc2000b13

/* Customer specific SMC Calls */

/* SMC Call ID
 * x0 - PLAT_OCTEONTX_SPI_CHANGE - change GPIO mode
 * x1 - SPI controller ID
 * x2 - Change ownership to SPI
 * Return:
 *      0 on Success
 *      -1 on Failure
 */

#define PLAT_OCTEONTX_SPI_CHANGE  	0xc2000b14

/*
 * x1 - operation
 * x2 - 32 bit value for mem_test_settings, next
 * x3 - 32 bit value for mem_test_settings, power_on
 *
 * Return:
 *       x0 - Status field:
 *           0 - Success
 *           other values are error codes
 *       x1 - 32bit value for mem_test_settings, next
 *       x2 - 32 bit value for mem_test_settings, power_on
 */
#define PLAT_OCTEONTX_MEM_TEST_CONFIG   0xc2000b15

/*
 * x1 - Read register offset
 *
 * Return:
 *	x0:
 *	    0 -- Success
 *	    -5 -- EIO
 *	    other values are error codes
 *	x1:
 *	    Register value
 */
#define PLAT_OCTEONTX_EHSM_READ_CSR		0xc2000b16

 /* Number of family specific SMCs */
#define OTX3_NUM_SMC_CALLS			24


/* API that allows to define platform specific SMC CALLS */
uintptr_t cn10k_svc_smc_handler(uint32_t smc_fid,
			       u_register_t x1,
			       u_register_t x2,
			       u_register_t x3,
			       u_register_t x4,
			       void *cookie,
			       void *handle,
			       u_register_t flags);

#endif /* __PLAT_SVC_H__ */

