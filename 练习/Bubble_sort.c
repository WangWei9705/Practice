//ð�������㷨
//˼·��ÿ�ν��������������бȽϣ���С�ĵ���ǰ��

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


int main()
{	
	int a[10];
	int i, j, k;
	printf("������ʮ�����֣�\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n");
	for (j = 0; j < 9;j++)  //ʮ�����ֽ��оŴ�ѭ�����ŴαȽ�
	for (i = 0; i < (9 - j); i++)   //ÿһ�˽��У�9-j���αȽ�
	if (a[i]>a[i + 1])    //�������������бȽ�
	{
		k = a[i]; a[i] = a[i + 1]; a[i + 1] = k;
	}
	printf("����������Ϊ��\n");
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");

	system("pause");
	return 0;
}

