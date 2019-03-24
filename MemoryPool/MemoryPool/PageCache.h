#pragma once

#include "Common.h"

class PageCache
{
public:
	static PageCache* GetInstance()
	{
		return &_inst;
	}
	Span* NewSpan(size_t n);
	//获取从对象到span的映射
	Span* MapObjectToSpan(void* obj);
	//释放空闲span回到Pagecache并合并相邻的span
	void ReleaseSpanToPageCahce(Span* span);	
private:
	map<PageID, Span*> _idspanmap;
	SpanList _spanlist[NPAGES];
private:
	static PageCache _inst;
	PageCache()
	{}
	PageCache(const PageCache&) = delete;
};