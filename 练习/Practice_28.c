#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// ʹ�ú���ʵ���������Ľ�����

//ʵ�������������ĺ���
void Swap(int* x, int* y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}
//������
int main()
{	
	int a, b;

	printf("����������������");
	scanf("%d %d", &a, &b);

	Swap(&a, &b);
	printf("������:a=%d,b=%d\n", a, b);

	system("pause");
	return 0;
}
