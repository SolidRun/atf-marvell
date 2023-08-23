/*
 * Copyright (c) 2020 Marvell.
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
#include <octeontx_mmap_utils.h>

#undef DEBUG_ATF_EHSM

#if DEBUG_ATF_EHSM
# if defined(MRVL_TF_LOG_MODULE)
#  define debug_ehsm(...) tf_log(LOG_MARKER_NOTICE __VA_ARGS__)
# else
#  define debug_ehsm(...) printf(__VA_ARGS__)
# endif
#else
# define debug_ehsm(...) ((void)(0))
#endif

#define NONSECURE_BLOCK_SIZE	0x1000
#define EHSM_MMAP_ERR		2

#define MMAP_IMAGE_BUF_EN	((uint32_t)1 << 31)
#define MMAP_ATTR(attr)		((uint32_t)attr & (MMAP_IMAGE_BUF_EN - 1))

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
			debug_ehsm("%s%08lx: ", offset ? "\n" : "", offset);
		else if (offset % 16 == 8)
			debug_ehsm(" - ");
		else if (offset % 4 == 0)
			debug_ehsm("  ");
		else
			debug_ehsm(" ");
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
	__aligned(64) uint8_t digest_out[TIM_MAX_HASH_SIZE_BYTES];

	debug_ehsm("%s(%p, %p, %p, %p) size: 0x%lx\n", __func__, image, li,
		   digest, hash_size, size);
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
	if (ehsm_check_alignment(image)) {
		INFO("Image is not aligned, using copy buffer.\n");
		nonsecure = true;
	}

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
	debug_ehsm("Verifying 0x%lx byte %ssecure image at %p\n",
		   size, nonsecure ? "non-" : "", image);
	if (nonsecure) {
		while (size > sizeof(ehsm_buffer)) {
			memcpy(ehsm_buffer, image, sizeof(ehsm_buffer));
			ret = ehsm_hash_update(&ehandle, ehsm_buffer,
					       sizeof(ehsm_buffer));
			if (ret != SEC_NO_ERROR) {
				WARN("Error updating image hash (%d)\n", ret);
				return -EIO;
			}
			size -= sizeof(ehsm_buffer);
			image += sizeof(ehsm_buffer);
		}
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

	inv_dcache_range((uintptr_t)digest_out, TIM_MAX_HASH_SIZE_BYTES);

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
 * @param[in]	verbose	flag to print debug info
 * @param[out] digest	Calculated hash value.  Must be able to hold 512 bits.
 *			This may be NULL.
 * @param[out] hash_size	Size of hash in bytes, may be NULL
 *
 * @return	0 for success, -EIO for eHSM error, -EAUTH for mismatch hash
 */
int ehsm_verify_final(struct ehsm_handle *ehandle,
		      const void *ptr, size_t size,
		      const struct tim_load_info *li,
		      bool verbose,
		      uint8_t *digest, int *hash_size)
{
	enum sec_return ret = SEC_NO_ERROR;
	bool nonsecure = ((uintptr_t)ptr + size >= TZDRAM_BASE + TZDRAM_SIZE);
	__aligned(64) uint8_t digest_out[TIM_MAX_HASH_SIZE_BYTES];

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

	inv_dcache_range((uintptr_t)digest_out, TIM_MAX_HASH_SIZE_BYTES);

	if (digest)
		memcpy(digest, digest_out, li->hash_size);
	if (hash_size)
		*hash_size = li->hash_size;
	if (memcmp(digest_out, li->hash_data, li->hash_size)) {
		char hash_str[256];
		char hash_digit[4];

		hash_str[0] = '\0';
		WARN("Hash mismatch between TIM and image\n");
		if (verbose) {
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
		}
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
int ehsm_verify_tim_digital_signature(const struct tim_handle *th,
				      const struct tim_header_info *hinfo,
				      const uint8_t *tim_buffer)
{
	const struct tim_signature_info *sinfo;
	struct ehsm_handle eh;
	struct sec_auth_params sec_params;
	enum tim_return tret;
	enum sec_return sret = SEC_NO_ERROR;
	int ret;
	struct ehsm_bootrom_status_reg bootrom_status;
	bool has_hash = th->load_info.hshi_parsed;
	bool has_data = th->load_info.lodi_parsed;
	uint8_t *buffer = NULL;
	bool key_found = false;

	if (cavm_is_platform(PLATFORM_EMULATOR)) {
		WARN("EHSM disabled in emulator\n");
		return 0;
	}

	if (ehsm_initialize(&eh) != 0) {
		ERROR("Error initializing EHSM\n");
		ret = -EIO;
		goto done;
	}
	if (ehsm_get_bootrom_status(&eh, &bootrom_status) != SEC_NO_ERROR) {
		ERROR("Error getting bootrom status\n");
		ret = -EIO;
		goto done;
	}
	/* Make sure we have the proper trust mode */
	switch (hinfo->trust_mode) {
	case TIM_UNTRUSTED:
		if (bootrom_status.u.b.secure_boot ||
		    bootrom_status.u.b.encrypted_boot ||
		    bootrom_status.u.b.measured_boot) {
			ERROR("Secure boot image required\n");
			ret = -EAUTH;
			goto done;
		}
		return 0;
	case TIM_SECURE:
		if (bootrom_status.u.b.encrypted_boot ||
		    bootrom_status.u.b.measured_boot) {
			ERROR("Encrypted or measured image required\n");
			ret = -EAUTH;
			goto done;
		}
		if (has_data && !has_hash) {
			ERROR("Hash missing for TIM object data\n");
			ret = -EAUTH;
			goto done;
		}
		break;
	case TIM_SECURE_ENCRYPTED:
		if (bootrom_status.u.b.measured_boot) {
			ERROR("Measured image required\n");
			ret = -EAUTH;
			goto done;
		}
		if (has_data && !has_hash) {
			ERROR("Hash missing for TIM object data\n");
			ret = -EAUTH;
			goto done;
		}
		ret = -EINVAL;	/* TODO */
		goto done;
		break;
	case TIM_SECURE_ENCRYPTED_MEASURED:
		if (has_data && !has_hash) {
			ERROR("Hash missing for TIM object data\n");
			ret = -EAUTH;
			goto done;
		}
		return -EINVAL;	/* TODO */
		break;
	/* TODO: ROOT secure stuff */
	case TIM_ROOT_SECURE:
	case TIM_ROOT_SECURE_ENCRYPTED:
	case TIM_ROOT_SECURE_ENCRYPTED_MEASURED:
		ret = -EINVAL;	/* TODO */
		goto done;
	default:
		ERROR("Invalid TIM trust mode 0x%x\n", hinfo->trust_mode);
		ret = -EINVAL;
		goto done;
	}

	sinfo = NULL;
	/* Allocate aligned buffer */
	buffer = ehsm_alloc(hinfo->signed_tim_size);
	if (buffer == NULL) {
		ret = -ENOMEM;
		goto done;
	}
	memcpy(buffer, tim_buffer, hinfo->signed_tim_size);

	do {
		tret = tim_get_next_signature_info(th, &sinfo);
		if (tret != TIM_NO_ERROR || sinfo == NULL) {
			ERROR("No more signatures to check\n");
			ret = -EINVAL;
			break;
		}
		if (!sinfo->ds_parsed) {
			continue;
		}
		sret = ehsm_tim_sig_info_to_sec_msg_params(&sec_params, sinfo,
							   buffer,
						hinfo->unsigned_tim_size);
		if (sret != SEC_NO_ERROR) {
			ERROR("Error %d converting TIM signature to EHSM\n", sret);
			ret = -EAUTH;
			goto done;
		}
		sret = ehsm_verify_auth_message(&eh, &sec_params);
		if (sret == SEC_NO_ERROR) {
			key_found = true;
			break;
		}
	} while (!key_found);
	if (!key_found) {
		ERROR("Digital signature verification failed: %d\n", sret);
		ret = -EAUTH;
		goto done;
	} else {
		ret = 0;
	}
done:
	if (buffer != NULL && buffer != tim_buffer)
		ehsm_free(buffer);

	return ret;
}

/**
 * eHSM Read CSR
 *
 * @param[in]	reg_off Read register offset
 * @param[out]	reg_val	Register value
 *
 * @return  0 for success, -EIO for eHSM errors and -EINVAL
 *      for invalid register offset
 */
int ehsm_csr_read(int reg_off, uint32_t *reg_val)
{
	struct ehsm_handle ehandle;
	enum sec_return ret;

	if (cavm_is_platform(PLATFORM_EMULATOR)) {
		WARN("EHSM disabled in emulator\n");
		return 0;
	}

	ret = ehsm_initialize(&ehandle);
	if (ret != SEC_NO_ERROR) {
		WARN("Error initializing eHSM (%d)\n", ret);
		return -EIO;
	}

	switch (reg_off) {
	case BOOTROM_STATUS:
	{
		struct ehsm_bootrom_status_reg bootrom_status;

		ret = ehsm_get_bootrom_status(&ehandle, &bootrom_status);
		*reg_val = bootrom_status.u.r;
	}
	break;
	case ROOT_TRUST_STATUS:
	{
		struct ehsm_root_of_trust_status rot_status;

		ret = ehsm_get_root_of_trust_status(&ehandle, &rot_status);
		*reg_val = rot_status.u.r;
	}
	break;
	case CHAIN_OF_TRUST_STATUS:
	{
		struct ehsm_chain_of_trust_status_reg cot_status;

		ret = ehsm_get_chain_of_trust_status(&ehandle, &cot_status);
		*reg_val = cot_status.u.r;
	}
	break;
	case UUID0:
	{
		uint32_t uuid[3];

		ret = ehsm_get_uuid(&ehandle, uuid);
		*reg_val = uuid[0];
	}
	break;
	case UUID1:
	{
		uint32_t uuid[3];

		ret = ehsm_get_uuid(&ehandle, uuid);
		*reg_val = uuid[1];
	}
	break;
	case UUID2:
	{
		uint32_t uuid[3];

		ret = ehsm_get_uuid(&ehandle, uuid);
		*reg_val = uuid[2];
	}
	break;
	case KEY_REVOC_STATUS:
	{
		struct ehsm_key_revocation_status_reg revoc_status;

		ret = ehsm_get_key_revocation_status(&ehandle, &revoc_status);
		*reg_val = revoc_status.u.r;
	}
	break;
	case FW_SEC_VER:
	{
		struct ehsm_fw_security_version_reg fw_sec_ver;
		uint32_t loader_sec_version, main_fw_sec_version;
		bool kak_id_valid;
		uint32_t active_kak_id;

		ret = ehsm_get_fw_security_version(&ehandle,
						   &loader_sec_version,
						   &main_fw_sec_version);
		if (ret != SEC_NO_ERROR)
			break;
		ret = ehsm_get_active_kak_id(&ehandle, &active_kak_id, &kak_id_valid);
		if (ret != SEC_NO_ERROR)
			break;
		fw_sec_ver.u.r = 0;
		fw_sec_ver.u.b.active_kak_id = active_kak_id;
		fw_sec_ver.u.b.kak_id_valid = kak_id_valid;
		fw_sec_ver.u.b.loader_fw_sec_version = loader_sec_version;
		fw_sec_ver.u.b.main_fw_sec_version = main_fw_sec_version;
		*reg_val = fw_sec_ver.u.r;
	}
	break;
	default:
		ERROR("Invalid Register offset 0x%x\n", reg_off);
		return -EINVAL;
	}

	if (ret != SEC_NO_ERROR) {
		WARN("Error in eHSM read CSR (%d)\n", ret);
		return -EIO;
	}

	return 0;
}

/**
 * eHSM PIE get encrypted session key
 *
 * @param[in]	user_buf DRAM address of structure (struct pie_session_key)
 * @param[in]	nsec	 boolean Non-secure or Secure
 * @param[in]	size	 size of structure (struct pie_session_key)
 *
 * @return  0 for success, -EIO for eHSM errors
 */
int ehsm_pie_get_session_key(uintptr_t user_buf, bool nsec, uintptr_t size)
{
	struct pie_session_key *session_key = NULL;
	struct pie_session_key pie_encrypt_key;
	struct ehsm_handle ehandle;
	enum sec_return ret;
	uint32_t attr, map_required;
	const uint64_t mask = ~((uint64_t)PAGE_SIZE_MASK);
	int err = 0, ns_map_size = 0;
	uint64_t base_addr = 0;

	if (cavm_is_platform(PLATFORM_EMULATOR)) {
		WARN("EHSM disabled in emulator\n");
		return 0;
	}

        if (nsec)
                attr = MMAP_IMAGE_BUF_EN | MT_RW | MT_NS;
        else
                attr = 0;

	map_required = MMAP_IMAGE_BUF_EN & attr;

	if (map_required) {

		/* Round up to page size */
		ns_map_size = (size + PAGE_SIZE - 1) & -PAGE_SIZE;

		/* Map non-secure memory buffer */
		/* Note that this needs to be page aligned */
		base_addr = user_buf & mask;
		/* If user_buf crosses a page boundary, allocate another page */
		if ((user_buf + size) > (base_addr + ns_map_size)) {
			ns_map_size += PAGE_SIZE;
		}

		/* Map Non-secure memory buffer */
		err = octeontx_mmap_add_dynamic_region_with_sync(base_addr, base_addr,
				ns_map_size, MMAP_ATTR(attr));
		if (err) {
			ERROR("eHSM PIE: mmap failed (%d)\n", err);
			return -EHSM_MMAP_ERR;
		}
	}

	memcpy((void *)&pie_encrypt_key, (void *)user_buf, sizeof(pie_encrypt_key));
	session_key = &pie_encrypt_key;

	ret = ehsm_initialize(&ehandle);
	if (ret != SEC_NO_ERROR) {
		ERROR("Error initializing eHSM (%d)\n", ret);
		err = -EIO;
		goto error;
	}

	ret = ehsm_oaep_rsa_encrypt_session_key(&ehandle,
					session_key->pkcs_alg,
					session_key->session_key_len_bit,
					session_key->pubkey,
					session_key->label,
					session_key->label_len_byte,
					NULL,
					session_key->encrypt_session_key,
					session_key->token);

	if (ret != SEC_NO_ERROR) {
		WARN("eHSM PIE: Error in getting eHSM encrypted session key (%d)\n", ret);
		err = -EIO;
		goto error;
	}

	memcpy((void *)user_buf, (void *)&pie_encrypt_key, sizeof(pie_encrypt_key));

error:
	/* unmap non-secure memory buffer */
	if (map_required && base_addr && ns_map_size)
		octeontx_mmap_remove_dynamic_region_with_sync(base_addr, ns_map_size);

	return err;
}

/**
 * eHSM PIE Root-Key-Encryption-Key (RKEK) protected provision
 *
 * @param[in]	user_buf DRAM address of structure (struct pie_rkek)
 * @param[in]	nsec	 boolean Non-secure or Secure
 * @param[in]	size	 size of structure (struct pie_rkek)
 *
 * @return  0 for success, -EIO for eHSM errors
 */
int ehsm_pie_rkek_protected_provision(uintptr_t user_buf, bool nsec, uintptr_t size)
{
	struct pie_rkek *rkek_key = NULL;
	struct pie_rkek pie_rkek_key;
	struct ehsm_handle ehandle;
	enum sec_return ret;
	uint32_t attr, map_required;
	const uint64_t mask = ~((uint64_t)PAGE_SIZE_MASK);
	int err = 0, ns_map_size = 0;
	uint64_t base_addr = 0;

	if (cavm_is_platform(PLATFORM_EMULATOR)) {
		WARN("EHSM disabled in emulator\n");
		return 0;
	}

        if (nsec)
                attr = MMAP_IMAGE_BUF_EN | MT_RW | MT_NS;
        else
                attr = 0;

	map_required = MMAP_IMAGE_BUF_EN & attr;

	if (map_required) {

		/* Round up to page size */
		ns_map_size = (size + PAGE_SIZE - 1) & -PAGE_SIZE;

		/* Map non-secure memory buffer */
		/* Note that this needs to be page aligned */
		base_addr = user_buf & mask;
		/* If user_buf crosses a page boundary, allocate another page */
		if ((user_buf + size) > (base_addr + ns_map_size)) {
			ns_map_size += PAGE_SIZE;
		}

		/* Map Non-secure memory buffer */
		err = octeontx_mmap_add_dynamic_region_with_sync(base_addr, base_addr,
				ns_map_size, MMAP_ATTR(attr));
		if (err) {
			ERROR("eHSM PIE: mmap failed (%d)\n", err);
			return -EHSM_MMAP_ERR;
		}
	}

	memcpy((void *)&pie_rkek_key, (void *)user_buf, sizeof(pie_rkek_key));
	rkek_key = &pie_rkek_key;;

	ret = ehsm_initialize(&ehandle);
	if (ret != SEC_NO_ERROR) {
		ERROR("Error initializing eHSM (%d)\n", ret);
		err = -EIO;
		goto error;
	}

	ret = ehsm_rkek_protected_provision(&ehandle,
					rkek_key->session_key_len_bit,
					rkek_key->aes_mode,
					rkek_key->rkek_key_len_bit,
					rkek_key->iv,
					rkek_key->iv_len_byte,
					rkek_key->aad_len_byte,
					rkek_key->tag_len_byte,
					rkek_key->token,
					rkek_key->rkek_enc,
					rkek_key->provision_opt);

	if (ret != SEC_NO_ERROR) {
		WARN("eHSM PIE: Error in rkek protected provision (%d)\n", ret);
		err = -EIO;
		goto error;
	}

	memcpy((void *)user_buf, (void *)&pie_rkek_key, sizeof(pie_rkek_key));

error:
	/* unmap non-secure memory buffer */
	if (map_required && base_addr && ns_map_size)
		octeontx_mmap_remove_dynamic_region_with_sync(base_addr, ns_map_size);

	return err;
}

/**
 * Generate a 256-bit AUTH_CMD_PACKAGE that captures the 96-bit challenge
 * value
 *
 * @param[in]	auth_cmd_id	Auth command ID
 * @param[in]	user_buf	DRAM address of structure
 *				(struct ehsm_authenticated_cmd_package)
 * @param[in]	nsec		boolean Non-secure or Secure
 * @param[in]	size		size of structure
 *				(struct ehsm_authenticated_cmd_package)
 *
 * @return  0 for success, -EIO for eHSM errors
 */
int ehsm_smc_get_challenge(uint32_t auth_cmd_id,
			   uintptr_t user_buf, bool nsec, uintptr_t size)
{
	struct ehsm_authenticated_cmd_package acmd;
	enum ehsm_auth_cmd_id auth_id;
	struct ehsm_handle ehandle;
	enum sec_return ret;
	uint32_t attr, map_required;
	const uint64_t mask = ~((uint64_t)PAGE_SIZE_MASK);
	int err = 0, ns_map_size = 0;
	uint64_t base_addr = 0;

	if (cavm_is_platform(PLATFORM_EMULATOR)) {
		WARN("EHSM disabled in emulator\n");
		return 0;
	}

	switch (auth_cmd_id) {
	case AUTH_CMD_ID_LOAD_UDS:
		auth_id = AUTH_CMD_LOAD_UDS;
		break;
	case AUTH_CMD_ID_ADV_FA_LCS:
		auth_id = AUTH_CMD_ADV_FA_LCS;
		break;
	case AUTH_CMD_ID_ADV_KAK_REVOCATION:
		auth_id = AUTH_CMD_ADV_KAK_REVOCATION;
		break;
	case AUTH_CMD_ID_ADV_KM_VERSION:
		auth_id = AUTH_CMD_ADV_KM_VERSION;
		break;
	case AUTH_CMD_ID_ADV_LOADER_FW_VERSION:
		auth_id = AUTH_CMD_ADV_LOADER_FW_VERSION;
		break;
	case AUTH_CMD_ID_ADV_MAIN_FW_VERSION:
		auth_id = AUTH_CMD_ADV_MAIN_FW_VERSION;
		break;
	default:
		ERROR("Invalid AUTH_CMD_ID 0x%x\n", auth_cmd_id);
		return -EINVAL;
	}

	if (nsec)
		attr = MMAP_IMAGE_BUF_EN | MT_RW | MT_NS;
	else
		attr = 0;

	map_required = MMAP_IMAGE_BUF_EN & attr;

	if (map_required) {

		/* Round up to page size */
		ns_map_size = (size + PAGE_SIZE - 1) & -PAGE_SIZE;

		/* Map non-secure memory buffer */
		/* Note that this needs to be page aligned */
		base_addr = user_buf & mask;
		/* If user_buf crosses a page boundary, allocate another page */
		if ((user_buf + size) > (base_addr + ns_map_size)) {
			ns_map_size += PAGE_SIZE;
		}

		/* Map Non-secure memory buffer */
		err = octeontx_mmap_add_dynamic_region_with_sync(base_addr,
				base_addr, ns_map_size, MMAP_ATTR(attr));
		if (err) {
			ERROR("eHSM: mmap failed (%d)\n", err);
			return -EHSM_MMAP_ERR;
		}
	}

	ret = ehsm_initialize(&ehandle);
	if (ret != SEC_NO_ERROR) {
		ERROR("Error initializing eHSM (%d)\n", ret);
		err = -EIO;
		goto error;
	}

	ret = ehsm_get_challenge(&ehandle, auth_id, &acmd);
	if (ret != SEC_NO_ERROR) {
		WARN("eHSM: Error (%d) forming GET_CHALLENGE with AUTH_CMD_ID 0x%x\n",
			 ret, auth_cmd_id);
		err = -EIO;
		goto error;
	}

	memcpy((void *)user_buf, (void *)&acmd, sizeof(acmd));

error:
	/* unmap non-secure memory buffer */
	if (map_required && base_addr && ns_map_size)
		octeontx_mmap_remove_dynamic_region_with_sync(base_addr,
				ns_map_size);

	return err;
}

/**
 * eHSM Authentication command
 *
 * @param[in]	user_buf DRAM address of structure (struct ehsm_auth_cmd)
 * @param[in]	nsec	 boolean Non-secure or Secure
 * @param[in]	size	 size of structure (struct ehsm_auth_cmd)
 *
 * @return  0 for success, -EIO for eHSM errors
 */
int ehsm_smc_auth_cmd(uintptr_t user_buf, bool nsec, uintptr_t size)
{
	struct ehsm_auth_cmd *ehsm_auth_cmd_ptr = NULL;
	struct ehsm_auth_cmd ehsm_acmd = {0};
	struct ehsm_handle ehandle;
	enum sec_return ret;
	uint32_t attr, map_required;
	const uint64_t mask = ~((uint64_t)PAGE_SIZE_MASK);
	int err = 0, ns_map_size = 0;
	uint64_t base_addr = 0;

	if (cavm_is_platform(PLATFORM_EMULATOR)) {
		WARN("EHSM disabled in emulator\n");
		return 0;
	}

	if (nsec)
		attr = MMAP_IMAGE_BUF_EN | MT_RW | MT_NS;
	else
		attr = 0;

	map_required = MMAP_IMAGE_BUF_EN & attr;

	if (map_required) {

		/* Round up to page size */
		ns_map_size = (size + PAGE_SIZE - 1) & -PAGE_SIZE;

		/* Map non-secure memory buffer */
		/* Note that this needs to be page aligned */
		base_addr = user_buf & mask;
		/* If user_buf crosses a page boundary, allocate another page */
		if ((user_buf + size) > (base_addr + ns_map_size)) {
			ns_map_size += PAGE_SIZE;
		}

		/* Map Non-secure memory buffer */
		err = octeontx_mmap_add_dynamic_region_with_sync(base_addr,
				base_addr, ns_map_size, MMAP_ATTR(attr));
		if (err) {
			ERROR("eHSM: mmap failed (%d)\n", err);
			return -EHSM_MMAP_ERR;
		}
	}

	memcpy((void *)&ehsm_acmd, (void *)user_buf, sizeof(ehsm_acmd));
	ehsm_auth_cmd_ptr = &ehsm_acmd;

	ret = ehsm_initialize(&ehandle);
	if (ret != SEC_NO_ERROR) {
		ERROR("Error initializing eHSM (%d)\n", ret);
		err = -EIO;
		goto error;
	}

	ret = ehsm_authenticated_cmd(&ehandle,
			ehsm_auth_cmd_ptr->dsa_scheme,
			&ehsm_auth_cmd_ptr->key,
			&ehsm_auth_cmd_ptr->acmd,
			ehsm_auth_cmd_ptr->signature);

	if (ret != SEC_NO_ERROR) {
		WARN("eHSM: Error %d performing AUTH_CMD 0x%x\n", ret,
			ehsm_auth_cmd_ptr->acmd.cmd_package.cmd_id);
		err = -EIO;
		goto error;
	}

error:
	/* unmap non-secure memory buffer */
	if (map_required && base_addr && ns_map_size)
		octeontx_mmap_remove_dynamic_region_with_sync(base_addr,
				ns_map_size);

	return err;
}
