#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
// �ļ����������Ĳ���
// 1�����ļ�
// 2���ر��ļ�
// 3�����ļ�
// 4��д�ļ�
int main()
{
	FILE* fp = fopen("D:/test.txt", "w");
	if (fp == NULL)
	{
		/*printf("�ļ���ʧ�ܣ�%s\n", strerror(errno));*/
		perror("�ļ���ʧ�ܣ�");
		system("pause");
		return 1;
	}

	char buf[1024] = "hahahahah";
	fwrite(buf, 1, strlen(buf), fp);

	//FILE* fp = fopen("C:/2019������.txt", "w");
	//if (fp!=NULL)
	//{
	//	fputs("fopen sxample", fp);
	//	fclose(fp);

	//}

	//FILE* pFile = fopen("D:/2019������.txt", "r");
	//if (pFile == NULL)
	//{
	//	printf("�ļ���ʧ�ܣ�%s\n", strerror(errno));
	//	system("pause");
	//	return 1; 
	//}

	//// fread �����ݴӴ��̶����ڴ���
	//char buf[1024] = { 0 };
	//fread(buf, 1, 4, pFile);
	//printf("%s\n", buf);
	//fclose(pFile);
	system("pause");
	return 0;
}
