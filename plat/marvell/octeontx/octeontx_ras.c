/*
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <octeontx_ras.h>

#if RAS_EXTENSION

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
 *
 * Returns,
 *   false if ring was NOT already initialized
 *   !false if ring WAS already initialized
 */
bool err_ring_init(struct otx2_ghes_err_ring *err_ring, int len, int entries, bool reinit)
{
	bool init = false;

	if (err_ring && len) {
		err_ring->reg = 0;
		init = (err_ring->sig == OTX2_GHES_ERR_RING_SIG);
		if (!init || reinit) {
			err_ring->sig = OTX2_GHES_ERR_RING_SIG;
			err_ring->head = err_ring->tail = 0;
			err_ring->size = entries ? entries :
					(len - offsetof(struct otx2_ghes_err_ring, records[0])) /
						sizeof(err_ring->records[0]);
		}
		if (!reinit) {
			/* BERT buffer must be registered at boot */
			debug2ras("%s setup reg\n", __func__);
			err_ring->reg = OTX2_GHES_ERR_RING_SIG;
		}
	}

	return init;
}

static struct fdt_ghes *otx2_find_ghes(ras_config_t *rc, const char *name)
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

#ifndef PLAT_CN10K_FAMILY
	if (!strcmp(name, rc->fdt_bert.name)) {
		debug_ras("%s(%s) finds entry: %p %p %p\n",
			__func__, name,
			rc->fdt_bert.base[0],
			rc->fdt_bert.base[1],
			rc->fdt_bert.base[GHES_PTRS - 1]);

		if (rc->fdt_bert.base[0])
			fdt_ghes = &rc->fdt_bert;
	}
#endif

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
	struct otx2_ghes_err_record *err_rec;
	struct otx2_ghes_err_ring *err_ring;
	volatile uint32_t tail = 0, head = 0;
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
	if (err_ring->reg != OTX2_GHES_ERR_RING_SIG) {
		debug2ras("%s unset reg\n", __func__);
		return NULL;
	}

	tail = err_ring->tail;
	head = err_ring->head;
	dsbsy();

	if (((head + 1) % err_ring->size) != tail) {
		err_rec = &err_ring->records[head];
		memset(err_rec, 0, sizeof(*err_rec));
	} else {
		debug_ras("GHES error ring '%s' is full\n", name);
		err_rec = NULL;
	}

	if (ringp)
		*ringp = err_ring;
	return err_rec;
}

int otx2_estatus_ghes(ras_config_t *rc, const char *name, struct octeontx_estatus_record **estatus)
{
	struct octeontx_estatus_record *rec;
	struct fdt_ghes *gh;

	gh = otx2_find_ghes(rc, name);
	if (!gh) {
		*estatus = NULL;
		debug_ras("cannot find estatus '%s'\n", name);
		return -1;
	}

	rec = gh->base[GHES_PTR_STATUS];
	if (!rec) {
		*estatus = NULL;
		debug_ras("estatus NULL '%s'\n", name);
		return -1;
	}
	memset(rec, 0, sizeof(*rec));
	*estatus = rec;

	return 0;
}

void otx2_send_ghes(struct otx2_ghes_err_record *rec,
		    struct otx2_ghes_err_ring *err_ring,
		    int event)
{
	int ret = 0;
	volatile uint32_t head = err_ring->head;

	/* Ensure that error record is written fully prior to advancing
	 * the head (which indicates availability to consumer).
	 */
	dmbsy();

	if (++head >= err_ring->size)
		head = 0;
	err_ring->head = head;
	dsbsy();

#if SDEI_SUPPORT
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
			debug_ras("range %llx..%llx\n", lo, hi);
		}
	}

	if (lo < hi) {
		lo &= ~(uint64_t)PAGE_SIZE_MASK;
		hi += PAGE_SIZE_MASK;
		hi &= ~(uint64_t)PAGE_SIZE_MASK;
		hi--;
		debug_ras("%s map %llx..%llx\n", __func__, lo, hi + 1 - lo);
		mmap_add_region(lo, lo, hi + 1 - lo,
			MT_MEMORY | MT_RW | MT_NS);
	}

#ifndef PLAT_CN10K_FAMILY
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
		debug_ras("range %llx..%llx\n", lo, hi);
	}

	if (lo < hi) {
		lo &= ~(uint64_t)PAGE_SIZE_MASK;
		hi += PAGE_SIZE_MASK;
		hi &= ~(uint64_t)PAGE_SIZE_MASK;
		hi--;
		debug_ras("%s map %llx..%llx\n", __func__, lo, hi + 1 - lo);
		mmap_add_region(lo, lo, hi + 1 - lo,
			MT_MEMORY | MT_RW | MT_NS);
	}
#endif
}

#endif // RAS_EXTENSION
