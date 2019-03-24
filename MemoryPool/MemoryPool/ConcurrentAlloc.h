#pragma once

#include "ThreadCache.h"

void* ConcurrentAlloc(size_t size)
{
	if (size > MAX_SIZE)
		return malloc(size);

	if (tlist == nullptr)
	{
		tlist = new ThreadCache;
	}
	return tlist->Allocate(size);
}

void ConcurrentFree(void *ptr, size_t size)
{
	if (size > MAX_SIZE)
	{
		free(ptr);
		return;
	}

	tlist->Deallocate(ptr, size);
}
