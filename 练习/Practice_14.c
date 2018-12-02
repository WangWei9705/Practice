#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



//1、猜数字游戏

//菜单函数
void   menu()
{
	printf("********************************************	\n");
	printf("<<<<<<<<<<<<1、开始游戏>>>>>>>>>>>>\n");
	printf("<<<<<<<<<<<<2、结束游戏>>>>>>>>>>>>\n");
	printf("********************************************	\n");

	
	
}
	

//游戏函数

void game()
{
	//1、生成随机数
	int num = rand() % 100 + 1;              //生成1~100的数字

	//2、开始猜数字
	int input = 0;
	

	//3、判断
	while (1)
	{
		printf("请输入一个数字（1~100）：");
		scanf("%d", &input);
		if (input > num)
		{
			printf("猜大了！\n");
			
			
		}
		else if (input < num)
		{
			printf("猜小了！\n");
			
			
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
		
	}

}

//主函数
int main()
{
	int choice = 0;
	srand((unsigned)time(0));                   //设置随机数初始值
		
		while (1)
		{
			menu();
			printf("请选择：");
			scanf("%d", &choice);
			
			if (choice == 1)
			{
				printf("游戏开始！\n");
				game();

			}
			else if (choice == 2)
			{
				printf("Game Over！\n");
				break;

			}
			else
			{
				printf("输入有误，请重新输入！\n");
				break;
			}
	}


		system("pause");
		return 0;

}