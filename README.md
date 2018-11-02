# -
day one
//乘法口诀表：两层for循环即可搞定
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j;
	for (i = 1; i <= 9; i++)       //控制行
	{
		for (j = 1; j <= i; j++)   //控制列
		{
			printf("%d*%d=%d \t", i, j, i*j);
		}
		printf(" \n");
	}
	system("pause");
	return 0;
}

