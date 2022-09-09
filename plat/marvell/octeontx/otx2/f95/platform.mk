# Copyright (c) 2016 Marvell.
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses

include plat/marvell/octeontx/otx2/platform.mk

# Define DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS to enable diagnostic cmds
#DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS		:=	1
ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
    $(eval $(call add_define,DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS))
endif

PLAT_INCLUDES		+=	-Iplat/marvell/octeontx/otx2/f95/include		\

PLAT_BL_COMMON_SOURCES	+=	plat/marvell/octeontx/otx2/f95/plat_f95_setup.c		\
				drivers/marvell/octeontx/otx2/gsern/gsern_init_common.c	\
				drivers/marvell/octeontx/otx2/gsern/gsern_init_network.c	\
				drivers/marvell/octeontx/otx2/gsern/gsern_api.c		\
				drivers/marvell/octeontx/otx2/gsern/gsern_eye.c		\
				drivers/marvell/octeontx/otx2/qlm/qlm_gsern.c			\
				drivers/marvell/octeontx/otx2/qlm/qlm_gsern_ops.c		\

BL2_SOURCES		+=	plat/marvell/octeontx/otx2/f95/plat_f95_ecam.c		\

BL31_SOURCES		+=	plat/marvell/octeontx/otx2/f95/plat_f95_svc.c  \
				drivers/marvell/octeontx/otx2/bphy.c			\

ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
BL31_SOURCES		+=	drivers/marvell/octeontx/otx2/serdes_diagnostics.c
endif
