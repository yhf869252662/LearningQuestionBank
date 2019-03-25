#pragma once

#include <iostream>

using std::cout;
using std::endl;

#include <thread>
#include <time.h>
#include <vector>
#include <map>
#include <assert.h>
#include <Windows.h>
#include <algorithm>
#include <mutex>
using std::map;
using std::vector;

const int MAX_SIZE = 64 * 1024;
const int NLISTS = 184;
const int NPAGES = 129;
const int PAGE_SHIFT = 12;

//�ҵ���һ���ַ
inline static void*& NextObj(void* obj)
{
	return *((void**)obj);
}

class FreeList
{
public:
	void Push(void *obj)
	{
		*(void**)obj = _list;
		_list = obj;
		++_size;
	}
	void PushRange(void *start, void *end, size_t n)
	{
		NextObj(end) = _list;
		_list = start;
		_size += n;
	}
	void* Pop()
	{
		void *list = _list;
		_list = NextObj(_list);
		--_size;
		return list;
	}
	void *PopRange()
	{
		void *list = _list;
		_list = nullptr;
		_size = 0;
		return list;
	}
	bool Empty()
	{
		return _list == nullptr;
	}
	size_t Size()
	{
		return _size;
	}
	size_t MaxSize()
	{
		return _maxsize;
	}
	void SetMaxSize(size_t n)
	{
		_maxsize = n;
	}

private:
	void *_list = nullptr;
	size_t _size = 0;
	size_t _maxsize = 1;
};

class SizeClass
{
private:
	inline static size_t _Index(size_t size, size_t align)
	{
		return ((size + (1 << align) - 1) >> align) - 1;
	}
	inline static size_t _RoundeUp(size_t size, size_t align)
	{
		return (size + (1 << align) - 1) & ~((1 << align) - 1);
	}
public:
	// ������12%���ҵ�����Ƭ�˷�
	// [1,128]				8byte���� freelist[0,16)
	// [129,1024]			16byte���� freelist[16,72)
	// [1025,8*1024]		128byte���� freelist[72,128)
	// [8*1024+1,64*1024]	1024byte���� freelist[128,184)
	inline static size_t Index(size_t size)
	{
		assert(size <= MAX_SIZE);

		static int group_array[] = { 16, 56, 56 };

		if (size <= 128)
			return _Index(size, 3);
		else if (size <= 1024)
			return _Index(size - 128, 4) + group_array[0];
		else if (size <= 8192)
			return _Index(size - 1024, 7) + group_array[0] + group_array[1];
		else//if (size <= 65536)
			return _Index(size - 8192, 10) + group_array[0] + group_array[1] + group_array[2];
	}
	inline static size_t RoundeUp(size_t bytes)
	{
		assert(bytes <= MAX_SIZE);

		if (bytes <= 128)
			return _RoundeUp(bytes, 3);
		else if (bytes <= 1024)
			return _RoundeUp(bytes, 4);
		else if (bytes <= 8192)
			return _RoundeUp(bytes, 7);
		else// if (size <= 65536)
			return _RoundeUp(bytes, 10);
	}
	//����һ����ϵͳ��ȡ���ٿ��ڴ棬��ȡ���ڴ��Խ����ĿӦ��ԽС
	static size_t NumMoveSize(size_t size)
	{
		assert(size <= MAX_SIZE);

		if (size == 0)
			return 0;

		//sizeԽ��,numԽС
		int num = (int)(MAX_SIZE / size);
		if (num < 2)
			size = 2;
		if (num > 512)
			size = 512;
		return num;
	}
	
	//����һ����ϵͳ��ȡ����ҳ��sizeԽ���ȡ��ҳ��Ӧ��ԽС
	static size_t NumMovePage(size_t size)
	{
		assert(size <= MAX_SIZE);

		int num = NumMoveSize(size);
		int pages = num * size;
		//size��󲻳���MAX_SIZE,���size������num���С���˻����ᳬ��PAGE_SHIFT��λ����
		//�����ƺ�Ϊ0˵���ڴ�ܴ󣬷���һҳ����
		pages >>= PAGE_SHIFT;
		if (pages == 0)
			return 1;
		return pages;
	}
};

#ifdef _WIN32
typedef size_t PageID;
#else
typedef longlong PageID;
#endif

class Span
{
public:
	PageID _pageid;
	size_t _npage;

	Span *_prev;
	Span *_next;
	void *_list;
	size_t _objsize; //����Ĵ�С
	size_t _usecount; //����ʹ�ü���
};

class SpanList
{
public:
	SpanList()
	{
		_head = new Span;
		_head->_prev = _head;
		_head->_next = _head;
	}
	~SpanList()
	{
		Span *cur = _head->_next;
		while (cur != _head)
		{
			Span *next = cur->_next;
			delete cur;
			cur = next;
		}
		delete _head;
		_head = nullptr;
	}
	Span *Begin()
	{
		return _head->_next;
	}
	Span *End()
	{
		return _head;
	}
	void PushBack(Span *newspan)
	{
		Insert(End(), newspan);
	}
	void PushFront(Span *newspan)
	{
		Insert(Begin(), newspan);
	}
	Span *PopBack()
	{
		Span *cur = _head->_prev;
		Erase(cur);
		return cur;
	}
	Span *PopFront()
	{
		Span *cur = _head->_next;
		Erase(cur);
		return cur;
	}
	bool Empty()
	{
		return _head->_next == _head;
	}
	//��curǰ����һ��
	void Insert(Span* cur, Span* newspan)
	{
		Span *prev = cur->_prev;
		prev->_next = newspan;
		newspan->_prev = prev;
		newspan->_next = cur;
		cur->_prev = newspan;
	}
	void Erase(Span *cur)
	{
		cur->_prev->_next = cur->_next;
		cur->_next->_prev = cur->_prev;
	}
	void Lock()
	{
		mtx.lock();
	}
	void Unlock()
	{
		mtx.unlock();
	}
	SpanList(const SpanList&) = delete;
	SpanList& operator=(const SpanList&) = delete;

private:
	Span * _head;
	std::mutex mtx;
};
