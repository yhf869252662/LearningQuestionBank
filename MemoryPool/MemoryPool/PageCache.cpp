#include "PageCache.h"

PageCache PageCache::_inst;

Span* PageCache::NewSpan(size_t n)
{
	assert(n < NPAGES);

	if (!_spanlist[n].Empty())
		return _spanlist[n].PopFront();

	for (int i = n + 1; i < NPAGES; ++i)
	{
		if (!_spanlist[i].Empty())
		{
			Span* span = _spanlist[i].PopFront();
			Span* split = new Span;
			split->_pageid = span->_pageid;
			span->_pageid += n;
			split->_npage = n;
			span->_npage -= n;

			for (size_t i = 0; i < n; ++i)
			{
				_idspanmap[split->_pageid + i] = split;
			}
			_spanlist[span->_npage].PushFront(span);
			return split;
		}
	}

	Span* span = new Span;
	void *ptr = VirtualAlloc(0, (NPAGES - 1)*(1 << PAGE_SHIFT),
		MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
	span->_pageid = (PageID)ptr >> PAGE_SHIFT;//如何用申请到的地址对应pageID
	span->_npage = NPAGES - 1;
	for (int i = 0; i < NPAGES; ++i)
	{
		_idspanmap[span->_pageid + i] = span;
	}
	_spanlist[span->_npage].PushFront(span);
	return NewSpan(n);
}
