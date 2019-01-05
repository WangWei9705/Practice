#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define mine_count 10    // ������

// ɨ����Ϸ
// ˼·��
// 1���˵�����
// 2����ά�����ʾ��ͼ����һ�ţ����ײ���ͼ���ڶ��ţ���ҿ����ĵ�ͼ��
// 3����ʼ����ͼ
//		a����һ��ȫ����ʼ��Ϊ'0',���������λ��Ϊ����
//		b���ڶ���ȫ����ʼ��Ϊ' '����ʾΪ����
// 4����ӡ��ͼ����ҿ����ĵ�ͼ��ͬʱ��ʾ����������꣩
// 5���ж��Ƿ�Ϊ����
//		1) �ǵ��ף�ɨ��ʧ�ܣ���Ϸ����
//     2) ���ǵ��ף��ж���Χ�˸��������м�����
//     3)�ڳ����в����׵ķ���ɨ�׳ɹ�����Ϸʤ��




// �˵�����
int  menu()
{
	printf("****************<ɨ����Ϸ>****************\n");
	printf("		1����ʼ��Ϸ\n");
	printf("		0��������Ϸ\n");
	printf("******************************************\n");
	int choice;
	printf("���������ѡ��");
	scanf("%d", &choice);
	return choice;
}

// ��ʼ����ͼ
void init(char map1[ROW+2][COL+2],
	char map2[ROW+2][COL+2])
{
	int row;
	int col;
	// ��map1ȫ����ʼ��Ϊ' '
	for (row = 0; row < ROW + 2; row++)
	{
		for (col = 0; col < COL + 2; col++)
		{
			map1[row][col] = ' ';
		}
	}

	// ��map2��ʼ��Ϊȫ'0'
	for (row = 0; row < ROW + 2; row++)
	{
		for (col = 0; col < COL + 2; col++)
		{
			map2[row][col] = '0';
		}
	}

	//  �Ų�����
	int mines = mine_count;
	while (mines>0)
	{
		// ������������õ���[1,9]

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


//	��ӡ��ͼ
void print_map(char map[ROW+2][COL+2])
{
	int i;
	int row;
	int col;
	// ��ӡ��ͼ��ͬʱ��ӡ���кź��к�
	printf("   ");

	// ��ӡ�к�
	for (i = 1; i <= COL; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	// ��ӡ�ϱ߿�
	for (i = 1; i <= ROW-4; i++)
	{
		printf("����");
	}
	printf("\n");
	// ��ӡ��ͼ����
	// �ȴ�ӡ�к�
	for (row = 1; row <= ROW; row++)
	{
		printf("%d| ", row);
		// ��ӡ���е�ÿһ��
		for (col = 1; col <= COL; col++)
		{
			printf("%c ", map[row][col]);
		}
		printf("\n");
	}
	
}


// ���µ�ͼ
void update_map(char map1[ROW+2][COL+2],
	char map2[ROW+2][COL+2],
	int row,int col)
{
	int count = 0;
	// ��ʾ��ǰλ����Χ�˸����ӵĵ�����

	// ���ڵ�ͼ���߿򣬴�ʱ���Բ��ÿ��������±�Խ��

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

//	��Ϸ����
void game()
{
	int row;
	int col;
	int safe_blank_count = 0;   // ���ǵ��׵ĸ�����
	// ���ŵ�ͼ�����б߿�
	char map1[ROW+2][COL+2];
	char map2[ROW+2][COL+2];
	init(map1, map2);         // ��ʼ����ͼ

	while (1)
	{

		print_map(map1);       // ��ӡ��ͼ

		printf("���������꣺");
		scanf("%d %d", &row, &col);
		if (row<1 || row>ROW || col<1 || col>COL
			||map1[row][col]!=' ')
		{
			printf("������������������!\n");
			continue;
		}
		// �ж��Ƿ�ȵ���
		if (map2[row][col] == '1')
		{
			printf("ɨ��ʧ�ܣ��㱻ը���ˣ�\n");
			break;
		}

		// �ж��Ƿ�ɨ�׳ɹ�
		safe_blank_count++;
		if (safe_blank_count == ROW*COL - mine_count)
		{
			printf("ɨ�׳ɹ�����Ϸʤ����\n");
			break;
		}

		// ���µ�ͼ

		update_map(map1,map2,row,col);
		system("cls");

	}
	print_map(map2);
	
}


//	������
int main()
{	
	srand((unsigned int )time(0));
	
	while (1)
	{
		int choice = menu();
		if (choice == 1)
		{
			printf("��Ϸ��ʼ��\n");
			game();
		}
			
		else if (choice == 0)
		{
			printf("��Ϸ������\n");
			break;
		}
			
		else
			printf("�����������������!\n");
		continue;

	}
	system("pause");
	return 0;
}
