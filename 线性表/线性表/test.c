#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// ���Ӷȷ�Ϊʱ�临�ӶȺͿռ临�Ӷ�
// ʱ�临�Ӷȣ�Ч�� 
// �ռ临�Ӷȣ��ڴ�����

// ��������
int search(int arr[],int size,int value)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == value)
		{
			return i;
		}
		return -1;
	}
}

// ʱ�临�Ӷ�Ϊ��O(N)

// �۰����
int binsearch(int arr[], int size,int value)
{
	int left = 0;
	int right = size - 1;
	int mid = (left + right) / 2;
	while (left <= right)
	{
		if (arr[mid] > value)
		{
			right = mid - 1;
		}
		else if (arr[mid] < value)
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;

}

// ʱ�临�Ӷ�Ϊ��O(logN)��2Ϊ��N�Ķ���

// ð������

void Bubblesort(int arr[], int size, int value)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			int t = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = t;
		}
	}

}

// ʱ�临�Ӷ�O(N^2)




int main()
{	
	system("pause");
	return 0;
}
