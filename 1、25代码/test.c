#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
// ��ʾ�������о����ܼ�࣬�ܲ�������������
// 1��ʹ�ú�����ӡ�˷��ھ��������Լ�����
// 2��ʹ�ú���ʵ���������Ľ���
// 3��ʹ�ú����ж�����һ������Ƿ�Ϊ����
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
	printf("��������Ҫ�жϵ���ݣ�");
	scanf("%d", &year);
	ret = Is_leap_year(year);
	if (ret == 1)
	{
		printf("����һ����ͨ����!\n");
	}
	else if (ret == 2)
	{
		printf("����һ���������꣡\n");
	}
	else if (ret == 0)
	{
		printf("�ⲻ��һ�����꣡\n");
	}*/


	// int a;
	// int b;
	// printf("��������Ҫ�������������֣�");
	// scanf("%d %d", &a, &b);
	// Swap(&a, &b);
	// printf("����������ֱַ���a=%d,b=%d\n", a, b);
	//int line = 0;
	//printf("��������Ҫ��ӡ�ĳ˷��ھ���Ĳ�����");
	//scanf("%d", &line);
	//print_table(line);
}
int main()
{	
	test();
	system("pause");
	return 0;
}
