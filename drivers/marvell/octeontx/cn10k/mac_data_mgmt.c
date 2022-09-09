/*
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <stdint.h>
#include <stdio.h>
#include <errno.h>
#include <octeontx_common.h>
#include <spi_ops.h>
#include <libfdt.h>
#include <strtol.h>

/* Convinience type to operate on MAC addresses */
typedef union {
	uint64_t addr;
	uint8_t bytes[sizeof(uint64_t)];
} mac_addr_t;

/* Structure for MAC address entry.It is shared with EBF (keep in sync) */
struct mac_addr_entry {
	uint8_t not_valid : 1;
	uint16_t reserved : 15; /* Should be zero */
	uint8_t mac[6];
};

#define MAC_ADDR_ENTRY_IS_VALID(e)	(!((e).not_valid & 1u))

/* Each MAC address entry is stored in the array */
#define MAC_ADDR_MAX_ENTRY_NUM	32
#define MAC_ADDR_ARRAY_SIZE \
	(MAC_ADDR_MAX_ENTRY_NUM * sizeof(struct mac_addr_entry))
#define MAC_ADDR_LOG_SIZE	0x1000 /* Total log size is 4KB */
#define MAC_ADDR_LOG_MAX_ENTRY_NUM \
	(MAC_ADDR_LOG_SIZE / MAC_ADDR_ARRAY_SIZE)

/* Each log entry is composed from mac_addr_entry array */
struct mac_addr_log_entry {
	union {
		uint8_t raw[MAC_ADDR_ARRAY_SIZE];
		struct mac_addr_entry entry[MAC_ADDR_MAX_ENTRY_NUM];
	} s;
};

/* Currently we use single entry from 10 possible */
static struct mac_addr_log_entry mac_log0 __aligned(8);

static void mac_mgmt_prepare_log(struct mac_addr_log_entry *mac_log)
{
	memset(mac_log, 0xff, MAC_ADDR_ARRAY_SIZE);
}

static int mac_mgmt_parse_fdt(struct mac_addr_log_entry *mac_log)
{
	const void *fdt = fdt_ptr;
	int r_offset, i, len, max;
	const char *desc;

	if (fdt_check_header(fdt))
		return -1;

	r_offset = fdt_path_offset(fdt, "/cavium,bdk");
	if (r_offset < 0)
		return -1;
	desc = fdt_getprop(fdt, r_offset, "BOARD-MAC-ADDRESS-ID-NUM", &len);
	if (!desc)
		return -1;

	max = strtol(desc, NULL, 16);
	/* Copy existing entries to the new entry */
	for (i = 0; i < max; i++) {
		char buf[64];
		mac_addr_t mac;

		/* prepare mac addr id */
		snprintf(buf, sizeof(buf), "BOARD-MAC-ADDRESS-ID%d", i);
		desc = fdt_getprop(fdt, r_offset, buf, &len);
		if (!desc)
			continue;

		mac.addr = strtol(desc, NULL, 16);
		mac.addr = mac.addr & 0xffffffffffff; /* Ensure only 6 bytes */

		memcpy(&mac_log->s.entry[i].mac[0], &mac, 6);
		mac_log->s.entry[i].not_valid = 0;
		mac_log->s.entry[i].reserved = 0;
	}

	return max;
}

static int mac_mgmt_parse_flash(struct mac_addr_log_entry *mac_log,
				uint32_t max)
{
	static struct mac_addr_log_entry mac_log_old __aligned(8);
	int ret, i;
	size_t sz = sizeof(mac_log_old);

	memset(&mac_log_old, 0xff, MAC_ADDR_ARRAY_SIZE);
	ret = spi_read_mac_addr_persistent_data((uintptr_t)&mac_log_old,
						    &sz);
	if (ret < 0)
		return -1;

	for (i = 0; i < MAC_ADDR_MAX_ENTRY_NUM; i++) {
		if (MAC_ADDR_ENTRY_IS_VALID(mac_log_old.s.entry[i])) {
			memcpy(&mac_log->s.entry[i], &mac_log_old.s.entry[i],
			       sizeof(mac_log->s.entry[0]));
			if (i > max)
				max = i;
		} else
			break;
	}

	return max;
}

static int mac_mgmt_modify(struct mac_addr_log_entry *mac_log, uint32_t index,
			   uint64_t mac_addr, uint32_t max)
{
	mac_addr_t mac;
	uint32_t new_max, i;

	/* Final check for user's input */
	if (index >= MAC_ADDR_MAX_ENTRY_NUM)
		return -1;

	new_max = max > index + 1 ? max : index + 1;

	/* Clear all elements up to new_max, mark them as valid, skip valid */
	for (i = 0; i < new_max; i++)
		if (!MAC_ADDR_ENTRY_IS_VALID(mac_log->s.entry[i]))
			memset(&mac_log->s.entry[i], 0,
			       sizeof(mac_log->s.entry[0]));

	mac.addr = mac_addr & 0xffffffffffff; /* Ensure 6 bytes entry */
	memcpy(&mac_log->s.entry[index].mac[0], &mac.bytes[0], 6);
	mac_log->s.entry[index].not_valid = 0;

	return 0;
}

long mac_mgmt_update(uint32_t index, uint64_t mac_addr)
{
	int ret, max;

	/* Prepare the MAC addresses log */
	mac_mgmt_prepare_log(&mac_log0);

	/* Check existing addresses in fdt */
	max = mac_mgmt_parse_fdt(&mac_log0);
	if (max < 0)
		return max;

	/* Check existing entries in the flash */
	max = mac_mgmt_parse_flash(&mac_log0, (uint32_t)max);
	if (max < 0)
		return max;

	/* Add new mac or modify existing */
	ret = mac_mgmt_modify(&mac_log0, index, mac_addr, (uint32_t)max);
	if (ret < 0)
		return ret;

	/* Write changes to misc. data */
	ret = spi_update_mac_addr_persistent_data((uintptr_t)&mac_log0,
						      sizeof(mac_log0));
	if (ret < 0)
		return -1;

	return 0;
}
