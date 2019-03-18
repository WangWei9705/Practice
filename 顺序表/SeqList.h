#pragma once

/*
// ��̬˳���˳����С�ǹ̶��ģ������ڼ�����ģ�д���ڴ������
typedef struct SeqList {
	int array[100];	// ������ 100
	int size;		// ˳������Ч���ݸ���
					// ͬʱҲ��ʾ�Ӻ�����һ������λ�õ��±�
}	SeqList;

*/

typedef int SLDataType;

// ��̬˳����ڳ��������ڼ���Զ�̬���������Ĵ�С
typedef struct SeqList {
	SLDataType *array;		// ָ�� ���Ͽռ䣬�������
	int capacity;	// ����
	int size;		// ��Ч����
}	SeqList;

// �����б������б�

// ���� | ����
void SeqListInit(SeqList *pSeqList);

void SeqListDestroy(SeqList *pSeqList);

// �� ɾ �� ��
// β��
void SeqListPushBack(SeqList *pSeqList, SLDataType value);

// ͷ��
void SeqListPushFront(SeqList *pSeqList, SLDataType value);