#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//有一个3*4的矩阵，求其中的最大元素,以及其所在行列；
int main()
{	
	int i, j, max, H = 0, L = 0;                //H—>行，L—>列
	int a[3][4] = { { 1, 2, 3, 4 }, { -4, 5, 6, 7 }, { 11, 8, 9, 10 } };

	max = a[0][0];

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			
			if (a[i][j] > max)
			{
				max = a[i][j];
				H = i;
				L = j;

			}
		}	
	}

	printf("max = %d \n,H = %d \n, L = %d \n", max, H, L);

	system("pause");
	return 0;
}
