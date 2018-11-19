#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	//方法三：数组法
	//每一个数组元素代表斐波那契数列中的一个数

	int i = 0;
	int f[20] = { 1, 1 }; //初始化前两个元素f[0]和f[1]
	printf("%12d%12d", f[0],f[1]);     //先将前两个元素打印出来
	for (i = 2; i < 20; i++)

		f[i] = f[i - 2] + f[i - 1];
	
	for (i = 2; i < 20; i++)
	{
		if (i % 5 == 0) printf("\n");  //控制每行输出五个数字
		printf("%12d", f[i]);
		
	}

	printf("\n");

	system("pause");
	return 0;
}
