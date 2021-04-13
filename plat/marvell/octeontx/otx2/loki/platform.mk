# Copyright (C) 2019 Marvell International Ltd.
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses

include plat/marvell/octeontx/otx2/platform.mk

# Define DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS to enable diagnostic cmds
DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS		:=	1
ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
    $(eval $(call add_define,DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS))
endif

PLAT_INCLUDES		+=	-Iplat/marvell/octeontx/otx2/loki/include		\
				-Ilib/libphy/marvell_88x5113/include			\
				-Ilib/libphy/marvell_88x5113/serdes/src/include		\

PLAT_BL_COMMON_SOURCES	+=	plat/marvell/octeontx/otx2/loki/plat_loki_setup.c	\
				drivers/marvell/octeontx/otx2/qlm/qlm_gserc.c			\
				drivers/marvell/octeontx/otx2/qlm/qlm_gserc_ops.c		\

BL2_SOURCES		+=	plat/marvell/octeontx/otx2/loki/plat_loki_ecam.c	\

BL31_SOURCES		+=	plat/marvell/octeontx/otx2/loki/plat_loki_svc.c		\
				drivers/marvell/octeontx/otx2/bphy.c			\

ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
BL31_SOURCES		+=	drivers/marvell/octeontx/otx2/serdes_diagnostics.c
endif
