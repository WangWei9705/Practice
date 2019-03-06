#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// 动态内存相关
int main()
{	

	// 内存扩容使用realloc,函数原型：void* relloc(void* ptr,size_t size);——>ptr是要调整的内存地址，size为调整之后的新size

	int* p1 = malloc(1024);
	if (p != NULL)
	{
		// 使用内存
	}
	else
	{
		exit(EXIT_FAILURE);
	}
	
	// 假设内存不足，此时需要扩容
	int* p2 = NULL;
	p2 = realloc(p1, 1024);

	if (p2 != NULL)
	{
		p1 = p2;
	}
	// 内存使用
	free(p1);


	//// 另外一个动态内存开辟函数，calloc,函数原型： void* calloc(size_t,size_t size)

	//int* p = calloc(10, sizeof(int));
	//if (p != NULL)
	//{
	//	// 使用空间
	//	
	//}

	//free(p);    // 用完之后一定要记得释放！！！
	//p = NULL;




	//// 内存开辟 使用malloc函数，函数原型：void* malloc(size_t size);
	//int num = 0;
	//scanf("%d", &num);
	//
	//int* p = NULL;
	//p = (int*)malloc(num*sizeof(int));
	//if (p != NULL)			// 判断指针p是否为空
	//{
	//	int i = 0;
	//	for (i = 0; i < num; i++)
	//	{
	//		*(p + i) = 0;	// 将每个开辟的空间初始化为0
	//	}
	//}

	//// 开辟完成后一定要记得释放，否则会导致内存泄漏，这对于服务器程序来说很严重
	//// 内存释放函数：free 函数原型： void free(void*ptr);
	//free(p);
	//p = NULL;


	system("pause");
	return 0;
}
