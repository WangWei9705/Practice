#pragma once

/*
// 静态顺序表（顺序表大小是固定的（编译期间决定的（写死在代码里的
typedef struct SeqList {
	int array[100];	// 容量是 100
	int size;		// 顺序里有效数据个数
					// 同时也表示从后数下一个可用位置的下标
}	SeqList;

*/

typedef int SLDataType;

// 动态顺序表（在程序运行期间可以动态控制容量的大小
typedef struct SeqList {
	SLDataType *array;		// 指向 堆上空间，存放数据
	int capacity;	// 容量
	int size;		// 有效个数
}	SeqList;

// 服务列表，函数列表

// 创建 | 销毁
void SeqListInit(SeqList *pSeqList);

void SeqListDestroy(SeqList *pSeqList);

// 增 删 查 改
// 尾插
void SeqListPushBack(SeqList *pSeqList, SLDataType value);

// 头插
void SeqListPushFront(SeqList *pSeqList, SLDataType value);