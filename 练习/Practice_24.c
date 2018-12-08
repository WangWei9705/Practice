#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。

int Multiplication_table(int k)
{
	int i, j;
	for (i = 1; i <= k; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d  ", i, j, i*j);

		}
		printf("\n");
	
	}


}
int main()
{	
	int k;
	printf("请输入你想打印的乘法口诀表的层数：");
	scanf("%d", &k);

	Multiplication_table( k);

	system("pause");
	return 0;
}
