#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//��������Ϊ����������ϰ
//��ѡ�񷨶�������ʮ���������д�С��������

//ѡ�񷨣��Ƚ�ʮ����������С��������a[0]���н������ٽ�a[1]~a[9]����С������a[1]������ÿ�Ƚ�һ�֣��ҳ�δ����������С������

void sort(int arr[], int n)
{
	int i, j, k, t;
	for (i = 0; i < n-1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[k])
			{
				k = j;
			}

			t = arr[k];
			arr[k] = arr[j];
			arr[j] = t;
		}
	}

	
}


int main()
{
	int arr[10];
	int i;
	printf("������ʮ��������");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\n");

	sort(arr, 10);

	printf("���մ�С��������������Ϊ��");

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
