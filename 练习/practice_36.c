#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// ����ָ�������ʹ�á���ת�Ʊ�

// ������

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;

}
int Mul(int x,int y)
{
	return x*y;
}
int Div(int x, int y)
{
	return x / y;
}

int menu()
{
	printf("������������������������������������������������\n");
	printf("0����������\n");
	printf("1��add\n");
	printf("2��sub\n");
	printf("3��mul\n");
	printf("4��div\n");
	printf("������������������������������������������������\n");
	
	int choice = 0;
	printf("����������ѡ��");
	scanf("%d", &choice);
	return choice;
}
int main()
{
	int x;
	int y;
	printf("�������������");
	scanf("%d %d", &x, &y);

	int ret;

	// ���淽������Ȼ�ܹ�ʵ�֣����ǱȽ��鷳
	//while (1)
	//{
	//
	//	int choice = menu();

	//	if (choice == 1)
	//	{
	//		ret = Add(x, y);
	//	}
	//	else if (choice == 2)
	//	{
	//		ret = Sub(x, y);
	//	}
	//	else if (choice == 3)
	//	{
	//		ret = Mul(x, y);
	//	}
	//	else if (choice == 4)
	//	{
	//		ret = Div(x, y);
	//	}
	//	else if (choice == 0)
	//	{
	//		printf("���������\n");
	//		break;
	//	}
	//	else 
	//	{
	//		printf("����������������룡\n");
	//		continue;
	//	}
	//	printf("��������������ֵΪ��%d\n", ret);
	//}
	//

	// ��������ʹ��ת�Ʊ�

	int(*p[5])(int x, int y) = { 0, Add, Sub, Mul, Div };          // ת�Ʊ�

	while (1)
	{
		int choice = menu();
		if (choice <= 4 && choice >= 1)
		{
			ret = (*p[choice])(x, y);
		}
		else if (choice == 0)
		{
			printf("�������!");
			break;
		}
		else
		{
			printf("�����������������\n");
			continue;
		}
		printf("���������������ֵΪ��%d\n", ret);
	}


	system("pause");
	return 0;
}
