# Copyright (C) 2020 Marvell International Ltd.
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses

RAS_EXTENSION		:=       0
HANDLE_EA_EL3_FIRST	:=       1

# Enable GIC v4 extension
GIC_ENABLE_V4_EXTN      :=       1

# override default platform CSR include path
PLAT_CSR_INCLUDE        :=       include/plat/marvell/octeontx/cn10k/csr

# Include common Marvell platform's makefile helper
include plat/marvell/octeontx/platform.mk

PLAT_XLAT_TABLES_DYNAMIC := 1
$(eval $(call add_define,PLAT_XLAT_TABLES_DYNAMIC))

SCMI_WITH_LEGACY_PM	:=	1
ifdef SCMI_WITH_LEGACY_PM
    $(eval $(call add_define,SCMI_WITH_LEGACY_PM))
endif

# Define DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS to enable diagnostic cmds
# DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS		:=	1
ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
    $(eval $(call add_define,DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS))
endif

ARM_ARCH_MINOR		:=	2
# Allow to use armv8.2 specific instructions
TF_CFLAGS_aarch64	:=	$(patsubst -march=%, -march=armv8.2-a, $(TF_CFLAGS_aarch64))

PLAT_INCLUDES		+=	-Iinclude/plat/marvell/octeontx/cn10k			\
				-Iplat/marvell/octeontx/cn10k/t106/include		\

PLAT_BL_COMMON_SOURCES	+=	plat/marvell/octeontx/cn10k/t106/plat_t106_setup.c		\
				plat/marvell/octeontx/cn10k/plat_non_fip_image.c		\
				plat/marvell/octeontx/cn10k/plat_security.c		\
				plat/marvell/octeontx/cn10k/plat_bcfg_init.c		\
				plat/marvell/octeontx/cn10k/plat_setup.c		\
				plat/marvell/octeontx/cn10k/aarch64/plat_octeontx_common.S	\
				plat/marvell/octeontx/cn10k/aarch64/plat_helpers.S		\

BL2_SOURCES		+=	plat/marvell/octeontx/cn10k/t106/plat_t106_ecam.c		\
				drivers/marvell/sh_fwdata.c		\
				drivers/marvell/rvu.c		\
				plat/marvell/octeontx/cn10k/plat_board_cfg.c	\
				plat/marvell/octeontx/cn10k/plat_cn10k_iobn.c			\

BL31_SOURCES		+=	plat/marvell/octeontx/cn10k/plat_topology.c		\
				drivers/marvell/sh_fwdata.c		\
				drivers/marvell/rvu.c		\
				plat/marvell/octeontx/cn10k/plat_pm.c			\
				plat/marvell/octeontx/cn10k/plat_pwrc.c		\
				plat/marvell/octeontx/cn10k/plat_scmi.c		\
				plat/marvell/octeontx/cn10k/plat_legacy_pm_ops.c		\
				plat/marvell/octeontx/cn10k/plat_svc.c		\

ifdef NT_FW_CONFIG
    $(eval $(call add_define,NT_FW_CONFIG))
    $(eval $(call TOOL_ADD_PAYLOAD,${NT_FW_CONFIG},--nt-fw-config))
endif

