/***********************license start***********************************
 * Copyright (C) 2021 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 * https://spdx.org/licenses
 ***********************license end**************************************/

#include <octeontx_common.h>
#include <drivers/delay_timer.h>
#include <gserm.h>
#include "mcesd/mcesdTop.h"
#include "mcesd/mcesdApiTypes.h"
#include "mcesd/mcesdUtils.h"
#include "mcesd/mcesdInitialization.h"
#include "mcesd/N5C56GP5X4/mcesdN5C56GP5X4_Defs.h"
#include "mcesd/N5C56GP5X4/mcesdN5C56GP5X4_DeviceInit.h"
#include "mcesd/N5C56GP5X4/mcesdN5C56GP5X4_API.h"
#include "mcesd-csrs-gserm.h"

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
MCESD_STATUS gserm_driver_init(int instance,
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

void gserm_init(void)
{
        gserm_info info = {0};
        MCESD_DEV driver = {0};

	gserm_driver_init(0, &driver, &info);
}

