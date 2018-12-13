#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


// 数组作为函数参数

//输入10个数，要求输出其中最大的元素，以及其下标

int Max(int x, int y)
{
	return (x > y ? x : y);
}

int main()
{	
	int num[10], m, n, i;
	printf("请输入十个数字：");

	for (i = 0; i < 10; i++)
	{
		scanf("%d ", &num[i]);
	}
	printf("\n");
	for (i = 1, m = num[0], n = 0; i < 10; i++)
	{
		if (Max(m, num[i])>m)
		{

			m = Max(m, num[i]);
			n = i;
		}
	}

	printf("最大的元素是：%d，下标为：%d \n", m, n );

	system("pause");
	return 0;
}
