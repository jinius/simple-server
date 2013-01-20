/**
 * @file	Platform.h
 * @brief	Wrapping code for platform independent
 *
 *	(c) Copyright JinWoo Lee 2013
 */

#ifndef PLATFORM_H
#define PLATFORM_H

#ifdef __GNUC__
#define INC64(x)	__sync_fetch_and_add((x), 1)
#define DEC64(x)	__sync_fetch_and_sub((x), 1)
#define CAS64		__sync_val_compare_and_swap
#endif

#if (_POSIX_TIMERS > 0)
#include <time.h>
inline long realTime()
{
	struct timespec tspec;
	clock_gettime( CLOCK_REALTIME, &tspec );
	return ( tspec.tv_sec * 1000000000 + tspec.tv_nsec );
}
inline long monoTime()
{
	struct timespec tspec;
	clock_gettime( CLOCK_MONOTONIC, &tspec );
	return ( tspec.tv_sec * 1000000000 + tspec.tv_nsec );
}
#elif defined(__MACH__)
#include <mach/mach_time.h>
#define realTime	mach_absolute_time
#define monoTime	mach_absolute_time
#endif

#endif // PLATFORM_H

