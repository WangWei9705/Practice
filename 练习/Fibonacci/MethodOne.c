//��ӡ쳲���������
//��n<3ʱ��f1=1��f2=1;��n>=3ʱ��fn=f(n-2)+f(n-1);
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>



int main()
{

	//����һ��
	 int n = 1;

	printf("�����������ӡ��쳲��������еĸ�����");
    scanf("%d", &n);

	int f1 = 1;
	int f2 = 1;
	int i;
	int f3;
	printf("%12d\n%12d\n", f1, f2);
	for (i = 1; i <= n-2; i++)
	{
		f3 = f1 + f2;
		printf("%12d\n", f3);
		f1 = f2;
		f2 = f3;
	}

	system("pause");
	return 0;
}


