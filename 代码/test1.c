#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define ROW 100
#define COL 100

// ��ά�ַ����������ϰ���Ӽ��̽����ַ�����ֱ��������У���ӡ��������
int main()
{	
	char arr[ROW][COL];
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		gets(arr[i]);           // arr[i] ==&arr[i][0]
		if (arr[i][0] == '\0')
			break;
	}
	for (i = 0; arr[i][0]; i++)                       // �˴�forѭ���еڶ������ʽ�൱��һ��if...else���
	{
		puts(arr[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}
