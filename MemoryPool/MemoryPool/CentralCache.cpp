#include "CentralCache.h"
#include "PageCache.h"

CentralCache CentralCache::_inst;

Span* CentralCache::GetOneSpan(SpanList& spanlist, size_t byte_size)
{
	Span *span = spanlist.Begin();
	while (span != spanlist.End())
	{
		if (span->_list != nullptr)
			return span;
		else
			span = span->_next;
	}

	//����Ӧ�þ�������
	Span *newspan = PageCache::GetInstance()->NewSpan(3);
	newspan->_objsize = byte_size;
	char *cur = (char*)((newspan->_pageid) << PAGE_SHIFT);
	char *end = cur + newspan->_npage;
	newspan->_list = cur;
	while (cur + byte_size < end)
	{
		char *next = cur + byte_size;
		NextObj(cur) = next;
		cur = next;
	}
	NextObj(cur) = nullptr;

	spanlist.PushFront(newspan);

	return newspan;
}

size_t CentralCache::FetchRangeObj(void *& start, void *& end, size_t n, size_t byte_size)
{
	//����

	size_t index = SizeClass::Index(byte_size);
	SpanList &spanlist = _spanlist[index];
	Span *span = GetOneSpan(spanlist, byte_size);

	size_t batchsize = 0;
	void *cur = span->_list;
	void *prev = nullptr;

	for (size_t i = 0; i < n; ++i)
	{
		prev = cur;
		cur = NextObj(cur);
		++batchsize;
		if (cur == nullptr)
			break;
	}

	start = span->_list;
	end = prev;
	span->_list = cur;
	span->_usecount += batchsize;

	if (span->_list == nullptr)
	{
		spanlist.Erase(span);
		spanlist.PushBack(span);
	}

	return batchsize;
}

void CentralCache::ReleaseListToSpans(void* start, size_t size)
{

}