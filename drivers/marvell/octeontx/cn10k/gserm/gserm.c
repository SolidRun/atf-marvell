/*
 * Copyright (C) 2021 Marvell.
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

#include <stdlib.h>
#include <arch.h>
#include <debug.h>
#include <platform_def.h>
#include <drivers/delay_timer.h>
#include <octeontx_common.h>
#include <octeontx_utils.h>
#include <plat_portm_cfg.h>
#include <plat_board_cfg.h>
#include <qlm_cn10k.h>
#include <cavm-csrs-gserm.h>

#include <mcesd/mcesdTop.h>
#include <mcesd/mcesdApiTypes.h>
#include <mcesd/mcesdUtils.h>
#include <mcesd/mcesdInitialization.h>
#include <mcesd/N5C56GP5X4/mcesdN5C56GP5X4_Defs.h>
#include <mcesd/N5C56GP5X4/mcesdN5C56GP5X4_DeviceInit.h>
#include <mcesd/N5C56GP5X4/mcesdN5C56GP5X4_API.h>
#include <mcesd/N5C56GP5X4/mcesdN5C56GP5X4_FwDownload.h>
#include <mcesd-csrs-gserm.h>
#include <gserm_internal.h>
#include <gserm.h>

/* define DEBUG_ATF_GSERM ro enable debug logs */
#undef DEBUG_ATF_GSERM
#if defined(MRVL_TF_LOG_MODULE)
#  undef MRVL_TF_LOG_MODULE
#  define MRVL_TF_LOG_MODULE  MRVL_TF_LOG_MODULE_GSERM
#  define debug_gserm(...) (mrvl_tf_log_modules & MRVL_TF_LOG_MODULE) ? \
			   tf_log(LOG_MARKER_NOTICE __VA_ARGS__) : (void)0
#elif DEBUG_ATF_GSERM
#define debug_gserm printf
#else
#define debug_gserm(...) ((void) (0))
#endif

extern int load_gserx_image(void *buf, uint32_t *size);

/**
 * About "Pins":
 * A pin_map_t translates between an enum of the IP's pins and SoC registers.
 * To add a pin, add a line to the pin_map_t using the pin's offical name.
 * Use MCESD_PIN_AUTO(a,b) if pin b's enum fits the ##a_##b convention.
 * Use MCESD_PIN_MANUAL(a,b,c) if pin b's enum fits ##a_##c convention.
 * Use MCESD_PIN_TIED(a,b,c) if an enum ##a_##b is tied to a constant c
 * See "mcesd-csrs-gserm.h" for all pins relevant to our SoC software.
 */
const pin_map_t N5C56GP5X4_pins[] = {
	MCESD_PIN_TIED(N5C56GP5X4, PIN_ISOLATION_ENB, 1), // not supported
	MCESD_PIN_TIED(N5C56GP5X4, PIN_SIF_SEL, 0), // handled automagically
	MCESD_PIN_TIED(N5C56GP5X4, PIN_MCU_CLK, 400), // 400Mhz clock input
	MCESD_PIN_TIED(N5C56GP5X4, PIN_PHY_MODE, 4), // 4 == SerDes
	MCESD_PIN_TIED(N5C56GP5X4, PIN_PIPE_SEL, 0), // 0 == No PCIE PIPE
	MCESD_PIN_TIED(N5C56GP5X4, PIN_AVDD_SEL, 7), // FIXME: not tied
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_RESET),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_BG_RDY),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_DIRECT_ACCESS_EN),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_REFCLK_SEL(0)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_REFCLK_SEL(1)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_REFCLK_SEL(2)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_REFCLK_SEL(3)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_REF_FREF_SEL(0)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_REF_FREF_SEL(1)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_REF_FREF_SEL(2)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_REF_FREF_SEL(3)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_PHY_GEN_TX(0)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_PHY_GEN_TX(1)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_PHY_GEN_TX(2)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_PHY_GEN_TX(3)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_PHY_GEN_RX(0)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_PHY_GEN_RX(1)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_PHY_GEN_RX(2)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_PHY_GEN_RX(3)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_PU_PLL(0)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_PU_PLL(1)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_PU_PLL(2)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_PU_PLL(3)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_PU_RX(0)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_PU_RX(1)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_PU_RX(2)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_PU_RX(3)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_PU_TX(0)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_PU_TX(1)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_PU_TX(2)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_PU_TX(3)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_TX_IDLE(0)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_TX_IDLE(1)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_TX_IDLE(2)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_TX_IDLE(3)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_PU_IVREF),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_RX_TRAIN_ENABLE(0)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_RX_TRAIN_ENABLE(1)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_RX_TRAIN_ENABLE(2)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_RX_TRAIN_ENABLE(3)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_RX_TRAIN_FAILED(0)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_RX_TRAIN_FAILED(1)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_RX_TRAIN_FAILED(2)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_RX_TRAIN_FAILED(3)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_TX_TRAIN_ENABLE(0)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_TX_TRAIN_ENABLE(1)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_TX_TRAIN_ENABLE(2)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_TX_TRAIN_ENABLE(3)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_TX_TRAIN_FAILED(0)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_TX_TRAIN_FAILED(1)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_TX_TRAIN_FAILED(2)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_TX_TRAIN_FAILED(3)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_SQ_DETECTED_LPF(0)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_SQ_DETECTED_LPF(1)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_SQ_DETECTED_LPF(2)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_SQ_DETECTED_LPF(3)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_RX_INIT(0)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_RX_INIT(1)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_RX_INIT(2)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_RX_INIT(3)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_RX_INIT_DONE(0)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_RX_INIT_DONE(1)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_RX_INIT_DONE(2)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_RX_INIT_DONE(3)),
	MCESD_PIN_AUTO(N5C56GP5X4, PIN_SPD_CFG),
	MCESD_PIN_MANUAL(N5C56GP5X4, PIN_RX_TRAIN_COMPLETE(0), PIN_RX_TRAIN_COMP0),
	MCESD_PIN_MANUAL(N5C56GP5X4, PIN_RX_TRAIN_COMPLETE(1), PIN_RX_TRAIN_COMP1),
	MCESD_PIN_MANUAL(N5C56GP5X4, PIN_RX_TRAIN_COMPLETE(2), PIN_RX_TRAIN_COMP2),
	MCESD_PIN_MANUAL(N5C56GP5X4, PIN_RX_TRAIN_COMPLETE(3), PIN_RX_TRAIN_COMP3),
	MCESD_PIN_MANUAL(N5C56GP5X4, PIN_TX_TRAIN_COMPLETE(0), PIN_TX_TRAIN_COMP0),
	MCESD_PIN_MANUAL(N5C56GP5X4, PIN_TX_TRAIN_COMPLETE(1), PIN_TX_TRAIN_COMP1),
	MCESD_PIN_MANUAL(N5C56GP5X4, PIN_TX_TRAIN_COMPLETE(2), PIN_TX_TRAIN_COMP2),
	MCESD_PIN_MANUAL(N5C56GP5X4, PIN_TX_TRAIN_COMPLETE(3), PIN_TX_TRAIN_COMP3),
};

/**
 * reads the IP pin tied to the enumeration passed in as reg.
 *
 * @param dev    a pointer to the drive struct of the relevant GSERM
 * @param reg    the value associated with a pin, usually an enum
 * @param value  a pointer to the variable to return the value in
 *
 * @return MCESD_FAIL (1) on error, MCESD_OK (0) on success
 */
static MCESD_STATUS _mcesd_read_pin(MCESD_DEV_PTR dev,
					    MCESD_U16 reg,
					    MCESD_U16 *value)
{
	MCESD_STATUS status = MCESD_FAIL;

	if (value != NULL && dev != NULL) {
		struct gserm_config *_info = GET_DEV_INFO_PTR(dev);

		if (_info != NULL && _info->pin_map_size > reg) {
			const pin_map_t *_pin_info =
				&((_info->pin_map_ptr)[reg]);

			if (_pin_info != NULL) {
				switch (_pin_info->field_bits) {
				case -1: // tied off pin. see MCESD_PIN_TIED
					*value = _pin_info->reg_addr;
					status = MCESD_OK;
					break;
				case 0: // uninitalized pin. Fatal
					break;
				default: { // read pin normally
					READ_PIN(_info, _pin_info, *value);
					status = MCESD_OK;
					break;
				}
				}
			}
		}
	}
	return status;
}

/**
 * writes the IP pin tied to the enumeration passed in as reg.
 *
 * @param dev    a pointer to the drive struct of the relevant GSERM
 * @param reg    the value associated with a pin, usually an enum
 * @param value  the value to write to the pin
 *
 * @return MCESD_FAIL (1) on error, MCESD_OK (0) on success
 */
static MCESD_STATUS _mcesd_write_pin(MCESD_DEV_PTR dev,
				     MCESD_U16 reg,
				     MCESD_U16 value)
{
	MCESD_STATUS status = MCESD_FAIL;

	if (dev != NULL) {
		struct gserm_config *_info = GET_DEV_INFO_PTR(dev);

		if (_info != NULL && _info->pin_map_size > reg) {
			const pin_map_t *_pin_info =
				&((_info->pin_map_ptr)[reg]);

			if (_pin_info != NULL) {
				switch (_pin_info->field_bits) {
				case -1: // tied off pin. see MCESD_PIN_TIED.
					if (value == _pin_info->reg_addr) {
						status = MCESD_OK;
					}
					break;
				case 0: // uninitalized pin. Fatal
					break;
				default: { // write pin normally
					WRITE_PIN(_info, _pin_info, value);
					status = MCESD_OK;
					break;
				}
				}
			}
		}
	}
	return status;
}

/**
 * reads the internal IP register at the API address "reg"
 * assumes the given reg address is legal.
 *
 * @param dev    a pointer to the drive struct of the relevant GSERM
 * @param reg    the API address of a register
 *               SoC Address = 2 * API Address
 * @param value  a pointer to the  variable to return the value in
 *
 * @return MCESD_FAIL (1) on error, MCESD_OK (0) on success
 */
static MCESD_STATUS _mcesd_read_reg(MCESD_DEV_PTR dev,
				    MCESD_U32 reg,
				    MCESD_U32 *value)
{
	MCESD_STATUS status = MCESD_FAIL;

	if (dev != NULL && value != NULL) {
		struct gserm_config *_info = GET_DEV_INFO_PTR(dev);

		if (_info != NULL) {
			READ_REG(_info, reg, *value);
			status = MCESD_OK;
		}
	}
	return status;
}

/**
 * writes the internal IP register at the API address "reg"
 * assumes the given reg address is legal.
 *
 * @param dev    a pointer to the drive struct of the relevant GSERM
 * @param reg    the API address of a register
 *               SoC Address = 2 * API Address
 * @param value  the value to write to the register
 *
 * @return MCESD_FAIL (1) on error, MCESD_OK (0) on success
 */
static MCESD_STATUS _mcesd_write_reg(MCESD_DEV_PTR dev,
				     MCESD_U32 reg,
				     MCESD_U32 value)
{
	MCESD_STATUS status = MCESD_FAIL;

	if (dev != NULL) {
		struct gserm_config *_info = GET_DEV_INFO_PTR(dev);

		if (_info != NULL) {
			WRITE_REG(_info, reg, value);
			status = MCESD_OK;
		}
	}
	return status;
}

/**
 * driver hook that defines the SoC's prefered milisecond wait method.
 *
 * @param dev    a pointer to the drive struct of the relevant GSERM
 * @param ms     how many miliseconds to wait.
 *
 * @return MCESD_OK (0)
 */
static MCESD_STATUS _mcesd_wait(MCESD_DEV_PTR dev,
				MCESD_U32 ms)
{
	(void)dev; /* unused */

	mdelay(ms);
	return MCESD_OK;
}

/**
 * Check is PORTM mode index valid
 *
 * The range of modes used by PORTM is broader
 * than list of modes supported for GSERM.
 *
 * @param gserm_cfg	gserm configuration structure
 *
 * @return	true for supported modes, false otherwise
 *
 */
static bool gserm_is_mode_valid(struct gserm_config* gserm_cfg)
{
	cn10k_portm_modes_t portm_mode = gserm_cfg->portm_mode_idx;
	if (portm_mode < PORTM_MODE_SGMII ||
	    portm_mode > PORTM_MODE_100GBASE_KR2)
		return false;

	return true;
}

static int gserm_set_lane_config(struct gserm_config *gserm_cfg)
{
	switch (gserm_cfg->portm_mode_idx) {
	/* 1Gb/s modes */
	case PORTM_MODE_SGMII:
	case PORTM_MODE_1000BASE_X:
	case PORTM_MODE_SFI_1G:
		GSERM_SET_CONFIG(gserm_cfg,
				 N5C56GP5X4_SERDES_1P25G,
				 N5C56GP5X4_GRAY_CODE_DISABLE,
				 N5C56GP5X4_DATABUS_40BIT);
		break;

	/* AN mode */
	case PORTM_MODE_802_3AP:
		GSERM_SET_CONFIG(gserm_cfg,
				 N5C56GP5X4_SERDES_3P125G,
				 N5C56GP5X4_GRAY_CODE_DISABLE,
				 N5C56GP5X4_DATABUS_40BIT);
		break;

	/* 10Gb/s modes */
	case PORTM_MODE_10GBASE_KR:
	case PORTM_MODE_XFI:
	case PORTM_MODE_SFI:
	case PORTM_MODE_SXGMII_10G:
		GSERM_SET_CONFIG(gserm_cfg,
				 N5C56GP5X4_SERDES_10P3125G,
				 N5C56GP5X4_GRAY_CODE_DISABLE,
				 N5C56GP5X4_DATABUS_40BIT);
		break;

	/* 25Gb/s modes */
	case PORTM_MODE_25GAUI_C2C:
	case PORTM_MODE_25GAUI_C2M:
	case PORTM_MODE_25GBASE_CR:
	case PORTM_MODE_25GBASE_KR:
		GSERM_SET_CONFIG(gserm_cfg,
				 N5C56GP5X4_SERDES_25P78125G,
				 N5C56GP5X4_GRAY_CODE_DISABLE,
				 N5C56GP5X4_DATABUS_40BIT);
		break;

	/* 40Gb/s modes  and some 50Gb/s modes */
	case PORTM_MODE_XLAUI:
	case PORTM_MODE_XLAUI_C2M:
	case PORTM_MODE_40GBASE_CR4:
	case PORTM_MODE_40GBASE_KR4:
		GSERM_SET_CONFIG(gserm_cfg,
				 N5C56GP5X4_SERDES_10P3125G,
				 N5C56GP5X4_GRAY_CODE_DISABLE,
				 N5C56GP5X4_DATABUS_40BIT);
		break;

	case PORTM_MODE_LAUI_2_C2C:
	case PORTM_MODE_LAUI_2_C2M:
	case PORTM_MODE_50GBASE_CR2_C:
	case PORTM_MODE_50GBASE_KR2_C:
		GSERM_SET_CONFIG(gserm_cfg,
				 N5C56GP5X4_SERDES_25P78125G,
				 N5C56GP5X4_GRAY_CODE_DISABLE,
				 N5C56GP5X4_DATABUS_40BIT);
		break;

	/* 50Gb/s modes */
	case PORTM_MODE_50GAUI_1_C2C:
	case PORTM_MODE_50GAUI_1_C2M:
	case PORTM_MODE_50GBASE_USR:
	case PORTM_MODE_50GBASE_CR:
	case PORTM_MODE_50GBASE_KR:
		GSERM_SET_CONFIG(gserm_cfg,
				 N5C56GP5X4_SERDES_53P125G,
				 N5C56GP5X4_GRAY_CODE_ENABLE,
				 N5C56GP5X4_DATABUS_80BIT);
		break;

	/* 100Gb/s modes */
	case PORTM_MODE_100GBASE_CR4:
	case PORTM_MODE_100GBASE_KR4:
		GSERM_SET_CONFIG(gserm_cfg,
				 N5C56GP5X4_SERDES_25P78125G,
				 N5C56GP5X4_GRAY_CODE_DISABLE,
				 N5C56GP5X4_DATABUS_40BIT);
		break;

	case PORTM_MODE_100GAUI_2_C2C:
	case PORTM_MODE_100GAUI_2_C2M:
	case PORTM_MODE_100GBASE_USR2:
	case PORTM_MODE_100GBASE_CR2:
	case PORTM_MODE_100GBASE_KR2:
		GSERM_SET_CONFIG(gserm_cfg,
				 N5C56GP5X4_SERDES_53P125G,
				 N5C56GP5X4_GRAY_CODE_ENABLE,
				 N5C56GP5X4_DATABUS_80BIT);
		break;

	default:
		ERROR("%s: unsupported portm mode idx\n", __func__);
		return -1;
	}

	return 0;
}

static void gserm_set_reset(struct gserm_config *cfg, bool enable)
{
	/* Reset lines for reset and apb_reset are active high */
	uint8_t rst_val = enable ? 1 : 0;

	CSR_MODIFY(r, CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(cfg->gserm_idx),
		   r.s.reset = rst_val);
	CSR_MODIFY(r, CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(cfg->gserm_idx),
		   r.s.apb_reset = rst_val);
}

static int gserm_download_firmware(struct gserm_config *cfg, void *data,
				   uint32_t size)
{
	int status;
	int ret;
	uint8_t retry = cfg->polling_retries;
	bool mcu_init_done = false;

	if (!data || !size)
		return -1;

	/* Load firmware sequence */
	/* Clear firmware-ready bit and enable download mode */
	CSR_MODIFY(r, CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(cfg->gserm_idx),
		   r.s.fw_ready = 0);
	CSR_MODIFY(r, CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(cfg->gserm_idx),
		   r.s.pram_soc_en = 1);

	ret = API_N5C56GP5X4_DownloadFirmware(&cfg->mcesd_handle,
					      (MCESD_U32 *)data,
					      (MCESD_U32)size,
					      (MCESD_U16 *)&status);

	/* Disable firmware download mode, set firmware-ready bit */
	CSR_MODIFY(r, CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(cfg->gserm_idx),
		   r.s.fw_ready = 1);
	CSR_MODIFY(r, CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(cfg->gserm_idx),
		   r.s.pram_soc_en = 0);

	/* Wait for MCU */
	do {
		cavm_gsermx_pin_reserved_io_mcu_t r;

		r.u = CSR_READ(CAVM_GSERMX_PIN_RESERVED_IO_MCU(cfg->gserm_idx));
		mcu_init_done = r.s.pin_mcu_init_done ? true : false;
		if (mcu_init_done)
			break;
		mdelay(cfg->polling_wait);
	} while (retry--);

	if (ret || status) /* FIXME: Ignore for ASIM || !mcu_init_done) */
		return -1;

	return 0;
}


static int gserm_power_on(struct gserm_config *cfg)
{
	uint8_t lane_idx;
	uint8_t retry;
	bool plls_ok = false;
	E_N5C56GP5X4_SPD_CFG spd_cfg_val;

	/* Reset the PHY */
	gserm_set_reset(cfg, true);

	spd_cfg_val = (cfg->lanes_num == 1) ?
		      N5C56GP5X4_SPD_CFG_TS_RS : N5C56GP5X4_SPD_CFG_TS;

	INT_N5C56GP5X4_SetSpdCfg(&cfg->mcesd_handle, spd_cfg_val);

	/* Disable RX and TX */
	for_each_lane(cfg->lane_idx, cfg->lanes_num, lane_idx) {
		API_N5C56GP5X4_SetRefFreq(&cfg->mcesd_handle,
					  lane_idx,
					  N5C56GP5X4_REFFREQ_156P25MHZ,
					  N5C56GP5X4_REFCLK_SEL_GROUP1);
		API_N5C56GP5X4_SetPowerPLL(&cfg->mcesd_handle,
					   lane_idx,
					   MCESD_FALSE);
		API_N5C56GP5X4_SetPowerTx(&cfg->mcesd_handle,
					  lane_idx,
					  MCESD_FALSE);
		API_N5C56GP5X4_SetPowerRx(&cfg->mcesd_handle,
					  lane_idx,
					  MCESD_FALSE);
		API_N5C56GP5X4_SetTxOutputEnable(&cfg->mcesd_handle,
						 lane_idx,
						 MCESD_FALSE);
	}

	/* Set voltage and current reference */
	API_N5C56GP5X4_SetPowerIvRef(&cfg->mcesd_handle,
				     MCESD_TRUE);

	gserm_set_reset(cfg, false);

	/* Setup GSERM lane */
	for_each_lane(cfg->lane_idx, cfg->lanes_num, lane_idx) {

		API_N5C56GP5X4_SetTxRxBitRate(&cfg->mcesd_handle,
					      lane_idx,
					      cfg->speed_val);
		API_N5C56GP5X4_SetGrayCode(&cfg->mcesd_handle,
					   lane_idx,
					   cfg->gray_code_en_txrx,
					   cfg->gray_code_en_txrx);
		API_N5C56GP5X4_SetDataBusWidth(&cfg->mcesd_handle,
					       lane_idx,
					       cfg->data_bus_width_txrx,
					       cfg->data_bus_width_txrx);

	}

	for_each_lane(cfg->lane_idx, cfg->lanes_num, lane_idx) {
		/* Power up PHY PLL */
		API_N5C56GP5X4_SetPowerPLL(&cfg->mcesd_handle,
					   lane_idx,
					   MCESD_TRUE);
		/* Power up PHY transmiter */
		API_N5C56GP5X4_SetPowerTx(&cfg->mcesd_handle,
					  lane_idx,
					  MCESD_TRUE);
		/* Power up PHY receiver */
		API_N5C56GP5X4_SetPowerRx(&cfg->mcesd_handle,
					  lane_idx,
					  MCESD_TRUE);

		retry = cfg->polling_retries;
		do {
			cavm_gsermx_lanex_status_bsts_t status;

			status.u = CSR_READ(CAVM_GSERMX_LANEX_STATUS_BSTS(
						cfg->gserm_idx,
						lane_idx));
			plls_ok = (status.s.pll_ready_tx &&
				  status.s.pll_ready_rx) ? true : false;
			if (plls_ok)
				break;

			mdelay(cfg->polling_wait);
		} while (retry--);

		/* Ignore for ASIM */
#if 0
		if (!plls_ok)
			break;
#else
		plls_ok = true;
#endif
		/* Enable PHY transmiter output */
		API_N5C56GP5X4_SetTxOutputEnable(&cfg->mcesd_handle,
						 lane_idx,
						 MCESD_TRUE);
	}

	/* Something went wrong */
	if (!plls_ok)
		return -1;

	return 0;
}

/**
 * Initializes GSERM bases on PORTM configuration
 *
 * GSERM uses data prepared for PORTM/RPM through cn10k_fill_rpm_details()
 * to configure the gserm lanes. The details of configuration
 * are later managed by MCESD library.
 *
 * @pre: Must be called after cn10k_fill_rpm_details().
 * @pre: Must be called after timers_octeontx_init_delay().
 *
 */
void gserm_driver_init(void)
{
	int portm_idx;
	int last_gserm_updated = -1;
	void *fw_data = (void *) WORK_BUFFER_BASE;
	uint32_t fw_data_size = WORK_BUFFER_MAX_SIZE;
	static bool img_loaded;

	/* FIXME: Get firmware into buffer here */

	for_each_portm(0, cn10k_get_portm_count(), portm_idx) {
		struct gserm_config cfg = {0};
		gserm_state_lane_t gserm_state;
		cn10k_portm_modes_t mode;
		int ret;

		cfg.portm_mode_idx = portm_idx;
		/* Read gserm index and start lane index
		 * to find portm mode index */
		cfg.gserm_idx = cn10k_portm_get_gser_num(portm_idx);
		cfg.lane_idx = cn10k_portm_get_gser_lane_num(portm_idx);
		/* This data are kept in SCRATCH reg. */
		gserm_state = gserm_get_state(cfg.gserm_idx, cfg.lane_idx);
		/* Get current mode an number of lanes to configure */
		mode = gserm_state.s.mode;
		/* Get number of lanes to configure */
		cfg.lanes_num = cn10k_portm_get_mode_desc_serdes_num(mode);
		cfg.portm_mode_idx = mode;

		/* Mode might be invalid */
		if (!gserm_is_mode_valid(&cfg))
			continue;

		/* If mode is valid */
		ret = gserm_set_lane_config(&cfg);
		if (ret)
			break;

		INFO("PORTM: %d, GSERM: %d, Lanes: %d, mode: %d, lane_idx: %d\n",
		     portm_idx, cfg.gserm_idx, cfg.lanes_num,
		     cfg.portm_mode_idx, cfg.lane_idx);

		/* Configure MCESD library */
		cfg.pin_map_ptr = N5C56GP5X4_pins;
		cfg.pin_map_size = sizeof(N5C56GP5X4_pins) /
				   sizeof(N5C56GP5X4_pins[0]);

		ret = mcesdLoadDriver(GSERM_MCESD_MIN_MAJOR,
				      GSERM_MCESD_MIN_MINOR,
				      &_mcesd_read_reg,
				      &_mcesd_write_reg,
				      &_mcesd_write_pin,
				      &_mcesd_read_pin,
				      &_mcesd_wait,
				      (void *)&cfg,
				      &cfg.mcesd_handle);
		if (ret) {
			ERROR("Can't initialize MCESD library (%d)\n", ret);
			break;
		}

		/* Configure polling for events */
		cfg.polling_retries = 5;
		cfg.polling_wait = 100;

		/* Donwload GSERM FW */

		if (!img_loaded) {
			if (load_gserx_image(fw_data, &fw_data_size)) {
				WARN("Failing to load Firmware\n");
				return;
			}
			img_loaded = true;
		}

		if (last_gserm_updated != (int)cfg.gserm_idx)
			gserm_download_firmware(&cfg, fw_data, fw_data_size);
		/* Configure GSERM */
		gserm_power_on(&cfg);
	}
}

static inline portm_config_t *gserm_get_portm_cfg(int portm_idx)
{
	portm_config_t *cfg;

	if (portm_idx >= PORTM_MAX) {
		ERROR("value %d exceeds PORTM_MAX limit (%d)\n",
			portm_idx, PORTM_MAX);
		return NULL;
	}

	cfg = &plat_octeontx_bcfg->portm_cfg[portm_idx];

	if (cfg->portm_mode == PORTM_MODE_INACTIVE) {
		ERROR("portm index %d: "
			"associated SERDES lane used by another port\n",
			portm_idx);
		return NULL;
	}

	if (cfg->portm_mode == PORTM_MODE_DISABLED) {
		ERROR("portm index %d is invalid\n", portm_idx);
		return NULL;
	}

	return cfg;
}

static inline int lane_idx_to_gserm_lane(portm_config_t *portm_cfg,
					int lane_idx)
{
	int gserm_lane;
	uint32_t lane_map;

	if (lane_idx >= portm_cfg->gser_numlanes) {
		ERROR("requested lane index %d is invalid\n",
			lane_idx);
		return -1;
	}

	lane_map = portm_cfg->lane_map;

	gserm_lane = (lane_map >> (lane_idx * 4)) & 0xf;

	return gserm_lane;
}

static inline void portm_cfg_to_gserm_cfg(portm_config_t *portm_cfg,
					struct gserm_config *gserm_cfg)
{
	gserm_cfg->gserm_idx = portm_cfg->gserm;
	gserm_cfg->lane_idx = 0; //FIXME
	gserm_cfg->lanes_num = portm_cfg->gser_numlanes;
	gserm_cfg->portm_mode_idx = portm_cfg->portm_mode;

	/* Configure MCESD library */
	gserm_cfg->pin_map_ptr = N5C56GP5X4_pins;
	gserm_cfg->pin_map_size = ARRAY_SIZE(N5C56GP5X4_pins);

	mcesdLoadDriver(GSERM_MCESD_MIN_MAJOR,
			GSERM_MCESD_MIN_MINOR,
			&_mcesd_read_reg,
			&_mcesd_write_reg,
			&_mcesd_write_pin,
			&_mcesd_read_pin,
			&_mcesd_wait,
			(void *)gserm_cfg,
			&gserm_cfg->mcesd_handle);
}

int gserm_portm_get_gserm_mapping(int portm_idx, uint8_t *gserm_idx,
				  uint16_t *mapping, uint8_t *lanes_num)
{
	portm_config_t *cfg = gserm_get_portm_cfg(portm_idx);

	if (!cfg || !gserm_idx || !mapping || !lanes_num)
		return -1;

	*gserm_idx = cfg->gserm;
	*mapping = cfg->lane_map;
	*lanes_num = cfg->gser_numlanes;

	return 0;
}

int gserm_set_tx_eq_params(int portm_idx, int lane_idx,
			   int mask, tx_eq_params_t *params)
{
	int gserm_lane;
	portm_config_t *cfg;
	struct gserm_config gserm_cfg = {0};
	MCESD_STATUS ret;

	cfg = gserm_get_portm_cfg(portm_idx);
	if (!cfg)
		return -1;

	gserm_lane = lane_idx_to_gserm_lane(cfg, lane_idx);
	if (gserm_lane == -1)
		return -1;

	portm_cfg_to_gserm_cfg(cfg, &gserm_cfg);
	debug_gserm("%s: %d:%d (%d:%d) mask=0x%x\n",
		__func__, portm_idx, lane_idx, cfg->gserm, gserm_lane, mask);

	for (int param_idx = 0; param_idx < TXEQ_NUM; param_idx++) {
		if (!((mask >> param_idx) & 1))
			continue;

		ret = API_N5C56GP5X4_SetTxEqParam(&gserm_cfg.mcesd_handle,
				gserm_lane,
				param_idx,
				params->array[param_idx]);

		if (ret == MCESD_FAIL)
			return -1;

		debug_gserm("%s: %d:%d set tx_eq_param[%d]=%d OK\n",
			__func__, portm_idx, lane_idx,
			param_idx, params->array[param_idx]);
	}

	return 0;
}

int gserm_get_tx_eq_params(int portm_idx, int lane_idx,
			   tx_eq_params_t *params)
{
	int gserm_lane;
	portm_config_t *cfg;
	struct gserm_config gserm_cfg = {0};
	MCESD_STATUS ret;

	cfg = gserm_get_portm_cfg(portm_idx);
	if (!cfg)
		return -1;

	gserm_lane = lane_idx_to_gserm_lane(cfg, lane_idx);
	if (gserm_lane == -1)
		return -1;

	portm_cfg_to_gserm_cfg(cfg, &gserm_cfg);
	debug_gserm("%s: %d:%d (%d:%d)\n",
		__func__, portm_idx, lane_idx, cfg->gserm, gserm_lane);

	for (int param_idx = 0; param_idx < TXEQ_NUM; param_idx++) {
		MCESD_U32 value;

		ret = API_N5C56GP5X4_GetTxEqParam(&gserm_cfg.mcesd_handle,
				gserm_lane,
				param_idx,
				&value);

		if (ret == MCESD_FAIL)
			return -1;

		debug_gserm("%s: %d:%d tx_eq_param[%d]=%d\n",
			__func__, portm_idx, lane_idx, param_idx, value);

		params[lane_idx].array[param_idx] = (uint16_t)(value & 0xffff);
	}

	return 0;
}

int gserm_get_rx_eq_params(int portm_idx, int lane_idx,
			   rx_eq_params_t *params)
{
	int gserm_lane;
	portm_config_t *cfg;
	struct gserm_config gserm_cfg = {0};
	MCESD_STATUS ret;

	if (!params)
		return -1;

	cfg = gserm_get_portm_cfg(portm_idx);
	if (!cfg)
		return -1;

	gserm_lane = lane_idx_to_gserm_lane(cfg, lane_idx);
	if (gserm_lane == -1)
		return -1;

	portm_cfg_to_gserm_cfg(cfg, &gserm_cfg);
	debug_gserm("%s: %d:%d (%d:%d)\n",
		__func__, portm_idx, lane_idx, cfg->gserm, gserm_lane);

	for (int param_idx = 0; param_idx < DFE_TAPS_NUM; param_idx++) {

		MCESD_32 value;

		ret = API_N5C56GP5X4_GetDfeTap(&gserm_cfg.mcesd_handle,
				gserm_lane,
				N5C56GP5X4_EYE_MID,
				param_idx,
				&value);

		if (ret == MCESD_FAIL)
			return -1;

		debug_gserm("%s: %d:%d dfe_tap[%d]=%d\n",
			__func__, portm_idx, lane_idx,
			param_idx, value);

		params[lane_idx].dfe_taps[param_idx] = value;
	}

	for (int param_idx = 0; param_idx < CTLE_PARAMS_NUM; param_idx++) {

		MCESD_U32 value;

		ret = API_N5C56GP5X4_GetCTLEParam(&gserm_cfg.mcesd_handle,
				gserm_lane,
				param_idx,
				&value);

		if (ret == MCESD_FAIL)
			return -1;

		debug_gserm("%s: %d:%d ctle_param[%d]=%d\n",
			__func__, portm_idx, lane_idx,
			param_idx, value);

		params[lane_idx].ctle_params[param_idx] = value;
	}

	return 0;
}

int gserm_set_loopback_mode(int portm_idx, int lane_idx,
			    loopback_mode_t lpbk_mode)
{
	int gserm_lane;
	portm_config_t *cfg;
	struct gserm_config gserm_cfg = {0};
	E_N5C56GP5X4_DATAPATH dataPath;
	MCESD_STATUS ret;

	cfg = gserm_get_portm_cfg(portm_idx);
	if (!cfg)
		return -1;

	gserm_lane = lane_idx_to_gserm_lane(cfg, lane_idx);
	if (gserm_lane == -1)
		return -1;

	portm_cfg_to_gserm_cfg(cfg, &gserm_cfg);
	debug_gserm("%s: %d:%d (%d:%d) mode=%d\n",
		__func__, portm_idx, lane_idx, cfg->gserm, gserm_lane,
							lpbk_mode);

	switch (lpbk_mode) {
	case LPBK_MODE_NONE:
		dataPath = N5C56GP5X4_PATH_EXTERNAL;
		break;
	case LPBK_MODE_FED:
		dataPath = N5C56GP5X4_PATH_FAR_END_LB;
		break;
	case LPBK_MODE_NEA:
	case LPBK_MODE_NED:
	default:
		/* Near End Analog/Digital are not supported yet
		 * by the MCESD library.
		 */
		dataPath = N5C56GP5X4_PATH_UNKNOWN;
		ERROR("%s: %d:%d Loopback type %d is not supported yet\n"
			"Support will be added in the future\n",
			__func__, portm_idx, lane_idx, lpbk_mode);
		return -1;
	}

	ret = API_N5C56GP5X4_SetDataPath(&gserm_cfg.mcesd_handle,
					gserm_lane,
					dataPath);
	if (ret == MCESD_FAIL)
		return -1;

	return 0;
}

static E_N5C56GP5X4_PATTERN convert_to_mcesd_pattern(int pattern)
{
	switch (pattern) {
	case 7:
		return N5C56GP5X4_PAT_PRBS7;
	case 9:
		return N5C56GP5X4_PAT_PRBS9;
	case 11:
		return N5C56GP5X4_PAT_PRBS11;
	case 15:
		return N5C56GP5X4_PAT_PRBS15;
	case 16:
		return N5C56GP5X4_PAT_PRBS16;
	case 23:
		return N5C56GP5X4_PAT_PRBS23;
	case 31:
		return N5C56GP5X4_PAT_PRBS31;
	case 32:
		return N5C56GP5X4_PAT_PRBS32;
	default:
		return -1;
	}
}

int gserm_start_prbs(int portm_idx, int lane_idx,
		     int pattern, int flags,
		     int err_inject_cnt)
{
	int gserm_lane;
	portm_config_t *cfg;
	struct gserm_config gserm_cfg = {0};
	E_N5C56GP5X4_PATTERN mcesd_pattern;
	MCESD_STATUS ret;

	cfg = gserm_get_portm_cfg(portm_idx);
	if (!cfg)
		return -1;

	gserm_lane = lane_idx_to_gserm_lane(cfg, lane_idx);
	if (gserm_lane == -1)
		return -1;

	portm_cfg_to_gserm_cfg(cfg, &gserm_cfg);
	debug_gserm("%s: %d:%d (%d:%d) pattern=%d, flags=0x%x, inject_cnt=%d\n",
		__func__, portm_idx, lane_idx, cfg->gserm, gserm_lane, pattern,
		flags, err_inject_cnt);

	mcesd_pattern = convert_to_mcesd_pattern(pattern);
	if (mcesd_pattern == -1) {
		ERROR("%s: %d:%d pattern: %d not supported\n",
			__func__, portm_idx, lane_idx, pattern);
		return -1;
	}

	ret = API_N5C56GP5X4_SetTxRxPattern(&gserm_cfg.mcesd_handle,
			gserm_lane,
			(flags & PRBS_GENERATOR_ON) ? mcesd_pattern : 0,
			(flags & PRBS_CHECKER_ON) ? mcesd_pattern : 0,
			"", "");
	if (ret == MCESD_FAIL) {
		ERROR("%s: %d:%d setting pattern: %d failed\n",
			__func__, portm_idx, lane_idx, pattern);
		return -1;
	}

	if (err_inject_cnt) {
		ret = API_N5C56GP5X4_TxInjectError(&gserm_cfg.mcesd_handle,
			gserm_lane, err_inject_cnt);
		if (ret == MCESD_FAIL)
			WARN("%s: %d:%d error injection=%d failed\n",
				__func__, portm_idx, lane_idx, err_inject_cnt);
	}

	ret = API_N5C56GP5X4_StartPhyTest(&gserm_cfg.mcesd_handle, gserm_lane);
	if (ret == MCESD_FAIL) {
		return -1;
	}

	return 0;
}

int gserm_stop_prbs(int portm_idx, int lane_idx)
{
	int gserm_lane;
	portm_config_t *cfg;
	struct gserm_config gserm_cfg = {0};
	MCESD_STATUS ret;

	cfg = gserm_get_portm_cfg(portm_idx);
	if (!cfg)
		return -1;

	gserm_lane = lane_idx_to_gserm_lane(cfg, lane_idx);
	if (gserm_lane == -1)
		return -1;

	portm_cfg_to_gserm_cfg(cfg, &gserm_cfg);
	debug_gserm("%s: %d:%d (%d:%d)\n",
		__func__, portm_idx, lane_idx, cfg->gserm, gserm_lane);

	ret = API_N5C56GP5X4_StopPhyTest(&gserm_cfg.mcesd_handle,
				gserm_lane);
	if (ret == MCESD_FAIL)
		return -1;

	return 0;
}

int gserm_clear_prbs(int portm_idx, int lane_idx)
{
	int gserm_lane;
	portm_config_t *cfg;
	struct gserm_config gserm_cfg = {0};
	MCESD_STATUS ret;

	cfg = gserm_get_portm_cfg(portm_idx);
	if (!cfg)
		return -1;

	gserm_lane = lane_idx_to_gserm_lane(cfg, lane_idx);
	if (gserm_lane == -1)
		return -1;

	portm_cfg_to_gserm_cfg(cfg, &gserm_cfg);
	debug_gserm("%s: %d:%d (%d:%d)\n",
		__func__, portm_idx, lane_idx, cfg->gserm, gserm_lane);

	ret = API_N5C56GP5X4_ResetComparatorStats(&gserm_cfg.mcesd_handle,
			gserm_lane);
	if (ret == MCESD_FAIL)
		return -1;

	return 0;
}

int gserm_show_prbs(int portm_idx, int lane_idx,
		    prbs_error_stats_t *error_stats)
{
	int gserm_lane;
	portm_config_t *cfg;
	struct gserm_config gserm_cfg = {0};
	S_N5C56GP5X4_PATTERN_STATISTICS statistics;
	MCESD_STATUS ret;

	cfg = gserm_get_portm_cfg(portm_idx);

	if (!cfg || !error_stats)
		return -1;

	gserm_lane = lane_idx_to_gserm_lane(cfg, lane_idx);
	if (gserm_lane == -1)
		return -1;

	portm_cfg_to_gserm_cfg(cfg, &gserm_cfg);
	debug_gserm("%s: %d:%d (%d:%d)\n",
		__func__, portm_idx, lane_idx, cfg->gserm, gserm_lane);

	ret = API_N5C56GP5X4_GetComparatorStats(&gserm_cfg.mcesd_handle,
						gserm_lane, &statistics);
	if (ret == MCESD_FAIL)
		return -1;

	debug_gserm("%s: %d:%d (%d:%d) total_bits=%llu, error_bits=%llu\n",
		__func__, portm_idx, lane_idx, cfg->gserm, gserm_lane,
		statistics.totalBits, statistics.totalErrorBits);

	error_stats[lane_idx].total_bits = statistics.totalBits;
	error_stats[lane_idx].error_bits = statistics.totalErrorBits;

	return 0;
}

