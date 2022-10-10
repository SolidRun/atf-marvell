/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
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

#include <arch.h>
#include <stdio.h>
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
#include <plat_cn10k_configuration.h>
#include <sh_fwdata.h>
#include <rpm.h>
#include <strtol.h>
#include <libfdt.h>
#include <ppr.h>
#include <octeontx_mmap_utils.h>
#include <plat_mem_alloc.h>
#include <octeontx_dram.h>
#ifdef ENABLE_RECORD_FWLOG
#include <mem_console.h>
#endif
#include <cavm-csrs-fus.h>

#if defined(PLAT_cnf10ka) || defined(PLAT_cnf10kb)
#include <bphy.h>
#endif

#if RAS_EXTENSION
#include <plat_ras.h>
#endif

#include "cavm-csrs-ecam.h"
#include "cavm-csrs-pccpf.h"
#include "cavm-csrs-gpio.h"
#include "cavm-csrs-rpm.h"
#include "cavm-csrs-pem.h"
#include "cavm-csrs-gic.h"
#include "cavm-csrs-emmc.h"
#include "cavm-csrs-rnm.h"
#include "cavm-csrs-iobn.h"
#include "cavm-csrs-mrml.h"
#include "cavm-csrs-dss.h"
#include "cavm-csrs-cst_shrd_funnel.h"
#include "cavm-csrs-rst.h"
#include "cavm-csrs-ncb.h"

/* Each of these can be overridden by the platform - this is uncommon */
#pragma weak plat_octeontx_get_eth_count
#pragma weak plat_octeontx_get_eth_lmac_count
#pragma weak plat_octeontx_get_eth_lmac_rvu_info
#pragma weak plat_octeontx_enable_eth_lmac
#pragma weak plat_octeontx_is_enabled_eth_lmac
#pragma weak plat_octeontx_is_eth_lmac_rfoe

#if defined(ARM_TRACE_SECURE_BUFFER)
extern void plat_armtrace_init(void);
#endif

#if defined(PLAT_cnf10ka) || defined(PLAT_cnf10kb)
extern void plat_bphy_irq_setup(void);
#endif

#ifdef ENABLE_RECORD_FWLOG
extern console_t fwlog_buf;
#endif

#if defined(SAVE_FATAL_ERRLOGS) && defined(IMAGE_BL31)
int crashdump_init(void *fdt);
#endif

static void plat_set_emmc_msix_vectors(void)
{
	uint64_t vecaddr = CAVM_EMMCX_MSIX_VECX_ADDR(0, 0);
	uint64_t vecctl = CAVM_EMMCX_MSIX_VECX_CTL(0, 0);
	uint32_t irq;
	cavm_emmcx_clk_ctrl_t clk_ctrl;

	if (cavm_is_model(OCTEONTX_CN10KA_PASS1_X) || cavm_is_model(OCTEONTX_CNF10KA_PASS1_X)) {
		CSR_WRITE(CAVM_EMMCX_INTR(0), ~0ULL);
		CSR_WRITE(CAVM_EMMCX_INTR_ENA_W1C(0), ~0ULL);
	}

	irq = EMMC_SPI_IRQ(0);

	octeontx_write64(vecctl, irq);
	octeontx_write64(vecaddr, CAVM_GICD_SETSPI_NSR);

	if (cavm_is_model(OCTEONTX_CN10KA_PASS1_X) || cavm_is_model(OCTEONTX_CNF10KA_PASS1_X))
		CSR_WRITE(CAVM_EMMCX_INTR_ENA_W1S(0), 1ULL);
	else {
		clk_ctrl.u = 0;
		clk_ctrl.s.emmc_clk_en = 1;
		clk_ctrl.s.emmc_imsc_shadow = 1;
		CSR_WRITE(CAVM_EMMCX_CLK_CTRL(0), clk_ctrl.u);
	}

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
		if (!cavm_is_model(OCTEONTX_CNF10KB) && !cavm_is_model(OCTEONTX_CN10KB))
			intr_cfg[2] = cpu_to_fdt32(IRQ_TYPE_EDGE_RISING);
		else
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

static void plat_set_coresight_funnel(void)
{
	uint64_t base;
	uint64_t size = PAGE_SIZE;
	unsigned int attr = MT_DEVICE | MT_RW | MT_NS;

	base = ROUND_DOWN(CAVM_CST_SHRD_FUNNEL_FUNNELCONTROL, PAGE_SIZE);
	if (octeontx_mmap_add_dynamic_region_with_sync(base, base, size, attr)) {
		WARN("Failed to configure Coresight Funnel\n");
		return;
	}

	/*
	 * FUNNEL_CONTROL:
	 * - Set HoldTime to 0x3
	 * - Enable Slave-0 and Slave-1 to accept trace data from all CPUs
	 */
	CSR_WRITE(CAVM_CST_SHRD_FUNNEL_FUNNELCONTROL, 0x303);

	octeontx_mmap_remove_dynamic_region_with_sync(base, size);
}

static void plat_cn10k_apply_workaround(void)
{
	cavm_iobnx_cfg0_t iobn_cfg0;
	cavm_iobnx_rperf_cntrx_t iobn_rperf_cntr;
	uint32_t i, j;

	/* Add workaround for ipbuanb-485 */
	iobn_cfg0.u = CSR_READ(CAVM_IOBNX_CFG0(0));
	iobn_cfg0.s.dis_ncbo_cr_pois = 0xF;
	CSR_WRITE(CAVM_IOBNX_CFG0(0), iobn_cfg0.u);

	/* Add workaround for ipbuiobn-38735 */
	iobn_rperf_cntr.u = 0;

	for (i = 0; i < plat_octeontx_get_iobn_count(); i++) {
		for (j = 0; j <= 3; j++)
			CSR_WRITE(CAVM_IOBNX_RPERF_CNTRX(i, j), iobn_rperf_cntr.u);
	}

	/*
	 * cnf10k: Disable strict ordering for dsp to partial
	 * cacheline write to llc/ddr
	 */
	if (cavm_is_model(OCTEONTX_CNF10KA) || cavm_is_model(OCTEONTX_CNF10KB)) {
		cavm_ncbx_arbidx_ctl_t ncb_ctl;

		ncb_ctl.u = CSR_READ(CAVM_NCBX_ARBIDX_CTL(5, 0));
		ncb_ctl.s.pr_iova_dis = 1;
		CSR_WRITE(CAVM_NCBX_ARBIDX_CTL(5, 0), ncb_ctl.u);
		ncb_ctl.u = CSR_READ(CAVM_NCBX_ARBIDX_CTL(6, 0));
		ncb_ctl.s.pr_iova_dis = 1;
		CSR_WRITE(CAVM_NCBX_ARBIDX_CTL(6, 0), ncb_ctl.u);
	}
}

#ifdef ENABLE_RECORD_FWLOG
void bl31_el3_plat_prepare_exit(void)
{
	flush_dcache_range(FWLOG_NS_MEM_BASE, FWLOG_NS_MEM_SIZE);
}
#endif

/* Default value for MPAMF_CUST_WINDW
 * (Number of DFI cycle of MPAM measuring) is
 * is 0xFF that might be too small windows for
 * the processor to get feedback and react
 * lets program it to BIGGER value 0x190, 1us.
 */
#ifdef ENABLE_MPAM_FOR_LOWER_ELS
void set_mpamf_cust_window()
{
	uint8_t ch;

	for (ch = 0; ch < MAX_CHANNELS; ch++)
		CSR_WRITE(CAVM_DSSX_DDRCTL_REGB_CHB_MPAM_MPAMF_CUST_WINDW(ch),
			  0x190);
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
	int pem;

#if defined(IMAGE_BL31)
#if defined(SAVE_FATAL_ERRLOGS)
	void *fdt = fdt_ptr;

	crashdump_init(fdt);
#endif
#endif

	plat_cn10k_apply_workaround();

	ppr_fw_init();

	sh_fwdata_init();

	/* Initialize RPM framework */
	rpm_fw_intf_init();

	/* setup gpio interrupt handling */
	plat_gpio_irq_setup();

#if defined(PLAT_cnf10ka) || defined(PLAT_cnf10kb)
	plat_bphy_irq_setup();
#endif

#if RAS_EXTENSION
	if (cavm_is_platform(PLATFORM_HW)) {
		extern int cn10k_ras_init(void);
		cn10k_ras_init();
	}
#endif

	plat_set_emmc_msix_vectors();

	plat_set_coresight_funnel();

	/* Configure PEM EP streams to use secure world access.
	 * PEM streams must be secure to support host remote utils' memory
	 * access while running OcteonTX Linux. Otherwise, any remote access
	 * will be aborted (and an event logged) due to OcteonTX Linux SMMU
	 * initialization.
	 */
	for (pem = 0; pem < plat_octeontx_get_pem_count(); pem++)
		octeontx_configure_pem_ep_security(pem);

#ifdef ENABLE_RECORD_FWLOG
	bl31_el3_plat_prepare_exit();
#endif

#ifdef ENABLE_MPAM_FOR_LOWER_ELS
	set_mpamf_cust_window();
#endif
}

unsigned int is_pem_hotplug(int pem)
{
	const void *fdt = fdt_ptr;
	const char *str;
	char hp_str[32];
	int offset, rc;
	int len;

	rc = fdt_check_header(fdt);
	if (rc) {
		WARN("Invalid device tree\n");
		return 0;
	}

	offset = fdt_path_offset(fdt, "/cavium,bdk");
	if (offset < 0) {
		WARN("FDT node not found\n");
		return 0;
	}

	snprintf(hp_str, sizeof(hp_str), "PCIE-RC-HOTPLUG.PORT%d",
		 pem);
	str = fdt_getprop(fdt, offset, (const char *)hp_str, &len);
	if (str)
		rc = strtol(str, NULL, 16);

	return rc;
}

unsigned int is_pem_in_rc_mode(int pem)
{
	cavm_pemx_cfg_t pemx_cfg;
	cavm_pemx_on_t pemx_on;

	/* Check pemon and hostmd bits of PEM for EP mode */
	pemx_on.u = CSR_READ(CAVM_PEMX_ON(pem));
	pemx_cfg.u = CSR_READ(CAVM_PEMX_CFG(pem));

	return (pemx_on.s.pemon && pemx_on.s.pemoor && pemx_cfg.s.hostmd);
}

unsigned int is_pem_in_ep_mode(int pem)
{
	cavm_pemx_cfg_t pemx_cfg;
	cavm_pemx_on_t pemx_on;

	/* Check pemon and hostmd bits of PEM for EP mode */
	pemx_on.u = CSR_READ(CAVM_PEMX_ON(pem));
	pemx_cfg.u = CSR_READ(CAVM_PEMX_CFG(pem));
	if (pemx_on.s.pemon && !pemx_cfg.s.hostmd)
		return 1;

	return 0;
}

/*
 * Program REVID for PCIe CPT device.
 */
unsigned int plat_configure_cpt_rid(void)
{
	/* program CPT revision id */
	return 4;
}

/*
 * Program REVID for PCIe devices.
 * Bits 0..1: minor pass
 * Bits 3..2: major pass
 * Bits 7..4: midr id:
 *      cn10ka  : 0x5
 *      cnf10ka : 0x6
 *      cnf10kb : 0x7
 *      cn10kb  : 0x8
 */
unsigned int plat_configure_rid(void)
{
	unsigned int val = 0;
	int maj, min;
	uint64_t fus;

	fus = CSR_READ(CAVM_FUS_CACHEX(0));
	maj = (fus >> __OM_MAJOR_SHIFT) & 0x3;
	min = (fus >> __OM_MINOR_SHIFT) & 0x3;
	if (cavm_is_model(OCTEONTX_CN10KA))
		val = 0x50;
	else if (cavm_is_model(OCTEONTX_CNF10KA))
		val = 0x60;
	else if (cavm_is_model(OCTEONTX_CNF10KB))
		val = 0x70;
	else if (cavm_is_model(OCTEONTX_CN10KB))
		val = 0x80;

	val |= (min | (maj << 2));
	return val;
}

extern void *scmi_handle;

void plat_pwrc_setup(void)
{
	int rc;

	if (cavm_is_platform(PLATFORM_EMULATOR))
		return;

#ifdef SCMI_WITH_LEGACY_PM
	/*
	 * Initialize SCMI for custom Cavium configuration protocol.
	 * Initialize legacy pwrc for PSCI
	 */
	rc = octeontx_pwrc_setup();
	if (rc)
		WARN("SCMI initialize failed with %d\n", rc);
	octeontx_legacy_pwrc_setup();
#else
	/*
	 * Try to initialize SCMI, in case of error,
	 * fallback to legacy PM driver
	 */
	rc = octeontx_pwrc_setup();
	if (rc) {
		octeontx_legacy_pwrc_setup();
	}
#endif
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
 * FIXME: FUSF replaced by eHSM module.
 *
 * Return: Value in 0-32 range
 */
unsigned int plat_get_rom_t_cnt()
{
	return 0;
}

/*
 * Return alternative pkg information
 *
 * @return non-zero if an alternative package
 *     0 = Normal package (CN106XXS)
 *     1 = Alternative package 1 (CN106XX)
 */
int plat_get_altpkg(void)
{
	union cavm_gpio_pkg_ver pkg_ver;

	pkg_ver.u = CSR_READ(CAVM_GPIO_PKG_VER);
	return pkg_ver.s.pkg_ver;
}

void plat_octeontx_cpu_setup(void)
{
	uint64_t addr;
	uint64_t val;

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

#if ENABLE_MPAM_FOR_LOWER_ELS
	/* Enable memory bandwidth throttling on ARM cpu.
	 *
	 * Configure IMP_CPUECLTR2_EL1 register so that outstanding
	 * read/write requests from CPU are adjusted based on CBUSY
	 * response received. This is essential for the MPAM based
	 * DDR bandwidth provisioning to work.
	 *
	 * IMP_CPUECTLR2_EL1[2], TXREQ_LIMIT_DYNAMIC Selects static or
	 * dynamic control of TXREQ limit.
	 * Dynamic TXREQ limit will adjust based on CBusy responses.
	 */
	__asm__ volatile ("mrs %0, S3_0_C15_C1_5" : "=&r"(val));
	val |= (1ull << 2);
	__asm__ volatile ("msr S3_0_C15_C1_5, %0" : : "r"(val));
#endif

#if WORKAROUND_IPBUPERS-503
	/* Workaround for IPBUPERS-503
	 * Use of the static and dynamic TXREQ limiting functions may
	 * cause a system deadlock.Use of the static and dynamic TXREQ
	 * limiting functions may cause a system deadlock.
	 *
	 * Do not enable static or dynamic TXREQ limiting functions by
	 * keeping CPUECTLR2_EL1[2] at 1'b0 and CPUECTLR2_EL1[1:0] at
	 * 2'b00.
	 */
	__asm__ volatile ("mrs %0, S3_0_C15_C1_5" : "=&r"(val));
	val &= ~0x7ull;
	__asm__ volatile ("msr S3_0_C15_C1_5, %0" : : "r"(val));
#endif
	/* Workaround for IPBUPERS-166
	 * The CPP instruction will not operate on the desired EL as
	 * encoded in the instruction. Set CPUACTLR5_EL1[44] which will
	 * cause the CPP instruction to invalidate hardware prefetcher
	 * state trained from any EL.
	 */
	__asm__ volatile ("mrs %0, S3_0_C15_C8_0" : "=&r"(val));
	val |= (1ULL << 44);
	__asm__ volatile ("msr S3_0_C15_C8_0, %0" : : "r"(val));

	/* IMP_CPUECTLR_EL1[0], need to be set to indicate presence
	 * of external last-level cache. This is used to control
	 * how LL_CAHE* PMU and event counts.
	 */
	__asm__ volatile ("mrs %0, S3_0_C15_C1_4" : "=&r"(val));
	val |= (1ULL << 0);
	__asm__ volatile ("msr S3_0_C15_C1_4, %0" : : "r"(val));

	/* Workaround for IPBUPERS-323
	 * Continuous failing STREX because of another PE executing
	 * prefetch for store behind consistently mispredicted branch.
	 * Set CPUACTLR2_EL1[0] to 1 to force PLDW/PFRM ST to behave
	 * like PLD/PRFM LD and not cause invalidations to other PE caches.
	 */
	__asm__ volatile ("mrs %0, S3_0_C15_C1_1" : "=&r"(val));
	val |= (1ULL << 0);
	__asm__ volatile ("msr S3_0_C15_C1_1, %0" : : "r"(val));
}

static int ts_valid;

/* Parse dts to check if timestamp is enabled or disabled. */
static void cn10k_parse_timestamp(void)
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

	offset = fdt_path_offset(fdt, "/cavium,bdk");
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

#if defined(PLAT_CN10K_FAMILY)
void plat_cn10x_early_initialization(void)
{
#if defined(IMAGE_BL2)
	void *fdt = fdt_ptr;
#endif

	cn10k_parse_timestamp();

#ifdef MRVL_TF_LOG_MODULE
	initialize_tf_logging();
#endif // MRVL_TF_LOG_MODULE

#if defined(IMAGE_BL2)
	plat_initialize_interrupt_fdt(fdt);
#endif
}
#endif

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

	rpm_cfg = &plat_octeontx_bcfg->rpm_cfg[eth_id];

	if (nix_block)
		*nix_block = rpm_cfg->nix_block;
	if (num_rvu_vfs)
		*num_rvu_vfs = rpm_cfg->lmac_cfg[lmac_id].num_rvu_vfs;
	if (num_msix_vec)
		*num_msix_vec = rpm_cfg->lmac_cfg[lmac_id].num_msix_vec;
}

/*
 * Used to mark an ETH/LMAC combination as enabled or disabled.
 *
 * On entry,
 *   eth_id:  ETH instance ID (0..n, see 'plat_octeontx_get_eth_count')
 *   lmac_id: LMAC instance ID (0..n, see 'plat_octeontx_get_eth_lmac_count')
 *   enabled: true or false
 *
 * Returns,
 *   void
 */
void plat_octeontx_enable_eth_lmac(unsigned int eth_id, unsigned int lmac_id,
				   int enabled)
{
	assert(eth_id < MAX_RPM);
	assert(lmac_id < MAX_LMAC_PER_RPM);
	plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].lmac_enable =
		(enabled != 0);
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
		rpm_cfg = &plat_octeontx_bcfg->rpm_cfg[eth_id];
		enabled = rpm_cfg->enable &&
			  rpm_cfg->lmac_cfg[lmac_id].lmac_enable;
	}

	return enabled;
}

/*
 * Indicates if a particular ETH/LMAC combination is configured as rfoe.
 *
 * On entry,
 *   eth_id:  ETH instance ID (0..n, see 'plat_octeontx_get_eth_count')
 *   lmac_id: LMAC instance ID (0..n, see 'plat_octeontx_get_eth_lmac_count')
 *
 * Returns,
 *   true if ETH/LMAC combo is configured as rfoe, else false
 */
int plat_octeontx_is_eth_lmac_rfoe(unsigned int eth_id,
				   unsigned int lmac_id)
{
	rpm_config_t *rpm_cfg;
	int rfoe_flag;

	assert(eth_id < MAX_RPM);
	assert(lmac_id < MAX_LMAC_PER_RPM);

	rfoe_flag = 0;

	if ((eth_id < MAX_RPM) && (lmac_id < MAX_LMAC_PER_RPM)) {
		rpm_cfg = &plat_octeontx_bcfg->rpm_cfg[eth_id];
		rfoe_flag = rpm_cfg->is_rfoe;
	}

	return rfoe_flag;
}

/*
 * plat_initialize_ghes_hest_area()
 *
 * The Generic Hardware Error Source (GHES) and
 * Hardware Error Source Table (HEST) areas must reside in
 * reserved memory accessible to both firmware and Linux
 * (i.e. non-secure, non-preserved region).
 * In order to prevent fragmentation, these areas are
 * reserved at the top (highest address) of this region.
 *
 * The device tree contains placeholders for these areas
 * (GHES/HEST); here the DT entries are adjusted to use
 * the correct reserved addresses at the top of the region.
 *
 * on entry,
 *   void
 *
 * returns,
 *   void
 */
void plat_initialize_ghes_hest_area(void)
{
	const char *sdei_ghes_mem_name = "/reserved-memory/ghes-hest";
	uint64_t ghes_base, ghes_size, ghes_range_base;
	const char *sdei_ghes_dev_name = "/soc@0/sdei-ghes";
	int ghes_off, ghes_dev_off, fail, idx;
	const void *fdt = fdt_ptr;
	const fdt64_t *freg64;
	const fdt32_t *freg32;
	char ghes_name[31];
	int freg_len;
	struct {
		/* NOTE: these are in FDT format, not CPU format */
		fdt64_t addr; /* DT address-cells = 2 */
		fdt64_t size; /* DT size-cells = 2 */
	} dt_regs;
	struct {
		/* NOTE: these are in FDT format, not CPU format */
		fdt64_t child_addr;  /* child DT address-cells = 2 */
		fdt64_t parent_addr; /* parent DT address-cells = 2 */
		fdt32_t child_size;  /* child DT size-cells = 1 */
	} __packed ghes_ranges[3];

	fail = 1;

	ghes_off = fdt_path_offset(fdt, sdei_ghes_mem_name);
	if (ghes_off == -1) {
		VERBOSE("Missing GHES area from DT\n");
		return;
	}
	ghes_dev_off = fdt_path_offset(fdt, sdei_ghes_dev_name);
	if (ghes_dev_off == -1) {
		VERBOSE("Missing GHES area Device Driver from DT\n");
		return;
	}

	if (!cavm_is_platform(PLATFORM_HW)) {
		fdt_del_node((void *) fdt, ghes_dev_off);
		fdt_del_node((void *) fdt, ghes_off);
		return;
	}

	/* Retrieve GHES area DT settings */
	ghes_base = ghes_size = 0;
	freg64 = fdt_getprop(fdt, ghes_off, "reg", &freg_len);
	if (freg64 && (freg_len >= (sizeof(*freg64) * 2))) {
		ghes_size = fdt64p_to_cpu(&freg64[1]);
	}

	if (!ghes_size || (ghes_size & PAGE_SIZE_MASK)) {
		WARN("Invalid size 0x%lx for %s\n", (long)ghes_size,
		     sdei_ghes_mem_name);
		goto exit;
	}

	ghes_base = octeontx_dram_cut_region_tail(ghes_size, NSECURE_NONPRESERVE);

	/* set GHES DT values */
	dt_regs.addr = cpu_to_fdt64(ghes_base);
	dt_regs.size = cpu_to_fdt64(ghes_size);
	if (fdt_setprop((void *)fdt, ghes_off, "reg", &dt_regs, sizeof(dt_regs))) {
		WARN("Unable to set DT GHES area 0x%lx/0x%lx\n",
		     (long)ghes_base, (long)ghes_size);
		goto exit;
	}

	snprintf(ghes_name, sizeof(ghes_name), "ghes-hest@%016lx",
		 (long)ghes_base);
	INFO("Set DT GHES area (%s) 0x%lx/0x%lx\n", ghes_name,
	     (long)ghes_base, (long)ghes_size);
	if (fdt_set_name((void *)fdt, ghes_off, ghes_name))
		INFO("Unable to set ghes-hest DT node name %s\n", ghes_name);

	/* The 'fdt_set_name' may have changed this offset; retrieve it again */
	ghes_dev_off = fdt_path_offset(fdt, sdei_ghes_dev_name);

	/* adjust device driver DT 'ranges' values with GHES base address */
	freg64 = fdt_getprop(fdt, ghes_dev_off, "ranges", &freg_len);
	/* We expect 3 ranges */
	if (freg_len != sizeof(ghes_ranges)) {
		WARN("Invalid GHES device driver DT ranges size (%d vs %d)\n",
		     freg_len, (int)sizeof(ghes_ranges));
		goto exit;
	}
	if (!freg64) {
		WARN("Bad or missing GHES device driver DT ranges property");
		goto exit;
	}
	ghes_range_base = ghes_base;
	for (idx = 0; idx < ARRAY_SIZE(ghes_ranges); idx++) {
		/* per 'cell' settings, ranges consist of 64b, 64b, 32b */
		freg32 = (const fdt32_t *)&freg64[2];
		/*
		 * To avoid unaligned accesses, don't de-reference [FDT] 'freg'
		 * pointers.  Instead, use the 'fdtxxp_to_cpu' macro to extract
		 * the value.  Since the extracted value is in CPU order, use
		 * the function 'fdtxx_to_cpu' to convert it back to FDT order.
		 */
		ghes_ranges[idx].child_addr =
			fdt64_to_cpu(fdt64p_to_cpu(&freg64[0]));
		ghes_ranges[idx].parent_addr = 0; /* ignore placeholder value */
		ghes_ranges[idx].child_size =
			fdt32_to_cpu(fdt32p_to_cpu(freg32));

		ghes_ranges[idx].parent_addr = fdt64_to_cpu(ghes_range_base);
		ghes_range_base += fdt32p_to_cpu(freg32);

		INFO("%s range %d: 0x%016llx 0x%016llx 0x%08x\n",
		     sdei_ghes_dev_name, idx,
		     fdt64_to_cpu(ghes_ranges[idx].child_addr),
		     fdt64_to_cpu(ghes_ranges[idx].parent_addr),
		     fdt32_to_cpu(ghes_ranges[idx].child_size));

		freg64 = (void *)freg64 + sizeof(ghes_ranges[0]);
	}

	if ((ghes_range_base - ghes_base) > ghes_size) {
		WARN("Ranges for %s exceed %s size\n",
		     sdei_ghes_dev_name, sdei_ghes_mem_name);
		goto exit;
	}

	/* write the modified ranges */
	if (fdt_setprop((void *)fdt, ghes_dev_off, "ranges",
			ghes_ranges, sizeof(ghes_ranges))) {
		WARN("Unable to set GHES device driver DT ranges\n");
		goto exit;
	}

	fail = 0;

#if RAS_EXTENSION
	octeontx_fill_ras_hest_details(fdt, "/soc@0/sdei-ghes", "marvell,sdei-ghes");
#endif

exit:
	if (fail)
		ERROR("GHES/HEST area not available\n");
}

uint64_t get_dev_config(struct ecam_device *dev)
{
	uint64_t pconfig;
	cavm_pccpf_xxx_id_t pccpf_id;

	pconfig = (dev->base_addr |
		  ((dev->domain << ECAM_DOM_SHIFT) & ECAM_DOM_MASK) |
		  ((dev->bus << ECAM_BUS_SHIFT) & ECAM_BUS_MASK) |
		  ((dev->dev << ECAM_DEV_SHIFT) & ECAM_DEV_MASK) |
		  ((dev->func << ECAM_FUNC_SHIFT) & ECAM_FUNC_MASK));

	pccpf_id.u = octeontx_read32(pconfig + CAVM_PCCPF_XXX_ID);
	if (pccpf_id.s.vendid == 0xffff || pccpf_id.s.devid == 0xffff)
		return 0;

	return pconfig;
}

static int set_permissions(struct ecam_device *dev, uint64_t bar)
{
	cavm_mrml_rslx_permit_t mrml_rslx_permit;
	cavm_mrml_ncbx_permit_t mrml_ncbx_permit;
	uint32_t idx;

	if (bar && is_devmem_rsl(bar)) {
		idx = MRML_RSL_INDEX(bar);
		mrml_rslx_permit.u = CSR_READ(CAVM_MRML_RSLX_PERMIT(idx));
		mrml_rslx_permit.s.sec_dis = 0;
		mrml_rslx_permit.s.nsec_dis = 1;
		mrml_rslx_permit.s.xcp0_dis = dev->config.s.is_scp_secure;
		mrml_rslx_permit.s.xcp1_dis = dev->config.s.is_mcp_secure;
		mrml_rslx_permit.s.xcp2_dis = dev->config.s.is_ecp_secure;
		CSR_WRITE(CAVM_MRML_RSLX_PERMIT(idx), mrml_rslx_permit.u);
	} else if (bar && is_devmem_ncb(bar)) {
		idx = MRML_NCB_INDEX(bar);
		mrml_ncbx_permit.u = CSR_READ(CAVM_MRML_NCBX_PERMIT(idx));
		mrml_ncbx_permit.s.sec_dis = 0;
		mrml_ncbx_permit.s.nsec_dis = 1;
		mrml_ncbx_permit.s.xcp0_dis = dev->config.s.is_scp_secure;
		mrml_ncbx_permit.s.xcp1_dis = dev->config.s.is_mcp_secure;
		mrml_ncbx_permit.s.xcp2_dis = dev->config.s.is_ecp_secure;

		CSR_WRITE(CAVM_MRML_NCBX_PERMIT(idx), mrml_ncbx_permit.u);
	}

	return 0;
}

int disable_devmem_ns_access(struct ecam_device *dev)
{
	uint64_t bar0, bar2;
	struct pcie_config *config;

	config = (struct pcie_config *) get_dev_config(dev);
	bar0 = get_bar_val(config, 0);
	bar2 = get_bar_val(config, 2);

	if (bar0) {
		/* Allow RST5 CSRs that are in BAR0 to be accessed
		 * by non-secure platform
		 */
		if (bar0 != CAVM_RST_BAR_E_RST_PF_BAR0)
			set_permissions(dev, bar0);
	}
	if (bar2)
		set_permissions(dev, bar2);

	return 0;
}

#ifdef ENABLE_RECORD_FWLOG
void bl2_el3_plat_prepare_exit(void)
{
	flush_dcache_range(FWLOG_SEC_BASE, FWLOG_SEC_SIZE);
}
#endif

bool plat_ras_feature_supported(void)
{
	if (cavm_is_platform(PLATFORM_HW))
		return true;
	else
		return 0;
}
