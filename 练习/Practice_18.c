//求方程ax^2+bx+c=0的根
//分析：1、方程有根即：△=b^2-4ac>=0;    2、方程无实根:△<0
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{	
	double  a=0, b=0, c=0, x1, x2, f;

	printf("请分别输入a,b,c：");
	scanf("%lf%lf%lf",&a,&b,&c);

	f = b *b- 4*a*c;    //一元二次方程根的判别式

	if (f >= 0)
	{
		x1 = ((-b) + sqrt(f)) / (2.0 * a);   //第一个实根
		x2 = ((-b) - sqrt(f)) / (2.0 * a);  //第二个实根
		printf("方程有实根，分别为：x1=%7.2f\nx2=%7.2f", x1, x2);
	}
		
	
	else
		printf("此方程无实根");
	
	system("pause");
	return 0;
}


//总结：写完本程序后，调试多次未出现错误，但一直未能得到想要的结果，经过F10逐过程调试后才发现，scanf()未正确读取输入的数据，经百度得知：double类型需要用%lf读入：scanf("%lf%lf",&x1,&x2);
