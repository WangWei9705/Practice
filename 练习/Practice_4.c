//��д������ʾ����ַ��������ƶ������м���

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//������������������������ַ���
	char arr1[] = "hello world !!!!";
	char arr2[] = "****************";
	//�������Ҷ��±�
	int left = 0;
	int right = strlen(arr1) - 1;

	//forѭ��ʵ���ַ��������ƶ������м��۵Ĺ���
	for (left = 0, right = strlen(arr1) - 1; 
		left <= right; left++, right--)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s \n", arr2);
	}

	system("pause");
	return 0;
}
