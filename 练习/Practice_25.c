#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//实现一个函数，判断一个数是不是素数。

//素数:只能被1和它本身整除

void Is_prim(int n)
{
	int i;
	for (i = 2; i < sqrt(n); i++)
	{
		if (n%i == 0)
		{
			printf("该数不是素数！\n");
		}
		else
		{
			printf("该数字是素数。\n");
		}
	}

}
int main()
{	
	int num;

	printf("请输入一个数字(大于1）：");
	scanf("%d", &num);

	Is_prim(num);

	system("pause");
	return 0;
}
