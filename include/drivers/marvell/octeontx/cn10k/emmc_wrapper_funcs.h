/***********************license start***********************************
 * Copyright (c) 2020 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 * https://spdx.org/licenses
 **********************license end**************************************/

#include "emmc_driver_funcs.h"
//#include "cavm-csrs.h"

uint32_t card_init(void);
/******************************************************************************
 *  Description: Initialize global variables
 *  Input Parameters:
 *	rca	RCA value to use
 *	ocr	OCR value to use
 *	is_sd	True for SD card, false for eMMC
 *  Output Parameters: None
 *  Returns: None
 *******************************************************************************/
void fake_card_init(uint16_t rca, uint32_t ocr, bool is_sd);

uint32_t get_response(uint32_t cmd, uint32_t response_type);
void emmc_isr(void);
void emmc_readfifo(void);
void emmc_writefifo(void);
uint32_t identify_card(void);
uint32_t emmc_CheckVoltageCompatibility(uint32_t ctrlr_voltage);
uint32_t emmc_CheckCardStatus(uint32_t resp_to_match, uint32_t mask);
uint32_t emmc_SDGet_SCR(void);
uint32_t wrapper_SendDataCommandNoAuto12(uint32_t cmd, uint32_t argument,
					 uint32_t blk_type, uint32_t data_dir,
					 uint32_t resp_type);
uint32_t wrapper_SendDataCommand(uint32_t cmd, uint32_t argument, uint32_t blk_type,
				 uint32_t data_dir, uint32_t resp_type);
uint32_t wrapper_SendSetupCommand(uint32_t cmd, uint32_t argument, uint32_t resp_type);
uint32_t get_status_within(uint32_t msecs);
void emmc_SendStopCommand(void);
uint32_t emmc_SetBusWidth(uint32_t width);
uint32_t emmc_CardShutdown(void);
uint32_t change_parition(uint32_t part_num);
uint32_t emmc_read_blocks(void);
uint32_t emmc_WriteBlocks(void);
uint32_t emmc_WaitReady(uint32_t timeout);
uint32_t SetHighSpeedTiming(void);
