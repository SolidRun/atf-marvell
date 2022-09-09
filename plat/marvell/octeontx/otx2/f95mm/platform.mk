# Copyright (c) 2019 Marvell.
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses

include plat/marvell/octeontx/otx2/platform.mk

# Define DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS to enable diagnostic cmds
#DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS		:=	1
ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
    $(eval $(call add_define,DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS))
endif

PLAT_INCLUDES		+=	-Iplat/marvell/octeontx/otx2/f95mm/include		\

PLAT_BL_COMMON_SOURCES	+=	plat/marvell/octeontx/otx2/f95mm/plat_f95mm_setup.c	\
				drivers/marvell/octeontx/otx2/qlm/qlm_gserj.c			\
				drivers/marvell/octeontx/otx2/qlm/qlm_gserj_ops.c		\

BL2_SOURCES		+=	plat/marvell/octeontx/otx2/f95mm/plat_f95mm_ecam.c	\

BL31_SOURCES		+=	plat/marvell/octeontx/otx2/f95mm/plat_f95mm_svc.c		\
				drivers/marvell/octeontx/otx2/bphy.c			\

ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
BL31_SOURCES		+=	drivers/marvell/octeontx/otx2/serdes_diagnostics.c
endif
