 #
 # Copyright (C) 2020 Marvell.
 #
 # SPDX-License-Identifier:     BSD-3-Clause
 #
 # Redistribution and use in source and binary forms, with or without
 # modification, are permitted provided that the following conditions are met:
 #
 # 1. Redistributions of source code must retain the above copyright notice,
 # this list of conditions and the following disclaimer.
 #
 # 2. Redistributions in binary form must reproduce the above copyright notice,
 # this list of conditions and the following disclaimer in the documentation
 # and/or other materials provided with the distribution.
 #
 # 3. Neither the name of the copyright holder nor the names of its
 # contributors may be used to endorse or promote products derived from this
 # software without specific prior written permission.
 #
 # THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 # AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 # IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 # ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 # LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 # CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 # SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 # INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 # CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 # ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 # POSSIBILITY OF SUCH DAMAGE.
 #

RAS_EXTENSION		:=       0
HANDLE_EA_EL3_FIRST	:=       1

# Enable GIC v4 extension
GIC_ENABLE_V4_EXTN      :=       1

# override default platform CSR include path
PLAT_CSR_INCLUDE        :=       include/plat/marvell/octeontx/cn10k/csr

# enable Marvel ATF Runtime Logging
USE_MRVL_TF_LOGGING     :=       1

# Include common Marvell platform's makefile helper
include plat/marvell/octeontx/platform.mk

PLAT_XLAT_TABLES_DYNAMIC := 1
$(eval $(call add_define,PLAT_XLAT_TABLES_DYNAMIC))

SCMI_WITH_LEGACY_PM	:=	0
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

LIBTIM_DIR		:=	drivers/marvell/libtim
include ${LIBTIM_DIR}/libtim.mk

PLAT_INCLUDES		+=	-Iinclude/plat/marvell/octeontx/cn10k			\
				-Iplat/marvell/octeontx/cn10k/cnf10ka/include		\
				-I${LIBTIM_DIR}				\

PLAT_BL_COMMON_SOURCES	+=	plat/marvell/octeontx/cn10k/cnf10ka/plat_cnf10ka_setup.c		\
				plat/marvell/octeontx/cn10k/plat_non_fip_image.c		\
				plat/marvell/octeontx/cn10k/plat_security.c		\
				plat/marvell/octeontx/cn10k/plat_bcfg_init.c		\
				plat/marvell/octeontx/cn10k/plat_setup.c		\
				plat/marvell/octeontx/cn10k/plat_tim.c		\
				plat/marvell/octeontx/cn10k/aarch64/plat_octeontx_common.S	\
				plat/marvell/octeontx/cn10k/aarch64/plat_helpers.S		\
				plat/marvell/octeontx/cn10k/plat_portm_cfg.c	\
				drivers/marvell/qlm/qlm_cn10k.c			\
				drivers/marvell/qlm/qlm_gserm.c		\
				drivers/marvell/rpm.c		\
				drivers/marvell/rpm_pcs.c		\
				drivers/marvell/bphy.c		\
				drivers/marvell/cn10k/mmc/emmc_driver_calls.c \
				drivers/marvell/cn10k/mmc/emmc_driver_funcs.c \
				drivers/marvell/cn10k/mmc/emmc_wrapper_funcs.c \

BL2_SOURCES		+=	plat/marvell/octeontx/cn10k/cnf10ka/plat_cnf10ka_ecam.c		\
				drivers/marvell/sh_fwdata_cn10k.c		\
				drivers/marvell/ehsm-drv.c		\
				drivers/marvell/rvu.c		\
				plat/marvell/octeontx/cn10k/plat_board_cfg.c	\
				plat/marvell/octeontx/cn10k/plat_scfg.c		\
				plat/marvell/octeontx/cn10k/plat_cn10k_iobn.c			\
				${LIBTIM_SRCS}

BL31_SOURCES		+=	plat/marvell/octeontx/cn10k/plat_topology.c		\
				drivers/marvell/sh_fwdata_cn10k.c		\
				drivers/marvell/rvu.c		\
				drivers/marvell/rpm_intf.c		\
				drivers/marvell/ehsm-drv.c		\
				drivers/marvell/tim_update.c		\
				drivers/marvell/spi_smc_load.c		\
				plat/marvell/octeontx/cn10k/plat_pm.c			\
				plat/marvell/octeontx/cn10k/plat_pwrc.c		\
				plat/marvell/octeontx/cn10k/plat_scmi.c		\
				plat/marvell/octeontx/cn10k/plat_legacy_pm_ops.c		\
				plat/marvell/octeontx/cn10k/plat_svc.c		\
				plat/marvell/octeontx/cn10k/plat_npc_mcam_profile.c	\
				plat/marvell/octeontx/cn10k/cnf10ka/plat_cnf10ka_svc.c

ifdef NT_FW_CONFIG
    $(eval $(call add_define,NT_FW_CONFIG))
endif

