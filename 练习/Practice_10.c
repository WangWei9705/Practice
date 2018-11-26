//猜数字游戏
//  条件选择语句的使用（if   while  swtich   ）
//random函数用于生成随机数

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//菜单函数
void menu()
{
	printf("**********************************************\n");
	printf("**************1.Play Game*********************\n");
	printf("**************0.End Game**********************\n");
	printf("**********************************************\n");

}

//游戏函数

void game()
{
	int random_num = rand() % 100 + 1; //randome函数用于生成随机数
	int input = 0;
	while (1)
	{
		printf("请输入你猜的数字：");
		scanf("%d", &random_num);
		if (input > random_num)
		{
			printf("大了，请重新猜！\n");
		}
		else if (input < random_num)
		{
			printf("小了，请重新猜!\n");
		}
		else
		{
			printf("恭喜你猜对了！\n");
			break;
		}
	}
}


//主函数
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入!\n");
			break;
		}
	} while (input);

	system("pause");
	return 0;
}

