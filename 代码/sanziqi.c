#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3


char arr[ROW][COL];
// 三子棋游戏步骤
// 1、菜单函数

void  menu1()
{
	int choice;
	printf("*********************************************\n");
	printf("1、开始游戏\n");
	printf("0、退出游戏\n");
	printf("*********************************************\n");
 flag:
	printf("请选择：");
	scanf("%d", &choice);
	if (choice == 1)
	{
		printf("游戏开始\n");
	}
	else if (choice == 0)
	{
		printf("游戏结束\n");
	}
	else
	{
		printf("输入错误，请重新输入！\n");
		goto flag;
	}

}


int  menu2()
{
	int choice;
	printf("*********************************************\n");
	printf("1、玩家先手\n");
	printf("2、电脑先手\n");
	printf("*********************************************\n");

	printf("请选择：");
	scanf("%d", &choice);
	return choice;

}
// 2、打印棋盘（使用二维数组）
void init()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{

		for (j = 0; j < COL; j++)
		{
			arr[i][j] = ' ';
		}
	}
}
void print_borad()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
	
		for (j = 0; j < COL; j++)
		{
			printf("|%c ", arr[i][j]);
		}
		
		printf("\n");
		printf("--------\n");
	}

}
// 3、玩家落子
void player_move()
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入坐标：");
		scanf("%d %d", &x, &y);
		if (arr[x][y] == ' ')
		{
			arr[x][y] = 'X';
			print_borad(arr[x][y]);
			break;
		}
		else
		{
			printf("输入错误，请重新输入！\n");
			continue;
		}
	}

	
}

// 4、电脑落子（使用随机数）
void computer_move()
{
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % ROW;
		y = rand() % COL;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = 'O';
			print_borad( arr[x][y]);
			break;
		}
		else
		{
			continue;
		}
	}
}
// 5、判断输赢(先判断棋盘是否满了）
//       a、和棋
//		  b、玩家赢
//		  c、电脑赢

int  Isfull()
{
	int count = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (arr[i][j] != ' ')
			{
				count++;
			}
		}
	}
	if (count == 9)
	{
		return 2;
	}
	return 0;
}
int  judge_winner()
{
	int i = 0;
	int j = 0;

	// 先判断行
	for (i = 0; i < ROW; i++)
	{
		if (arr[i][0] == arr[i][1] &&
			arr[i][0] == arr[i][2] &&
			arr[i][0] != ' ')
		return 1;
	}
	// 然后判断列
	for (j = 0; j < COL; j++)
	{
		if (arr[0][j] == arr[1][j] &&
			arr[0][j] == arr[2][j] &&
			arr[0][j] != ' ')
			return 1;
	}
	// 最后判断对角线
	// 第一条对角线
	if (arr[0][0] == arr[1][1] &&
		arr[0][0] == arr[2][2] &&
		arr[0][0] != ' ')
		return 1;

	// 第二条对角线
	if (arr[0][2] == arr[1][1] &&
		arr[0][2] == arr[2][0] &&
		arr[0][2] != ' ')
		return 1;
	return 0;
}



int main()
{	
	int i = 0;
	int j = 0;
	menu1();
	init();
flag:
	print_borad(arr[i][j]);
	int winner = 0;
	int choice = menu2();
	while (1)
	{
		srand((unsigned)time(0));
		
		if (choice == 1)
		{
			printf("您先落子！\n");
			player_move(arr[i][j]);
			winner=judge_winner();
			if (winner == 1)
			{
				printf("恭喜你赢了！\n");
				print_borad(arr[i][j]);
				break;
			}
			winner = Isfull();
			if (winner == 2)
			{
				printf("和棋，你和电脑水平差不多！\n");
				print_borad(arr[i][j]);
				break;
			}
			system("cls");
			computer_move();
			winner = judge_winner();
			if (winner==1)
			{
				printf("你输了，真菜！\n");
				print_borad(arr[i][j]);
				break;
			}
		}
		else if (choice == 2)
		{
			printf("电脑先落子\n");
			computer_move();
			winner = judge_winner();
			if (winner==1)
			{
				printf("你输了！\n");
				print_borad(arr[i][j]);
				break;
			}
			winner = Isfull();
			if (winner == 2)
			{
				printf("和棋！\n");
				print_borad(arr[i][j]);
				break;
			}
			player_move();
			winner = judge_winner();
			if (winner == 1)
			{
				printf("你赢了！\n");
				print_borad(arr[i][j]);
				break;
			}
			system("cls");
			
		}
		else
		{
			printf("输入错误，请重新输入！\n");
		
			goto flag;
		}
	}


	system("pause");
	return 0;
}
