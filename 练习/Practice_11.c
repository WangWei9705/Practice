#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//�������
int main()
{	
	//ʮ��Ԫ���������(һά�����ʹ�ã�
	///*int i, a[10];
	//for (i = 0; i < 10; i++)
	//{
	//	a[i] = i;
	//}
	//for (i = 9; i >= 0; i--)
	//{
	//	printf("%d ", a[i]);
	//}
	//
	//printf("\n");*/

	//��ά�������л���
	int a[3][4] = { { 1, 2, 3 }, { 4, 5, 6, 7 } };
	int b[4][3];
	int i, j;
	
	printf("array a:\n");    //��ӡ����a������
	for (i = 0; i <= 2 ; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			printf("%d ", a[i][j]);
			b[j][i] = a[i][j];
		}
		printf("\n");
	}

	printf("array b:\n");   //��ӡ����b������
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
