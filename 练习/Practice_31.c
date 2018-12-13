#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//数组名作为函数参数

//有一个一维数组score,里面放了10个学生的成绩，求平均值

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
	printf("请输入十个学生的成绩：");
	for (i = 0; i < 10; i++)
	{
		scanf("%f", &score[i]);
	}
	printf("\n");
	aver = average(score);
	printf("这十个学生的平均成绩为:%f\n", aver);


	system("pause");
	return 0;
}
