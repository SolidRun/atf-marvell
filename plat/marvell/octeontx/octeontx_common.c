/*
 * Copyright (c) 2016 Marvell.
 * This program is provided "as is" without any warranty of any kind,
 * and is distributed under the applicable Marvell proprietary limited use
 * license agreement.
 */

#include <arch.h>
#include <platform_def.h>
#include <lib/xlat_tables/xlat_tables_v2.h>
#include <stdio.h>
#include <stdlib.h>
#include <strtol.h>
#include <libfdt.h>
#include <octeontx_utils.h>
#include <octeontx_common.h>
#include <octeontx_mmap_utils.h>
#include <plat_board_cfg.h>
#include <lib/smccc.h>
#include <services/arm_arch_svc.h>
#include <assert.h>

#if defined(PLAT_CN10K_FAMILY)
# include "cavm-csrs-fuse.h"
# include "cavm-csrs-fus.h"
#endif
#include "cavm-csrs-rst.h"

#pragma weak plat_flr_init
#pragma weak plat_initialize_boot_error_data_area
#pragma weak plat_initialize_ghes_hest_area
#pragma weak plat_ras_feature_supported
#pragma weak plat_remove_ras_fdt_nodes
extern void plat_add_mmio();

#if !defined(PLAT_CN10K_FAMILY)
static void plat_adjust_fdt(void);
#endif

#ifdef ENABLE_RECORD_FWLOG
#if defined(PLAT_CN10K_FAMILY) || defined(PLAT_OTX2_FAMILY)
static void plat_add_fwlog(void);
#endif
#endif

/* only invoked in BL2, but compiled for BL2/BL31; mark w/'unused' attribute */
static void plat_initialize_os_persistent_area(void) __attribute__ ((unused));

void *fdt_ptr = (void *)~0;

unsigned long plat_get_ns_image_entrypoint(void)
{
	return NS_IMAGE_BASE;
}

uint64_t plat_get_syscnt_freq2(void)
{
	return OCTEONTX_SYSCNT_FREQ * 1000 * 1000;
}

void add_map_record(unsigned long addr, unsigned long size, unsigned int attr)
{
	/* Round up to sensible boundry */
	mmap_add_region(ROUND_DOWN(addr, 2*1024*1024),
			ROUND_DOWN(addr, 2*1024*1024),
			ROUND_UP(size, 2*1024*1024),
			attr);
}

static void plat_add_mmio_common(void)
{
	unsigned long attr;

	/* Shared Memory */
	/* Do not use add_map_record here, it will round size up */
	attr = MT_MEMORY | MT_RW | MT_SECURE;

	if (fdt_ptr != (void *)~0)
		mmap_add_region((unsigned long)fdt_ptr, (unsigned long)fdt_ptr,
			TZDRAM_SIZE - (unsigned long)fdt_ptr,
			attr);

	/* Map BFDT structure */
	attr = MT_MEMORY | MT_RW | MT_SECURE;
	mmap_add_region(BOARD_CFG_BASE, BOARD_CFG_BASE, BOARD_CFG_MAX_SIZE, attr);

#ifdef IMAGE_BL2
	/*
	 * NOTE: this should be invoked only ONCE, from BL2.
	 * Clear the board config memory to ensure that values from a previous
	 * boot are not used (this memory is not auto-cleared after soft reset).
	 */
	memset((void *)BOARD_CFG_BASE, 0, BOARD_CFG_MAX_SIZE);
#endif

	attr = MT_MEMORY | MT_RW | MT_NS;
#if defined(IMAGE_BL31) && defined(PLAT_XLAT_TABLES_DYNAMIC)
	octeontx_mmap_add_dynamic_region_with_sync(NS_IMAGE_BASE,
						   NS_IMAGE_BASE,
						   NS_IMAGE_MAX_SIZE, attr);
#else
	mmap_add_region(NS_IMAGE_BASE, NS_IMAGE_BASE, NS_IMAGE_MAX_SIZE, attr);
#endif

	plat_initialize_boot_error_data_area(attr);
}

void plat_add_mmio_map()
{
	plat_add_mmio_common();

	plat_add_mmio();

#if !defined(PLAT_CN10K_FAMILY)
	/*
	 * If appropriate, adjust any Device Tree settings here,
	 * before enabling mmu.  Once mmu has been enabled, the Device Tree is
	 * read-only (see mapping of fdt_ptr in plat_add_mmio_common()).
	 */
	plat_adjust_fdt();
#endif

#ifdef ENABLE_RECORD_FWLOG
#if defined(PLAT_CN10K_FAMILY) || defined(PLAT_OTX2_FAMILY)
	plat_add_fwlog();
#endif
#endif
}

/*
 * plat_add_fwlog()
 *
 * mmap RECORD_FWLOG related regions
 */
#ifdef ENABLE_RECORD_FWLOG
#if defined(PLAT_CN10K_FAMILY) || defined(PLAT_OTX2_FAMILY)
static void plat_add_fwlog(void)
{
#ifdef IMAGE_BL31
	mmap_add_region(FWLOG_SEC_BASE,
					FWLOG_SEC_BASE,
					FWLOG_SEC_SIZE,
					MT_RW | MT_SECURE | MT_MEMORY);
#endif
	/* TODO check this one overlaps with any other regions */
	mmap_add_region(FWLOG_NS_MEM_BASE,
					FWLOG_NS_MEM_BASE,
					FWLOG_NS_MEM_SIZE,
					MT_RW | MT_NS | MT_MEMORY);
}
#endif
#endif

/*
 * plat_adjust_fdt()
 *
 * Perform any platform-specific adjustments to the Flattened Device Tree (FDT).
 */
void plat_adjust_fdt(void)
{
	/* NOTE: this should be invoked only ONCE, from BL2 */
#ifdef IMAGE_BL2
	plat_initialize_os_persistent_area();
	if (plat_ras_feature_supported())
		plat_initialize_ghes_hest_area();
#endif
}

void plat_error_handler(int err_code)
{
#if TRUSTED_BOARD_BOOT
	/* Handle platform-specific secure boot failure cause */
	cavm_rst_boot_t rst_boot;

	rst_boot.u = CSR_READ(CAVM_RST_BOOT);
	rst_boot.s.dis_huk = 1;
	CSR_WRITE(CAVM_RST_BOOT, rst_boot.u);
#endif
	for(;;);
}

void plat_flr_init(void) {
	return;
}

/* This can be overridden by platform. */
void plat_initialize_boot_error_data_area(unsigned long attr)
{
	(void)attr;
}

/* This can be overridden by platform. */
void plat_initialize_ghes_hest_area(void)
{
}

/* This can be overridden by platform */
bool plat_ras_feature_supported(void)
{
	return false;
}

/* This can be overridden by platform. */
void plat_remove_ras_fdt_nodes(void)
{
}

/*
 * plat_initialize_os_persistent_area()
 *
 * Update the device tree settings for the OS persistent store area (ramoops).
 * The device tree contains settings for sub-regions within this area.
 * Adjust the size of the 'pmsg-size' area to use the maximum size available,
 * after accounting for the sizes of the other sub-regions.
 *
 */
void plat_initialize_os_persistent_area(void)
{
#ifdef IMAGE_BL2
	uint32_t rec_sz, pmsg_sz, cons_sz, ftrace_sz, *resize_val, new_size;
	uint64_t oops_base, oops_size, size, remaining;
	const char *resize_prop = NULL;
	const void *fdt = fdt_ptr;
	const fdt64_t *freg64;
	const fdt32_t *freg32;
	fdt32_t dt_reg32;
	int oops_off;

	oops_off = fdt_path_offset(fdt, "/reserved-memory/ramoops");
	if (oops_off < 0)
		return;

	/* Retrieve RAMOOPS DT settings */
	oops_base = oops_size = 0;
	freg64 = fdt_getprop(fdt, oops_off, "reg", NULL);
	if (freg64) {
		oops_base = fdt64p_to_cpu(&freg64[0]);
		oops_size = fdt64p_to_cpu(&freg64[1]);
	}

	if (!oops_base || !oops_size)
		return;

	rec_sz = pmsg_sz = cons_sz = ftrace_sz = 0;
	freg32 = fdt_getprop(fdt, oops_off, "pmsg-size", NULL);
	if (freg32)
		pmsg_sz = fdt32_to_cpu(*freg32);

	/* if not allocated, there is nothing to resize */
	if (!pmsg_sz)
		return;

	freg32 = fdt_getprop(fdt, oops_off, "record-size", NULL);
	if (freg32)
		rec_sz = fdt32_to_cpu(*freg32);
	freg32 = fdt_getprop(fdt, oops_off, "console-size", NULL);
	if (freg32)
		cons_sz = fdt32_to_cpu(*freg32);
	freg32 = fdt_getprop(fdt, oops_off, "ftrace-size", NULL);
	if (freg32)
		ftrace_sz = fdt32_to_cpu(*freg32);

	/* ensure that sum of all regions does not exceed allocated size */
	size = rec_sz + pmsg_sz + cons_sz + ftrace_sz;
	if (size > oops_size) {
		WARN("ramoops regions exceed allocated size\n");
		return;
	}

	/* name of property to be resized to maximum */
	resize_prop = "pmsg-size";
	resize_val = &pmsg_sz;

	/* based on total size, calculate unused (i.e. remaining) size */
	remaining = oops_size - size;

	/* determine new size of desired property */
	size = (uint64_t)*resize_val + remaining;
	/* properties are limited to 32-bits; use def value if limit exceeded */
	if (size > (uint64_t)(uint32_t)-1)
		size = 0x1000;

	/* write resized property value back to device tree */
	new_size = (uint32_t)size;
	dt_reg32 = cpu_to_fdt32(new_size);
	if (fdt_setprop((void *)fdt, oops_off, resize_prop, &dt_reg32,
	    sizeof(dt_reg32)))
		WARN("Cannot resize FDT property '%s' from 0x%x to 0x%x\n",
		     resize_prop, *resize_val, new_size);
#endif
}

cavm_platform_t __cavm_platform;
uint64_t cavm_fuse_read_range(cavm_node_t node, int fuse, int width)
{
	int first;
	int last;
	uint64_t dat;

#if !(defined(PLAT_CN10K_FAMILY) || defined(PLAT_OTX2_FAMILY))
	if (cavm_is_model(OCTEONTX_CN8XXX)) {
		WARN("%s: Not implemented for CN8XXX\n", __func__);
		return 0xff;
	}
#endif

	first = fuse >> 6;
	last = (fuse + width - 1) >> 6;
	dat = CSR_READ(CAVM_FUS_CACHEX(first));
	dat >>= (fuse & 63);

	if (first != last) {
		uint64_t dat2 = CSR_READ(CAVM_FUS_CACHEX(last));

		dat2 <<= (64 - (fuse & 63));
		dat |= dat2;
	}

	return dat & octeontx_build_mask(width);
}

/* Return platform type by reading fuses */
void cavm_setup_platform(void)
{
#if !(defined(PLAT_CN10K_FAMILY))
	if (cavm_is_model(OCTEONTX_CN8XXX)) {
		cavm_mio_fus_dat2_t fus_dat;

		fus_dat.u = CSR_READ(CAVM_MIO_FUS_DAT2);
		__cavm_platform = fus_dat.s.run_platform;
	} else if (cavm_is_model(OCTEONTX_CN9XXX))
		__cavm_platform = cavm_fuse_read_range(0, CAVM_FUS_FUSE_NUM_E_RUN_PLATFORMX(0), 3);
#else
	__cavm_platform = cavm_fuse_read_range(0, CAVM_FUSE_NUM_E_RUN_PLATFORMX(0), 3);
#endif
}

/*****************************************************************************
 * plat_is_smccc_feature_available() - This function checks whether SMCCC
 *                                     feature is availabile for platform.
 * @fid: SMCCC function id
 *
 * Return SMC_ARCH_CALL_SUCCESS if SMCCC feature is available and
 * SMC_ARCH_CALL_NOT_SUPPORTED otherwise.
 *****************************************************************************/
int32_t plat_is_smccc_feature_available(u_register_t fid)
{
	switch (fid) {
	case SMCCC_ARCH_SOC_ID:
		return SMC_ARCH_CALL_SUCCESS;
	default:
		return SMC_ARCH_CALL_NOT_SUPPORTED;
	}
}

/* Defines used to retrieve Marvell SOC revision
 * This is based on JEDEC standard */
#define MRVL_SOC_CONT_CODE	U(0x3)
#define MRVL_SOC_IDEN_CODE	U(0x69)
#define MRVL_SOC_CONT_SHIFT	U(24)
#define MRVL_SOC_IDEN_SHIFT	U(16)


/* OcteonTx Fuse related */
#define CHIP_ID_MASK	U(0xFF)
#define CHIP_ID_SHIFT	U(0)
#define CHIP_REV_MASK	U(0xFF00)
#define CHIP_REV_SHIFT	U(8)

/* Get SOC version */
int32_t plat_get_soc_version(void)
{
	uint32_t version;
	uint64_t chip_id;
#if !(defined(PLAT_CN10K_FAMILY) || defined(PLAT_OTX2_FAMILY))
	uint64_t midr = read_midr();

	chip_id = MIDR_PARTNUM(midr);
#else
	chip_id = CSR_READ(CAVM_FUS_CACHEX(0x0));
#endif

	version = ((MRVL_SOC_IDEN_CODE << MRVL_SOC_IDEN_SHIFT) |
		   (MRVL_SOC_CONT_CODE << MRVL_SOC_CONT_SHIFT) |
		   ((chip_id & CHIP_ID_MASK) >> CHIP_ID_SHIFT));

	return version;
}

/* Get SOC revision */
int32_t plat_get_soc_revision(void)
{
	uint32_t rev;
#if !(defined(PLAT_CN10K_FAMILY) || defined(PLAT_OTX2_FAMILY))
	uint64_t midr = read_midr();

	/* program minor pass */
	rev = MIDR_REVISION(midr) & 0x3;
	/* program major pass */
	rev |= (MIDR_VARIANT(midr) & 0x3) << 2;
#else
	rev = (uint32_t)CSR_READ(CAVM_FUS_CACHEX(0x0));
	rev = (rev & CHIP_REV_MASK) >> CHIP_REV_SHIFT;
#endif

	return rev;
}

#ifdef MRVL_TF_LOG_MODULE
unsigned long mrvl_tf_log_modules;

/*
 * initialize_tf_logging()
 *
 * This initializes the global state for ATF Runtime Logging from
 * device tree entries (configued by EBF).
 */
void initialize_tf_logging(void)
{
	const void *fdt = fdt_ptr;
	const char *propstr;
	int fdt_off, len;
	int32_t val32, internal_mods;

	fdt_off = fdt_path_offset(fdt, "/cavium,bdk");
	if (fdt_off < 0) {
		printf("WARNING: FDT node not found\n");
		return;
	}

	internal_mods = MRVL_TF_LOG_MODULE_BLX |
			MRVL_TF_LOG_MODULE_COMMON |
			MRVL_TF_LOG_MODULE_DRIVERS |
			MRVL_TF_LOG_MODULE_LIB |
			MRVL_TF_LOG_MODULE_PLAT |
			MRVL_TF_LOG_MODULE_SERVICES |
			MRVL_TF_LOG_MODULE_LIBTIM;

	propstr = fdt_getprop(fdt, fdt_off,
			      "EBF-CONFIG-ATF-TRACE-MODULES", &len);
	if (propstr) {
		val32 = strtol(propstr, NULL, 16);
		val32 |= internal_mods;
#ifdef MRVL_TF_LOG_SETTING_OVERRIDE
		val32 = MRVL_TF_LOG_MODULES_DEFAULT;
#endif
		if (val32) {
			mrvl_tf_log_modules = val32;
#if DEBUG
			printf("ATF trace modules: 0x%lx\n",
			       mrvl_tf_log_modules);
#endif
		}
	} else {
		/* If not explicitly set, use a default */
		val32 = MRVL_TF_LOG_MODULES_DEFAULT;
		val32 |= internal_mods;
		mrvl_tf_log_modules = val32;
		tf_log_set_max_level(MRVL_TF_LOG_LEVEL_DEFAULT);
	}

	propstr = fdt_getprop(fdt, fdt_off, "EBF-CONFIG-ATF-TRACE-LEVEL",
			      &len);
	if (propstr) {
		val32 = strtol(propstr, NULL, 16);
		if (val32 == LOG_LEVEL_NONE)
			val32 = LOG_LEVEL_NOTICE;
#ifdef MRVL_TF_LOG_SETTING_OVERRIDE
		val32 = MRVL_TF_LOG_LEVEL_DEFAULT;
#endif

		/* firmware built w/DEBUG=1 uses LOG_LEVEL_INFO */
#if DEBUG
		val32 = LOG_LEVEL_INFO;
#endif

		if (val32 % 10)
			printf("Error: invalid ATF-TRACE-LEVEL %u\n",
			       val32);
		else {
#if DEBUG
			printf("Setting max logging level to %u\n", val32);
#endif
			tf_log_set_max_level(val32);
		}
	} else {
		/* If not explicitly set, use a default */
		tf_log_set_max_level(MRVL_TF_LOG_LEVEL_DEFAULT);
	}
}
#endif // MRVL_TF_LOG_MODULE

int octeontx_fdt_get_strmid_ptrs(int pem, void **prop, void **prop_end)
{
	int offset;
	char pem_string[32];
	int ret = -1, prop_len;
	const void *fdt = fdt_ptr;

	*prop_end = NULL;
	*prop = NULL;

	sprintf(pem_string, "PCIE-HOST-STREAM-IDS-PEM%d", pem);
	offset = fdt_path_offset(fdt, "/cavium,bdk");
	if (offset > 0) {
		*prop = (void *)fdt_getprop(fdt, offset, pem_string, &prop_len);

		if (*prop == NULL)
			return ret;

		*prop_end = *prop + prop_len;
	}

	return 0;
}

uint32_t octeontx_fdt_get_next_strmid(void **prop, void **prop_end)
{
	char *ptr;
	uint32_t stream_id = 0;
	int next_id_off;

	ptr = *prop;
	if (ptr < (char *)*prop_end) {
		next_id_off = strlen(ptr);
		stream_id = (uint32_t) strtol(ptr, NULL, 16);
		ptr = ptr + next_id_off + 1;
		*prop = ptr;
	}

	return stream_id;
}

/*
 * Function to read PCIE-ALLOW-HOST-TO-ACCESS-OCTEON-MEM
 * from fdt.
 */
int octeontx_fdt_get_pem_secure(void)
{
	int offset;
	const char *str;
	const void *fdt = fdt_ptr;
	int prop_len;

	offset = fdt_path_offset(fdt, "/cavium,bdk");
	if (offset > 0) {

		str = fdt_getprop(fdt, offset, "PCIE-ALLOW-HOST-TO-ACCESS-OCTEON-MEM", &prop_len);
		if (str)
			return strtol(str, NULL, 10);
	}

	/*
	 * If dts parameter is not present, default value is 0.
	 */
	return 0;
}
