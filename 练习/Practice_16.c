// Çó1!+...+10!
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int i = 1;
	int j = 1;
	int sum = 0;

	for (i = 1; i <= 10; i++)
	{
		j = i*j;
		sum = sum + j;
	}

	printf("%d \n",sum);
	system("pause");
	return 0;
}
