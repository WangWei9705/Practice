#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//�����ĵݹ���á���ֱ�ӻ��߼�ӵĵ��ú�������

//���磺
//int f(int x)
//{
//	int y, z;
//	z = f(y);
//	return (2 * z);
//}

//�����ѧ������һ�𣬵�����ȵ��ĸ������꣬���ĸ��ȵ����������꣬�������ȵڶ��������꣬�ڶ����ȵ�һ�������꣬��һ��ʮ�ꣻ������ѧ�������䣿

//ʹ�ú����ݹ����ʵ��Ŀ��
int age(int n)
{
	int years_old;
	if (n == 1)
	{
		years_old = 10;
	}
	else
	{
		years_old = age(n - 1) + 2;     //����age��������ʵ�ֺ����ݹ����
	}
	return years_old;

}

int main()
{	
	int n=0;
	printf("��������֪���ڼ���ѧ�������䣺");
	scanf("%d",&n);
	age(n);
	printf("��ѧ��������Ϊ��%d�ꡣ",age(n) );

	system("pause");
	return 0;
}
