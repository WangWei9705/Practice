#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���

int Multiplication_table(int k)
{
	int i, j;
	for (i = 1; i <= k; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d  ", i, j, i*j);

		}
		printf("\n");
	
	}


}
int main()
{	
	int k;
	printf("�����������ӡ�ĳ˷��ھ���Ĳ�����");
	scanf("%d", &k);

	Multiplication_table( k);

	system("pause");
	return 0;
}
