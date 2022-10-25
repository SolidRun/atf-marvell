/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

/* Firmware update service for CN10K/CNF10K */

#include <arch.h>
#include <stdio.h>
#include <assert.h>
#include <stdint.h>
#include <debug.h>
#include <string.h>
#include <utils.h>
#include <errno.h>
#include <platform_def.h>
#include <smccc.h>
#include <runtime_svc.h>
#include <spi.h>
#include <octeontx_common.h>
#include <octeontx_mmap_utils.h>
#include <tim_update.h>
#include <drivers/io/io_storage.h>
#include <drivers/io/io_driver.h>
#include <libtim.h>
#include <libfdt.h>
#include <plat_tim.h>
#include <ehsm-hal.h>
#include <ehsm-security.h>
#include <ehsm-hash.h>
#include <ehsm.h>
#include <ehsm-drv.h>
#include <platform_dt.h>
#include <plat_board_cfg.h>
#include <plat/common/platform.h>
#include <gti_watchdog.h>
#include <drivers/io/io_driver.h>
#include <drivers/io/io_mmc.h>
#include <drivers/io/io_spi.h>
#include <drivers/io/io_storage.h>
#include <drivers/io/io_block.h>

#undef DEBUG_ATF_FW_UPDATE
#define DEBUG_ATF_FW_UPDATE 1

#define VLOG(ventry, ...)	snprintf((char *)(ventry->log),	\
					 VERIFY_LOG_SIZE,	\
					 __VA_ARGS__)

/**
 * Log update information to update buffer if present
 */
#define ULOG(...)	\
	do {								\
		size_t __size;						\
		size_t __free_size = log_size_bytes - log_bytes_used;	\
		char *__lptr = update_log + log_bytes_used;		\
		if (update_log != NULL && __free_size > 0) {		\
			__size = snprintf(__lptr, __free_size,		\
					  __VA_ARGS__);			\
			log_bytes_used += __size;			\
		}							\
	} while (0)

/**
 * INFO that also updates update log
 */
#define UINFO(...)				\
	do {					\
		INFO(__VA_ARGS__);		\
		ULOG(__VA_ARGS__);		\
	} while (0)

/**
 * WARN that also updates update log
 */
#define UWARN(...)				\
	do {					\
		WARN(__VA_ARGS__);		\
		ULOG("WARNING: " __VA_ARGS__);	\
	} while (0)

/**
 * ERROR that also updates update log
 */
#define UERROR(...)				\
	do {					\
		ERROR(__VA_ARGS__);		\
		ULOG("ERROR: " __VA_ARGS__);	\
	} while (0)

#if defined(MRVL_TF_LOG_MODULE)
#  undef MRVL_TF_LOG_MODULE
#  define MRVL_TF_LOG_MODULE  MRVL_TF_LOG_MODULE_UPDATE
#  if DEBUG_ATF_FW_UPDATE
#    define debug_fw_update(...) \
	do {	\
		if (mrvl_tf_log_modules & MRVL_TF_LOG_MODULE) {\
			tf_log(LOG_MARKER_NOTICE __VA_ARGS__); \
			ULOG(__VA_ARGS__); \
		} \
	} while (0)
#  else
#    define debug_fw_update(...)	ULOG(__VA_ARGS__)
#  endif
#elif DEBUG_ATF_FW_UPDATE
  #define debug_fw_update(...)	\
	do { printf(__VA_ARGS__); ULOG(__VA_ARGS__); } while (0)
#else
  #define debug_fw_update(...)	ULOG(__VA_ARGS__)
#endif

/** Buffer used for copying data */
#define DATA_BUFFER_SIZE	4096

static const char tim_ext[] = ".timb";
static const int tim_ext_len = (sizeof(tim_ext) - 1);
#define CPIO_MAX_OBJECTS		64	/* Should be more than enough */
static const uint32_t MAX_NAME_LEN = 1024;
static const char *TRAILER = "TRAILER!!!";

/* Offsets hard coded for EBF and manufacturing configuration */
static const uint32_t EBF_CONFIG_OFFSET_CNF10KB = 0x00FD0000;
static const uint32_t EBF_CONFIG_OFFSET = 0x01FD0000;
static const uint32_t EBF_CONFIG_SIZE = 0x20000;

/*
 * NOTE: There are TWO handles for SPI and eMMC.  The first handle is a
 * device handle.  This represents the base block device.  This should only
 * be opened once per device then closed when done.
 * The second handle is the I/O handle.  This is used to perform reads,
 * seeks, writes, etc.  The spec is also applied to this I/O handle when
 * it is opened and it does things like specify an offset to be used for all
 * I/O operations.
 *
 * The underlying block driver also must be registered, which can only happen
 * once and it cannot be unregistered.  A connector is used to connect the
 * registered device to its device handle.
 */
static const io_dev_connector_t *emmc_dev_con;
static const io_dev_connector_t *spi_dev_con;
static uintptr_t media_dev_handle;
static io_block_spec_t media_spec;
static uintptr_t media_handle;
/* The following are used for copying media */
static uintptr_t target_dev_handle;
static io_block_spec_t target_spec;
static uintptr_t target_handle;

static struct tim_handle _tim_handle;
static struct tim_load_info _tim_load_info;
__aligned(8) static uint8_t tim_buffer[TIM_MAX_SIZE];
__aligned(8) static uint8_t tim0_buffer[TIM_MAX_SIZE];
static size_t tim0_size;
static uint64_t tim0_offset;
static struct smc_version_info clone_destination;

/** Pointer to update log buffer */
static char *update_log = NULL;
/** Number of bytes used in buffer */
static size_t log_bytes_used = 0;
/** Size of update log buffer */
static size_t log_size_bytes = 0;

#define MAX_PARAM_SET_COUNT 5

struct param_set {
	int ns_map_size;
	uint64_t base_addr;
};

struct io_handle {
	uintptr_t *dev_handle;		/* Device handle */
	uintptr_t *io_handle;		/* I/O handle */
	io_block_spec_t *spec;		/* spec data used with I/O handle */
	const struct smc_update_descriptor *desc;	/* Update descriptor */
};

struct unmap_params {
	int count;
	struct param_set p[MAX_PARAM_SET_COUNT];
	bool media_initialized;
	struct io_handle io_handle;
} uParams = {0};

/* CPIO parser ported from EBF */

enum fw_groups {
	FW_ROM_SCRIPTS,
	FW_GRP_CPC,
	FW_GRP_AP_BL1,
	FW_GRP_AP,
	FW_GRP_UBOOT,
	AP_GRP_UEFI,
	AP_GRP_GSERP,
	AP_GRP_GSERM,
	AP_GRP_SWITCH_SUPER,
	AP_GRP_SWITCH_AP,
};

/** CPIO header information */
struct cpio_header {
	uint32_t magic;		/** CPIO magic number */
	uint32_t inode;		/** file inode number (32 bit) */
	uint32_t mode;		/** file mode */
	uint32_t uid;		/** uid of file */
	uint32_t gid;		/** gid of file */
	uint32_t nlink;		/** Number of links */
	uint32_t mtime;		/** Modify time */
	uint32_t filesize;	/** Size of file */
	uint32_t maj;		/** major device number */
	uint32_t min;		/** minor device number */
	uint32_t rmaj;		/** special file major number */
	uint32_t rmin;		/** special file minor number */
	uint32_t namesize;	/** Size of filename */
	uint32_t chksum;	/** Checksum of file */
};

struct object_entry;

struct file_entry {
	const char		*filename;
	const void		*file_cpio;
	size_t			file_size;
	uint64_t		file_loc;
	const void		*data;
	struct object_entry	*object;
	struct file_entry	*next;
	struct file_entry	*prev;
	bool file_written:1;		/** True if file written successfully */
};

struct object_group_entry {
	const char *tim_filename;
	const char *data_filename;
	bool optional;			/** Not required for complete update */
};

struct object_group {
	const struct object_group_entry *entry;
	bool optional;			/** Not required for complete update */
};

struct object_entry {
	struct file_entry *data_file;
	struct file_entry *tim_file;

	struct tim_load_info li;
	struct tim_opaque_data_version_info version;
	const struct object_group_entry *group;
	struct object_entry *next;
	struct object_entry *prev;
	/* Various flags */
	unsigned int no_version:1;	/** No version data */
	unsigned int skip_install:1;	/** Don't install this object */
	unsigned int update_all:1;	/** Require ALL files be updated */
	unsigned int is_root_tim_obj:1;	/** Set if root TIM object */
	unsigned int no_data_file:1;	/** Set if no data file */
};

struct verification_data {
	struct smc_version_info *vinfo;
	struct smc_version_info_entry *ventry;
	struct smc_update_descriptor udesc;
	struct io_handle io;
	struct ehsm_handle ehdl;
	struct tim_load_info *linfo;
	int ventry_counter;
	int val;

	uintptr_t media_dev_handle;
	io_block_spec_t media_spec;
	uintptr_t media_handle;

	bool hash_started;
	uint64_t read_offset;
	size_t size;
	int  hashret;
	uint8_t digest[EHSM_MAX_HASH_SIZE_BYTES];
	int hash_size;
};
#define VDATA_SRC 0
#define VDATA_DST 1
#define VDATA_INTANCES 2
static struct verification_data verif_data[VDATA_INTANCES] = {0};
static struct async_clone_data async_clone_internal;
static struct async_update_data aupdate_data;

static enum update_ret media_done(struct io_handle *io_handle);

#if 0
/* The following define the various object groupings.  In order to be valid,
 * all of the files within a group must be present.  Incomplete groups
 * are not allowed.
 */
static const struct object_group_entry rom_script_grp[] = {
	{
		.tim_filename = "rom_scripts0.timb",
		.data_filename = "rom_scripts0.fw",
	},
	{ NULL, NULL},
};
#endif

static const struct object_group_entry cpc_grp[] = {
	{
		.tim_filename = "tim0.timb",
		.data_filename = "scp_bl1.bin",
		.optional = false,
	},
	{
		.tim_filename = "ep_script-cn10xx.timb",
		.data_filename = NULL,
		.optional = false,
	},
	{
		.tim_filename = "scp_bl1.timb",
		.data_filename = "scp_bl1.bin",
		.optional = false,
	},
	{
		.tim_filename = "mcp_bl1.timb",
		.data_filename = "mcp_bl1.bin",
		.optional = false,
	},
	{
		.tim_filename = "ecp_bl1.timb",
		.data_filename = "ecp_bl1.bin",
		.optional = false,
	},
	{ NULL, NULL },
};

static const struct object_group_entry ap_bl1_grp[] = {
	{
		.tim_filename = "init.timb",
		.data_filename = "init.bin",
		.optional = false,
	},
	{ NULL, NULL },
};

static const struct object_group_entry gserm_fw_grp[] = {
	{
		.tim_filename = "gserm-cn10xx.timb",
		.data_filename = "gserm-cn10xx.fw",
		.optional = false,
	},
	{ NULL, NULL },
};

static const struct object_group_entry gserp_fw_grp[] = {
	{
		.tim_filename = "gserp-cn10xx.timb",
		.data_filename = "gserp-cn10xx.fw",
		.optional = false,
	},
	{ NULL, NULL },
};

static const struct object_group_entry ap_atf_grp[] = {
	{
		.tim_filename = "bl2.timb",
		.data_filename = "bl2.bin",
		.optional = false,
	},
	{
		.tim_filename = "bl31.timb",
		.data_filename = "bl31.bin",
		.optional = false,
	},
	{ NULL, NULL },
};

static const struct object_group_entry uboot_grp[] = {
	{
#if defined(BUILD_UEFI)
		.tim_filename = "uefi.timb",
		.data_filename = "uefi.bin",
		.optional = false,
#else
		.tim_filename = "u-boot-nodtb.timb",
		.data_filename = "u-boot-nodtb.bin",
		.optional = false,
#endif
	},
	{ NULL, NULL },
};

#if defined(PLAT_cn10ka)
static const struct object_group_entry efi1_grp[] = {
	{
		.tim_filename = "efi_app1.timb",
		.data_filename = "efi_app1.efi",
		.optional = true,
	},
	{ NULL, NULL },
};
#endif

static const struct object_group_entry mkex_fw_grp[] = {
	{
		.tim_filename = "npc_mkex-cn10xx.timb",
		.data_filename = "npc_mkex-cn10xx.fw",
		.optional = false,
	},
	{ NULL, NULL },
};

#if defined(PLAT_cn10ka)
static const struct object_group_entry switch_fw_grp[] = {
	{
		.tim_filename = "switch_fw_super.timb",
		.data_filename = "switch_fw_super.fw",
		.optional = false,
	},
	{
		.tim_filename = "switch_fw_ap.timb",
		.data_filename = "switch_fw_ap.fw",
		.optional = false,
	},
	{ NULL, NULL },
};
#endif

/**
 * Platform specific group of groups.  This contains an array of all of the
 * groups present for a particular platform.  These are defined at compile
 * time.
 */
#define OBJECT_GROUP_CREATE_ENTRY(fentry, foption) \
	{ \
		.entry = fentry, \
		.optional = foption, \
	}

#if defined(PLAT_cn10ka)
# define file_groups	file_groups_cn10k
static const struct object_group file_groups_cn10k[] = {
	OBJECT_GROUP_CREATE_ENTRY(&cpc_grp[0], false),
	OBJECT_GROUP_CREATE_ENTRY(&cpc_grp[0], false),
	OBJECT_GROUP_CREATE_ENTRY(&ap_bl1_grp[0], false),
	OBJECT_GROUP_CREATE_ENTRY(&gserm_fw_grp[0], false),
	OBJECT_GROUP_CREATE_ENTRY(&gserp_fw_grp[0], false),
	OBJECT_GROUP_CREATE_ENTRY(&ap_atf_grp[0], false),
	OBJECT_GROUP_CREATE_ENTRY(&uboot_grp[0], false),
	OBJECT_GROUP_CREATE_ENTRY(&efi1_grp[0], false),
	OBJECT_GROUP_CREATE_ENTRY(&mkex_fw_grp[0], false),
	OBJECT_GROUP_CREATE_ENTRY(&switch_fw_grp[0], false),
	OBJECT_GROUP_CREATE_ENTRY(NULL, false),
};

#elif defined(PLAT_cnf10ka) || defined(PLAT_cnf10kb) || defined(PLAT_cn10kb)
# define file_groups	file_groups_cnf10k
static const struct object_group file_groups_cnf10k[] = {
#if 0
	OBJECT_GROUP_CREATE_ENTRY(&rom_script_grp[0], false),
#endif
	OBJECT_GROUP_CREATE_ENTRY(&cpc_grp[0], false),
	OBJECT_GROUP_CREATE_ENTRY(&ap_bl1_grp[0], false),
	OBJECT_GROUP_CREATE_ENTRY(&gserp_fw_grp[0], false),
	OBJECT_GROUP_CREATE_ENTRY(&gserm_fw_grp[0], false),
	OBJECT_GROUP_CREATE_ENTRY(&ap_atf_grp[0], false),
	OBJECT_GROUP_CREATE_ENTRY(&uboot_grp[0], false),
	OBJECT_GROUP_CREATE_ENTRY(&mkex_fw_grp[0], false),
	OBJECT_GROUP_CREATE_ENTRY(NULL, false),
};

#else
	#error "Unknown platform"
#endif

static struct file_entry file_entries[CPIO_MAX_OBJECTS];
static struct file_entry *free_file_entry_list;
static struct file_entry *first_file_entry;
static struct file_entry *last_file_entry;

static struct object_entry object_entries[CPIO_MAX_OBJECTS];
static struct object_entry *free_object_entry_list;
static struct object_entry *first_object_entry;
static struct object_entry *last_object_entry;

#define BUF_SIZE	SPI_NOR_ERASE_SIZE
__aligned(32) static uint8_t wr_buffer[BUF_SIZE] = {0};
__aligned(32) static uint8_t rd_buffer[BUF_SIZE] = {0};

static int fnode;	/* Firmware node in device tree */

static enum update_ret
octeontx_read_tim(const struct smc_update_descriptor *desc, uint64_t offset,
		  size_t max_size, uint8_t *buffer, struct tim_handle *handle,
		  size_t *tim_size);

static enum update_ret
octeontx_read_data(const struct smc_update_descriptor *desc, uint64_t offset,
		   size_t size, void *buffer);
static enum update_ret update_tim0(const uint8_t *tim0, uint64_t offset,
				   size_t size);

static int flash_smc_get_versions(struct smc_version_info *vinfo,
				  struct verification_data *vdata);
enum spi_dc_ret async_clone_callback(void *p);

/**
 * Customer defined function to perform image verification
 *
 * @param[in,out]	desc	Descriptor as passed from U-Boot, Linux, etc.
 *
 * @return		0 if image is verified, 1 if not verified, -1 on error
 */
int marvell_cust_verify_fw_update_image(struct smc_update_descriptor *desc)
	__attribute__((weak));

int marvell_cust_verify_fw_update_image(struct smc_update_descriptor *desc)
{
	return 0;
}

/**
 * Extract location and maximum size for object in the firmware-layout
 *
 * @param[in]	name		Name of object to search for
 * @param[out]	offset		offset of file in flash
 * @param[out]	max_size	Maximum size of object in flash
 * @param[out]	is_root_tim	Set to TRUE if is root TIM
 * @param[out]	root_obj_name	Object name associated with root TIM
 *
 * @return	-ENODEV if not found, -EINVAL if FDT problem, 0 for success
 */
static int get_object_info_from_fdt(const char *name,
				    uint64_t *offset,
				    size_t *max_size,
				    bool *is_root_tim,
				    const char **root_obj_name)
{
	int node;
	const uint32_t *addr_size;
	int len;
	const char *type;
	uint64_t loffset;
	size_t lmax_size;

	node = fdt_node_offset_by_prop_value(fdt_ptr, fnode, "description",
					     name, strlen(name) + 1);
	if (node < 0) {
		WARN("Could not find %s in firmware-layout\n", name);
		return -ENODEV;
	}

	if (is_root_tim != NULL) {
		type = (const char *)fdt_getprop(fdt_ptr, node, "type", &len);
		if (!type || len < 0) {
			ERROR("Missing type found in firmware layout device tree for %s, fdt error: %d\n",
			      name, len);
			return -EINVAL;
		}

		*is_root_tim = strncmp(type, "root-tim", len) == 0;
		if (root_obj_name != NULL) {
			*root_obj_name = fdt_getprop(fdt_ptr, node,
						     "root-tim-object",
						     &len);
			*is_root_tim = true;
		}
	}

	addr_size = fdt_getprop(fdt_ptr, node, "reg", &len);
	if (!addr_size || len != 8) {
		ERROR("Missing or invalid reg field in firmware-layout for %s\n",
		      name);
		return -EINVAL;
	}
	loffset = fdt32_to_cpu(addr_size[0]);
	lmax_size = fdt32_to_cpu(addr_size[1]);
	if (offset)
		*offset = loffset;
	if (max_size)
		*max_size = lmax_size;
	debug_fw_update("Found %s in firmware layout at address 0x%llx, max size: 0x%lx\n",
			name, loffset, lmax_size);
	return 0;
}

/**
 * Return if the object should be updated based on the version info
 *
 * @param[in,out]	desc	SMC update descriptor
 * @param[in]		object	update object being checked
 * @param		vinfo	version information read by flash or NULL if
 *				unavailable
 *
 * @return	0 if object should be updated, 1 if it should not be updated,
 *		negative on error
 *
 * NOTE: Customers may override this function.  Currently it only performs a
 *	 binary comparison.
 */
int marvell_cust_check_version(const struct smc_update_descriptor *desc,
			       const struct object_entry *object,
			       struct tim_opaque_data_version_info *vinfo)
	__attribute__((weak, alias("__marvell_cust_check_version")));

int __marvell_cust_check_version(const struct smc_update_descriptor *desc,
				 const struct object_entry *object,
				 struct tim_opaque_data_version_info *vinfo)
{
	if (desc->update_flags & UPDATE_FLAG_IGNORE_VERSION) {
		INFO("Ignoring version information for %s\n",
		     object->tim_file->filename);
		return 0;
	}
	if (!vinfo || object->no_version)
		return 0;
	if (!memcmp(vinfo, &object->version, sizeof(*vinfo))) {
		INFO("TIM %s version matches flash, skipping\n",
		     object->tim_file->filename);
		return 1;
	}
	INFO("Versions differ for %s\n", object->tim_file->filename);
	return 0;
}

/**
 * Decodes hex digits
 * @param	num_digits	Number of digits to parse
 * @param[in]	data		pointer to hex string to parse
 * @param[out]	value		value of parsed hex string
 *
 * @return	Number of digits parsed or -1 on error.
 */
static int decode_hex(int num_digits, const char *data, uint64_t *value)
{
	int i;

	*value = 0;
	for (i = 0; i < num_digits; i++) {
		*value <<= 4;
		if (*data >= '0' && *data <= '9') {
			*value |= *data - '0';
		} else if ((*data | 0x20) >= 'a' && (*data | 0x20) <= 'f') {
			*value |= (*data | 0x20) - 'a' + 10;
		} else {
			ERROR("CPIO: Unexpected character '%c' in data digit %d\n",
			      *data, i);
			return -1;
		}
		data++;
	}
	return num_digits;
}

/**
 * Advances to the next header and checks bounds
 *
 * @param	h	pointer to header
 * @param	e	pointer to end
 * @param	ret	value to check and add to header
 */
#define NEXT_HDR(h, e, ret)						\
	do {								\
		if ((ret) < 0) {					\
			ERROR("%s:%d: ret: %d\n", __func__, __LINE__, ret);\
			goto error;					\
		}							\
		(h) += (ret);						\
		if ((h) >= (char *)(e)) {				\
			ERROR("%s: header %p extends past end %p\n",	\
			      __func__, h, e);				\
			goto error;					\
		}							\
	} while (0)

/**
 * Extracts all of the fields from a CPIO header
 *
 * @param[in]	header		pointer to start of the header
 * @param[in]	end		end of file
 * @param[in,out]	chdr	cpio header information
 * @param[out]	data		pointer to data past the header
 * @param[out]	filename	filename associated with header
 * @param[out]	uret		status of operation
 *
 * @return	Pointer to next header or NULL if end or error
 *
 * NOTE: This is only compatible with the newc and crc CPIO formats.
 * Binary formats are not supported.
 */
static const void *decode_cpio_header(const void *header, const void *end,
				      struct cpio_header *chdr,
				      const void **data, const char **filename,
				      enum update_ret *uret)
{
	uint64_t v;
	int ret;
	const char *h = (char *)header;

	*uret = UPDATE_OK;
	ret = decode_hex(6, h, &v);
	NEXT_HDR(h, end, ret);

	chdr->magic = v;
	if (chdr->magic != 0x070701 && chdr->magic != 0x070702) {
		ERROR("CPIO: Bad magic header!\n");
		goto error;
	}

	ret = decode_hex(8, h, &v);
	NEXT_HDR(h, end, ret);
	chdr->inode = v;

	ret = decode_hex(8, h, &v);
	NEXT_HDR(h, end, ret);
	chdr->mode = v;

	ret = decode_hex(8, h, &v);
	NEXT_HDR(h, end, ret);
	chdr->uid = v;

	ret = decode_hex(8, h, &v);
	NEXT_HDR(h, end, ret);
	chdr->gid = v;

	ret = decode_hex(8, h, &v);
	NEXT_HDR(h, end, ret);
	chdr->nlink = v;

	ret = decode_hex(8, h, &v);
	NEXT_HDR(h, end, ret);
	chdr->mtime = v;

	ret = decode_hex(8, h, &v);
	NEXT_HDR(h, end, ret);
	chdr->filesize = v;

	ret = decode_hex(8, h, &v);
	NEXT_HDR(h, end, ret);
	chdr->maj = v;

	ret = decode_hex(8, h, &v);
	NEXT_HDR(h, end, ret);
	chdr->min = v;

	ret = decode_hex(8, h, &v);
	NEXT_HDR(h, end, ret);
	chdr->rmaj = v;

	ret = decode_hex(8, h, &v);
	NEXT_HDR(h, end, ret);
	chdr->rmin = v;

	ret = decode_hex(8, h, &v);
	NEXT_HDR(h, end, ret);
	chdr->namesize = v;
	if (chdr->namesize > MAX_NAME_LEN) {
		ERROR("CPIO: Name size 0x%x is too large! Must be <= 0x%x\n",
		      chdr->namesize, MAX_NAME_LEN);
		goto error;
	}

	ret = decode_hex(8, h, &v);
	NEXT_HDR(h, end, ret);
	chdr->chksum = v;

	if (filename)
		*filename = h;

	/* Check if we're at the end */
	if (!strcmp(h, TRAILER))
		return NULL;

	h += chdr->namesize;
	/* Round up to word boundary */
	h = (char *)(((uint64_t)h + 3) & ~3ULL);
	if ((const void *)h >= end)
		goto error;

	if (data)
		*data = h;

	h += ((chdr->filesize + 3) & ~3);
	if ((const void *)h > end)
		goto error;

	return h;

error:
	ERROR("CPIO: start: %p, end: %p, h: %p\n", header, end, h);
	*uret = UPDATE_CPIO_ERROR;
	return NULL;
}

/**
 * Allocate a file entry from the freelist and initialize it
 *
 * @param	filename	name of new file
 * @param	cpio		Pointer to CPIO header file is located in
 * @param	size		size of file
 * @param	data		pointer to start of file data
 *
 * @return	Pointer to new file entry or NULL if free list is empty
 */
static struct file_entry *alloc_file(const char *filename, const void *cpio,
				     size_t size, const void *data)
{
	struct file_entry *e;

	e = free_file_entry_list;
	if (free_file_entry_list) {
		free_file_entry_list = free_file_entry_list->next;
		free_file_entry_list->prev = NULL;
	} else {
		return NULL;
	}

	zeromem(e, sizeof(*e));
	if (!first_file_entry)
		first_file_entry = e;
	if (last_file_entry) {
		last_file_entry->next = e;
		e->prev = last_file_entry;
	}
	last_file_entry = e;

	e->filename = filename;
	e->file_cpio = cpio;
	e->file_size = size;
	e->data = data;

	return e;
}

/**
 * Allocates an object from the free object list
 *
 * @return	pointer to object or NULL if free list is empty
 */
static struct object_entry *alloc_object(void)
{
	struct object_entry *e;

	e = free_object_entry_list;
	if (free_object_entry_list) {
		free_object_entry_list = free_object_entry_list->next;
		free_object_entry_list->prev = NULL;
	} else {
		return NULL;
	}

	zeromem(e, sizeof(*e));
	if (!first_object_entry)
		first_object_entry = e;
	if (last_object_entry) {
		last_object_entry->next = e;
		e->prev = last_object_entry;
	}
	last_object_entry = e;

	return e;
}

#define for_each_file(f)	\
	for ((f) = first_file_entry; (f); (f) = (f)->next)

#define for_each_object(g)	\
	for ((g) = first_object_entry; (g); (g) = (g)->next)

/**
 * Given a filename, find a matching file entry
 *
 * @return	matching file entry or NULL if not found
 */
static struct file_entry *find_file(const char *name)
{
	struct file_entry *fentry;

	for_each_file(fentry) {
		if (!strcmp(name, fentry->filename))
			return fentry;
	}
	debug_fw_update("File %s not found in update file\n", name);
	return NULL;
}

/**
 * Initializes all of the lists
 */
static void init_lists(void)
{
	int i;

	zeromem(file_entries, sizeof(file_entries));
	for (i = 0; i < CPIO_MAX_OBJECTS - 1; i++) {
		file_entries[i].next = &file_entries[i + 1];
		if (i > 0)
			file_entries[i].prev = &file_entries[i - 1];
	}
	free_file_entry_list = &file_entries[0];
	first_file_entry = NULL;
	last_file_entry = NULL;

	zeromem(object_entries, sizeof(object_entries));
	for (i = 0; i < CPIO_MAX_OBJECTS - 1; i++) {
		object_entries[i].next = &object_entries[i + 1];
		if (i > 0)
			object_entries[i].prev = &object_entries[i - 1];
	}
	free_object_entry_list = &object_entries[0];
	first_object_entry = NULL;
	last_object_entry = NULL;
}

/**
 * Initialize the update process by parsing the CPIO file and allocating
 * file and object entries.
 *
 */
static enum update_ret firm_update_init(const void *data, size_t size)
{
	struct cpio_header chdr;
	struct file_entry *fentry;
	const void *cur_hdr = data;
	const void *next_hdr = NULL;
	const void *end = data + size;
	const char *filename;
	enum update_ret ret = UPDATE_OK;

	init_lists();

	ULOG("Decoding CPIO update file\n");

	/* Iterate through all of the files */
	do {
		next_hdr = decode_cpio_header(cur_hdr, end, &chdr, &data,
					      &filename, &ret);
		if (ret != UPDATE_OK) {
			WARN("Error decoding CPIO file\n");
			return ret;
		}
		if (!data || !next_hdr)
			break;
		if ((unsigned long)data % sizeof(uint32_t)) {
			WARN("Invalid alignment of CPIO data in %s\n",
			     filename);
			return UPDATE_BAD_ALIGNMENT;
		}
		debug_fw_update("%s: Found %s in update file\n", __func__,
				filename);
		ULOG("Found %s in update file\n", filename);
		fentry = alloc_file(filename, cur_hdr, chdr.filesize, data);
		if (!fentry) {
			WARN("Too many files in firmware image\n");
			return UPDATE_NO_MEM;
		}
		cur_hdr = next_hdr;
	} while (cur_hdr);
	debug_fw_update("%s: Done\n", __func__);

	return ret;
}

/**
 * Processes all of the TIMs in an update file
 */
static enum update_ret update_process_tims(void)
{
	struct tim_handle *thandle = &_tim_handle;
	struct object_entry *oentry;
	struct file_entry *fentry;
	struct file_entry *dfile = NULL;
	const union tim_headers *hdr;
	struct tim_load_info *li;
	struct tim_header_info hinfo;
	enum tim_return tret;
	int err;
	const char *root_obj_name = NULL;
	bool is_root_tim = false;
	bool no_load_info = false;

	ULOG("Processing TIMs\n");
	debug_fw_update("%s: Processing TIMs\n", __func__);
	for_each_file(fentry) {
		int offset;

		debug_fw_update("fentry: %p, filename: %p\n", fentry,
				fentry->filename);

		offset = strlen(fentry->filename) - tim_ext_len;

		debug_fw_update("%s: file: %s, update filename ext offset: 0x%x\n",
				__func__, fentry->filename, offset);
		if (!strcmp(fentry->filename + offset, tim_ext)) {
			ULOG("Allocating object for %s\n", fentry->filename);
			oentry = alloc_object();
			if (!oentry) {
				WARN("Out of objects!!!\n");
				return UPDATE_NO_MEM;
			}
			oentry->tim_file = fentry;
			fentry->object = oentry;
			zeromem(thandle, sizeof(*thandle));
			hdr = (union tim_headers *)fentry->data;
			debug_fw_update("Parsing TIM header at %p\n", hdr);
			/*
			 * We don't know the source address from which the
			 * TIM is loaded so we use the DATO location field
			 */
			ULOG("Parsing TIM@%p\n", hdr);
			tret = tim_load(hdr, TIM_SRC_ADDRESS_UNKNOWN, thandle);
			if (tret != TIM_NO_ERROR) {
				UWARN("Error %d processing TIM %s\n",
				      tret, fentry->filename);
				return UPDATE_TIM_ERROR;
			}

			tret = tim_get_timh_info(hdr, &hinfo);
			if (tret != TIM_NO_ERROR) {
				UERROR("Error parsing TIM %s\n",
				       fentry->filename);
				return UPDATE_TIM_ERROR;
			}
			debug_fw_update("Verifying signature\n");
			ULOG("Verifying digital signature\n");
			err = ehsm_verify_tim_digital_signature(thandle,
								&hinfo,
								(uint8_t *)hdr);
			if (err) {
				UERROR("Digital signature failed for %s\n",
				       fentry->filename);
				return UPDATE_AUTH_ERROR;
			}

			ULOG("TIM digital signature check passed\n");
			debug_fw_update("Getting TIM load info\n");
			err = tim_get_load_info(thandle, &oentry->li);
			no_load_info = (err == TIM_NO_LOAD_INFO);
			debug_fw_update("tim_get_load_info returned %d\n", err);
			if (err && err != TIM_NO_LOAD_INFO) {
				UWARN("Invalid TIM %s\n", fentry->filename);
				return UPDATE_TIM_ERROR;
			}
			li = &oentry->li;
			debug_fw_update("Getting version info\n");
			err = tim_get_version_info(thandle, &oentry->version);
			if (err)
				oentry->no_version = 1;

			if (!no_load_info) {
				if (!li->hshi_parsed || !li->tim_src_loc_parsed ||
				    !li->tim_dato_filename_parsed) {
					UWARN("TIM %s missing required blocks\n",
					      fentry->filename);
					return UPDATE_TIM_ERROR;
				}
				debug_fw_update("%s: TIM associated with %s\n",
						__func__, li->data_filename);
				debug_fw_update("%s: img len: 0x%x, src addr: 0x%llx, load addr: 0x%llx, tim src addr: 0x%llx\n",
						__func__, li->image_length,
						li->src_address, li->load_address,
						li->tim_src_address);
				if (!strcmp(li->data_filename, TIM0_FDT_NAME)) {
					ULOG("Found tim0.timb, processing root TIM\n");
					err = get_object_info_from_fdt(TIM0_FDT_NAME,
								       NULL,
								       NULL,
								       &is_root_tim,
								       &root_obj_name);
					if (err)
						UWARN("tim0 not detected as root TIM in firmware layout\n");
					dfile = find_file(root_obj_name);
					ULOG("%s %s associated with %s in update file\n",
					     dfile ? "Found" : "Did not find",
					     root_obj_name, TIM0_FDT_NAME);
				} else {
					dfile = find_file(li->data_filename);
					ULOG("%s %s in update file\n",
					     dfile ? "Found" : "Did not find",
					     li->data_filename);
				}
				if (dfile == NULL) {
					UWARN("Error: could not find %s in update file\n",
					      li->data_filename);
					return UPDATE_TIM_ERROR;
				}
				debug_fw_update("dfile: %s, li: %s, fentry: %s\n",
						dfile->filename, li->data_filename,
						fentry->filename);
				if (dfile->file_size != li->image_length) {
					UWARN("Error: TIM %s length %u does not match data file %s length %lu\n",
					      fentry->filename,
					      oentry->li.image_length,
					      dfile->filename, dfile->file_size);
					return UPDATE_TIM_ERROR;
				}
				fentry->file_loc = li->tim_src_address;
				dfile->file_loc = li->src_address;
				oentry->data_file = dfile;
				oentry->no_data_file = 0;
				dfile->object = oentry;
				debug_fw_update("%s: %s starts at 0x%llx, %s starts at 0x%llx\n",
						__func__,
						fentry->filename, fentry->file_loc,
						dfile->filename, dfile->file_loc);
			} else {
				uint64_t src_addr;

				debug_fw_update("No data file present\n");
				tret = tim_get_version_info(thandle,
							    &oentry->version);
				oentry->data_file = NULL;
				oentry->no_data_file = 1;
				if (tret != TIM_NO_ERROR) {
					debug_fw_update("%s: %s does not load any image file\n",
							__func__,
							fentry->filename);
				} else {
					debug_fw_update("%s: Obtained version for non-data file %s\n",
							__func__, fentry->filename);
				}
				tret = tim_get_tim_location_addr(thandle,
								 &src_addr);
				fentry->file_loc = src_addr;
				if (tret == TIM_NO_ERROR)
					debug_fw_update("%s: Tim address 0x%llx\n",
							__func__, src_addr);
				else
					UWARN("%s: Tim address unknown for %s!\n",
					      __func__, fentry->filename);
			}
		}
	}
	return UPDATE_OK;
}

/**
 * Checks if a group is present and valid or not
 *
 * @param[in]	group	group to check
 *
 * @return	1 if group is present and complete, 0 if not present,
 *		RETURN_GROUP_ERROR if group is incomplete
 */
static int check_group(const struct object_group_entry *group)
{
	const struct object_group_entry *gentry;
	struct file_entry *fentry;
	bool complete = true;
	bool none = true;

	ULOG("Verifying all files are present in available groups\n");
	for (gentry = group; gentry->tim_filename || gentry->data_filename;
	     gentry++) {
		debug_fw_update("%s: Checking %s, %s\n", __func__,
				gentry->tim_filename ? gentry->tim_filename : "none",
				gentry->data_filename ? gentry->data_filename : "none");
		if (gentry->tim_filename) {
			fentry = find_file(gentry->tim_filename);
			if (!fentry) {
				if (!gentry->optional) {
					INFO("Update file not complete, missing required TIM file %s\n",
					     gentry->tim_filename);
					complete = false;
				}
			} else {
				assert(fentry->object != NULL);
				fentry->object->group = group;
				none = false;
				INFO("Found TIM %s\n", gentry->tim_filename);
			}
		}
		if (gentry->data_filename) {
			fentry = find_file(gentry->data_filename);
			if (!fentry) {
				if (!gentry->optional) {
					INFO("Update file not complete, missing required data file %s\n",
					     gentry->data_filename);
					complete = false;
				}
			} else {
				assert(fentry->object != NULL);
				fentry->object->group = group;
				none = false;
				INFO("Found data file %s\n", gentry->data_filename);
			}
		}
	}
	if (complete) {
		ULOG("Group containing %s is complete.\n",
		     group[0].data_filename);
		debug_fw_update("Group containing %s is complete.\n",
				group[0].data_filename);
		return 1;
	}
	if (none) {
		ULOG("Group containing %s is missing (OK)\n",
		     group[0].data_filename);
		debug_fw_update("Group containing %s is missing (OK)\n",
				group[0].data_filename);
		return 0;
	}
	UWARN("Error: Group containing %s is incomplete\n",
	      group[0].data_filename ? group[0].data_filename :
		group[0].tim_filename ? group[0].tim_filename : "UNKNOWN");
	return UPDATE_GROUP_ERROR;
}

/**
 * Verify that all of the groups in the update are correct.  An update can
 * contain any number of groups, but no group can be incomplete.
 *
 * @return	0 on success, RETURN_GROUP_ERROR if there is an invalid group,
 *		1 if all groups are present.
 */
static int check_groups(void)
{
	const struct object_group *group;
	const struct object_group *plat_groups = &file_groups[0];
	bool all_found = true;
	bool none_found = true;
	int found, num_found = 0;

	ULOG("Verifying all groups are complete\n");
	for (group = plat_groups; group->entry != NULL; group++) {
		debug_fw_update("Checking group %s/%s\n",
				group->entry->tim_filename ?
					group->entry->tim_filename : "none",
				group->entry->data_filename ?
					group->entry->data_filename : "none");

		found = check_group(group->entry);
		if (found < 0)
			return UPDATE_GROUP_ERROR;
		if (!found) {
			if (!group->optional) {
				INFO("Group containing TIM %s not found\n",
				     group->entry->tim_filename);
				all_found = false;
			} else {
				INFO("Optional group containing TIM %s not found\n",
				     group->entry->tim_filename);
			}
		} else {
			num_found++;
			none_found = false;
		}
	}

	if (none_found) {
		UWARN("No valid object groups found\n");
		return UPDATE_GROUP_ERROR;
	}
	if (all_found) {
		debug_fw_update("All file groups found\n");
		ULOG("All file groups found\n");
	} else {
		debug_fw_update("Found %d object groups\n", num_found);
		ULOG("Found %d object groups\n", num_found);
	}
	return all_found ? 1 : 0;
}

/**
 * Check for overlapping objects
 *
 * @param[in] entry	file to check
 *
 * @return -1 on error, 0 on success
 */
static int check_file_loc_size(const struct file_entry *entry)
{
	const struct file_entry *file;

	for_each_file(file) {
		if (entry == file)
			continue;
		if ((entry->file_loc >= file->file_loc &&
		     entry->file_loc < file->file_loc + file->file_size) ||
		    (entry->file_loc + entry->file_size >= file->file_loc &&
		     entry->file_loc + entry->file_size <
		     file->file_loc + file->file_size)) {
			UERROR("File %s address overlaps %s\n",
			       entry->filename,
			       file->filename);
			UERROR("%s start: 0x%llx, size: 0x%lx, %s start: 0x%llx, size: 0x%lx\n",
			       entry->filename, entry->file_loc,
			       entry->file_size, file->filename,
			       file->file_loc, file->file_size);
			return -EINVAL;
		}
	}
	return 0;
}

/**
 * Verify the object file hash and compare it to the hash stored in the TIM
 *
 * @param[in]	obj	- object to check
 *
 * @return	0 on success or -EAUTH on failure
 */
static int validate_hash(const struct object_entry *obj)
{
	int err;

	err = ehsm_verify_image(obj->data_file->data, &obj->li, NULL, NULL);

	if (err) {
		UERROR("Image hash failed for %s\n", obj->data_file->filename);
		return -EAUTH;
	}

	return 0;
}

/**
 * Verifies the hash of an image
 *
 * @param desc	update descriptor used for media
 * @param linfo	TIM load information
 * @param[out] digest	Calculated hash value.  Must be able to hold 512 bits.
 *			This may be NULL.
 * @param[out] hash_size	Size of hash in bytes, may be NULL
 *
 * @return	0 on success, otherwise error
 */
static enum update_ret verify_hash(const struct smc_update_descriptor *desc,
				   const struct tim_load_info *linfo,
				   uint8_t *digest, int *hash_size)
{
	struct ehsm_handle ehdl;
	enum update_ret uret;
	int ret;
	size_t size = linfo->image_length;
	uint64_t offset = linfo->src_address;
	uint64_t blk_size;

	ret = ehsm_verify_init(linfo, &ehdl);
	if (ret) {
		UERROR("Error initializing hash verification\n");
		return UPDATE_EHSM_ERROR;
	}

	debug_fw_update("Verifying 0x%lx bytes starting at offset 0x%llx\n",
			size, offset);
	blk_size = sizeof(tim_buffer);
	while (size > blk_size) {
		uret = octeontx_read_data(desc, offset, blk_size, tim_buffer);
		if (uret != UPDATE_OK)
			return uret;
		ret = ehsm_verify_update(&ehdl, tim_buffer, blk_size);
		if (ret)
			return UPDATE_EHSM_ERROR;
		offset += blk_size;
		size -= blk_size;
	}
	if (size) {
		uret = octeontx_read_data(desc, offset, size, tim_buffer);
		if (uret != UPDATE_OK)
			return uret;
	}
	ret = ehsm_verify_final(&ehdl, tim_buffer, size, linfo, digest,
				hash_size);
	if (ret == -EAUTH) {
		UWARN("Detected corrupt flash image for %s\n",
		      linfo->data_filename);
		return UPDATE_AUTH_ERROR;
	} else if (ret != 0) {
		UERROR("Error %d finalizing verification for %s\n",
		       ret, linfo->data_filename);
		return UPDATE_EHSM_ERROR;
	}
	return UPDATE_OK;
}

/**
 * Check and compare an object with what is stored in the flash
 *
 * @param[in]	desc	descriptor with flags and media information
 * @param	object	object to verify
 *
 * This function checks an object against what is stored in flash.  This is
 * used for the purpose of determining whether or not the update should
 * be applied.  If a corrupt or missing object is found in the flash, then
 * all components will be updated, regardless of the version information.
 * If the object in flash is valid, its version can be compared against
 * the new object.  If they match then the object will be skipped.
 *
 * @return	UPDATE_OK - Success
 *		UPDATE_EHSM_ERROR - EHSM failure
 *		UPDATE_VERSION_CHECK_FAIL - Version check failed
 *

 *
 * NOTE:	This function can also set the skip_install or update_all
 *		flags in the object.  The caller should check these flags
 *		after every call.
 */
enum update_ret check_flash_object(const struct smc_update_descriptor *desc,
				   struct object_entry *object)
{
	struct tim_handle *fl_hdl = &_tim_handle;	/* Flash image handle */
	struct tim_load_info *fl_li = &_tim_load_info;
	struct tim_opaque_data_version_info fl_vinfo;
	bool is_root_tim = false;
	const char *root_obj_name = NULL;
	uint64_t offset = 0;
	size_t max_size;
	int ret;
	enum update_ret uret;
	enum tim_return tret;

	ret = get_object_info_from_fdt(object->data_file->filename,
				       &offset, &max_size,
				       &is_root_tim, &root_obj_name);
	if (ret == -ENODEV) {
		/* It's possible this is a new object.  If new, validate it */
		UINFO("%s not found in device tree, assuming new object\n",
		      object->data_file->filename);
		object->update_all = true;
		uret = UPDATE_OK;
		goto done;
	}

	object->is_root_tim_obj = is_root_tim;
	/* Read existing TIM from flash */
	uret = octeontx_read_tim(desc, offset, BUF_SIZE, rd_buffer, fl_hdl,
				 NULL);
	if (uret == UPDATE_MISSING_TIM) {
		UINFO("%sTIM for %s missing in flash at offset 0x%llx\n",
		      is_root_tim ? "Root " : "",
		      object->data_file->filename, offset);
		object->update_all = true;
		uret = UPDATE_OK;
		goto done;
	}
	if (uret == UPDATE_TIM_ERROR) {
		/* If not found then we definitely want to overwrite it */
		UWARN("Could not load TIM for %s from flash\n",
		      object->data_file->filename);
		object->update_all = true;
		uret = UPDATE_OK;
		goto done;
	} else if (uret != UPDATE_OK) {
		UWARN("Error %d reading existing TIM\n", uret);
		goto done;
	}

	tret = tim_get_load_info(fl_hdl, fl_li);
	if (tret != TIM_NO_ERROR) {
		/* Bad TIM, we want to overwrite it */
		object->update_all = true;
		UWARN("Could not get load info from TIM %s, ret: %d\n",
		      object->tim_file->filename, tret);
		uret = UPDATE_OK;
		goto done;
	}
	if (strcmp(fl_li->data_filename, object->data_file->filename)) {
		UWARN("Update TIM filename %s does not match flash TIM filename %s\n",
		      object->data_file->filename, fl_li->data_filename);
		object->update_all = 1;
		uret = UPDATE_OK;
		goto done;
	}

	uret = verify_hash(desc, fl_li, NULL, NULL);
	if (uret == UPDATE_AUTH_ERROR) {
		UERROR("Hash mismatch for %s\n", object->data_file->filename);
		uret = UPDATE_OK;
		goto done;

	} else if (uret != UPDATE_OK) {
		/* Something else went wrong */
		UERROR("Error %d finalizing verification for %s\n",
		       uret, object->data_file->filename);
		uret = UPDATE_OK;
		goto done;
	}

	if (!(desc->update_flags & UPDATE_FLAG_IGNORE_VERSION)) {
		tret = tim_get_version_info(fl_hdl, &fl_vinfo);
		if (tret != TIM_NO_ERROR) {
			UWARN("TIM %s is missing version info in flash\n",
			      object->tim_file->filename);
			uret = UPDATE_VERSION_CHECK_FAIL;
			goto done;
		}
		/* If we're here we have the version information */
		ret = marvell_cust_check_version(desc, object, &fl_vinfo);
		if (ret > 0) {
			object->skip_install = 1;
			uret = UPDATE_OK;
			goto done;
		} else if (ret < 0) {
			uret = UPDATE_VERSION_CHECK_FAIL;
			goto done;
		}
	}

done:
	zeromem(fl_hdl, sizeof(*fl_hdl));
	zeromem(fl_li, sizeof(*fl_li));
	return uret;
}

/**
 * Update all objects in a group with matching flags
 *
 * @param	group	group of objects to check and update
 */
static void update_flash_group_flags(const struct object_group_entry *group,
				     bool update_all)
{
	bool skip_install = true;
	bool skip_set = false;

	const struct object_group_entry *gentry;
	struct file_entry *fentry;

	if (update_all) {
		/*
		 * If update all is set then we clear the skip flag for all
		 * group members and set the update_all for all group members.
		 */
		for (gentry = group; gentry->data_filename; gentry++) {
			fentry = find_file(gentry->data_filename);
			if (fentry) {
				fentry->object->update_all = true;
				fentry->object->skip_install = false;
			}
		}
		/* We're done, nothing to skip */
		return;
	}
	/* Now check if the skip flag is set it is set for all group entries */
	for (gentry = group; gentry->data_filename; gentry++) {
		fentry = find_file(gentry->data_filename);
		if (fentry) {
			if (!fentry->object->skip_install) {
				skip_install = false;
			} else {
				skip_set = true;
			}
		}
	}
	if (!skip_install && skip_set) {
		/*
		 * At least one object was marked to skip but not all of them.
		 * In this case we mark all objects as not being skipped.
		 */
		for (gentry = group; gentry->data_filename; gentry++) {
			fentry = find_file(gentry->data_filename);
			if (fentry)
				fentry->object->skip_install = false;
		}
	}
}

/**
 * Checks all of the files against what is stored in the flash.  This also
 * checks the flags for skipping to make sure all objects in a group are
 * marked to skip and will also clear any skip flags if update_all is
 * true.
 *
 * @param[in]	desc		descriptor used for media
 * @param[in]	all_present	True if all groups are present
 *
 * @return	0 for success, -EINVAL or -EIO on error.
 */
static enum update_ret
check_flash_files(const struct smc_update_descriptor *desc, bool all_present)
{
	struct object_entry *obj;
	bool update_all = false;
	enum update_ret ret;

	ULOG("Checking files in flash\n");
	for_each_object(obj) {
		if (obj->data_file != NULL) {
			ret = check_flash_object(desc, obj);
			if (ret != UPDATE_OK)
				return ret;
			if (obj->update_all)
				update_all = true;
			if (update_all && !all_present) {
				UERROR("Flash inconsistencies found.  A complete update image is required\n");
				return -EINVAL;
			}
		}
	}

	/*
	 * Verify all skip entries
	 * NOTE that this will mean that the group flags will be updated for
	 * all objects in a group multiple times since this is called
	 * per-object instead of per-group.  This shouldn't be a problem,
	 * however, since there aren't that many objects to where this impacts
	 * performance.
	 */
	for_each_object(obj)
		update_flash_group_flags(obj->group, update_all);

	return UPDATE_OK;
}

static enum async_file_check_ret
check_flash_files_async(struct async_update_data *data)
{
	struct smc_update_descriptor *desc = data->desc;
	enum update_ret ret;

	ULOG("Checking files in flash async\n");
	while (data->obj) {
		if (data->obj->data_file != NULL) {
			ret = check_flash_object(desc, data->obj);
			if (ret != UPDATE_OK) {
				desc->retcode = ret;
				return ASYNC_CHECK_ERROR;
			}
			if (data->obj->update_all)
				data->update_all = true;
			if (data->update_all && !data->all_present) {
				desc->retcode = ret;
				UERROR("Flash inconsistencies found."
				       "A complete update image is required\n");
				return -EINVAL;
			}
		}
		data->obj = data->obj->next;
		return ASYNC_CHECK_CONTINUE;
	}
	return ASYNC_CHECK_DONE;
}

static enum async_file_check_ret
check_flash_groups_async(struct async_update_data *data)
{
	while (data->obj) {
		update_flash_group_flags(data->obj->group, data->update_all);
		data->obj = data->obj->next;
		return ASYNC_CHECK_CONTINUE;
	}

	return ASYNC_CHECK_DONE;
}

/**
 * Check all files in the update file
 */
static enum update_ret check_files(void)
{
	struct object_entry *obj;
	int err;

	ULOG("Verifying files in update file\n");
	for_each_object(obj) {
		gti_wdog_pet();
		err = check_file_loc_size(obj->tim_file);
		if (err)
			return UPDATE_LOCATION_ERROR;
		UINFO("TIM %s OK\n", obj->tim_file->filename);
		if (obj->data_file) {
			err = check_file_loc_size(obj->data_file);
			if (err)
				return UPDATE_LOCATION_ERROR;

			err = validate_hash(obj);
			if (err)
				return err;
			INFO("Object %s OK\n", obj->data_file->filename);
		}
	}
	return UPDATE_OK;
}

static inline int get_spi_mode(uint64_t offset)
{
	return (offset >= (1 << 24)) ?
				SPI_ADDRESSING_32BIT : SPI_ADDRESSING_24BIT;
}

/**
 * Configure the media before updates
 */
static enum update_ret setup_media(struct io_handle *io_handle,
				   const struct smc_update_descriptor *desc)
{
	int ret;
	enum update_ret uret = UPDATE_OK;
	const io_dev_connector_t *conn = NULL;
	bool is_mmc = !!(desc->update_flags & UPDATE_FLAG_EMMC);

	/* Set the starting offset and length of the block storage */
	if (desc->update_flags & UPDATE_FLAG_BACKUP) {
		io_handle->spec->offset = BACKUP_IMAGE_OFFSET;
		io_handle->spec->length = BACKUP_IMAGE_OFFSET * 2;
	} else {
		io_handle->spec->offset = 0;
		io_handle->spec->length = BACKUP_IMAGE_OFFSET;
	}
	io_handle->desc = desc;

	/*
	 * We first need to connect to the proper driver before we can
	 * open the device
	 */
	if (is_mmc) {
		ULOG("Setiting up eMMC media\n");
		debug_fw_update("%s: Setting up eMMC media\n", __func__);
		if (emmc_dev_con == NULL) {
			debug_fw_update("Registering eMMC IO device connector\n");
			ret = register_io_dev_emmc(&emmc_dev_con);
			debug_fw_update("eMMC IO device connector: 0x%p\n",
					emmc_dev_con);
			if (ret != 0) {
				UWARN("Error registering connection to eMMC driver (%d)\n", ret);
				uret = UPDATE_IO_DEV_REGISTER_ERROR;
				goto media_error;
			}
		}
		conn = emmc_dev_con;
	} else {
		ULOG("Setting up SPI media\n");
		debug_fw_update("%s: Setting up SPI media\n", __func__);
		if (spi_dev_con == NULL) {
			debug_fw_update("%s: Registering SPI IO device connector\n", __func__);
			ret = register_io_dev_spi(&spi_dev_con);
			if (ret != 0) {
				UWARN("Error registering SPI IO device connector\n");
				uret = UPDATE_IO_DEV_REGISTER_ERROR;
				goto media_error;
			}
		}
		conn = spi_dev_con;
	}

	/* Now open the IO device */
	debug_fw_update("Opening media IO device\n");
	ret = io_dev_open(conn, (uintptr_t)io_handle->spec,
			  io_handle->dev_handle);
	if (ret != 0) {
		UWARN("Error opening device (%d)\n", ret);
		uret = UPDATE_IO_DEV_OPEN_ERROR;
		goto media_error;
	}
	/* Initialize it */
	debug_fw_update("Initializing media\n");
	ret = io_dev_init(*(io_handle->dev_handle), (uintptr_t)NULL);
	if (ret != 0) {
		UWARN("Error initializing eMMC (%d)\n", ret);
		uret = UPDATE_IO_DEV_INIT_ERROR;
		goto media_error;
	}
	/* Open it for read/write/seek */
	ret = io_open(*(io_handle->dev_handle), (uintptr_t)io_handle->spec,
		      io_handle->io_handle);
	if (ret != 0) {
		UWARN("Error opening media\n");
		uret = UPDATE_IO_DEV_OPEN_ERROR;
		goto media_error;
	}

	if (!is_mmc) {
		/* Set controller and chip select for SPI */
		ret = spi_block_config(*(io_handle->io_handle),
				       desc->bus, desc->cs);
		if (ret != 0) {
			UWARN("Error configuring SPI_%u CS: %u\n",
			      desc->bus, desc->cs);
			uret = UPDATE_IO_ERROR;
			goto media_error;
		}
	}

	return UPDATE_OK;

media_error:
	media_done(io_handle);

	return uret;
}

/**
 * Called after all I/O operations are finished
 */
static enum update_ret media_done(struct io_handle *io_h)
{
	debug_fw_update("%s: Closing device handles\n", __func__);
	if (io_h->io_handle != NULL && *io_h->io_handle != (uintptr_t)NULL) {
		io_close(*io_h->io_handle);
		*io_h->io_handle = (uintptr_t)NULL;
		io_h->io_handle = NULL;
	}
	if (io_h->dev_handle != NULL && *io_h->dev_handle != (uintptr_t)NULL) {
		io_dev_close(*io_h->dev_handle);
		*io_h->dev_handle = (uintptr_t)NULL;
		io_h->dev_handle = NULL;
	}
	return UPDATE_OK;
}

/**
 * Read data from storage using an IO handle
 *
 * @param	io_handle	I/O handle to read from
 * @param	offset		Offset in storage to read from
 * @param	size		Number of bytes to read
 * @param[out]	buffer		Buffer to read data in to
 *
 * @return	status of operation
 */
static enum update_ret
octeontx_io_data_read(struct io_handle *io_handle, uint64_t offset,
		      size_t size, void *buffer)
{
	size_t bytes_read;
	int ret;

	gti_wdog_pet();

	debug_fw_update("%s: Reading 0x%lx bytes from media offset 0x%llx\n",
			__func__, size, offset);
	if (*io_handle->io_handle == (uintptr_t)NULL) {
		UWARN("%s: Media block device not initialized\n", __func__);
		return UPDATE_IO_DEV_INIT_ERROR;
	}
	ret = io_seek(*io_handle->io_handle, IO_SEEK_SET, offset);
	if (ret != 0) {
		UWARN("Media seek to offset 0x%llx failed: %d\n", offset, ret);
		return UPDATE_IO_ERROR;
	}
	ret = io_read(*io_handle->io_handle, (uintptr_t)buffer, size,
		      &bytes_read);
	if (ret != 0) {
		UWARN("IO error reading 0x%lx bytes from offset 0x%llx (%d)\n",
		      size, offset, ret);
		return UPDATE_IO_ERROR;
	}
	if (bytes_read != size) {
		UWARN("Could not read %lu bytes, read %lu bytes instead\n",
		      size, bytes_read);
		return UPDATE_IO_ERROR;
	}
	return UPDATE_OK;
}

/**
 * Read data from flash storage
 *
 * @param[in]	desc	media descriptor
 * @param	offset	Offset to read
 * @param	size	Number of bytes to read
 * @param[out]	buffer	pointer to buffer to store data in
 *
 * @return	status of operation
 */
static enum update_ret
octeontx_read_data(const struct smc_update_descriptor *desc, uint64_t offset,
		   size_t size, void *buffer)
{
	struct io_handle rd_handle;

	rd_handle.desc = desc;
	rd_handle.io_handle = &media_handle;
	rd_handle.dev_handle = &media_dev_handle;
	rd_handle.spec = &media_spec;

	return octeontx_io_data_read(&rd_handle, offset, size, buffer);
}

/**
 * Write data to storage using an IO handle
 *
 * @param	io_handle	I/O handle to write to
 * @param	offset		Offset in storage to write to
 * @param	size		Number of bytes to write
 * @param[in]	buffer		Buffer to write data from
 *
 * @return	status of operation
 */
static enum update_ret
octeontx_io_data_write(struct io_handle *io_handle, uint64_t offset,
		       size_t size, const void *buffer)
{
	size_t bytes_written;
	int ret;

	gti_wdog_pet();

	debug_fw_update("%s: Writing 0x%lx bytes to media offset 0x%llx\n",
			__func__, size, offset);
	if (*io_handle->io_handle == (uintptr_t)NULL) {
		UWARN("Media block device not initialized\n");
		return UPDATE_IO_DEV_INIT_ERROR;
	}
	ret = io_seek(*io_handle->io_handle, IO_SEEK_SET, offset);
	if (ret != 0) {
		UWARN("Media seek to offset 0x%llx failed: %d\n", offset, ret);
		return UPDATE_IO_ERROR;
	}
	ret = io_write(*io_handle->io_handle, (uintptr_t)buffer, size,
		       &bytes_written);
	if (ret != 0) {
		UWARN("Media IO writing 0x%lx bytes to offset 0x%llx (%d)\n",
		      size, offset, ret);
		return UPDATE_IO_ERROR;
	}
	if (bytes_written != size) {
		UWARN("Could not write %lu bytes, wrote %lu bytes instead\n",
		      size, bytes_written);
		return UPDATE_IO_ERROR;
	}
	return UPDATE_OK;
}

/**
 * Writes data to flash storage
 *
 * @param[in]	desc	media descriptor
 * @param	offset	Offset to write to
 * @param	size	Number of bytes to write
 * @param[in]	buffer	pointer to buffer to store data from
 *
 * @return	status of operation
 *
 * NOTE: This will also perform an erase operation if needed using the
 * erase block size.
 */
static enum update_ret
octeontx_write_data(const struct smc_update_descriptor *desc,
		    uint64_t offset, size_t size, const void *buffer)
{
	struct io_handle wr_handle;

	wr_handle.desc = desc;
	wr_handle.io_handle = &media_handle;
	wr_handle.dev_handle = &media_dev_handle;
	wr_handle.spec = &media_spec;

	return octeontx_io_data_write(&wr_handle, offset, size, buffer);
}

/**
 * Erase flash data
 *
 * @param	desc		Descriptor to use
 * @param	offset		offset to erase
 * @param	size		number of bytes to erase
 *
 * @return status of operation
 *
 * NOTE: The size must be a multiple of the erase block size.  This also is
 * a NULL operation for eMMC.
 */
static enum update_ret
octeontx_erase_data(const struct smc_update_descriptor *desc,
		    uint64_t offset, int size)
{
	int ret;
	enum update_ret uret;
	bool is_mmc = !!(desc->update_flags & UPDATE_FLAG_EMMC);
	uint32_t start_off, start_size;
	uint32_t end_off;
	uint32_t wr_size;
	uint32_t erase_size;
	uint32_t erase_adj;
	uint32_t erase_blk_cnt;

	if (desc->update_flags & UPDATE_FLAG_BACKUP)
		erase_adj = BACKUP_IMAGE_OFFSET;
	else
		erase_adj = 0;

	start_off = offset % SPI_NOR_ERASE_SIZE;
	start_size = SPI_NOR_ERASE_SIZE - start_off;

	if (is_mmc) {
		/* For eMMC we just write all zeros */
		zeromem(wr_buffer, sizeof(wr_buffer));

		/*
		 * Handle small blocks at the beginning and align rest of data
		 */
		if (start_off != 0) {
			uret = octeontx_write_data(desc, offset, start_size,
						   wr_buffer);
			if (uret != UPDATE_OK) {
				UWARN("Error erasing 0x%x bytes at offset 0x%llx\n",
				      start_size, offset + erase_adj);
				return uret;
			}
			offset += start_off;
			size -= start_size;
		}
		/*
		 * Erase rest of aligned data and end block, the write
		 * operation takes care of handling partial blocks.
		 */
		while (size > 0) {
			gti_wdog_pet();
			wr_size = (size > SPI_NOR_ERASE_SIZE) ?
						SPI_NOR_ERASE_SIZE : size;
			uret = octeontx_write_data(desc, offset, wr_size,
						   wr_buffer);
			if (uret != UPDATE_OK) {
				UWARN("Error erasing 0x%x bytes at offset 0x%llx\n",
				      wr_size, offset + erase_adj);
				return uret;
			}
			offset += wr_size;
			size -= wr_size;
		}
	} else {
		/*
		 * For SPI NOR we write 0xff and use the erase command when
		 * full blocks are present to speed up the process since there
		 * is no need to do a read, erase, write operation.  If
		 * partial blocks are to be erased we use the write operation
		 * for any partial blocks at the beginning or end.
		 */
		end_off = (offset + size) % SPI_NOR_ERASE_SIZE;
		if (start_off != 0 || end_off != 0)
			memset(wr_buffer, 0xff, sizeof(wr_buffer));

		if (start_off != 0) {
			uret = octeontx_write_data(desc, offset, start_size,
						   wr_buffer);
			if (uret != UPDATE_OK) {
				UWARN("Error erasing 0x%x bytes at offset 0x%llx\n",
				      start_size, offset + erase_adj);
				return uret;
			}
			size -= start_size;
			offset += start_size;
		}

		/* Erase full blocks */
		erase_blk_cnt = size / SPI_NOR_ERASE_SIZE;
		ret = spi_nor_erase(offset + erase_adj, erase_blk_cnt,
				    desc->bus, desc->cs);
		if (ret != 0) {
			UWARN("Error erasing SPI block at offset 0x%llx\n",
			      offset + erase_adj);
			return UPDATE_IO_ERROR;
		}
		erase_size = erase_blk_cnt * SPI_NOR_ERASE_SIZE;
		offset += erase_size;
		size -= erase_size;

		if (size > 0) {
			/* Read, erase, write any data at the end */
			uret = octeontx_write_data(desc, offset, size,
						   wr_buffer);
			if (uret != UPDATE_OK) {
				UWARN("Error erasing 0x%x bytes at offset 0x%llx\n",
				      size, offset);
				return uret;
			}
		}
	}

	return UPDATE_OK;
}

/**
 * Erases EBF configuration data
 *
 * @param	desc	Pointer to update descriptor
 *
 * @return	UPDATE_OK or I/O error
 */
static enum update_ret erase_ebf_config_data(struct smc_update_descriptor *desc)
{
	uint64_t offset;
	size_t max_size;
	bool backup;
	enum update_ret uret;

	/*
	 * There are two possible configuration offsets, one for CNF10KB and
	 * one for everything else.
	 */
	if (cavm_is_model(OCTEONTX_CNF10KB))
		offset = EBF_CONFIG_OFFSET_CNF10KB;
	else
		offset = EBF_CONFIG_OFFSET;
	max_size = EBF_CONFIG_SIZE;

	/* The offset is the same whether or not the backup offset is used */
	backup = !!(desc->update_flags & UPDATE_FLAG_BACKUP);
	if (backup)
		desc->update_flags &= ~UPDATE_FLAG_BACKUP;
	uret = octeontx_erase_data(desc, offset, max_size);
	if (backup)
		desc->update_flags |= UPDATE_FLAG_BACKUP;

	return uret;
}

/**
 * Reads a TIM from flash and parses it
 *
 * @param[in]	desc		media descriptor
 * @param	offset		byte offset of TIM
 * @param	max_size	Maximum size to read
 * @param[out]	buffer		buffer to read TIM into
 * @param[out]	handle		TIM handle
 * @param[out]	tim_size	Size of TIM, can be NULL
 *
 * @return	UPDATE_OK for success
 *		UPDATE_INVALID_MEDIA for invalid media
 *		UPDATE_IO_ERROR for media I/O errors
 *		UPDATE_MISSING_TIM if media is erased at TIM location
 *		UPDATE_TIM_ERROR if the TIM is invalid
 */
static enum update_ret
octeontx_read_tim(const struct smc_update_descriptor *desc, uint64_t offset,
		  size_t max_size, uint8_t *buffer, struct tim_handle *handle,
		  size_t *tim_size)
{
	enum update_ret ret;
	enum tim_return tret;
	union tim_headers *hdr = (union tim_headers *)buffer;
	struct tim_header_info hinfo;
	int i;

	UINFO("Reading TIM header from offset 0x%llx\n", offset);
	zeromem(buffer, max_size);
	ret = octeontx_read_data(desc, offset, TIM_TIMH_SIZE, (void *)hdr);
	if (ret != UPDATE_OK) {
		ERROR("Failed to read TIM from address 0x%llx (%d)\n",
		      offset, ret);
		goto done;
	}

	tret = tim_get_timh_info(hdr, &hinfo);
	if (tret != TIM_NO_ERROR) {
		/* See if the TIM is present or not by checking to see if
		 * the flash is erased or not.
		 */
		uint8_t erased_byte =
			(desc->update_flags & UPDATE_FLAG_EMMC) ? 0 : 0xff;
		ret = UPDATE_MISSING_TIM;

		for (i = 0; i < TIM_TIMH_SIZE; i++) {
			if (buffer[i] != erased_byte) {
				ret = UPDATE_TIM_ERROR;
				break;
			}
		}
		if (ret != UPDATE_MISSING_TIM) {
			UWARN("Could not parse TIM header at offset 0x%llx (%d) ret (%d)\n",
			      offset, tret, ret);
			UWARN("SPI bus: %d, cs: %d\n", desc->bus, desc->cs);
		} else {
			UINFO("TIM not found at offset 0x%llx, tret: %d\n",
			      offset, tret);
		}
		goto done;
	}

	if (hinfo.signed_tim_size > max_size) {
		UERROR("TIM at offset 0x%llx is too large\n", offset);
		ret = UPDATE_TIM_ERROR;
		goto done;
	}

	/* Read the rest of the TIM */
	ret = octeontx_read_data(desc, offset + TIM_TIMH_SIZE,
				 hinfo.signed_tim_size - TIM_TIMH_SIZE,
				 buffer + TIM_TIMH_SIZE);
	if (ret != UPDATE_OK) {
		UERROR("Could not read TIM\n");
		goto done;
	}

	/* Validate TIM */
	tret = tim_load(hdr, offset, handle);
	if (tret != TIM_NO_ERROR) {
		UERROR("Error %d parsing TIM at 0x%llx\n", ret, offset);
		ret = UPDATE_TIM_ERROR;
		goto done;
	}
	ret = ehsm_verify_tim_digital_signature(handle, &hinfo, (uint8_t *)hdr);
	if (ret != 0) {
		UERROR("TIM signature verification failed for TIM at offset 0x%llx\n",
		       offset);
		ret = UPDATE_AUTH_ERROR;
		goto done;
	}
	ret = UPDATE_OK;
	if (tim_size)
		*tim_size = hinfo.signed_tim_size;
done:

	return ret;
}



static enum update_ret
octeontx_read_tim_io(struct io_handle *io, uint64_t offset,
		  size_t max_size, uint8_t *buffer, struct tim_handle *handle,
		  size_t *tim_size)
{
	enum update_ret ret;
	enum tim_return tret;
	union tim_headers *hdr = (union tim_headers *)buffer;
	struct tim_header_info hinfo;
	const struct smc_update_descriptor *desc = io->desc;
	int i;

	UINFO("Reading TIM header from offset 0x%llx\n", offset);
	zeromem(buffer, max_size);
	ret = octeontx_io_data_read(io, offset, TIM_TIMH_SIZE, (void *)hdr);
	if (ret != UPDATE_OK) {
		ERROR("Failed to read TIM from address 0x%llx (%d)\n",
		      offset, ret);
		goto done;
	}

	tret = tim_get_timh_info(hdr, &hinfo);
	if (tret != TIM_NO_ERROR) {
		/* See if the TIM is present or not by checking to see if
		 * the flash is erased or not.
		 */
		uint8_t erased_byte =
			(desc->update_flags & UPDATE_FLAG_EMMC) ? 0 : 0xff;
		ret = UPDATE_MISSING_TIM;

		for (i = 0; i < TIM_TIMH_SIZE; i++) {
			if (buffer[i] != erased_byte) {
				ret = UPDATE_TIM_ERROR;
				break;
			}
		}
		if (ret != UPDATE_MISSING_TIM) {
			UWARN("Could not parse TIM header at offset 0x%llx (%d) ret (%d)\n",
			      offset, tret, ret);
			UWARN("SPI bus: %d, cs: %d\n", desc->bus, desc->cs);
		} else {
			UINFO("TIM not found at offset 0x%llx, tret: %d\n",
			      offset, tret);
		}
		goto done;
	}

	if (hinfo.signed_tim_size > max_size) {
		UERROR("TIM at offset 0x%llx is too large\n", offset);
		ret = UPDATE_TIM_ERROR;
		goto done;
	}

	/* Read the rest of the TIM */
	ret = octeontx_io_data_read(io, offset + TIM_TIMH_SIZE,
				 hinfo.signed_tim_size - TIM_TIMH_SIZE,
				 buffer + TIM_TIMH_SIZE);
	if (ret != UPDATE_OK) {
		UERROR("Could not read TIM\n");
		goto done;
	}

	/* Validate TIM */
	tret = tim_load(hdr, offset, handle);
	if (tret != TIM_NO_ERROR) {
		UERROR("Error %d parsing TIM at 0x%llx\n", ret, offset);
		ret = UPDATE_TIM_ERROR;
		goto done;
	}
	ret = ehsm_verify_tim_digital_signature(handle, &hinfo, (uint8_t *)hdr);
	if (ret != 0) {
		UERROR("TIM signature verification failed for TIM at offset 0x%llx\n",
		       offset);
		ret = UPDATE_AUTH_ERROR;
		goto done;
	}
	ret = UPDATE_OK;
	if (tim_size)
		*tim_size = hinfo.signed_tim_size;
done:

	return ret;
}

/**
 * Extract TIM0 from the update and update what was saved.
 *
 * @return status of operation
 */
static enum update_ret get_tim0_from_update(void)
{
	struct file_entry *fentry;
	struct object_entry *oentry;
	enum update_ret uret = UPDATE_TIM_MISSING;

	ULOG("Looking for tim0 in update objects\n");
	for_each_object(oentry) {
		if (oentry->tim_file != NULL) {
			fentry = oentry->tim_file;
			if (!strcmp(fentry->filename, TIM0_FILENAME)) {
				uret = update_tim0(fentry->data,
						   fentry->file_loc,
						   fentry->file_size);
				if (uret == UPDATE_OK)
					break;
			}
		}
	}
	return uret;
}

/**
 * Obtain the offset and maximum size of TIM0
 *
 * @param[out]	address	Address offset of TIM0, can be NULL
 * @param[out]	size	Maximum size of tim0, can be NULL
 *
 * @return	UPDATE_OK, UPDATE_DT_ERROR, or UPDATE_MISSING_TIM
 */
static enum update_ret get_tim0_address_size(uint64_t *address, size_t *size)
{
	const char *name;
	int len;
	int node;
	const uint32_t *addr_size;

	/* Get offset of tim0 from firmware-layout */
	fdt_for_each_subnode(node, fdt_ptr, fnode) {
		name = fdt_getprop(fdt_ptr, node, "description", NULL);
		if (name && !strcmp(name, TIM0_FDT_NAME)) {
			addr_size = fdt_getprop(fdt_ptr, node, "reg", &len);
			if (addr_size == NULL || len != 8) {
				UERROR("Missing or corrupt reg parameter in firmware-layout for tim0\n");
				return UPDATE_DT_ERROR;
			}
			if (address)
				*address = fdt32_to_cpu(addr_size[0]);
			if (size)
				*size = fdt32_to_cpu(addr_size[1]);
			ULOG("Found tim0 in firmware layout at 0x%x\n",
			     fdt32_to_cpu(addr_size[0]));
			return UPDATE_OK;
		}
	}
	UERROR("Could not find tim0 in firmware layout device tree\n");
	return UPDATE_MISSING_TIM;
}

/**
 * Erases TIM0 on the specified device
 *
 * @param[in]	desc	Device descriptor
 *
 * @return	status of operation
 */
static enum update_ret erase_tim0(const struct smc_update_descriptor *desc)
{
	enum update_ret uret;
	uint64_t offset;
	size_t size;

	uret = get_tim0_address_size(&offset, &size);
	if (uret != UPDATE_OK)
		return uret;

	uret = octeontx_erase_data(desc, offset, size);
	if (uret != UPDATE_OK)
		UERROR("Could not erase TIM0n\n");
	return uret;
}

/**
 * Saves TIM0.  Use restore_tim0 to restore it.
 *
 * @param[in]	desc	Descriptor with I/O data
 *
 * @return status of operation
 */
static enum update_ret save_tim0(const struct smc_update_descriptor *desc)
{
	struct tim_handle *thdl = &_tim_handle;
	size_t size;
	uint64_t offset;
	enum update_ret uret;

	uret = get_tim0_address_size(&offset, &size);
	if (uret != UPDATE_OK) {
		ULOG("Could not find root TIM (tim0) in firmware-layout\n");
		return uret;
	}

	ULOG("Saving TIM0 from offset 0x%llx\n", offset);
	uret = octeontx_read_tim(desc, offset, sizeof(tim0_buffer),
				 tim0_buffer, thdl, &size);
	tim0_size = size;
	tim0_offset = offset;
	if (uret != UPDATE_OK) {
		UWARN("Reading TIM0 failed with %d at offset 0x%llx, not erasing\n",
		       uret, offset);
		tim0_offset = 0;
		tim0_size = 0;
		zeromem(tim0_buffer, sizeof(tim0_buffer));
	}
	return uret;
}

/**
 * Updates TIM0 with new data for use with restore_tim0
 *
 * @param[in]	tim0	Pointer to new tim0 buffer
 * @param	offset	Offset where tim0 should be written
 * @param	size	Size of new tim0 data
 *
 * @return UPDATE_TIM_ERROR if size is invalid or UPDATE_OK if all is well
 */
static enum update_ret update_tim0(const uint8_t *tim0, uint64_t offset,
				   size_t size)
{
	if (size > sizeof(tim0_buffer) || size < TIM_TIMH_SIZE) {
		UERROR("New TIM0 size invalid\n");
		return UPDATE_TIM_ERROR;
	}
	memcpy(tim0_buffer, tim0, size);
	/* Zero rest of buffer */
	if (size < sizeof(tim0_buffer))
		zeromem(tim0_buffer + size, sizeof(tim0_buffer) - size);
	tim0_size = size;
	tim0_offset = offset;
	return UPDATE_OK;
}

/**
 * Restores a previously saved or updated TIM0
 *
 * @param[in]	desc	Descriptor with I/O data
 *
 * @return	Status of I/O operation or UPDATE_TIM_MISSING if no valid TIM0
 */
static enum update_ret restore_tim0(const struct smc_update_descriptor *desc,
				    bool async)
{
	if (tim0_size) {
		if (async) {
			spi_async_add_block_update(desc->bus, desc->cs,
						   tim0_offset, tim0_buffer,
						   tim0_size, NULL, NULL);
			return UPDATE_OK;
		} else {
			return octeontx_write_data(desc, tim0_offset,
						   tim0_size, tim0_buffer);
		}
	}
	return UPDATE_TIM_MISSING;
}

/**
 * Writes a firmware file to the flash and verifies it
 *
 * @param[in]	desc	Media descriptor
 * @param[in]	fentry	file entry to write
 *
 * @return	status of operation
 */
static enum update_ret
octeontx_update_fw_file(const struct smc_update_descriptor *desc,
			struct file_entry *fentry, bool async_operation)
{
	uint64_t offset = fentry->file_loc, xfer_len;
	enum update_ret ret = UPDATE_OK;
	size_t size = fentry->file_size;
	void *user_buffer = (void *)fentry->data;

	/*
	 * Don't write a file multiple times.  There can be multiple TIMs
	 * pointing to the same file.
	 */
	if (fentry->file_written) {
		UINFO("File %s already written, skipping\n", fentry->filename);
		return UPDATE_OK;
	}

	if (async_operation) {
		spi_async_add_block_update(desc->bus, desc->cs, offset,
					   user_buffer, size, NULL, NULL);
	} else {
		while (size > 0) {
			xfer_len = size < BUF_SIZE ? size : BUF_SIZE;
			/* TODO: remove wr_buffer */
			memcpy((void *)wr_buffer, (const void *)user_buffer,
			       xfer_len);

			/* Don't do read/skip if we're forcing writes */
			if (!(desc->update_flags & UPDATE_FLAG_FORCE_WRITE)) {
				/*
				 * First read the data so we can skip writes if
				 * it is the same
				 */
				ret =  octeontx_read_data(desc, offset, xfer_len,
							  rd_buffer);
				if (ret != UPDATE_OK) {
					WARN("Read flash failed for offset: 0x%llx, file: %s\n",
					     offset, fentry->filename);
					break;
				}

				/* Skip blocks where the data is identical */
				if (!memcmp(wr_buffer, rd_buffer, xfer_len)) {
					offset += xfer_len;
					user_buffer += xfer_len;
					size -= xfer_len;
					continue;
				}
			}

			/* Write new data */
			ret = octeontx_write_data(desc, offset, xfer_len, wr_buffer);
			if (ret != UPDATE_OK) {
				UWARN(" Write flash failed for offset: 0x%llx, file: %s\n",
				offset, fentry->filename);
				break;
			}

			/* Read it back and compare it */
			ret = octeontx_read_data(desc, offset, xfer_len, rd_buffer);
			if (ret != UPDATE_OK) {
				UWARN("Read flash failed for offset: 0x%llx, file: %s\n",
				offset, fentry->filename);
				break;
			}
			if (memcmp(rd_buffer, wr_buffer, xfer_len)) {
				int i;
				UWARN("Compare data failed for file: %s at offset 0x%llx, compare len: 0x%llx\n",
				     fentry->filename, offset, xfer_len);
				ret = UPDATE_IO_ERROR;
				for (i = 0; i < xfer_len; i++)
					if (wr_buffer[i] != rd_buffer[i])
						UWARN("offset 0x%llx: w 0x%02x != r 0x%02x\n",
						      offset + i,
						      wr_buffer[i],
						      rd_buffer[i]);
				break;
			}
			offset += xfer_len;
			user_buffer += xfer_len;
			size -= xfer_len;
		}
		zeromem(wr_buffer, sizeof(wr_buffer));
		zeromem(rd_buffer, sizeof(rd_buffer));
	}
	if (ret == UPDATE_OK)
		fentry->file_written = true;

	return ret;
}

/**
 * Write all of the files to the SPI flash
 */
static enum update_ret
octeontx_write_files(const struct smc_update_descriptor *desc,
		     bool async_operation)
{
	struct file_entry *fentry;
	enum update_ret ret;

	spi_async_init_delayed();

	for_each_file(fentry) {
		if (fentry->object->update_all ||
		    !fentry->object->skip_install) {
			if (strcmp(fentry->filename, TIM0_FILENAME) ||
			    tim0_size == 0) {
				UINFO("Writing file %s: location: 0x%llx, size: 0x%lx\n",
				      fentry->filename, fentry->file_loc,
				      fentry->file_size);
				ret = octeontx_update_fw_file(desc, fentry,
							      async_operation);
				if (ret != UPDATE_OK)
					return ret;
			} else {
				UINFO("Skipping %s\n", fentry->filename);
			}
		} else {
			UINFO("Skipping file %s\n", fentry->filename);
		}
	}

	return UPDATE_OK;
}

void prepare_mapping_storage(struct unmap_params *param)
{
	memset(param, 0x00, sizeof(struct unmap_params));
}

void add_mapped_region(struct unmap_params *param, uint64_t base_addr, int map_size)
{
	int param_cnt = param->count;

	UINFO("Saving mapping: id: %d, base_addr: 0x%llx, size: 0x%x\n",
		param_cnt, base_addr, map_size);

	param->p[param_cnt].base_addr = base_addr;
	param->p[param_cnt].ns_map_size = map_size;
	param->count += 1;
}

enum spi_dc_ret done_callback(void *p)
{
	struct unmap_params *param = (struct unmap_params *)p;
	int i;

	media_done(&verif_data[0].io);
	media_done(&verif_data[1].io);

	//make sure update log is cleared, and null terminated
	if (update_log) {
		update_log[log_size_bytes - 1] = '\0';
		update_log = NULL;
		log_bytes_used = 0;
		log_size_bytes = 0;
	}

	for (i = 0; i < param->count; i++) {
		if (param->p[i].base_addr && param->p[i].ns_map_size) {
			INFO("Unmapping: id: %d, base_addr: 0x%llx, size: 0x%x\n",
				i, param->p[i].base_addr, param->p[i].ns_map_size);
			octeontx_mmap_remove_dynamic_region_with_sync(param->p[i].base_addr,
								param->p[i].ns_map_size);
		}
	}
	return DC_RET_DONE;
}

void async_mark_copy_images(struct async_clone_data *param) {
	struct smc_version_info *src = param->vinfo_source;
	struct smc_version_info *dst = param->vinfo_destination;
	int i, j, tim0_id = -1;

	param->clone_needed = false;

	for (i = 0 ; i < src->num_objects ; i++) {
		if (src->objects[i].retcode != RET_OK) {
			src->objects[i].perform_clone = 0;
			continue;
		}

		if (!strncmp(src->objects[i].name, "tim0", VER_MAX_NAME_LENGTH))
			tim0_id = i;

		if (param->force_clone) {
			src->objects[i].perform_clone = 1;
			param->clone_needed = true;
		} else {
			for (j = 0 ; j < dst->num_objects ; j++) {
				if (!strncmp(src->objects[i].name,
					dst->objects[j].name,
					VER_MAX_NAME_LENGTH)) {
					if (memcmp(&src->objects[i].version,
						   &dst->objects[j].version,
						   sizeof(struct tim_opaque_data_version_info))) {
						src->objects[i].perform_clone = 1;
						param->clone_needed = true;
					}
				}
			}
		}
		INFO("File: %s, clone status: %lld\n", src->objects[i].name, src->objects[i].perform_clone);
	}

	/* Check if we can skip clone - if not mark tim0 for update */
	if (!param->clone_needed)
		INFO("Skipping clone operation\n");
	else
		if (tim0_id != -1)
			src->objects[tim0_id].perform_clone = 1;
}

int async_prepare_copy_operation(void *p)
{
	struct verification_data *src = &verif_data[VDATA_SRC];
	struct verification_data *dst = &verif_data[VDATA_DST];
	struct async_clone_data *clone_cfg = (struct async_clone_data *)p;
	const int obj_id = clone_cfg->clone_object_list[clone_cfg->clone_counter++];

	if (obj_id == -1)
		return SPI_OP_CALLBACK_ERROR;

	clone_cfg->copy_params.src_handle = &src->io;
	clone_cfg->copy_params.dst_handle = &dst->io;
	clone_cfg->copy_params.src_object_addr = clone_cfg->vinfo_source->objects[obj_id].object_address;
	clone_cfg->copy_params.src_tim_addr = clone_cfg->vinfo_source->objects[obj_id].tim_address;
	clone_cfg->copy_params.src_object_size = clone_cfg->vinfo_source->objects[obj_id].object_size;
	clone_cfg->copy_params.src_tim_size = clone_cfg->vinfo_source->objects[obj_id].tim_size;

	INFO("Name: %s, obj 0x%llx:0x%llx, tim: 0x%llx:0x%llx SRC:%d:%d DST:%d:%d\n",
			clone_cfg->vinfo_source->objects[obj_id].name,
			clone_cfg->copy_params.src_object_addr,
			clone_cfg->copy_params.src_object_size,
			clone_cfg->copy_params.src_tim_addr,
			clone_cfg->copy_params.src_tim_size,
			clone_cfg->copy_params.src_handle->desc->bus,
			clone_cfg->copy_params.src_handle->desc->cs,
			clone_cfg->copy_params.dst_handle->desc->bus,
			clone_cfg->copy_params.dst_handle->desc->cs);

	return SPI_OP_CALLBACK_CONTINUE;
}

int async_do_copy(void *p)
{
	struct async_clone_data *clone_cfg = (struct async_clone_data *)p;
	struct async_clone_copy_params *params = &clone_cfg->copy_params;
	size_t read_size;
	int ret;

	/* Copy object first */
	while (params->src_object_size) {
		read_size = (params->src_object_size < sizeof(tim_buffer)) ?
						params->src_object_size : sizeof(tim_buffer);
		ret = octeontx_io_data_read(params->src_handle,
					    params->src_object_addr,
					    read_size, tim_buffer);
		if (ret) {
			return SPI_OP_CALLBACK_ERROR;
		}
		ret = octeontx_io_data_write(params->dst_handle,
					     params->src_object_addr,
					     read_size, tim_buffer);
		if (ret) {
			return SPI_OP_CALLBACK_ERROR;
		}
		params->src_object_addr += read_size;
		params->src_object_size -= read_size;
		return SPI_OP_CALLBACK_CONTINUE;
	}

	while (params->src_tim_size) {
		read_size = (params->src_tim_size < sizeof(tim_buffer)) ?
						params->src_tim_size : sizeof(tim_buffer);
		ret = octeontx_io_data_read(params->src_handle,
					    params->src_tim_addr,
					    read_size, tim_buffer);
		if (ret) {
			return SPI_OP_CALLBACK_ERROR;
		}
		ret = octeontx_io_data_write(params->dst_handle,
					     params->src_tim_addr,
					     read_size, tim_buffer);
		if (ret) {
			return SPI_OP_CALLBACK_ERROR;
		}
		params->src_tim_addr += read_size;
		params->src_tim_size -= read_size;
		return SPI_OP_CALLBACK_CONTINUE;
	}
	return SPI_OP_CALLBACK_FINISHED;
}

void async_copy_images(struct async_clone_data *param) {
	struct smc_version_info *src = param->vinfo_source;
	int i;
	bool restart_async = false;

	for (i=0; i<src->num_objects; i++){
		if (src->objects[i].perform_clone) {
			restart_async = true;
			param->clone_object_list[param->clone_counter++] = i;
			spi_async_add_block_callback(NULL, NULL,
						async_prepare_copy_operation, param,
						async_do_copy, param,
						0);
		}
	}

	param->clone_counter = 0;
	if (restart_async)
		spi_async_start(async_clone_callback, &async_clone_internal);
}

/* Erase only part of TIM0 to mark clone operation*/
enum update_ret tim0_async_erase(struct async_clone_data *param)
{
	enum update_ret uret;
	uint64_t offset;
	size_t size;

	param->copy_params.dst_handle = &verif_data[VDATA_DST].io;
	zeromem(wr_buffer, sizeof(wr_buffer));

	uret = get_tim0_address_size(&offset, &size);
	if (uret != UPDATE_OK)
		return uret;

	uret = octeontx_io_data_write(param->copy_params.dst_handle, offset, 0x1000, wr_buffer);

	return uret;
}

enum update_ret source_check_async(struct async_clone_data *param)
{
	struct smc_version_info *src = param->vinfo_source;
	int i;

	for (i = 0; i < src->num_objects; i++) {
		if (src->objects[i].retcode != RET_OK)
			return UPDATE_UNKNOWN_ERROR;
	}

	return UPDATE_OK;
}

enum spi_dc_ret async_clone_callback(void *p)
{
	struct async_clone_data *param = (struct async_clone_data *)p;
	enum spi_dc_ret ret = DC_RET_DONE;

	switch (param->state) {
	case ACLONE_CHECK_SOURCE:
		INFO("Check source data stage\n");
		if (source_check_async(param) != UPDATE_OK) {
			ERROR("Source check verification fail\n");
			param->state = ACLONE_CLEANUP;
		} else {
			param->state++;
		}
		ret = DC_RET_CONTINUE;
		break;
	case ACLONE_CHECK_DESTINATION:
		INFO("Check destination stage\n");
		flash_smc_get_versions(param->vinfo_destination, &verif_data[VDATA_DST]);
		param->state++;
		ret = DC_RET_CONTINUE;
		break;
	case ACLONE_MARK_COPY:
		INFO("Mark copy stage\n");
		async_mark_copy_images(param);
		if (param->clone_needed)
			param->state++;
		else
			param->state = ACLONE_CLEANUP;
		ret = DC_RET_CONTINUE;
		break;
	case ACLONE_ERASE_TIM0_DEST:
		INFO("Erase TIM0 stage\n");
		if (tim0_async_erase(param) != UPDATE_OK) {
			ERROR("Fail during TIM0 erase\n");
			param->state = ACLONE_CLEANUP;
		} else {
			param->state++;
		}
		ret = DC_RET_CONTINUE;
	case ACLONE_COPY_IMAGES:
		INFO("Copy images\n");
		param->clone_counter = 0;
		async_copy_images(param);
		param->state++;
		ret = DC_RET_CONTINUE;
		break;
	case ACLONE_CLEANUP:
		INFO("Cleanup stage");
		media_done(&verif_data[0].io);
		media_done(&verif_data[1].io);
		done_callback(&uParams);
		break;
	}

	return ret;
}

enum spi_dc_ret async_update_callback(void *p)
{
	struct async_update_data *param = (struct async_update_data *)p;
	struct smc_update_descriptor *desc = param->desc;
	enum spi_dc_ret ret = DC_RET_CONTINUE;
	enum async_file_check_ret file_check_ret;
	enum update_ret update_ret;

	const void *fw_image = (void *)desc->image_addr;
	size_t size = desc->image_size;

	if (!param->init_variables) {
		param->obj = first_object_entry;
		param->init_variables = true;
	}

	switch (param->state) {
	case AUPDATE_VERIF_IMAGE:
		UINFO("Image verification state\n");
		if (marvell_cust_verify_fw_update_image(desc)) {
			UERROR("Customer verification failed\n");
			desc->retcode = UPDATE_AUTH_ERROR;
			param->state = AUPDATE_CLEANUP;
			break;
		}
		param->state++;
		break;
	case AUPDATE_INIT_UPDATE:
		UINFO("Init update stage\n");
		update_ret = firm_update_init(fw_image, size);
		if (update_ret != UPDATE_OK) {
			UERROR("Error parsing firmware\n");
			desc->retcode = update_ret;
			param->state = AUPDATE_CLEANUP;
			break;
		}
		param->state++;
		break;
	case AUPDATE_PROCESS_TIMS:
		UINFO("Priocess tims stage\n");
		update_ret = update_process_tims();
		if (update_ret) {
			UERROR("Error parsing TIMs\n");
			desc->retcode = update_ret;
			param->state = AUPDATE_CLEANUP;
			break;
		}
		param->state++;
		break;
	case AUPDATE_CHECK_GROUPS:
		UINFO("Check groups stage\n");
		update_ret = check_groups();
		if (update_ret < 0) {
			UERROR("Error parsing groups\n");
			desc->retcode = update_ret;
			param->state = AUPDATE_CLEANUP;
			break;
		}
		param->all_present = (update_ret == 1);
		param->state++;
		break;
	case AUPDATE_CHECK_FILES:
		UINFO("Check files stage\n");
		update_ret = check_files();
		if (update_ret) {
			UERROR("Error parsing files\n");
			desc->retcode = update_ret;
			param->state = AUPDATE_CLEANUP;
			break;
		}
		param->init_variables = false;
		param->state++;
		break;
	case AUPDATE_CHECK_FLASH_FILES:
		UINFO("Check flash files stage\n");
		file_check_ret = check_flash_files_async(param);
		if (file_check_ret == ASYNC_CHECK_DONE) {
			param->state++;
			param->init_variables = false; /* Reinit *obj pointer */
		} else if (file_check_ret == ASYNC_CHECK_ERROR)
			param->state = AUPDATE_CLEANUP;
		break;
	case AUPDATE_CHECK_FLASH_GROUPS:
		UINFO("Check flash groups stage\n");
		file_check_ret = check_flash_groups_async(param);
		if (file_check_ret == ASYNC_CHECK_DONE)
			param->state++;
		else if (file_check_ret == ASYNC_CHECK_ERROR)
			param->state = AUPDATE_CLEANUP;
		break;
	case AUPDATE_ERASE_EBF_CONFIG:
		UINFO("Erase EBF config stage\n");
		if (desc->update_flags & UPDATE_FLAG_ERASE_CONFIG) {
			update_ret = erase_ebf_config_data(desc);
			if (update_ret != UPDATE_OK)
				param->state = AUPDATE_CLEANUP;
			else
				param->state++;
		} else {
			param->state++;
		}
		break;
	case AUPDATE_ERASE_TIM0:
		UINFO("Erase TIM0 stage\n");
		update_ret = save_tim0(desc);
		if (update_ret == UPDATE_OK)
			update_ret = erase_tim0(desc);
		param->old_tim0_saved = (update_ret == UPDATE_OK);

		update_ret = get_tim0_from_update();
		param->tim0_updated = (update_ret == UPDATE_OK);
		param->state++;
		break;
	case AUPDATE_WRITE_FILES:
		UINFO("Write files stage\n");
		octeontx_write_files(desc, true);
		spi_async_start(async_update_callback, &aupdate_data);
		param->state++;
		break;
	case AUPDATE_RESTORE_TIM0:
		UINFO("Restore TIM0 stage\n");
		if (param->old_tim0_saved || param->tim0_updated) {
			UINFO("Writing TIM0\n");
			update_ret = restore_tim0(desc, false);
			if (update_ret != UPDATE_OK) {
				UERROR("Error writing TIM0\n");
				desc->retcode = update_ret;
				param->state = AUPDATE_CLEANUP;
				break;
			}
		} else {
			UERROR("Error: TIM0 was not saved or updated, cannot restore!\n");
			desc->retcode = UPDATE_MISSING_TIM;
			param->state = AUPDATE_CLEANUP;
			break;
		}
		param->state++;
		break;
	case AUPDATE_CLEANUP:
		UINFO("Cleanup stage\n");
		done_callback(&uParams);
		param->state++;
		ret = DC_RET_DONE;
		break;
	}

	return ret;
}

/**
 * Validates and updates the firmware in secure storage for CN10K.
 */
static int octeontx_cn10k_update_fw(struct smc_update_descriptor *desc,
				    struct unmap_params *p,
				    bool async_operation)
{
	int err;
	enum update_ret ret;
	bool all_present = false;
	const void *fw_image;
	size_t size;
	bool old_tim0_saved = false;
	bool tim0_updated = false;
	bool use_full_async = true;

	debug_fw_update("%s(%llx, %llx, 0x%x, 0x%x)\n",
			__func__, desc->image_addr,
			desc->image_size, desc->bus, desc->cs);
	debug_fw_update("%s: Updating %s flash\n", __func__,
			desc->update_flags & UPDATE_FLAG_EMMC ? "eMMC" : "SPI");

	tim0_size = 0;
	zeromem(tim0_buffer, sizeof(tim0_buffer));

	if (desc->retcode == 0)
		use_full_async = false;

	desc->retcode = 0;

	if (desc->async_operation && use_full_async) {
		UINFO("Full async update\n");
		memset(&aupdate_data, 0x00, sizeof(aupdate_data));
		aupdate_data.desc = desc;
		aupdate_data.state = AUPDATE_VERIF_IMAGE;
		spi_async_init_delayed();
		spi_async_start(async_update_callback, &aupdate_data);
		return UPDATE_OK;
	} else if (desc->async_operation && !use_full_async) {
		UINFO("Limited async update \n");
	}

	gti_wdog_pet();
	err = marvell_cust_verify_fw_update_image(desc);
	if (err) {
		UWARN("Customer verification failed\n");
		ret = UPDATE_AUTH_ERROR;
		goto error;
	}

	fw_image = (void *)desc->image_addr;
	size = desc->image_size;

	gti_wdog_pet();
	ret = firm_update_init(fw_image, size);
	if (ret != UPDATE_OK) {
		UWARN("Error parsing firmware\n");
		goto error;
	}

	gti_wdog_pet();
	UINFO("Processing TIMs in update file...\n");
	debug_fw_update("%s: Processing TIMs\n", __func__);
	ret = update_process_tims();
	if (ret != UPDATE_OK) {
		UWARN("Error parsing TIMs\n");
		goto error;
	}

	gti_wdog_pet();
	UINFO("Validating all objects are present in available groups...\n");
	debug_fw_update("%s: Checking groups\n", __func__);
	err = check_groups();
	if (err < 0) {
		ret = UPDATE_GROUP_ERROR;
		goto error;
	}
	all_present = (err == 1);

	gti_wdog_pet();
	UINFO("Validating objects...\n");
	ret = check_files();
	if (ret != UPDATE_OK)
		goto error;

	gti_wdog_pet();
	UINFO("Checking existing flash objects...\n");
	ret = check_flash_files(desc, all_present);
	if (ret != UPDATE_OK)
		goto error;

	gti_wdog_pet();
	UINFO("Reading and erasing existing TIM0\n");
	ret = save_tim0(desc);
	if (ret == UPDATE_OK)
		ret = erase_tim0(desc);
	old_tim0_saved = (ret == UPDATE_OK);

	gti_wdog_pet();
	ret = get_tim0_from_update();
	tim0_updated = (ret == UPDATE_OK);

	gti_wdog_pet();
	UINFO("Writing files to flash...\n");
	ret = octeontx_write_files(desc, async_operation);
	if (ret != UPDATE_OK)
		goto error;

	if (old_tim0_saved || tim0_updated) {
		UINFO("Writing TIM0\n");
		ret = restore_tim0(desc, async_operation);
		if (ret != UPDATE_OK) {
			UERROR("Error writing TIM0\n");
			goto error;
		}
	} else {
		UERROR("Error: TIM0 was not saved or updated, cannot restore!\n");
		ret = UPDATE_MISSING_TIM;
		goto error;
	}

	if (async_operation)
		spi_async_start(done_callback, p);

	UINFO("Firmware update done.\n");
error:
	return ret;
}

int spi_smc_update(uintptr_t desc_buf, uint64_t desc_size,
		   uint64_t dram_end, enum update_ret *uret)
{
	int err = 0, ns_map_size;
	struct smc_update_descriptor update_desc;
	struct smc_update_descriptor *update_desc_async_ptr;
	uintptr_t addr = 0, size = 0;
	uint32_t bus = 0, cs;
	uint64_t base_addr = 0;
	const uint64_t mask = ~((uint64_t)PAGE_SIZE_MASK);
	bool async_operation = false;
	struct io_handle io_handle;
	uintptr_t console_base_addr = 0;
	size_t console_map_size = 0;
	bool spi_unlock = false;

	assert(uret);
	prepare_mapping_storage(&uParams);
	debug_fw_update("desc: 0x%lx, desc size: 0x%llx, dram size: 0x%llx\n",
			desc_buf, desc_size, dram_end);
	/* Round up to page size */
	ns_map_size = (desc_size + PAGE_SIZE - 1) & -PAGE_SIZE;

	/* Map non-secure memory buffer */
	/* Note that this needs to be page aligned */
	base_addr = desc_buf & mask;
	/* If descriptor crosses a page boundary, allocate another page */
	if ((desc_buf + desc_size) > (base_addr + ns_map_size)) {
		debug_fw_update("0x%llx > 0x%llx, increasing map size by 0x%lx\n",
				desc_buf + desc_size, base_addr + ns_map_size,
				PAGE_SIZE);
		ns_map_size += PAGE_SIZE;
	}
	/* Do one final check */
	if (base_addr + ns_map_size >= dram_end) {
		WARN("Invalid descriptor address 0x%llx or size 0x%x\n",
		     base_addr, ns_map_size);
		err = -SPI_MMAP_ERR;
		goto error;
	}
	debug_fw_update("Adding descriptor mapping, address: 0x%lx, base: 0x%llx, map size: 0x%x\n",
			desc_buf, base_addr, ns_map_size);
	err = octeontx_mmap_add_dynamic_region_with_sync(base_addr, base_addr,
							 ns_map_size,
							 MT_RW | MT_NS);
	if (err) {
		ERROR("FW Update: descriptor mmap failed (%d)\n", err);
		err = -SPI_MMAP_ERR;
		goto error;
	}

	debug_fw_update("Copying descriptor from 0x%lx to 0x%p\n",
			desc_buf, &update_desc);
	update_desc_async_ptr = (struct smc_update_descriptor *) desc_buf;
	memcpy(&update_desc, (const void *)desc_buf, sizeof(update_desc));

	/* Currently the update flags are not used so we don't save them.
	 * We store the update error code in them, however, so we zero it here.
	 */
	*uret = UPDATE_OK;
	uParams.count = 0;
	if (!update_desc.async_operation)
		octeontx_mmap_remove_dynamic_region_with_sync(base_addr, ns_map_size);
	else
		add_mapped_region(&uParams, base_addr, ns_map_size);

	base_addr = 0;
	ns_map_size = 0;

	/* Sanity checks */
	err = SMC_UNK;
	if (update_desc.magic != UPDATE_MAGIC) {
		ERROR("Invalid magic value in descriptor\n");
		*uret = UPDATE_BAD_DESC_MAGIC;
		goto error;
	}

	/*
	 * NOTE: A lot more can be done to handle multiple versions for
	 * backwards compatibility, etc.
	 */
	if (update_desc.version < UPDATE_MIN_VERSION) {
		ERROR("Unsupported descriptor version 0x%x\n",
		     update_desc.version);
		*uret = UPDATE_BAD_DESC_VERSION;
		goto error;
	}
	if (update_desc.version >= UPDATE_LOG_VERSION &&
	    update_desc.output_console != 0 &&
	    update_desc.output_console_size > 0 &&
	    update_desc.update_flags & UPDATE_FLAG_LOG_PROGRESS) {
		console_base_addr = update_desc.output_console & mask;
		console_map_size = (update_desc.output_console_size + PAGE_SIZE - 1) & mask;
		err = octeontx_mmap_add_dynamic_region_with_sync(console_base_addr,
								 console_base_addr,
								 console_map_size,
								 MT_RW | MT_NS);
		if (err) {
			ERROR("FW Update: console mmap failed (%d)\n", err);
			err = -SPI_MMAP_ERR;
			goto error;
		}
		if (update_desc.async_operation) {
			add_mapped_region(&uParams, console_base_addr, console_map_size);
		}
		update_log = (char *)update_desc.output_console;
		log_bytes_used = 0;
		log_size_bytes = update_desc.output_console_size;
		zeromem(update_log, log_size_bytes);
	} else {
		update_log = NULL;
		log_size_bytes = 0;
		log_bytes_used = 0;
	}
	addr = update_desc.image_addr;
	size = update_desc.image_size;
	bus = update_desc.bus;
	cs = update_desc.cs;
	if (update_desc.async_operation != 0)
		async_operation = true;

	if ((bus > MAX_SPI_BUS) || (cs > MAX_SPI_CS)) {
		ULOG("Invalid bus 0x%x or chip select 0x%x\n", bus, cs);
		ERROR("Invalid bus 0x%x or chip select 0x%x\n", bus, cs);
		*uret = UPDATE_INVALID_MEDIA;
		goto error;
	}

	if ((addr < NS_IMAGE_BASE) || (addr > (dram_end - 1)) ||
	    (addr % sizeof(uint64_t)) || ((addr + size) > (dram_end - 1))) {
		ERROR("Invalid image address 0x%lx or size 0x%lx\n",
		     addr, size);
		*uret = UPDATE_BAD_ALIGNMENT;
		goto error;
	}

	if (plat_octeontx_bcfg->spi_cfg[bus].cs[cs] != 1) {
		ERROR("SPI BUS 0x%x chip select 0x%x is unavailable\n",
		     bus, cs);
		*uret = UPDATE_INVALID_MEDIA;
		goto error;
	}

	/* Round up to page size */
	ns_map_size = (size + PAGE_SIZE - 1) & -PAGE_SIZE;
	/* Make sure address is page aligned */
	base_addr = addr & mask;
	/* Add an extra page if this now exceeds the map size */
	if ((addr + size) > (base_addr + ns_map_size))
		ns_map_size += PAGE_SIZE;
	/* Do one final check */
	if (base_addr + ns_map_size >= dram_end) {
		WARN("Invalid image address 0x%lx or size 0x%lx\n", addr, size);
		*uret = UPDATE_MMAP_ERROR;
		return -SPI_MMAP_ERR;
	}
	debug_fw_update("Adding image mapping, address: 0x%lx, base: 0x%llx, map size: 0x%x\n",
			addr, base_addr, ns_map_size);
	err = octeontx_mmap_add_dynamic_region_with_sync(base_addr, base_addr,
							 ns_map_size,
							 MT_RO | MT_NS);
	if (err) {
		WARN("FW Update: Image mmap failed (%d)\n", err);
		*uret = UPDATE_MMAP_ERROR;
		err = -SPI_MMAP_ERR;
		base_addr = 0;
		ns_map_size = 0;
		goto error;
	}

	if (fdt_check_header(fdt_ptr)) {
		ERROR("Invalid device tree\n");
		*uret = UPDATE_DT_ERROR;
		err = -EINVAL;
		goto error;
	}

	fnode = fdt_path_offset(fdt_ptr, "/cavium,bdk/firmware-layout");
	if (fnode < 0) {
		ERROR("Error %d trying to access firmware layout in device tree\n",
		      fnode);
		*uret = UPDATE_DT_ERROR;
		err = -EINVAL;
		goto error;
	}

	add_mapped_region(&uParams, base_addr, ns_map_size);

	io_handle.dev_handle = &media_dev_handle;
	io_handle.io_handle = &media_handle;
	io_handle.spec = &media_spec;

	if (spi_dev_lock(bus)) {
		ERROR("%s: SPI_%d: Lock failed\n", __func__, bus);
		*uret = UPDATE_INVALID_MEDIA;
		goto error;
	}
	spi_unlock = true;

	err = setup_media(&io_handle, &update_desc);
	if (err) {
		*uret = err;
		goto error;
	}

	if (update_desc.update_flags & UPDATE_FLAG_ERASE_CONFIG) {
		*uret = erase_ebf_config_data(&update_desc);
		if (*uret != UPDATE_OK) {
			ERROR("Erasing EBF configuration failed\n");
			err = -EINVAL;
			goto error;
		}
	}

	if (!update_desc.async_operation)
		*uret = octeontx_cn10k_update_fw(&update_desc, &uParams, async_operation);
	else
		*uret = octeontx_cn10k_update_fw(update_desc_async_ptr, &uParams, async_operation);

	if (*uret != UPDATE_OK) {
		ERROR("Firmware update failed\n");
		err = -EINVAL;
		goto error;
	}

error:
	/* unmap non-secure memory buffer */
	if (err) {
		media_done(&io_handle);
		if (base_addr && ns_map_size)
			octeontx_mmap_remove_dynamic_region_with_sync(base_addr,
								      ns_map_size);
		/* In async case - make sure everything is unmapped */
		if (async_operation) {
			update_desc_async_ptr->retcode = *uret;
			done_callback(&uParams);
			return *uret;
		}

	} else if (!async_operation) {
		media_done(&io_handle);
		octeontx_mmap_remove_dynamic_region_with_sync(base_addr,
							      ns_map_size);
		if (console_base_addr != 0 && console_map_size != 0) {
			update_log[log_size_bytes - 1] = '\0';
			octeontx_mmap_remove_dynamic_region_with_sync(console_base_addr,
							      console_map_size);
		}
		update_log = NULL;
		log_bytes_used = 0;
		log_size_bytes = 0;
	}

	if (spi_unlock)
		spi_dev_unlock(bus);

	return err;
}

/**
 * Read data from flash for CN10K.
 */
static int cn10k_read_flash(struct smc_read_flash_descriptor *desc,
			    struct unmap_params *p,
			    bool async_operation)
{
	int err = 0;
	void *buffer;
	size_t size;

	debug_fw_update("%s(%llx, %llx, %llx, 0x%x, 0x%x)\n",
			__func__, desc->addr,
			desc->length, desc->offset, desc->bus, desc->cs);
	buffer = (void *)desc->addr;
	size = desc->length;

	gti_wdog_pet();
	INFO("Reading Data\n");
	err = spi_async_init_delayed();

	gti_wdog_pet();
	spi_async_add_block_read(desc->bus, desc->cs, desc->offset, buffer, size, NULL, NULL);
	gti_wdog_pet();
	if (async_operation)
		spi_async_start(done_callback, p);

	INFO("Done.\n");
	return err;
}

int spi_smc_read_flash(uintptr_t desc_buf, uint64_t desc_size)
{
	int err = 0, ns_map_size;
	struct smc_read_flash_descriptor read_desc;
	uintptr_t addr = 0, size = 0;
	uint32_t bus, cs;
	uint64_t base_addr = 0;
	const uint64_t mask = ~((uint64_t)PAGE_SIZE_MASK);
	bool async_operation = false;

	debug_fw_update("desc: 0x%lx, desc size: 0x%llx\n",
			desc_buf, desc_size);
	/* Round up to page size */
	ns_map_size = (desc_size + PAGE_SIZE - 1) & -PAGE_SIZE;

	/* Map non-secure memory buffer */
	/* Note that this needs to be page aligned */
	base_addr = desc_buf & mask;
	/* If descriptor crosses a page boundary, allocate another page */
	if ((desc_buf + desc_size) > (base_addr + ns_map_size)) {
		debug_fw_update("0x%llx > 0x%llx, increasing map size by 0x%lx\n",
				desc_buf + desc_size, base_addr + ns_map_size,
				PAGE_SIZE);
		ns_map_size += PAGE_SIZE;
	}
	debug_fw_update("Adding descriptor mapping, address: 0x%lx, base: 0x%llx, map size: 0x%x\n",
			desc_buf, base_addr, ns_map_size);
	err = octeontx_mmap_add_dynamic_region_with_sync(base_addr, base_addr,
							 ns_map_size,
							 MT_RO | MT_NS);
	if (err) {
		ERROR("Read Flash: descriptor mmap failed (%d)\n", err);
		err = -SPI_MMAP_ERR;
		goto error;
	}

	debug_fw_update("Copying descriptor from 0x%lx to 0x%p\n",
			desc_buf, &read_desc);
	memcpy(&read_desc, (const void *)desc_buf, sizeof(read_desc));

	octeontx_mmap_remove_dynamic_region_with_sync(base_addr, ns_map_size);
	base_addr = 0;
	ns_map_size = 0;

	addr = read_desc.addr;
	size = read_desc.length;
	bus = read_desc.bus;
	cs = read_desc.cs;
	if (read_desc.async_spi != 0)
		async_operation = true;

	if ((bus > MAX_SPI_BUS) || (cs > MAX_SPI_CS)) {
		ERROR("Invalid bus 0x%x or chip select 0x%x\n", bus, cs);
		goto error;
	}

	if (plat_octeontx_bcfg->spi_cfg[bus].cs[cs] != 1) {
		ERROR("SPI BUS 0x%x chip select 0x%x is unavailable\n",
		     bus, cs);
		goto error;
	}

	/* Round up to page size */
	ns_map_size = (size + PAGE_SIZE - 1) & -PAGE_SIZE;
	/* Make sure address is page aligned */
	base_addr = addr & mask;
	/* Add an extra page if this now exceeds the map size */
	if ((addr + size) > (base_addr + ns_map_size))
		ns_map_size += PAGE_SIZE;
	debug_fw_update("Adding image mapping, address: 0x%lx, base: 0x%llx, map size: 0x%x\n",
			addr, base_addr, ns_map_size);
	err = octeontx_mmap_add_dynamic_region_with_sync(base_addr, base_addr,
							 ns_map_size,
							 MT_RW | MT_NS);
	if (err) {
		WARN("Read Flash: Image mmap failed (%d)\n", err);
		return -SPI_MMAP_ERR;
	}

	uParams.count = 1;
	uParams.p[0].ns_map_size = ns_map_size;
	uParams.p[0].base_addr = base_addr;

	err = cn10k_read_flash(&read_desc, &uParams, async_operation);
	if (err != 0) {
		ERROR("Read Flash Data failed\n");
		goto error;
	}

error:

	/* unmap non-secure memory buffer */
	if (err) {
		if (base_addr && ns_map_size)
			octeontx_mmap_remove_dynamic_region_with_sync(base_addr,
								ns_map_size);
	} else if (!async_operation) {
		octeontx_mmap_remove_dynamic_region_with_sync(base_addr,
								ns_map_size);
	}

	return err;
}

/**
 * Reads a TIM and obtains version information and optionally verify the hash
 *
 * @param	vinfo		version info descriptor pointer
 * @param	ventry		current entry in the version info descriptor
 * @param	udesc		Update descriptor for media information
 * @param	flash_addr	Address to check
 * @param	size		Maximum size of object, set to 0 for tim0
 * @param[out]	tim_size	Size of TIM in bytes
 *
 * @return	status of operation
 *
 * NOTE: This will update the version entry after extracting the TIM and
 * optionally verifying the data stored in flash.  TIM0 is a special case,
 * since the size in the device tree is the maximum size for the TIM and
 * not the object it is pointing to (scp_bl1).  In this case, the size
 * is set to zero.  Note that this is limited to the tim_buffer size
 * which is currently set for 16K to handle TIM0 (which potentially can be
 * even larger).  Most TIMs are limited to 4K in size.
 */
static int check_get_version(struct smc_version_info *vinfo,
			     struct smc_version_info_entry *ventry,
			     struct smc_update_descriptor *udesc,
			     uint64_t flash_addr, size_t size,
			     uint32_t *tim_size)
{
	struct tim_handle *thdl = &_tim_handle;
	struct tim_load_info *tli = &_tim_load_info;
	enum tim_return tret;
	enum update_ret uret;
	int ret;
	uint8_t digest[EHSM_MAX_HASH_SIZE_BYTES];
	int hash_size = 0;
	size_t max_read_size = size ? TIM_MAX_SIZE : sizeof(tim_buffer);

	assert(sizeof(tim_buffer) >= TIM_MAX_SIZE);
	ventry->retcode = RET_OK;
	uret = octeontx_read_tim(udesc, flash_addr, max_read_size,
				 tim_buffer, thdl, NULL);
	if (uret == UPDATE_MISSING_TIM) {
		ventry->retcode = RET_NOT_FOUND;
		VLOG(ventry, "TIM not found.");
		return RET_NOT_FOUND;
	}
	if (uret != UPDATE_OK) {
		ventry->retcode = RET_TIM_INVALID;
		WARN("Invalid TIM found for object at %llx\n", flash_addr);
		return RET_TIM_INVALID;
	}
	if (tim_size)
		*tim_size = tim_get_tim_size(thdl, 0);
	tret = tim_get_load_info(thdl, tli);
	if (tret == TIM_NO_LOAD_INFO) {
		/*
		* The default PCIe default endpoint TIM does not have a
		* data object associated with it.
		*/
		ventry->object_size = 0;
		ventry->object_address = 0;
		tret = tim_get_version_info(thdl, &ventry->version);
		if (tret != TIM_NO_ERROR) {
			VLOG(ventry, "%s is missing version information in the TIM",
			     ventry->name);
			ventry->retcode = RET_TIM_NO_VERSION;
			return RET_TIM_NO_VERSION;
		}
		return 0;
	} else if (tret != TIM_NO_ERROR) {
		ventry->retcode = RET_TIM_INVALID;
		VLOG(ventry, "The TIM for %s is missing the load information",
		     ventry->name);
		return RET_TIM_INVALID;
	} else {
		if (size && tli->image_length > size) {
			ventry->retcode = RET_IMAGE_TOO_BIG;
			ventry->object_size = tli->image_length;
			VLOG(ventry,
			     "Reported TIM size 0x%x for %s is larger than maximum size 0x%lx",
			     tli->image_length, ventry->name, size);
			return RET_IMAGE_TOO_BIG;
		}
		ventry->object_size = tli->image_length;
		ventry->object_address = tli->src_address;
	}
	tret = tim_get_version_info(thdl, &ventry->version);
	if (tret != TIM_NO_ERROR) {
		VLOG(ventry, "%s is missing version information in the TIM",
		     ventry->name);
		ventry->retcode = RET_TIM_NO_VERSION;
		return RET_TIM_NO_VERSION;
	}

	ventry->name[VER_MAX_NAME_LENGTH - 1] = '\0';
	if (vinfo->version_flags & SMC_VERSION_CHECK_SPECIFIC_OBJECTS) {
		if (strcmp(ventry->name, tli->data_filename)) {
			VLOG(ventry,
			     "TIM name %s does not match passed name %s",
			     ventry->name, tli->data_filename);
			ventry->retcode = RET_NAME_MISMATCH;
			strlcpy(ventry->name, tli->data_filename,
				sizeof(ventry->name));
			return RET_NAME_MISMATCH;
		}
	} else {
		strlcpy(ventry->name, tli->data_filename, sizeof(ventry->name));
	}
	if (tli->hshi_parsed) {
		ventry->hash_size = tli->hash_size;
		memcpy(ventry->tim_hash, tli->hash_data, tli->hash_size);
	} else {
		VLOG(ventry, "No hash found in TIM");
		ventry->retcode = RET_TIM_NO_HASH;
		WARN("No hash found in TIM for %s\n", tli->data_filename);
	}

	if (vinfo->version_flags & SMC_VERSION_CHECK_VALIDATE_HASH) {
		INFO("Validating hash for %s at  offset 0x%llx\n",
		     ventry->name, ventry->object_address);
		if (!tli->hshi_parsed) {
			ventry->retcode = RET_TIM_NO_HASH;
			VLOG(ventry, "Hash not present in TIM");
			return RET_TIM_NO_HASH;
		}
		zeromem(digest, sizeof(digest));
		ret = verify_hash(udesc, tli, digest, &hash_size);
		memcpy(ventry->obj_hash, digest, hash_size);
		if (ret == -EAUTH) {
			VLOG(ventry, "%s hash in TIM does not match object",
			     ventry->name);
			ventry->retcode = RET_HASH_NO_MATCH;
			return RET_HASH_NO_MATCH;
		} else if (ret < 0) {
			VLOG(ventry, "eHSM hash engine error %d", ret);
			ventry->retcode = RET_HASH_NO_MATCH;
			return RET_HASH_ENGINE_ERROR;
		}
	}
	return 0;
}

/**
 * Copy an object from one device to another
 *
 * @param[in]	src_descr	Source media descriptor
 * @param[in]	dst_descr	Destination media descriptor
 * @param	src_object_addr	Address of source object on source media
 * @param	src_object_size	Size of source object on source media
 * @param	src_tim_addr	Address of TIM on source media
 * @param	src_tim_size	Size of TIM on source media
 * @param	dst_object_addr	Address to copy object to on destination media
 * @param	dst_tim_addr	Address to copy TIM to on destination media
 *
 * @return	VERSION_OK if no error, otherwise the appropriate I/O error
 */
enum smc_version_ret
flash_copy_object(struct io_handle *src_handle, struct io_handle *dst_handle,
		      uint64_t src_object_addr, size_t src_object_size,
		      uint64_t src_tim_addr, size_t src_tim_size)
{
	int ret;
	size_t bytes_left, read_size;
	size_t offset;

	bytes_left = src_object_size;
	offset = src_object_addr;

	/* Copy object first */
	while (bytes_left) {
		read_size = (bytes_left < sizeof(tim_buffer)) ?
						bytes_left : sizeof(tim_buffer);
		ret = octeontx_io_data_read(src_handle, offset,
					    read_size, tim_buffer);
		if (ret) {
			INFO("I/O error reading TIM object at offset 0x%lx\n",
			     offset);
			return BACKUP_IO_SRC_ERROR;
		}
		ret = octeontx_io_data_write(dst_handle, offset, read_size,
					     tim_buffer);
		if (ret) {
			INFO("I/O error writing 0x%lx bytes to object at offset 0x%lx\n",
			     read_size, offset);
			return BACKUP_IO_DST_ERROR;
		}
		offset += read_size;
		bytes_left -= read_size;
	}

	bytes_left = src_tim_size;
	offset = src_tim_addr;

	while (bytes_left) {
		read_size = (bytes_left < sizeof(tim_buffer)) ?
						bytes_left : sizeof(tim_buffer);
		ret = octeontx_io_data_read(src_handle, offset,
					 read_size, tim_buffer);
		if (ret) {
			INFO("I/O error reading TIM at offset 0x%lx\n",
			     offset);
			return BACKUP_IO_SRC_ERROR;
		}
		ret = octeontx_io_data_write(dst_handle, offset, read_size,
					     tim_buffer);
		if (ret) {
			INFO("I/O error writing 0x%lx bytes to TIM at offset 0x%lx\n",
			     read_size, offset);
			return BACKUP_IO_DST_ERROR;
		}
		offset += read_size;
		bytes_left -= read_size;
	}
	return VERSION_OK;
}

/**
 * Copy objects to a backup location
 *
 * @param	vinfo	Version info descriptor
 *
 * @return	status of backup operation
 *
 * NOTE: This must be called after a full verification test with vinfo.
 * It depends on all of the fields being properly filled out during the
 * verification stage.
 *
 * If an error occurs when writing to the destination then it will attempt
 * to erase ALL of the TIMs in the group for the destination to prevent
 * using it for booting.
 */
static enum smc_version_ret
flash_smc_copy_objects(struct smc_version_info *vinfo)
{
	int err = VERSION_OK;
	int i;
	struct smc_version_info_entry *ventry;
	struct smc_version_info_entry *tim0_ventry = NULL;
	struct smc_update_descriptor src_desc, dst_desc;
	struct io_handle src_io, dest_io;
	uint32_t src_offset, dst_offset;
	enum update_ret uret;

	/* See if we're backing things up. */
	if (!(vinfo->version_flags & (SMC_VERSION_COPY_TO_BACKUP_EMMC |
				      SMC_VERSION_COPY_TO_BACKUP_FLASH)))
		return 0;

	if (!(vinfo->version_flags & SMC_VERSION_CHECK_VALIDATE_HASH)) {
		INFO("Error: source not verified!\n");
		vinfo->retcode = BACKUP_SRC_NOT_VALIDATED;
		return -1;
	}

	/* Make sure the source and destination differ */
	if (!!(vinfo->version_flags & VERSION_FLAG_BACKUP) ==
		!!(vinfo->version_flags & SMC_VERSION_COPY_TO_BACKUP_OFFSET) &&
	    (vinfo->cs == vinfo->target_cs) &&
	    (vinfo->bus == vinfo->target_bus) &&
	    (!!(vinfo->version_flags & VERSION_FLAG_EMMC) ==
		!!(vinfo->version_flags & SMC_VERSION_COPY_TO_BACKUP_EMMC))) {
		INFO("Error: source and destination are the same for backup\n");
		return BACKUP_SRC_AND_DEST_ARE_SAME;
	}

	zeromem(&src_desc, sizeof(src_desc));
	zeromem(&dst_desc, sizeof(dst_desc));

	src_desc.bus = vinfo->bus;
	src_desc.cs = vinfo->cs;

	if (vinfo->version_flags & VERSION_FLAG_BACKUP) {
		INFO("Source is from backup offset\n");
		src_desc.update_flags |= UPDATE_FLAG_BACKUP;
	}
	if (vinfo->version_flags & VERSION_FLAG_EMMC)
		src_desc.update_flags |= UPDATE_FLAG_EMMC;

	dst_desc.bus = vinfo->target_bus;
	dst_desc.cs = vinfo->target_cs;

	if (vinfo->version_flags & SMC_VERSION_COPY_TO_BACKUP_EMMC)
		dst_desc.update_flags |= UPDATE_FLAG_EMMC;
	if (vinfo->version_flags & SMC_VERSION_COPY_TO_BACKUP_OFFSET) {
		INFO("Destination is to backup offset\n");
		dst_desc.update_flags |= UPDATE_FLAG_BACKUP;
	}

	/* Check all entry return codes */
	for (i = 0; i < vinfo->num_objects; i++) {
		ventry = &vinfo->objects[i];
		if (ventry->retcode != RET_OK) {
			INFO("Error backing up: Object %s failed verification\n",
			     ventry->name);
			return BACKUP_SRC_FAILED_VALIDATION;
		}
	}
	/* Verify groups */
	/* TODO  */

	VERBOSE("Copying objects from %s%s %u:%u to %s%s %u:%u\n",
		src_desc.update_flags & UPDATE_FLAG_BACKUP ? "backup " : "",
		src_desc.update_flags & UPDATE_FLAG_EMMC ? "eMMC" : "SPI",
		src_desc.bus, src_desc.cs,
		dst_desc.update_flags & UPDATE_FLAG_BACKUP ? "backup " : "",
		dst_desc.update_flags & UPDATE_FLAG_EMMC ? "eMMC" : "SPI",
		dst_desc.bus, dst_desc.cs);

	zeromem(&src_io, sizeof(src_io));
	src_io.dev_handle = &media_dev_handle;
	src_io.io_handle = &media_handle;
	src_io.spec = &media_spec;
	uret = setup_media(&src_io, &src_desc);
	if (uret != UPDATE_OK) {
		vinfo->retcode = BACKUP_IO_SRC_ERROR;
		err = uret;
		goto src_io_error;
	}

	zeromem(&dest_io, sizeof(dest_io));
	/*
	 * If the source and destination are the same device then we use
	 * the same device I/O handle and separate I/O handles.
	 */
	if ((src_desc.update_flags & UPDATE_FLAG_EMMC) ==
	    (dst_desc.update_flags & UPDATE_FLAG_EMMC))
		dest_io.dev_handle = src_io.dev_handle;
	else
		dest_io.dev_handle = &target_dev_handle;

	dest_io.io_handle = &target_handle;
	dest_io.spec = &target_spec;
	uret = setup_media(&dest_io, &dst_desc);
	if (uret != UPDATE_OK) {
		vinfo->retcode = BACKUP_IO_DST_ERROR;
		err = uret;
		goto dest_io_error;
	}
	src_offset = src_desc.update_flags & UPDATE_FLAG_BACKUP ?
				BACKUP_IMAGE_OFFSET : 0;
	dst_offset = dst_desc.update_flags & UPDATE_FLAG_BACKUP ?
				BACKUP_IMAGE_OFFSET : 0;

	/* Save source TIM0 */
	uret = save_tim0(&src_desc);
	if (uret != UPDATE_OK) {
		ERROR("Could not save tim0 from source media\n");
		err = uret;
		vinfo->retcode = BACKUP_IO_SRC_ERROR;
		goto src_io_error;
	}
	/* Always erase the destination tim0 first */
	uret = erase_tim0(&dst_desc);
	if (uret != UPDATE_OK) {
		ERROR("Could not erase destination media tim0\n");
		err = uret;
		vinfo->retcode = BACKUP_IO_DST_ERROR;
		goto dest_io_error;
	}

	/* Copy entries */
	for (i = 0; i < vinfo->num_objects; i++) {
		ventry = &vinfo->objects[i];

		/* do not clone if same image is on second bootflash
		 * If any image is marked to update, tim0 must be updated too
		 */
		if (!ventry->perform_clone && strcmp(ventry->name, TIM0_FDT_NAME)) {
			VERBOSE("Skipping image: %s\n", ventry->name);
			continue;
		}

		/* Skip writing TIM0 (object OK) for now. */
		if (strcmp(ventry->name, TIM0_FDT_NAME)) {
			VERBOSE("Copying %s from %s %u:%u TIM offset 0x%llx, offset 0x%llx to %s %u:%u TIM offset 0x%llx, offset 0x%llx\n",
				ventry->name,
				src_desc.update_flags & UPDATE_FLAG_EMMC ? "eMMC" : "SPI NOR",
				src_desc.bus, src_desc.cs,
				ventry->tim_address + src_offset,
				ventry->object_address + src_offset,
				dst_desc.update_flags & UPDATE_FLAG_EMMC ? "eMMC" : "SPI NOR",
				dst_desc.bus, dst_desc.cs,
				ventry->tim_address + dst_offset,
				ventry->object_address + dst_offset);
			err = flash_copy_object(&src_io, &dest_io,
						ventry->object_address,
						ventry->object_size,
						ventry->tim_address,
						ventry->tim_size);
		} else {
			/*
			 * For tim0 we only copy the data object.  The TIM
			 * will be copied last.
			 */
			VERBOSE("Copying %s from %s %u:%u, offset 0x%llx to %s %u:%u, offset 0x%llx\n",
				ventry->name,
				src_desc.update_flags & UPDATE_FLAG_EMMC ? "eMMC" : "SPI NOR",
				src_desc.bus, src_desc.cs,
				ventry->object_address + src_offset,
				dst_desc.update_flags & UPDATE_FLAG_EMMC ? "eMMC" : "SPI NOR",
				dst_desc.bus, dst_desc.cs,
				ventry->object_address + dst_offset);
			tim0_ventry = ventry;
			err = flash_copy_object(&src_io, &dest_io,
						ventry->object_address,
						ventry->object_size,
						0,
						0);
		}
		if (err) {
			INFO("Error copying object %s to backup storage\n",
			     ventry->name);
			ventry->retcode = RET_BACKUP_IO_ERROR;
			vinfo->retcode = err;
			break;
		}
	}

	if (tim0_ventry) {
		VERBOSE("Copying %s from %s %u:%u TIM0 offset 0x%llx to %s %u:%u TIM0 offset 0x%llx\n",
			tim0_ventry->name,
			src_desc.update_flags & UPDATE_FLAG_EMMC ? "eMMC" : "SPI NOR",
			src_desc.bus, src_desc.cs,
			tim0_ventry->tim_address + src_offset,
			dst_desc.update_flags & UPDATE_FLAG_EMMC ? "eMMC" : "SPI NOR",
			dst_desc.bus, dst_desc.cs,
			tim0_ventry->tim_address + dst_offset);
		err = flash_copy_object(&src_io, &dest_io,
				0, 0,
				tim0_ventry->tim_address,
				tim0_ventry->tim_size);
		if (err) {
			INFO("Error copying %s to backup storage\n",
			     ventry->name);
			tim0_ventry->retcode = RET_BACKUP_IO_ERROR;
			vinfo->retcode = err;
			goto dest_io_error;
		}
		vinfo->retcode = RET_OK;
	}
	if (uret != UPDATE_OK) {
		err = uret;
		ERROR("Could not write tim0 to destination\n");
		vinfo->retcode = BACKUP_IO_DST_ERROR;
	} else {
		vinfo->retcode = RET_OK;
	}

dest_io_error:
	/*
	 * If there is an error writing to the destination, attempt to
	 * erase the destination TIM.
	 */
	if (err == BACKUP_IO_DST_ERROR || err == BACKUP_IO_ERASE_ERROR) {
		for (i = 0; i < vinfo->num_objects; i++) {
			ventry = &vinfo->objects[i];
			INFO("Erasing backup target TIM %s at offset 0x%llx\n",
			     ventry->name, ventry->tim_address);
			octeontx_erase_data(&dst_desc,
					    ventry->tim_address,
					    SPI_NOR_ERASE_SIZE);

		}
	}
	media_done(&dest_io);

src_io_error:
	media_done(&src_io);
	return err;
}

static int update_vinfo(struct verification_data *hash_data)
{
	int err;
	uint64_t size;
	uint32_t tim_size = 0;
	struct smc_version_info_entry *ventry =
			&(hash_data->vinfo->objects[hash_data->ventry_counter]);

	if (!strcmp(ventry->name, "tim0"))
		size = 0;
	else
		size = ventry->max_size;
	err = check_get_version(hash_data->vinfo, ventry, &hash_data->udesc,
				ventry->tim_address, size,
				&tim_size);
	ventry->tim_size = tim_size;
	ventry->retcode = err;
	hash_data->ventry_counter++;

	return 0;
}

static int check_tim(struct smc_version_info *vinfo,
			     struct smc_version_info_entry *ventry,
			     struct io_handle *io,
			     uint64_t flash_addr, size_t size,
			     uint32_t *tim_size)
{
	struct tim_handle *thdl = &_tim_handle;
	struct tim_load_info *tli = &_tim_load_info;
	enum tim_return tret;
	enum update_ret uret;
	size_t max_read_size = size ? TIM_MAX_SIZE : sizeof(tim_buffer);

	assert(sizeof(tim_buffer) >= TIM_MAX_SIZE);
	ventry->retcode = RET_OK;
	uret = octeontx_read_tim_io(io, flash_addr, max_read_size,
				tim_buffer, thdl, NULL);
	if (uret == UPDATE_MISSING_TIM) {
		ventry->retcode = RET_NOT_FOUND;
		VLOG(ventry, "TIM not found.");
		return RET_NOT_FOUND;
	}
	if (uret != UPDATE_OK) {
		ventry->retcode = RET_TIM_INVALID;
		WARN("Invalid TIM found for object at %llx\n", flash_addr);
		return RET_TIM_INVALID;
	}
	if (tim_size)
		*tim_size = tim_get_tim_size(thdl, 0);
	tret = tim_get_load_info(thdl, tli);
	if (tret == TIM_NO_LOAD_INFO) {
		/*
		 * The default PCIe default endpoint TIM does not have a
		 * data object associated with it.
		 */
		ventry->object_size = 0;
		ventry->object_address = 0;
		tret = tim_get_version_info(thdl, &ventry->version);
		if (tret != TIM_NO_ERROR) {
			VLOG(ventry, "%s is missing version information in the TIM",
			     ventry->name);
			ventry->retcode = RET_TIM_NO_VERSION;
			return RET_TIM_NO_VERSION;
		}
		return 0;
	} else if (tret != TIM_NO_ERROR) {
		ventry->retcode = RET_TIM_INVALID;
		VLOG(ventry, "The TIM for %s is missing the load information",
		     ventry->name);
		return RET_TIM_INVALID;
	} else {
		if (size && tli->image_length > size) {
			ventry->retcode = RET_IMAGE_TOO_BIG;
			ventry->object_size = tli->image_length;
			VLOG(ventry,
			     "Reported TIM size 0x%x for %s is larger than maximum size 0x%lx",
			     tli->image_length, ventry->name, size);
			return RET_IMAGE_TOO_BIG;
		}
		ventry->object_size = tli->image_length;
		ventry->object_address = tli->src_address;
	}
	tret = tim_get_version_info(thdl, &ventry->version);
	if (tret != TIM_NO_ERROR) {
		VLOG(ventry, "%s is missing version information in the TIM",
		     ventry->name);
		ventry->retcode = RET_TIM_NO_VERSION;
		return RET_TIM_NO_VERSION;
	}

	ventry->name[VER_MAX_NAME_LENGTH - 1] = '\0';
	if (vinfo->version_flags & SMC_VERSION_CHECK_SPECIFIC_OBJECTS) {
		if (strcmp(ventry->name, tli->data_filename)) {
			VLOG(ventry,
			     "TIM name %s does not match passed name %s",
			     ventry->name, tli->data_filename);
			ventry->retcode = RET_NAME_MISMATCH;
			strlcpy(ventry->name, tli->data_filename,
				sizeof(ventry->name));
			return RET_NAME_MISMATCH;
		}
	} else {
		strlcpy(ventry->name, tli->data_filename, sizeof(ventry->name));
	}
	if (tli->hshi_parsed) {
		ventry->hash_size = tli->hash_size;
		memcpy(ventry->tim_hash, tli->hash_data, tli->hash_size);
	} else {
		VLOG(ventry, "No hash found in TIM");
		ventry->retcode = RET_TIM_NO_HASH;
		WARN("No hash found in TIM for %s\n", tli->data_filename);
		return RET_TIM_NO_HASH;
	}

	return 0;
}

static int verify_hash_block(void *ptr)
{
	struct verification_data *data = (struct verification_data *)ptr;
	struct tim_load_info *linfo = &_tim_load_info;
	uint64_t blk_size = sizeof(tim_buffer);
	int ret = 0;

	if (!data->hash_started) {
		data->read_offset = linfo->src_address;
		data->size = linfo->image_length;
		ret = ehsm_verify_init(linfo, &data->ehdl);
		if (ret) {
			UERROR("Error initializing hash verification: %d\n", ret);
			return SPI_OP_CALLBACK_ERROR;
		}
		data->hash_started = true;
	}

	if (data->size > blk_size) {
		octeontx_io_data_read(&data->io, data->read_offset, blk_size, tim_buffer);
		ehsm_verify_update(&data->ehdl, tim_buffer, blk_size);
		data->read_offset += blk_size;
		data->size -= blk_size;

		return SPI_OP_CALLBACK_CONTINUE;
	}
	if (data->size) {
		octeontx_io_data_read(&data->io, data->read_offset, data->size, tim_buffer);
		data->hashret = ehsm_verify_final(&data->ehdl, tim_buffer, data->size,
						  linfo, data->digest,
						  &data->hash_size);
		data->size = 0;
		return SPI_OP_CALLBACK_CONTINUE;
	}

	memcpy(data->ventry->obj_hash, data->digest, data->hash_size);

	if (data->hashret == -EAUTH) {
		UERROR("Detected corrupt flash image for %s\n",
		      linfo->data_filename);
	} else if (data->hashret != 0) {
		UERROR("ADSD %d finalizing verification for %s\n",
		       ret, linfo->data_filename);
	}

	return SPI_OP_CALLBACK_FINISHED;
}

static int init_hash_verification(void *ptr) {
	int err;
	struct verification_data *data = (struct verification_data *)ptr;
	struct smc_version_info_entry *ventry = &(data->vinfo->objects[data->ventry_counter]);
	uint64_t size;
	uint32_t tim_size = 0;

	data->ventry = ventry;

	if (!strcmp(ventry->name, "tim0"))
		size = 0;
	else
		size = ventry->max_size;

	err = check_tim(data->vinfo,
			ventry,
			&data->io,
			ventry->tim_address, size,
			&tim_size);

	ventry->tim_size = tim_size;
	ventry->retcode = err;
	data->ventry_counter++;
	data->hash_started = false;

	if (err)
		return SPI_OP_CALLBACK_ERROR;

	if (data->vinfo->version_flags & SMC_VERSION_CHECK_VALIDATE_HASH)
		return SPI_OP_CALLBACK_CONTINUE;
	else
		return SPI_OP_CALLBACK_FINISHED;
}

static int prepare_vinfo(struct smc_version_info *vinfo, struct verification_data *vdata)
{
	const char *name;
	const char *type;
	const int ms_to_us = 1000;

	int err, i, len;
	int obj_num = 0;
	int timeout = vinfo->timeout;

	int node;
	struct smc_update_descriptor *udesc = &vdata->udesc;
	struct smc_version_info_entry *ventry;

	bool async_enabled = false;
	bool is_root_tim = false;

	if (vinfo->version_flags & SMC_VERSION_ASYNC_OPERATION)
		async_enabled = true;

	/* The TIM code expects an update descriptor */
	zeromem(udesc, sizeof(udesc));
	udesc->bus = vinfo->bus;
	udesc->cs = vinfo->cs;
	if (vinfo->version_flags & VERSION_FLAG_EMMC)
		udesc->update_flags |= UPDATE_FLAG_EMMC;
	if (vinfo->version_flags & VERSION_FLAG_BACKUP)
		udesc->update_flags |= UPDATE_FLAG_BACKUP;

	zeromem(&vdata->io, sizeof(vdata->io));

	if (async_enabled) {
		vdata->io.dev_handle = &vdata->media_dev_handle;
		vdata->io.io_handle = &vdata->media_handle;
		vdata->io.spec = &vdata->media_spec;
	} else {
		vdata->io.dev_handle = &media_dev_handle;
		vdata->io.io_handle = &media_handle;
		vdata->io.spec = &media_spec;
	}
	if (setup_media(&vdata->io, udesc)) {
		vinfo->retcode = INVALID_DEVICE_TREE;
		return -1;
	}

	if (vinfo->version_flags & SMC_VERSION_CHECK_SPECIFIC_OBJECTS) {
		debug_fw_update("Checking  version info for specified objects\n");
		for (i = 0; i < vinfo->num_objects; i++) {
			size_t osize;

			ventry = &vinfo->objects[i];
			zeromem(ventry->log, sizeof(ventry->log));

			/* Make sure NULL terminated */
			ventry->name[VER_MAX_NAME_LENGTH - 1] = '\0';
			err = get_object_info_from_fdt(ventry->name,
						       &ventry->tim_address,
						       &osize, &is_root_tim,
						       NULL);
			ventry->max_size = osize;
			if (err == -ENODEV) {
				ventry->retcode = RET_NOT_FOUND;
				VLOG(ventry,
				     "Could not find %s at address %llx",
				     ventry->name, ventry->tim_address);
				continue;
			} else if (err != 0) {
				VLOG(ventry,
				     "Could not find %s in the firmware-layout device tree",
				     ventry->name);
				vinfo->retcode = INVALID_DEVICE_TREE;
				return -1;
			}
		}
	} else {
		debug_fw_update("Checking version information for all objects\n");

		ventry = &vinfo->objects[0];
		fdt_for_each_subnode(node, fdt_ptr, fnode) {
			const uint32_t *addr_size;
			size_t osize;

			type = fdt_getprop(fdt_ptr, node, "type", NULL);
			if (!type) {
				name = fdt_get_name(fdt_ptr, node, NULL);
				WARN("Missing type for FDT node %s\n",
				     name ? name : "UNKNOWN");
			}
			if (!strcmp(type, "root-tim")) {
				INFO("Found ROOT TIM\n");
				is_root_tim = true;
			} else if (strcmp(type, "firmware")) {
				INFO("Skipping non-firmware entry\n");
				continue;
			}
			name = fdt_getprop(fdt_ptr, node, "description", &len);
			if (!name || len < 0) {
				name = fdt_get_name(fdt_ptr, node, NULL);
				WARN("Missing description field for FDT node %s\n",
				     name ? name : "UNKNOWN");
				continue;
			}

			zeromem(ventry->log, sizeof(ventry->log));
			strlcpy(ventry->name, name, sizeof(ventry->name));

			ventry->retcode = RET_OK;
			ventry->name[sizeof(ventry->name) - 1] = '\0';
			addr_size = fdt_getprop(fdt_ptr, node, "reg", &len);
			if (!addr_size || len != 8) {
				ERROR("Missing reg for field %s in firmware-layout\n",
				      name);
				VLOG(ventry,
				     "Missing reg field for %s in the firmware-layout device tree",
				     ventry->name);
				ventry->retcode = RET_DEVICE_TREE_ENTRY_ERROR;
				ventry++;
				obj_num++;
				continue;
			}

			err = get_object_info_from_fdt(ventry->name,
						&ventry->tim_address,
						&osize, &is_root_tim,
						NULL);
			ventry->max_size = osize;
			if (err == -ENODEV) {
				ventry->retcode = RET_NOT_FOUND;
				VLOG(ventry, "Could not find %s at address %llx",
				ventry->name, ventry->tim_address);
				return 0;
			} else if (err != 0) {
				VLOG(ventry,
				"Could not find %s in the firmware-layout device tree",
				ventry->name);
				vinfo->retcode = INVALID_DEVICE_TREE;
				return -1;
			}

			obj_num++;
			ventry++;
		}
		/* -1 on obj_num is for root_tim */
		if (obj_num - 1 > vinfo->num_objects) {
			debug_fw_update("Too many objects found (%d), expected %d\n",
					obj_num, vinfo->num_objects);
			vinfo->num_objects = obj_num;
			vinfo->retcode = TOO_MANY_OBJECTS;
			return -1;
		}
		vinfo->num_objects = obj_num;
	}

	vdata->vinfo = vinfo;
	vdata->ventry_counter = 0;
	spi_async_init_delayed();

	if (!async_enabled) {
		for (i=0; i<vinfo->num_objects; i++)
			update_vinfo(vdata);
		media_done(&vdata->io);
	} else {
		for (i=0; i<vinfo->num_objects; i++) {
			spi_async_add_block_callback(NULL, NULL,
						init_hash_verification, vdata,
						verify_hash_block, vdata,
						timeout*ms_to_us);
		}
		vdata->ventry_counter = 0;
		if (vinfo->version_flags & SMC_VERSION_COPY_TO_BACKUP_FLASH)
			spi_async_start(async_clone_callback, &async_clone_internal);
		else
			spi_async_start(done_callback, &uParams);
	}
	return err;
}


/**
 * Obtain version information on flash components and optionally verify and
 * copy objects to a backup location.
 *
 * @param	vinfo	Version info data structure
 *
 * @return	0 for success, -1 on error.
 */
static int flash_smc_get_versions(struct smc_version_info *vinfo, struct verification_data *vdata)
{
	INFO("Obtaining object version information\n");
	if (vinfo->magic_number != VERSION_MAGIC) {
		ERROR("Invalid descriptor, bad magic number!\n");
		return -1;
	}

	if (vinfo->version > VERSION_INFO_VERSION) {
		ERROR("Version 0x%x not supported\n", vinfo->version);
		return -1;
	}
	if (vinfo->num_objects > SMC_MAX_VERSION_ENTRIES) {
		WARN("Object count exceeds maximum\n");
		vinfo->retcode = TOO_MANY_OBJECTS;
		vinfo->num_objects = SMC_MAX_VERSION_ENTRIES;
		return -1;
	}

	fnode = fdt_path_offset(fdt_ptr, "/cavium,bdk/firmware-layout");
	if (fnode < 0) {
		ERROR("Error %d trying to access firmware layout in device tree\n",
		      fnode);
		vinfo->retcode = INVALID_DEVICE_TREE;
		return -1;
	}

	prepare_vinfo(vinfo, vdata);

	return 0;
}

static void flash_smc_verify_backup_image(struct smc_version_info_entry *image_to_verify, struct smc_version_info *copy_source)
{
	int i;
	int src_image_found = 0;
	struct smc_version_info_entry *image_src = copy_source->objects;

	/*Find images that have same version*/
	for (i=0; i<copy_source->num_objects; i++) {
		if (!strncmp(image_to_verify->name, image_src->name, VER_MAX_NAME_LENGTH)) {
			src_image_found = 1;
			break;
		} else {
			image_src+=1;
		}
	}

	if ((!src_image_found) ||
	    (memcmp(&image_to_verify->version, &image_src->version, sizeof(struct tim_opaque_data_version_info))))
		image_src->perform_clone = 1;
	else
		image_src->perform_clone = 0;
}

static int flash_smc_mark_copy(struct smc_version_info *clone_config)
{
	int i;
	int reflash_needed = 0;

	memset(&clone_destination, 0, sizeof(struct smc_version_info));

	clone_destination.magic_number = clone_config->magic_number;
	clone_destination.version = clone_config->version;
	clone_destination.version_flags = clone_config->version_flags;
	clone_destination.bus = clone_config->target_bus;
	clone_destination.cs = clone_config->target_cs;
	clone_destination.num_objects = 32;

	/* There is no need to validate hash on cloned image */
	clone_destination.version_flags &= ~SMC_VERSION_CHECK_VALIDATE_HASH;

	flash_smc_get_versions(&clone_destination, &verif_data[VDATA_DST]);

	/* Mark all images to reflash */
	for (i=0; i<clone_config->num_objects; i++)
		clone_config->objects[i].perform_clone = 1;

	/* Check if any image on destination flash should be updated
	 * If yes - TIM0 will also be updated
	 */
	if ((!(clone_config->version_flags & SMC_VERSION_FORCE_COPY_OBJECTS)) &&
	    (clone_config->version >= VERSION_FORCE_CLONE_MIN_VERSION))
		for (i=0; i<clone_destination.num_objects; i++)
			flash_smc_verify_backup_image(&clone_destination.objects[i], clone_config);

	/* Check if any image should be updated.
	 * If not - skip updating TIM0
	 */
	for (i=0; i<clone_config->num_objects; i++) {
		if (clone_config->objects[i].perform_clone == 1)
			reflash_needed = 1;

		INFO("image: %s version: %d.%d reflash: %lld\n",
				clone_config->objects[i].name,
				clone_config->objects[i].version.major_version,
				clone_config->objects[i].version.minor_version,
				clone_config->objects[i].perform_clone);
	}

	return reflash_needed;
}

/**
 * Check version and verify objects in flash
 *
 * @param	desc_buf	Address of structure smc_version_info
 * @param	desc_size	Size of data structure
 * @param	dram_end	End of DRAM
 * @param[out]	uret		SPI return code
 *
 * @return	0 for success, otherwise error.
 */
int smc_check_versions(uint64_t desc_buf, uint64_t desc_size,
		       uint64_t dram_end, int *uret)
{
	int err = 0, ns_map_size;
	struct smc_version_info *vinfo = NULL;
	uint64_t base_addr = 0;
	const uint64_t mask = ~((uint64_t)PAGE_SIZE_MASK);
	bool async_operation = false;

	ns_map_size = (desc_size + PAGE_SIZE - 1) & -PAGE_SIZE;
	base_addr = desc_buf & mask;

	if ((desc_buf + desc_size) > (base_addr + ns_map_size))
		ns_map_size += PAGE_SIZE;

	if (base_addr + ns_map_size > dram_end) {
		WARN("Invalid descriptor address 0x%llx or size 0x%x\n",
		     base_addr, ns_map_size);
		*uret = -SPI_MMAP_ERR;
		err = -EFAULT;
		goto error;
	}
	err = octeontx_mmap_add_dynamic_region_with_sync(base_addr, base_addr,
							 ns_map_size,
							 MT_RW | MT_NS);
	if (err) {
		WARN("Version check descriptor mmap failed (%d)\n", err);
		*uret = -SPI_MMAP_ERR;
		err = -EFAULT;
		goto error;
	}

	uParams.count = 1;
	uParams.p[0].ns_map_size = ns_map_size;
	uParams.p[0].base_addr = base_addr;
	vinfo = (struct smc_version_info *)desc_buf;
	if (vinfo->magic_number != VERSION_MAGIC) {
		WARN("Bad magic number 0x%x in version descriptor\n",
		     vinfo->magic_number);
		*uret = -SPI_BAD_MAGIC_NUMBER;
		err = -EINVAL;
		goto error;
	}
	if (vinfo->num_objects > SMC_MAX_VERSION_ENTRIES) {
		WARN("Descriptor exceeds maximum number of objects\n");
		*uret = -SPI_BAD_PARAMETER;
		err = -EINVAL;
		goto error;
	}

	if (spi_dev_lock(vinfo->bus)) {
		ERROR("%s: SPI_%d: Lock failed\n", __func__, vinfo->bus);
		*uret = -SPI_BAD_PARAMETER;
		err = -EINVAL;
		goto error;
	}

	err = flash_smc_get_versions(vinfo, &verif_data[VDATA_SRC]);
	*uret = err;
	if (err) {
		err = -1;
		goto error;
	}

	if (vinfo->version_flags & SMC_VERSION_ASYNC_OPERATION) {
		int i;

		async_operation = true;

		/* prepare data for async clone */
		memset(&clone_destination, 0, sizeof(struct smc_version_info));

		clone_destination.magic_number = vinfo->magic_number;
		clone_destination.version = vinfo->version;
		clone_destination.version_flags = vinfo->version_flags;
		clone_destination.bus = vinfo->target_bus;
		clone_destination.cs = vinfo->target_cs;
		clone_destination.num_objects = 32;

		async_clone_internal.vinfo_source = vinfo;
		async_clone_internal.vinfo_destination = &clone_destination;
		async_clone_internal.state = ACLONE_CHECK_SOURCE;
		for (i = 0; i < SMC_MAX_OBJECTS; i++)
			async_clone_internal.clone_object_list[i] = -1;

		if (vinfo->version_flags & SMC_VERSION_FORCE_COPY_OBJECTS)
			async_clone_internal.force_clone = true;
	}

	if (!async_operation) {
		if (vinfo->version_flags & (SMC_VERSION_COPY_TO_BACKUP_FLASH |
					SMC_VERSION_COPY_TO_BACKUP_EMMC |
					SMC_VERSION_COPY_TO_BACKUP_OFFSET)) {
			enum smc_version_ret vret;

			debug_fw_update("Performing backup operation\n");
			if (flash_smc_mark_copy(vinfo)) {
				vret = flash_smc_copy_objects(vinfo);
				if (vret != VERSION_OK)
					err = -EIO;
				else
					err = 0;
			} else {
				INFO("Skipping flash clone\n");
			}
		} else {
			debug_fw_update("Not backing up flash\n");
		}
	}
error:
	if (vinfo != NULL)
		spi_dev_unlock(vinfo->bus);

	if (!async_operation || err) {
		if (base_addr && ns_map_size)
			octeontx_mmap_remove_dynamic_region_with_sync(base_addr,
								ns_map_size);
	}

	return err;
}

int async_spi_is_ready(void)
{
	return spi_async_working();
}
