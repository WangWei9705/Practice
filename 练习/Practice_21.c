#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//������Ƕ�׵��ã�����������Ƕ�׶��壩
//����4���������ҳ�������������


//max2���������ҳ�������������
int max2(int a,int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
	
}


//max4����ͨ����ε���max2�����ҳ�4����������
int max4(int a, int b, int c, int d)
{
	max2(a, b);
	int m;
	m = max2(a, b);
	m = max2(m, c);
	m = max2(m, d);
	return m;
}





int main()
{	
	int a, b, c, d, max;

	printf("������4��������");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	max = max4(a, b, c, d);
	printf("�������ǣ�%d\n", max);


	system("pause");
	return 0;
}
