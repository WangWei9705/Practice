#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define ROW 100
#define COL 100

// 二维字符串数组的练习：从键盘接收字符串，直到输入空行，打印所有内容
int main()
{	
	char arr[ROW][COL];
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		gets(arr[i]);           // arr[i] ==&arr[i][0]
		if (arr[i][0] == '\0')
			break;
	}
	for (i = 0; arr[i][0]; i++)                       // 此处for循环中第二个表达式相当于一个if...else语句
	{
		puts(arr[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}
