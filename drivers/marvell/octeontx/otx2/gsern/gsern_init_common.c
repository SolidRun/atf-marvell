/*
 * This file was copied from BDK using gsern-bdk-to-atf.sh script.
 * Do not edit it manually!
 */

/*
 * Copyright (c) 2018 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 * https://spdx.org/licenses
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

#include <gsern/gsern.h>
#include <gser_internal.h>

#include "cavm-csrs-gsern.h"

/* Some fields in GSERN must be based on the VDD supplied to VDDA_GSER. This
   global contains the BDK's guess as what the voltage currently is in
   millivolts */
int gsern_voltage = 900; /* HRM recomendation, increase to 1000 for 25G */

/**
 * Wait for GSERNX_COMMON_INIT_BSTS[rst_sm_complete]
 *
 * @param node
 * @param qlm
 *
 * @return
 */
int gsern_init_wait_for_sm_complete(int qlm)
{
	const int TIMEOUT = 10000; /* Timeout for wait loops in microsec */

	if (gser_is_platform(GSER_PLATFORM_ASIM) || gser_is_platform(GSER_PLATFORM_EMULATOR))
		return 0;

	if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERNX_COMMON_INIT_BSTS(qlm), GSERN_COMMON_INIT_BSTS_RST_SM_COMPLETE, ==, 1, TIMEOUT))
	{
		gser_error("N0.QLM%d: Timeout waiting for GSERNX_COMMON_INIT_BSTS[rst_sm_complete]\n", qlm);
		return -1;
	}
	if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERNX_COMMON_INIT_BSTS(qlm), GSERN_COMMON_INIT_BSTS_RST_SM_READY, ==, 1, TIMEOUT))
	{
		gser_error("N0.QLM%d: Timeout waiting for GSERNX_COMMON_INIT_BSTS[rst_sm_ready]\n", qlm);
		return -1;
	}
	if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERNX_COMMON_INIT_BSTS(qlm), GSERN_COMMON_INIT_BSTS_CAL_READY, ==, 1, TIMEOUT))
	{
		gser_error("N0.QLM%d: Timeout waiting for GSERNX_COMMON_INIT_BSTS[cal_ready]\n", qlm);
		return -1;
	}
	if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERNX_COMMON_INIT_BSTS(qlm), GSERN_COMMON_INIT_BSTS_CAL_FAIL, ==, 0, TIMEOUT))
	{
		gser_error("N0.QLM%d: Timeout waiting for GSERNX_COMMON_INIT_BSTS[cal_fail=0]\n", qlm);
		return -1;
	}
	return 0;
}

/**
 * Wait for GSERNX_LANEX_INIT_BSTS[rst_sm_ready]
 *
 * @param node
 * @param qlm
 * @param qlm_lane
 *
 * @return
 */
int gsern_init_wait_for_sm_ready(int qlm, int qlm_lane)
{
	const int TIMEOUT = 10000; /* Timeout for wait loops in microsec */
	int num_lanes = gser_qlm_get_lanes(qlm);

	if (gser_is_platform(GSER_PLATFORM_ASIM) || gser_is_platform(GSER_PLATFORM_EMULATOR))
		return 0;

	for (int lane = 0; lane < num_lanes; lane++)
	{
	   /* Skip lanes we don't care about */
		if ((qlm_lane != -1) && (qlm_lane != lane))
			continue;

		if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERNX_LANEX_INIT_BSTS(qlm, lane), GSERN_COMMON_INIT_BSTS_RST_SM_COMPLETE, ==, 1, TIMEOUT))
		{
			gser_error("N0.QLM%d.Lane%d: Timeout waiting for GSERNX_LANEX_INIT_BSTS[rst_sm_complete]\n", qlm, lane);
			return -1;
		}
		if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERNX_LANEX_INIT_BSTS(qlm, lane), GSERN_COMMON_INIT_BSTS_RST_SM_READY, ==, 1, TIMEOUT))
		{
			gser_error("N0.QLM%d.Lane%d: Timeout waiting for GSERNX_LANEX_INIT_BSTS[rst_sm_ready]\n", qlm, lane);
			return -1;
		}
		if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERNX_LANEX_INIT_BSTS(qlm, lane), GSERN_COMMON_INIT_BSTS_CAL_READY, ==, 1, TIMEOUT))
		{
			gser_error("N0.QLM%d.Lane%d: Timeout waiting for GSERNX_LANEX_INIT_BSTS[cal_ready]\n", qlm, lane);
			return -1;
		}
		if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERNX_LANEX_INIT_BSTS(qlm, lane), GSERN_COMMON_INIT_BSTS_CAL_FAIL, ==, 0, TIMEOUT))
		{
			gser_error("N0.QLM%d.Lane%d: Timeout waiting for GSERNX_LANEX_INIT_BSTS[cal_fail=0]\n", qlm, lane);
			return -1;
		}
	}
	return 0;
}

/**
 * Wait for GSERNX_LANEX_INIT_BSTS[rx_ready, rx_rst_sm_complete]
 *
 * @param node
 * @param qlm
 * @param qlm_lane
 *
 * @return
 */
int gsern_init_wait_for_rx_ready(int qlm, int qlm_lane)
{
	const int TIMEOUT = 10000; /* Timeout for wait loops in microsec */
	int num_lanes = gser_qlm_get_lanes(qlm);

	if (gser_is_platform(GSER_PLATFORM_ASIM) || gser_is_platform(GSER_PLATFORM_EMULATOR))
		return 0;

	for (int lane = 0; lane < num_lanes; lane++)
	{
	   /* Skip lanes we don't care about */
		if ((qlm_lane != -1) && (qlm_lane != lane))
			continue;

		if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERNX_LANEX_INIT_BSTS(qlm, lane), GSERN_LANE_INIT_BSTS_RX_READY, ==, 1, TIMEOUT))
		{
			GSER_TRACE(QLM, "N0.QLM%d.Lane%d: Timeout waiting for GSERNX_LANEX_INIT_BSTS[rx_ready]\n", qlm, lane);
			return -1;
		}
		if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERNX_LANEX_INIT_BSTS(qlm, lane), GSERN_LANE_INIT_BSTS_RX_RST_SM_COMPLETE, ==, 1, TIMEOUT))
		{
			GSER_TRACE(QLM, "N0.QLM%d.Lane%d: Timeout waiting for GSERNX_LANEX_INIT_BSTS[rx_rst_sm_complete]\n", qlm, lane);
			return -1;
		}
	}
	return 0;
}

/**
 * Wait for GSERNX_LANEX_INIT_BSTS[tx_ready, tx_rst_sm_complete]
 *
 * @param node
 * @param qlm
 * @param qlm_lane
 *
 * @return
 */
int gsern_init_wait_for_tx_ready(int qlm, int qlm_lane)
{
	const int TIMEOUT = 10000; /* Timeout for wait loops in microsec */
	int num_lanes = gser_qlm_get_lanes(qlm);

	if (gser_is_platform(GSER_PLATFORM_ASIM) || gser_is_platform(GSER_PLATFORM_EMULATOR))
		return 0;

	for (int lane = 0; lane < num_lanes; lane++)
	{
	   /* Skip lanes we don't care about */
		if ((qlm_lane != -1) && (qlm_lane != lane))
			continue;

		if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERNX_LANEX_INIT_BSTS(qlm, lane), GSERN_LANE_INIT_BSTS_TX_READY, ==, 1, TIMEOUT))
		{
			gser_error("N0.QLM%d.Lane%d: Timeout waiting for GSERNX_LANEX_INIT_BSTS[tx_ready]\n", qlm, lane);
			return -1;
		}
		if (GSER_CSR_WAIT_FOR_FIELD(CAVM_GSERNX_LANEX_INIT_BSTS(qlm, lane), GSERN_LANE_INIT_BSTS_TX_RST_SM_COMPLETE, ==, 1, TIMEOUT))
		{
			gser_error("N0.QLM%d.Lane%d: Timeout waiting for GSERNX_LANEX_INIT_BSTS[tx_rst_sm_complete]\n", qlm, lane);
			return -1;
		}
	}
	return 0;
}

