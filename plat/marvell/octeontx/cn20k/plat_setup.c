/*
 * Copyright (c) 2023 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 *
 */

#include <arch.h>
#include <stdio.h>
#include <inttypes.h>
#include <debug.h>
#include <string.h>
#include <assert.h>
#include <platform_def.h>
#include <octeontx_common.h>
#include <octeontx_ecam.h>
#include <plat_pwrc.h>
#include <octeontx_legacy_pwrc.h>
#include <gpio_octeontx.h>
#include <plat_board_cfg.h>
#include <plat_octeontx.h>
#include <octeontx_utils.h>
#include <octeontx_security.h>
#include <octeontx_board_cfg_setup.h>
#include <platform_irqs_def.h>
#include <plat_cn20k_configuration.h>
#include <strtol.h>
#include <libfdt.h>
#include <octeontx_mmap_utils.h>
#include <plat_mem_alloc.h>
#include <octeontx_dram.h>
#ifdef ENABLE_RECORD_FWLOG
#include <mem_console.h>
#endif
#include <cavm-csrs-fus.h>

#include <octeontx_helpers.h>

#include <bl31/interrupt_mgmt.h>
#include <plat/common/platform.h>

#include "cavm-csrs-ecam.h"
#include "cavm-csrs-pccpf.h"
#include "cavm-csrs-gpio.h"
#include "cavm-csrs-gic.h"
#include "cavm-csrs-emmc.h"
#include "cavm-csrs-rnm.h"
#include "cavm-csrs-iobn.h"
#include "cavm-csrs-rst.h"
#include "cavm-csrs-smmu.h"
#include "cavm-sw-csrs.h"
#include "cavm-csrs-ncb.h"
#include "cavm-csrs-apa.h"
#include "cavm-csrs-aux_gpio.h"

/* Each of these can be overridden by the platform - this is uncommon */
#pragma weak plat_octeontx_get_eth_count
#pragma weak plat_octeontx_get_eth_lmac_count
#pragma weak plat_octeontx_get_eth_lmac_rvu_info
#pragma weak plat_octeontx_enable_eth_lmac
#pragma weak plat_octeontx_is_enabled_eth_lmac

#ifdef ENABLE_RECORD_FWLOG
extern console_t fwlog_buf;
#endif

#if defined(SAVE_FATAL_ERRLOGS) && defined(IMAGE_BL31)
int crashdump_init(void *fdt);
#endif

volatile int8_t enable_hotplug[PLATFORM_CORE_COUNT] __aligned(CACHE_WRITEBACK_GRANULE);

static void plat_set_emmc_msix_vectors(void)
{
	uint64_t vecaddr = CAVM_EMMCX_MSIX_VECX_ADDR(0, 0);
	uint64_t vecctl = CAVM_EMMCX_MSIX_VECX_CTL(0, 0);
	uint32_t irq;
	cavm_emmcx_clk_ctrl_t clk_ctrl;

	irq = EMMC_SPI_IRQ(0);

	octeontx_write64(vecctl, irq);
	octeontx_write64(vecaddr, CAVM_GICD_SETSPI_NSR);

	clk_ctrl.u = 0;
	clk_ctrl.s.emmc_clk_en = 1;
	clk_ctrl.s.emmc_imsc_shadow = 1;
	CSR_WRITE(CAVM_EMMCX_CLK_CTRL(0), clk_ctrl.u);
}

#if defined(IMAGE_BL2)

#define IRQ_TYPE_EDGE_RISING	1
#define IRQ_TYPE_EDGE_FALLING	2
#define IRQ_TYPE_EDGE_BOTH	(IRQ_TYPE_EDGE_FALLING | IRQ_TYPE_EDGE_RISING)
#define IRQ_TYPE_LEVEL_HIGH	4
#define IRQ_TYPE_LEVEL_LOW	8

static void plat_initialize_interrupt_fdt(void *fdt)
{
	const uint32_t *reg;
	uint32_t intr_cfg[3];
	int node;

	VERBOSE("Update interrupt configuration in FDT\n");

	node = fdt_node_offset_by_compatible(fdt, -1, "cdns,sd6hc");
	if (node > 0) {

		intr_cfg[0] = cpu_to_fdt32(0);
		intr_cfg[1] = cpu_to_fdt32(EMMC_SPI_IRQ(0) - SPI_IRQ_OFFSET);
		intr_cfg[2] = cpu_to_fdt32(IRQ_TYPE_LEVEL_HIGH);

		if (fdt_setprop(fdt, node, "interrupts", intr_cfg, sizeof(intr_cfg))) {
			ERROR("Unable to set EMMC interrupt property\n");
			return;
		}

		reg = fdt_getprop(fdt, node, "interrupts", NULL);
		if (reg) {
			VERBOSE("EMMC %s num %d intrtype %d\n",
				fdt32_to_cpu(reg[0]) ? "PPI": "SPI",
				fdt32_to_cpu(reg[1]) + SPI_IRQ_OFFSET,
				fdt32_to_cpu(reg[2]));
		}
	}
}
#endif

#ifdef ENABLE_RECORD_FWLOG
void bl31_el3_plat_prepare_exit(void)
{
	flush_dcache_range(FWLOG_NS_MEM_BASE, FWLOG_NS_MEM_SIZE);
}
#endif

/* Any SoC family specific setup
 * to be done in BL31 can be initialized
 * in this API. If there are any platform
 * specific init to be done but not common
 * to family, each platform can define
 * its own API and can be called from here
 */
void plat_octeontx_setup(void)
{
	int core;
	cavm_smmux_gbpa_t smmu_gbpa;

#if defined(IMAGE_BL31)
#if defined(SAVE_FATAL_ERRLOGS)
	void *fdt = fdt_ptr;

	crashdump_init(fdt);
#endif
#endif
	/* setup gpio interrupt handling */
	plat_gpio_irq_setup();

	plat_set_emmc_msix_vectors();

	/* Bypass SMMU transactions */
	smmu_gbpa.u = CSR_READ(CAVM_SMMUX_GBPA(0));
	smmu_gbpa.s.abrt = 0;
	smmu_gbpa.s.update = 1;
	CSR_WRITE(CAVM_SMMUX_GBPA(0), smmu_gbpa.u);

	do {
		smmu_gbpa.u = CSR_READ(CAVM_SMMUX_GBPA(0));
	} while (smmu_gbpa.s.update);

	/* Setup APA wdog interrupts */
	//plat_apa_wdog_intr_init();

#ifdef ENABLE_RECORD_FWLOG
	bl31_el3_plat_prepare_exit();
#endif
	for(core = 1; core < PLATFORM_CORE_COUNT; core++)
		enable_hotplug[core] = CN10K_CORE_PWROFF;
}

/*
 * Program REVID for PCIe devices.
 * Bits 0..1: minor pass
 * Bits 3..2: major pass
 * Bits 7..4: midr id:
 *      cn20ka  : 0x5
 *      cnf20ka : 0x6
 */
unsigned int plat_configure_rid(void)
{
	unsigned int val = 0;
	int maj, min;
	uint64_t fus;

	fus = CSR_READ(CAVM_FUS_CACHEX(0));
	maj = (fus >> __OM_MAJOR_SHIFT) & 0x3;
	min = (fus >> __OM_MINOR_SHIFT) & 0x3;
	if (cavm_is_model(OCTEONTX_CN20KA))
		val = 0x50;
	else if (cavm_is_model(OCTEONTX_CNF20KA))
		val = 0x60;

	val |= (min | (maj << 2));

	return val;
}

extern void *scmi_handle;

void plat_pwrc_setup(void)
{
	int rc;

#if 0
//defined(IMAGE_BL31)
	if (cavm_is_platform(PLATFORM_EMULATOR)
	    || cavm_is_platform(PLATFORM_ASIM)) {
		return;
	}
#endif

	rc = octeontx_pwrc_setup();
	if (rc) {
		ERROR("pwrc_setup failed\n");
	}
}

int plat_setup_psci_ops(uintptr_t sec_entrypoint,
			 const plat_psci_ops_t **psci_ops)
{
#ifdef SCMI_WITH_LEGACY_PM
	/*
	 * Always use legacy PSCI ops
	 */
	return octeontx_legacy_setup_psci_ops(sec_entrypoint, psci_ops);
#else
	if (scmi_handle == NULL) {
		return octeontx_legacy_setup_psci_ops(sec_entrypoint, psci_ops);
	} else {
		return octeontx_setup_psci_ops(sec_entrypoint, psci_ops);
	}
#endif
}

/*
 * Return alternative pkg information
 *
 * @return non-zero if an alternative package
 *     2 = Normal package (cn20kas)
 *     1 = Alternative package 1 (cn20ka)
 */
int plat_get_altpkg(void)
{
	union cavm_gpio_pkg_ver pkg_ver;

	pkg_ver.u = CSR_READ(CAVM_AUX_GPIO_PKG_VER);
	return pkg_ver.s.pkg_ver;
}

void plat_octeontx_cpu_setup(void)
{
	uint64_t addr;

	/* To support core Armv8.5-RNG random-number read instructions:
	 * - MRS Xn, RNDR
	 * - MRS Xn, RNDRRS
	 * The random entropy is returned from the RNM unit
	 * Software must program {CPURNDBR_EL3<47:16>,
	 * CPU_RNDPEID_EL3<10:0>} to the address of RNM_DRBG_RNDR.
	 *
	 * HW internally left shifts register CPURNDPEID_EL3[10:0] by 5
	 * to get the complete RNM_DRBG_RNDR address,
	 * so software has to program the offset by right shift of 5.
	 */
	addr = (CAVM_RNM_DRBG_RNDR_FUNC() & ~0xFFFFull);
	write_cvmcpurndbr_el3(addr);

	addr = ((CAVM_RNM_DRBG_RNDR_FUNC() & 0xFFFFull) >> 5);
	write_cvmcpurndpeid_el3(addr);
}

static int ts_valid;

/* Parse dts to check if timestamp is enabled or disabled. */
static void cn20k_parse_timestamp(void)
{
	const void *fdt = fdt_ptr;
	const char *str;
	int offset, rc;
	int len;

	rc = fdt_check_header(fdt);
	if (rc) {
		WARN("Invalid device tree\n");
		return;
	}

	offset = fdt_path_offset(fdt, "/marvell,ebf");
	if (offset < 0) {
		WARN("FDT node not found\n");
		return;
	}

	str = fdt_getprop(fdt, offset,
			      "EBF-CONFIG-ATF-TIMESTAMP", &len);
	if (str)
		ts_valid = strtol(str, NULL, 16);

	if (ts_valid <= 0)
		ts_valid = 0;
	else
		ts_valid = 1;
}

uint64_t get_usecs(void)
{
	const unsigned long USECS_IN_SEC = 1000000;
	unsigned long clock_time = read_cntpct_el0();
	unsigned long clock_rate = read_cntfrq_el0();
	unsigned long usecs = clock_time / (clock_rate / USECS_IN_SEC);

	return usecs;
}

/* Print timestamp from AP CNTPCT_EL0 timer */
static void _plat_print_timestamp(void)
{
	const unsigned long USECS_IN_SEC = 1000000;
	const unsigned long USECS_IN_MIN = 60 * USECS_IN_SEC;
	const unsigned long USECS_IN_HOUR = 60 * USECS_IN_MIN;
	const unsigned long USECS_IN_DAY = 24 * USECS_IN_HOUR;
	unsigned long usecs = get_usecs();

	unsigned long days = usecs / USECS_IN_DAY;

	usecs %= USECS_IN_DAY;

	unsigned long hours = usecs / USECS_IN_HOUR;

	usecs %= USECS_IN_HOUR;

	unsigned long mins = usecs / USECS_IN_MIN;

	usecs %= USECS_IN_MIN;
	unsigned long secs = usecs / USECS_IN_SEC;

	usecs %= USECS_IN_SEC;

	printf("%lud%02luh%02lum%02lu.%06lus: ",
			days, hours, mins, secs, usecs);

}

static const char * const plat_prefix_str[] = {
	"ERROR:   ", "NOTICE:  ", "WARNING: ", "INFO:    ", "VERBOSE: "};

const char *plat_log_get_prefix(unsigned int log_level)
{
	unsigned int level;


	/* Print timestamp */
	if (ts_valid)
		_plat_print_timestamp();

	if (log_level < LOG_LEVEL_ERROR)
		level = LOG_LEVEL_ERROR;
	else if (log_level > LOG_LEVEL_VERBOSE)
		level = LOG_LEVEL_VERBOSE;
	else
		level = log_level;

	return plat_prefix_str[(level / 10U) - 1U];
}

void plat_cn20x_early_initialization(void)
{
#if defined(IMAGE_BL2)
	void *fdt = fdt_ptr;
#endif

	cn20k_parse_timestamp();

#ifdef MRVL_TF_LOG_MODULE
	initialize_tf_logging();
#endif // MRVL_TF_LOG_MODULE

#if defined(IMAGE_BL2)
	plat_initialize_interrupt_fdt(fdt);
#endif
}

void plat_el3_arch_setup(void)
{
#ifdef ENABLE_RECORD_FWLOG
	struct fw_logbuf_header *ns_fwlogmem = (struct fw_logbuf_header *) FWLOG_NS_MEM_BASE;
	struct fw_logbuf_header *sec_fwlogmem = (struct fw_logbuf_header *) FWLOG_SEC_BASE;
	uint64_t fwlog_size;

	if (sec_fwlogmem && sec_fwlogmem->fwlog_base != 0) {
		fwlog_size = sec_fwlogmem->fwlog_ptr - sec_fwlogmem->fwlog_base;
		/* Disable the console mem */
		console_set_scope((console_t *)&fwlog_buf, 0);
		/* Copy the firmware logs from secure memory to non-secure */
		memcpy((char *)ns_fwlogmem->fwlog_ptr, (char *)sec_fwlogmem->fwlog_base, fwlog_size);
		ns_fwlogmem->fwlog_ptr = ns_fwlogmem->fwlog_ptr + fwlog_size;
		fwlog_buf.base = FWLOG_NS_MEM_BASE;
		console_set_scope((console_t *)&fwlog_buf, CONSOLE_FLAG_RUNTIME);
	}
#endif
}

void bl2_el3_plat_prepare_exit(void)
{
	union cavm_rst_cold_data2_sw boot_info;

#ifdef ENABLE_RECORD_FWLOG
	flush_dcache_range(FWLOG_SEC_BASE, FWLOG_SEC_SIZE);
#endif

	/* ATF bl2 boot successfully with no error */
	boot_info.u = CSR_READ(CAVM_RSTX_COLD_DATAX(1, 2));
	boot_info.s.atf_bl2_boot_status = BOOT_SUCCESS;
	boot_info.s.atf_bl2_boot_error = BOOT_NEXT_STAGE_SUCCESS;
	CSR_WRITE(CAVM_RSTX_COLD_DATAX(1, 2), boot_info.u);
}

bool plat_ras_feature_supported(void)
{
	if (cavm_is_platform(PLATFORM_HW))
		return true;
	else
		return 0;
}

/*
 * Used to retrieve the count of ETH devices (an abstraction of RPM)
 *
 * On entry,
 *   void
 *
 * Returns,
 *   count of ETH devices
 */
int plat_octeontx_get_eth_count(void)
{
	return plat_octeontx_get_rpm_count();
}

/*
 * Used to retrieve the count of LMAC devices per ETH
 *
 * On entry,
 *   void
 *
 * Returns,
 *   count of LMAC devices per ETH
 */
int plat_octeontx_get_eth_lmac_count(void)
{
	return MAX_LMAC_PER_RPM;
}

/*
 * Used to retrieve RVU information for an ETH/LMAC combination.
 *
 * On entry,
 *   eth_id:  ETH instance ID (0..n, see 'plat_octeontx_get_eth_count')
 *   lmac_id: LMAC instance ID (0..n, see 'plat_octeontx_get_eth_lmac_count')
 *   num_rvu_vfs:  ptr by which RVU VF count is returned
 *   num_msix_vec: ptr by which MSIX vector count is returned
 *   nix_block:    ptr by which ETH NIX block is returned
 *
 * Returns,
 *   void
 */
void plat_octeontx_get_eth_lmac_rvu_info(unsigned int eth_id,
					 unsigned int lmac_id,
					 int *num_rvu_vfs,
					 int *num_msix_vec,
					 int *nix_block)
{
	rpm_config_t *rpm_cfg;

	assert(eth_id < MAX_RPM);
	assert(lmac_id < MAX_LMAC_PER_RPM);

	rpm_cfg = &plat_octeontx_eth_cfg->rpm_cfg[eth_id];

	if (nix_block)
		*nix_block = 0;
	if (num_rvu_vfs)
		*num_rvu_vfs = rpm_cfg->lmac_cfg[lmac_id].num_rvu_vfs;
	if (num_msix_vec)
		*num_msix_vec = rpm_cfg->lmac_cfg[lmac_id].num_msix_vec;
}

/*
 * Indicates if a particular ETH/LMAC combination is enabled.
 *
 * On entry,
 *   eth_id:  ETH instance ID (0..n, see 'plat_octeontx_get_eth_count')
 *   lmac_id: LMAC instance ID (0..n, see 'plat_octeontx_get_eth_lmac_count')
 *
 * Returns,
 *   true if ETH/LMAC combo is enabled, else false
 */
int plat_octeontx_is_enabled_eth_lmac(unsigned int eth_id, unsigned int lmac_id)
{
	rpm_config_t *rpm_cfg;
	int enabled;

	assert(eth_id < MAX_RPM);
	assert(lmac_id < MAX_LMAC_PER_RPM);

	enabled = 0;

	if ((eth_id < MAX_RPM) && (lmac_id < MAX_LMAC_PER_RPM)) {
		rpm_cfg = &plat_octeontx_eth_cfg->rpm_cfg[eth_id];
		enabled = rpm_cfg->enable &&
			  rpm_cfg->lmac_cfg[lmac_id].lmac_enable;
	}

	return enabled;
}
