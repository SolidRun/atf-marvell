/*
 * Copyright (c) 2013-2014, ARM Limited and Contributors. All rights reserved.
 * Copyright (c) 2016 Marvell. All rights reserved.<BR>
 *
 * SPDX-License-Identifier:     BSD-3-Claus
 * https://spdx.org/licenses
 *
 */

#include <inttypes.h>
#include <arch.h>
#include <arch_helpers.h>
#include <assert.h>
#include <bl_common.h>
#include <bl31/bl31.h>
#include <drivers/console.h>
#include <mmio.h>
#include <drivers/arm/pl011.h>
#include <plat/common/platform.h>
#include <bl31/interrupt_mgmt.h>
#include <stddef.h>
#include <lib/xlat_tables/xlat_tables_v2.h>
#include <octeontx_common.h>
#include <octeontx_board_cfg.h>
#include <debug.h>
#include <timers.h>
#include <hw_timers.h>
#include <platform_def.h>
#include <plat_octeontx.h>
#include <gicv3_setup.h>
#include <octeontx_security.h>
#include <octeontx_dram.h>
#include <octeontx_helpers.h>
#if ENABLE_ATTESTATION_SERVICE
#include <octeontx_attestation.h>
#endif
#include <bl31/ehf.h>
#include <octeontx_ehf.h>
#include <octeontx_mmap_utils.h>
#include <gpio_octeontx.h>
#include <plat_mem_alloc.h>
#include <lib/spinlock.h>

#if defined(ENABLE_RECORD_FWLOG)
#if defined(PLAT_CN10K_FAMILY) || defined(PLAT_OTX2_FAMILY)
#include <mem_console.h>
#endif
#endif

#if RAS_EXTENSION
#include <lib/extensions/ras.h>
#endif /* RAS_EXTENSION */

#include "cavm-csrs-uaa.h"

#if defined(PLAT_CN10K_FAMILY) || defined(PLAT_OTX2_FAMILY)
#include "cavm-csrs-rst.h"
#include "cavm-sw-csrs.h"
#endif

#if defined(PLAT_CN10K_FAMILY)
#include "cavm-csrs-apa.h"
#endif

static entry_point_info_t bl33_image_ep_info, bl32_image_ep_info;

#if ENABLE_ATTESTATION_SERVICE
/*
 * This holds the BL31 platform data (which includes s/w attestation info).
 * Upon entry to BL31, the contents are copied from the args passed by BL2.
 * Later, the contents are adjusted to reflect images which have been
 * loaded by BL31.
 * Finally, at run-time, the contents are used by the S/W attestation info
 * service.
 */
octeontx_bl_platform_args_t octeontx_bl31_plat_args;
#endif

/* Data structure for console initialization */
static console_t console;

#if defined(ENABLE_RECORD_FWLOG)
#if defined(PLAT_CN10K_FAMILY) || defined(PLAT_OTX2_FAMILY)
void plat_el3_arch_setup(void);
console_t fwlog_buf;
int console_mem_register(uintptr_t baseaddr, uint32_t clock, uint32_t baud,
			console_t *console);
#endif
#endif

/*******************************************************************************
 * Return a pointer to the 'entry_point_info' structure of the next image for the
 * security state specified. BL33 corresponds to the non-secure image type
 * while BL32 corresponds to the secure image type. A NULL pointer is returned
 * if the image does not exist.
 ******************************************************************************/
entry_point_info_t *bl31_plat_get_next_image_ep_info(uint32_t type)
{
	assert(sec_state_is_valid(type));

	if (type == NON_SECURE)
		return &bl33_image_ep_info;
#ifdef INCLUDE_OPTEE
	if (type == SECURE)
		return &bl32_image_ep_info;
#endif

	return NULL;
}

/*******************************************************************************
 * Perform any BL31 specific platform actions. Here is an opportunity to copy
 * parameters passed by the calling EL (S-EL1 in BL2 & S-EL3 in BL1) before they
 * are lost (potentially). This needs to be done before the MMU is initialized
 * so that the memory layout can be used while creating page tables. On the FVP
 * we know that BL2 has populated the parameters in secure DRAM. So we just use
 * the reference passed in 'from_bl2' instead of copying. The 'data' parameter
 * is not used since all the information is contained in 'from_bl2'. Also, BL2
 * has flushed this information to memory, so we are guaranteed to pick up good
 * data
 ******************************************************************************/
void bl31_early_platform_setup(void *from_bl2,
				void *plat_params_from_bl2,
				uint64_t nt_fw_config_size)
{
	console_pl011_register(UAAX_PF_BAR0(0), 0, 0, &console);
	console_set_scope((console_t *)&console, CONSOLE_FLAG_RUNTIME);

#if defined(ENABLE_RECORD_FWLOG)
#if defined(PLAT_CN10K_FAMILY) || defined(PLAT_OTX2_FAMILY)
	console_mem_register(FWLOG_SEC_BASE, 0, 0, &fwlog_buf);
	console_set_scope((console_t *)&fwlog_buf, CONSOLE_FLAG_RUNTIME);
#endif
#endif

	console_switch_state(CONSOLE_FLAG_RUNTIME);

#if !(defined(PLAT_CN10K_FAMILY) || defined(PLAT_CN20K_FAMILY))
	/* Set secondary CPU entrypoint to somewhere in BL31 code, because
	 * we should not relay on address that is inside of BL1 code.
	 */
	plat_octeontx_set_secondary_cpu_jump_addr(
				(uint64_t)plat_secondary_cold_boot_setup);
#endif

#ifdef NT_FW_CONFIG
	plat_octeontx_set_nt_fw_config_size(nt_fw_config_size);
#endif
	/*
	 * Check params passed from BL2 should not be NULL,
	 */
	bl_params_t *params_from_bl2 = (bl_params_t *)from_bl2;
	assert(params_from_bl2 != NULL);
	assert(params_from_bl2->h.type == PARAM_BL_PARAMS);
	assert(params_from_bl2->h.version >= VERSION_2);

#if ENABLE_ATTESTATION_SERVICE
	/* copy the platform parameters passed to us */
	octeontx_bl31_plat_args =
		*((octeontx_bl_platform_args_t *)plat_params_from_bl2);
	fdt_ptr = octeontx_bl31_plat_args.fdt;
#else
	fdt_ptr = plat_params_from_bl2;
#endif
	bl_params_node_t *bl_params = params_from_bl2->head;

#if defined(PLAT_CN10K_FAMILY)
	plat_cn10x_early_initialization();
#elif defined(PLAT_CN20K_FAMILY)
	plat_cn20x_early_initialization();
#elif defined(PLAT_OTX2_FAMILY)
	plat_otx2_early_initialization();
#endif

	/*
	 * Copy BL33 and BL32 (if present), entry point information.
	 * They are stored in Secure RAM, in BL2's address space.
	 */
	while (bl_params) {
		if (bl_params->image_id == BL32_IMAGE_ID) {
			bl32_image_ep_info = *bl_params->ep_info;
#if defined(PLAT_CN10K_FAMILY) && defined(INCLUDE_OPTEE)
			bl32_image_ep_info.args.arg5 =
				plat_get_ext_secure_base(&bl32_image_ep_info.args.arg4);
#endif
		}


		if (bl_params->image_id == BL33_IMAGE_ID)
			bl33_image_ep_info = *bl_params->ep_info;

		bl_params = bl_params->next_params_info;
	}

	if (bl33_image_ep_info.pc == 0)
		panic();
}


void bl31_early_platform_setup2(u_register_t arg0, u_register_t arg1,
				u_register_t arg2, u_register_t arg3)
{
	bl31_early_platform_setup((void *)arg0, (void *)arg1, (uint64_t)arg2);
}

#if defined(PLAT_CN10K_FAMILY)
#define APA_WDOG_DIAG_CLEAR_30_31       3UL << 30
#define APA_WDOG_DIAG_CLEAR_62_63       3ULL << 62

static spinlock_t octeontx_apa_lock;

void apa_wdog_dump(int core)
{
	ERROR("APA wdog: int_w1c 0x%" PRIx64 "\n",
		CSR_READ(CAVM_APAX_WDOG_INT_W1C(core)));
	ERROR("APA wdog: core_diag 0x%" PRIx64 "\n",
	      CSR_READ(CAVM_APAX_WDOG_CORE_DIAG(core)));
	ERROR("APA wdog: struct_crd_diag 0x%" PRIx64 "\n",
	      CSR_READ(CAVM_APAX_WDOG_STRUCT_CRD_DIAG(core)));
	ERROR("APA wdog: struct_txnid_diag 0x%" PRIx64 "\n",
	      CSR_READ(CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(core)));
	ERROR("APA wdog: struct_rqb_diag 0x%" PRIx64 "\n",
	      CSR_READ(CAVM_APAX_WDOG_STRUCT_RQB_DIAG(core)));
	ERROR("APA wdog: struct_dat_diag 0x%" PRIx64 "\n",
	      CSR_READ(CAVM_APAX_WDOG_STRUCT_DAT_DIAG(core)));
}

uint64_t apa_wdog_irq_handler(uint32_t id, uint32_t flags, void *cookie)
{
	int core_pos;

	core_pos = plat_my_core_pos();

	spin_lock(&octeontx_apa_lock);
	ERROR("APA wdog: Timeout interrupt on CPU 0x%x\n", core_pos);
	apa_wdog_dump(core_pos);
	spin_unlock(&octeontx_apa_lock);

	//clear interrupt after handling
	CSR_WRITE(CAVM_APAX_WDOG_INT_W1C(core_pos), ~0ULL);
	// clear APA wdog DIAG stale and multi entry fields
	CSR_WRITE(CAVM_APAX_WDOG_CORE_DIAG(core_pos), APA_WDOG_DIAG_CLEAR_30_31);
	CSR_WRITE(CAVM_APAX_WDOG_STRUCT_CRD_DIAG(core_pos), APA_WDOG_DIAG_CLEAR_30_31);
	CSR_WRITE(CAVM_APAX_WDOG_STRUCT_TXNID_DIAG(core_pos), APA_WDOG_DIAG_CLEAR_30_31);
	CSR_WRITE(CAVM_APAX_WDOG_STRUCT_RQB_DIAG(core_pos), APA_WDOG_DIAG_CLEAR_62_63);
	CSR_WRITE(CAVM_APAX_WDOG_STRUCT_DAT_DIAG(core_pos), APA_WDOG_DIAG_CLEAR_62_63);

	plat_ic_end_of_interrupt(core_pos);

	return 0;
}

void octeontx_apa_wdog_init(void)
{
	int core;
	int rc;

	/* EBF boot menu option controls APA wdog support.
	 * Check APA watchdog enabled, if enabled configure
	 * the interrupt handler for APA wdog.
	 */
	CSR_INIT(apa_wdog_status, CAVM_APAX_WDOG_CORE(0));
	if (apa_wdog_status.s.enable == 0)
		return;

	for (core = 0; core < PLATFORM_CORE_PER_CLUSTER; core++) {
		rc = octeontx_ehf_register_irq_handler(APA_WDOG_SPI_IRQ(core),
						       apa_wdog_irq_handler);
		if (rc) {
			ERROR("err %d registering APA wdog secure IRQ handler\n", rc);
			return;
		}
	}

	NOTICE("APA wdog intr handlers registered\n");

}
#endif

/*******************************************************************************
 * Initialize the gic, configure the CLCD and zero out variables needed by the
 * secondaries to boot up correctly.
 ******************************************************************************/
void bl31_platform_setup()
{
#if DBG_ALLOW_SYST_REG_AC
	plat_octeontx_dbg_sysreg_set();
#endif
	/*
	 * In order to keep MMC functional in non-secure world, we must
	 * make the device have access to non-secure memory. It is safe to
	 * do it here, because every firmware image is loaded at this time.
	 */
	cavm_setup_platform();
	octeontx_configure_mmc_security(0); /* non-secure */
	octeontx_ehf_setup();
	octeontx_gic_driver_init();
	octeontx_gic_init();
	timers_init();
	octeontx_init_mmap_lock();

	/* Intialize the power controller */
	plat_pwrc_setup();
#if defined(PLAT_CN20K_FAMILY)
	pcp_mbox_init();
#endif
	octeontx_init_heap();
#if defined(PLAT_CN10K_FAMILY)
	octeontx_apa_wdog_init();
#endif
}

/*******************************************************************************
 * Perform the very early platform specific architectural setup here. At the
 * moment this is only intializes the mmu in a quick and dirty way.
 ******************************************************************************/
void bl31_plat_arch_setup()
{
	uintptr_t ns_dma_memory_base =
			octeontx_dram_size() - NS_DMA_MEMORY_SIZE;

#if defined(PLAT_XLAT_TABLES_DYNAMIC)
	octeontx_mmap_add_dynamic_region_with_sync(ns_dma_memory_base,
						   ns_dma_memory_base,
						   NS_DMA_MEMORY_SIZE,
						   MT_DEVICE | MT_RW | MT_NS);
#else
	mmap_add_region(ns_dma_memory_base, ns_dma_memory_base,
			NS_DMA_MEMORY_SIZE,
			MT_DEVICE | MT_RW | MT_NS);
#endif
	mmap_add_region(BL_CODE_BASE, BL_CODE_BASE,
			BL31_END - BL_CODE_BASE,
			MT_MEMORY | MT_RW | MT_SECURE);
	mmap_add_region(BL_CODE_BASE, BL_CODE_BASE,
			BL_CODE_END - BL_CODE_BASE,
			MT_MEMORY | MT_RO | MT_SECURE);

	mmap_add_region(MAILBOX_BASE, MAILBOX_BASE,
			MAILBOX_MAX_SIZE,
			MT_MEMORY | MT_RW | MT_SECURE);

#if USE_COHERENT_MEM
	mmap_add_region(BL_COHERENT_RAM_BASE, BL_COHERENT_RAM_BASE,
			BL_COHERENT_RAM_END - BL_COHERENT_RAM_BASE,
			MT_MEMORY | MT_RW | MT_SECURE);
#endif

#if defined(PLAT_OTX2_FAMILY) || defined(PLAT_CN10K_FAMILY)
	{
		extern void otx2_map_ghes(ras_config_t *rc);
		otx2_map_ghes(&plat_octeontx_bcfg->ras_config);
	}
#endif

	plat_add_mmio_map();

	init_xlat_tables();

	enable_mmu_el3(0);

#if defined(ENABLE_RECORD_FWLOG)
#if defined(PLAT_CN10K_FAMILY) || defined(PLAT_OTX2_FAMILY)
	plat_el3_arch_setup();
#endif
#endif
}

WEAK void otx2_map_ghes(ras_config_t *rc)
{
	/* for BL2 or cn8xxx */
}

void bl31_plat_runtime_setup(void)
{
#if defined(PLAT_CN10K_FAMILY) || defined(PLAT_OTX2_FAMILY)
	union cavm_rst_cold_data2_sw boot_info;
#endif

#if defined(PLAT_XLAT_TABLES_DYNAMIC)
	uintptr_t ns_dma_memory_base =
			octeontx_dram_size() - NS_DMA_MEMORY_SIZE;
#endif

	timers_start();

	/* This API is platform dependent. It can be any boot time
	 * initialization that needs to be performed related to
	 * firmware services provided in BL31
	 */
	plat_octeontx_setup();
#ifndef DEBUG
	console_uninit();
#endif
#if defined(PLAT_XLAT_TABLES_DYNAMIC)
	/* Unmap the nonsecure region */
	octeontx_mmap_remove_dynamic_region_with_sync(NS_IMAGE_BASE,
						      NS_IMAGE_MAX_SIZE);
	octeontx_mmap_remove_dynamic_region_with_sync(ns_dma_memory_base,
						      NS_DMA_MEMORY_SIZE);
#endif
#if defined(ENABLE_RECORD_FWLOG)
#if defined(PLAT_CN10K_FAMILY) || defined(PLAT_OTX2_FAMILY)
	console_unregister(&fwlog_buf);
#endif
#endif

#if defined(PLAT_CN10K_FAMILY) || defined(PLAT_OTX2_FAMILY)
	/* ATF bl31 boot successfully */
	boot_info.u = CSR_READ(CAVM_RST_COLD_DATAX(2));
	boot_info.s.atf_bl31_boot_status = BOOT_SUCCESS;
	boot_info.s.atf_bl31_boot_error = BOOT_NEXT_STAGE_SUCCESS;
	CSR_WRITE(CAVM_RST_COLD_DATAX(2), boot_info.u);
#endif
}

void bl31_plat_warmboot_setup(void)
{
	unsigned int cpu_idx = plat_my_core_pos();

	if (cpu_idx == 0)
		plat_timer_enable(1);
}
