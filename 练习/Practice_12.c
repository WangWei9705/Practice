#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//��һ��3*4�ľ��������е����Ԫ��,�Լ����������У�
int main()
{	
	int i, j, max, H = 0, L = 0;                //H��>�У�L��>��
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
