#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


// ������Ϊ��������

//����10������Ҫ�������������Ԫ�أ��Լ����±�

int Max(int x, int y)
{
	return (x > y ? x : y);
}

int main()
{	
	int num[10], m, n, i;
	printf("������ʮ�����֣�");

	for (i = 0; i < 10; i++)
	{
		scanf("%d ", &num[i]);
	}
	printf("\n");
	for (i = 1, m = num[0], n = 0; i < 10; i++)
	{
		if (Max(m, num[i])>m)
		{

			m = Max(m, num[i]);
			n = i;
		}
	}

	printf("����Ԫ���ǣ�%d���±�Ϊ��%d \n", m, n );

	system("pause");
	return 0;
}
