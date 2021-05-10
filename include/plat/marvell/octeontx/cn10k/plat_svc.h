/*
 * Copyright (C) 2020 Marvell.
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
 * x1 - cmd
 *	1 - PHY_PRBS_START_CMD - start phy prbs with config (x2)
 *					for phy @eth(x3),lmac(x4)
 *	2 - PHY_PRBS_STOP_CMD  - stop phy prbs with config (x2)
 *					for phy @eth(x3),lmac(x4)
 *	3 - PHY_PRBS_GET_DATA_CMD - get prbs error counters with config(x2)
 *                                   for phy @eth(x3),lmac(x4)
 * x2 - config, fields are:
 *	- x2[3:2] is pattern selector, options are:
 *		0x00 - PRBS_7
 *		0x01 - PRBS_23
 *		0x10 - PRBS_31
 *		0x11 - PRBS_1010
 *	- x2[1] is the direction
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
 *	0 - PHY_DISABLE_LINE_LPBCK_CMD - disable line loopback for
 *						phy @eth(x2),lmac(x3)
 *	1 - PHY_ENABLE_LINE_LPBCK_CMD  - enable line loopback for
 *						phy @eth(x2),lmac(x3)
 *
 * x2 - eth
 * x3 - lmac
 * Return:
 *	x0: 0 (Success) or -1 (Fail)
 *
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

/* Number of family specific SMCs */
#define OTX3_NUM_SMC_CALLS			15

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

