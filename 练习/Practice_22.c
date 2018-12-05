#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//函数的递归调用——直接或者间接的调用函数本身

//例如：
//int f(int x)
//{
//	int y, z;
//	z = f(y);
//	return (2 * z);
//}

//有五个学生坐在一起，第五个比第四个大两岁，第四个比第三个大两岁，第三个比第二个大两岁，第二个比第一个大两岁，第一个十岁；求任意学生的年龄？

//使用函数递归调用实现目的
int age(int n)
{
	int years_old;
	if (n == 1)
	{
		years_old = 10;
	}
	else
	{
		years_old = age(n - 1) + 2;     //调用age函数本身，实现函数递归调用
	}
	return years_old;

}

int main()
{	
	int n=0;
	printf("请问你想知道第几个学生的年龄：");
	scanf("%d",&n);
	age(n);
	printf("该学生的年龄为：%d岁。",age(n) );

	system("pause");
	return 0;
}
