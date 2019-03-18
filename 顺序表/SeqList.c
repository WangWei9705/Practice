#include "SeqList.h"
#include <string.h>
#include <assert.h>

void SeqListInit(SeqList *pSeqList) 
{
	// �������ݽ�������һ�������ĵ�ַ
	// �����ĵ�ַ�϶����� NULL
	assert(pSeqList != NULL);

	// ���ٿռ�
	// �������� �� size
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

// ����  ������һ��Ϊ������������  static �޸ĺ�������
static void CheckCapcity(SeqList *ps)
{
	if (ps->size < ps->capacity)
		return;

	else
	{
		int newCapcity = ps->capacity * 2;
		
	}
}



// ͷ��
void SeqListPushBack(SeqList *pSeqList, SLDataType value) 
{
	pSeqList->array[pSeqList->size] = value;
	pSeqList->size++;
}

// β��
void SeqListPushFront(SeqList *pSeqList, SLDataType value)
{
	// i �ǿռ���±�
	for (int i = pSeqList->size; i >= 1; i--) {
		pSeqList->array[i] = pSeqList->array[i - 1];
	}

	pSeqList->array[0] = value;
	pSeqList->size++;
}

// ����λ�ò���
void SeqListInsert(SeqList *ps, int pos, SLDataType value)
{
	int i;
	for (i = ps->size - 1; i >= pos; i--){
		ps->array[i + 1] = ps->array[i];
	}
	ps->array[pos] = value;
	ps->size++;
}




// βɾ


// ͷɾ

void SeqListPopFront(SeqList *ps)
{
	assert(ps ->size > 0);
	for (int i = 0; i <= ps->size - 2; i++)
	{
		ps->array[i] = ps->array[i + 1];
	}
	ps->size--;
}


// �����±�ɾ��

void SeqListErase(SeqList *ps,int pos)
{
	assert(ps->size > 0);
	for (int i = pos + 1; i < ps->size - 1; i++)
	{
		ps->array[i] = ps->array[i + 1];

	}
	ps->size--;
}

// ����
int SeqListSearch(const SeqList *ps, SLDataType value)
{

	assert(ps->size > 0);
	for (int i = 0; i < ps->size; i++)

		if (ps->array[i] = value)

			return i;
	
}


// �޸� Pos 

void SeqListErase(SeqList* ps, int pos,SLDataType value)
{
	assert(ps->size > 0);

	ps->array[pos] = value;
	
}


// ɾ�������ĵ�һ��value /����value��1���½�һ�����飬�����в���value���Ƶ��������У�2��ԭ�ظ�ֵ��3�������ƽ⣩

void SeqListRemove(SeqList* ps, SLDataType value)
{

}
