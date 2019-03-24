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
	//��ȡ�Ӷ���span��ӳ��
	Span* MapObjectToSpan(void* obj);
	//�ͷſ���span�ص�Pagecache���ϲ����ڵ�span
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