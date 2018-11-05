// 求10的阶乘
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	//定义两个变量，i代表乘数，p代表被乘数
	int i = 1;
	int p = 1;
	 //i从1循环到10
	for (i = 1; i <= 10; i++)

	{
		//将每次的乘积放入被乘数中
		p = p * i;
		
	}
	printf("%d", p);

	system("pause");
	return 0;
}
