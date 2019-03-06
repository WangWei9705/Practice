#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
// 文件操作核心四步：
// 1、打开文件
// 2、关闭文件
// 3、读文件
// 4、写文件
int main()
{
	FILE* fp = fopen("D:/test.txt", "w");
	if (fp == NULL)
	{
		/*printf("文件打开失败！%s\n", strerror(errno));*/
		perror("文件打开失败！");
		system("pause");
		return 1;
	}

	char buf[1024] = "hahahahah";
	fwrite(buf, 1, strlen(buf), fp);

	//FILE* fp = fopen("C:/2019年网课.txt", "w");
	//if (fp!=NULL)
	//{
	//	fputs("fopen sxample", fp);
	//	fclose(fp);

	//}

	//FILE* pFile = fopen("D:/2019年网课.txt", "r");
	//if (pFile == NULL)
	//{
	//	printf("文件打开失败！%s\n", strerror(errno));
	//	system("pause");
	//	return 1; 
	//}

	//// fread 把数据从磁盘读到内存中
	//char buf[1024] = { 0 };
	//fread(buf, 1, 4, pFile);
	//printf("%s\n", buf);
	//fclose(pFile);
	system("pause");
	return 0;
}
