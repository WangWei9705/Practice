//编写代码演示多个字符从两端移动，向中间汇聚

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//定义两个数组用来存放两个字符串
	char arr1[] = "hello world !!!!";
	char arr2[] = "****************";
	//定义左右端下标
	int left = 0;
	int right = strlen(arr1) - 1;

	//for循环实现字符从两端移动，向中间汇聚的过程
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
