#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


// 函数相关
// 类型名 函数名（形参）
// {
// 
//	 函数体
// }


// 1、用函数调用打印菱形

void printf_diamond(int line )            //此处line为形参
{
	int i, j;

	//上半部分
	for (i = 1; i < line; i++)
	{
		for (j = 1; j <= line - i; j++)
		{

			printf(" ");     //打印空格
		}
		for (j = 1; j <=( 2*i - 1); j++)
		{
			printf("*");    //打印*
		}
		printf("\n");
	}

	//下半部分
	for (i = 1; i < line ; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 1; j < 2 * (line-i); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}


int main()
{	
	int  line;
	printf("请输入你想打印的菱形的行号：");
	scanf("%d", &line);

	printf_diamond(line);           //调用函数，此处line为实参

	system("pause");
	return 0;
}
