#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//函数的嵌套调用（函数不可以嵌套定义）
//输入4个整数，找出其中最大的数。


//max2函数用于找出两个数中最大的
int max2(int a,int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
	
}


//max4函数通过多次调用max2函数找出4个数中最大的
int max4(int a, int b, int c, int d)
{
	max2(a, b);
	int m;
	m = max2(a, b);
	m = max2(m, c);
	m = max2(m, d);
	return m;
}





int main()
{	
	int a, b, c, d, max;

	printf("请输入4个整数：");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	max = max4(a, b, c, d);
	printf("最大的数是：%d\n", max);


	system("pause");
	return 0;
}
