#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	//	��ά�����ʼ���ļ��ַ���

	// ����һ�������ʼ��
	// ��������
	int arr[3][4];
	int i = 0;
	int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		arr[i][j] = i * 4 + j + 1;
	//		printf("%d ", arr[i][j]);
	//	}
	//}
	//printf(" \n");


	// ��������
	int sz = sizeof(arr) / sizeof(arr[0][0]);
	int* p = &arr[0][0];
	for ( i = 0; i < sz; i++)
	{
		*(p + i) = i + 1;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
	system("pause");
	return 0;
}
