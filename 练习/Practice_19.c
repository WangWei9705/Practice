#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//字符串相关函数及其用法


int main()
{	
	////  strcpy()函数——>字符串复制

	//char str1[10], str2[ ] = "English";
	//strcpy(str1, str2);
	//printf("%s\n", str1);



	//// strcmp()函数——>字符串比较


	//if (strcmp(str1, str2) == 0)                //相等返回 0 ;str11 > str2 返回正数; str1 < str2 返回负数
	//{
	//	printf("Yes!\n");
	//}
	//else
	//{
	//	printf("No!\n");
	//}
	//	

	//// strlen() 函数——>测字符串长度函数

	//printf("%d \n", strlen(str1));                //结果不包括 \0  ，为实际长度

	//// strupr()函数 、strlwr()函数——>转换大小写函数

	//printf("%s \n", _strlwr(str1) ) ;
	//printf("%s \n", _strupr(str2) ) ;

	////  字符数组应用

	//// 输入一行字符，统计单词个数，单词之间用空格隔开



	//char S_word[1024];
	//int i, j, num = 0, word = 0;
	//

	//// 1、输入一行字符
	//printf("请输入一行字符：");
	//scanf("%s", &S_word);


	//// 2、统计单词个数


	//for (i = 0; ( j = S_word[i] ) != '\0'; i++)
	//{
	//	if (j == ' ')
	//	{
	//		word = 0;
	//	}
	//	else if (word == 0)
	//	{
	//		word = 1;
	//		num++;
	//	}

	//	
	//}
	//printf("这句话共有%d个单词。\n", num);


	//给三个字符串，比较大小，找出最大的

	char str0[10] = "China", str1[20] = "Shanaxi", str2[30] = "Xi'an";
	char MAX[ 40];
	
	if (strcmp(str0, str1) > 1)
	{
		strcpy(MAX, str0);
	}
	else
	{
		strcpy(MAX, str1);
	}

	if (strcmp(str2, MAX) > 1)
	{
		strcpy(MAX, str2);
	}
	
	printf("最大的字符串是:%s.\n", MAX);



	system("pause");
	return 0;
}



