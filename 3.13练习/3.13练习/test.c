#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// ����ˮ��һƿ��ˮ1Ԫ��������ƿ��һƿ���ʣ�20Ԫ�ܺȶ���ƿ��ˮ.

int DrinkWater(int money)
{
	int sum = 0;
	sum = money * 2-1;
	return sum;
}

void test1()
{
	int money = 0;

	printf("��������Ҫ����ˮ��Ǯ��");
	scanf("%d", &money);
	printf("����Ժȵ�%dƿ��ˮ��\n", DrinkWater(money));
}

// һ��������ֻ�����������ǳ���һ�Σ� 
// �����������ֶ����������Ρ�
// �ҳ����������֣����ʵ�֡�
// ˼·���Ƚ��������������ӡ��Ȼ����arr[i]��arr[i+1]���бȽϣ�ֱ���ҳ�����������


// ��һ��������
void sort_arr(int arr[], int size)
{
	int i = 0;
	int j = 0;
	for (j = 0; j < size - 1; j++)
	{
		for (i = 0; i < size - j - 1; i++)
		{
			if (arr[i]>arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
		

	}
}

	
// �ڶ������Ҳ�ͬ
void FindNum(int arr[], int size,int *num1,int *num2)
{
	int temp = 0;
	int i = 0;
	for (i = 0; i < size; i += 2)
	{
		if (arr[i] == arr[i + 1])
		{
			continue;
		}
		else
		{

			// �ҵ���һ������
			if (temp == 0)
			{
				*num1 = arr[i];
				i = i + 1;
			}

			// �ҵ��ڶ�������
			else if (temp == 1)
			{
				*num2 = arr[i];
				i = i + 1;

			}
		}temp++;
	}
	
}


void test2()
{
	int arr[] = {1,2,3,2,3,4,6,5,6,5};

	int size = sizeof(arr) / sizeof(arr[0]);

	int i = 0;
	sort_arr(arr,size);
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	int num1, num2;
	FindNum(arr, size, &num1, &num2);
	printf("��һ������Ϊ��%d���ڶ�������Ϊ��%d\n", num1,num2);
}



int main()
{	
	test1();
	test2();

	system("pause");
	return 0;
}
