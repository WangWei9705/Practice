#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�ַ�����غ��������÷�


int main()
{	
	////  strcpy()��������>�ַ�������

	//char str1[10], str2[ ] = "English";
	//strcpy(str1, str2);
	//printf("%s\n", str1);



	//// strcmp()��������>�ַ����Ƚ�


	//if (strcmp(str1, str2) == 0)                //��ȷ��� 0 ;str11 > str2 ��������; str1 < str2 ���ظ���
	//{
	//	printf("Yes!\n");
	//}
	//else
	//{
	//	printf("No!\n");
	//}
	//	

	//// strlen() ��������>���ַ������Ⱥ���

	//printf("%d \n", strlen(str1));                //��������� \0  ��Ϊʵ�ʳ���

	//// strupr()���� ��strlwr()��������>ת����Сд����

	//printf("%s \n", _strlwr(str1) ) ;
	//printf("%s \n", _strupr(str2) ) ;

	////  �ַ�����Ӧ��

	//// ����һ���ַ���ͳ�Ƶ��ʸ���������֮���ÿո����



	//char S_word[1024];
	//int i, j, num = 0, word = 0;
	//

	//// 1������һ���ַ�
	//printf("������һ���ַ���");
	//scanf("%s", &S_word);


	//// 2��ͳ�Ƶ��ʸ���


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
	//printf("��仰����%d�����ʡ�\n", num);


	//�������ַ������Ƚϴ�С���ҳ�����

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
	
	printf("�����ַ�����:%s.\n", MAX);



	system("pause");
	return 0;
}



