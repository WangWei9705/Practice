//编写代码，模拟登陆，只允许登陆三次

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
		printf("请输入密码：");
		scanf("%s", &psw);

		if (strcmp(psw, "password") == 0)
		
		{
			printf("登陆成功！\n");
			break;
		}
		else
		{
			printf("登陆失败，请再尝试一次！\n");
		}
	}

	if (i == 3)
	{
		printf("请输入密码:");
		scanf("%s", &psw);
	}
	if (strcmp(psw, "password") == 0)
	{
		printf("登陆成功！\n");
		
	}
	else
	{
		printf("今日次数已用完，请明日再尝试！\n");
	}

	system("pause");
	return 0;
}
