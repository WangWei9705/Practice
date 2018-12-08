#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// 使用函数实现两个数的交换。

//实现俩个数交换的函数
void Swap(int* x, int* y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}
//主函数
int main()
{	
	int a, b;

	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);

	Swap(&a, &b);
	printf("交换后:a=%d,b=%d\n", a, b);

	system("pause");
	return 0;
}
