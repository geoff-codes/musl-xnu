#include <sys/random.h>
#include "syscall.h"

#ifndef __APPLE__ // Apple's <sys/random.h> only defines getentropy, so ...?

ssize_t getrandom(void *buf, size_t buflen, unsigned flags)
{
	return syscall_cp(SYS_getrandom, buf, buflen, flags);
}

#endif // __APPLE__
