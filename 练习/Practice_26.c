#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//ʵ��һ�������ж�year�ǲ������ꡣ 
//�ܱ�4���������ܱ�100�����������ܱ�400����

//�ж����꺯��
void leap_year(int n)
{
	if ((n % 100 != 0 && n % 4 == 0) || (n % 400 == 0))
	{
		printf("�����꣡");
	}
	else
	{
		printf("�������꣡");
	}
	
}

//������

int main()
{	
	int year ;

	printf("��������ݣ�");
	scanf("%d", &year);

	leap_year(year);
	printf("\n");

	system("pause");
	return 0;
}
