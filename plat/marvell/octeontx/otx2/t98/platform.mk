# Copyright (C) 2016-2019 Marvell International Ltd.
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses

include plat/marvell/octeontx/otx2/platform.mk

# Define DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS to enable diagnostic cmds
#DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS		:=	1
ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
    $(eval $(call add_define,DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS))
endif

PLAT_INCLUDES		+=	-Iplat/marvell/octeontx/otx2/t98/include		\

PLAT_BL_COMMON_SOURCES	+=	plat/marvell/octeontx/otx2/t98/plat_t98_setup.c		\

BL2_SOURCES		+=	plat/marvell/octeontx/otx2/t98/plat_t98_ecam.c		\

ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
BL31_SOURCES		+=	drivers/marvell/octeontx/otx2/serdes_diagnostics.c
endif

MARVELL_PHY_6141 := 1
ifdef MARVELL_PHY_6141
    TF_CFLAGS_aarch64 += -DMARVELL_PHY_6141
    PLAT_INCLUDES     += -Ilib/libphy/marvell_88x6141/include
    BL31_LIBS         += lib/libphy/libphy_88x6141.a
    BL31_SOURCES      += drivers/marvell/octeontx/otx2/phy/phy_marvell_6141.c
endif
