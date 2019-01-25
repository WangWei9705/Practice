#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
// 提示：函数中尽可能简洁，能不输出尽量不输出
// 1、使用函数打印乘法口诀表，层数自己输入
// 2、使用函数实现两个数的交换
// 3、使用函数判断输入一个年份是否为闰年
void print_table(int num)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i*j);
		}
		printf("\n");
		
	}
	
}
void Swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int Is_leap_year(int year)
{
	if (year % 4 == 0 && year % 100 != 0)
	{
		return 1;
	}
	else if (year % 400 == 0)
	{
		return 2;
	}
	else
		return 0;
}


void test()
{

	/*int year;
	int ret = 0;
	printf("请输入你要判断的年份：");
	scanf("%d", &year);
	ret = Is_leap_year(year);
	if (ret == 1)
	{
		printf("这是一个普通闰年!\n");
	}
	else if (ret == 2)
	{
		printf("这是一个世纪闰年！\n");
	}
	else if (ret == 0)
	{
		printf("这不是一个闰年！\n");
	}*/


	// int a;
	// int b;
	// printf("请输入你要交换的两个数字：");
	// scanf("%d %d", &a, &b);
	// Swap(&a, &b);
	// printf("交换后的数字分别是a=%d,b=%d\n", a, b);
	//int line = 0;
	//printf("请输入所要打印的乘法口诀表的层数：");
	//scanf("%d", &line);
	//print_table(line);
}
int main()
{	
	test();
	system("pause");
	return 0;
}
