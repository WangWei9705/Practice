#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// 函数指针数组的使用——转移表

// 计算器

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;

}
int Mul(int x,int y)
{
	return x*y;
}
int Div(int x, int y)
{
	return x / y;
}

int menu()
{
	printf("————————————————————————\n");
	printf("0、结束程序！\n");
	printf("1、add\n");
	printf("2、sub\n");
	printf("3、mul\n");
	printf("4、div\n");
	printf("————————————————————————\n");
	
	int choice = 0;
	printf("请输入您的选择：");
	scanf("%d", &choice);
	return choice;
}
int main()
{
	int x;
	int y;
	printf("请输入操作数：");
	scanf("%d %d", &x, &y);

	int ret;

	// 常规方法，虽然能够实现，但是比较麻烦
	//while (1)
	//{
	//
	//	int choice = menu();

	//	if (choice == 1)
	//	{
	//		ret = Add(x, y);
	//	}
	//	else if (choice == 2)
	//	{
	//		ret = Sub(x, y);
	//	}
	//	else if (choice == 3)
	//	{
	//		ret = Mul(x, y);
	//	}
	//	else if (choice == 4)
	//	{
	//		ret = Div(x, y);
	//	}
	//	else if (choice == 0)
	//	{
	//		printf("程序结束！\n");
	//		break;
	//	}
	//	else 
	//	{
	//		printf("输入错误，请重新输入！\n");
	//		continue;
	//	}
	//	printf("你计算的两个数的值为：%d\n", ret);
	//}
	//

	// 方法二：使用转移表

	int(*p[5])(int x, int y) = { 0, Add, Sub, Mul, Div };          // 转移表

	while (1)
	{
		int choice = menu();
		if (choice <= 4 && choice >= 1)
		{
			ret = (*p[choice])(x, y);
		}
		else if (choice == 0)
		{
			printf("程序结束!");
			break;
		}
		else
		{
			printf("输入错误，请重新输入\n");
			continue;
		}
		printf("你所求的两个数的值为：%d\n", ret);
	}


	system("pause");
	return 0;
}
