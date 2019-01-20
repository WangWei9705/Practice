#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
long long c[105][105];
const int mod = 1000000007;
// ������������X�׳���ΪA�ĸ��Y�׳���ΪB�ĸ裬��Ҫ�����һ������ΪK���¸赥��
//	ÿ�׸�ֻ�ܳ���һ�Σ��������Ⱥ�˳Ѱ�����ж�������Ϸ�ʽ��
//	������������Ҫ��һ����ά��������Ÿ�������Ūһ����������ֹ�������������

// ��ʼ����ά����
void init()
{
	c[0][0] = 1;
	for (int i = 1; i <= 100; i++)
	{
		c[i][0] = 1;
		for (int j = 1; j <= 100; j++)
		{
			c[i][j] = (c[i - 1][j - 1] + c[i - 1][j]) % mod;
		}
	}
}
int main()
{	
	int k, a, b, x, y;
	long long ans = 0;
	init();
	// �����¸赥�ĳ���
	scanf("%d",&k);
	// ����a,x,b,y����ֵ
	scanf("%d %d %d %d", &a, &x, &b, &y);

	// 
	for (int i = 0; i <= x; i++)
	{
		// �ж�����
		if (i*a <= k && (k - a*i) % b == 0 && (k - a*i) / b <= y)
		{
			// ������
			ans = (ans + (c[x][i] * c[y][(k - a*i)/b]) % mod) % mod;
		}
	}
	
	printf("%d\n", ans);
	system("pause");
	return 0;
}
