#define _GNU_SOURCE 1
#include <sys/mman.h>
#include "syscall.h"
#ifndef __APPLE__ // Don't know of any Apple equivalant ...?

int memfd_create(const char *name, unsigned flags)
{
	return syscall(SYS_memfd_create, name, flags);
}

#endif // __APPLE__
