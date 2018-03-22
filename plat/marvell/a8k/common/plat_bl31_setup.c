/*
 * ***************************************************************************
 * Copyright (C) 2016 Marvell International Ltd.
 * ***************************************************************************
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * Neither the name of Marvell nor the names of its contributors may be used
 * to endorse or promote products derived from this software without specific
 * prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY,
 * OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ***************************************************************************
 */

#include <plat_marvell.h>
#include <plat_config.h>
#include <plat_private.h>
#include <ap_setup.h>
#include <cp110_setup.h>
#include <marvell_pm.h>
#include <mmio.h>
#include <mci.h>
#include <debug.h>

#include <mss_ipc_drv.h>
#include <mss_mem.h>

/* In Armada-8k family AP806/AP807, CP0 connected to PIDI
** and CP1 connected to IHB via MCI #0
** */
#define MVEBU_MCI0		0

static _Bool pm_fw_running;

/* Set a weak stub for platforms that don't need to configure GPIO */
#pragma weak marvell_gpio_config
int marvell_gpio_config(void)
{
	return 0;
}

static void marvell_bl31_mpp_init(int cp)
{
	uint32_t reg;

	/* need to do for CP#0 only */
	if (cp)
		return;

	/* TODO: move this code to U-boot */
	/*
	 * Enable CP0 I2C MPPs (MPP: 37-38)
	 * U-Boot rely on proper MPP settings for I2C EEPROM usage
	 * (only for CP0)
	 */
	reg = mmio_read_32(MVEBU_CP_MPP_REGS(0, 4));
	mmio_write_32(MVEBU_CP_MPP_REGS(0, 4), reg | 0x2200000);
}

void marvell_bl31_mss_init(void)
{
	struct mss_pm_ctrl_block *mss_pm_crtl =
			(struct mss_pm_ctrl_block *)MSS_SRAM_PM_CONTROL_BASE;

	/* Check that the image was loaded successfully */
	if (mss_pm_crtl->handshake != HOST_ACKNOWLEDGEMENT) {
		NOTICE("MSS PM is not supported in this build\n");
		return;
	}

	/* If we got here it means that the PM firmware is running */
	pm_fw_running = 1;

	INFO("MSS IPC init\n");

	if (mss_pm_crtl->ipc_state == IPC_INITIALIZED)
		mv_pm_ipc_init(mss_pm_crtl->ipc_base_address | MVEBU_REGS_BASE);
}

_Bool is_pm_fw_running(void)
{
	return pm_fw_running;
}

/* This function overruns the same function in marvell_bl31_setup.c */
void bl31_plat_arch_setup(void)
{
	int cp;
	uintptr_t *mailbox = (void *)PLAT_MARVELL_MAILBOX_BASE;

	/* initiliaze the timer for mdelay/udelay functionality */
	plat_delay_timer_init();

	/* configure AP */
	ap_init();

	/* In marvell_bl31_plat_arch_setup, el3 mmu is configured.
	 * el3 mmu configuration MUST be called after apn806_init, if not,
	 * this will cause an hang in init_io_win
	 * (after setting the IO windows GCR values).
	 */
	if (mailbox[MBOX_IDX_MAGIC] != MVEBU_MAILBOX_MAGIC_NUM ||
	    mailbox[MBOX_IDX_SUSPEND_MAGIC] != MVEBU_MAILBOX_SUSPEND_STATE)
		marvell_bl31_plat_arch_setup();

	for (cp = 0; cp < CP_COUNT; cp++) {
		/* Initialize MCI to access CP1 */
		if (cp == 1)
			mci_initialize(MVEBU_MCI0);

		/* Configure cp110 */
		cp110_init(MVEBU_CP_REGS_BASE(cp));

		/* Should be called only after setting IOB windows */
		marvell_bl31_mpp_init(cp);
	}

	/* initialize IPC between MSS and ATF */
	if (mailbox[MBOX_IDX_MAGIC] != MVEBU_MAILBOX_MAGIC_NUM ||
	    mailbox[MBOX_IDX_SUSPEND_MAGIC] != MVEBU_MAILBOX_SUSPEND_STATE)
		marvell_bl31_mss_init();

	/* Configure GPIO */
	marvell_gpio_config();
}
