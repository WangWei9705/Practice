#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3



//	三子棋游戏
//	1、打印棋盘（借助二维数组）
//	2、玩家落子(输入坐标）
//	3、判断胜负情况
//	4、电脑落子（使用随机数产生坐标）
//	5、判断胜负情况
//			a、玩家获胜
//			b、电脑获胜
//			c、和棋
//			d、游戏未结束


char chess_borad[ROW][COL];     //	定义全局变量


//菜单函数
void menu()
{
	printf("********************************************\n");
	printf("欢迎您进入三子棋游！\n");
	printf("1、玩家先手\n");
	printf("2、电脑先手\n");
	printf("********************************************\n");
}

//	初始化
void init()
{
	int row;
	int col;
	for (row = 0; row < ROW; row++)
	{
		for (col = 0; col < COL; col++)
		{
			chess_borad[row][col] = ' ';

		}
	}
}

	//	打印棋盘
void	print_borad( )
	{
		int row;
		int col=0;

	
		for (row = 0; row < ROW; row++)
		{
			for (col = 0; col < COL; col++)
			{
				printf("| %c", chess_borad[row][col]);

			}
			printf("\n");
			printf(" -- -- --\n");
		}
	}


	// 玩家落子
	void player_move()
	{
		int row;
		int col;
		printf("该您落子了,请输入一个坐标：");
		while (1)
		{
			scanf("%d %d", &row, &col);

			if (row < 0 || row >= ROW || col < 0 || col >= COL || chess_borad[row][col] != ' ')           //判断玩家输入坐标是否合法
			{
				printf("输入有误，请重新输入：");
				continue;
			}

			chess_borad[row][col] = 'X';
			print_borad(chess_borad[row][col]);      //		打印棋盘
			break;

		}

	}



	//	电脑落子
	void computer_move()
	{
		int row;
		int col;
		
		while (1)
		{

			row = rand() % ROW;
			col = rand() % COL;
			if (chess_borad[row][col] != ' ')
			{
				continue;
			}

			chess_borad[row][col] = 'O';
			printf("电脑已落子!\n");
			print_borad(chess_borad[row][col]);      //		打印棋盘
			break;

		}

	}

	//	判断棋盘是否满了

	int  Isfull()
	{
		int count = 0;
		for (int row = 0; row < ROW; row++)
		{
			for (int col = 0; col < COL;col++)
			if (chess_borad[row][col] != ' ')

				count++;

		}
		if (count == 9)
			return 2;

		return 0;
	}

	//	判断胜负

	int  judge_winner()
	{
		int row;
		int col;
		
		//	先判断行
		for (row = 0; row < ROW; row++)
		{

			if (chess_borad[row][0] == chess_borad[row][1] &&
				chess_borad[row][0] == chess_borad[row][2] &&
				chess_borad[row][0] != ' ')
				return 1;
		}

		//	判断列
		for (col = 0; col < COL; col++)
		{
			if (chess_borad[0][col] == chess_borad[1][col] &&
				chess_borad[0][col] == chess_borad[2][col] &&
				chess_borad[0][col] != ' ')
				return 1;
		}
		//	判断对角线
		if (chess_borad[0][0] == chess_borad[1][1] &&
			chess_borad[0][0] == chess_borad[2][2] &&
			chess_borad[0][0] != ' ')
			return 1;

		if (chess_borad[0][2] == chess_borad[1][1] &&
			chess_borad[0][2] == chess_borad[2][0] &&
			chess_borad[0][2] != ' ')
			return 1;
		
		return 0;
	}


	//	代码主体框架
	int main()
	{
		int row = 0;
		int col = 0;
		int choice;
		int  winner = '\0';
		menu();												  //		调用menu函数，选择玩家先手还是电脑先手
		
		
		init();
		print_borad(chess_borad[row][col]);      //		打印棋盘
		printf("请选择你先手还是电脑先手:");
		flag:
		scanf("%d", &choice);
		srand((unsigned)time(0));           //	设置随机种子保证电脑每次落子是随机的
		while (1)
		{
			
			
		
			if (choice == 1)
			{
				

				player_move( );                                      //	玩家落子
				
				winner = judge_winner();                                    //	判断胜负

				if (winner ==1)
				{
					printf("你赢了!\n");
					print_borad(chess_borad[row][col]);
					break;
				}

				winner = Isfull();
				if (winner == 2)
				{
					printf("和棋，游戏结束！\n");
					print_borad(chess_borad[row][col]);
					break;
				}

				system("cls");

				computer_move();                                //  电脑落子

				winner = judge_winner();
				if (winner ==1)
				{
				
					printf("你输了!\n");
					print_borad(chess_borad[row][col]);
					
					break;

				}
				
			}


			else if (choice == 2)
			{
				computer_move();                                      //	电脑落子

				winner = judge_winner();                                    //	判断胜负 

				if (winner == 1)
				{
					printf("你输了!\n");
					print_borad(chess_borad[row][col]);
					break;
				}

				winner = Isfull();
				if (winner == 2)
				{
					printf("和棋，游戏结束！\n");
					print_borad(chess_borad[row][col]);
					break;
				}


				player_move();                                //  玩家落子

				winner = judge_winner();
				if (winner == 1)
				{

					printf("你赢了!\n");
					print_borad(chess_borad[row][col]);

					break;
				}
				system("cls");

			}
			else if(choice !=1 &&choice!=2)
			{
				printf("输入有误，请重新输入:");
				goto flag;
				break;
			
			}

		}


		system("pause");
		return 0;
	
}