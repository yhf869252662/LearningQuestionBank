#pragma once

#include "Common.h"

class CentralCache
{
public:
	static CentralCache* GetInstance()
	{
		return &_inst;
	}
	//��spanlist���ң�û�д�PageCache��һ��span
	Span* GetOneSpan(SpanList& spanlist, size_t byte_size);
	//��ThreadCacheһ���ڴ�
	size_t FetchRangeObj(void *& start, void *& end, size_t n, size_t byte_size);
	//��PageCacheһ��span
	void ReleaseListToSpans(void* start, size_t size);

private:
	SpanList _spanlist[NLISTS];
private:
	CentralCache()
	{}
	CentralCache(CentralCache&) = delete;
	static CentralCache _inst;
};
