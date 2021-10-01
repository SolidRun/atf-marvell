/*
 * Copyright (C) 2020 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <assert.h>
#include <stdint.h>
#include <platform_def.h>
#include <plat_board_cfg.h>
#include <arch.h>
#include <arch_helpers.h>
#include <common/bl_common.h>
#include <string.h>
#include <utils.h>
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
#include <plat_mem_alloc.h>

#define NONSECURE_BLOCK_SIZE	0x1000

__aligned(32) static uint8_t ehsm_buffer[NONSECURE_BLOCK_SIZE];

void *ehsm_alloc(size_t size)
{
	return octeontx_memalign(EHSM_ALIGNMENT, size);
}

void *ehsm_zalloc(size_t size)
{
	void *ptr = octeontx_memalign(EHSM_ALIGNMENT, size);
	if (ptr)
		zeromem(ptr, size);
	return ptr;
}

void ehsm_free(void *ptr)
{
	octeontx_free(ptr);
}

static void print_buffer(const uint8_t *buffer, size_t size)
{
	size_t offset;

	for (offset = 0; offset < size; offset++) {
		if (!(offset % 16))
			printf("%s%08lx: ", offset ? "\n" : "", offset);
		else if (offset % 16 == 8)
			printf(" - ");
		else if (offset % 4 == 0)
			printf("  ");
		else
			printf(" ");
		printf("%02x", buffer[offset]);
	}
	printf("\n");
}

/**
 * Initialize verification hash
 *
 * @param[in]	li	Information from the TIM about the object
 * @param[out]	ehandle	eHSM handle
 *
 * @return	0 for success, -ENEEDAUTH if no hash available and -EIO
 *		for eHSM errors.
 */
int ehsm_verify_init(const struct tim_load_info *li,
		     struct ehsm_handle *ehandle)
{
	enum ehsm_hash_alg hash_alg;
	enum sec_return ret;

	if (!li->hshi_parsed)
		return -ENEEDAUTH;

	if (cavm_is_platform(PLATFORM_EMULATOR)) {
		WARN("EHSM disabled in emulator\n");
		return 0;
	}

	hash_alg = ehsm_tim_hash_alg_to_ehsm(li->hash);

	if (hash_alg == (enum ehsm_hash_alg)-1)
		return -ENEEDAUTH;

	ret = ehsm_initialize(ehandle);
	if (ret != SEC_NO_ERROR) {
		WARN("Error initializing eHSM (%d)\n", ret);
		return -EIO;
	}
	ret = ehsm_hash_init(ehandle, li->hash);
	if (ret != SEC_NO_ERROR) {
		WARN("Could not initialize eHSM hash (%d)\n", ret);
		return -EIO;
	}
	return 0;
}

/**
 * Verifies an image against the hash stored in the TIM
 *
 * @param[in]	image	Pointer to image to hash
 * @param[in]	li	Load information from parsing TIM
 * @param[out]	digest	calculated digest if non-NULL
 * @param[out]	hash_size	hash size in bytes if non-NULL
 *
 * @return	0 on success, -EIO on eHSM errors, -ENEEDAUTH if
 *		no hash available, and -EAUTH if hash does not match
 */
int ehsm_verify_image(const void *image, const struct tim_load_info *li,
		      uint8_t *digest, int *hash_size)
{
	enum sec_return ret;
	struct ehsm_handle ehandle;
	enum ehsm_hash_alg hash_alg;
	size_t size = li->image_length;
	bool nonsecure = ((uintptr_t)image >= TZDRAM_BASE + TZDRAM_SIZE);
	uint8_t digest_out[TIM_MAX_HASH_SIZE_BYTES];

	assert(image != NULL);
	assert(size > 0);
	assert(li != NULL);
	assert(li->hash_size >= 0 && li->hash_size <= sizeof(digest_out));

	if (cavm_is_platform(PLATFORM_EMULATOR)) {
		WARN("Verification disabled in emulator\n");
		return 0;
	}
	/*
	 * Treat unaligned images as nonsecure so they get copied to an
	 * aligned buffer.
	 */
	if (ehsm_check_alignment(image))
		nonsecure = true;

	/* Make sure that a secure image doesn't become non-secure */
	if (!nonsecure &&
	    ((uintptr_t)image + size) > TZDRAM_BASE + TZDRAM_SIZE) {
		ERROR("%s: Image crosses security boundary!\n", __func__);
		return -EINVAL;
	}

	if (!li->hshi_parsed)
		return -ENEEDAUTH;

	hash_alg = ehsm_tim_hash_alg_to_ehsm(li->hash);
	if (hash_alg == (enum ehsm_hash_alg)-1)
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

	/* Fill with value to detect if it is not filled in by the eHSM */
	memset(digest_out, 0xbd, sizeof(digest_out));
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
			if (ret != SEC_NO_ERROR) {
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
	if (digest)
		memcpy(digest, digest_out, li->hash_size);
	if (hash_size)
		*hash_size = li->hash_size;
	if (memcmp(digest_out, li->hash_data, li->hash_size)) {
		char hash_str[256];
		char hash_digit[4];

		hash_str[0] = '\0';
		WARN("Hash mismatch between TIM and image\n");
		for (int i = 0; i < li->hash_size; i++) {
			snprintf(hash_digit, sizeof(hash_digit),
				 "%02x ", digest_out[i]);
			strlcat(hash_str, hash_digit, sizeof(hash_str));
		}

		WARN("Calculated: %s\n", hash_str);
		hash_str[0] = '\0';
		for (int i = 0; i < li->hash_size; i++) {
			snprintf(hash_digit, sizeof(hash_digit),
				 "%02x ", li->hash_data[i]);
			strlcat(hash_str, hash_digit, sizeof(hash_str));
		}
		WARN("TIM:        %s\n", hash_str);
		WARN("Image size: 0x%lx, ehsm size: 0x%x\n", size,
		     li->image_length);
		INFO("PTR: %p\n", nonsecure ? ehsm_buffer : image);
		if (nonsecure)
			print_buffer(ehsm_buffer,
			     size <= sizeof(ehsm_buffer) ?
			     size : sizeof(ehsm_buffer));
		else
			print_buffer(image, li->image_length);
		return -EAUTH;
	}

	return 0;
}

/**
 * Update hash with block
 *
 * @param	ehandle	eHSM handle
 * @param[in]	ptr	Pointer to block to hash
 * @param	size	block size, must be multiple of 64 bytes
 *
 * @return	0 for success, -EINVAL with bad block size, -EIO for eHSM errors
 */
int ehsm_verify_update(struct ehsm_handle *ehandle, const void *ptr,
		       size_t size)
{
	bool nonsecure = ((uintptr_t)ptr + size >= TZDRAM_BASE + TZDRAM_SIZE);
	unsigned int blk_size;
	enum sec_return ret;

	if (ehsm_check_alignment(ptr))
		nonsecure = true;

	if (size % 64) {
		ERROR("Error: Invalid block size 0x%lx, must be multiple of 64\n",
		      size);
		return -EINVAL;
	}

	if (cavm_is_platform(PLATFORM_EMULATOR))
		return 0;

	if (nonsecure) {
		while (size > 0) {
			if (size < sizeof(ehsm_buffer))
				blk_size = size;
			else
				blk_size = sizeof(ehsm_buffer);
			memcpy(ehsm_buffer, ptr, blk_size);
			ret = ehsm_hash_update(ehandle, ehsm_buffer, blk_size);
			if (ret != SEC_NO_ERROR)
				break;
			size -= blk_size;
			ptr += blk_size;
		}
	} else {
		ret = ehsm_hash_update(ehandle, ptr, size);
	}
	if (ret != SEC_NO_ERROR) {
		WARN("Error %d updating image hash\n", ret);
		return -EIO;
	}
	return 0;
}

/**
 * Finish verifying hash
 *
 * @param	ehandle	eHSM handle
 * @param[in]	ptr	Last block of data to verify
 * @param	size	size of last block
 * @param[in]	li	TIM load info
 * @param[out] digest	Calculated hash value.  Must be able to hold 512 bits.
 *			This may be NULL.
 * @param[out] hash_size	Size of hash in bytes, may be NULL
 *
 * @return	0 for success, -EIO for eHSM error, -EAUTH for mismatch hash
 */
int ehsm_verify_final(struct ehsm_handle *ehandle,
		      const void *ptr, size_t size,
		      const struct tim_load_info *li,
		      uint8_t *digest, int *hash_size)
{
	enum sec_return ret = SEC_NO_ERROR;
	bool nonsecure = ((uintptr_t)ptr + size >= TZDRAM_BASE + TZDRAM_SIZE);
	uint8_t digest_out[TIM_MAX_HASH_SIZE_BYTES];

	if (ehsm_check_alignment(ptr))
		nonsecure = true;

	if (cavm_is_platform(PLATFORM_EMULATOR)) {
		WARN("EHSM hashing disabled in emulator\n");
		return 0;
	}

	if (nonsecure) {
		while (size > sizeof(ehsm_buffer)) {
			memcpy(ehsm_buffer, ptr, sizeof(ehsm_buffer));
			ret = ehsm_hash_update(ehandle, ehsm_buffer,
					       sizeof(ehsm_buffer));
			if (ret != SEC_NO_ERROR) {
				WARN("Error %d updating hash\n", ret);
				return -EIO;
			}
			size -= sizeof(ehsm_buffer);
			ptr += sizeof(ehsm_buffer);
		}

		memcpy(ehsm_buffer, ptr, size);
		ret = ehsm_hash_final(ehandle, ehsm_buffer, digest_out,
				      size);
	} else {
		ret = ehsm_hash_final(ehandle, ptr, digest_out, size);
	}
	if (ret) {
		WARN("Error %d finalizing hash\n", ret);
		return -EIO;
	}
	if (digest)
		memcpy(digest, digest_out, li->hash_size);
	if (hash_size)
		*hash_size = li->hash_size;
	if (memcmp(digest_out, li->hash_data, li->hash_size)) {
		char hash_str[256];
		char hash_digit[4];

		hash_str[0] = '\0';
		WARN("Hash mismatch between TIM and image\n");
		for (int i = 0; i < li->hash_size; i++) {
			snprintf(hash_digit, sizeof(hash_digit),
				 "%02x ", digest_out[i]);
			strlcat(hash_str, hash_digit, sizeof(hash_str));
		}
		WARN("Calculated: %s\n", hash_str);
		hash_str[0] = '\0';
		for (int i = 0; i < li->hash_size; i++) {
			snprintf(hash_digit, sizeof(hash_digit),
				 "%02x ", li->hash_data[i]);
			strlcat(hash_str, hash_digit, sizeof(hash_str));
		}
		WARN("TIM:        %s\n", hash_str);
		WARN("Image size: 0x%lx, ehsm size: 0x%x\n", size,
		     li->image_length);
		print_buffer(nonsecure ? ehsm_buffer : ptr,
			     size <= sizeof(ehsm_buffer) ?
			     size : sizeof(ehsm_buffer));
		return -EAUTH;
	}

	return 0;
}

/**
 * Verify the digital signature stored in a TIM
 *
 * @param	th		Pointer to TIM handle
 * @param[in]	hinfo		TIM header info pointer
 * @param[in]	tim_buffer	Pointer to TIM, must be 32-byte aligned
 *
 * @return	0 for success, -1 if failed
 */
int ehsm_verify_tim_digital_signature(struct tim_handle *th,
				      const struct tim_header_info *hinfo,
				      const uint8_t *tim_buffer)
{
	struct tim_signature_info sinfo;
	struct ehsm_handle eh;
	struct sec_auth_params sec_params;
	enum tim_return tret;
	enum sec_return sret;

	switch (hinfo->trust_mode) {
	case TIM_UNTRUSTED:
		return 0;
	case TIM_SECURE:
	case TIM_SECURE_ENCRYPTED:
	case TIM_SECURE_ENCRYPTED_MEASURED:
	case TIM_ROOT_SECURE:
	case TIM_ROOT_SECURE_ENCRYPTED:
	case TIM_ROOT_SECURE_ENCRYPTED_MEASURED:
		break;
	default:
		ERROR("Invalid TIM trust mode 0x%x\n", hinfo->trust_mode);
		return -EINVAL;
	}

	tret = tim_get_signature_info(th, &sinfo);
	if (tret != TIM_NO_ERROR) {
		ERROR("Error %d obtaining TIM signature information\n", tret);
		return -EINVAL;
	}

	if (ehsm_initialize(&eh) != 0) {
		ERROR("Error initializing EHSM\n");
		return -EIO;
	}
	sret = ehsm_tim_sig_info_to_sec_msg_params(&sec_params, &sinfo,
						   tim_buffer, hinfo->unsigned_tim_size);
	if (sret != SEC_NO_ERROR) {
		ERROR("Error %d converting TIM signature to EHSM\n", sret);
		return -EAUTH;
	}
	sret = ehsm_verify_auth_message(&eh, &sec_params);
	if (sret != SEC_NO_ERROR) {
		ERROR("Digital signature verification failed: %d\n", sret);
		return -EAUTH;
	}
	return 0;
}
