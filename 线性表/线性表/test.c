#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// 复杂度分为时间复杂度和空间复杂度
// 时间复杂度：效率 
// 空间复杂度：内存消耗

// 遍历查找
int search(int arr[],int size,int value)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == value)
		{
			return i;
		}
		return -1;
	}
}

// 时间复杂度为：O(N)

// 折半查找
int binsearch(int arr[], int size,int value)
{
	int left = 0;
	int right = size - 1;
	int mid = (left + right) / 2;
	while (left <= right)
	{
		if (arr[mid] > value)
		{
			right = mid - 1;
		}
		else if (arr[mid] < value)
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;

}

// 时间复杂度为：O(logN)以2为底N的对数

// 冒泡排序

void Bubblesort(int arr[], int size, int value)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			int t = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = t;
		}
	}

}

// 时间复杂度O(N^2)




int main()
{	
	system("pause");
	return 0;
}
