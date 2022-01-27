# Copyright (C) 2020 Marvell International Ltd.
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses

# include cn10k platform common makefile
include plat/marvell/octeontx/cn10k/platform.mk

PLAT_INCLUDES		+=	-Iplat/marvell/octeontx/cn10k/cn10kb/include

PLAT_BL_COMMON_SOURCES	+=	plat/marvell/octeontx/cn10k/cn10kb/plat_cn10kb_setup.c

BL2_SOURCES		+=	plat/marvell/octeontx/cn10k/cn10kb/plat_cn10kb_ecam.c

