#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	//������
	int f1 = 1, f2 = 1;
	int i;
	int n;
	printf("�����������ӡ��쳲��������еĸ�����");
	scanf("%d", &n);

	for (i = 1; i <= (n/2); i++)
	{
		printf("%12d%12d", f1, f2);
		if (i % 2 == 0)
			printf("\n");
		f1 = f1 + f2;
		f2 = f2 + f1;
	}

	system("pause");
	return 0;
}
