#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3


char arr[ROW][COL];
// ��������Ϸ����
// 1���˵�����

void  menu1()
{
	int choice;
	printf("*********************************************\n");
	printf("1����ʼ��Ϸ\n");
	printf("0���˳���Ϸ\n");
	printf("*********************************************\n");
 flag:
	printf("��ѡ��");
	scanf("%d", &choice);
	if (choice == 1)
	{
		printf("��Ϸ��ʼ\n");
	}
	else if (choice == 0)
	{
		printf("��Ϸ����\n");
	}
	else
	{
		printf("����������������룡\n");
		goto flag;
	}

}


int  menu2()
{
	int choice;
	printf("*********************************************\n");
	printf("1���������\n");
	printf("2����������\n");
	printf("*********************************************\n");

	printf("��ѡ��");
	scanf("%d", &choice);
	return choice;

}
// 2����ӡ���̣�ʹ�ö�ά���飩
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
// 3���������
void player_move()
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("���������꣺");
		scanf("%d %d", &x, &y);
		if (arr[x][y] == ' ')
		{
			arr[x][y] = 'X';
			print_borad(arr[x][y]);
			break;
		}
		else
		{
			printf("����������������룡\n");
			continue;
		}
	}

	
}

// 4���������ӣ�ʹ���������
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
// 5���ж���Ӯ(���ж������Ƿ����ˣ�
//       a������
//		  b�����Ӯ
//		  c������Ӯ

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

	// ���ж���
	for (i = 0; i < ROW; i++)
	{
		if (arr[i][0] == arr[i][1] &&
			arr[i][0] == arr[i][2] &&
			arr[i][0] != ' ')
		return 1;
	}
	// Ȼ���ж���
	for (j = 0; j < COL; j++)
	{
		if (arr[0][j] == arr[1][j] &&
			arr[0][j] == arr[2][j] &&
			arr[0][j] != ' ')
			return 1;
	}
	// ����ж϶Խ���
	// ��һ���Խ���
	if (arr[0][0] == arr[1][1] &&
		arr[0][0] == arr[2][2] &&
		arr[0][0] != ' ')
		return 1;

	// �ڶ����Խ���
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
			printf("�������ӣ�\n");
			player_move(arr[i][j]);
			winner=judge_winner();
			if (winner == 1)
			{
				printf("��ϲ��Ӯ�ˣ�\n");
				print_borad(arr[i][j]);
				break;
			}
			winner = Isfull();
			if (winner == 2)
			{
				printf("���壬��͵���ˮƽ��࣡\n");
				print_borad(arr[i][j]);
				break;
			}
			system("cls");
			computer_move();
			winner = judge_winner();
			if (winner==1)
			{
				printf("�����ˣ���ˣ�\n");
				print_borad(arr[i][j]);
				break;
			}
		}
		else if (choice == 2)
		{
			printf("����������\n");
			computer_move();
			winner = judge_winner();
			if (winner==1)
			{
				printf("�����ˣ�\n");
				print_borad(arr[i][j]);
				break;
			}
			winner = Isfull();
			if (winner == 2)
			{
				printf("���壡\n");
				print_borad(arr[i][j]);
				break;
			}
			player_move();
			winner = judge_winner();
			if (winner == 1)
			{
				printf("��Ӯ�ˣ�\n");
				print_borad(arr[i][j]);
				break;
			}
			system("cls");
			
		}
		else
		{
			printf("����������������룡\n");
		
			goto flag;
		}
	}


	system("pause");
	return 0;
}
