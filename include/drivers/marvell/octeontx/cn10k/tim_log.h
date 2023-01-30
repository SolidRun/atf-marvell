/*
 * Copyright (c) 2023 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __TIM_LOG_H__
#define __TIM_LOG_H__

typedef struct{
	char *update_log;	/* Pointer to update log buffer */
	size_t log_bytes_used;	/* Number of bytes used in buffer */
	size_t log_size_bytes;	/* Size of update log buffer */
} log_info_t;

extern log_info_t log_info;

/**
 * Log update information to update buffer if present
 */
#define ULOG(...)	\
	do {								\
		size_t __size;						\
		size_t __free_size = log_info.log_size_bytes - log_info.log_bytes_used;	\
		char *__lptr = log_info.update_log + log_info.log_bytes_used;		\
		if (log_info.update_log != NULL && __free_size > 0) {		\
			__size = snprintf(__lptr, __free_size,		\
					  __VA_ARGS__);			\
			log_info.log_bytes_used += __size;			\
		}							\
	} while (0)

/**
 * INFO that also updates update log
 */
#define UINFO(...)				\
	do {					\
		INFO(__VA_ARGS__);		\
		ULOG(__VA_ARGS__);		\
	} while (0)

/**
 * WARN that also updates update log
 */
#define UWARN(...)				\
	do {					\
		WARN(__VA_ARGS__);		\
		ULOG("WARNING: " __VA_ARGS__);	\
	} while (0)

/**
 * ERROR that also updates update log
 */
#define UERROR(...)				\
	do {					\
		ERROR(__VA_ARGS__);		\
		ULOG("ERROR: " __VA_ARGS__);	\
	} while (0)



#endif	/* __TIM_LOG_H__ */
