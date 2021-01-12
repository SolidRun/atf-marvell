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

static const char tim_ext[] = ".timb";
static const int tim_ext_len = (sizeof(tim_ext) - 1);

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

struct file_entry {
	const char		*filename;
	const void		*file_cpio;
	size_t			file_size;
	uint64_t		file_loc;
	const void		*data;
	struct file_entry	*next;
	struct file_entry	*prev;
};

struct object_entry {
	struct file_entry *data_file;
	struct file_entry *tim_file;

	struct tim_load_info li;
	struct object_entry *next;
	struct object_entry *prev;
};

struct object_group_entry {
	const char *tim_filename;
	const char *data_filename;
};

#if 0
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
static const struct object_group_entry switch_fw_super_grp[] = {
	{
		.tim_filename = "switch_fw_super.timb",
		.data_filename = "switch_fw_super.fw",
	},
	{ NULL, NULL },
};

static const struct object_group_entry switch_fw_ap_grp[] = {
	{
		.tim_filename = "switch_fw_ap.timb",
		.data_filename = "switch_fw_ap.fw",
	},
	{ NULL, NULL },
};
#endif

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
	&switch_fw_super_grp[0],
	&switch_fw_ap_grp[0],
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

#define BUF_SIZE	4096
__aligned(8) static uint8_t wr_buffer[BUF_SIZE] = {0};
__aligned(8) static uint8_t rd_buffer[BUF_SIZE] = {0};

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
 *
 * @return	Pointer to next header or NULL if error
 *
 * NOTE: This is only compatible with the newc and crc CPIO formats.
 * Binary formats are not supported.
 */
static const void *decode_cpio_header(const void *header, const void *end,
				      struct cpio_header *chdr,
				      const void **data, const char **filename)
{
	uint64_t v;
	int ret;
	const char *h = (char *)header;

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
	return NULL;
}

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

static struct file_entry *find_file(const char *name)
{
	struct file_entry *fentry;

	for_each_file(fentry) {
		if (!strcmp(name, fentry->filename))
			return fentry;
	}
	debug_fw_update("File %s not found in update file\n", __func__);
	return NULL;
}

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

static int firm_update_init(const void *data, size_t size)
{
	struct cpio_header chdr;
	struct file_entry *fentry;
	const void *cur_hdr = data;
	const void *next_hdr = NULL;
	const void *end = data + size;
	const char *filename;

	init_lists();

	/* Iterate through all of the files */
	do {
		next_hdr = decode_cpio_header(cur_hdr, end, &chdr, &data,
					      &filename);
		if (!data || !next_hdr)
			break;
		if ((unsigned long)data % sizeof(uint32_t)) {
			WARN("Invalid alignment of CPIO data in %s\n",
			     filename);
		}
		debug_fw_update("%s: Found %s in update file\n", __func__,
				filename);
		fentry = alloc_file(filename, cur_hdr, chdr.filesize, data);
		if (!fentry) {
			WARN("Too many files in firmware image\n");
			return -ENOMEM;
		}
		cur_hdr = next_hdr;
	} while (cur_hdr);
	debug_fw_update("%s: Done\n", __func__);

	return 0;
}

static int update_process_tims(void)
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
				return -EDOOFUS;
			}
			oentry->tim_file = fentry;
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
				return -EIO;
			}

			err = tim_get_load_info(&thandle, &oentry->li);
			if (err) {
				WARN("Invalid TIM %s\n", fentry->filename);
				return -EIO;
			}

			li = &oentry->li;
			if (!li->hshi_parsed || !li->tim_src_loc_parsed ||
			    !li->tim_dato_filename_parsed) {
				WARN("TIM %s missing required blocks\n",
				     fentry->filename);
				return -EIO;
			}

			debug_fw_update("%s: TIM associated with %s\n",
					__func__, li->data_filename);
			dfile = find_file(li->data_filename);
			if (!dfile) {
				WARN("Could not find %s referenced by TIM %s\n",
				     li->data_filename, fentry->filename);
				return -EIO;
			}
			debug_fw_update("dfile: %s, li: %s, fentry: %s\n",
					dfile->filename, li->data_filename,
					fentry->filename);
			if (dfile->file_size != li->image_length) {
				WARN("Error: TIM %s length %u does not match data file %s length %lu\n",
				     fentry->filename,
				     oentry->li.image_length,
				     dfile->filename, dfile->file_size);
			}
			fentry->file_loc = li->tim_src_address;
			dfile->file_loc = li->src_address;
			oentry->data_file = dfile;
			debug_fw_update("%s: %s starts at 0x%llx, %s starts at 0x%llx\n",
					__func__,
					fentry->filename, fentry->file_loc,
					dfile->filename, dfile->file_loc);
		}
	}
	return 0;
}

static int check_group(const struct object_group_entry *group)
{
	const struct object_group_entry *entry;
	bool complete = true;
	bool none = true;

	for (entry = group; entry->tim_filename || entry->data_filename;
	     entry++) {
		debug_fw_update("%s: Checking %s, %s\n", __func__,
				entry->tim_filename, entry->data_filename);
		if (entry->tim_filename) {
			if (!find_file(entry->tim_filename))
				complete = false;
			else
				none = false;
		}
		if (entry->data_filename) {
			if (!find_file(entry->data_filename))
				complete = false;
			else
				none = false;
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
	return -1;
}

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
			return -EINVAL;
		if (!found) {
			all_found = false;
		} else {
			num_found++;
			none_found = false;
		}
	}

	if (none_found) {
		WARN("No valid object groups found\n");
		return -EINVAL;
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

static int validate_hash(const struct object_entry *obj)
{
	int err;

	err = ehsm_verify_image(obj->data_file->data, &obj->li);

	if (err) {
		ERROR("Image hash failed for %s\n", obj->data_file->filename);
		return -EAUTH;
	}
	return 0;
}

static int check_files(void)
{
	struct object_entry *obj;
	int err;

	for_each_object(obj) {
		err = check_file_loc_size(obj->tim_file);
		if (err)
			return err;
		err = check_file_loc_size(obj->data_file);
		if (err)
			return err;
		err = validate_hash(obj);
	}
	return 0;
}

static int octeontx_update_fw_file_spi(struct file_entry *fentry,
				       uint32_t bus, uint32_t cs,
				       uint16_t flags)
{
	uint64_t offset = fentry->file_loc, xfer_len;
	int mode = SPI_ADDRESSING_24BIT, ret = 0;
	size_t size = fentry->file_size;
	const void *user_buffer = fentry->data;
	/* TODO: Add flag for backup image and switch to 32-bit addressing */

	if (flags & UPDATE_FLAG_BACKUP) {
		mode = SPI_ADDRESSING_32BIT;
		offset += BACKUP_IMAGE_OFFSET;
	}

	while (size > 0) {
		xfer_len = size < BUF_SIZE ? size : BUF_SIZE;
		memcpy((void *)wr_buffer, (const void *)user_buffer, xfer_len);

		if (spi_nor_erase(offset, mode, bus, cs)) {
			WARN("SPI: Erase flash failed for offset: 0x%llx, file: %s\n",
			     offset, fentry->filename);
			ret = -1;
			break;
		}

		if (spi_nor_write(wr_buffer, BUF_SIZE, offset,
				  mode, bus, cs) < 0) {
			WARN("SPI: Write flash failed for offset: 0x%llx, file: %s\n",
			     offset, fentry->filename);
			ret = -1;
			break;
		}
		if (spi_nor_read(rd_buffer, BUF_SIZE, offset,
				 mode, bus, cs) < 0) {
			WARN("SPI: Read flash failed for offset: 0x%llx, file: %s\n",
			     offset, fentry->filename);
			ret = -1;
			break;
		}
		if (memcmp(rd_buffer, wr_buffer, xfer_len)) {
			WARN("SPI: Compare data failed for file: %s\n",
			     fentry->filename);
			ret = -1;
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
static int octeontx_write_files_spi(uint32_t bus, uint32_t cs, uint16_t flags)
{
	struct file_entry *fentry;
	int err;

	for_each_file(fentry) {
		INFO("Writing file %s: location: 0x%llx, size: 0x%lx\n",
		     fentry->filename, fentry->file_loc, fentry->file_size);
		err = octeontx_update_fw_file_spi(fentry, bus, cs, flags);
		if (err)
			return err;
	}
	return 0;
}

int marvell_cust_verify_fw_update_image(const struct smc_update_descriptor *desc)
	__attribute__((weak));

int marvell_cust_verify_fw_update_image(const struct smc_update_descriptor *desc)
{
	return 0;
}

/**
 * Validates and updates the firmware in secure storage for CN10K.
 */
int octeontx_cn10k_update_fw(const struct smc_update_descriptor *desc)
{
	int err;

	const void *fw_image = (void *)desc->image_addr;
	size_t size = desc->image_size;
	uint32_t bus = desc->bus, cs = desc->cs;
	uint16_t flags = desc->update_flags;

	debug_fw_update("%s(%p, %zu, 0x%x, 0x%x)\n", __func__, fw_image,
			size, bus, cs);

	err = marvell_cust_verify_fw_update_image(desc);
	if (err) {
		WARN("Customer verification failed\n");
		goto error;
	}

	err = firm_update_init(fw_image, size);
	if (err) {
		WARN("Error parsing firmware\n");
		goto error;
	}

	debug_fw_update("%s: Processing TIMs\n", __func__);
	err = update_process_tims();
	if (err) {
		WARN("Error parsing TIMs\n");
		goto error;
	}
	debug_fw_update("%s: Checking groups\n", __func__);
	err = check_groups();
	if (err < 0)
		goto error;

	INFO("Validating objects...\n");
	err = check_files();
	if (err)
		goto error;

	INFO("Writing files\n");
	err = octeontx_write_files_spi(bus, cs, flags);
	if (err)
		goto error;
	INFO("Firmware update done.\n");
error:
	return err < 0 ? -1  : 0;
}

int spi_smc_update(uintptr_t desc_buf, uint64_t desc_size,
		   uint64_t dram_end)
{
	int err = 0, ns_map_size;
	struct smc_update_descriptor update_desc;
	uintptr_t addr = 0, size = 0;
	uint32_t bus, cs;
	uint64_t base_addr = 0;
	const uint64_t mask = ~((uint64_t)PAGE_SIZE_MASK);

	debug_fw_update("desc: 0x%lx, desc size: 0x%llx, dram size: 0x%llx\n",
			desc_buf, desc_size, dram_end);
	/* Round up to page size */
	ns_map_size = (desc_size + PAGE_SIZE - 1) & -PAGE_SIZE;

	/* Map non-secure memory buffer */
	/* Note that this needs to be page aligned */
	base_addr = desc_buf & mask;
	/* If descriptor crosses a page boundary, allocate another page */
	if ((desc_buf + desc_size) > (base_addr + ns_map_size)) {
		debug_fw_update("0x%llx > 0x%llx, increasing map size by 0x%x\n",
				desc_buf + desc_size, base_addr + ns_map_size,
				PAGE_SIZE);
		ns_map_size += PAGE_SIZE;
	}
	/* Do one final check */
	if (base_addr + ns_map_size >= dram_end) {
		WARN("Invalid descriptor address 0x%lx or size 0x%lx\n",
		     addr, size);
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

	octeontx_mmap_remove_dynamic_region_with_sync(base_addr, ns_map_size);
	base_addr = 0;
	ns_map_size = 0;

	/* Sanity checks */
	err = SMC_UNK;
	if (update_desc.magic != UPDATE_MAGIC) {
		WARN("Invalid magic value in descriptor\n");
		goto error;
	}

	/*
	 * NOTE: A lot more can be done to handle multiple versions for
	 * backwards compatibility, etc.
	 */
	if (update_desc.version != UPDATE_VERSION) {
		WARN("Unsupported descriptor version 0x%x\n",
		     update_desc.version);
		goto error;
	}
	addr = update_desc.image_addr;
	size = update_desc.image_size;
	bus = update_desc.bus;
	cs = update_desc.cs;

	if ((bus > MAX_SPI_BUS) || (cs > MAX_SPI_CS)) {
		WARN("Invalid bus 0x%x or chip select 0x%x\n", bus, cs);
		goto error;
	}

	if ((addr < NS_IMAGE_BASE) || (addr > (dram_end - 1)) ||
	    (addr % sizeof(uint64_t)) || ((addr + size) > (dram_end - 1))) {
		WARN("Invalid image address 0x%lx or size 0x%lx\n",
		     addr, size);
		goto error;
	}

	if (plat_octeontx_bcfg->spi_cfg[bus].cs[cs] != 1) {
		WARN("SPI BUS 0x%x chip select 0x%x is unavailable\n",
		     bus, cs);
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
		return -SPI_MMAP_ERR;
	}
	debug_fw_update("Adding image mapping, address: 0x%lx, base: 0x%llx, map size: 0x%x\n",
			addr, base_addr, ns_map_size);
	err = octeontx_mmap_add_dynamic_region_with_sync(base_addr, base_addr,
							 ns_map_size,
							 MT_RO | MT_NS);
	if (err) {
		WARN("FW Update: Image mmap failed (%d)\n", err);
		return -SPI_MMAP_ERR;
	}

	err = octeontx_cn10k_update_fw(&update_desc);
	if (err) {
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
