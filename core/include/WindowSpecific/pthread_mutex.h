#ifndef __PTHREAD_MUTEX_H__
#define __PTHREAD_MUTEX_H__

#include <Windows.h>

#ifdef __cplusplus
extern "C"{
#endif
  typedef CRITICAL_SECTION pthread_mutex_t;

  int pthread_mutex_lock(pthread_mutex_t *m);

  int pthread_mutex_unlock(pthread_mutex_t *m);
	
  int pthread_mutex_trylock(pthread_mutex_t *m);

typedef int pthread_mutexattr_t;

  int pthread_mutex_init(pthread_mutex_t *m, pthread_mutexattr_t *a);

  int pthread_mutex_destroy(pthread_mutex_t *m);

#define PTHREAD_MUTEX_INITIALIZER {(PRTL_CRITICAL_SECTION_DEBUG)-1,-1,0,0,0,0}

struct timespec
{
	/* long long in windows is the same as long in unix for 64bit */
	long long tv_sec;
	long long tv_nsec;
};

  unsigned long long _pthread_time_in_ms(void);

  unsigned long long _pthread_time_in_ms_from_timespec(const struct timespec *ts);

  unsigned long long _pthread_rel_time_in_ms(const struct timespec *ts);

  int pthread_mutex_timedlock(pthread_mutex_t *m, struct timespec *ts);

#define ETIMEDOUT	110
#define PTHREAD_MUTEX_NORMAL 0
#define PTHREAD_MUTEX_ERRORCHECK 1
#define PTHREAD_MUTEX_RECURSIVE 2
#define PTHREAD_MUTEX_DEFAULT 3
#define PTHREAD_MUTEX_SHARED 4
#define PTHREAD_MUTEX_PRIVATE 0
#define PTHREAD_PRIO_MULT 32

#define ENOTSUP		134

#define pthread_mutex_getprioceiling(M, P) ENOTSUP
#define pthread_mutex_setprioceiling(M, P) ENOTSUP

  int pthread_mutexattr_init(pthread_mutexattr_t *a);

  int pthread_mutexattr_destroy(pthread_mutexattr_t *a);

  int pthread_mutexattr_gettype(pthread_mutexattr_t *a, int *type);

  int pthread_mutexattr_settype(pthread_mutexattr_t *a, int type);

  int pthread_mutexattr_getpshared(pthread_mutexattr_t *a, int *type);

  int pthread_mutexattr_setpshared(pthread_mutexattr_t * a, int type);

  int pthread_mutexattr_getprotocol(pthread_mutexattr_t *a, int *type);

  int pthread_mutexattr_setprotocol(pthread_mutexattr_t *a, int type);

  int pthread_mutexattr_getprioceiling(pthread_mutexattr_t *a, int * prio);

  int pthread_mutexattr_setprioceiling(pthread_mutexattr_t *a, int prio);

#ifdef __cplusplus
} //  Assume C declarations for C++
#endif
#endif
