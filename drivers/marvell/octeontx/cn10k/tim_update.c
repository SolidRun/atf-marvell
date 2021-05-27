/*
 * Copyright (C) 2020 Marvell International Ltd.
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

#undef DEBUG_ATF_FW_UPDATE

#if defined(MRVL_TF_LOG_MODULE)
#  undef MRVL_TF_LOG_MODULE
#  define MRVL_TF_LOG_MODULE  MRVL_TF_LOG_MODULE_UPDATE
#  define debug_fw_update(...) (mrvl_tf_log_modules & MRVL_TF_LOG_MODULE) ? \
                          tf_log(LOG_MARKER_NOTICE __VA_ARGS__) : (void)0
#elif DEBUG_ATF_FW_UPDATE
  #define debug_fw_update(...)	printf(__VA_ARGS__)
#else
  #define debug_fw_update(...)	((void)(0))
#endif

#define VLOG(ventry, ...)	snprintf((char *)(ventry->log),	\
					 VERIFY_LOG_SIZE,	\
					 __VA_ARGS__)

static const char tim_ext[] = ".timb";
static const int tim_ext_len = (sizeof(tim_ext) - 1);

__aligned(8) static uint8_t tim_buffer[TIM_MAX_SIZE];

/* CPIO parser ported from EBF */

#define CPIO_MAX_OBJECTS		64	/* Should be more than enough */
static const uint32_t MAX_NAME_LEN = 1024;
static const char *TRAILER = "TRAILER!!!";

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
};

struct object_group_entry {
	const char *tim_filename;
	const char *data_filename;
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
};

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
	},
	{
		.tim_filename = "scp_bl1.timb",
		.data_filename = "scp_bl1.bin",
	},
	{
		.tim_filename = "mcp_bl1.timb",
		.data_filename = "mcp_bl1.bin",
	},
	{
		.tim_filename = "ecp_bl1.timb",
		.data_filename = "ecp_bl1.bin",
	},
	{ NULL, NULL },
};

static const struct object_group_entry ap_bl1_grp[] = {
	{
		.tim_filename = "init.timb",
		.data_filename = "init.bin",
	},
	{ NULL, NULL },
};

static const struct object_group_entry gserx_fw_grp[] = {
	{
		.tim_filename = "gserm-cn10xx.timb",
		.data_filename = "gserm-cn10xx.fw",
	},
	{ NULL, NULL },
};


static const struct object_group_entry ap_atf_grp[] = {
	{
		.tim_filename = "bl2.timb",
		.data_filename = "bl2.bin",
	},
	{
		.tim_filename = "bl31.timb",
		.data_filename = "bl31.bin",
	},
	{ NULL, NULL },
};

static const struct object_group_entry uboot_grp[] = {
	{
		.tim_filename = "u-boot-nodtb.timb",
		.data_filename = "u-boot-nodtb.bin",
	},
	{ NULL, NULL },
};

#if defined(PLAT_cn10ka)
static const struct object_group_entry efi1_grp[] = {
	{
		.tim_filename = "efi_app1.timb",
		.data_filename = "efi_app1.efi",
	},
	{ NULL, NULL },
};
#endif

static const struct object_group_entry mkex_fw_grp[] = {
	{
		.tim_filename = "npc_mkex-cn10xx.timb",
		.data_filename = "npc_mkex-cn10xx.fw",
	},
	{ NULL, NULL },
};

#if defined(PLAT_cn10ka)
static const struct object_group_entry switch_fw_grp[] = {
	{
		.tim_filename = "switch_fw_super.timb",
		.data_filename = "switch_fw_super.fw",
	},
	{
		.tim_filename = "switch_fw_ap.timb",
		.data_filename = "switch_fw_ap.fw",
	},
	{ NULL, NULL },
};
#endif

/**
 * Platform specific group of groups.  This contains an array of all of the
 * groups present for a particular platform.  These are defined at compile
 * time.
 */
#if defined(PLAT_cn10ka)
# define file_groups	file_groups_cn10k
static const struct object_group_entry *file_groups_cn10k[] = {
#if 0
	&rom_script_grp[0],
#endif
	&cpc_grp[0],
	&ap_bl1_grp[0],
	&gserx_fw_grp[0],
	&ap_atf_grp[0],
	&uboot_grp[0],
	&efi1_grp[0],
	&mkex_fw_grp[0],
	&switch_fw_grp[0],
	NULL,
};

#elif defined(PLAT_cnf10ka) || defined(PLAT_cnf10kb)
# define file_groups	file_groups_cnf10k
static const struct object_group_entry *file_groups_cnf10k[] = {
#if 0
	&rom_script_grp[0],
#endif
	&cpc_grp[0],
	&ap_bl1_grp[0],
	&gserx_fw_grp[0],
	&ap_atf_grp[0],
	&uboot_grp[0],
	&mkex_fw_grp[0],
	NULL,
};

#else
# error "Unknown platform"
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

static int fnode;


static enum update_ret
octeontx_read_tim(const struct smc_update_descriptor *desc, uint64_t offset,
		  size_t max_size, uint8_t *buffer, struct tim_handle *handle);

static enum update_ret
octeontx_read_data(const struct smc_update_descriptor *desc, uint64_t offset,
		   size_t size, void *buffer);

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

/** ATF doesn't have strncpy!!! */
static char *strncpy(char *dst, const char *src, size_t len)
{
	char *end = dst + len;
	char *dsave = dst;

	while (*src && dst != end) {
		*dst++ = *src++;
	}
	while (dst < end)
		*dst++ = '\0';

	return dsave;
}

/**
 * Extract location and maximum size for object in the firmware-layout
 *
 * @param[in]	name		Name of object to search for
 * @param[out]	offset		offset of file in flash
 * @param[out]	max_size	Maximum size of object in flash
 *
 * @return	-ENODEV if not found, -EINVAL if FDT problem, 0 for success
 */
static int get_object_offset_size_from_fdt(const char *name, uint64_t *offset,
					   size_t *max_size)
{
	int node;
	const uint32_t *addr_size;
	int len;

	node = fdt_node_offset_by_prop_value(fdt_ptr, fnode, "description",
					     name, strlen(name) + 1);
	if (node < 0) {
		WARN("Could not find %s in firmware-layout\n", name);
		return -ENODEV;
	}
	addr_size = fdt_getprop(fdt_ptr, node, "reg", &len);
	if (!addr_size || len != 8) {
		ERROR("Missing or invalid reg field in firmware-layout for %s\n",
		      name);
		return -EINVAL;
	}
	if (offset)
		*offset = fdt32_to_cpu(addr_size[0]);
	if (max_size)
		*max_size = fdt32_to_cpu(addr_size[1]);
	debug_fw_update("Found %s in firmware layout at address 0x%llx, max size: 0x%lx\n",
			name, offset ? *offset : -1ULL,
			max_size ? *max_size : -1UL);
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

	memset(e, 0, sizeof(*e));
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

	memset(e, 0, sizeof(*e));
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

	memset(file_entries, 0, sizeof(file_entries));
	for (i = 0; i < CPIO_MAX_OBJECTS - 1; i++) {
		file_entries[i].next = &file_entries[i + 1];
		if (i > 0)
			file_entries[i].prev = &file_entries[i - 1];
	}
	free_file_entry_list = &file_entries[0];
	first_file_entry = NULL;
	last_file_entry = NULL;

	memset(object_entries, 0, sizeof(object_entries));
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

static enum update_ret update_process_tims(void)
{
	struct tim_handle thandle;
	struct object_entry *oentry;
	struct file_entry *fentry;
	struct file_entry *dfile;
	const union tim_headers *hdr;
	struct tim_load_info *li;
	int err;

	for_each_file(fentry) {
		const int offset = strlen(fentry->filename) - tim_ext_len;

		debug_fw_update("%s: file: %s, update file offset: 0x%x\n",
				__func__, fentry->filename, offset);
		if (!strcmp(fentry->filename + offset, tim_ext)) {
			oentry = alloc_object();
			if (!oentry) {
				WARN("Out of objects!!!\n");
				return UPDATE_NO_MEM;
			}
			oentry->tim_file = fentry;
			fentry->object = oentry;
			memset(&thandle, 0, sizeof(thandle));
			hdr = (union tim_headers *)fentry->data;
			debug_fw_update("Parsing TIM header at %p\n", hdr);
			/*
			 * We don't know the source address from which the
			 * TIM is loaded so we use the DATO location field
			 */
			err = tim_load(hdr, TIM_SRC_ADDRESS_UNKNOWN, &thandle);
			if (err) {
				WARN("Error %d processing TIM %s\n",
				     err, fentry->filename);
				return UPDATE_TIM_ERROR;
			}

			err = tim_get_load_info(&thandle, &oentry->li);
			if (err) {
				WARN("Invalid TIM %s\n", fentry->filename);
				return UPDATE_TIM_ERROR;
			}
			err = tim_get_version_info(&thandle, &oentry->version);
			if (err)
				oentry->no_version = 1;

			li = &oentry->li;
			if (!li->hshi_parsed || !li->tim_src_loc_parsed ||
			    !li->tim_dato_filename_parsed) {
				WARN("TIM %s missing required blocks\n",
				     fentry->filename);
				return UPDATE_TIM_ERROR;
			}

			debug_fw_update("%s: TIM associated with %s\n",
					__func__, li->data_filename);
			dfile = find_file(li->data_filename);
			if (!dfile) {
				WARN("Could not find %s referenced by TIM %s\n",
				     li->data_filename, fentry->filename);
				return UPDATE_TIM_ERROR;
			}
			debug_fw_update("dfile: %s, li: %s, fentry: %s\n",
					dfile->filename, li->data_filename,
					fentry->filename);
			if (dfile->file_size != li->image_length) {
				WARN("Error: TIM %s length %u does not match data file %s length %lu\n",
				     fentry->filename,
				     oentry->li.image_length,
				     dfile->filename, dfile->file_size);
				return UPDATE_TIM_ERROR;
			}
			fentry->file_loc = li->tim_src_address;
			dfile->file_loc = li->src_address;
			oentry->data_file = dfile;
			dfile->object = oentry;
			debug_fw_update("%s: %s starts at 0x%llx, %s starts at 0x%llx\n",
					__func__,
					fentry->filename, fentry->file_loc,
					dfile->filename, dfile->file_loc);
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

	for (gentry = group; gentry->tim_filename || gentry->data_filename;
	     gentry++) {
		debug_fw_update("%s: Checking %s, %s\n", __func__,
				gentry->tim_filename, gentry->data_filename);
		if (gentry->tim_filename) {
			fentry = find_file(gentry->tim_filename);
			if (!fentry) {
				complete = false;
			} else {
				assert(fentry->object != NULL);
				fentry->object->group = group;
				none = false;
			}
		}
		if (gentry->data_filename) {
			fentry = find_file(gentry->data_filename);
			if (!fentry) {
				complete = false;
			} else {
				assert(fentry->object != NULL);
				fentry->object->group = group;
				none = false;
			}
		}
	}
	if (complete) {
		debug_fw_update("Group containing %s is complete.\n",
				group[0].data_filename);
		return 1;
	}
	if (none) {
		debug_fw_update("Group containing %s is missing (OK)\n",
				group[0].data_filename);
		return 0;
	}
	WARN("Error: Group containing %s is incomplete\n",
	     group[0].data_filename);
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
	const struct object_group_entry **group;
	const struct object_group_entry **plat_groups = &file_groups[0];
	bool all_found = true;
	bool none_found = true;
	int found, num_found = 0;

	for (group = plat_groups; *group != NULL; group++) {
		debug_fw_update("Checking group %s/%s\n",
				(*group)->tim_filename,
				(*group)->data_filename);

		found = check_group(*group);
		if (found < 0)
			return UPDATE_GROUP_ERROR;
		if (!found) {
			all_found = false;
		} else {
			num_found++;
			none_found = false;
		}
	}

	if (none_found) {
		WARN("No valid object groups found\n");
		return UPDATE_GROUP_ERROR;
	}
	if (all_found)
		debug_fw_update("All file groups found\n");
	else
		debug_fw_update("Found %d object groups\n", num_found);
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
			ERROR("File %s overlaps %s\n",
			      entry->filename,
			      file->filename);
			ERROR("%s start: 0x%llx, size: 0x%lx, %s start: 0x%llx, size: 0x%lx\n",
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
		ERROR("Image hash failed for %s\n", obj->data_file->filename);
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
	uint64_t offset=  linfo->src_address;
	uint64_t blk_size;

	ret = ehsm_verify_init(linfo, &ehdl);
	if (ret) {
		ERROR("Error initializing verification\n");
		return UPDATE_EHSM_ERROR;
	}

	INFO("Verifying 0x%lx bytes starting at offset 0x%llx\n", size, offset);
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
	if (ret == -EAUTH)
		WARN("Detected corrupt flash image for %s\n",
		     linfo->data_filename);
	else if (ret != 0)
		ERROR("Error %d finalizing verification for %s\n",
		      ret, linfo->data_filename);
	return ret;
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
	struct tim_handle fl_hdl;	/* Flash image handle */
	struct tim_load_info fl_li;
	struct tim_opaque_data_version_info fl_vinfo;

	int ret;

	uint64_t offset = 0;
	size_t max_size;


	ret = get_object_offset_size_from_fdt(object->data_file->filename,
					      &offset, &max_size);
	if (ret == -ENODEV) {
		/* It's possible this is a new object.  If new, validate it */
		INFO("%s not found in device tree, assuming new object\n",
		     object->data_file->filename);
		object->update_all = true;
		return UPDATE_OK;
	}

	/* Read existing TIM from flash */
	ret = octeontx_read_tim(desc, offset, BUF_SIZE, rd_buffer, &fl_hdl);
	if (ret == UPDATE_MISSING_TIM) {
		INFO("TIM for %s missing in flash\n",
		     object->data_file->filename);
		object->update_all = true;
		return UPDATE_OK;
	}
	if (ret == UPDATE_TIM_ERROR) {
		/* If not found then we definitely want to overwrite it */
		WARN("Could not load TIM for %s from flash\n",
		     object->data_file->filename);
		object->update_all = true;
		return UPDATE_OK;
	} else if (ret != UPDATE_OK) {
		WARN("Error %d reading existing TIM\n", ret);
		return ret;
	}

	ret = tim_get_load_info(&fl_hdl, &fl_li);
	if (ret != TIM_NO_ERROR) {
		/* Bad TIM, we want to overwrite it */
		object->update_all = true;
		WARN("Could not get load info from TIM %s, ret: %d\n",
		     object->tim_file->filename, ret);
		return UPDATE_OK;
	}
	if (strcmp(fl_li.data_filename, object->data_file->filename)) {
		WARN("Update TIM filename %s does not match flash TIM filename %s\n",
		     object->data_file->filename, fl_li.data_filename);
		object->update_all = 1;
		return UPDATE_OK;
	}

	ret = verify_hash(desc, &fl_li, NULL, NULL);
	if (ret == -EAUTH) {
		ERROR("Hash mismatch for %s\n", object->data_file->filename);
		return UPDATE_EHSM_ERROR;

	} else if (ret != 0) {
		/* Something else went wrong */
		ERROR("Error %d finalizing verification for %s\n",
		      ret, object->data_file->filename);
		return UPDATE_EHSM_ERROR;
	}

	if (!(desc->update_flags & UPDATE_FLAG_IGNORE_VERSION)) {
		ret = tim_get_version_info(&fl_hdl, &fl_vinfo);
		if (ret) {
			WARN("TIM %s is missing version info in flash\n",
			     object->tim_file->filename);
			return UPDATE_VERSION_CHECK_FAIL;
		}
		/* If we're here we have the version information */
		ret = marvell_cust_check_version(desc, object, &fl_vinfo);
		if (ret > 0) {
			object->skip_install = 1;
			return UPDATE_OK;
		} else if (ret < 0) {
			return UPDATE_VERSION_CHECK_FAIL;
		}
	}
	return UPDATE_OK;
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

	for_each_object(obj) {
		ret = check_flash_object(desc, obj);
		if (ret != UPDATE_OK)
			return ret;
		if (obj->update_all)
			update_all = true;
		if (update_all && !all_present) {
			ERROR("Flash inconsistencies found.  A complete update image is required\n");
			return -EINVAL;
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

static enum update_ret check_files(void)
{
	struct object_entry *obj;
	int err;

	for_each_object(obj) {
		err = check_file_loc_size(obj->tim_file);
		if (err)
			return UPDATE_LOCATION_ERROR;

		err = check_file_loc_size(obj->data_file);
		if (err)
			return UPDATE_LOCATION_ERROR;

		err = validate_hash(obj);
		if (err)
			return err;
	}
	return UPDATE_OK;
}

static inline int get_spi_mode(uint64_t offset)
{
	return (offset >= (1 << 24)) ?
				SPI_ADDRESSING_32BIT : SPI_ADDRESSING_24BIT;
}

static enum update_ret setup_media(const struct smc_update_descriptor *desc)
{
	int ret;

	if (desc->update_flags & UPDATE_FLAG_EMMC) {

	} else {
		ret = spi_config(CONFIG_SPI_FREQUENCY, 0, 0, 0,
				 desc->bus, desc->cs);
		if (ret) {
			ERROR("Error initializiong SPI flash interface: %d\n",
			      ret);
			return UPDATE_IO_ERROR;
		}
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
	int ret;

	if (desc->update_flags & UPDATE_FLAG_BACKUP)
		offset += BACKUP_IMAGE_OFFSET;

	if (desc->update_flags & UPDATE_FLAG_EMMC) {
		/* Read from eMMC */
		return UPDATE_INVALID_MEDIA;
	} else {
		int mode = get_spi_mode(offset);

		ret = spi_nor_read(buffer, size, offset, mode,
				   desc->bus, desc->cs);
		if (ret != size) {
			WARN("SPI IO error %d reading 0x%lx bytes from offset 0x%llx from bus %d:%d\n",
			     ret, size, offset, desc->bus, desc->cs);
			return UPDATE_IO_ERROR;
		}
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
	int ret;

	INFO("%s: Writing 0x%lx bytes to offset 0x%llx from buffer 0x%p\n",
	     __func__, size, offset, buffer);
	if (desc->update_flags & UPDATE_FLAG_BACKUP)
		offset += BACKUP_IMAGE_OFFSET;

	if (desc->update_flags & UPDATE_FLAG_EMMC) {
		/* Read from eMMC */
		return UPDATE_INVALID_MEDIA;
	} else {
		int mode = get_spi_mode(offset);

		ret = spi_nor_erase(offset, mode, desc->bus, desc->cs);
		if (ret) {
			WARN("SPI: erase failed at offset: 0x%llx\n", offset);
			return UPDATE_IO_ERROR;
		}

		ret = spi_nor_write((uint8_t *)buffer, size, offset, mode,
				   desc->bus, desc->cs);
		if (ret != size) {
			WARN("SPI: write failed for offset 0x%llx, size: 0x%lx, ret: %d\n",
			     offset, size, ret);
			return UPDATE_IO_ERROR;
		}
	}
	return UPDATE_OK;
}

/**
 * Erase flash data
 *
 * @param[in]	media descriptor
 * @param	offset	offset to erase
 * @param	size	number of bytes to erase
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
	int mode = get_spi_mode(offset);

	if (desc->update_flags & UPDATE_FLAG_EMMC)
		return UPDATE_OK;

	if (offset % SPI_NOR_ERASE_SIZE) {
		WARN("SPI: Erase offset 0x%llx invalid, must be on %d byte boundary\n",
		     offset, SPI_NOR_ERASE_SIZE);
		return UPDATE_IO_ERROR;
	}

	if (desc->update_flags & UPDATE_FLAG_BACKUP)
		offset += BACKUP_IMAGE_OFFSET;

	while (size > 0) {
		ret = spi_nor_erase(offset, mode, desc->bus, desc->cs);
		if (ret) {
			WARN("Cannot erase SPI at offset 0x%llx\n", offset);
			return UPDATE_IO_ERROR;
		}
		offset += SPI_NOR_ERASE_SIZE;
		size -= SPI_NOR_ERASE_SIZE;
	}
	return UPDATE_OK;
}

/**
 * Reads a TIM from flash and parses it
 *
 * @param[in]	desc		media descriptor
 * @param	offset		byte offset of TIM
 * @param	max_size	Maximum size to read
 * @param[out]	buffer		buffer to read TIM into
 * @param[out]	handle		TIM handle
 *
 * @return	UPDATE_OK for success
 *		UPDATE_INVALID_MEDIA for invalid media
 *		UPDATE_IO_ERROR for media I/O errors
 *		UPDATE_MISSING_TIM if media is erased at TIM location
 *		UPDATE_TIM_ERROR if the TIM is invalid
 */
static enum update_ret
octeontx_read_tim(const struct smc_update_descriptor *desc, uint64_t offset,
		  size_t max_size, uint8_t *buffer, struct tim_handle *handle)
{
	enum update_ret ret;
	enum tim_return tret;
	union tim_headers *hdr = (union tim_headers *)buffer;
	struct tim_header_info hinfo;
	int i;

	INFO("Reading TIM header from offset 0x%llx\n", offset);
	memset(buffer, 0, max_size);
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
			ERROR("Could not parse TIM header at offset 0x%llx (%d) ret (%d)\n",
			      offset, tret, ret);
			ERROR("SPI bus: %d, cs: %d\n", desc->bus, desc->cs);
			printf("Could not parse TIM header at offset 0x%llx (%d) ret (%d)\n", offset, tret, ret);
		}
		goto done;
	}

	if (hinfo.signed_tim_size > max_size) {
		ERROR("TIM at offset 0x%llx is too large\n", offset);
		ret = UPDATE_TIM_ERROR;
		goto done;
	}

	/* Read the rest of the TIM */
	ret = octeontx_read_data(desc, offset + TIM_TIMH_SIZE,
				 hinfo.signed_tim_size - TIM_TIMH_SIZE,
				 buffer + TIM_TIMH_SIZE);
	if (ret != UPDATE_OK) {
		ERROR("Could not read TIM\n");
		goto done;
	}

	/* Validate TIM */
	tret = tim_load(hdr, offset, handle);
	if (tret != TIM_NO_ERROR) {
		ERROR("Error %d parsing TIM at 0x%llx\n", ret, offset);
		ret = UPDATE_TIM_ERROR;
		goto done;
	}
	ret = UPDATE_OK;
done:

	return ret;
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
			struct file_entry *fentry)
{
	uint64_t offset = fentry->file_loc, xfer_len;
	enum update_ret ret = UPDATE_OK;
	size_t size = fentry->file_size;
	const void *user_buffer = fentry->data;

	while (size > 0) {
		xfer_len = size < BUF_SIZE ? size : BUF_SIZE;
		memcpy((void *)wr_buffer, (const void *)user_buffer,
		       xfer_len);

		/*
		 * First read the data so we can skip writes if it is the
		 * same
		 */
		ret =  octeontx_read_data(desc, offset, xfer_len, rd_buffer);
		if (ret != UPDATE_OK) {
			WARN("SPI: Read flash failed for offset: 0x%llx, file: %s\n",
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

		/* Erase the block being written */
		ret = octeontx_erase_data(desc, offset, BUF_SIZE);
		if (ret != UPDATE_OK) {
			WARN("SPI: Erase flash failed for offset: 0x%llx, file: %s\n",
			     offset, fentry->filename);
			break;
		}

		/* Write new data */
		ret = octeontx_write_data(desc, offset, xfer_len, wr_buffer);
		if (ret != UPDATE_OK) {
			WARN("SPI: Write flash failed for offset: 0x%llx, file: %s\n",
			     offset, fentry->filename);
			break;
		}

		/* Read it back and compare it */
		ret = octeontx_read_data(desc, offset, xfer_len, rd_buffer);
		if (ret != UPDATE_OK) {
			WARN("SPI: Read flash failed for offset: 0x%llx, file: %s\n",
			     offset, fentry->filename);
			break;
		}
		if (memcmp(rd_buffer, wr_buffer, xfer_len)) {
			WARN("SPI: Compare data failed for file: %s\n",
			     fentry->filename);
			ret = UPDATE_IO_ERROR;
			break;
		}
		offset += xfer_len;
		user_buffer += xfer_len;
		size -= xfer_len;
	}
	memset(wr_buffer, 0, sizeof(wr_buffer));
	memset(rd_buffer, 0, sizeof(rd_buffer));

	return ret;
}

/**
 * Write all of the files to the SPI flash
 */
static enum update_ret
octeontx_write_files(const struct smc_update_descriptor *desc)
{
	struct file_entry *fentry;
	enum update_ret ret;

	for_each_file(fentry) {
		if (fentry->object->update_all ||
		    !fentry->object->skip_install) {
			INFO("Writing file %s: location: 0x%llx, size: 0x%lx\n",
			     fentry->filename, fentry->file_loc,
			     fentry->file_size);
			ret = octeontx_update_fw_file(desc, fentry);
			if (ret != UPDATE_OK)
				return ret;
		} else {
			INFO("Skipping file %s\n", fentry->filename);
		}
	}
	return UPDATE_OK;
}

/**
 * Validates and updates the firmware in secure storage for CN10K.
 */
int octeontx_cn10k_update_fw(struct smc_update_descriptor *desc)
{
	int err;
	enum update_ret ret;
	bool all_present = false;
	const void *fw_image;
	size_t size;

	debug_fw_update("%s(%llx, %llx, 0x%x, 0x%x)\n",
			__func__, desc->image_addr,
			desc->image_size, desc->bus, desc->cs);

	err = marvell_cust_verify_fw_update_image(desc);
	if (err) {
		WARN("Customer verification failed\n");
		ret = UPDATE_AUTH_ERROR;
		goto error;
	}

	fw_image = (void *)desc->image_addr;
	size = desc->image_size;

	ret = firm_update_init(fw_image, size);
	if (ret != UPDATE_OK) {
		WARN("Error parsing firmware\n");
		goto error;
	}

	debug_fw_update("%s: Processing TIMs\n", __func__);
	ret = update_process_tims();
	if (ret != UPDATE_OK) {
		WARN("Error parsing TIMs\n");
		goto error;
	}
	debug_fw_update("%s: Checking groups\n", __func__);
	err = check_groups();
	if (err < 0) {
		ret = UPDATE_GROUP_ERROR;
		goto error;
	}
	all_present = (err == 1);


	INFO("Validating objects...\n");
	ret = check_files();
	if (ret != UPDATE_OK)
		goto error;

	INFO("Checking existing flash objects...\n");
	ret = check_flash_files(desc, all_present);
	if (ret != UPDATE_OK)
		goto error;

	INFO("Writing files\n");
	ret = octeontx_write_files(desc);
	if (ret != UPDATE_OK)
		goto error;
	INFO("Firmware update done.\n");
error:
	return ret;
}

int spi_smc_update(uintptr_t desc_buf, uint64_t desc_size,
		   uint64_t dram_end, enum update_ret *uret)
{
	int err = 0, ns_map_size;
	struct smc_update_descriptor update_desc;
	uintptr_t addr = 0, size = 0;
	uint32_t bus, cs;
	uint64_t base_addr = 0;
	const uint64_t mask = ~((uint64_t)PAGE_SIZE_MASK);

	assert(uret);
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
		return -SPI_MMAP_ERR;
	}
	debug_fw_update("Adding descriptor mapping, address: 0x%lx, base: 0x%llx, map size: 0x%x\n",
			desc_buf, base_addr, ns_map_size);
	err = octeontx_mmap_add_dynamic_region_with_sync(base_addr, base_addr,
							 ns_map_size,
							 MT_RO | MT_NS);
	if (err) {
		WARN("FW Update: descriptor mmap failed (%d)\n", err);
		return -SPI_MMAP_ERR;
	}

	debug_fw_update("Copying descriptor from 0x%lx to 0x%p\n",
			desc_buf, &update_desc);
	memcpy(&update_desc, (const void *)desc_buf, sizeof(update_desc));

	/* Currently the update flags are not used so we don't save them.
	 * We store the update error code in them, however, so we zero it here.
	 */
	*uret = UPDATE_OK;

	octeontx_mmap_remove_dynamic_region_with_sync(base_addr, ns_map_size);
	base_addr = 0;
	ns_map_size = 0;

	/* Sanity checks */
	err = SMC_UNK;
	if (update_desc.magic != UPDATE_MAGIC) {
		WARN("Invalid magic value in descriptor\n");
		*uret = UPDATE_BAD_DESC_MAGIC;
		goto error;
	}

	/*
	 * NOTE: A lot more can be done to handle multiple versions for
	 * backwards compatibility, etc.
	 */
	if (update_desc.version != UPDATE_VERSION) {
		WARN("Unsupported descriptor version 0x%x\n",
		     update_desc.version);
		*uret = UPDATE_BAD_DESC_VERSION;
		goto error;
	}
	addr = update_desc.image_addr;
	size = update_desc.image_size;
	bus = update_desc.bus;
	cs = update_desc.cs;

	if ((bus > MAX_SPI_BUS) || (cs > MAX_SPI_CS)) {
		WARN("Invalid bus 0x%x or chip select 0x%x\n", bus, cs);
		*uret = UPDATE_INVALID_MEDIA;
		goto error;
	}

	if ((addr < NS_IMAGE_BASE) || (addr > (dram_end - 1)) ||
	    (addr % sizeof(uint64_t)) || ((addr + size) > (dram_end - 1))) {
		WARN("Invalid image address 0x%lx or size 0x%lx\n",
		     addr, size);
		*uret = UPDATE_BAD_ALIGNMENT;
		goto error;
	}

	if (plat_octeontx_bcfg->spi_cfg[bus].cs[cs] != 1) {
		WARN("SPI BUS 0x%x chip select 0x%x is unavailable\n",
		     bus, cs);
		*uret = UPDATE_INVALID_MEDIA;
		goto error;
	}

	err = setup_media(&update_desc);
	if (err) {
		*uret = err;
		goto error;
	}
	/* Round up to page size */
	ns_map_size = (size + PAGE_SIZE - 1) & -PAGE_SIZE;
	/* Make sure address is page aligned */
	base_addr = addr & mask;
	/* Add an extra page if this now exceeds the map size */
	if ((addr + desc_size) > (base_addr + ns_map_size))
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
		return -SPI_MMAP_ERR;
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
	*uret = octeontx_cn10k_update_fw(&update_desc);
	if (*uret) {
		WARN("Firmware update failed\n");
		goto error;
	}
error:
	/* unmap non-secure memory buffer */
	if (base_addr && ns_map_size)
		octeontx_mmap_remove_dynamic_region_with_sync(base_addr,
							      ns_map_size);

	return err;
}

/**
 * Reads a TIM and obtains version information and optionally verify the hash
 *
 * @param	vinfo	version info descriptor pointer
 * @param	ventry	current entry in the version info descriptor
 * @param	udesc	Update descriptor for media information
 * @param	flash_addr	Address to check
 * @param	size	Maximum size of object, set to 0 for tim0
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
			     const struct smc_update_descriptor *udesc,
			     uint64_t flash_addr, size_t size)
{
	struct tim_handle thdl;
	struct tim_load_info tli;
	enum tim_return tret;
	enum update_ret uret;
	int ret;
	uint8_t digest[EHSM_MAX_HASH_SIZE_BYTES];
	int hash_size = 0;
	ventry->retcode = RET_OK;
	size_t max_read_size = size ? TIM_MAX_SIZE : sizeof(tim_buffer);

	assert(sizeof(tim_buffer) >= TIM_MAX_SIZE);
	uret = octeontx_read_tim(udesc, flash_addr, max_read_size,
				 tim_buffer, &thdl);
	if (uret == UPDATE_MISSING_TIM) {
		ventry->retcode = RET_NOT_FOUND;
		VLOG(ventry, "TIM not found.");
		return RET_NOT_FOUND;
	}
	if (uret != UPDATE_OK) {
		ventry->retcode = RET_TIM_INVALID;
		WARN("Invalid TIM found for object at %#llx\n", flash_addr);
		return RET_TIM_INVALID;
	}
	tret = tim_get_load_info(&thdl, &tli);
	if (tret != TIM_NO_ERROR) {
		ventry->retcode = RET_TIM_INVALID;
		VLOG(ventry, "The TIM for %s is missing the load information",
		     ventry->name);
		return RET_TIM_INVALID;
	}
	if (size && tli.image_length > size) {
		ventry->retcode = RET_IMAGE_TOO_BIG;
		ventry->object_size = tli.image_length;
		VLOG(ventry,
		     "Reported TIM size 0x%x for %s is larger than maximum size 0x%lx",
		     tli.image_length, ventry->name, size);
		return RET_IMAGE_TOO_BIG;
	}
	ventry->object_size = tli.image_length;
	ventry->object_address = tli.src_address;
	tret = tim_get_version_info(&thdl, &ventry->version);
	if (tret != TIM_NO_ERROR) {
		VLOG(ventry, "%s is missing version information in the TIM",
		     ventry->name);
		ventry->retcode = RET_TIM_NO_VERSION;
		return RET_TIM_NO_VERSION;
	}
	ventry->name[VER_MAX_NAME_LENGTH - 1] = '\0';
	if (vinfo->version_flags & SMC_VERSION_CHECK_SPECIFIC_OBJECTS) {
		if (strcmp(ventry->name, tli.data_filename)) {
			VLOG(ventry,
			     "TIM name %s does not match passed name %s",
			     ventry->name, tli.data_filename);
			ventry->retcode = RET_NAME_MISMATCH;
			strncpy(ventry->name, tli.data_filename,
				sizeof(ventry->name));
			return RET_NAME_MISMATCH;
		}
	} else {
		strncpy(ventry->name, tli.data_filename, sizeof(ventry->name));
	}
	if (tli.hshi_parsed) {
		ventry->hash_size = tli.hash_size;
		memcpy(ventry->tim_hash, tli.hash_data, tli.hash_size);
	} else {
		VLOG(ventry, "No hash found in TIM");
		ventry->retcode = RET_TIM_NO_HASH;
		WARN("No hash found in TIM for %s\n", tli.data_filename);
	}
	if (vinfo->version_flags & SMC_VERSION_CHECK_VALIDATE_HASH) {
		INFO("Validating hash for %s at  offset 0x%llx\n",
		     ventry->name, ventry->object_address);
		if (!tli.hshi_parsed) {
			ventry->retcode = RET_TIM_NO_HASH;
			VLOG(ventry, "Hash not present in TIM");
			return RET_TIM_NO_HASH;
		}
		memset(digest, 0, sizeof(digest));
		ret = verify_hash(udesc, &tli, digest, &hash_size);
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

int flash_smc_get_versions(struct smc_version_info *vinfo)
{
	int err;
	int i;
	int base_node, node;
	struct smc_version_info_entry *ventry;
	struct smc_update_descriptor udesc;
	const char *name;
	const char *type;
	uint64_t addr, size;

	if (vinfo->magic_number != VERSION_MAGIC) {
		ERROR("Invalid descriptor, bad magic number!\n");
		return -1;
	}
	/* There's only one version so far. */
	if (vinfo->version != VERSION_INFO_VERSION) {
		ERROR("Version 0x%x not supported\n", vinfo->version);
		return -1;
	}
	if (vinfo->num_objects > SMC_MAX_VERSION_ENTRIES) {
		WARN("Object count exceeds maximum\n");
		vinfo->retcode = TOO_MANY_OBJECTS;
		vinfo->num_objects = SMC_MAX_VERSION_ENTRIES;
		return -1;
	}

	/* The TIM code expects an update descriptor */
	memset(&udesc, 0, sizeof(udesc));
	udesc.bus = vinfo->bus;
	udesc.cs = vinfo->cs;
	if (vinfo->version_flags & VERSION_FLAG_EMMC)
		udesc.update_flags |= UPDATE_FLAG_EMMC;
	if (vinfo->version_flags & VERSION_FLAG_BACKUP)
		udesc.update_flags |= UPDATE_FLAG_BACKUP;

	if (vinfo->version_flags & SMC_VERSION_CHECK_SPECIFIC_OBJECTS) {
		for (i = 0; i < vinfo->num_objects; i++) {
			size_t osize;
			ventry = &vinfo->objects[i];
			memset(ventry->log, 0, sizeof(ventry->log));
			/* Make sure NULL terminated */
			ventry->name[VER_MAX_NAME_LENGTH - 1] = '\0';
			err = get_object_offset_size_from_fdt(ventry->name,
							&ventry->tim_address,
							&osize);
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
				continue;
			} else if (err != 0) {
				vinfo->retcode = INVALID_DEVICE_TREE;
				return -1;
			}
			if (!strcmp(ventry->name, "tim0"))
				size = 0;
			else
				size = ventry->max_size;
			err = check_get_version(vinfo, ventry, &udesc,
						ventry->tim_address, size);
			ventry->retcode = err;
		}
	} else {
		int obj_num = 0;
		base_node = fdt_path_offset(fdt_ptr,
					    "/cavium,bdk/firmware-layout");
		if (base_node < 0) {
			ERROR("Firmware layout not found in device tree\n");
			vinfo->retcode = INVALID_DEVICE_TREE;
			return -1;
		}

		/* Count the number of firmware objects */
		fdt_for_each_subnode(node, fdt_ptr, base_node) {
			type = fdt_getprop(fdt_ptr, node, "type", NULL);
			if (!type) {
				name = fdt_get_name(fdt_ptr, node, NULL);
				WARN("Missing type for FDT node %s\n",
				     name ? name : "UNKNOWN");
			}
			if (strcmp(type, "firmware")) {
				INFO("Skipping non-firmware entry\n");
				continue;
			}
			obj_num++;
		}
		/* If we have too many, return the number found */
		if (obj_num > vinfo->num_objects) {
			vinfo->num_objects = obj_num;
			vinfo->retcode = TOO_MANY_OBJECTS;
			return -1;
		}
		obj_num = 0;
		ventry = &vinfo->objects[0];
		fdt_for_each_subnode(node, fdt_ptr, base_node) {
			const uint32_t *addr_size;
			size_t max_size;
			int len;

			type = fdt_getprop(fdt_ptr, node, "type", NULL);
			if (!type) {
				name = fdt_get_name(fdt_ptr, node, NULL);
				WARN("Missing type for FDT node %s\n",
				     name ? name : "UNKNOWN");
			}
			if (strcmp(type, "firmware")) {
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
			memset(ventry->log, 0, sizeof(ventry->log));
			strncpy(ventry->name, name, sizeof(ventry->name));
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
			addr = fdt32_to_cpu(addr_size[0]);
			size = fdt32_to_cpu(addr_size[1]);
			if (!strcmp(ventry->name, "tim0"))
				max_size = 0;
			else
				max_size = size;
			/*
			 * Note that we ignore the errors because they get
			 * recorded in each entry.
			 */
			err = check_get_version(vinfo, ventry, &udesc, addr,
						max_size);
			/* Skip objects that don't exist */
			if (err != RET_NOT_FOUND) {
				obj_num++;
				ventry->tim_address = addr;
				ventry->max_size = size;
				ventry++;
			} else {
				memset(ventry->name, 0, sizeof(ventry->name));
			}
		}
		vinfo->num_objects = obj_num;
	}
	return 0;
}

/**
 * Check version and verify objects in flash
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
	int err, ns_map_size;
	struct smc_version_info *vinfo;
	uint64_t base_addr = 0;
	const uint64_t mask = ~((uint64_t)PAGE_SIZE_MASK);

	ns_map_size = (desc_size + PAGE_SIZE - 1) & -PAGE_SIZE;
	base_addr = desc_buf & mask;

	if ((desc_buf + desc_size) > (base_addr + ns_map_size))
		ns_map_size += PAGE_SIZE;

	if (base_addr + ns_map_size > dram_end) {
		WARN("Invalid descriptor address 0x%llx or size 0x%x\n",
		     base_addr, ns_map_size);
		*uret = -SPI_MMAP_ERR;
		err = -EFAULT;
	}
	err = octeontx_mmap_add_dynamic_region_with_sync(base_addr, base_addr,
							 ns_map_size, MT_RW | MT_NS);
	if (err) {
		WARN("Version check descriptor mmap failed (%d)\n", err);
		*uret = -SPI_MMAP_ERR;
		err = -EFAULT;
	}

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

	err = flash_smc_get_versions(vinfo);
	*uret = err;
	if (err)
		err = -1;

error:
	if (base_addr && ns_map_size)
		octeontx_mmap_remove_dynamic_region_with_sync(base_addr,
							      ns_map_size);
	return err;
}
