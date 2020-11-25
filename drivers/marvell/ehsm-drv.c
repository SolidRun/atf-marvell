/*
 * Copyright (C) 2020 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <assert.h>
#include <stdint.h>
#include <platform_def.h>
#include <arch.h>
#include <arch_helpers.h>
#include <common/bl_common.h>
#include <string.h>
#include <errno.h>
#include <octeontx_common.h>
#include <octeontx_io_storage.h>
#include <libtim.h>
#include <ehsm-hal.h>
#include <ehsm-security.h>
#include <ehsm-hash.h>
#include <ehsm.h>
#include <ehsm-drv.h>
#include <octeontx_security.h>

#define NONSECURE_BLOCK_SIZE	0x1000

static uint8_t ehsm_buffer[NONSECURE_BLOCK_SIZE] __aligned(16);

/**
 * Verifies an image against the hash stored in the TIM
 *
 * @param[in]	image	Pointer to image to hash
 * @param[in]	li	Load information from parsing TIM
 *
 * @return	0 on success, -EIO on eHSM errors, -ENEEDAUTH if
 *		no hash available, and -EAUTH if hash does not match
 */
int ehsm_verify_image(const void *image, const struct tim_load_info *li)
{
	enum sec_return ret;
	struct ehsm_handle ehandle;
	size_t size = li->image_length;
	bool nonsecure = ((uintptr_t)image >= TZDRAM_BASE + TZDRAM_SIZE);
	uint8_t digest_out[TIM_MAX_HASH_SIZE_BYTES];

	assert(image != NULL);
	assert(size > 0);
	assert(li != NULL);
	assert(li->hash_size >= 0 && li->hash_size <= sizeof(digest_out));

	/*
	 * Treat unaligned images as nonsecure so they get copied to an
	 * aligned buffer.
	 */
	if (ehsm_check_alignment(image))
		nonsecure = true;

	/* Make sure that a secure image doesn't become non-secure */
	if (!nonsecure &&
	    ((uintptr_t)image + size)  > TZDRAM_BASE + TZDRAM_SIZE) {
		ERROR("%s: Image crosses security boundary!\n", __func__);
		return -EINVAL;
	}

	if (!li->hshi_parsed)
		return -ENEEDAUTH;

	ret = ehsm_initialize(&ehandle);
	if (ret != SEC_NO_ERROR) {
		WARN("Error initializing eHSM (%d)\n", ret);
		return -EIO;
	}

	ret = ehsm_hash_zeroize(&ehandle);
	if (ret != SEC_NO_ERROR) {
		WARN("Error zeroizing eHSM (%d)\n", ret);
		return -EIO;
	}

	ret = ehsm_hash_init(&ehandle, li->hash);
	if (ret != SEC_NO_ERROR) {
		WARN("Could not initialize eHSM hash (%d)\n", ret);
		return -EIO;
	}

	/*
	 * The eHSM can only access secure memory so in this case we copy
	 * blocks of the non-secure data and update the hash for each
	 * block.  If the data is all secure then we don't need to do this.
	 */
	while (nonsecure && size > sizeof(ehsm_buffer)) {
		if (size > sizeof(ehsm_buffer)) {
			memcpy(ehsm_buffer, image, sizeof(ehsm_buffer));
			ret = ehsm_hash_update(&ehandle,
					       ehsm_buffer, sizeof(ehsm_buffer));
			if (ret) {
				WARN("Error updating image hash\n");
				return -EIO;
			}
			size -= sizeof(ehsm_buffer);
			image += sizeof(ehsm_buffer);
		}
	}
	if (nonsecure) {
		/* finish the hash with the final block.  The size can
		 * be zero.
		 */
		assert(size <= sizeof(ehsm_buffer));
		if (size > 0)
			memcpy(ehsm_buffer, image, size);
		ret = ehsm_hash_final(&ehandle, ehsm_buffer, digest_out, size);
	} else {
		/* Everything is secure so we can do it all at once */
		ret = ehsm_hash_final(&ehandle, image, digest_out, size);
	}

	if (ret != SEC_NO_ERROR) {
		WARN("Error finalizing hash (%d)\n", ret);
		return -EIO;
	}
	if (memcmp(digest_out, li->hash_data, li->hash_size)) {
		WARN("Hash mismatch between TIM and image\n");
		printf("Calculated: ");
		for (int i = 0; i < li->hash_size; i++)
			printf("%02x", digest_out[i]);
		printf("\nTIM:        ");
		for (int i = 0; i < li->hash_size; i++)
			printf("%02x", li->hash_data[i]);
		printf("\nImage size: 0x%lx, ehsm size: 0x%x\n", size,
		       li->image_length);
		return -EAUTH;
	}

	return 0;
}
