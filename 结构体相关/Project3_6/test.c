#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// 联合体（共用体）共用同一块内存空间

// 联合体声明
union MyUnion
{
	char A;
	int B;
}un;    // 联合体变量定义

// 计算联合变量大小
// printf("%d\n", sizeof(un));


// 联合体的应用————判断计算机的大小端存储
int checkcpu()
{
	union Un1
	{
		int a;
		int b;

	}u;

	u.a = 0x11223344;

	if (u.a = 0x11)
	{
		return 0;
	}
	else
		return 1;


	return 0;

}


// 枚举可一次性定义多个常量，和int等价，{}中的枚举常量默认从0开始取值，每次递增1，可自己赋值
enum Sex
{
	MALE,
	FAMALE,
	SECRET
};

enum Sex sex = MALE;


// 结构体：一些值的集合
struct stu          // 此处的stu为结构体标签
{
	char name[20];     
	int age;
	char sex[5];
	char id[20];
};


// 结构体变量定义
struct point
{
	int x;
	int y;
}p1;        // 声明类型的同时定义变量p1

struct point p2 = {1,2};  // 定义结构体变量p2,同时赋值



// 结构体字节数计算，此处需要考虑内存对齐（结构体中最重要的知识点），对齐数可修改
struct Data1
{
	int A;
	char B;
	float C;
}a;

// A 四个字节；B一个字节；C一个字节         sizeof(a)=2*4=8

struct Data2
{
	
	char B;
	int A;
	double C;
}b;

// B一个字节；A四个字节，C八个字节；        sizeof(b)=4*4=16

struct Data3
{
	char C;
	int A;
	char B;
	
}c;

//  C 一个字节，A四个字节，B一个字节        sizeof(c）=3*4=12


// 结构体嵌套问题
struct Data4
{
	char A;
	struct Data3 data3;
	double C;

}d;

// A一个字节 data3 12字节  C 8字节  ，总共4*6=24字节 

#pragma pack( )       // 修改默认对齐数


// 结构体传参

struct S
{
	int data[1024];
	int num;
};

struct S s = { { 1, 2, 3, 4 }, 1024 };

// 结构体传参

void print1(struct S s)
{
	printf("%d\n", s.num);
}

// 结构体地址传参(两种得出结果虽然相同，但地址传参更好一些）

void print2(struct S* ps)
{
	printf("%d\n", ps->num);
}
int main()
{


	if (checkcpu() == 1)
		printf("这是小端\n");
	else
		printf("这是大端\n");


	print1(s);
	print2(&s);

	// 计算联合变量大小
	printf("%d\n", sizeof(un));

	printf("%d\n", sizeof(d));


	// 插播一个关于逗号表达式的例子
	//int x; 
	//int y;
	//y = ((x = 4 * 5, x * 5), x + 25);     // 逗号表达式至为逗号右边表达式的值，此处先算出x=20,然后计算x*2=100;
	// 但最终值为x+25=20+5=45;
	//printf("%d\n", y);

	system("pause");
	return 0;
}
