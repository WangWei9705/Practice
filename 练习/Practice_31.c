#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//��������Ϊ��������

//��һ��һά����score,�������10��ѧ���ĳɼ�����ƽ��ֵ

float average(float arr[10])
{
	int i;
	float aver, sum = arr[0];
	for (i = 1; i < 10; i++)
	{
		sum = sum + arr[i];
	}
	aver = sum / 10;
	return (aver);
}
int main()
{	

	float score[10], aver;
	int i;
	printf("������ʮ��ѧ���ĳɼ���");
	for (i = 0; i < 10; i++)
	{
		scanf("%f", &score[i]);
	}
	printf("\n");
	aver = average(score);
	printf("��ʮ��ѧ����ƽ���ɼ�Ϊ:%f\n", aver);


	system("pause");
	return 0;
}
