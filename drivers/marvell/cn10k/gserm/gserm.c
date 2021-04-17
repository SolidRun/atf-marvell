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

#include <arch.h>
#include <debug.h>
#include <platform_def.h>
#include <drivers/delay_timer.h>
#include <octeontx_common.h>
#include <octeontx_utils.h>
#include <plat_portm_cfg.h>
#include <qlm/qlm_cn10k.h>
#include <cavm-csrs-gserm.h>

#include "mcesd/mcesdTop.h"
#include "mcesd/mcesdApiTypes.h"
#include "mcesd/mcesdUtils.h"
#include "mcesd/mcesdInitialization.h"
#include "mcesd/N5C56GP5X4/mcesdN5C56GP5X4_Defs.h"
#include "mcesd/N5C56GP5X4/mcesdN5C56GP5X4_DeviceInit.h"
#include "mcesd/N5C56GP5X4/mcesdN5C56GP5X4_API.h"
#include "mcesd-csrs-gserm.h"
#include <gserm.h>


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
		gserm_info *_info = GET_DEV_INFO_PTR(dev);

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
		gserm_info *_info = GET_DEV_INFO_PTR(dev);

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
		gserm_info *_info = GET_DEV_INFO_PTR(dev);

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
		gserm_info *_info = GET_DEV_INFO_PTR(dev);

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
 * checks if a MCESD_DEV structure is fully initalized.
 *
 * @param dev    a pointer to the drive struct to check.
 *
 * @return MCESD_FAIL (1) on error, MCESD_OK (0) on success
 */
MCESD_STATUS check_mcesd_dev(MCESD_DEV_PTR dev)
{
	MCESD_STATUS status = MCESD_FAIL;

	if (dev != NULL) {
		gserm_info *info = GET_DEV_INFO_PTR(dev);

		if (dev->devEnabled && info != NULL) {
			if (info->pin_map_ptr != NULL) {
				status = MCESD_OK;
			}
		}
	}
	return status;
}

/**
 * initalizes all fields in the given gserm driver structure
 * caller must manage scope of driver and info variables
 *
 * @param instance      the number of the gserm to initalize
 * @param driver        the driver structure to initalize
 * @param info          the info structure to store in the driver struct
 *
 * @return MCESD_FAIL (1) on error, MCESD_OK (0) on success
 */
MCESD_STATUS gserm_mcesd_init(int instance,
			       MCESD_DEV_PTR driver,
			       gserm_info *info)
{
	MCESD_STATUS status = MCESD_FAIL;

	if (info != NULL && driver != NULL) {
		info->instance = instance;
		info->pin_map_ptr = N5C56GP5X4_pins;
		info->pin_map_size = sizeof(N5C56GP5X4_pins) /
			sizeof(N5C56GP5X4_pins[0]);
		status =  mcesdLoadDriver(1, 1,
					  &_mcesd_read_reg, &_mcesd_write_reg,
					  &_mcesd_write_pin, &_mcesd_read_pin,
					  &_mcesd_wait,
					  (void *)(info), driver);
	}
	return status;
}

static cn10k_lane_params_desc_t
gserm_lane_params_build(cn10k_portm_modes_t mode, uint8_t phy_gen,
			uint8_t code_en, uint8_t pam2_en)
{
	cn10k_lane_params_desc_t params;

	params.u = 0;
	params.s.mode = mode;
	params.s.phy_gen_tx = phy_gen;
	params.s.phy_gen_rx = phy_gen;
	params.s.txdata_gray_code_en = code_en;
	params.s.rxdata_gray_code_en = code_en;
	params.s.txdata_pre_code_en = code_en;
	params.s.rxdata_pre_code_en = code_en;
	params.s.tx_pam2_en_lane = pam2_en;
	params.s.rx_pam2_en_lane = pam2_en;

	return params;
}


static bool
gserm_is_mode_valid(cn10k_portm_modes_t portm_mode)
{
	if (portm_mode < PORTM_MODE_SGMII ||
	    portm_mode > PORTM_MODE_100GBASE_KR2)
		return false;
	return true;
}

static cn10k_lane_params_desc_t
gserm_lane_params_for_portm_mode(cn10k_portm_modes_t portm_mode)
{
	switch (portm_mode) {
	/* 1Gb/s modes */
	case PORTM_MODE_SGMII:
	case PORTM_MODE_1000BASE_X:
	case PORTM_MODE_SFI_1G:
		return gserm_lane_params_build(portm_mode, 0x2, 0, 1);
	/* AN mode */
	case PORTM_MODE_802_3AP:
		return gserm_lane_params_build(portm_mode, 0x6, 0, 1);
	/* 10Gb/s modes */
	case PORTM_MODE_10GBASE_KR:
	case PORTM_MODE_XFI:
	case PORTM_MODE_SFI:
	case PORTM_MODE_SXGMII_10G:
		return gserm_lane_params_build(portm_mode, 0x11, 0, 1);
	/* 25Gb/s modes */
	case PORTM_MODE_25GAUI_C2C:
	case PORTM_MODE_25GAUI_C2M:
	case PORTM_MODE_25GBASE_CR:
	case PORTM_MODE_25GBASE_KR:
	/* 40Gb/s modes  and some 50Gb/s modes */
	case PORTM_MODE_XLAUI:
	case PORTM_MODE_XLAUI_C2M:
	case PORTM_MODE_40GBASE_CR4:
	case PORTM_MODE_40GBASE_KR4:
	case PORTM_MODE_LAUI_2_C2C:
	case PORTM_MODE_LAUI_2_C2M:
	case PORTM_MODE_50GBASE_CR2_C:
	case PORTM_MODE_50GBASE_KR2_C:
		return gserm_lane_params_build(portm_mode, 0x1a, 0, 1);
	/* 50Gb/s modes */
	case PORTM_MODE_50GAUI_1_C2C:
	case PORTM_MODE_50GAUI_1_C2M:
	case PORTM_MODE_50GBASE_CR:
	case PORTM_MODE_50GBASE_KR:
		return gserm_lane_params_build(portm_mode, 0x23, 1, 0);
	/* 100Gb/s modes */
	case PORTM_MODE_100GBASE_CR4:
	case PORTM_MODE_100GBASE_KR4:
		return gserm_lane_params_build(portm_mode, 0x1a, 0, 1);

	case PORTM_MODE_100GAUI_2_C2C:
	case PORTM_MODE_100GAUI_2_C2M:
	case PORTM_MODE_100GBASE_CR2:
	case PORTM_MODE_100GBASE_KR2:
		return gserm_lane_params_build(portm_mode, 0x23, 1, 0);
	default:
		return gserm_lane_params_build(portm_mode, 0x00, 0, 0);
	}

	return gserm_lane_params_build(portm_mode, 0x00, 0, 0);
}


static void gserm_power_on(unsigned int gserm_id,
			   const unsigned int lanes,
			   cn10k_lane_params_desc_t lanes_params)
{
	unsigned int lane_idx;
	unsigned int spd_val;

	/* Reset the PHY */
	CAVM_MODIFY_GSERM_CSR(cavm_gsermx_common_phy_ctrl_bcfg_t,
			CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(gserm_id),
			      reset, 0x1);
	CAVM_MODIFY_GSERM_CSR(cavm_gsermx_common_phy_ctrl_bcfg_t,
			      CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(gserm_id),
			      apb_reset, 0x1);

	spd_val = (lanes == 1) ? 0x1 : 0x2;
	/* Set the speed configuration? (Shouldn't be this a lane number) */
	CAVM_MODIFY_GSERM_CSR(cavm_gsermx_common_phy_ctrl_bcfg_t,
			      CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(gserm_id),
			      spd_cfg, spd_val);

	for (lane_idx = 0; lane_idx < lanes; lane_idx++) {
		/* Select the reference clock input */
		CAVM_MODIFY_GSERM_CSR(cavm_gsermx_lanex_control_bcfg_t,
				      CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm_id,
								     lane_idx),
				      ref_fref_sel, 0x7);
		/* Power down PHY PLL */
		CAVM_MODIFY_GSERM_CSR(cavm_gsermx_lanex_control_bcfg_t,
				      CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm_id,
								     lane_idx),
				      pu_pll, 0x0);
		/* Power down PHY receiver */
		CAVM_MODIFY_GSERM_CSR(cavm_gsermx_lanex_control_bcfg_t,
				      CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm_id,
								     lane_idx),
				      pu_rx, 0x0);
		/* Power down PHY transmiter */
		CAVM_MODIFY_GSERM_CSR(cavm_gsermx_lanex_control_bcfg_t,
				      CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm_id,
								     lane_idx),
				      pu_tx, 0x0);
		/* Disable PHY transmiter output */
		CAVM_MODIFY_GSERM_CSR(cavm_gsermx_lanex_control_bcfg_t,
				      CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm_id,
								     lane_idx),
				      tx_idle, 0x1);
	}

	/* Power on voltage and current reference */
	CAVM_MODIFY_GSERM_CSR(cavm_gsermx_common_phy_ctrl_bcfg_t,
			      CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(gserm_id),
			      pu_ivref, 0x1);

	/* Release PHY from reset */
	CAVM_MODIFY_GSERM_CSR(cavm_gsermx_common_phy_ctrl_bcfg_t,
			CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(gserm_id),
			      reset, 0x0);
	CAVM_MODIFY_GSERM_CSR(cavm_gsermx_common_phy_ctrl_bcfg_t,
			      CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(gserm_id),
			      apb_reset, 0x0);

	/* Load firmware sequence */
	/* Clear firmware-ready bit */
	CAVM_MODIFY_GSERM_CSR(cavm_gsermx_common_phy_ctrl_bcfg_t,
			      CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(gserm_id),
			      fw_ready, 0x0);
	/* Enable firmware download mode */
	CAVM_MODIFY_GSERM_CSR(cavm_gsermx_common_phy_ctrl_bcfg_t,
			      CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(gserm_id),
			      pram_soc_en, 0x1);


	/* FIXME: Load firmware here !!!! */

	/* Disable firmware download mode */
	CAVM_MODIFY_GSERM_CSR(cavm_gsermx_common_phy_ctrl_bcfg_t,
			      CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(gserm_id),
			      pram_soc_en, 0x0);

	/* Set firmware-ready bit */
	CAVM_MODIFY_GSERM_CSR(cavm_gsermx_common_phy_ctrl_bcfg_t,
			      CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(gserm_id),
			      fw_ready, 0x1);

	/* FIXME: Do polling for MCU ready */
	{
		cavm_gsermx_pin_reserved_io_mcu_t status;

		status.u = CSR_READ(CAVM_GSERMX_PIN_RESERVED_IO_MCU(gserm_id));
		(void)status;
	}


	for (lane_idx = 0; lane_idx < lanes; lane_idx++) {
		/* Configure SERDES is configured for 10G (SFI or XFI) */
		CAVM_MODIFY_GSERM_CSR(cavm_gsermx_lanex_control_bcfg_t,
				      CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm_id,
								     lane_idx),
				      phy_gen_rx, lanes_params.s.phy_gen_rx);
		CAVM_MODIFY_GSERM_CSR(cavm_gsermx_lanex_control_bcfg_t,
				      CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm_id,
								     lane_idx),
				      phy_gen_tx, lanes_params.s.phy_gen_tx);
		CAVM_MODIFY_GSERM_CSR(cavm_gsermx_lanex_control_bcfg_t,
				      CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm_id,
								     lane_idx),
				      txdata_gray_code_en,
				      lanes_params.s.txdata_gray_code_en);

		CAVM_MODIFY_GSERM_CSR(cavm_gsermx_lanex_control_bcfg_t,
				      CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm_id,
								     lane_idx),
				      rxdata_gray_code_en,
				      lanes_params.s.rxdata_gray_code_en);

		CAVM_MODIFY_GSERM_CSR(cavm_gsermx_lanex_control_bcfg_t,
				      CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm_id,
								     lane_idx),
				      txdata_pre_code_en,
				      lanes_params.s.txdata_pre_code_en);
		CAVM_MODIFY_GSERM_CSR(cavm_gsermx_lanex_control_bcfg_t,
				      CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm_id,
								     lane_idx),
				      rxdata_pre_code_en,
				      lanes_params.s.rxdata_pre_code_en);

	}

	/* Program GSERM TX/RX with PAM mode */
	for (lane_idx = 0; lane_idx < lanes; lane_idx++) {
		CAVM_MODIFY_GSERM_CSR(cavm_gsermx_system_t,
				      CAVM_GSERMX_SYSTEM(gserm_id),
				      lane_sel, lane_idx);

		CAVM_MODIFY_GSERM_CSR(cavm_gsermx_tx_system_lane1_t,
				      CAVM_GSERMX_TX_SYSTEM_LANE1(gserm_id),
				      tx_pam2_en_lane,
				      lanes_params.s.tx_pam2_en_lane);
		/* FIXME: This should be configurable! Table 37-1 error */
		CAVM_MODIFY_GSERM_CSR(cavm_gsermx_tx_system_lane0_t,
				      CAVM_GSERMX_TX_SYSTEM_LANE0(gserm_id),
				      tx_sel_bits_lane, 0x0);
		CAVM_MODIFY_GSERM_CSR(cavm_gsermx_rx_system_lane_t,
				      CAVM_GSERMX_RX_SYSTEM_LANE(gserm_id),
				      rx_pam2_en_lane,
				      lanes_params.s.rx_pam2_en_lane);
		CAVM_MODIFY_GSERM_CSR(cavm_gsermx_rx_system_lane_t,
				      CAVM_GSERMX_RX_SYSTEM_LANE(gserm_id),
				      rx_sel_bits_lane, 0x0);
	}

	for (lane_idx = 0; lane_idx < lanes; lane_idx++) {
		/* Power up PHY PLL */
		CAVM_MODIFY_GSERM_CSR(cavm_gsermx_lanex_control_bcfg_t,
				      CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm_id,
								     lane_idx),
				      pu_pll, 0x1);
		/* Power up PHY receiver */
		CAVM_MODIFY_GSERM_CSR(cavm_gsermx_lanex_control_bcfg_t,
				      CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm_id,
								     lane_idx),
				      pu_rx, 0x1);
		/* Power up PHY transmiter */
		CAVM_MODIFY_GSERM_CSR(cavm_gsermx_lanex_control_bcfg_t,
				      CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm_id,
								     lane_idx),
				      pu_tx, 0x1);

		/* FIXME: Do polling for TX and RX PLLs ready */
		{
			cavm_gsermx_lanex_status_bsts_t status;

			status.u = CSR_READ(CAVM_GSERMX_LANEX_STATUS_BSTS(
						gserm_id,
						lane_idx));
			(void)status;
		}

		/* Enable PHY transmiter output */
		CAVM_MODIFY_GSERM_CSR(cavm_gsermx_lanex_control_bcfg_t,
				      CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm_id,
								     lane_idx),
				      tx_idle, 0x0);

	}
}


void gserm_driver_init(void)
{
#if 0
	gserm_info info = {0};
        MCESD_DEV driver = {0};
#endif
	int portm;

	for (portm = 0; portm < cn10k_get_portm_count(); portm++) {
		gserm_state_lane_t gserm_state;
		int gserm_idx;
		int lane_idx;
		cn10k_portm_modes_t mode;
		int lanes_num;

		/* Read gserm_idx and lane_idx to find portm mode */
		gserm_idx = cn10k_portm_get_gser_num(portm);
		lane_idx = cn10k_portm_get_gser_lane_num(portm);
		/* This data are kept in SCRATCH reg. */
		gserm_state = gserm_get_state(gserm_idx, lane_idx);
		/* Get current mode an number of lanes to configure */
		mode = gserm_state.s.mode;
		if (!gserm_is_mode_valid(mode))
			continue;

		lanes_num = cn10k_portm_get_mode_desc_serdes_num(mode);

		printf("GSERM: %d, Lanes: %d, mode: %d, lane_idx: %d\n",
		       gserm_idx, lanes_num, mode, lane_idx);

		gserm_power_on(gserm_idx, lanes_num,
			       gserm_lane_params_for_portm_mode(mode));

	}
}

