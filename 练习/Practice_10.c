//��������Ϸ
//  ����ѡ������ʹ�ã�if   while  swtich   ��
//random�����������������

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//�˵�����
void menu()
{
	printf("**********************************************\n");
	printf("**************1.Play Game*********************\n");
	printf("**************0.End Game**********************\n");
	printf("**********************************************\n");

}

//��Ϸ����

void game()
{
	int random_num = rand() % 100 + 1; //randome�����������������
	int input = 0;
	while (1)
	{
		printf("��������µ����֣�");
		scanf("%d", &random_num);
		if (input > random_num)
		{
			printf("���ˣ������²£�\n");
		}
		else if (input < random_num)
		{
			printf("С�ˣ������²�!\n");
		}
		else
		{
			printf("��ϲ��¶��ˣ�\n");
			break;
		}
	}
}


//������
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("�����������������!\n");
			break;
		}
	} while (input);

	system("pause");
	return 0;
}

