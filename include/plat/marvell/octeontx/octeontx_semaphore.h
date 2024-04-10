/*
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */
#ifndef __OCTEONTX_SEMAPHORE_H__
#define __OCTEONTX_SEMAPHORE_H__
#include <spinlock.h>
#include <drivers/delay_timer.h>

typedef spinlock_t octeontx_ctr_sem_t;

/**
 * Initializes a counter semaphore
 *
 * @param[out]	lock	semaphore to initialize
 */
static inline void octeontx_ctr_sem_init(octeontx_ctr_sem_t *lock)
{
	__atomic_clear(&lock->lock, __ATOMIC_SEQ_CST);
}

/**
 * Tries to obtain a lock
 *
 * @param[in,out]	lock	Lock to acquire
 *
 * @return	0 if lock obtained
 *		non-zero The number of contexts attempting to acquire the lock
 *
 * NOTE: For every call to this function, octeontx_mutex_unlock must be
 *	 called, EVEN IF THE LOCK fails to be acquired.
 */
static inline uint32_t octeontx_ctr_sem_try_lock(octeontx_ctr_sem_t *lock)
{
	return __atomic_fetch_add(&lock->lock, 1, __ATOMIC_SEQ_CST);
}

/**
 * Releases a mutex lock after a try lock
 *
 * @param[in,out]	lock	Mutex lock to unlock
 *
 * @return	Number of locks before unlock, error if zero!
 *
 * NOTE: This must be called once for every call to octeon_mutex_try_lock(),
 * EVEN IF THE TRY LOCK fails.
 */
static inline uint32_t octeontx_ctr_sem_unlock(octeontx_ctr_sem_t *lock)
{
	return __atomic_fetch_sub(&lock->lock, 1, __ATOMIC_SEQ_CST);
}

/**
 * Tries to obtain a lock with a timeout
 *
 * @param[in,out]	lock	Lock to acquire
 * @param[in]		timeout	Timeout in ms
 *
 * @return	0 if lock obtained
 *		non-zero The number of contexts attempting to acquire the lock
 *
 * NOTE: For every call to this function, octeontx_mutex_unlock MUST NOT BE CALLED IF
 * the lock fails to be acquired.
 */
static inline uint32_t octeontx_ctr_sem_try_lock_timeout(octeontx_ctr_sem_t *lock, int timeout)
{
	do {
		if (octeontx_ctr_sem_try_lock(lock) == 0)
			return 0;
		octeontx_ctr_sem_unlock(lock);
		mdelay(1);
	} while (timeout-- > 0);
	return 1;
}

#endif /* __OCTEONTX_SEMAPHORE_H__ */
