#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。

//初始化数组
void init (int  arr [ ],int len)
{

	for (int i = 0; i < len; i++)
	{
		arr[i] = i;
		printf("%d", arr[i]);
	
	}
	


}

//清空数组
void empty (int arr[ ],int len )
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		arr[i] = 0;
	}
	printf("%d", arr[i]);
}

//完成数组元素的逆置
void reverse(int  arr[ ],int len )
{
	int i = 0;
	int left = 0;
	
	int right = len - 1;
	while (left <= right)
	{
		arr[left] = arr[left] ^ arr[right];
		arr[right] = arr[left] ^ arr[right];
		arr[left] = arr[left] ^ arr[right];
		left++;
		right--;
		
	}
	printf("%d", arr[i]);


}
int main()
{	
	int arr[10];
	int arr_len = sizeof(arr) / sizeof(arr[0]);

	printf("即将对数组初始化！");
	init(arr[10],arr_len);
	printf("即将清空数组！");
	empty(arr[10],arr_len);
	printf("即将对数组进行逆置操作！");
	reverse(arr[10],arr_len);
	printf("\n");



	system("pause");
	return 0;
}
