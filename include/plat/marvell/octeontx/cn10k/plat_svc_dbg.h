/*
 * Copyright (C) 2022 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from this
 * software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef __PLAT_SVC_DBG_H__
#define __PLAT_SVC_DBG_H__

#if DBG_ALLOW_SEC_REGN_AC_SMC
 /*
  * Debug Specific SMC, used for Accessing Regions for NS world
  * x1 - data to read/write
  * x2 - Addr
  * x3 - READ/WRITE Flag
  * x4 - size of data (64/32 bit)
  *
  * Return:
  *       x0 - Status field:
  *           0 - Success
  *           other values are error codes
  *       x1 - data read
  */
#define DBG_PLAT_OCTEONTX_ACCESS_REG        0xc2000fff

/* Number of Debug specific SMCs */
#define DBG_OTX3_NUM_SMC_CALLS 1

int octeontx_access_mapping(uint64_t address, uint64_t *val,
		uint64_t write, uint64_t bits_32);
#endif /* DBG_ALLOW_SEC_REGN_AC_SMC */

#ifndef DBG_OTX3_NUM_SMC_CALLS
#define DBG_OTX3_NUM_SMC_CALLS 0
#endif

#endif /* __PLAT_SVC_DBG_H__ */
