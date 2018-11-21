//存款问题：本息和=本金*（1+存款年数（月数）*年利率（月利率）），贷款问题
//贷款问题：计算多少月能还清   m=log(p/(p-d*r))/(log(1+r))     
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{	
	//存款问题

	//double M, r,P,n=5.0;    //P本金，r年利率,P本息和.n存款年数
	//char s1, s2, s3, s;
	//printf("请输入你的本金:\n");
	//scanf("%lf", &M);

	//printf("存款年数:\n");
	//scanf("%lf",&n);

	//printf("银行年利率：\n");
	//scanf("%lf", &r);

	//P = M * (1 + n*r) ;    //存款n年后的本息和
	//printf("本息和为：%f", P);

	/*s1 = "您有M元钱";
	s2 = "存了n年";
	s3 = "本息和为P!";
	s = s1 + s2 + s3;
	printf("%s",s );*/

	//贷款问题
	double d, p, r,m;   //d贷款金额   p月还款额度   r月利率   m月数
	printf("请输入你想贷款的金额、月还款额度、月利率：");
	scanf("%lf %lf %lf", &d, &p,&r);

	m = log(p / (p - d*r)) / (log(1 + r));
	printf("需要%f月能还清贷款！", m);




	system("pause");
	return 0;
}
