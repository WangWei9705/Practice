#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//��������Ϊ����ʵ��

//�������༶���ֱ���35����30 ��ѧ��������һ��average�������ֱ������������ѧ����ƽ���ɼ�

float average(float arr[], int n)

{
	int i = 0;
	float sum, aver;
	for (i = 1; i < n; i++)
	{
		sum = sum + arr[i];
	}
	aver = sum / n;
	return (aver);

	
}

//������ 
int main()
{	

	float A[35], B[30];
	int i = 0;
	printf("������A��35��ѧ���ĳɼ���");
	for (i = 0; i < 35; i++)
	{
		scanf("%f", &A[i]);
	}
	printf("\n");

	printf("A���ѧ����ƽ���ɼ�Ϊ��%\f \n", average(A, 35));


	printf("������B��30��ѧ���ĳɼ���");
	for (i = 0; i < 30; i++)
	{
		scanf("%f", &B[i]);
	}
	printf("\n");

	printf("B���ѧ����ƽ���ɼ�Ϊ��%f \n", average(B, 30));

	
	system("pause");
	return 0;
}
