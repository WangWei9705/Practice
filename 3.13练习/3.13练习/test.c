#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// 喝汽水：一瓶汽水1元，两个空瓶换一瓶，问：20元能喝多少瓶汽水.

int DrinkWater(int money)
{
	int sum = 0;
	sum = money * 2-1;
	return sum;
}

void test1()
{
	int money = 0;

	printf("请输入你要买气水的钱：");
	scanf("%d", &money);
	printf("你可以喝到%d瓶汽水！\n", DrinkWater(money));
}

// 一个数组中只有两个数字是出现一次， 
// 其他所有数字都出现了两次。
// 找出这两个数字，编程实现。
// 思路：先将整个数组排序打印，然后用arr[i]与arr[i+1]进行比较，直到找出那两个数字


// 第一步：排序
void sort_arr(int arr[], int size)
{
	int i = 0;
	int j = 0;
	for (j = 0; j < size - 1; j++)
	{
		for (i = 0; i < size - j - 1; i++)
		{
			if (arr[i]>arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
		

	}
}

	
// 第二步：找不同
void FindNum(int arr[], int size,int *num1,int *num2)
{
	int temp = 0;
	int i = 0;
	for (i = 0; i < size; i += 2)
	{
		if (arr[i] == arr[i + 1])
		{
			continue;
		}
		else
		{

			// 找到第一个数字
			if (temp == 0)
			{
				*num1 = arr[i];
				i = i + 1;
			}

			// 找到第二个数字
			else if (temp == 1)
			{
				*num2 = arr[i];
				i = i + 1;

			}
		}temp++;
	}
	
}


void test2()
{
	int arr[] = {1,2,3,2,3,4,6,5,6,5};

	int size = sizeof(arr) / sizeof(arr[0]);

	int i = 0;
	sort_arr(arr,size);
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	int num1, num2;
	FindNum(arr, size, &num1, &num2);
	printf("第一个数字为：%d，第二个数字为：%d\n", num1,num2);
}



int main()
{	
	test1();
	test2();

	system("pause");
	return 0;
}
