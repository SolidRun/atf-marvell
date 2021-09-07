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
#include <plat_cn10k_configuration.h>
#include <qlm_cn10k.h>
#include <plat_scfg.h>
#include <cavm-csrs-gserm.h>
#include <cavm-csrs-rst.h>

#include <mcesd/mcesdTop.h>
#include <mcesd/mcesdApiTypes.h>
#include <mcesd/mcesdUtils.h>
#include <mcesd/mcesdInitialization.h>
#include <mcesd/N5XC56GP5X4/mcesdN5XC56GP5X4_Defs.h>
#include <mcesd/N5XC56GP5X4/mcesdN5XC56GP5X4_API.h>
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
const pin_map_t N5XC56GP5X4_pins[] = {
	MCESD_PIN_TIED(N5XC56GP5X4, PIN_ISOLATION, 1), // not supported
	MCESD_PIN_TIED(N5XC56GP5X4, PIN_SIF_SEL, 0), // handled automagically
	MCESD_PIN_TIED(N5XC56GP5X4, PIN_MCU_CLK, 400), // 400Mhz clock input
	MCESD_PIN_TIED(N5XC56GP5X4, PIN_PHY_MODE, 4), // 4 == SerDes
	MCESD_PIN_TIED(N5XC56GP5X4, PIN_PIPE_SEL, 0), // 0 == No PCIE PIPE
	MCESD_PIN_TIED(N5XC56GP5X4, PIN_AVDD_SEL, 7), // FIXME: not tied
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_RESET),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_BG_RDY),
	/* REFCLK_SEL and REF_FREF_SEL not used
	 * MCESD_PIN_AUTO(N5XC56GP5X4, PIN_REFCLK_SEL(0)),
	 * MCESD_PIN_AUTO(N5XC56GP5X4, PIN_REFCLK_SEL(1)),
	 * MCESD_PIN_AUTO(N5XC56GP5X4, PIN_REFCLK_SEL(2)),
	 * MCESD_PIN_AUTO(N5XC56GP5X4, PIN_REFCLK_SEL(3)),
	 * MCESD_PIN_AUTO(N5XC56GP5X4, PIN_REF_FREF_SEL(0)),
	 * MCESD_PIN_AUTO(N5XC56GP5X4, PIN_REF_FREF_SEL(1)),
	 * MCESD_PIN_AUTO(N5XC56GP5X4, PIN_REF_FREF_SEL(2)),
	 * MCESD_PIN_AUTO(N5XC56GP5X4, PIN_REF_FREF_SEL(3)),
	 */
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_PHY_GEN_TX(0)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_PHY_GEN_TX(1)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_PHY_GEN_TX(2)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_PHY_GEN_TX(3)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_PHY_GEN_RX(0)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_PHY_GEN_RX(1)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_PHY_GEN_RX(2)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_PHY_GEN_RX(3)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_PU_PLL(0)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_PU_PLL(1)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_PU_PLL(2)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_PU_PLL(3)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_PU_RX(0)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_PU_RX(1)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_PU_RX(2)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_PU_RX(3)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_PU_TX(0)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_PU_TX(1)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_PU_TX(2)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_PU_TX(3)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_TX_IDLE(0)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_TX_IDLE(1)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_TX_IDLE(2)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_TX_IDLE(3)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_PU_IVREF),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_RX_INIT(0)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_RX_INIT(1)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_RX_INIT(2)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_RX_INIT(3)),
	MCESD_PIN_AUTO(N5XC56GP5X4, PIN_SPD_CFG),
	/* Manual Pin Definitions */
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_DIRECT_ACCESS_EN,  PIN_DIRECTACCES),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RX_TRAIN_ENABLE(0), PIN_RX_TRAINEN0),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RX_TRAIN_ENABLE(1), PIN_RX_TRAINEN1),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RX_TRAIN_ENABLE(2), PIN_RX_TRAINEN2),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RX_TRAIN_ENABLE(3), PIN_RX_TRAINEN3),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RX_TRAIN_COMPLETE(0), PIN_RX_TRAINCO0),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RX_TRAIN_COMPLETE(1), PIN_RX_TRAINCO1),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RX_TRAIN_COMPLETE(2), PIN_RX_TRAINCO2),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RX_TRAIN_COMPLETE(3), PIN_RX_TRAINCO3),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RX_TRAIN_FAILED(0), PIN_RX_TRAINFA0),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RX_TRAIN_FAILED(1), PIN_RX_TRAINFA1),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RX_TRAIN_FAILED(2), PIN_RX_TRAINFA2),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RX_TRAIN_FAILED(3), PIN_RX_TRAINFA3),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_TX_TRAIN_ENABLE(0), PIN_TX_TRAINEN0),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_TX_TRAIN_ENABLE(1), PIN_TX_TRAINEN1),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_TX_TRAIN_ENABLE(2), PIN_TX_TRAINEN2),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_TX_TRAIN_ENABLE(3), PIN_TX_TRAINEN3),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_TX_TRAIN_COMPLETE(0), PIN_TX_TRAINCO0),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_TX_TRAIN_COMPLETE(1), PIN_TX_TRAINCO1),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_TX_TRAIN_COMPLETE(2), PIN_TX_TRAINCO2),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_TX_TRAIN_COMPLETE(3), PIN_TX_TRAINCO3),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_TX_TRAIN_FAILED(0), PIN_TX_TRAINFA0),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_TX_TRAIN_FAILED(1), PIN_TX_TRAINFA1),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_TX_TRAIN_FAILED(2), PIN_TX_TRAINFA2),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_TX_TRAIN_FAILED(3), PIN_TX_TRAINFA3),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_SQ_DETECTED_LPF(0), PIN_SQ_DET_LPF0),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_SQ_DETECTED_LPF(1), PIN_SQ_DET_LPF1),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_SQ_DETECTED_LPF(2), PIN_SQ_DET_LPF2),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_SQ_DETECTED_LPF(3), PIN_SQ_DET_LPF3),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RX_INIT_DONE(0), PIN_RX_INITDON0),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RX_INIT_DONE(1), PIN_RX_INITDON1),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RX_INIT_DONE(2), PIN_RX_INITDON2),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RX_INIT_DONE(3), PIN_RX_INITDON3),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_TXDATA_GRAY_CODE_EN(0), PIN_TX_GRAY_CODE0),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_TXDATA_GRAY_CODE_EN(1), PIN_TX_GRAY_CODE1),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_TXDATA_GRAY_CODE_EN(2), PIN_TX_GRAY_CODE2),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_TXDATA_GRAY_CODE_EN(3), PIN_TX_GRAY_CODE3),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RXDATA_GRAY_CODE_EN(0), PIN_RX_GRAY_CODE0),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RXDATA_GRAY_CODE_EN(1), PIN_RX_GRAY_CODE1),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RXDATA_GRAY_CODE_EN(2), PIN_RX_GRAY_CODE2),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RXDATA_GRAY_CODE_EN(3), PIN_RX_GRAY_CODE3),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_TXDATA_PRE_CODE_EN(0), PIN_TX_PRE_CODE0),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_TXDATA_PRE_CODE_EN(1), PIN_TX_PRE_CODE1),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_TXDATA_PRE_CODE_EN(2), PIN_TX_PRE_CODE2),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_TXDATA_PRE_CODE_EN(3), PIN_TX_PRE_CODE3),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RXDATA_PRE_CODE_EN(0), PIN_RX_PRE_CODE0),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RXDATA_PRE_CODE_EN(1), PIN_RX_PRE_CODE1),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RXDATA_PRE_CODE_EN(2), PIN_RX_PRE_CODE2),
	MCESD_PIN_MANUAL(N5XC56GP5X4, PIN_RXDATA_PRE_CODE_EN(3), PIN_RX_PRE_CODE3),
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

/* The KR/CR programming represents final programmed value
 * The initial programmed values used during AN are in the
 * PORTM_MODE_802_3AP row
 */

static const gserm_portm_programming_t gserm_portm_programming_list[] = {
	{PORTM_MODE_SGMII,           N5XC56GP5X4_SERDES_1P25G,     N5XC56GP5X4_SERDES_1P25G,     N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_1000BASE_X,      N5XC56GP5X4_SERDES_1P25G,     N5XC56GP5X4_SERDES_1P25G,     N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_SFI_1G,          N5XC56GP5X4_SERDES_1P25G,     N5XC56GP5X4_SERDES_1P25G,     N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_QSGMII,          N5XC56GP5X4_SERDES_5G,        N5XC56GP5X4_SERDES_5G,        N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_XFI,             N5XC56GP5X4_SERDES_10P3125G,  N5XC56GP5X4_SERDES_10P3125G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_SFI,             N5XC56GP5X4_SERDES_10P3125G,  N5XC56GP5X4_SERDES_10P3125G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_10GBASE_KR,      N5XC56GP5X4_SERDES_10P3125G,  N5XC56GP5X4_SERDES_10P3125G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_25GAUI_C2C,      N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_25GAUI_C2M,      N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_25GBASE_CR,      N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_25GBASE_KR,      N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_25GBASE_CR_C,    N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_25GBASE_KR_C,    N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_XLAUI,           N5XC56GP5X4_SERDES_10P3125G,  N5XC56GP5X4_SERDES_10P3125G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_XLAUI_C2M,       N5XC56GP5X4_SERDES_10P3125G,  N5XC56GP5X4_SERDES_10P3125G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_40GBASE_CR4,     N5XC56GP5X4_SERDES_10P3125G,  N5XC56GP5X4_SERDES_10P3125G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_40GBASE_KR4,     N5XC56GP5X4_SERDES_10P3125G,  N5XC56GP5X4_SERDES_10P3125G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_LAUI_2_C2C,      N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_LAUI_2_C2M,      N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_50GBASE_CR2_C,   N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_50GBASE_KR2_C,   N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_50GAUI_1_C2C,    N5XC56GP5X4_SERDES_53P125G,   N5XC56GP5X4_SERDES_53P125G,   N5XC56GP5X4_GRAY_ENABLE,  N5XC56GP5X4_GRAY_ENABLE,   0x1, 0x1 },
	{PORTM_MODE_50GAUI_1_C2M,    N5XC56GP5X4_SERDES_53P125G,   N5XC56GP5X4_SERDES_53P125G,   N5XC56GP5X4_GRAY_ENABLE,  N5XC56GP5X4_GRAY_ENABLE,   0x1, 0x1 },
	{PORTM_MODE_50GBASE_USR,     N5XC56GP5X4_SERDES_53P125G,   N5XC56GP5X4_SERDES_53P125G,   N5XC56GP5X4_GRAY_ENABLE,  N5XC56GP5X4_GRAY_ENABLE,   0x1, 0x1 },
	{PORTM_MODE_50GBASE_CR,      N5XC56GP5X4_SERDES_53P125G,   N5XC56GP5X4_SERDES_53P125G,   N5XC56GP5X4_GRAY_ENABLE,  N5XC56GP5X4_GRAY_ENABLE,   0x1, 0x1 },
	{PORTM_MODE_50GBASE_KR,      N5XC56GP5X4_SERDES_53P125G,   N5XC56GP5X4_SERDES_53P125G,   N5XC56GP5X4_GRAY_ENABLE,  N5XC56GP5X4_GRAY_ENABLE,   0x1, 0x1 },
	{PORTM_MODE_CAUI_4_C2C,      N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_CAUI_4_C2M,      N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_100GBASE_CR4,    N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_100GBASE_KR4,    N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_SERDES_25P7812G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_100GAUI_2_C2C,   N5XC56GP5X4_SERDES_53P125G,   N5XC56GP5X4_SERDES_53P125G,   N5XC56GP5X4_GRAY_ENABLE,  N5XC56GP5X4_GRAY_ENABLE,   0x1, 0x1 },
	{PORTM_MODE_100GAUI_2_C2M,   N5XC56GP5X4_SERDES_53P125G,   N5XC56GP5X4_SERDES_53P125G,   N5XC56GP5X4_GRAY_ENABLE,  N5XC56GP5X4_GRAY_ENABLE,   0x1, 0x1 },
	{PORTM_MODE_100GBASE_USR2,   N5XC56GP5X4_SERDES_53P125G,   N5XC56GP5X4_SERDES_53P125G,   N5XC56GP5X4_GRAY_ENABLE,  N5XC56GP5X4_GRAY_ENABLE,   0x1, 0x1 },
	{PORTM_MODE_100GBASE_CR2,    N5XC56GP5X4_SERDES_53P125G,   N5XC56GP5X4_SERDES_53P125G,   N5XC56GP5X4_GRAY_ENABLE,  N5XC56GP5X4_GRAY_ENABLE,   0x1, 0x1 },
	{PORTM_MODE_100GBASE_KR2,    N5XC56GP5X4_SERDES_53P125G,   N5XC56GP5X4_SERDES_53P125G,   N5XC56GP5X4_GRAY_ENABLE,  N5XC56GP5X4_GRAY_ENABLE,   0x1, 0x1 },
	{PORTM_MODE_802_3AP,         N5XC56GP5X4_SERDES_3P125G,    N5XC56GP5X4_SERDES_3P125G,    N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	/* 1 MAC USXGMII modes */
	{PORTM_MODE_SXGMII_10G,      N5XC56GP5X4_SERDES_10P3125G,  N5XC56GP5X4_SERDES_10P3125G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },

	/* CPRI modes */
	{PORTM_MODE_CPRI_2_4G,       N5XC56GP5X4_SERDES_2P4576G,   N5XC56GP5X4_SERDES_19P6608G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_CPRI_3_1G,       N5XC56GP5X4_SERDES_3P072G,    N5XC56GP5X4_SERDES_12P288G,   N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_CPRI_4_9G,       N5XC56GP5X4_SERDES_4P9152G,   N5XC56GP5X4_SERDES_19P6608G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_CPRI_6_1G,       N5XC56GP5X4_SERDES_6P144G,    N5XC56GP5X4_SERDES_12P288G,   N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_CPRI_9_8G,       N5XC56GP5X4_SERDES_9P8304G,   N5XC56GP5X4_SERDES_19P6608G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },

	/* JESD204C modes */
	{PORTM_MODE_JESD204C_12_2G,  N5XC56GP5X4_SERDES_12P1651G,  N5XC56GP5X4_SERDES_12P1651G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_JESD204C_16_2G,  N5XC56GP5X4_SERDES_16P2201G,  N5XC56GP5X4_SERDES_16P2201G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_JESD204C_24_3G,  N5XC56GP5X4_SERDES_24P3302G,  N5XC56GP5X4_SERDES_24P3302G,  N5XC56GP5X4_GRAY_DISABLE, N5XC56GP5X4_GRAY_DISABLE,  0x0, 0x0 },
	{PORTM_MODE_DISABLED,        0,                            0,                            0,                        0,                         0,   0 }
};

/**
 * Return the PLL Config for the chip GSERM
 *
 * @param gserm
 *
 * @return SPD/PLL Config
 */
static int get_pll_config(int gserm)
{
	if (cavm_is_model(OCTEONTX_CN10KA) &&
	    (gserm > 0))
		return 1; /* single-lane GSERM */
	else
		return 2; /* quad-lane GSERM */
}

/**
 * Set/Clear APB reset and GSERM reset
 *
 * @param gserm_cfg   gserm configuration structure
 * @param reset	      0-Clear, 1-Set resets
 *
 */
static void gserm_set_reset(struct gserm_config *cfg, bool reset)
{
	CSR_MODIFY(r, CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(cfg->gserm_idx),
		   r.s.reset = reset);
	CSR_MODIFY(r, CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(cfg->gserm_idx),
		   r.s.apb_reset = reset);
}

static int gserm_download_firmware(struct gserm_config *cfg, void *data,
				   uint32_t size)
{
	uint32_t *user_buffer = (uint32_t *)data;
	int index;
	cavm_gsermx_pmemx_t pmem;

	if (!data || !size) {
		ERROR("Image size is larger than memory size\n");
		return -1;
	}

	/* Load firmware sequence */
	/* Clear firmware-ready bit and enable download mode */
	CSR_MODIFY(r, CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(cfg->gserm_idx),
		   r.s.fw_ready = 0);
	CSR_MODIFY(r, CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(cfg->gserm_idx),
		   r.s.pram_soc_en = 1);

	/* Program firmware into PMEM */
	for (index = 0; index < (int)size / 4; index++)
		CSR_WRITE(CAVM_GSERMX_PMEMX(cfg->gserm_idx, index), user_buffer[index]);

	/* Write protect program memory now that the firmware is loaded */
        CSR_MODIFY(r, CAVM_GSERMX_COMMON_PHY_CTRL_PROT(cfg->gserm_idx),
		r.s.pmem_wr_prot_stky = 1);

        /* Verify the firmware matches what we loaded */
	for (index = 0; index < (int)size / 4; index++) {
		pmem.u = CSR_READ(CAVM_GSERMX_PMEMX(cfg->gserm_idx, index));
		if (pmem.s.data != user_buffer[index]) {
			WARN("GSERM%d: Mismatch loading firmware[%d], wrote 0x%x, read 0x%x\n",
				cfg->gserm_idx, index, user_buffer[index], pmem.s.data);
			NOTICE("Performing cold reset so new firmware can be loaded\n");
			if (!cavm_is_platform(PLATFORM_EMULATOR))
				mdelay(10000);
			CSR_MODIFY(r, CAVM_RST_COLD_DOMAIN_W1S, r.s.soft_rst = 1);
			return 0;
		}
	}

	/* Disable firmware download mode, set firmware-ready bit */
	CSR_MODIFY(r, CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(cfg->gserm_idx),
		   r.s.fw_ready = 1);
	CSR_MODIFY(r, CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(cfg->gserm_idx),
		   r.s.pram_soc_en = 0);

	return 0;
}

/**
 * Program the GSERM lane to MAC lane mapping
 *
 * @param gserm
 *
 * @return Number of GSERM'S
 */
static void set_gserm_to_mac_lane_mapping(int gserm, int gser_lane, int mac_type,
					 int mac, int mac_lane)
{
	if (mac_type == PORTM_JESD)
		CSR_MODIFY(c, CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm, gser_lane),
			   c.s.jesd_mode = 1);
	else
		CSR_MODIFY(c, CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm, gser_lane),
			   c.s.jesd_mode = 0);

	if ((cavm_is_model(OCTEONTX_CN10KA)) ||
	    (cavm_is_model(OCTEONTX_CNF10KA))) { /* MAC lane is the GSERM register index */
		switch (mac_lane) {
		case 0:
			CSR_MODIFY(c, CAVM_GSERMX_LANE0_CONTROL_SD_MUX(gserm),
				   c.s.lane_sel = gser_lane);
			break;
		case 1:
			CSR_MODIFY(c, CAVM_GSERMX_LANE1_CONTROL_SD_MUX(gserm),
				   c.s.lane_sel = gser_lane);
			break;
		case 2:
			CSR_MODIFY(c, CAVM_GSERMX_LANE2_CONTROL_SD_MUX(gserm),
				   c.s.lane_sel = gser_lane);
			break;
		case 3:
			CSR_MODIFY(c, CAVM_GSERMX_LANE3_CONTROL_SD_MUX(gserm),
				   c.s.lane_sel = gser_lane);
			break;
		}
	} else if (cavm_is_model(OCTEONTX_CNF10KB)) { /* GSERM lane is the GSERM register index */
		switch (gserm) {
		case 0: /* GSERM0/1/5 only support 1 RPM */
		case 1:
		case 5:
			switch (gser_lane) {
			case 0:
				CSR_MODIFY(c, CAVM_GSERMX_LANE0_CONTROL_SD_MUX(gserm),
					   c.s.lane_sel = mac_lane + CNF10KB_ETH_LOWMAC_OFFSET);
				break;
			case 1:
				CSR_MODIFY(c, CAVM_GSERMX_LANE1_CONTROL_SD_MUX(gserm),
					   c.s.lane_sel = mac_lane + CNF10KB_ETH_LOWMAC_OFFSET);
				break;
			case 2:
				CSR_MODIFY(c, CAVM_GSERMX_LANE2_CONTROL_SD_MUX(gserm),
					   c.s.lane_sel = mac_lane + CNF10KB_ETH_LOWMAC_OFFSET);
				break;
			case 3:
				CSR_MODIFY(c, CAVM_GSERMX_LANE3_CONTROL_SD_MUX(gserm),
					   c.s.lane_sel = mac_lane + CNF10KB_ETH_LOWMAC_OFFSET);
				break;
			}
		case 2: /* GSERM2/3/4 support 2 RPM's and CPRI */
		case 3:
		case 4:
			switch (mac_type) {
			case PORTM_CPRI:
				switch (gser_lane) {
				case 0:
					CSR_MODIFY(c, CAVM_GSERMX_LANE0_CONTROL_SD_MUX(gserm),
						   c.s.lane_sel = (mac % 2) ? mac_lane + CNF10KB_CPRI_UPMAC_OFFSET : mac_lane);
					break;
				case 1:
					CSR_MODIFY(c, CAVM_GSERMX_LANE1_CONTROL_SD_MUX(gserm),
						   c.s.lane_sel = (mac % 2) ? mac_lane + CNF10KB_CPRI_UPMAC_OFFSET : mac_lane);
					break;
				case 2:
					CSR_MODIFY(c, CAVM_GSERMX_LANE2_CONTROL_SD_MUX(gserm),
						   c.s.lane_sel = (mac % 2) ? mac_lane + CNF10KB_CPRI_UPMAC_OFFSET : mac_lane);
					break;
				case 3:
					CSR_MODIFY(c, CAVM_GSERMX_LANE3_CONTROL_SD_MUX(gserm),
						   c.s.lane_sel = (mac % 2) ? mac_lane + CNF10KB_CPRI_UPMAC_OFFSET : mac_lane);
					break;
				}
			case PORTM_ETH:
				switch (gser_lane) {
				case 0:
					CSR_MODIFY(c, CAVM_GSERMX_LANE0_CONTROL_SD_MUX(gserm),
						   c.s.lane_sel = (mac % 2) ? mac_lane + CNF10KB_ETH_UPMAC_OFFSET : mac_lane + CNF10KB_ETH_LOWMAC_OFFSET);
					break;
				case 1:
					CSR_MODIFY(c, CAVM_GSERMX_LANE1_CONTROL_SD_MUX(gserm),
						   c.s.lane_sel = (mac % 2) ? mac_lane + CNF10KB_ETH_UPMAC_OFFSET : mac_lane + CNF10KB_ETH_LOWMAC_OFFSET);
					break;
				case 2:
					CSR_MODIFY(c, CAVM_GSERMX_LANE2_CONTROL_SD_MUX(gserm),
						   c.s.lane_sel = (mac % 2) ? mac_lane + CNF10KB_ETH_UPMAC_OFFSET : mac_lane + CNF10KB_ETH_LOWMAC_OFFSET);
					break;
				case 3:
					CSR_MODIFY(c, CAVM_GSERMX_LANE3_CONTROL_SD_MUX(gserm),
						   c.s.lane_sel = (mac % 2) ? mac_lane + CNF10KB_ETH_UPMAC_OFFSET : mac_lane + CNF10KB_ETH_LOWMAC_OFFSET);
					break;
				}
			}
		}
	}
}

/**
 * Get the GSERM programming settings for PORTM mode
 *
 * @param  *portm_programming  PORTM programming structure (portm_mode must be set)
 *
 * @return 0 = valid portm_programming.portm_mode, 1 = invalid portm_mode
 */
static int get_portm_mode_gserm_settings(gserm_portm_programming_t *portm_programming)
{
	int ret = 1;
	int i = 0;
	cn10k_portm_modes_t mode_temp;

	do {
		mode_temp = gserm_portm_programming_list[i].portm_mode;
		if (portm_programming->portm_mode == mode_temp) {
			portm_programming->phy_gen_rx = gserm_portm_programming_list[i].phy_gen_rx;
			portm_programming->phy_gen_tx = gserm_portm_programming_list[i].phy_gen_tx;
			portm_programming->rxdata_gray_code_en = gserm_portm_programming_list[i].rxdata_gray_code_en;
			portm_programming->txdata_gray_code_en = gserm_portm_programming_list[i].txdata_gray_code_en;
			portm_programming->rxdata_pre_code_en = gserm_portm_programming_list[i].rxdata_pre_code_en;
			portm_programming->txdata_pre_code_en = gserm_portm_programming_list[i].txdata_pre_code_en;
			ret = 0;
			break;
		}
		i++;
	} while (mode_temp != PORTM_MODE_DISABLED);

	return ret;
}

/**
 * Program the GSERM Reference Clock
 *
 * @param gserm       GSERM to configure
 * @param gser_lane   GSERM lane to configure
 * @param mac_type    Type of MAC (e.g Ethernet, CPRI, JESD)
 * @param sync_e_ena  If Ethernet MAC, specifies if SYNC-E clk enabled
 *
 */
static void set_gserm_refclk_config(int gserm, int gser_lane,
				   int mac_type)
{
	/*
	 * (6b) Select reference clock source:
	 *    GSERM(0..5,15)_COMMON_PHY_CTRL_BCFG[REFCLK_SEL_EN]
	 *    Tied Value: Set associated GSERM lane bit to 0
	 *    From [REFCLK_SEL]: Set associated GSERM lane bit to 1
	 */
	CSR_MODIFY(c, CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(gserm),
		   c.s.refclk_sel_en |= 1 << gser_lane);

	/* (6) Select the reference clock input:
	 *    For Ethernet, set GSERM(0..5,15)_LANE(0..3)_CONTROL_BCFG[REF_FREF_SEL] = 0x7
	 *    (156.25 MHz).
	 *    For CPRI, set GSERM(0..5,15)_LANE(0..3)_CONTROL_BCFG[REF_FREF_SEL] = 0x8
	 *    (122.88 MHz).
	 * (6c) Set reference clock
	 *    GSERM(0..5,15)_COMMON_PHY_CTRL_BCFG[REFCLK_SEL]
	 *    156.25Mhz Reference clock - Set associated GSERM lane bit to 0
	 *    122.88Mhz Reference clock - Set associated GSERM lane bit to 1
	 */
	switch (mac_type) {
	case PORTM_CPRI: /* Selects 122.88 MHz clock */
	case PORTM_JESD:
		CSR_MODIFY(c, CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(gserm),
			   c.s.refclk_sel |= 1 << gser_lane);
		CSR_MODIFY(c, CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm, gser_lane),
			   c.s.ref_fref_sel = N5XC56GP5X4_REFFREQ_122MHZ);
		break;
	case PORTM_ETH: /* Selects 156.25 MHz clock */
		CSR_MODIFY(c, CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(gserm),
			   c.s.refclk_sel &= ~(1 << gser_lane));
		CSR_MODIFY(c, CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm, gser_lane),
			   c.s.ref_fref_sel = N5XC56GP5X4_REFFREQ_156MHZ);
		break;
	}
}

/**
 * Program the GSERM Tx/Rx rates, gray code and precode settings
 *
 * @param gserm_cfg
 * @param gser_lane
 * @param portm_mode
 *
 * @return 0 = success, -1 = failure
 */
static int set_gserm_rx_tx_config(struct gserm_config *gserm_cfg, int gser_lane,
				  int portm_mode)
{
	gserm_portm_programming_t portm_programming = {0};
	int gserm = gserm_cfg->gserm_idx;

	/* Program the lane Rx/Tx settings */
	portm_programming.portm_mode = portm_mode;
	if (get_portm_mode_gserm_settings(&portm_programming)) {
		ERROR("GSERM%d: Need to add %s to gserm_portm_programming_list\n",
		      gserm, cn10k_portm_mode_to_cfg_str(portm_mode));
		return -1;
	}

	/* Configure SERDES Tx/Rx for Ultra Short Reach */
	if ((portm_mode == PORTM_MODE_100GBASE_USR2) ||
	    (portm_mode == PORTM_MODE_50GBASE_USR)) {
		CSR_MODIFY(c, CAVM_GSERMX_PIN_RESERVED_INPUT_RXX(gserm, gser_lane),
			   c.s.pin_reserved_input_rx |= 1 << GSERM_USR_BIT);
	} else
		CSR_MODIFY(c, CAVM_GSERMX_PIN_RESERVED_INPUT_RXX(gserm, gser_lane),
			   c.s.pin_reserved_input_rx &= ~(1 << GSERM_USR_BIT));

	/* Set the gray code enable */
#ifdef ENABLE_MCESD
	API_N5XC56GP5X4_SetGrayCode(&gserm_cfg->mcesd_handle, gser_lane,
				   portm_programming.txdata_gray_code_en,
				   portm_programming.rxdata_gray_code_en);
#else
	CSR_MODIFY(c, CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm, gser_lane),
		   c.s.txdata_gray_code_en = portm_programming.txdata_gray_code_en;
		   c.s.rxdata_gray_code_en = portm_programming.rxdata_gray_code_en);
#endif

	/* Set the pre-gray code enable */
#ifdef ENABLE_MCESD
	CSR_MODIFY(c, CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm, gser_lane),
		   c.s.rxdata_pre_code_en = portm_programming.rxdata_pre_code_en;
		   c.s.txdata_pre_code_en = portm_programming.txdata_pre_code_en);
#else
	API_N5XC56GP5X4_SetPreCode(&gserm_cfg->mcesd_handle, gser_lane,
				   portm_programming.txdata_pre_code_en,
				   portm_programming.rxdata_pre_code_en);
#endif

#ifdef ENABLE_MCESD
	/* Set the Tx and Rx bit rates */
	API_N5XC56GP5X4_SetTxRxBitRate(&gserm_cfg->mcesd_handle, gser_lane,
				       portm_programming.phy_gen_tx,
				       portm_programming.phy_gen_rx);
#else
	CSR_MODIFY(c, CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm, gser_lane),
		   c.s.phy_gen_rx = portm_programming.phy_gen_rx;
		   c.s.phy_gen_tx = portm_programming.phy_gen_tx);
#endif

	return 0;
}

/**
 * Complete GSERM reset initialization.
 * GSERM lanes are configured based on PORTM settings
 *
 * GSERM initialization uses data prepared for PORTM through cn10k_fill_portm_details()
 * to configure the gserm lanes. The details of configuration
 * are later managed by MCESD library.
 *
 * @pre: Must be called after cn10k_fill_portm_details(), cn10k_fill_gserm_details().
 * @pre: Must be called after timers_octeontx_init_delay().
 *
 */
void gserm_reset_init(void)
{
	int portm_count, gserm_count;
	int gserm_num;
	int numlanes, mode_lanes;
	int ret;
	int mac, mac_type, gser_lane;
	uint64_t init_time, gserm_timeout;
	void *fw_data = (void *) WORK_BUFFER_BASE;
	uint32_t fw_data_size = WORK_BUFFER_MAX_SIZE;
	portm_config_t *portm;
	struct gserm_config cfg = {0};
	cn10k_portm_modes_t mode_idx;
	int spd_cfg_val;
	uint32_t lane_map;
	gserm_plat_config_t *gserm;

	if (cavm_is_platform(PLATFORM_EMULATOR)) {
		printf("Skipping GSERM initialization\n");
		return;
	}

	/* Configure MCESD library */
	cfg.pin_map_ptr = N5XC56GP5X4_pins;
	cfg.pin_map_size = sizeof(N5XC56GP5X4_pins) /
		sizeof(N5XC56GP5X4_pins[0]);

	debug_gserm("%s: MCESD API Version: %d.%d.%d\n", __func__,
		    MCESD_API_MAJOR_VERSION, MCESD_API_MINOR_VERSION,
		    MCESD_API_BUILD_ID);
	ret = mcesdLoadDriver(MCESD_API_MAJOR_VERSION,
			      MCESD_API_MINOR_VERSION,
			      &_mcesd_read_reg,
			      &_mcesd_write_reg,
			      &_mcesd_write_pin,
			      &_mcesd_read_pin,
			      &_mcesd_wait,
			      (void *)&cfg,
			      &cfg.mcesd_handle);
	if (ret) {
		ERROR("Can't initialize MCESD library (%d)\n", ret);
		return;
	}

	portm_count = plat_octeontx_scfg->portm_count;
	gserm_count = plat_octeontx_scfg->gserm_count;

	/* (1) Reset the PHY by setting GSERM(0..5,15)_COMMON_PHY_CTRL_BCFG[RESET] = 0x1 and
	 *     GSERM(0..5,15)_COMMON_PHY_CTRL_BCFG[APB_RESET] = 0x1.
	 * (2) Wait a minimum of 1us for the reset to propagate.
	 * (3) Set GSERM(0..5,15)_REFCLK_CTL1[VCM_SEL] = 0x0.
	 * Note: ASIM does not support Broadcast. Need to reset GSERM's independently.
	 */
	debug_gserm("%s: GSERM: Asserting GSERM and APB reset\n", __func__);

	if (!cavm_is_platform(PLATFORM_ASIM)) {
		cfg.gserm_idx = GSERM_BROADCAST;
		gserm_set_reset(&cfg, true);

		/* Wait for reset to propagate */
		udelay(GSERM_RESET_DELAY_US);

		CSR_MODIFY(r, CAVM_GSERMX_REFCLK_CTL1(GSERM_BROADCAST),
			   r.s.vcm_sel = 0);
	} else {
		for (int gserm_idx = 0; gserm_idx < gserm_count; gserm_idx++) {
			cfg.gserm_idx = gserm_idx;
			gserm_set_reset(&cfg, true);
		}

		/* Wait for reset to propagate */
		udelay(GSERM_RESET_DELAY_US);

		for (int gserm_idx = 0; gserm_idx < gserm_count; gserm_idx++) {
			CSR_MODIFY(r, CAVM_GSERMX_REFCLK_CTL1(gserm_idx),
				   r.s.vcm_sel = 0);
		}
	}

	/* (4) Select the speed configuration (PLL configuration):
	 * For a single-lane GSERM, write GSERM(0..2,15)_COMMON_PHY_CTRL_BCFG[SPD_CFG]
	 * = 0x1.
	 * For a quad-lane GSERM, write GSERM(0..5,15)_COMMON_PHY_CTRL_BCFG[SPD_CFG] =
	 * 0x2.
	 * (5) Optionally perform the lane swizzling programming as described in Section 70.5.
	 * (6a) Select JESD mode:
	 *    For JESD mode, set GSERM(0..6,15)_LANE(0..3)_CONTROL_BCFG[JESD_MODE] = 1.
	 *    For Ethernet (RPM) mode, set
	 *    GSERM(0..6,15)_LANE(0..3)_CONTROL_BCFG[JESD_MODE] = 0.
	 * (6b) Select the reference clock for the Ethernet mode.
	 *    Set GSERM(0..5,15)_COMMON_PHY_CTRL_BCFG[REFCLK_SEL_EXT] = 0x0 for
	 *    REF_CLK2_P/N (standard Ethernet).
	 *    Set GSERM(0..5,15)_COMMON_PHY_CTRL_BCFG[REFCLK_SEL_EXT] =0x1 for
	 *    REF_CLK4_P/N (Synchronous Ethernet).
	 * Note: that GSERM(0..5,15)_COMMON_PHY_CTRL_BCFG[REFCLK_SEL_EXT]
	 * determines whether all Ethernet lanes in the GSERM use REF_CLK2_P/N, or the
	 * Synchronous Ethernet reference clock, REF_CLK4_P/N. See Figure 70–2.
	 * (11) Power down the PHY PLL by setting GSERM(0..5,15)_LANE(0..3)_CONTROL_BCFG[PU_PLL]
	 * = 0x0.
	 * (12) Power down the PHY receiver by setting
	 *     GSERM(0..5,15)_LANE(0..3)_CONTROL_BCFG[PU_RX] = 0x0.
	 * (13) Power down the PHY transmitter by setting
	 *     GSERM(0..5,15)_LANE(0..3)_CONTROL_BCFG[PU_TX] = 0x0.
	 * (14) Disable the PHY transmitter output by setting
	 *      GSERM(0..5,15)_LANE(0..3)_CONTROL_BCFG[TX_IDLE] = 0x1.
	 */
	for (int gserm_idx = 0; gserm_idx < gserm_count; gserm_idx++) {
		int portm_first;

		gserm = &(plat_octeontx_bcfg->gserm_plat_cfg[gserm_idx]);
		numlanes = plat_octeontx_scfg->qlm_max_lane_num[gserm_idx];
		cfg.gserm_idx = gserm_idx;
		spd_cfg_val = get_pll_config(gserm_idx);
		CSR_MODIFY(c, CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(gserm_idx),
			   c.s.spd_cfg = spd_cfg_val);

		/* Put all lanes into reset and disable Tx */
		for (int lane_idx = 0; lane_idx < numlanes; lane_idx++) {
			debug_gserm("%s: GSERM%d.%d: Powering down lane PLL, Tx, and Rx\n",
				    __func__, gserm_idx, lane_idx);
			debug_gserm("%s: GSERM%d.%d: Disabling Tx output\n",
				    __func__, gserm_idx, lane_idx);
#ifdef ENABLE_MCESD
			API_N5XC56GP5X4_SetPowerPLL(&cfg.mcesd_handle,
						   lane_idx,
						   MCESD_FALSE);
			API_N5XC56GP5X4_SetPowerTx(&cfg.mcesd_handle,
						  lane_idx,
						  MCESD_FALSE);
			API_N5XC56GP5X4_SetPowerRx(&cfg.mcesd_handle,
						  lane_idx,
						  MCESD_FALSE);
			API_N5XC56GP5X4_SetTxOutputEnable(&cfg.mcesd_handle,
							 lane_idx,
							 MCESD_FALSE);
#else
			CSR_MODIFY(c, CAVM_GSERMX_LANEX_CONTROL_BCFG(gserm_idx, lane_idx),
				c.s.pu_pll = 0;
				c.s.pu_rx = 0;
				c.s.pu_tx = 0;
				c.s.tx_idle = 0);
#endif
		}

		portm_first = cn10k_portm_gserm_get_first_portm_num(gserm_idx);

		debug_gserm("%s: GSERM%d: Programming GSERM to MAC lane mapping\n", __func__, gserm_idx);
		/* Program the GSERM to MAC lane mapping */
		for (int mlane = 0; mlane < numlanes; mlane++) {
			gser_lane = (gserm->lane_map >> (mlane * 4)) & 0xf;
			portm = &(plat_octeontx_bcfg->portm_cfg[portm_first + mlane]);
			mac = portm->mac_num;
			mac_type = portm->mac_type;
			set_gserm_to_mac_lane_mapping(gserm_idx, gser_lane, mac_type, mac, mlane);
		}

		/* Program Synce REFCLK (only for CNF10KB) */
		if (cavm_is_model(OCTEONTX_CNF10KB)) {
			debug_gserm("%s: GSERM%d: Programming SYNCe REFCLK\n", __func__, gserm_idx);
			CSR_MODIFY(c, CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(gserm_idx),
				   c.s.refclk_sel_ext = gserm->sync_e_ena ? 1 : 0);
			CSR_INIT(common_phy_ctrl_bcfg, CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(gserm_idx));
			debug_gserm("GSERM%d: sync_e_ena:%d\n", gserm_idx, common_phy_ctrl_bcfg.s.refclk_sel_ext);
		}
	}
	/*
	 * (7) Select reference clock source:
	 *    Set GSERM(0..6,15)_COMMON_PHY_CTRL_BCFG[REFCLK_SEL_EN] = 0xF to select each
	 *    lanes reference clock based on [REFCLK_SEL].
	 *    GSERM(0..6,15)_COMMON_PHY_CTRL_BCFG[REFCLK_SEL] is a 4-bit field where each
	 *    bit represents the associated GSERM lane (i.e. bit 0 = lane 0, bit 1 = lane 1, etc.).
	 *    For Ethernet, clear the associated
	 *    GSERM(0..6,15)_COMMON_PHY_CTRL_BCFG[REFCLK_SEL] bit to 0 to select the
	 *    156.25MHz REFCLK
	 *    For JESD, set the associated
	 *    GSERM(0..6,15)_COMMON_PHY_CTRL_BCFG[REFCLK_SEL] bit to 1 to select the
	 *    122.88MHz REFCLK.
	 * (8) Select the reference clock input:
	 *    For Ethernet, set GSERM(0..5,15)_LANE(0..3)_CONTROL_BCFG[REF_FREF_SEL] = 0x7
	 *    (156.25 MHz).
	 *    For CPRI, set GSERM(0..5,15)_LANE(0..3)_CONTROL_BCFG[REF_FREF_SEL] = 0x8
	 *    (122.88 MHz).
	 */
	for (int portm_idx = 0; portm_idx < portm_count;) {
		portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);
		gserm_num = portm->gserm;
		lane_map = portm->lane_map;
		mode_lanes = portm->gser_numlanes;
		mac_type = portm->mac_type;

		if (!portm->port_enable) {
			portm_idx++;
			continue;
		}

		/* Program REFCLK config */
		for (int i = 0; i < mode_lanes; i++) {
			gser_lane = (lane_map >> (i * 4)) & 0xf;
			debug_gserm("%s: GSERM%d.%d: Programming REFCLK config\n",
				    __func__, gserm_num, gser_lane);
			set_gserm_refclk_config(gserm_num, gser_lane,
						mac_type);
		}

		portm_idx += portm->portms_used;
	}
	/*
	 * (9) Program the GSERM gray code and precode by writing the following fields. See Table 67–1
	 * for the settings associated with the supported Ethernet standards.
	 *    GSERM(0..5,15)_LANE(0..3)_CONTROL_BCFG[TXDATA_GRAY_CODE_EN]
	 *    GSERM(0..5,15)_LANE(0..3)_CONTROL_BCFG[RXDATA_GRAY_CODE_EN]
	 *    GSERM(0..5,15)_LANE(0..3)_CONTROL_BCFG[TXDATA_PRE_CODE_EN]
	 *    GSERM(0..5,15)_LANE(0..3)_CONTROL_BCFG[RXDATA_PRE_CODE_EN]
	 * (10) Program the GSERM PHY TX/RX rates by writing the following fields. See Table 67–1 for
	 * the settings associated with the supported Ethernet standards.
	 *    GSERM(0..5,15)_LANE(0..3)_CONTROL_BCFG[PHY_GEN_RX]
	 *    GSERM(0..5,15)_LANE(0..3)_CONTROL_BCFG[PHY_GEN_TX]
	 */
	for (int portm_idx = 0; portm_idx < portm_count;) {
		portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);
		cfg.gserm_idx = portm->gserm;
		mode_idx = portm->portm_mode;
		/* Check if 802.3AP portmode
		 * Need to initially program for AN
		 */
		if (portm->an_lt_ena)
			mode_idx = PORTM_MODE_802_3AP;
		mode_lanes = portm->gser_numlanes;
		lane_map = portm->lane_map;

		/* Check if port is enabled */
		if (!portm->port_enable) {
			portm_idx++;
			continue;
		}

		for (int i = 0; i < mode_lanes; i++) {
			gser_lane = (lane_map >> (i * 4)) & 0xf;
			debug_gserm("%s: GSERM%d.%d: Programming Tx/Rx rates for %s\n",
				    __func__, cfg.gserm_idx, gser_lane,
				    cn10k_portm_mode_to_cfg_str(mode_idx));
			set_gserm_rx_tx_config(&cfg, gser_lane, mode_idx);
		}

		portm_idx += portm->portms_used;
	}

	/*
	 * (15) Power on the current and voltage reference for the GSERM by setting
	 *     GSERM(0..5,15)_COMMON_PHY_CTRL_BCFG[PU_IVREF] = 0x1.
	 * (16) Release the GSERM reset:
	 *      Set GSERM(0..5,15)_COMMON_PHY_CTRL_BCFG[RESET] = 0x0.
	 *      Set GSERM(0..5,15)_COMMON_PHY_CTRL_BCFG[APB_RESET] = 0x0.
	 */
	for (int gserm_idx = 0; gserm_idx < gserm_count; gserm_idx++) {
		cfg.gserm_idx = gserm_idx;

		/* Set voltage and current reference */
#ifdef ENABLE_MCESD
		API_N5XC56GP5X4_SetPowerIvRef(&cfg.mcesd_handle,
					     MCESD_TRUE);
#else
		CSR_MODIFY(c, CAVM_GSERMX_COMMON_PHY_CTRL_BCFG(gserm_idx),
			   c.s.pu_ivref = 1);
#endif
		debug_gserm("%s: GSERM%d: Release GSERM and APB reset\n", __func__, gserm_idx);

		/* Clear GSERM reset */
		gserm_set_reset(&cfg, false);
	}

	/* Wait for reset to propagate */
	udelay(GSERM_RESET_DELAY_US);

	/* Download GSERM FW */
	debug_gserm("%s: GSERM: Downloading firmware\n", __func__);
	if (load_gserx_image(fw_data, &fw_data_size)) {
		WARN("Failing to load Firmware\n");
		return;
	}

	/* (17) Clear the firmware-ready bit setting
	 * GSERM(0..5,15)_COMMON_PHY_CTRL_BCFG[FW_READY] = 0x0.
	 * (18) Enable firmware download mode by setting
	 * GSERM(0..5,15)_COMMON_PHY_CTRL_BCFG[PRAM_SOC_EN] = 0x1.
	 * (19) Load the GSERM PHY firmware into memory by writing
	 * GSERM(0..5,15)_PMEM(0..32767)[DATA] with the 64-bit firmware data (big-endian byte
	 * ordering).
	 * (20) Disable firmware download mode by writing
	 * GSERM(0..5,15)_COMMON_PHY_CTRL_BCFG[PRAM_SOC_EN]= 0x0.
	 * (21) Set the firmware-ready bit by writing
	 * GSERM(0..5,15)_COMMON_PHY_CTRL_BCFG[FW_READY] = 0x1.
	 * Note: ASIM does not support Broadcast.
	 * Need to download GSERM's independently.
	 */
	debug_gserm("%s: GSERM: Loading firmware\n", __func__);
	if (!cavm_is_platform(PLATFORM_ASIM)) {
		cfg.gserm_idx = GSERM_BROADCAST;
		if (gserm_download_firmware(&cfg, fw_data, fw_data_size))
			return;
	} else {
		for (int gserm_idx = 0; gserm_idx < gserm_count; gserm_idx++) {
			cfg.gserm_idx = gserm_idx;
			if (gserm_download_firmware(&cfg, fw_data, fw_data_size))
				return;
		}
	}

	/* (22) Poll for the MCU_INIT_DONE bit by reading
	 * GSERM(0..5,15)_PIN_RESERVED_IO_MCU[PIN_MCU_INIT_DONE] = 0x1.
	 */
	if (!cavm_is_platform(PLATFORM_ASIM) &&
	    !cavm_is_platform(PLATFORM_EMULATOR)) {
		for (int gserm_idx = 0; gserm_idx < gserm_count; gserm_idx++) {
			cavm_gsermx_pin_reserved_io_mcu_t gsermx_pin_reserved_io_mcu;
			bool valid = false;

			debug_gserm("%s: GSERM%d: Waiting for MCU to complete init\n", __func__, gserm_idx);
			init_time = clock_get_count(GSER_CLOCK_TIME);
			gserm_timeout = init_time + GSERM_MCU_INIT_DONE_TIMEOUT_US *
				clock_get_rate(GSER_CLOCK_TIME)/1000000;
			while (clock_get_count(GSER_CLOCK_TIME)
			       < gserm_timeout) {
				gsermx_pin_reserved_io_mcu.u = CSR_READ(CAVM_GSERMX_PIN_RESERVED_IO_MCU(gserm_idx));
				if (gsermx_pin_reserved_io_mcu.s.pin_mcu_init_done) {
					valid = true;
					break;
				}
				udelay(10);
			}
			if (!valid)
				WARN("GSERM%d: MCU failed to initialize\n", gserm_idx);
		}
	}

	/* (22b) Program the GSERM Tx/Rx polarity */
	for (int portm_idx = 0; portm_idx < portm_count;) {
		int tx_pol, rx_pol;

		portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);
		cfg.gserm_idx = portm->gserm;
		mode_lanes = portm->gser_numlanes;
		lane_map = portm->lane_map;

		/* Check if port is enabled */
		if (!portm->port_enable) {
			portm_idx++;
			continue;
		}

		for (int portm_lane = 0; portm_lane < mode_lanes; portm_lane++) {
			gser_lane = (lane_map >> (portm_lane * 4)) & 0xf;
			tx_pol = portm->tx_pol[portm_lane];
			rx_pol = portm->rx_pol[portm_lane];

			debug_gserm("%s: GSERM%d.%d: Configuring Tx_Polarity(%d) and Rx_Polarity(%d)\n",
				    __func__, cfg.gserm_idx, gser_lane, tx_pol, rx_pol);

			API_N5XC56GP5X4_SetTxRxPolarity(&cfg.mcesd_handle,
						       gser_lane,
						       tx_pol, rx_pol);
		}

		portm_idx += portm->portms_used;
	}

	/* (23) Power on the PHY PLL by writing GSERM(0..5,15)_LANE(0..3)_CONTROL_BCFG[PU_PLL] =
	 * 0x1.
	 * (24) Power on the PHY receiver by writing GSERM(0..5,15)_LANE(0..3)_CONTROL_BCFG[PU_RX]
	 * = 0x1.
	 * (25) Power on the PHY transmitter by writing
	 * GSERM(0..5,15)_LANE(0..3)_CONTROL_BCFG[PU_TX] = 0x1.
	 * Only powers on the GSERM lanes with an associated PORTM mode
	 */
	for (int portm_idx = 0; portm_idx < portm_count;) {
		portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);
		cfg.gserm_idx = portm->gserm;
		mode_lanes = portm->gser_numlanes;
		lane_map = portm->lane_map;

		/* Check if port is enabled */
		if (!portm->port_enable) {
			portm_idx++;
			continue;
		}

		for (int i = 0; i < mode_lanes; i++) {
			gser_lane = (lane_map >> (i * 4)) & 0xf;
			debug_gserm("%s: GSERM%d.%d: Powering up PHY PLL, Rx and Tx\n",
				    __func__, cfg.gserm_idx, gser_lane);
#ifdef ENABLE_MCESD
			/* Power up PHY PLL */
			API_N5XC56GP5X4_SetPowerPLL(&cfg.mcesd_handle,
						   gser_lane,
						   MCESD_TRUE);
			/* Power up PHY transmiter */
			API_N5XC56GP5X4_SetPowerTx(&cfg.mcesd_handle,
						  gser_lane,
						  MCESD_TRUE);
			/* Power up PHY receiver */
			API_N5XC56GP5X4_SetPowerRx(&cfg.mcesd_handle,
						  gser_lane,
						  MCESD_TRUE);
#else
			CSR_MODIFY(c, CAVM_GSERMX_LANEX_CONTROL_BCFG(cfg.gserm_idx, gser_lane),
				c.s.pu_pll = 1;
				c.s.pu_rx = 1;
				c.s.pu_tx = 1);
#endif
		}

		portm_idx += portm->portms_used;
	}

	/*
	 * (26) Poll for the TX and RX PLLs to report they are ready for each lane.
	 *    For TX PLL ready, poll by reading
	 *    GSERM(0..5,15)_LANE(0..3)_STATUS_BSTS[PLL_READY_TX] = 0x1.
	 *    For RX PLL ready, poll by reading
	 *    GSERM(0..5,15)_LANE(0..3)_STATUS_BSTS[PLL_READY_RX] = 0x1.
	 * Note: The TX and RX PLL Ready signals may take up to 40 ms to be asserted to 1.
	 * Note: Not checking for ASIM
	 */
	if (!cavm_is_platform(PLATFORM_ASIM) &&
	    !cavm_is_platform(PLATFORM_EMULATOR)) {
		MCESD_BOOL tx_ready = false, rx_ready = false;

		for (int portm_idx = 0; portm_idx < portm_count;) {
			bool valid = false;

			portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);
			cfg.gserm_idx = portm->gserm;
			mode_lanes = portm->gser_numlanes;
			lane_map = portm->lane_map;

			/* Check if port is enabled */
			if (!portm->port_enable) {
				portm_idx++;
				continue;
			}

			for (int i = 0; i < mode_lanes; i++) {
				gser_lane = (lane_map >> (i * 4)) & 0xf;
				debug_gserm("%s: GSERM%d.%d: Waiting for PLL_READY_TX/RX\n",
					    __func__, cfg.gserm_idx, gser_lane);
				init_time = clock_get_count(GSER_CLOCK_TIME);
				gserm_timeout = init_time + GSERM_TX_RX_READY_TIMEOUT_US *
					clock_get_rate(GSER_CLOCK_TIME)/1000000;
				while (clock_get_count(GSER_CLOCK_TIME)
				       < gserm_timeout) {
#ifdef ENABLE_MCESD
					API_N5XC56GP5X4_GetTxRxReady(&cfg.mcesd_handle, gser_lane,
								    &tx_ready, &rx_ready);
#else
					CSR_INIT(bsts, CAVM_GSERMX_LANEX_STATUS_BSTS(cfg.gserm_idx, gser_lane));
					tx_ready = bsts.s.pll_ready_tx;
					rx_ready = bsts.s.pll_ready_rx;
#endif
					if (tx_ready && rx_ready) {
						valid = true;
						break;
					}
					udelay(10);
				}
				if (!valid)
					WARN("GSERM%d.%d: Timeout waiting for PLL_READY_TX(%d)/RX(%d)\n",
					     cfg.gserm_idx, gser_lane, tx_ready, rx_ready);
			}
			portm_idx += portm->portms_used;
		}
	}

	/* (27) Configure Tx equalization settings */
	for (int portm_idx = 0; portm_idx < portm_count;) {
		tx_eq_params_t tx_params;
		int mask = 0x1e; /* Program all Tx eq settings */

		portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);
		cfg.gserm_idx = portm->gserm;
		mode_lanes = portm->gser_numlanes;
		lane_map = portm->lane_map;

		/* Check if port is enabled */
		if (!portm->port_enable) {
			portm_idx++;
			continue;
		}

		for (int portm_lane = 0; portm_lane < mode_lanes; portm_lane++) {
			gser_lane = (lane_map >> (portm_lane * 4)) & 0xf;

			/* The SERDES firmware automatically configures Tx eq for
			 * USR modes.
			 */
			if ((portm->portm_mode == PORTM_MODE_50GBASE_USR) ||
			    (portm->portm_mode == PORTM_MODE_100GBASE_USR2)) {
				debug_gserm("%s: GSERM%d.%d: Configured in USR mode. Not configuring Tx eq\n",
					    __func__, cfg.gserm_idx, gser_lane);
				break;
			}

			tx_params.s.pre2 = portm->tx_pre2[portm_lane];
			tx_params.s.pre1 = portm->tx_pre1[portm_lane];
			tx_params.s.main = portm->tx_main[portm_lane];
			tx_params.s.post = portm->tx_post[portm_lane];

			debug_gserm("%s: GSERM%d.%d: Configuring Tx eq settings\n",
				    __func__, cfg.gserm_idx, gser_lane);
			debug_gserm("%s: GSERM%d.%d: tx_pre2:%d, tx_pre1:%d, tx_main:%d, tx_post:%d\n",
				    __func__, cfg.gserm_idx, gser_lane,
				    tx_params.s.pre2, tx_params.s.pre1,
				    tx_params.s.main, tx_params.s.post);

			if (gserm_set_tx_eq_params(portm_idx, portm_lane, mask, &tx_params))
			    WARN("%s: PORTM%d:%d GSERM%d.%d: Failed to configure Tx eq settings\n",
				 __func__, portm_idx, portm_lane, cfg.gserm_idx, gser_lane);
		}
		portm_idx += portm->portms_used;
	}

	/* (28) Enable the PHY transmitter output by writing
	 * GSERM(0..5,15)_LANE(0..3)_CONTROL_BCFG[TX_IDLE] = 0x0.
	 * Note: This will be done later when link up requested
	 */
}

static inline portm_config_t *gserm_get_portm_cfg(int portm_idx)
{
	portm_config_t *cfg;

	if (portm_idx >= MAX_PORTM) {
		ERROR("value %d exceeds MAX_PORTM limit (%d)\n",
			portm_idx, MAX_PORTM);
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

	/* Configure MCESD library */
	gserm_cfg->pin_map_ptr = N5XC56GP5X4_pins;
	gserm_cfg->pin_map_size = ARRAY_SIZE(N5XC56GP5X4_pins);

	mcesdLoadDriver(MCESD_API_MAJOR_VERSION,
			MCESD_API_MINOR_VERSION,
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

		ret = API_N5XC56GP5X4_SetTxEqParam(&gserm_cfg.mcesd_handle,
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

		ret = API_N5XC56GP5X4_GetTxEqParam(&gserm_cfg.mcesd_handle,
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

		ret = API_N5XC56GP5X4_GetDfeTap(&gserm_cfg.mcesd_handle,
				gserm_lane,
				N5XC56GP5X4_EYE_MID,
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

		ret = API_N5XC56GP5X4_GetCTLEParam(&gserm_cfg.mcesd_handle,
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
	E_N5XC56GP5X4_DATAPATH dataPath;
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
		dataPath = N5XC56GP5X4_PATH_EXTERNAL;
		break;
	case LPBK_MODE_FED:
		dataPath = N5XC56GP5X4_PATH_FAR_END_LB;
		break;
	case LPBK_MODE_NEA:
		dataPath = N5XC56GP5X4_PATH_LOCAL_LB;
		break;
	case LPBK_MODE_NED:
		dataPath = N5XC56GP5X4_PATH_NEAR_END_LB;
		break;
	default:
		ERROR("%s: %d:%d Loopback type %d is not supported.\n",
			__func__, portm_idx, lane_idx, lpbk_mode);
		return -1;
	}

	ret = API_N5XC56GP5X4_SetDataPath(&gserm_cfg.mcesd_handle,
					gserm_lane,
					dataPath);
	if (ret == MCESD_FAIL)
		return -1;

	return 0;
}

static E_N5XC56GP5X4_PATTERN convert_to_mcesd_pattern(int pattern)
{
	switch (pattern) {
	case 7:
		return N5XC56GP5X4_PAT_PRBS7;
	case 9:
		return N5XC56GP5X4_PAT_PRBS9;
	case 11:
		return N5XC56GP5X4_PAT_PRBS11;
	case 15:
		return N5XC56GP5X4_PAT_PRBS15;
	case 16:
		return N5XC56GP5X4_PAT_PRBS16;
	case 23:
		return N5XC56GP5X4_PAT_PRBS23;
	case 31:
		return N5XC56GP5X4_PAT_PRBS31;
	case 32:
		return N5XC56GP5X4_PAT_PRBS32;
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
	E_N5XC56GP5X4_PATTERN mcesd_pattern;
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

	ret = API_N5XC56GP5X4_SetTxRxPattern(&gserm_cfg.mcesd_handle,
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
		ret = API_N5XC56GP5X4_TxInjectError(&gserm_cfg.mcesd_handle,
			gserm_lane, err_inject_cnt);
		if (ret == MCESD_FAIL)
			WARN("%s: %d:%d error injection=%d failed\n",
				__func__, portm_idx, lane_idx, err_inject_cnt);
	}

	ret = API_N5XC56GP5X4_StartPhyTest(&gserm_cfg.mcesd_handle, gserm_lane);
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

	ret = API_N5XC56GP5X4_StopPhyTest(&gserm_cfg.mcesd_handle,
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

	ret = API_N5XC56GP5X4_ResetComparatorStats(&gserm_cfg.mcesd_handle,
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
	S_N5XC56GP5X4_PATTERN_STATS statistics;
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

	ret = API_N5XC56GP5X4_GetComparatorStats(&gserm_cfg.mcesd_handle,
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

