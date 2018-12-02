#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>



//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
int main()
{
	char Letter, c;

	printf("请输入一个字母：");
	scanf("%s", &Letter);
	if (Letter >= 65 && Letter <= 90)
	{
		c = Letter + 32;
		printf("你输入的是一个大写字母，它对应的小写字母为：%c\n", c);
	}
	else if (Letter >= 97 && Letter <= 122)
	{
		c = Letter - 32;
		printf("你输入的是一个小写字母，它对应的大写字母为：%sc\n", c);

	}

	else
	{
		printf("你输入的不是字母！");
	}
	  


	system("pause");
	return 0;
}
