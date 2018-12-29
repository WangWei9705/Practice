#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3



//	��������Ϸ
//	1����ӡ���̣�������ά���飩
//	2���������(�������꣩
//	3���ж�ʤ�����
//	4���������ӣ�ʹ��������������꣩
//	5���ж�ʤ�����
//			a����һ�ʤ
//			b�����Ի�ʤ
//			c������
//			d����Ϸδ����


char chess_borad[ROW][COL];     //	����ȫ�ֱ���


//�˵�����
void menu()
{
	printf("********************************************\n");
	printf("��ӭ�������������Σ�\n");
	printf("1���������\n");
	printf("2����������\n");
	printf("********************************************\n");
}

//	��ʼ��
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

	//	��ӡ����
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


	// �������
	void player_move()
	{
		int row;
		int col;
		printf("����������,������һ�����꣺");
		while (1)
		{
			scanf("%d %d", &row, &col);

			if (row < 0 || row >= ROW || col < 0 || col >= COL || chess_borad[row][col] != ' ')           //�ж�������������Ƿ�Ϸ�
			{
				printf("�����������������룺");
				continue;
			}

			chess_borad[row][col] = 'X';
			print_borad(chess_borad[row][col]);      //		��ӡ����
			break;

		}

	}



	//	��������
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
			printf("����������!\n");
			print_borad(chess_borad[row][col]);      //		��ӡ����
			break;

		}

	}

	//	�ж������Ƿ�����

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

	//	�ж�ʤ��

	int  judge_winner()
	{
		int row;
		int col;
		
		//	���ж���
		for (row = 0; row < ROW; row++)
		{

			if (chess_borad[row][0] == chess_borad[row][1] &&
				chess_borad[row][0] == chess_borad[row][2] &&
				chess_borad[row][0] != ' ')
				return 1;
		}

		//	�ж���
		for (col = 0; col < COL; col++)
		{
			if (chess_borad[0][col] == chess_borad[1][col] &&
				chess_borad[0][col] == chess_borad[2][col] &&
				chess_borad[0][col] != ' ')
				return 1;
		}
		//	�ж϶Խ���
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


	//	����������
	int main()
	{
		int row = 0;
		int col = 0;
		int choice;
		int  winner = '\0';
		menu();												  //		����menu������ѡ��������ֻ��ǵ�������
		
		
		init();
		print_borad(chess_borad[row][col]);      //		��ӡ����
		printf("��ѡ�������ֻ��ǵ�������:");
		flag:
		scanf("%d", &choice);
		srand((unsigned)time(0));           //	����������ӱ�֤����ÿ�������������
		while (1)
		{
			
			
		
			if (choice == 1)
			{
				

				player_move( );                                      //	�������
				
				winner = judge_winner();                                    //	�ж�ʤ��

				if (winner ==1)
				{
					printf("��Ӯ��!\n");
					print_borad(chess_borad[row][col]);
					break;
				}

				winner = Isfull();
				if (winner == 2)
				{
					printf("���壬��Ϸ������\n");
					print_borad(chess_borad[row][col]);
					break;
				}

				system("cls");

				computer_move();                                //  ��������

				winner = judge_winner();
				if (winner ==1)
				{
				
					printf("������!\n");
					print_borad(chess_borad[row][col]);
					
					break;

				}
				
			}


			else if (choice == 2)
			{
				computer_move();                                      //	��������

				winner = judge_winner();                                    //	�ж�ʤ�� 

				if (winner == 1)
				{
					printf("������!\n");
					print_borad(chess_borad[row][col]);
					break;
				}

				winner = Isfull();
				if (winner == 2)
				{
					printf("���壬��Ϸ������\n");
					print_borad(chess_borad[row][col]);
					break;
				}


				player_move();                                //  �������

				winner = judge_winner();
				if (winner == 1)
				{

					printf("��Ӯ��!\n");
					print_borad(chess_borad[row][col]);

					break;
				}
				system("cls");

			}
			else if(choice !=1 &&choice!=2)
			{
				printf("������������������:");
				goto flag;
				break;
			
			}

		}


		system("pause");
		return 0;
	
}