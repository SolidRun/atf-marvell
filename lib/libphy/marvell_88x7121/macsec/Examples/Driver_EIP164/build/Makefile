#------------------------------------------------------------------------------
#
#    Module        : ddk164
#    Version       : 3.1.1
#    Configuration : DDK-164-BSD
#
#    Date          : 2021-Aug-12
#
# Copyright (c) 2008-2021 by Rambus, Inc. and/or its subsidiaries.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are
# met:
#
# 1. Redistributions of source code must retain the above copyright
# notice, this list of conditions and the following disclaimer.
#
# 2. Redistributions in binary form must reproduce the above copyright
# notice, this list of conditions and the following disclaimer in the
# documentation and/or other materials provided with the distribution.
#
# 3. Neither the name of the copyright holder nor the names of its
# contributors may be used to endorse or promote products derived from
# this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#------------------------------------------------------------------------------

##############################################################################
##  Makefile for the driver
##  How to use :
##  i)    $ make
##  ii)   For cleaning : $ make clean
##############################################################################

#### User Edit Section : Variables to be set by the User
##   User may not need to modify anything other than this section

  ##-->: { Here follow the variables to be set by the User

	# Set KERNEL_DIR to the path to the Kernel Source directory for which you
	# wish to compile.
	#KERNEL_DIR:=

	# Set ARCH according to the target architecture
	# supported values: x86 and powerpc
	#ARCH:=x86
	#ARCH:=powerpc

	# Set CROSS_COMPILE to the path to the cross compiler binutils
	# concatenated with the prefix they have before normal binutils name
	# For example :
	# If we have cross compiler for Power-PC in /opt/eldk/target/usr/bin/
	# by the file name ppc_4xxFP-gcc, we set it as below :
	#CROSS_COMPILE:=/opt/eldk/target/usr/bin/

	# Set HOST_HW_PLATFORM
	# supported values: FPGA
	#HOST_HW_PLATFORM:=FPGA

  ##<--:  } End of User Edit Section

#### User should not need to modify anything below this line
##############################################################################

# Make sure that ARCH, KERNEL_DIR and CROSS_COMPILE are set

ifndef KERNEL_DIR
  ERROR_KERNEL_DIR_NOT_SET:=YES
endif

ifeq (${DDK_HOST64},y)
  EXTRA_CFLAGS += -DDRIVER_64BIT_HOST
endif

ifeq (${HOST_HW_PLATFORM},FPGA)
else
  ERROR_HOST_HW_PLATFORM_NOT_SET:=YES
endif

ifeq (${EIP164_HW_VERSION},HW1.0)
  EXTRA_CFLAGS += -DEIP164_DEVICE_HW20
endif


KERNEL_COMPILE_OPTS=
ifeq (${SPARSE_DDK},y)
  KERNEL_COMPILE_OPTS=C=1 CF=-Wno-context
endif


ifeq (${ARCH},x86)
  HOST_COMPILER:=gcc
  COMPILER:=gcc
  AR:=ar
  # cs_*.h files respond to ARCH_X86
  EXTRA_CFLAGS += -DARCH_X86
  EIP164_BUS_TYPE:=PCI
else ifeq (${ARCH},powerpc)
  ifndef CROSS_COMPILE
    ERROR_CROSS_COMPILE_NOT_SET:=YES
  endif
  HOST_COMPILER:=gcc
  COMPILER:=${CROSS_COMPILE}gcc
  AR:=${CROSS_COMPILE}ar
  EXTRA_CFLAGS += -DARCH_POWERPC
  LIB_PATH:=${CROSS_LIB_PATH}
  EIP164_BUS_TYPE:=PCI
else ifeq (${ARCH},arm)
  ifndef CROSS_COMPILE
    ERROR_CROSS_COMPILE_NOT_SET:=YES
  endif
  ifndef CROSS_LIB_PATH
    ERROR_CROSS_LIB_PATH_NOT_SET:=YES
  endif
  HOST_COMPILER:=gcc
  COMPILER:=${CROSS_COMPILE}gcc
  AR:=${CROSS_COMPILE}ar
  EXTRA_CFLAGS += -DARCH_ARM
  LIB_PATH:=${CROSS_LIB_PATH}
  EIP164_BUS_TYPE:=OF
else ifeq (${ARCH},arm64)
  ifndef CROSS_COMPILE
    ERROR_CROSS_COMPILE_NOT_SET:=YES
  endif
  ifndef CROSS_LIB_PATH
    ERROR_CROSS_LIB_PATH_NOT_SET:=YES
  endif
  HOST_COMPILER:=gcc
  COMPILER:=${CROSS_COMPILE}gcc
  AR:=${CROSS_COMPILE}ar
  EXTRA_CFLAGS += -DARCH_ARM64
  LIB_PATH:=${CROSS_LIB_PATH}
  EIP164_BUS_TYPE:=OF
else
  ERROR_ARCH_NOT_SET:=YES
endif

ifeq ($(KERNELRELEASE),)
   PWD:=$(shell pwd)
endif

ifeq ($(DDK_PWD_OVERRIDE),)
   DDK_PWD_OVERRIDE := `pwd`
else
   override PWD := $(DDK_PWD_OVERRIDE)
endif


#GCOV_PROFILE=y

SRC_APP=../../../Integration/Adapter_EIP164
SRC_CFYE=../../../Integration/Adapter_EIP163
SRC_KIT=../../../Kit
SRC_UMDEVXS_PROXY=../../../Integration/UMDevXS/UserPart
SRC_UMDEVXS_DRV=../../../Integration/UMDevXS/KernelPart
SRC_INT_DSP=../../../Integration/InterruptDispatcher
SRC_WRK_TRD=../../../Integration/WorkerThread
SRC_DRV_FWK=../../../Integration/DriverFramework

PATH_BUILD=$(PWD)
PATH_APP=$(PWD)/$(SRC_APP)
PATH_CFYE=$(PWD)/$(SRC_CFYE)
PATH_KIT=$(PWD)/$(SRC_KIT)
PATH_DRV_FWK=$(PWD)/$(SRC_DRV_FWK)
PATH_UMDEVXS_PROXY=$(PWD)/$(SRC_UMDEVXS_PROXY)
PATH_UMDEVXS_DRV=$(PWD)/$(SRC_UMDEVXS_DRV)
PATH_INT_DSP=$(PWD)/$(SRC_INT_DSP)
PATH_WRK_TRD=$(PWD)/$(SRC_WRK_TRD)

# Include Paths
INCLUDE_APP_CONFIG:= \
 -I$(PATH_BUILD) \
 -I$(PATH_BUILD)/$(HOST_HW_PLATFORM)

INCLUDE_APP:= \
 -I$(PATH_APP)/src \
 -I$(PATH_APP)/incl \
 -I$(PATH_CFYE)/src \
 -I$(PATH_CFYE)/incl \
 -I$(PATH_APP)/src/$(HOST_HW_PLATFORM) \
 -I$(PATH_APP)/src/lkm

INCLUDE_KIT:= \
 -I$(PATH_KIT)/DriverFramework/Basic_Defs_API/incl \
 -I$(PATH_KIT)/DriverFramework/CLib_Abstraction_API/incl \
 -I$(PATH_KIT)/DriverFramework/Device_API/incl \
 -I$(PATH_DRV_FWK)/src/LKM \
 -I$(PATH_DRV_FWK)/src/LKM/${EIP164_BUS_TYPE} \
 -I$(PATH_DRV_FWK)/src \
 -I$(PATH_KIT)/EIP201/incl \
 -I$(PATH_KIT)/EIP201/src \
 -I$(PATH_KIT)/EIP163/incl \
 -I$(PATH_KIT)/EIP163/src \
 -I$(PATH_KIT)/EIP164/incl \
 -I$(PATH_KIT)/EIP164/src \
 -I$(PATH_KIT)/EIP217/src \
 -I$(PATH_KIT)/SABuilder_MACsec/incl \
 -I$(PATH_KIT)/SABuilder_MACsec/src \
 -I$(PATH_KIT)/Log/incl \
 -I$(PATH_KIT)/Log/src/printk \
 -I$(PATH_KIT)/List/incl \

INCLUDE_USER:= \
  -I$(PATH_APP)/src/um \
  -I$(PATH_KIT)/Log/src/printf \
  -I$(PATH_DRV_FWK)/src/UMDevXS \
  -I$(PATH_UMDEVXS_PROXY)/incl \
  -I$(PATH_UMDEVXS_DRV)/incl \
  -I$(PATH_INT_DSP)/incl \
  -I$(PATH_INT_DSP)/src \
  -I$(PATH_WRK_TRD)/incl

INCLUDE_FLAGS_ALL:= \
  $(INCLUDE_APP_CONFIG) \
  $(INCLUDE_APP) \
  $(INCLUDE_KIT)

ifeq (${ARCH},powerpc)
   INCLUDE_FLAGS_ALL += -I$(strip $(KERNEL_DIR))/arch/powerpc
   INCLUDE_FLAGS_ALL += -I$(strip $(KERNEL_DIR))/arch/powerpc/include
   INCLUDE_FLAGS_ALL += -I$(strip $(KERNEL_DIR))/include
endif

# Compiler Flags
WARNING_FLAGS += -Wall
WARNING_FLAGS_USER = \
    -W -Wextra -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations \
    -Wold-style-definition -Wpointer-arith -Wcast-align -Wnested-externs \
    -Wcast-qual -Wundef -Wwrite-strings
#DEBUG_FLAGS=
#CODE_COVERAGE_FLAGS=
#PROFILING_FLAGS=
#BACKWARD_COMPATIBILITY_FLAGS=
#OPTIMIZATION_FLAGS=

ifeq (${DEBUG_DDK},y)
   DEBUG_FLAGS += -g
   DEBUG_FLAGS += -DDEBUG
endif

ifeq (${COVER_DDK},y)
   DEBUG_FLAGS += -g
   USER_CFLAGS += -ftest-coverage
   USER_CFLAGS += -fprofile-arcs
endif

ifeq (${PROFILE_DDK},y)
   DEBUG_FLAGS += -g
   USER_CFLAGS += -pg
endif

# ARCH=powerpc means build for 405EX which has 16K L1 I-Cache
ifeq (${ARCH},powerpc)
  # OPTIMIZATION_FLAGS += -Os
endif

EXTRA_CFLAGS += $(BACKWARD_COMPATIBILITY_FLAGS)
EXTRA_CFLAGS += $(INCLUDE_FLAGS_ALL)
EXTRA_CFLAGS += $(WARNING_FLAGS)
EXTRA_CFLAGS += $(DEBUG_FLAGS)
EXTRA_CFLAGS += $(CODE_COVERAGE_FLAGS)
EXTRA_CFLAGS += $(PROFILING_FLAGS)
EXTRA_CFLAGS += $(OPTIMIZATION_FLAGS)

USER_CFLAGS += $(INCLUDE_USER)
USER_CFLAGS += $(WARNING_FLAGS_USER)

.PHONY = clean clean_module

default: driver_164_k driver_164_u

obj-m	:= driver_164_k.o

# relative paths required here!
driver_164_k-objs:= \
  $(SRC_APP)/src/adapter_driver164_init.o \
  $(SRC_APP)/src/$(HOST_HW_PLATFORM)/adapter_init.o \
  $(SRC_APP)/src/lkm/adapter_sleep.o \
  $(SRC_APP)/src/lkm/adapter_lock.o \
  $(SRC_APP)/src/adapter_lock_internal.o \
  $(SRC_APP)/src/lkm/adapter_interrupts.o \
  $(SRC_APP)/src/adapter_memxs.o \
  $(SRC_APP)/src/adapter_init_warmboot.o \
  $(SRC_APP)/src/adapter_init_support.o \
  $(SRC_KIT)/EIP164/src/eip164_rules.o \
  $(SRC_KIT)/EIP164/src/eip164_device.o \
  $(SRC_KIT)/EIP164/src/eip164_secy.o \
  $(SRC_KIT)/EIP163/src/eip163.o \
  $(SRC_KIT)/EIP201/src/eip201.o \
  $(SRC_KIT)/SABuilder_MACsec/src/sa_builder_macsec.o \
  $(SRC_KIT)/SABuilder_MACsec/src/sa_builder_eip164.o \
  $(SRC_KIT)/List/src/list.o \
  $(SRC_DRV_FWK)/src/LKM/${EIP164_BUS_TYPE}/device_lkm.o \
  $(SRC_DRV_FWK)/src/LKM/${EIP164_BUS_TYPE}/lkm.o \
  $(SRC_DRV_FWK)/src/device_generic.o \
  $(SRC_KIT)/Log/src/log.o \
  $(patsubst %.c,%.o,$(subst $(PWD)/,,$(wildcard $(PWD)/../../../Integration/Adapter_EIP164/src/adapter_warmboot*.c))) \
  $(patsubst %.c,%.o,$(subst $(PWD)/,,$(wildcard $(PWD)/../../../Integration/Adapter_EIP164/src/adapter_secy*.c))) \
  $(patsubst %.c,%.o,$(subst $(PWD)/,,$(wildcard $(PWD)/../../../Integration/Adapter_EIP163/src/adapter_cfye*.c)))

driver_164_k:
	@if [ "$(ERROR_ARCH_NOT_SET)" = "YES" ]; then \
	  echo "ARCH not set or unsupported"; \
	  exit 1; \
	fi
	@if [ "$(ERROR_KERNEL_DIR_NOT_SET)" = "YES" ]; then \
	  echo "KERNEL_DIR not set"; \
	  exit 1; \
	fi
	@if [ "$(ERROR_CROSS_COMPILE_NOT_SET)" = "YES" ]; then \
	  echo "CROSS_COMPILE not set"; \
	  exit 1; \
	fi
	@if [ "$(ERROR_HOST_HW_PLATFORM_NOT_SET)" = "YES" ]; then \
	  echo "HOST_HW_PLATFORM not set"; \
	  exit 1; \
	fi

#	@echo "EXTRA_CFLAGS: $(EXTRA_CFLAGS)";
	make DDK_PWD_OVERRIDE=$(DDK_PWD_OVERRIDE) ARCH=$(ARCH) CROSS_COMPILE=$(strip $(CROSS_COMPILE)) -C $(KERNEL_DIR) SUBDIRS=$(PWD) $(KERNEL_COMPILE_OPTS) modules

# Linux user-space driver build
driver_164_u:
# Adapter EIP-164
	$(COMPILER) -c $(SRC_APP)/src/adapter_driver164_init.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
	$(COMPILER) -c $(SRC_APP)/src/${HOST_HW_PLATFORM}/adapter_init.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
	$(COMPILER) -c $(SRC_APP)/src/um/adapter_sleep.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
	$(COMPILER) -c $(SRC_APP)/src/um/adapter_lock.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
	$(COMPILER) -c $(SRC_APP)/src/adapter_lock_internal.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
	$(COMPILER) -c $(SRC_APP)/src/adapter_init_warmboot.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
	$(COMPILER) -c $(SRC_APP)/src/adapter_init_support.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
	$(COMPILER) -c $(SRC_APP)/src/adapter_warmboot*.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
# Adapter EIP-163
	$(COMPILER) -c $(SRC_CFYE)/src/adapter_cfye*.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
# Adapter SecY
	$(COMPILER) -c $(SRC_APP)/src/adapter_secy*.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
# Adapter Debug
	$(COMPILER) -c $(SRC_APP)/src/adapter_debug.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
# SLAD Adapter Interrupts
	$(COMPILER) -c $(SRC_APP)/src/um/adapter_interrupts.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
# SLAD MemXS adapter
	$(COMPILER) -c $(SRC_APP)/src/adapter_memxs.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
# Interrupt Dispatcher
	$(COMPILER) -c $(SRC_INT_DSP)/src/${HOST_HW_PLATFORM}/intdispatch.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
# Worker thread
	$(COMPILER) -c $(SRC_WRK_TRD)/src/workerthread_linuxusermode.c  $(USER_CFLAGS) $(EXTRA_CFLAGS);
# EIP-163
	$(COMPILER) -c $(SRC_KIT)/EIP163/src/eip163.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
# EIP-164
	$(COMPILER) -c $(SRC_KIT)/EIP164/src/eip164_rules.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
	$(COMPILER) -c $(SRC_KIT)/EIP164/src/eip164_device.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
	$(COMPILER) -c $(SRC_KIT)/EIP164/src/eip164_secy.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
# EIP-201
	$(COMPILER) -c $(SRC_KIT)/EIP201/src/eip201.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
# SA Builder
	$(COMPILER) -c $(SRC_KIT)/SABuilder_MACsec/src/sa_builder_macsec.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
	$(COMPILER) -c $(SRC_KIT)/SABuilder_MACsec/src/sa_builder_eip164.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
# List
	$(COMPILER) -c $(SRC_KIT)/List/src/list.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
# Log
	$(COMPILER) -c $(SRC_KIT)/Log/src/log.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
# Driver Framework Device API implementation for linux user-space
	$(COMPILER) -c $(SRC_DRV_FWK)/src/UMDevXS/hwpal_device_umdevxs.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
# Driver Framework Device API generic implementation
	$(COMPILER) -c $(SRC_DRV_FWK)/src/device_generic.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
# UMDevXS Proxy
	$(COMPILER) -c $(SRC_UMDEVXS_PROXY)/src/umdevxsproxy.c $(USER_CFLAGS) $(EXTRA_CFLAGS);
# Driver user-space statically linkable library
	rm -f *.a
	$(AR) -cvq libdriver_164_u.a \
	adapter_driver164_init.o adapter_init.o \
	adapter_cfye*.o adapter_secy*.o adapter_sleep.o adapter_interrupts.o \
	adapter_lock.o adapter_lock_internal.o adapter_debug.o adapter_memxs.o \
	adapter_warmboot*.o adapter_init_warmboot.o adapter_init_support.o \
	intdispatch.o workerthread_linuxusermode.o \
	list.o eip201.o sa_builder_macsec.o sa_builder_eip164.o \
	eip163.o eip164_rules.o eip164_device.o eip164_secy.o \
	log.o hwpal_device_umdevxs.o umdevxsproxy.o device_generic.o

# Driver user-space statically linkable library

	$(AR) -cvq libdf.a \
	log.o hwpal_device_umdevxs.o umdevxsproxy.o device_generic.o

clean:	clean_module

clean_module:
	# this is run in $PATH_BUILD where the Makefile resides
	find $(PATH_APP) \( -name "*.o" -o -name ".*.cmd" \) -type f -print | xargs rm -f
	find $(PATH_CFYE) \( -name "*.o" -o -name ".*.cmd" \) -type f -print | xargs rm -f
	find $(PATH_KIT) \( -name "*.o" -o -name ".*.cmd" \) -type f -print | xargs rm -f
	rm -rf .tmp_versions
	rm -f *.o  *.a .*.cmd  .*.flags  *.mod.c  *.ko  *.symvers  *.markers
	rm -f *.order  *.gcno  *.gcda  *.out

# end of file
