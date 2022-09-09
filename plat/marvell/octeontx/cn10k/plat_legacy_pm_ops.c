/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <lib/psci/psci.h>
#include <debug.h>
#include <octeontx_utils.h>
#include <octeontx_common.h>
#include <octeontx_legacy_pm.h>
#include <octeontx_mmap_utils.h>
#include <plat_cn10k_configuration.h>
#include <drivers/delay_timer.h>

#include "cavm-csrs-rst.h"
#include "cavm-csrs-pem.h"
#include "cavm-csrs-ecam.h"

#if defined(PLAT_cn10ka)
#include <plat_board_cfg.h>

/* Soft-reset switch device */
void plat_pcie_switch_reset(void)
{
#define MEM_BASE	0x8aa000000000
#define BAR0_SIZE	0x100000
#define BAR2_SIZE	0x400000
#define BAR0_OFFSET	0x10
#define BAR2_OFFSET	0x18
#define SHIFT32		32
#define REG32_MASK	0xffffffff

#define BAR0_CTRL_REG1			0x1500
#define BAR0_CTRL_REG2			0x1504
#define BAR0_CTRL_REG2_EN_WINDOW	0x80000000
#define BAR0_BASE_LO			0x1508
#define BAR0_BASE_HI			0x150c
#define BAR0_BASE_LIMIT			0x1510
#define BAR0_LIMIT_OFFSET		0x100000
#define BAR0_LIMIT_OFFSET_HI		0x1fffff
#define BAR0_TARGET_LO			0x1514
#define BAR0_TARGET_HI			0x1518

#define BAR0_CNM_CTRL_REG1		0x1700
#define BAR0_CNM_CTRL_REG2		0x1704
#define BAR0_CNM_CTRL_REG2_EN_WINDOW	0x80000000
#define BAR0_CNM_BASE_LO		0x1708
#define BAR0_CNM_BASE_HI		0x170c
#define BAR0_CNM_BASE_LIMIT		0x1710
#define BAR0_CNM_LIMIT_OFFSET		0x200000
#define BAR0_CNM_LIMIT_OFFSET_HI	0x2fffff
#define BAR0_CNM_TARGET_LO		0x1714
#define BAR0_CNM_TARGET_BASE_LO		0x3c000000
#define BAR0_CNM_TARGET_HI		0x1718

#define BAR2_OFFSET1			0x100000
#define BAR2_OFFSET2			0x200000
#define BAR2_REG1			0xf806c
#define BAR2_REG2			0xf800c
#define BAR2_REG3			0x44
#define BAR2_MASK1			0x00000002
#define BAR2_MASK2			0x00001010
#define BAR2_MASK3			0x00000001


	uint32_t sw_bar2_lo, sw_bar2_hi, val;
	uint64_t sw_bar0, sw_bar2;
	uint64_t cfg_ptr;
	unsigned long attr = MT_DEVICE | MT_RW | MT_NS;
	union cavm_ecam_cfg_addr_s cfg_addr;

	INFO("Switch Reset +\n");

	cfg_addr.u = 0x0;
	cfg_addr.s.io = 1;
	cfg_addr.s.did = 0x78;
	cfg_addr.s.dmn = 0x8;
	cfg_addr.s.bus = 0x1;
	cfg_ptr = cfg_addr.u;

	sw_bar0 = octeontx_read32(cfg_ptr + BAR0_OFFSET);
	sw_bar0 += MEM_BASE;
	sw_bar0 &= (~0xFULL);
	sw_bar2 = octeontx_read32(cfg_ptr + BAR2_OFFSET);
	sw_bar2 += MEM_BASE;
	sw_bar2 &= (~0xFULL);
	sw_bar2_lo = (uint32_t)(sw_bar2 & REG32_MASK);
	sw_bar2_hi = (uint32_t)((sw_bar2 >> SHIFT32) & REG32_MASK);
	INFO("BAR0 0x%llx BAR2 0x%llx\n", sw_bar0, sw_bar2);
	INFO("BAR2 lo 0x%x hi 0x%x\n", sw_bar2_lo, sw_bar2_hi);

	/* Map Switch memory space */
	if (octeontx_mmap_add_dynamic_region_with_sync(sw_bar0, sw_bar0,
						       BAR0_SIZE, attr)) {
		WARN("Switch reset: BAR0 mmap failed\n");
		return;
	}
	if (octeontx_mmap_add_dynamic_region_with_sync(sw_bar2, sw_bar2,
						       BAR2_SIZE, attr)) {
		WARN("Switch reset: BAR2 mmap failed\n");
		return;
	}

	/*
	 * Open 1M iATU address translation window into Prestera DFX-server,
	 * at ‘second window’ of BAR2 , for addresses with prefix 0x000xxxxx
	 * (DFX-server)
	 * mw 0x872000001500 0x00000000; ATU ctrl reg 1
	 * mw 0x872000001504 0x80000000; ATU ctrl reg 2 (bit 31: enable window)
	 * mw 0x872000001508 0x00900000; ATU lower base address (start of BAR2)
	 * mw 0x87200000150c 0x00008720; ATU upper base address
	 * mw 0x872000001510 0x009fffff; ATU limit address (limit to 1MB)
	 * mw 0x872000001514 0x00000000; ATU target lower base address
					 (start of DFX-server)
	 * mw 0x872000001518 0x00000000; ATU target upper base address
	 */
	octeontx_write32(sw_bar0 + BAR0_CTRL_REG1, 0x0);
	octeontx_write32(sw_bar0 + BAR0_CTRL_REG2, BAR0_CTRL_REG2_EN_WINDOW);
	octeontx_write32(sw_bar0 + BAR0_BASE_LO,
			 sw_bar2_lo + BAR0_LIMIT_OFFSET);
	octeontx_write32(sw_bar0 + BAR0_BASE_HI, 0x0);
	octeontx_write32(sw_bar0 + BAR0_BASE_LIMIT,
			 sw_bar2_lo + BAR0_LIMIT_OFFSET_HI);
	octeontx_write32(sw_bar0 + BAR0_TARGET_LO, 0x0);
	octeontx_write32(sw_bar0 + BAR0_TARGET_HI, 0x0);

	/*
	 * Open 1M iATU address translation window into Prestera CNM-RUNIT,
	 * at ‘third window’ of BAR2 , for addresses with prefix 0x3c0xxxxx
	 * (CNM-RUNIT) :
	 * mw 0x872000001700 0x00000000; ATU ctrl reg 1
	 * mw 0x872000001704 0x80000000; ATU ctrl reg 2 (bit 31: enable window)
	 * mw 0x872000001708 0x00a00000; ATU lower base address (start of BAR2)
	 * mw 0x87200000170c 0x00008720; ATU upper base address
	 * mw 0x872000001710 0x00afffff; ATU limit address (limit to 1MB)
	 * mw 0x872000001714 0x3c000000; ATU target lower base address
				 (start of CNM-RUNIT)
	 * mw 0x872000001718 0x00000000; ATU target upper base address
	 */
	octeontx_write32(sw_bar0 + BAR0_CNM_CTRL_REG1, 0x0);
	octeontx_write32(sw_bar0 + BAR0_CNM_CTRL_REG2,
			 BAR0_CNM_CTRL_REG2_EN_WINDOW);
	octeontx_write32(sw_bar0 + BAR0_CNM_BASE_LO,
			 sw_bar2_lo + BAR0_CNM_LIMIT_OFFSET);
	octeontx_write32(sw_bar0 + BAR0_CNM_BASE_HI, 0x0);
	octeontx_write32(sw_bar0 + BAR0_CNM_BASE_LIMIT,
			 sw_bar2_lo + BAR0_CNM_LIMIT_OFFSET_HI);
	octeontx_write32(sw_bar0 + BAR0_CNM_TARGET_LO,
			 BAR0_CNM_TARGET_BASE_LO);
	octeontx_write32(sw_bar0 + BAR0_CNM_TARGET_HI, 0x0);

	/*
	 * Write_mask 0x8720009F806C DATA 0x00000000 MASK 0x00000002
	 * Write_mask 0x8720009F800C DATA 0x00000000 MASK 0x00001010
	 * Write_mask 0x872000a00044 DATA 0x00000001 MASK 0x00000001
	 * Write_mask 0x872000a00044 DATA 0x00000000 MASK 0x00000001
	 */
	val = octeontx_read32(sw_bar2 + BAR2_OFFSET1 + BAR2_REG1);
	val &= ~BAR2_MASK1;
	val |= 0x0;
	octeontx_write32(sw_bar2 + BAR2_OFFSET1 + BAR2_REG1, val);
	val = octeontx_read32(sw_bar2 + BAR2_OFFSET1 + BAR2_REG2);
	val &= ~BAR2_MASK2;
	val |= 0x0;
	octeontx_write32(sw_bar2 + BAR2_OFFSET1 + BAR2_REG2, val);
	val = octeontx_read32(sw_bar2 + BAR2_OFFSET2 + BAR2_REG3);
	val &= ~BAR2_MASK3;
	val |= 0x1;
	octeontx_write32(sw_bar2 + BAR2_OFFSET2 + BAR2_REG3, val);
	val = octeontx_read32(sw_bar2 + BAR2_OFFSET2 + BAR2_REG3);
	val &= ~BAR2_MASK3;
	val |= 0x0;
	octeontx_write32(sw_bar2 + BAR2_OFFSET2 + BAR2_REG3, val);
	mdelay(5);

	/* Unmap Memory space */
	octeontx_mmap_remove_dynamic_region_with_sync(sw_bar0, BAR0_SIZE);
	octeontx_mmap_remove_dynamic_region_with_sync(sw_bar2, BAR2_SIZE);

	INFO("Switch Reset -\n");
}
#endif

/*******************************************************************************
 * FVP handler to reboot the system
 ******************************************************************************/

static void __dead2 plat_octeontx_legacy_system_reset(void)
{
	union cavm_rst_boot rst_boot;
	union cavm_rst_chip_domain_w1s rst_chip;

#if defined(PLAT_cn10ka)
#define PEM_SWITCH_PORT 5
	if (plat_get_altpkg() != CN10KA_PKG &&
		plat_octeontx_bcfg->do_switch_reset) {
		union cavm_pemx_cfg pemx_cfg;
		union cavm_pemx_diag_status diag_sts;

		pemx_cfg.u = CSR_READ(CAVM_PEMX_CFG(PEM_SWITCH_PORT));
		diag_sts.u = CSR_READ(CAVM_PEMX_DIAG_STATUS(PEM_SWITCH_PORT));

		/* Check for RC mode and Link up status */
		if (pemx_cfg.s.hostmd && diag_sts.s.lnk_up)
			plat_pcie_switch_reset();
	}
#endif
	dcsw_op_all(DCCISW);
	llc_flush();
	__asm__ volatile("ic iallu\n"
			 "isb\n");

	// SCP should auto restart after reset
	rst_boot.s.rboot = 0;
	CSR_WRITE(CAVM_RST_BOOT, rst_boot.u);

	// entire system reset
	rst_chip.s.soft_rst = 1;
	CSR_WRITE(CAVM_RST_CHIP_DOMAIN_W1S, rst_chip.u);
	while (rst_chip.s.soft_rst)
		rst_chip.u = CSR_READ(CAVM_RST_CHIP_DOMAIN_W1S);

	ERROR("OcteonTX System Reset: operation not handled.\n");
	panic();
}

void plat_octeontx_legacy_psci_override_pm_ops(plat_psci_ops_t *pm_ops)
{
	pm_ops->system_reset = plat_octeontx_legacy_system_reset;
}
