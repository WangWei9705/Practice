#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	//	二维数组初始化的几种方法

	// 方法一：逐个初始化
	// 方法二：
	int arr[3][4];
	int i = 0;
	int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		arr[i][j] = i * 4 + j + 1;
	//		printf("%d ", arr[i][j]);
	//	}
	//}
	//printf(" \n");


	// 方法三：
	int sz = sizeof(arr) / sizeof(arr[0][0]);
	int* p = &arr[0][0];
	for ( i = 0; i < sz; i++)
	{
		*(p + i) = i + 1;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
	system("pause");
	return 0;
}
