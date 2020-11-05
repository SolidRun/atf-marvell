/*
 * Copyright (C) 2020 Marvell International Ltd.
 * This program is provided "as is" without any warranty of any kind,
 * and is distributed under the applicable Marvell proprietary limited use
 * license agreement.
 */

#include <arch.h>
#include <stdio.h>
#include <debug.h>
#include <string.h>
#include <platform_def.h>
#include <octeontx_common.h>
#include <plat_pwrc.h>
#include <octeontx_legacy_pwrc.h>
#include <gpio_octeontx.h>
#include <plat_board_cfg.h>
#include <plat_octeontx.h>
#include <octeontx_utils.h>
#include <octeontx_security.h>
#include <sh_fwdata.h>
#include <rpm.h>
#include <strtol.h>
#include <libfdt.h>

#if defined(PLAT_cnf10ka) || defined(PLAT_cnf10kb)
#include <bphy.h>
#endif

#if RAS_EXTENSION
#include <plat_ras.h>
#endif

#include "cavm-csrs-gpio.h"

#if defined(ARM_TRACE_SECURE_BUFFER)
extern void plat_armtrace_init(void);
#endif

#if defined(PLAT_cnf10ka) || defined(PLAT_cnf10kb)
extern void plat_bphy_irq_setup(void);
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
	sh_fwdata_init();

	/* Initialize RPM framework */
	rpm_fw_intf_init();

	/* setup gpio interrupt handling */
	plat_gpio_irq_setup();

#if defined(PLAT_cnf10ka) || defined(PLAT_cnf10kb)
	plat_bphy_irq_setup();
#endif

	/* Configure PEM0 (EP) streams to use secure world access.
	 * PEM0 streams must be secure to support host remote utils' memory
	 * access while running OcteonTX Linux. Otherwise, any remote access
	 * will be aborted (and an event logged) due to OcteonTX Linux SMMU
	 * initialization.
	 */
	octeontx_configure_pem_ep_security(0 /* PEM0 */, 1 /* secure */);

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
 */
unsigned int plat_configure_rid(void)
{
	if (cavm_is_model(OCTEONTX_CN10KA))
		return 0x50;
	else if (cavm_is_model(OCTEONTX_CNF10KA))
		return 0x60;
	else if (cavm_is_model(OCTEONTX_CNF10KB))
		return 0x70;

	return 0;
}

extern void *scmi_handle;

void plat_pwrc_setup(void)
{
	int rc;

	/*
	 * Try to initialize SCMI, in case of error,
	 * fallback to legacy PM driver
	 */
	rc = octeontx_pwrc_setup();
	if (rc) {
		octeontx_legacy_pwrc_setup();
	}
}

void plat_setup_psci_ops(uintptr_t sec_entrypoint,
			 const plat_psci_ops_t **psci_ops)
{
	if (scmi_handle == NULL) {
		octeontx_legacy_setup_psci_ops(sec_entrypoint, psci_ops);
	} else {
		octeontx_setup_psci_ops(sec_entrypoint, psci_ops);
	}
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

/* From bdk/libbdk-hal/bdk-clock.h */
#define GTI_RATE 100000000ull

/* Print timestamp from AP CNTPCT_EL0 timer */
static void _plat_print_timestamp(void)
{
	const unsigned long USECS_IN_SEC = 1000000;
	const unsigned long USECS_IN_MIN = 60 * USECS_IN_SEC;
	const unsigned long USECS_IN_HOUR = 60 * USECS_IN_MIN;
	const unsigned long USECS_IN_DAY = 24 * USECS_IN_HOUR;

	unsigned long clock_time = read_cntpct_el0();
	unsigned long clock_rate = GTI_RATE;
	unsigned long usecs = clock_time / (clock_rate / USECS_IN_SEC);

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
	cn10k_parse_timestamp();

#ifdef MRVL_TF_LOG_MODULE
	initialize_tf_logging();
#endif // MRVL_TF_LOG_MODULE
}
#endif
