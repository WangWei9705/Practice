#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//�ú����ݹ������n!
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
	printf("���������󼸵Ľ׳ˣ�");
	scanf("%d", &n);

	factorial(n);
	printf("%d!=%d\n",n, factorial(n));

	system("pause");
	return 0;
}
