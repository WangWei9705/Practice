#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// �����壨�����壩����ͬһ���ڴ�ռ�

// ����������
union MyUnion
{
	char A;
	int B;
}un;    // �������������

// �������ϱ�����С
// printf("%d\n", sizeof(un));


// �������Ӧ�á��������жϼ�����Ĵ�С�˴洢
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


// ö�ٿ�һ���Զ�������������int�ȼۣ�{}�е�ö�ٳ���Ĭ�ϴ�0��ʼȡֵ��ÿ�ε���1�����Լ���ֵ
enum Sex
{
	MALE,
	FAMALE,
	SECRET
};

enum Sex sex = MALE;


// �ṹ�壺һЩֵ�ļ���
struct stu          // �˴���stuΪ�ṹ���ǩ
{
	char name[20];     
	int age;
	char sex[5];
	char id[20];
};


// �ṹ���������
struct point
{
	int x;
	int y;
}p1;        // �������͵�ͬʱ�������p1

struct point p2 = {1,2};  // ����ṹ�����p2,ͬʱ��ֵ



// �ṹ���ֽ������㣬�˴���Ҫ�����ڴ���루�ṹ��������Ҫ��֪ʶ�㣩�����������޸�
struct Data1
{
	int A;
	char B;
	float C;
}a;

// A �ĸ��ֽڣ�Bһ���ֽڣ�Cһ���ֽ�         sizeof(a)=2*4=8

struct Data2
{
	
	char B;
	int A;
	double C;
}b;

// Bһ���ֽڣ�A�ĸ��ֽڣ�C�˸��ֽڣ�        sizeof(b)=4*4=16

struct Data3
{
	char C;
	int A;
	char B;
	
}c;

//  C һ���ֽڣ�A�ĸ��ֽڣ�Bһ���ֽ�        sizeof(c��=3*4=12


// �ṹ��Ƕ������
struct Data4
{
	char A;
	struct Data3 data3;
	double C;

}d;

// Aһ���ֽ� data3 12�ֽ�  C 8�ֽ�  ���ܹ�4*6=24�ֽ� 

#pragma pack( )       // �޸�Ĭ�϶�����


// �ṹ�崫��

struct S
{
	int data[1024];
	int num;
};

struct S s = { { 1, 2, 3, 4 }, 1024 };

// �ṹ�崫��

void print1(struct S s)
{
	printf("%d\n", s.num);
}

// �ṹ���ַ����(���ֵó������Ȼ��ͬ������ַ���θ���һЩ��

void print2(struct S* ps)
{
	printf("%d\n", ps->num);
}
int main()
{


	if (checkcpu() == 1)
		printf("����С��\n");
	else
		printf("���Ǵ��\n");


	print1(s);
	print2(&s);

	// �������ϱ�����С
	printf("%d\n", sizeof(un));

	printf("%d\n", sizeof(d));


	// �岥һ�����ڶ��ű��ʽ������
	//int x; 
	//int y;
	//y = ((x = 4 * 5, x * 5), x + 25);     // ���ű��ʽ��Ϊ�����ұ߱��ʽ��ֵ���˴������x=20,Ȼ�����x*2=100;
	// ������ֵΪx+25=20+5=45;
	//printf("%d\n", y);

	system("pause");
	return 0;
}
