#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


// �������
// ������ ���������βΣ�
// {
// 
//	 ������
// }


// 1���ú������ô�ӡ����

void printf_diamond(int line )            //�˴�lineΪ�β�
{
	int i, j;

	//�ϰ벿��
	for (i = 1; i < line; i++)
	{
		for (j = 1; j <= line - i; j++)
		{

			printf(" ");     //��ӡ�ո�
		}
		for (j = 1; j <=( 2*i - 1); j++)
		{
			printf("*");    //��ӡ*
		}
		printf("\n");
	}

	//�°벿��
	for (i = 1; i < line ; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 1; j < 2 * (line-i); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}


int main()
{	
	int  line;
	printf("�����������ӡ�����ε��кţ�");
	scanf("%d", &line);

	printf_diamond(line);           //���ú������˴�lineΪʵ��

	system("pause");
	return 0;
}
