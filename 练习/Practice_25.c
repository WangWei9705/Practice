#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//ʵ��һ���������ж�һ�����ǲ���������

//����:ֻ�ܱ�1������������

void Is_prim(int n)
{
	int i;
	for (i = 2; i < sqrt(n); i++)
	{
		if (n%i == 0)
		{
			printf("��������������\n");
		}
		else
		{
			printf("��������������\n");
		}
	}

}
int main()
{	
	int num;

	printf("������һ������(����1����");
	scanf("%d", &num);

	Is_prim(num);

	system("pause");
	return 0;
}
