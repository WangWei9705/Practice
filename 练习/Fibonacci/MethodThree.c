#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	//�����������鷨
	//ÿһ������Ԫ�ش���쳲����������е�һ����

	int i = 0;
	int f[20] = { 1, 1 }; //��ʼ��ǰ����Ԫ��f[0]��f[1]
	printf("%12d%12d", f[0],f[1]);     //�Ƚ�ǰ����Ԫ�ش�ӡ����
	for (i = 2; i < 20; i++)

		f[i] = f[i - 2] + f[i - 1];
	
	for (i = 2; i < 20; i++)
	{
		if (i % 5 == 0) printf("\n");  //����ÿ������������
		printf("%12d", f[i]);
		
	}

	printf("\n");

	system("pause");
	return 0;
}
