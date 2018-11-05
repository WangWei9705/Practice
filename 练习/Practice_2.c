//求1-1/2+1/3...+1/99-1/100.
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	//定义变量

	int sign = 1;
	double sum = 1;
	double demo = 2;
	double term;


	for (demo = 2; demo <= 100; demo++)
	{
		sign = (-1)*sign;
		term = sign*(1 / demo);
		sum = sum + term;
	}
	printf("sum = %f \n", sum);

	system("pause");
	return 0;
}
