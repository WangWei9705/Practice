#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//	一个常识：指针也是一种数据类型，一般占四个字节
// 在声明指针时用typedef比#define要好一些
int main()
{
	int* p;             // 普通指针，指向整型
	int const* p;   //	指向整型常量的指针，可以修改指针的值，但无法修改指针所指向的值
	int* const p;
	int const* const p;

	system("pause");
	return 0;
}
