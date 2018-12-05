#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//用函数递归调用求n!
int factorial(int n)
{
	int m=1, i;
	for (i = 1; i <= n; i++)
	{
		m = m*i;
	}
	return m;
}
int main()
{	
	int n;
	printf("请问你想求几的阶乘：");
	scanf("%d", &n);

	factorial(n);
	printf("%d!=%d\n",n, factorial(n));

	system("pause");
	return 0;
}
