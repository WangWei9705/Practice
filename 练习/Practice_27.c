#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��

//��ʼ������
void init (int  arr [ ],int len)
{

	for (int i = 0; i < len; i++)
	{
		arr[i] = i;
		printf("%d", arr[i]);
	
	}
	


}

//�������
void empty (int arr[ ],int len )
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		arr[i] = 0;
	}
	printf("%d", arr[i]);
}

//�������Ԫ�ص�����
void reverse(int  arr[ ],int len )
{
	int i = 0;
	int left = 0;
	
	int right = len - 1;
	while (left <= right)
	{
		arr[left] = arr[left] ^ arr[right];
		arr[right] = arr[left] ^ arr[right];
		arr[left] = arr[left] ^ arr[right];
		left++;
		right--;
		
	}
	printf("%d", arr[i]);


}
int main()
{	
	int arr[10];
	int arr_len = sizeof(arr) / sizeof(arr[0]);

	printf("�����������ʼ����");
	init(arr[10],arr_len);
	printf("����������飡");
	empty(arr[10],arr_len);
	printf("����������������ò�����");
	reverse(arr[10],arr_len);
	printf("\n");



	system("pause");
	return 0;
}
