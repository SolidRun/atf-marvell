/*
 * Copyright (c) 2019 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
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
 * x1 - ooo
 * Return:
 *	0x0 -- Success
 *	0x2 -- Fail
 */
#define PLAT_OCTEONTX_OOO_MASK		0xc2000b07
/*
 * x1 - wfe mask
 * Return:
 *	0x0 -- Success
 *	0x2 -- Fail
 */
#define PLAT_OCTEONTX_WFE_CONFIG	0xc2000b06

/*
 * No input
 * Return:
 *	x0:
 *		0x0 -- Success
 *		0x2 -- Fail
 *	x1 - in case of success - address to eye cmd data
 *	x2 - in case of success - address to serdes cmd data
 */
#define PLAT_OCTEONTX_SERDES_DBG_GET_MEM	0xc2000d04

/*
 * x1 - qlm
 * x2 - lane
 * x3 - display data to console
 * Return:
 *	x0:
 *		0x0 -- Success
 *		0x1 -- Pending
 *		0x2 -- Fail
 */
#define PLAT_OCTEONTX_SERDES_DBG_GET_EYE	0xc2000d05

/*
 * x1 - qlm
 * x2 - lane
 * x3 - display data to console
 * Return:
 *	x0:
 *		0x0 -- Success
 *		0x2 -- Fail
 */
#define PLAT_OCTEONTX_SERDES_DBG_GET_CONF	0xc2000d06

/*
 * x1 - cmd
 *     1 - CGX_PRBS_START_CMD - start prbs for qlm(x2) in mode(x3)
 *     2 - CGX_PRBS_STOP_CMD  - stop prbs for qlm(x2)
 *     3 - CGX_PRBS_GET_DATA_CMD - save errors for running prbs for qlm(x2)
 *                                 under SERDES_PRBS_DATA_BASE address.
 * x2 - qlm
 * x3 - if cmd == 1 then mode else ignored
 * Return:
 *	x0:
 *		0x0 -- Success
 *		0x2 -- Fail
 */
#define PLAT_OCTEONTX_SERDES_DBG_PRBS		0xc2000d07

/*
 * x1 - qlm
 * x2 - lane
 * x3 - tx_swing
 * x4 - tx_pre
 * x5 - tx_post
 * Return:
 *	x0:
 *		0x0 -- Success
 *		0x2 -- Fail
 */
#define PLAT_OCTEONTX_SERDES_DBG_SET_CONF	0xc2000d08

/*
 * x1 - qlm
 * x2 - lane
 * x3 - flags
 * Return:
 *	x0:
 *		0x0 -- Success
 *		0x2 -- Fail
 */
#define PLAT_OCTEONTX_SERDES_DBG_SET_LOOP	0xc2000d09

/*
 *
 * Return:
 *      x0:
 *              0 -- Success
 *              -1 -- Invalid Arguments
 *              -5 -- EIO
 *      x1: efi shared memory physical address
 *      x2: efi shared memory size
 */
#define PLAT_OCTEONTX_GET_EFI_SHARED_MEM        0xc2000b09


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
 * x1[0] is denoting host or line side:
 *		1 - host side
 *		0 - line side

 * x2[0] - Eye capture type:
 *		0 - Eye measure
 *		1 - Eye Plot
 *
 * x3 - eth
 * x4 - lmac
 *
 * Return:
 *	x0: 0 (Success) or -1 (Fail)
 *	x1: register value (only in case of Read cmd)
 *
 */
#define PLAT_OCTEONTX_PHY_EYE_CAPTURE		0xc2000e05

/*
 * x1 - cmd, (mode or type)
 *	x1[15:8]: command
 *		1 - Start
 *		2 - Stop
 *		3 - Set
 *		4 - Get
 *	x1[7:0]: mode - if cmd == start | stop
 *		0 - Generator
 *		1 - Checker
 *		2 - Generator & Checker
 *	x1[7:0]: type - if cmd == Set
 *		0 - SFD
 *		1 - Pattern Control
 *		2 - Generate CRC
 *		3 - Initial Payload
 *		4 - Frame length control
 *		5 - Num of packets
 *		6 - Random IPG
 *		7 - IPG Duration
 *		8 - Get Config
 * x2 - If cmd == (start | stop) then is denoting host or line side:
 *		1 - host side
 *		0 - line side
 *	If (cmd == set) then denoting the value for the set command
 * x3 - eth
 * x4 - lmac
 *
 * Return:
 *	x0: 0 (Success) or -1 (Fail)
 *	x1: register value (only in case of Read cmd)
 *
 */
#define PLAT_OCTEONTX_PHY_PKT_GEN		0xc2000e06


/*
 * x1 - user_buffer
 * x2 - size
 * x3 - bus
 * x4 - chip select
 *
 * Return:
 *      x0:
 *              0 -- Success
 *              -1 -- Invalid Arguments
 *      x1: efi Image size
 */
#define PLAT_OCTEONTX_WRITE_EFI_VAR             0xc2000b0a

/*
 * x1 - AVS bus status
 *
 * Return:
 *      x0:
 *               0 -- Success
 *              -1 -- Error
 */
#define PLAT_OCTEONTX_SET_AVS_STATUS		0xc2000b08

/*
 * Return:
 *	x0: 0 -- Success
 *	x1: fwdata base physical address
 *	x2: fwdata size
 */
#define PLAT_OCTEONTX_GET_FWDATA_BASE 0xc2000b12

/*
 * x1[31:16] - eth id
 * x1[15:0]  - lmac id
 *
 * x2 - should be 1
 *
 * Return:
 *	x0:
 *		 0 -- Success
 *		-1 -- failure (invalid input)
 *		-2 -- failure (non-Ethernet port selected)
 *	x1: sfp info offset in fwdata
 */
#define PLAT_OCTEONTX_GET_SFP_INFO_OFFSET 0xc2000b13

/*
 * SMC Call ID
 * x0 - PLAT_OCTEONTX_PHY_ADVANCE_CMDS
 *
 * x1 - descriptor address
 * x2 - descriptor size
 *
 * Returns:
 *      x0
 *              0 -- Success
 *             -1 -- failure (invalid input or command failed)
 */
#define PLAT_OCTEONTX_PHY_ADVANCE_CMDS                0xc2000b0b


#define PLAT_OCTEON_SW_UPDATE  0xc2000b0b

/* Number of family specific SMCs */
#define OTX2_NUM_SMC_CALLS			20

/* API that allows to define platform specific SMC CALLS */
uintptr_t otx2_svc_smc_handler(uint32_t smc_fid,
			       u_register_t x1,
			       u_register_t x2,
			       u_register_t x3,
			       u_register_t x4,
			       void *cookie,
			       void *handle,
			       u_register_t flags);

int octeontx2_configure_ooo(unsigned int x1);
int octeontx2_configure_ooo_mask(uint64_t x1);
int octeontx2_configure_wfe(uint64_t x1);

int phy_macsec_commads(int eth_id, int lmac_id, int *mac_cmds, int size);

#endif /* __PLAT_SVC_H__ */

