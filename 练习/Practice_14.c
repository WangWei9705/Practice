#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



//1����������Ϸ

//�˵�����
void   menu()
{
	printf("********************************************	\n");
	printf("<<<<<<<<<<<<1����ʼ��Ϸ>>>>>>>>>>>>\n");
	printf("<<<<<<<<<<<<2��������Ϸ>>>>>>>>>>>>\n");
	printf("********************************************	\n");

	
	
}
	

//��Ϸ����

void game()
{
	//1�����������
	int num = rand() % 100 + 1;              //����1~100������

	//2����ʼ������
	int input = 0;
	

	//3���ж�
	while (1)
	{
		printf("������һ�����֣�1~100����");
		scanf("%d", &input);
		if (input > num)
		{
			printf("�´��ˣ�\n");
			
			
		}
		else if (input < num)
		{
			printf("��С�ˣ�\n");
			
			
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
		
	}

}

//������
int main()
{
	int choice = 0;
	srand((unsigned)time(0));                   //�����������ʼֵ
		
		while (1)
		{
			menu();
			printf("��ѡ��");
			scanf("%d", &choice);
			
			if (choice == 1)
			{
				printf("��Ϸ��ʼ��\n");
				game();

			}
			else if (choice == 2)
			{
				printf("Game Over��\n");
				break;

			}
			else
			{
				printf("�����������������룡\n");
				break;
			}
	}


		system("pause");
		return 0;

}