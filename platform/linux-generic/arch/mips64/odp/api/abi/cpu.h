/* Copyright (c) 2016, Linaro Limited
 * All rights reserved.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 */

#ifndef ODP_API_ABI_CPU_H_
#define ODP_API_ABI_CPU_H_

#ifdef __cplusplus
extern "C" {
#endif

#if defined __OCTEON__
#define ODP_CACHE_LINE_SIZE 128
#else
#error Please add support for your arch in cpu_arch.h
#endif

static inline void odp_cpu_pause(void)
{
	__asm__ __volatile__ ("nop");
	__asm__ __volatile__ ("nop");
	__asm__ __volatile__ ("nop");
	__asm__ __volatile__ ("nop");
}

#ifdef __cplusplus
}
#endif

#endif
