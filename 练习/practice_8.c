//getchar()和putchar()的使用
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	//利用getchar()putchar()输入、输出字符
	/*
	char a, b, c;
	a = getchar();
	b = getchar();
	c = getchar();

	putchar(a);
	putchar(b);
	putchar(c);

	printf("\n");
	*/

	//简化后
	/*
	putchar(getchar());
	putchar(getchar());
	putchar(getchar());
	putchar('\n'[);
	*/

	//大小写字母转换:利用ASCII码，A=65    a=97
	//大写-->小写    A+32=a
	//小写-->大写  a-32=A

	char c1, c2 = 0;
	printf("请输入一个字母：");

flag:
	c1 = getchar();
	/*printf("%c\n", c1);*/

	if (c1 >= 65 && c1<=90)
	{
		c2 = c1 + 32;
		printf("你输入的是一个大写字母，它的小写字母所对应的ASCII值为：%d \n", c2);
	}
		
	else if (c1>=97 && c1 <=122 )
	{
		c2 = c1 - 32;
		printf("你输入的是一个小写字母，它的大写写字母所对应的ASCII值为：%d\n", c2);
		

	}
	else
	{
		printf("你输入的不是字母，请重新输入：");
		goto flag;
	}
		

	system("pause");
	return 0;
}
