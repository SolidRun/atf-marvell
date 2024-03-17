/*
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <inttypes.h>
#include <octeontx_ras.h>
#if (defined(PLAT_CN10K_FAMILY))
#include <bert.h>
#endif

#if RAS_EXTENSION

extern sdei_ev_map_t *find_event_map(int ev_num);
extern sdei_entry_t *get_event_entry(sdei_ev_map_t *map);
bool sdei_event_is_enable(int ev_num)
{
	sdei_ev_map_t *map;
	sdei_entry_t *se;

	map = find_event_map(ev_num);
	if (map == NULL)
		return false;

	se = get_event_entry(map);

	return (se->state & (1 << 1));
}

static int get_event_record_len(int event)
{
	switch (event) {
	case OCTEONTX_SDEI_RAS_MDC_EVENT:
	case OCTEONTX_SDEI_RAS_MCC_EVENT:
	case OCTEONTX_SDEI_RAS_LMC_EVENT:
		return sizeof(struct cper_sec_mem_err);
	case OCTEONTX_SDEI_RAS_GIC_EVENT:
		return sizeof(struct cper_sec_platform_err);
	default:
		if ((event >= OCTEONTX_SDEI_RAS_AP0_EVENT) &&
		(event < (OCTEONTX_SDEI_RAS_AP0_EVENT + OCTEONTX_SDEI_RAS_MAX_APEVENTS)))
			return sizeof(struct processor_error);
	}
	return 0;
}

/*
 * err_ring_init()
 *
 * Used to initialilze an error ring.
 *
 * on entry,
 *   err_ring: error ring
 *   len:      allocated length for entirety of ring (including header)
 *   entries:  if non-zero, # of entries to use in ring
 *             if zero, # of entries to use in ring is calculated dynamically
 *   reinit:   force reinitialize buffer accidentally memory can stay in previous state
 */
void err_ring_init(struct otx2_ghes_err_ring *err_ring, int len, int entries)
{
	if (err_ring && len) {
		err_ring->sig = OTX2_GHES_ERR_RING_SIG;
		err_ring->head = 0;
		err_ring->tail = 0;
		err_ring->size = entries ? entries : (len - sizeof(struct otx2_ghes_err_ring)) /
									(sizeof(struct otx2_ghes_err_record));
		err_ring->res = 0;
	}
}

struct fdt_ghes *otx2_find_ghes(ras_config_t *rc, const char *name)
{
	int i;
	struct fdt_ghes *fdt_ghes = NULL;

	for (i = 0; rc && i < rc->nr_ghes; i++) {
		if (strcmp(name, rc->fdt_ghes[i].name))
			continue;
		debug_ras("%s(%s) finds entry %d: %p %p %p\n",
			__func__, name, i,
			rc->fdt_ghes[i].base[0],
			rc->fdt_ghes[i].base[1],
			rc->fdt_ghes[i].base[GHES_PTRS - 1]);

		if (rc->fdt_ghes[i].base[0])
			fdt_ghes = &rc->fdt_ghes[i];
	}

	if (!strcmp(name, rc->fdt_bert.name)) {
		debug_ras("%s(%s) finds entry: %p %p %p\n",
			__func__, name,
			rc->fdt_bert.base[0],
			rc->fdt_bert.base[1],
			rc->fdt_bert.base[GHES_PTRS - 1]);

		if (rc->fdt_bert.base[0])
			fdt_ghes = &rc->fdt_bert;
	}

	return fdt_ghes;
}

/*
 * Used to retrieve an error record pointer for a GHES source.
 * The error record can subsequently be sent to the consumer
 * via 'otx2_send_ghes()'.
 *
 * On entry,
 *   name:  specifies GHES source (i.e. 'mdc', 'mcc')
 *   ringp: pointer by which error ring value is returned
 *          (see error conditions below)
 *
 * Returns,
 *   Pointer to next available error record for GHES source OR
 *   NULL if:
 *     1. GHES source is full
 *     2. GHES source not found
 *
 *   Note: if NULL is returned, the error condition can be discerned by
 *   examining the value returned in 'ringp'.  If the GHES source is present,
 *   'ringp' will contain a valid pointer, thus describing error #1 (full).
 *   If the specified GHES source was not located, 'ringp' will also
 *   contain NULL, thus describing error #2 (not found).
 */
struct otx2_ghes_err_record *otx2_begin_ghes(ras_config_t *rc, const char *name,
			struct otx2_ghes_err_ring **ringp)
{
	struct otx2_ghes_err_record *err_rec = NULL;
	struct otx2_ghes_err_ring *err_ring;
	volatile uint32_t head = 0;
	struct fdt_ghes *gh;

	if (ringp)
		*ringp = NULL;

	gh = otx2_find_ghes(rc, name);
	if (!gh)
		return NULL;

	err_ring = gh->base[GHES_PTR_RING];
	if (!err_ring->size) {
		ERROR("error ring '%s' size is uninitialized\n", name);
		return NULL;
	}

	/* if consumer not registered */
	if (strncmp(name, "bert", 4) && !sdei_event_is_enable(gh->id)) {
		debug_ras("%s sdei 0x%x disabled\n", __func__, gh->id);
		return NULL;
	}

	if (!sdei_event_is_enable(gh->id))
		return NULL;

	head = err_ring->head;
	dsbsy();

	debug_ras("sdei [0x%08x] tail=%d, head=%d, size=%d\n",
			gh->id, err_ring->tail, err_ring->head, err_ring->size);

	err_rec = &err_ring->records[head];
	memset(err_rec, 0, sizeof(*err_rec));

	head++;
	head %= err_ring->size;
	err_ring->head = head;
	dsbsy();

	if (ringp)
		*ringp = err_ring;

	return err_rec;
}

int otx2_acpi_estatus_init(struct fdt_ghes *gh, uint32_t type)
{
	struct octeontx_estatus_record *rec;
	struct acpi_hest_generic_status *estatus;
	struct acpi_hest_generic_data *gdata;
	int cper_len = 0;

	if (!gh) {
		debug_ras("cannot find estatus '%s'\n", gh->name);
		return -1;
	}

	*((uint64_t *)gh->base[GHES_PTR_STAT_ADDR]) = (uint64_t)(uint64_t *)gh->base[GHES_PTR_STATUS];

	rec = gh->base[GHES_PTR_STATUS];
	if (!rec) {
		debug_ras("estatus NULL '%s'\n", gh->name);
		return -1;
	}

	memset(rec, 0, gh->size[GHES_PTR_STATUS]);

	estatus = &rec->estatus;
	gdata = &rec->gdata;

	estatus->block_status = 0;
	estatus->raw_data_offset = sizeof(struct acpi_hest_generic_status) + sizeof(struct acpi_hest_generic_data);
	switch (type) {
	case REC_MEM:
		cper_len = sizeof(struct cper_sec_mem_err);
		memcpy((guid_t *)gdata->section_type, &CPER_SEC_PLATFORM_MEM, sizeof(guid_t));
		break;
	case REC_CORE:
		cper_len = sizeof(struct processor_error);
		memcpy((guid_t *)gdata->section_type, &CPER_SEC_PROC_ARM, sizeof(guid_t));
		break;
	case REC_PLAT:
		cper_len = sizeof(struct cper_sec_platform_err);
		memcpy((guid_t *)gdata->section_type, &CPER_SEC_PLATFORM_GIC, sizeof(guid_t));
		break;
	}

	estatus->data_length = sizeof(struct acpi_hest_generic_data) + cper_len;
	gdata->error_data_length = cper_len;

	return 0;
}

static void otx2_acpi_estatus_setup(ras_config_t *rc, struct otx2_ghes_err_record *rec, int event, bool bert)
{
	struct octeontx_estatus_record *estatus = NULL;
	struct fdt_ghes *fdt_ghes = NULL;
	int i = 0, cper_len;

	for (i = 0; rc && i < rc->nr_ghes; i++)
		if (event == rc->fdt_ghes[i].id)
			break;

	if (i == rc->nr_ghes)
		return;

	cper_len = get_event_record_len(event);

	fdt_ghes = &rc->fdt_ghes[i];

	estatus = fdt_ghes->base[GHES_PTR_STATUS];

	estatus->estatus.error_severity = rec->error_severity;
	estatus->estatus.block_status = 1;
	estatus->gdata.error_severity = rec->error_severity;
	estatus->gdata.validation_bits = CPER_SEC_VALID_FRU_TEXT;
	memcpy(estatus->gdata.fru_text, rec->fru_text, sizeof(estatus->gdata.fru_text));
	memcpy(&estatus->u, &rec->u, sizeof(estatus->u));

	if (bert) {
		struct otx2_ghes_err_mem_rec *r = NULL;
		__aligned(8) static uint8_t buf[4096];
		r = (struct otx2_ghes_err_mem_rec *)buf;

#if !(defined(PLAT_CN10K_FAMILY))
		struct otx2_ghes_err_ring *ring = NULL;
		fdt_ghes = otx2_find_ghes(rc, "bert");
		if (!fdt_ghes)
			return;

		r = fdt_ghes->base[GHES_PTR_STAT_ADDR];
		ring = fdt_ghes->base[GHES_PTR_RING];

		int head = ring->head;
		int size = ring->size;

		dsbsy();
		if (ring->head)
			r = r + (head-1);
		else
			r = r + (size-1);
#endif

		r->estatus.block_status = 1;
		r->estatus.error_severity = rec->error_severity;
		r->estatus.raw_data_offset = sizeof(struct acpi_hest_generic_status) + sizeof(struct acpi_hest_generic_data);
		r->estatus.raw_data_length = 0;
		r->estatus.data_length = sizeof(struct acpi_hest_generic_data) + cper_len;

		r->gdata.error_data_length = cper_len;
		r->gdata.error_severity = rec->error_severity;
		r->gdata.validation_bits = CPER_SEC_VALID_FRU_TEXT;
		memcpy((guid_t *)r->gdata.section_type, &CPER_SEC_PLATFORM_MEM, sizeof(guid_t));
		memcpy(r->gdata.fru_text, rec->fru_text, sizeof(r->gdata.fru_text));
		memcpy(&r->cper, &rec->u, cper_len);

#if (defined(PLAT_CN10K_FAMILY))
		bert_add(r);
#endif
	}
}

void otx2_send_ghes(ras_config_t *rc, struct otx2_ghes_err_record *rec, int event, bool bert)
{
	otx2_acpi_estatus_setup(rc, rec, event, bert);

#if SDEI_SUPPORT
	int ret = 0;

	debug_ras("RAS SDEI dispatch: 0x%x\n", event);
	ret = sdei_dispatch_event(event);
	if (ret != 0) {
		/*
		 * sdei_dispatch_event() may return failing result in some cases,
		 * for example kernel may not have registered a handler or RAS event
		 * may happen early during boot. We restore the NS context when
		 * sdei_dispatch_event() returns failing result.
		 */
		ERROR("SDEI dispatch failed: %d", ret);
		cm_el1_sysregs_context_restore(NON_SECURE);
		cm_set_next_eret_context(NON_SECURE);
	}
#endif
}

void otx2_map_ghes(ras_config_t *rc)
{
	struct fdt_ghes *g;
	uint64_t lo, hi;
	int i, j;

	lo = ~0ULL;
	hi = 0;

	/* add mapping for GHES memory */
	for (i = 0; i < rc->nr_ghes; i++) {
		g = &rc->fdt_ghes[i];

		for (j = 0; j < GHES_PTRS; j++) {
			debug_ras("(%s) %d.%d %x@%p\n",
				g->name, i, j, g->size[j], g->base[j]);
			if (!g->size[j])
				break;
			if (lo > (uint64_t) g->base[j])
				lo = (uint64_t) g->base[j];
			if (hi < (uint64_t) g->base[j] + g->size[j])
				hi = (uint64_t) g->base[j] + g->size[j];
			debug_ras("range %" PRIx64 "..%" PRIx64 "\n", lo, hi);
		}
	}

	if (lo < hi) {
		lo &= ~(uint64_t)PAGE_SIZE_MASK;
		hi += PAGE_SIZE_MASK;
		hi &= ~(uint64_t)PAGE_SIZE_MASK;
		hi--;
		debug_ras("%s map %" PRIx64 "..%" PRIx64 "\n", __func__, lo, hi + 1 - lo);
		mmap_add_region(lo, lo, hi + 1 - lo,
			MT_MEMORY | MT_RW | MT_NS);
	}

	/* add mapping for BERT memory */
	lo = ~0ULL;
	hi = 0;
	g = &rc->fdt_bert;
	for (j = 0; j < GHES_PTRS; j++) {
		if (!g->size[j] || !g->base[j]) {
			debug_ras("(%s) disabled %x@%p\n", g->name, g->size[j], g->base[j]);
			break;
		}
		debug_ras("(%s) %d.%d %x@%p\n",
			g->name, i, j, g->size[j], g->base[j]);
		if (lo > (uint64_t) g->base[j])
			lo = (uint64_t) g->base[j];
		if (hi < (uint64_t) g->base[j] + g->size[j])
			hi = (uint64_t) g->base[j] + g->size[j];
		debug_ras("range %" PRIx64 "..%" PRIx64 "\n", lo, hi);
	}

	if (lo < hi) {
		lo &= ~(uint64_t)PAGE_SIZE_MASK;
		hi += PAGE_SIZE_MASK;
		hi &= ~(uint64_t)PAGE_SIZE_MASK;
		hi--;
		debug_ras("%s map %" PRIx64 "..%" PRIx64 "\n", __func__, lo, hi + 1 - lo);
		mmap_add_region(lo, lo, hi + 1 - lo,
			MT_MEMORY | MT_RW | MT_NS);
	}
}

#endif // RAS_EXTENSION
