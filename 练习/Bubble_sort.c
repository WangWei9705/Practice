//冒泡排序算法
//思路：每次将相邻两个数进行比较，较小的调到前面

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


int main()
{	
	int a[10];
	int i, j, k;
	printf("请输入十个数字：\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n");
	for (j = 0; j < 9;j++)  //十个数字进行九次循环，九次比较
	for (i = 0; i < (9 - j); i++)   //每一趟进行（9-j）次比较
	if (a[i]>a[i + 1])    //相邻两个数进行比较
	{
		k = a[i]; a[i] = a[i + 1]; a[i + 1] = k;
	}
	printf("排序后的数字为：\n");
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");

	system("pause");
	return 0;
}

