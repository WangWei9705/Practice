#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//2.写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）

//查找函数
int bin_search(int arr[ ], int left, int right,int find_num)

{
	int mid;
	while(left <= right)
	{
		mid = (left + right) / 2;
		if (find_num > mid)
		{
			left = mid + 1;

		}
		else if (find_num < mid)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标为%d", mid);
			return mid;                   //找到了；
			break;
		}
		while (left > right)
		{
			printf("找不到！");
			return -1;             //找不到

		}
	
	}
	
}


//主函数
int main()
{	
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int left = 0, mid = 0, find_num ;

	int right = sizeof(arr) / sizeof(arr[0]);


	printf("请输入你想要查找的数字：");
	scanf("%d", &find_num);

	bin_search(arr[10], left, right, find_num);

	printf("\n");


	system("pause");
	return 0;
}
