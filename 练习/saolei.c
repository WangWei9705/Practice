#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define mine_count 10    // 地雷数

// 扫雷游戏
// 思路：
// 1、菜单函数
// 2、二维数组表示地图（第一张：地雷布局图、第二张：玩家看到的地图）
// 3、初始化地图
//		a、第一张全部初始化为'0',再随机设置位置为地雷
//		b、第二张全部初始化为' '，表示为翻开
// 4、打印地图（玩家看到的地图，同时提示玩家输入坐标）
// 5、判断是否为地雷
//		1) 是地雷，扫雷失败，游戏结束
//     2) 不是地雷，判断周围八个方格内有几个雷
//     3)挖出所有不是雷的方格，扫雷成功，游戏胜利




// 菜单函数
int  menu()
{
	printf("****************<扫雷游戏>****************\n");
	printf("		1、开始游戏\n");
	printf("		0、结束游戏\n");
	printf("******************************************\n");
	int choice;
	printf("请输入你的选择：");
	scanf("%d", &choice);
	return choice;
}

// 初始化地图
void init(char map1[ROW+2][COL+2],
	char map2[ROW+2][COL+2])
{
	int row;
	int col;
	// 将map1全部初始化为' '
	for (row = 0; row < ROW + 2; row++)
	{
		for (col = 0; col < COL + 2; col++)
		{
			map1[row][col] = ' ';
		}
	}

	// 将map2初始化为全'0'
	for (row = 0; row < ROW + 2; row++)
	{
		for (col = 0; col < COL + 2; col++)
		{
			map2[row][col] = '0';
		}
	}

	//  排布地雷
	int mines = mine_count;
	while (mines>0)
	{
		// 构造随机数设置地雷[1,9]

		row = rand() % ROW + 1;
		col = rand() % COL + 1;
		if (mines == '1')
		{
			continue;
		}
		else
			map2[row][col] = '1';
		mines--;
	}
}


//	打印地图
void print_map(char map[ROW+2][COL+2])
{
	int i;
	int row;
	int col;
	// 打印地图的同时打印出行号和列号
	printf("   ");

	// 打印列号
	for (i = 1; i <= COL; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	// 打印上边框
	for (i = 1; i <= ROW-4; i++)
	{
		printf("——");
	}
	printf("\n");
	// 打印地图内容
	// 先打印行号
	for (row = 1; row <= ROW; row++)
	{
		printf("%d| ", row);
		// 打印该行的每一列
		for (col = 1; col <= COL; col++)
		{
			printf("%c ", map[row][col]);
		}
		printf("\n");
	}
	
}


// 更新地图
void update_map(char map1[ROW+2][COL+2],
	char map2[ROW+2][COL+2],
	int row,int col)
{
	int count = 0;
	// 显示当前位置周围八个格子的地雷数

	// 由于地图带边框，此时可以不用考虑数组下标越界

	if (map2[row - 1][col - 1] == '1')
	{
		count++;
	}

	if (map2[row - 1][col] == '1')
	{
		count++;
	}

	if (map2[row - 1][col + 1] == '1')
	{
		count++;
	}

	if (map2[row ][col - 1] == '1')
	{
		count++;
	}

	if (map2[row ][col + 1] == '1')
	{
		count++;
	}

	if (map2[row + 1][col - 1] == '1')
	{
		count++;
	}

	if (map2[row + 1][col ] == '1')
	{
		count++;
	}

	if (map2[row + 1][col + 1] == '1')
	{
		count++;
	}

	map1[row][col] = '0' + count;

}

//	游戏函数
void game()
{
	int row;
	int col;
	int safe_blank_count = 0;   // 不是地雷的格子数
	// 两张地图都带有边框
	char map1[ROW+2][COL+2];
	char map2[ROW+2][COL+2];
	init(map1, map2);         // 初始化地图

	while (1)
	{

		print_map(map1);       // 打印地图

		printf("请输入坐标：");
		scanf("%d %d", &row, &col);
		if (row<1 || row>ROW || col<1 || col>COL
			||map1[row][col]!=' ')
		{
			printf("输入有误，请重新输入!\n");
			continue;
		}
		// 判断是否踩到雷
		if (map2[row][col] == '1')
		{
			printf("扫雷失败，你被炸死了！\n");
			break;
		}

		// 判断是否扫雷成功
		safe_blank_count++;
		if (safe_blank_count == ROW*COL - mine_count)
		{
			printf("扫雷成功，游戏胜利！\n");
			break;
		}

		// 更新地图

		update_map(map1,map2,row,col);
		system("cls");

	}
	print_map(map2);
	
}


//	主函数
int main()
{	
	srand((unsigned int )time(0));
	
	while (1)
	{
		int choice = menu();
		if (choice == 1)
		{
			printf("游戏开始！\n");
			game();
		}
			
		else if (choice == 0)
		{
			printf("游戏结束！\n");
			break;
		}
			
		else
			printf("输入错误，请重新输入!\n");
		continue;

	}
	system("pause");
	return 0;
}
