#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


// 检查机器大小端
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


// 折半查找
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
			return mid;        // 找到了，并返回下标
	}
	return 1;         // 没找到

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
		printf("没找到!\n");
	}
	else
	{
		printf("找到了！，下标为%d\n", ret);
	}

	
	
	
	/*
	int ret = check_sys();
	if (ret == 1)
	{
		printf("这是小端\n");
	}
	else
	{
		printf("这是大端\n");
	}*/
	system("pause");
	return 0;
}
