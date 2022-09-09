# Copyright (c) 2016 Marvell.
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses

WORKAROUND_CVE_2017_5715	:=	1

WORKAROUND_CVE_2018_3639	:=	1

DYNAMIC_WORKAROUND_CVE_2018_3639	:=	1

RAS_EXTENSION		:=       1
HANDLE_EA_EL3_FIRST	:=       1

ifeq (${NEED_BL32},yes)
    $(eval $(call add_define,INCLUDE_OPTEE))
endif

# enable Marvel ATF Runtime Logging
USE_MRVL_TF_LOGGING     :=       1

# Include common Marvell platform's makefile helper
include plat/marvell/octeontx/platform.mk

PLAT_XLAT_TABLES_DYNAMIC := 1
$(eval $(call add_define,PLAT_XLAT_TABLES_DYNAMIC))

SCMI_WITH_LEGACY_PM	:=	1
ifdef SCMI_WITH_LEGACY_PM
    $(eval $(call add_define,SCMI_WITH_LEGACY_PM))
endif

PLAT_INCLUDES		+=	-Iinclude/plat/marvell/octeontx/otx2			\
				-Iinclude/drivers/marvell/octeontx/otx2			\

PLAT_BL_COMMON_SOURCES  +=      plat/marvell/octeontx/otx2/plat_security.c		\
				plat/marvell/octeontx/otx2/plat_bcfg_init.c		\
				drivers/marvell/octeontx/otx2/cgx.c			\
				drivers/marvell/octeontx/otx2/cgx_flash_ops.c		\
				drivers/marvell/octeontx/otx2/gser_internal.c		\
				drivers/marvell/octeontx/otx2/qlm/qlm.c			\
				drivers/marvell/octeontx/otx2/qlm/qlm_gserr.c		\
				drivers/marvell/octeontx/otx2/qlm/qlm_gserr_ops.c	\
				drivers/marvell/octeontx/otx2/qlm/qlm_gserx_tuning.c	\
				plat/marvell/octeontx/otx2/plat_setup.c			\
				plat/marvell/octeontx/otx2/plat_io_storage.c		\
				plat/marvell/octeontx/otx2/aarch64/plat_octeontx_common.S	\
				plat/marvell/octeontx/otx2/aarch64/plat_helpers.S	\
				drivers/marvell/octeontx/smi.c

BL2_SOURCES		+=	drivers/io/io_fip.c					\
				drivers/marvell/octeontx/otx2/sh_fwdata.c		\
				drivers/marvell/octeontx/otx2/rvu.c		\
				plat/marvell/octeontx/otx2/plat_npc_mcam_profile.c	\
				plat/marvell/octeontx/otx2/plat_board_cfg.c			\
				plat/marvell/octeontx/otx2/plat_scfg.c				\
				plat/marvell/octeontx/otx2/plat_otx2_iobn.c			\

BL31_SOURCES		+=	plat/marvell/octeontx/otx2/plat_topology.c		\
				plat/marvell/octeontx/otx2/octeontx_trace.c		\
				drivers/marvell/octeontx/otx2/sh_fwdata.c		\
				drivers/marvell/octeontx/otx2/rvu.c		\
				drivers/marvell/octeontx/otx2/phy/phy_gen.c		\
				drivers/marvell/octeontx/otx2/phy/phy_vitesse.c	\
				drivers/marvell/octeontx/otx2/phy/phy_marvell.c	\
				drivers/marvell/octeontx/otx2/phy/phy_marvell_1514.c	\
				drivers/marvell/octeontx/otx2/phy/phy_mgmt.c		\
				drivers/marvell/octeontx/otx2/sfp_mgmt.c		\
				drivers/marvell/octeontx/otx2/cgx_intf.c		\
				plat/marvell/octeontx/otx2/plat_pm.c			\
				plat/marvell/octeontx/otx2/plat_pwrc.c		\
				plat/marvell/octeontx/otx2/plat_scmi.c		\
				plat/marvell/octeontx/otx2/plat_flr.c		\
				plat/marvell/octeontx/otx2/plat_npc_mcam_profile.c	\
				plat/marvell/octeontx/otx2/plat_legacy_pm_ops.c		\
				plat/marvell/octeontx/otx2/plat_svc.c		\

ifeq (${RAS_EXTENSION},1)
BL31_SOURCES		+=	plat/marvell/octeontx/otx2/smc_ras.c
BL31_SOURCES		+=	plat/marvell/octeontx/otx2/lmc_ras.c
BL31_SOURCES		+=	plat/marvell/octeontx/otx2/mdc_ras.c
BL31_SOURCES		+=	plat/marvell/octeontx/otx2/plat_ras.c
BL31_SOURCES		+=	lib/extensions/ras/std_err_record.c
BL31_SOURCES		+=	lib/extensions/ras/ras_common.c
endif

ifdef NT_FW_CONFIG
    $(eval $(call add_define,NT_FW_CONFIG))
    $(eval $(call TOOL_ADD_PAYLOAD,${NT_FW_CONFIG},--nt-fw-config))
endif
