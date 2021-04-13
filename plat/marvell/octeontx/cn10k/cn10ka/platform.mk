# Copyright (C) 2020 Marvell International Ltd.
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses

# include cn10k platform common makefile
include plat/marvell/octeontx/cn10k/platform.mk

# Define DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS to enable diagnostic cmds
# DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS		:=	1
ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
    $(eval $(call add_define,DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS))
endif

PLAT_INCLUDES		+=	-Iplat/marvell/octeontx/cn10k/cn10ka/include

PLAT_BL_COMMON_SOURCES	+=	plat/marvell/octeontx/cn10k/cn10ka/plat_cn10ka_setup.c

BL2_SOURCES		+=	plat/marvell/octeontx/cn10k/cn10ka/plat_cn10ka_ecam.c
