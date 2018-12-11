#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//汉诺塔问题
//问题描述：某寺庙有三座塔（A，B，C ) ,A上放有64个盘子（从小到大），
//现在需要将A上的盘子借助B搬到C上（顺序不变）

void  move(char x, char y)
//该函数用来打印移动步骤
{
	printf("%c—>%c\n", x, y);
}

void Tower(int n, char A, char B,char C)

{
	void move( x , y) ;
	if (n == 1)           //如果只需要移动一个盘子，直接将盘子从A移动到C
	{
		move(A, C);
	}
	else
	{  
		//Tower函数的递归调用
		Tower(n - 1, A, C, B);      //先将A上的n-1个盘子借助C移动到B
		move(A, C);                   //将A上剩下的一个直接移动到C
		Tower(n - 1, B, A, C);     //再将B上的n-1个盘子借助A移动到C
	}

}

int main()
{	
	int num;
	printf("请输入需要移动的盘子数：");
	scanf("%d", &num);

	printf("移动%d个盘子的步骤为：", num);
	Tower(num, 'A',' B',' C');             //调用Tower函数
	
	system("pause");
	return 0;
}
