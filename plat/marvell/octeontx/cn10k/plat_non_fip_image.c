/*
 * Copyright (c) 2020 Marvell.
 * This program is provided "as is" without any warranty of any kind,
 * and is distributed under the applicable Marvell proprietary limited use
 * license agreement.
 */

#include <assert.h>
#include <bl_common.h>		/* For ARRAY_SIZE */
#include <debug.h>
#include <stdio.h>
#include <drivers/io/io_driver.h>
#include <drivers/io/io_spi.h>
#include <drivers/io/io_mmc.h>
#include <drivers/io/io_storage.h>
#include <platform_def.h>
#include <string.h>
#include <octeontx_common.h>
#include <octeontx_utils.h>
#include <plat_board_cfg.h>
#include <spi.h>
#include <strncasecmp.h>

#include <cavm-arch.h>
#include <octeontx_io_storage.h>

#define HEADER_MAGIC 0x58544e4f4554434fL

typedef struct
{
	uint32_t    instruction;    /* Raw instruction for skipping header */
	uint32_t    length;         /* Length of the image, includes header */
	uint64_t    magic;          /* Magic string "OCTEONTX" */
	uint32_t    crc32;          /* CRC32 of image + header. These bytes are zero when calculating the CRC */
	uint32_t    reserved1;      /* Zero, reserved for future use */
	char        name[64];       /* ASCII Image name. Must always end in zero */
	char        version[32];    /* ASCII Version. Must always end in zero */
	uint64_t    reserved[17];   /* Zero, reserved for future use */
} ebf_image_header_t;

/**
 * Validate image header
 *
 * @param header Header to validate
 *
 * @return 1 if header is valid, zero if invalid
 */
int image_header_is_valid(const ebf_image_header_t *header)
{
	/* First instruction can't be zero */
	int bad = (header->instruction == 0);
	/* Make sure the length is somewhat sane. 1GB is an arbitrary limit */
	bad |= (header->length <= sizeof(*header)) || (header->length > 1<<30);

	/* Check the magic number */
	bad |= (header->magic != HEADER_MAGIC);
	/* No constraints on CRC */
	/* Reserved space must be zero */
	bad |= (header->reserved1 != 0);
	/* Name must not be empty and must end in a zero */
	bad |= (header->name[0] == 0) || (header->name[63] != 0);
	/* Version must not be empty and must end in a zero */
	bad |= (header->version[0] == 0) || (header->version[31] != 0);
	/* Reserved space must be zero */
	for (int i = 0; i < 17; i++)
		bad |= (header->reserved[i] != 0);

	return !bad;
}

/**
 * Verify image at the given address is good
 *
 * @param image  Pointer to the image
 *
 * @return Zero on success, negative on failure
 */
int image_verify(const void *image)
{
    if (!image_header_is_valid(image))
        return -1;
    return 0;
}


