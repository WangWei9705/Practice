#include "SeqList.h"
#include <string.h>
#include <assert.h>

void SeqListInit(SeqList *pSeqList) 
{
	// 期望传递进来的是一个变量的地址
	// 变量的地址肯定不是 NULL
	assert(pSeqList != NULL);

	// 开辟空间
	// 设置容量 和 size
	pSeqList->capacity = 10;
	pSeqList->array 
		= (int *)malloc(sizeof(SLDataType)* pSeqList->capacity);
	pSeqList->size = 0;
}


void SeqListDestroy(SeqList *pSeqList) 
{
	assert(pSeqList);
	assert(pSeqList->array);
	free(pSeqList->array);

	pSeqList->array = NULL;
	pSeqList->capacity = 0;
	pSeqList->size = 0;
}

// 扩容  新容量一般为旧容量的两倍  static 修改函数链接
static void CheckCapcity(SeqList *ps)
{
	if (ps->size < ps->capacity)
		return;

	else
	{
		int newCapcity = ps->capacity * 2;
		
	}
}



// 头插
void SeqListPushBack(SeqList *pSeqList, SLDataType value) 
{
	pSeqList->array[pSeqList->size] = value;
	pSeqList->size++;
}

// 尾插
void SeqListPushFront(SeqList *pSeqList, SLDataType value)
{
	// i 是空间的下标
	for (int i = pSeqList->size; i >= 1; i--) {
		pSeqList->array[i] = pSeqList->array[i - 1];
	}

	pSeqList->array[0] = value;
	pSeqList->size++;
}

// 任意位置插入
void SeqListInsert(SeqList *ps, int pos, SLDataType value)
{
	int i;
	for (i = ps->size - 1; i >= pos; i--){
		ps->array[i + 1] = ps->array[i];
	}
	ps->array[pos] = value;
	ps->size++;
}




// 尾删


// 头删

void SeqListPopFront(SeqList *ps)
{
	assert(ps ->size > 0);
	for (int i = 0; i <= ps->size - 2; i++)
	{
		ps->array[i] = ps->array[i + 1];
	}
	ps->size--;
}


// 根据下标删除

void SeqListErase(SeqList *ps,int pos)
{
	assert(ps->size > 0);
	for (int i = pos + 1; i < ps->size - 1; i++)
	{
		ps->array[i] = ps->array[i + 1];

	}
	ps->size--;
}

// 查找
int SeqListSearch(const SeqList *ps, SLDataType value)
{

	assert(ps->size > 0);
	for (int i = 0; i < ps->size; i++)

		if (ps->array[i] = value)

			return i;
	
}


// 修改 Pos 

void SeqListErase(SeqList* ps, int pos,SLDataType value)
{
	assert(ps->size > 0);

	ps->array[pos] = value;
	
}


// 删除遇到的第一个value /所有value（1、新建一个数组，将所有不是value的移到新数组中，2、原地赋值，3、暴力破解）

void SeqListRemove(SeqList* ps, SLDataType value)
{

}
