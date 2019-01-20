#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
long long c[105][105];
const int mod = 1000000007;
// 问题描述：有X首长度为A的歌和Y首长度为B的歌，现要求组成一个长度为K的新歌单，
//	每首歌只能出现一次，不考虑先后顺寻，问有多少种组合方式；
//	分析：首先需要搞一个二维数组来存放歌曲，再弄一个常量来防止结果过大而溢出；

// 初始化二维数组
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
	// 输入新歌单的长度
	scanf("%d",&k);
	// 输入a,x,b,y具体值
	scanf("%d %d %d %d", &a, &x, &b, &y);

	// 
	for (int i = 0; i <= x; i++)
	{
		// 判断条件
		if (i*a <= k && (k - a*i) % b == 0 && (k - a*i) / b <= y)
		{
			// 输出结果
			ans = (ans + (c[x][i] * c[y][(k - a*i)/b]) % mod) % mod;
		}
	}
	
	printf("%d\n", ans);
	system("pause");
	return 0;
}
