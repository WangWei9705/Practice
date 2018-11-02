# -
day one
//打印100——200之间的素数（只能被1和它本身整除）
//所需知识：for循环,break跳出循环;整除（i%j)
//方法一：
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		//i与2到i-1之间所有数做除求余数
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
			//
			
	
		}

		if (j == i)
		{
			printf("%d \n", i);
		}

	}
	system("pause");
	return 0;
}
