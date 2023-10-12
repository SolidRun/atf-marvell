/*
 * Copyright (C) 2022 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from this
 * software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include <runtime_svc.h>
#include <octeontx_svc.h>
#include <platform_svc.h>
#include <octeontx_common.h>
#include <octeontx_dram.h>
#include <octeontx_mmap_utils.h>
#include <cavm-csrs-dss.h>
#include <cavm-csrs-tad.h>
#include <cavm-csrs-apa.h>
#include <cavm-csrs-msw.h>
#include <cavm-csrs-iobn.h>
#include <cavm-csrs-ncb.h>
#include <cavm-csrs-rst.h>
#include <plat/common/platform.h>
#include <plat_board_cfg.h>

#include "adbg_ops.h"

#if defined(ADBG_SVC_DEBUG)
#define ADBG_LOG(...) NOTICE(__VA_ARGS__)
#else
#define ADBG_LOG(...)
#endif

#define ADBG_DRAM_REGION_SIZE (2 * 1024 * 1024) /* 2 MB */

static adbg_config_t cn106_adbg_cfg = {
	.core = {
		.num = 24,
	},
	.cache = {
		.l1d_size = 64 * 1024,
		.l2_size = 512 * 1024,
		.l1i_size = 64 * 1024,
		.l1d_sets = 256,
		.l1d_ways = 4,
		.l2_sets = 2048,
		.l2_ways = 8,
	},
	.dss = {
		.num = 6,
		.n_cntr = 8,
	},
	.tad = {
		.num = 48,
		.n_cntr = 8,
	},
	.apa = {
		.num = 24,
		.n_cntr = 6,
	},
	.msw = {
		.num = 24,
		.n_cntr = 4,
	},
	.iobn = {
		.num = 3,
		.n_cntr = 4,
	},
	.ncb = {
		.num = 5,
		.n_arb = 16,
	},
};

static char cn106_ncb_arb_map[ADBG_MAX_NCB][ADBG_MAX_ARB][ADBG_ARB_NAME_MAX_LEN] = {
	{"CPC", "CST", "GIBM", "GIC", "GTI", "MIO", "MLW", "MRML", "NPC", "OCLA", "RVU", "USBH",
	 "USBH", "ARB 13", "ARB 14", "ARB 15"},
	{"NPAA", "SSOA", "SSOB", "TIM", "NPAB", "ARB 5", "ARB 6", "ARB 7", "ARB 8", "ARB 9",
	 "ARB 10", "ARB 11", "ARB 12", "ARB 13", "ARB 14", "ARB 15"},
	{"NIXTX", "ARB 1", "ARB 2", "ARB 3", "ARB 4", "ARB 5", "ARB 6", "ARB 7", "ARB 8", "ARB 9",
	 "ARB 10", "ARB 11", "ARB 12", "ARB 13", "ARB 14", "ARB 15"},
	{"NIXRX", "RNG", "ARB 2", "ARB 3", "ARB 4", "ARB 5", "ARB 6", "ARB 7", "ARB 8", "ARB 9",
	 "ARB 10", "ARB 11", "ARB 12", "ARB 13", "ARB 14", "ARB 15"},
	{"PEM", "PEM", "PEM", "PEM", "PEM", "PEM", "CPT", "DPI", "ARB 8", "ARB 9", "ARB 10",
	 "ARB 11", "ARB 12", "ARB 13", "ARB 14", "ARB 15"},
};

void adbg_init(void)
{
	/* Reserving 2Mb of memory for ADBG from end of the NSECURE_NONPRESERVE region
	 * For example, for 16Gb RAM, layout for NSECURE_NONPRESERVE:
	 * |----------|   0x1000000
	 * |    OS    |   (16301MB)
	 * | RESERVED |
	 * |----------|   0x3fbd00000
	 * |   ADBG   |   (2MB)
	 * | RESERVED |
	 * |----------|   0x3fbf00000
	 * | GHES HEST|   (1MB)
	 * | AREA(RAS)|
	 * | RESERVED |
	 * |----------|   0x3fbffffff
	 */
	plat_octeontx_bcfg->adbg_dram_region_base =
		octeontx_dram_cut_region_tail(ADBG_DRAM_REGION_SIZE, NSECURE_NONPRESERVE);
}

uint64_t adbg_dram_region_base(void)
{
	return plat_octeontx_bcfg->adbg_dram_region_base;
}

uint64_t adbg_dram_region_size(void)
{
	return ADBG_DRAM_REGION_SIZE;
}

void adbg_mmap_setup(void)
{
	if (!adbg_dram_region_base())
		return;

	NOTICE("BL31: Advance debugging support enabled\n");
	mmap_add_region(plat_octeontx_bcfg->adbg_dram_region_base,
			plat_octeontx_bcfg->adbg_dram_region_base,
			ADBG_DRAM_REGION_SIZE,
			MT_RW | MT_NS | MT_MEMORY | MT_NON_CACHEABLE);
}

static int adbg_dss(adbg_config_t *acfg, void *mem_base, adbg_dss_op_t op, adbg_dss_arg_t arg)
{
	cavm_dssx_perf_cnt_start_op_ctrl_t sctrl;
	cavm_dssx_perf_cnt_freerun_ctrl_t fctrl;
	cavm_dssx_perf_cnt_op_mode_ctrl_t octrl;
	cavm_dssx_perf_cnt_end_op_ctrl_t eop;
	cavm_dssx_perf_cnt_freerun_en_t fen;
	uint64_t *dss_area = mem_base;
	cavm_dssx_perf_cnt_cfgx_t cfg;
	int dx, cx, idx;
	int ret = 0;

	switch (op) {
	case ADBG_DSS_OP_COUNTER_INIT:
		ADBG_LOG("DSS: Op COUNTER INIT\n");
		octrl.u = 0;
		octrl.s.s_operating_mode = 1;
		/* Set Manual mode */
		for (dx = 0; dx < acfg->dss.num; dx++)
			CSR_WRITE(CAVM_DSSX_PERF_CNT_OP_MODE_CTRL(dx), octrl.u);
		break;
	case ADBG_DSS_OP_COUNTER_START:
		ADBG_LOG("DSS: Op COUNTER START\n");
		for (dx = 0; dx < acfg->dss.num; dx++) {
			/* Start Counting */
			sctrl.u = 0;
			sctrl.s.s_start = 1;
			CSR_WRITE(CAVM_DSSX_PERF_CNT_START_OP_CTRL(dx), sctrl.u);

			/* Clear Free Running Counters so that it restarts */
			fctrl.u = 0;
			fctrl.s.s_wr_op_cnt_clr = 1;
			fctrl.s.s_rd_op_cnt_clr = 1;
			CSR_WRITE(CAVM_DSSX_PERF_CNT_FREERUN_CTRL(dx), fctrl.u);
		}
		break;
	case ADBG_DSS_OP_COUNTER_STOP:
		ADBG_LOG("DSS: Op COUNTER STOP\n");
		/* Stop Counting */
		eop.u = 0;
		eop.s.s_manual_mode_end = 1;
		for (dx = 0; dx < acfg->dss.num; dx++)
			CSR_WRITE(CAVM_DSSX_PERF_CNT_END_OP_CTRL(dx), eop.u);
		break;
	case ADBG_DSS_OP_COUNTER_SNAPSHOT:
		ADBG_LOG("DSS: Op COUNTER SNAPSHOT\n");
		for (dx = 0; dx < acfg->dss.num; dx++) {
			for (cx = 0; cx < acfg->dss.n_cntr; cx++) {
				idx = dx * acfg->dss.n_cntr + cx;
				dss_area[idx] = CSR_READ(CAVM_DSSX_PERF_CNT_VALUEX(dx, cx));
			}
		}
		idx = acfg->dss.num * acfg->dss.n_cntr;
		for (dx = 0; dx < acfg->dss.num; dx++) {
			dss_area[idx++] = CSR_READ(CAVM_DSSX_PERF_CNT_VALUE_RD_OP(dx));
			dss_area[idx++] = CSR_READ(CAVM_DSSX_PERF_CNT_VALUE_WR_OP(dx));
		}
		ret = (acfg->dss.n_cntr + 2) * acfg->dss.num * sizeof(uint64_t);
		break;
	case ADBG_DSS_OP_COUNTER_EVENTMASK_SET:
		ADBG_LOG("DSS: Op COUNTER EVENTMASK SET\n");
		ADBG_LOG("DSS: Num %u Msk %llx\n", arg.cntr.num, (uint64_t)arg.cntr.mask);
		cfg.u = arg.cntr.mask;
		for (dx = 0; dx < acfg->dss.num; dx++)
			CSR_WRITE(CAVM_DSSX_PERF_CNT_CFGX(dx, arg.cntr.num), cfg.u);
		break;
	case ADBG_DSS_OP_COUNTER_ENABLE:
	case ADBG_DSS_OP_COUNTER_DISABLE:
		ADBG_LOG("DSS: Op COUNTER %s\n",
			 op == ADBG_DSS_OP_COUNTER_ENABLE ? "ENABLE" : "DISABLE");

		for (dx = 0; dx < acfg->dss.num; dx++) {
			for (cx = 0; cx < acfg->dss.n_cntr; cx++) {
				cfg.u = CSR_READ(CAVM_DSSX_PERF_CNT_CFGX(dx, cx));
				cfg.s.s_cnt_en = (op == ADBG_DSS_OP_COUNTER_ENABLE);
				CSR_WRITE(CAVM_DSSX_PERF_CNT_CFGX(dx, cx), cfg.u);
			}
		}
		break;
	case ADBG_DSS_OP_FREERUN_COUNTER_ENABLE:
	case ADBG_DSS_OP_FREERUN_COUNTER_DISABLE:
		ADBG_LOG("DSS: Op FREERUN COUNTER %s\n",
			 op == ADBG_DSS_OP_FREERUN_COUNTER_ENABLE ? "ENABLE" : "DISABLE");
		fen.u = 0;
		fen.s.s_rd_op_cnt_en = (op == ADBG_DSS_OP_FREERUN_COUNTER_ENABLE);
		fen.s.s_wr_op_cnt_en = (op == ADBG_DSS_OP_FREERUN_COUNTER_ENABLE);
		for (dx = 0; dx < acfg->dss.num; dx++)
			CSR_WRITE(CAVM_DSSX_PERF_CNT_FREERUN_EN(dx), fen.u);
		break;
	default:
		ret = -1;
		break;
	}

	return ret;
}

static int adbg_tad(adbg_config_t *acfg, void *mem_base, adbg_tad_op_t op, adbg_tad_arg_t arg)
{
	uint64_t *tad_area = mem_base;
	cavm_tadx_pfcx_t pfc;
	cavm_tadx_prfx_t prf;
	int ret = 0;
	int tx, cx;

	switch (op) {
	case ADBG_TAD_OP_COUNTER_CLEAR:
		ADBG_LOG("TAD: Op COUNTER CLEAR\n");
		pfc.s.count = 0;
		for (tx = 0; tx < acfg->tad.num; tx++)
			for (cx = 0; cx < acfg->tad.n_cntr; cx++)
				CSR_WRITE(CAVM_TADX_PFCX(tx, cx), pfc.u);
		break;
	case ADBG_TAD_OP_COUNTER_SNAPSHOT:
		ADBG_LOG("TAD: Op COUNTER SNAPSHOT\n");
		for (tx = 0; tx < acfg->tad.num; tx++)
			for (cx = 0; cx < acfg->tad.n_cntr; cx++)
				tad_area[tx * acfg->tad.n_cntr + cx] =
					CSR_READ(CAVM_TADX_PFCX(tx, cx));
		ret = acfg->tad.num * acfg->tad.n_cntr * sizeof(uint64_t);
		break;
	case ADBG_TAD_OP_COUNTER_EVENT_SELECT:
		ADBG_LOG("TAD: Op COUNTER EVENT SELECT\n");
		ADBG_LOG("TAD: Num %u Sel %x\n", arg.cntr.num, arg.cntr.sel);
		prf.u = 0;
		prf.s.cntsel = arg.cntr.sel;
		for (tx = 0; tx < acfg->tad.num; tx++)
			CSR_WRITE(CAVM_TADX_PRFX(tx, arg.cntr.num), prf.u);

		break;
	default:
		ret = -1;
		break;
	}

	return ret;
}

static int adbg_apa(adbg_config_t *acfg, void *mem_base, adbg_apa_op_t op)
{
	uint64_t *apa_area = mem_base;
	cavm_apax_pfcx_t pfc;
	cavm_apax_prf_t prf;
	cavm_apax_ctl_t ctl;
	int ret = 0;
	int ax, ex;

	switch (op) {
	case ADBG_APA_OP_COUNTER_CLEAR:
		ADBG_LOG("APA: Op COUNTER CLEAR\n");
		pfc.s.count = 0;
		for (ax = 0; ax < acfg->apa.num; ax++)
			for (ex = 0; ex < acfg->apa.n_cntr; ex++)
				CSR_WRITE(CAVM_APAX_PFCX(ax, ex), pfc.u);
		break;
	case ADBG_APA_OP_COUNTER_SNAPSHOT:
		ADBG_LOG("APA: Op COUNTER SNAPSHOT\n");
		for (ax = 0; ax < acfg->apa.num; ax++)
			for (ex = 0; ex < acfg->apa.n_cntr; ex++)
				apa_area[ax * acfg->apa.n_cntr + ex] =
					CSR_READ(CAVM_APAX_PFCX(ax, ex));
		ret = acfg->apa.num * acfg->apa.n_cntr * sizeof(uint64_t);
		break;
	case ADBG_APA_OP_COUNTER_ENABLE:
		ADBG_LOG("APA: Op COUNTER ENABLE\n");
		prf.u = 0;
		prf.s.tx_req_en = 1;
		prf.s.tx_rsp_en = 1;
		prf.s.tx_dat_en = 1;
		prf.s.rx_rsp_en = 1;
		prf.s.rx_snp_en = 1;
		prf.s.rx_dat_en = 1;
		for (ax = 0; ax < acfg->apa.num; ax++) {
			/* IPBUAPA-211
			 * Set APA_CRCLK_FORCE_ON to workaround undercounting
			 */
			ctl.u = CSR_READ(CAVM_APAX_CTL(ax));
			ctl.s.apa_crclk_force_on = 1;
			CSR_WRITE(CAVM_APAX_CTL(ax), ctl.u);

			CSR_WRITE(CAVM_APAX_PRF(ax), prf.u);
		}
		break;
	case ADBG_APA_OP_COUNTER_DISABLE:
		ADBG_LOG("APA: Op COUNTER DISABLE\n");
		prf.u = 0;
		for (ax = 0; ax < acfg->apa.num; ax++)
			CSR_WRITE(CAVM_APAX_PRF(ax), prf.u);
		break;
	default:
		ret = -1;
		break;
	}

	return ret;
}

static int adbg_msw(adbg_config_t *acfg, void *mem_base, adbg_msw_op_t op)
{
	uint64_t *msw_area = mem_base;
	cavm_mswx_mshx_pfcx_t pfc;
	cavm_mswx_mshx_prf_t prf;
	int mx, ex, dx;
	int ret = 0;

	switch (op) {
	case ADBG_MSW_OP_COUNTER_CLEAR:
		ADBG_LOG("MSW: Op COUNTER CLEAR\n");
		/* Zero all counters */
		pfc.s.count = 0;
		for (mx = 0; mx < acfg->msw.num; mx++)
			for (ex = 0; ex < acfg->msw.n_cntr; ex++)
				for (dx = 0; dx < 4; dx++)
					CSR_WRITE(CAVM_MSWX_MSHX_PFCX(mx, dx, ex), pfc.u);
		break;
	case ADBG_MSW_OP_COUNTER_SNAPSHOT:
		ADBG_LOG("MSW: Op COUNTER SNAPSHOT\n");
		for (mx = 0; mx < acfg->msw.num; mx++)
			for (ex = 0; ex < acfg->msw.n_cntr; ex++)
				for (dx = 0; dx < 4; dx++)
					msw_area[mx * acfg->msw.n_cntr * 4 + ex * 4 + dx] =
						CSR_READ(CAVM_MSWX_MSHX_PFCX(mx, dx, ex));
		ret = acfg->msw.num * acfg->msw.n_cntr * 4 * sizeof(uint64_t);
		break;
	case ADBG_MSW_OP_COUNTER_ENABLE:
		ADBG_LOG("MSW: Op COUNTER ENABLE\n");
		prf.u = 0;
		prf.s.snp_en = 1;
		prf.s.rsp_en = 1;
		prf.s.dat_en = 1;
		prf.s.req_en = 1;
		for (mx = 0; mx < acfg->msw.num; mx++)
			for (dx = 0; dx < 4; dx++)
				CSR_WRITE(CAVM_MSWX_MSHX_PRF(mx, dx), prf.u);
		break;
	case ADBG_MSW_OP_COUNTER_DISABLE:
		ADBG_LOG("MSW: Op COUNTER DISABLE\n");
		prf.u = 0;
		for (mx = 0; mx < acfg->msw.num; mx++)
			for (dx = 0; dx < 4; dx++)
				CSR_WRITE(CAVM_MSWX_MSHX_PRF(mx, dx), prf.u);
		break;
	default:
		ret = -1;
		break;
	}

	return ret;
}

static int adbg_iobn(adbg_config_t *acfg, void *mem_base, adbg_iobn_op_t op, adbg_iobn_arg_t arg)
{
	uint64_t *iobn_area = mem_base;
	cavm_iobnx_rperf_ctrlx_t ctrl;
	cavm_iobnx_rperf_inrmx_t inrm;
	int ret = 0;
	int ix, cx;

	switch (op) {
	case ADBG_IOBN_OP_COUNTER_CLEAR:
		ADBG_LOG("IOBN: Op COUNTER CLEAR\n");
		/* Zero all counters */
		for (ix = 0; ix < acfg->iobn.num; ix++) {
			for (cx = 0; cx < acfg->iobn.n_cntr; cx++) {
				ctrl.u = CSR_READ(CAVM_IOBNX_RPERF_CTRLX(ix, cx));
				/* Clear the counters */
				ctrl.s.clear = 1;
				CSR_WRITE(CAVM_IOBNX_RPERF_CTRLX(ix, cx), ctrl.u);
			}
		}
		break;
	case ADBG_IOBN_OP_COUNTER_ENABLE:
	case ADBG_IOBN_OP_COUNTER_DISABLE:
		ADBG_LOG("IOBN: Op COUNTER %s\n",
			 op == ADBG_IOBN_OP_COUNTER_ENABLE ? "ENABLE" : "DISABLE");
		/* Zero all counters */
		for (ix = 0; ix < acfg->iobn.num; ix++) {
			for (cx = 0; cx < acfg->iobn.n_cntr; cx++) {
				ctrl.u = CSR_READ(CAVM_IOBNX_RPERF_CTRLX(ix, cx));
				/* Enable the counters */
				ctrl.s.enable = (op == ADBG_IOBN_OP_COUNTER_ENABLE);
				CSR_WRITE(CAVM_IOBNX_RPERF_CTRLX(ix, cx), ctrl.u);
			}
		}
		break;
	case ADBG_IOBN_OP_COUNTER_SNAPSHOT:
		ADBG_LOG("IOBN: Op COUNTER SNAPSHOT\n");
		for (ix = 0; ix < acfg->iobn.num; ix++)
			for (cx = 0; cx < acfg->iobn.n_cntr; cx++)
				iobn_area[ix * acfg->iobn.n_cntr + cx] =
					CSR_READ(CAVM_IOBNX_RPERF_CNTRX(ix, cx));
		ret = acfg->iobn.num * acfg->iobn.n_cntr * sizeof(uint64_t);
		break;
	case ADBG_IOBN_OP_COUNTER_EVENT_SELECT:
		ADBG_LOG("IOBN: Op COUNTER EVENT SELECT\n");
		ADBG_LOG("IOBN: Num %u Sel %x Cls %x Ctl %x\n", arg.cntr.num, arg.cntr.sel,
			 arg.cntr.cls, arg.cntr.ctl);
		ctrl.u = 0;
		ctrl.s.sel0 = arg.cntr.sel;
		ctrl.s.sel1 = arg.cntr.sel;
		ctrl.s.sel2 = arg.cntr.sel;
		for (ix = 0; ix < acfg->iobn.num; ix++) {
			/* If event is INRM_PERF(x), configure IOBNX_RPERF_INRM(0) */
			if (arg.cntr.sel >= CAVM_IOBN_RPERF_EVENT_E_INRM_PERFX(0) &&
			    arg.cntr.sel <= CAVM_IOBN_RPERF_EVENT_E_INRM_PERFX(3)) {
				uint64_t mask, shift;

				shift = arg.cntr.sel - CAVM_IOBN_RPERF_EVENT_E_INRM_PERFX(0);
				mask  = 0xFFFFUL << (shift * 16);
				inrm.u = CSR_READ(CAVM_IOBNX_RPERF_INRMX(ix, 0));
				inrm.u &= ~mask;
				inrm.u |= (arg.cntr.cls << 12 | arg.cntr.ctl) << (shift * 16);
				CSR_WRITE(CAVM_IOBNX_RPERF_INRMX(ix, 0), inrm.u);
			}
			CSR_WRITE(CAVM_IOBNX_RPERF_CTRLX(ix, arg.cntr.num), ctrl.u);
		}
		break;
	default:
		ret = -1;
		break;
	}

	return ret;
}

static int adbg_ncb(adbg_config_t *acfg, void *mem_base, adbg_iobn_op_t op)
{
	uint64_t *ncb_area = mem_base;
	uint64_t arb_ready;
	int nx, ax, idx;
	int ret = 0;

	switch (op) {
	case ADBG_NCB_OP_COUNTER_SNAPSHOT:
		ADBG_LOG("NCB: Op COUNTER SNAPSHOT\n");
		for (nx = 0; nx < acfg->ncb.num; nx++) {
			for (ax = 0; ax < acfg->ncb.n_arb; ax++) {
				idx = nx * acfg->ncb.n_arb * 4 + ax * 4;
				arb_ready = CSR_READ(CAVM_NCBX_READY(nx));
				if (!(arb_ready & (1U << ax))) {
					memset(&ncb_area[idx], 0, sizeof(uint64_t) * 4);
					continue;
				}
				ncb_area[idx] = CSR_READ(CAVM_NCBX_ARBX_RWX_REQ_PC(nx, ax, 0));
				ncb_area[idx + 1] = CSR_READ(CAVM_NCBX_ARBX_RWX_REQ_PC(nx, ax, 1));
				ncb_area[idx + 2] = CSR_READ(CAVM_NCBX_ARBX_RWX_LAT_PC(nx, ax, 0));
				ncb_area[idx + 3] = CSR_READ(CAVM_NCBX_ARBX_RWX_LAT_PC(nx, ax, 1));
			}
		}
		idx = acfg->ncb.num * acfg->ncb.n_arb * 4;
		for (nx = 0; nx < acfg->ncb.num; nx++) {
			ncb_area[idx + nx * 6] = CSR_READ(CAVM_NCBX_RWX_REQ_PC(nx, 0));
			ncb_area[idx + nx * 6 + 1] = CSR_READ(CAVM_NCBX_RWX_REQ_PC(nx, 1));
			ncb_area[idx + nx * 6 + 2] = CSR_READ(CAVM_NCBX_RWX_LAT_PC(nx, 0));
			ncb_area[idx + nx * 6 + 3] = CSR_READ(CAVM_NCBX_RWX_LAT_PC(nx, 1));
			ncb_area[idx + nx * 6 + 4] = CSR_READ(CAVM_NCBX_RWX_SMMU_LAT_PC(nx, 0));
			ncb_area[idx + nx * 6 + 5] = CSR_READ(CAVM_NCBX_RWX_SMMU_LAT_PC(nx, 1));
		}
		ret = (idx + acfg->ncb.num * 6) * sizeof(uint64_t);
		break;
	case ADBG_NCB_OP_ARB_MAP_GET:
		memcpy(ncb_area, cn106_ncb_arb_map, sizeof(cn106_ncb_arb_map));
		ret = sizeof(cn106_ncb_arb_map);
		break;
	default:
		ret = -1;
		break;
	}

	return ret;
}

static int adbg_get_clk(void *mem_base)
{
#define REF_CLK 50
	adbg_clk_t *clks = mem_base;
	cavm_rst_pllx_t rst_pll;
	cavm_apax_pll_t apa_pll;

	apa_pll.u = CSR_READ(CAVM_APAX_PLL(0));
	clks->coreclk = apa_pll.s.next_mul * REF_CLK;
	rst_pll.u = CSR_READ(CAVM_RST_PLLX(CAVM_RST_PLL_E_MESHCLK));
	clks->meshclk = rst_pll.s.cur_mul * REF_CLK;
	rst_pll.u = CSR_READ(CAVM_RST_PLLX(CAVM_RST_PLL_E_SCLK));
	clks->sclk = rst_pll.s.cur_mul * REF_CLK;
	rst_pll.u = CSR_READ(CAVM_RST_PLLX(CAVM_RST_PLL_E_DFICLK));
	clks->dficlk = rst_pll.s.cur_mul * REF_CLK;
	rst_pll.u = CSR_READ(CAVM_RST_PLLX(CAVM_RST_PLL_E_NETCLK));
	clks->netclk = rst_pll.s.cur_mul * REF_CLK;
	rst_pll.u = CSR_READ(CAVM_RST_PLLX(CAVM_RST_PLL_E_IOCLK));
	clks->ioclk = rst_pll.s.cur_mul * REF_CLK;

	return sizeof(*clks);
}

static inline void asm_ramindex_mcr(uint32_t ramindex)
{
	asm volatile(
	    "sys #6, c15, c0, #0, %0\t\n"
	    "dsb sy\t\n"
	    "isb" :: "r" (ramindex));
}

static inline void asm_ramindex_mrc(uint64_t *dl1data, uint8_t data_reg,
				    uint8_t sel)
{
	if (data_reg) {
		if (sel & 0x01)
			asm volatile("mrs %0,S3_6_c15_c1_0" : "=r"(dl1data[0]));
		if (sel & 0x02)
			asm volatile("mrs %0,S3_6_c15_c1_1" : "=r"(dl1data[1]));
		if (sel & 0x04)
			asm volatile("mrs %0,S3_6_c15_c1_2" : "=r"(dl1data[2]));
	} else {
		if (sel & 0x01)
			asm volatile("mrs %0,S3_6_c15_c0_0" : "=r"(dl1data[0]));
		if (sel & 0x02)
			asm volatile("mrs %0,S3_6_c15_c0_1" : "=r"(dl1data[1]));
		if (sel & 0x04)
			asm volatile("mrs %0,S3_6_c15_c0_2" : "=r"(dl1data[2]));
	}
}

static int adbg_cache(adbg_config_t *acfg, void *mem_base, adbg_cache_op_t op, adbg_cache_arg_t arg)
{
	uint64_t dl1data[3], offset, coffset;
	uint8_t id    = (uint8_t)arg.ramid;
	uint16_t way, index, j;
	uint64_t *cdata = NULL;
	uint32_t ramindex;

	if (op != ADBG_CACHE_OP_SNAPSHOT)
		return -1;

	/* Core initiating SMC request should be same as which
	 * processes the request)
	 */
	if (arg.core != plat_my_core_pos())
		return -1;

	/*
	 * Offset for different cache data
	 * Offset	Size	Cache
	 * 0		64K	L1 Data cache
	 * 64k		64K	L1 Instruction Cache
	 * 128K -	1M	L2 Data Cache
	 */
	cdata = (uint64_t *)mem_base;

	coffset = acfg->cache.l1d_sets * acfg->cache.l1d_ways * 64;
	for (index = 0; index < acfg->cache.l1d_sets; index++) {
		for (way = 0; way < acfg->cache.l1d_ways; way++) {
			j = 0;
			/* L1 Tag RAM */
			id = 0x8;
			memset(dl1data, 0, 3);
			ramindex = (id << 24) + (way << 18) + (index << 6);
			asm_ramindex_mcr(ramindex);
			asm_ramindex_mrc(dl1data, 1, 0x03);
			offset = (index * acfg->cache.l1d_ways * 64) + (way * 64) + (j * 8);
			*(uint64_t *)((uint8_t *)cdata + offset) = dl1data[0];
			j++;
			offset = (index * acfg->cache.l1d_ways * 64) + (way * 64) + (j * 8);
			*(uint64_t *)((uint8_t *)cdata + offset) = dl1data[1];

			/* L1 Instruction cache */
			j = 0;
			id = 0x0;
			ramindex = (id << 24) + (way << 18) + (index << 6);
			asm_ramindex_mcr(ramindex);
			asm_ramindex_mrc(dl1data, 0, 0x03);
			offset = coffset + (index * acfg->cache.l1d_ways * 64) +
				(way * 64) + (j * 8);
			*(uint64_t *)((uint8_t *)cdata + offset) = dl1data[0];
			j++;
			offset = coffset + (index * acfg->cache.l1d_ways * 64) +
				(way * 64) + (j * 8);
			*(uint64_t *)((uint8_t *)cdata + offset) = dl1data[1];
		}
	}
	/* L2 Data cache */
	for (index = 0; index < acfg->cache.l2_sets; index++) {
		for (way = 0; way < acfg->cache.l2_ways; way++) {
			offset = 0;
			id = 0x10;
			j = 0;
			ramindex = (id << 24) + (way << 18) + (index << 6);
			asm_ramindex_mcr(ramindex);
			asm_ramindex_mrc(dl1data, 1, 0x01);
			offset = ((2 * coffset) + (index * acfg->cache.l2_ways * 64) + (way * 64) +
				  (j * 8));
			*(uint64_t *)((uint8_t *)cdata + offset) = dl1data[0];
		}
	}

	return 0;
}

static void adbg_map(adbg_config_t *acfg)
{
	static bool mapped;
	uint64_t base, end;

	if (mapped)
		return;

	/* Map the required register regions */
	base = ROUND_DOWN(CAVM_MSWX_MSHX_PRF(0, 0), PAGE_SIZE);
	end = ROUND_UP(CAVM_MSWX_MSHX_PFCX(acfg->msw.num - 1, 3, acfg->msw.n_cntr - 1), PAGE_SIZE);
	octeontx_mmap_add_dynamic_region_with_sync(base, base, end - base,
						   MT_DEVICE | MT_RW | MT_SECURE);
	/* Map the required register regions */
	base = ROUND_DOWN(CAVM_NCBX_RWX_REQ_PC(0, 0), PAGE_SIZE);
	end = ROUND_UP(CAVM_NCBX_ARBX_RWX_LAT_PC(acfg->ncb.num - 1, acfg->ncb.n_arb - 1, 1),
		       PAGE_SIZE);
	octeontx_mmap_add_dynamic_region_with_sync(base, base, end - base,
						   MT_DEVICE | MT_RW | MT_SECURE);
	mapped = 1;
}

int octeontx_adbg(void *handle, uint64_t x1, uint64_t x2, uint64_t x3,
		  uint64_t x4)
{
	uint64_t mem_size, total_size;
	adbg_config_t *acfg;
	void *mem_base;
	adbg_arg_t arg;
	int sz = -1;

	mem_base = (void *)adbg_dram_region_base();
	acfg = &cn106_adbg_cfg;
	mem_size = acfg->cache.l1d_size + acfg->cache.l1i_size + acfg->cache.l2_size;

	total_size = adbg_dram_region_size();
	if (mem_size > total_size)
		SMC_RET1(handle, -1);

	arg.u1 = x1;
	arg.u2 = x2;
	arg.u3 = x3;
	arg.u4 = x4;
	switch (arg.subsys) {
	case ADBG_SUBSYS_GENERIC:
		if (arg.op == ADBG_GENERIC_OP_HANDSHAKE) {
			adbg_map(acfg);
			/* Clear the debug area */
			memset(mem_base, 0, total_size);
			SMC_RET3(handle, 0, (uint64_t)mem_base, total_size);
		} else if (arg.op == ADBG_GENERIC_OP_VERSION_GET) {
			adbg_version_t ver = ADBG_VERSION;

			memcpy(mem_base, &ver, sizeof(ver));
			SMC_RET2(handle, 0, sizeof(ver));
		} else if (arg.op == ADBG_GENERIC_OP_CLK_GET) {
			SMC_RET2(handle, 0, adbg_get_clk(mem_base));
		} else if (arg.op == ADBG_GENERIC_OP_CONFIG_GET) {
			memcpy(mem_base, acfg, sizeof(*acfg));
			SMC_RET2(handle, 0, sizeof(*acfg));
		} else {
			SMC_RET1(handle, -1);
		}
		break;
	case ADBG_SUBSYS_CACHE:
		SMC_RET1(handle, adbg_cache(acfg, mem_base, arg.op, arg.cache));
		break;
	case ADBG_SUBSYS_DSS:
		sz = adbg_dss(acfg, mem_base, arg.op, arg.dss);
		break;
	case ADBG_SUBSYS_TAD:
		sz = adbg_tad(acfg, mem_base, arg.op, arg.tad);
		break;
	case ADBG_SUBSYS_APA:
		sz = adbg_apa(acfg, mem_base, arg.op);
		break;
	case ADBG_SUBSYS_MSW:
		sz = adbg_msw(acfg, mem_base, arg.op);
		break;
	case ADBG_SUBSYS_IOBN:
		sz = adbg_iobn(acfg, mem_base, arg.op, arg.iobn);
		break;
	case ADBG_SUBSYS_NCB:
		sz = adbg_ncb(acfg, mem_base, arg.op);
		break;
	default:
		break;
	}

	if (sz < 0) {
		SMC_RET1(handle, -1);
	} else {
		SMC_RET2(handle, 0, sz);
	}

	return 0;
}
