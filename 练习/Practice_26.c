#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//实现一个函数判断year是不是润年。 
//能被4整除但不能被100整除，或者能被400整除

//判断闰年函数
void leap_year(int n)
{
	if ((n % 100 != 0 && n % 4 == 0) || (n % 400 == 0))
	{
		printf("是闰年！");
	}
	else
	{
		printf("不是闰年！");
	}
	
}

//主函数

int main()
{	
	int year ;

	printf("请输入年份：");
	scanf("%d", &year);

	leap_year(year);
	printf("\n");

	system("pause");
	return 0;
}
