//��д���룬ģ���½��ֻ�����½����

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	char psw[20] = "";
	char password = "123456";
	int i = 0;

	for (i = 1; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", &psw);

		if (strcmp(psw, "password") == 0)
		
		{
			printf("��½�ɹ���\n");
			break;
		}
		else
		{
			printf("��½ʧ�ܣ����ٳ���һ�Σ�\n");
		}
	}

	if (i == 3)
	{
		printf("����������:");
		scanf("%s", &psw);
	}
	if (strcmp(psw, "password") == 0)
	{
		printf("��½�ɹ���\n");
		
	}
	else
	{
		printf("���մ��������꣬�������ٳ��ԣ�\n");
	}

	system("pause");
	return 0;
}
