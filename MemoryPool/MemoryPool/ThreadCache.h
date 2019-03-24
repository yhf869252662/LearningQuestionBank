#pragma once

#include "Common.h"

class ThreadCache
{
public:
	void* Allocate(size_t size);
	void Deallocate(void *ptr, size_t size);

	//�߳�˽�е�freelistû�У���CentralCacheҪ
	void* FetchFromCentralCache(size_t index, size_t size);
	//�߳�˽�е�̫����Ҫ����CentralCache
	void ListToLong(FreeList* freelist, size_t size);

private:
	FreeList _freelist[NLISTS];
};

_declspec (thread) static ThreadCache* tlist = nullptr;