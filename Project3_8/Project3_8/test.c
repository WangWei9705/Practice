#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


// ��������С��
int check_sys()
{
	union 
	{
		int i;
		char c;

	}un;
	un.i = 1;
	return un.c;
}


// �۰����
int bin_search(int arr[], int left, int right,  int key)
{
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;

		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
			return mid;        // �ҵ��ˣ��������±�
	}
	return 1;         // û�ҵ�

}


// 
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key = 5;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int left = 0;
	int ret = bin_search(arr, left, right, key);
	if (ret == 1)
	{
		printf("û�ҵ�!\n");
	}
	else
	{
		printf("�ҵ��ˣ����±�Ϊ%d\n", ret);
	}

	
	
	
	/*
	int ret = check_sys();
	if (ret == 1)
	{
		printf("����С��\n");
	}
	else
	{
		printf("���Ǵ��\n");
	}*/
	system("pause");
	return 0;
}
