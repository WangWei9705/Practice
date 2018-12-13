#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//数组名作为函数实参

//有两个班级，分别有35名和30 名学生，调用一个average函数，分别求这两个班的学生的平均成绩

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

//主函数 
int main()
{	

	float A[35], B[30];
	int i = 0;
	printf("请输入A班35个学生的成绩：");
	for (i = 0; i < 35; i++)
	{
		scanf("%f", &A[i]);
	}
	printf("\n");

	printf("A班的学生的平均成绩为：%\f \n", average(A, 35));


	printf("请输入B班30名学生的成绩：");
	for (i = 0; i < 30; i++)
	{
		scanf("%f", &B[i]);
	}
	printf("\n");

	printf("B班的学生的平均成绩为：%f \n", average(B, 30));

	
	system("pause");
	return 0;
}
