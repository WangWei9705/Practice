#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//2.д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�

//���Һ���
int bin_search(int arr[ ], int left, int right,int find_num)

{
	int mid;
	while(left <= right)
	{
		mid = (left + right) / 2;
		if (find_num > mid)
		{
			left = mid + 1;

		}
		else if (find_num < mid)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±�Ϊ%d", mid);
			return mid;                   //�ҵ��ˣ�
			break;
		}
		while (left > right)
		{
			printf("�Ҳ�����");
			return -1;             //�Ҳ���

		}
	
	}
	
}


//������
int main()
{	
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int left = 0, mid = 0, find_num ;

	int right = sizeof(arr) / sizeof(arr[0]);


	printf("����������Ҫ���ҵ����֣�");
	scanf("%d", &find_num);

	bin_search(arr[10], left, right, find_num);

	printf("\n");


	system("pause");
	return 0;
}
