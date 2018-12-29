#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//数组名作为函数参数练习
//用选择法对数组中十个整数进行从小到大排序

//选择法：先将十个数字中最小的数字与a[0]进行交换，再将a[1]~a[9]中最小的数与a[1]交换，每比较一轮，找出未经排序中最小的数字

void sort(int arr[], int n)
{
	int i, j, k, t;
	for (i = 0; i < n-1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[k])
			{
				k = j;
			}

			t = arr[k];
			arr[k] = arr[j];
			arr[j] = t;
		}
	}

	
}


int main()
{
	int arr[10];
	int i;
	printf("请输入十个整数：");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\n");

	sort(arr, 10);

	printf("按照从小到大排序后的数组为：");

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
