//������⣺��Ϣ��=����*��1+���������������*�����ʣ������ʣ�������������
//�������⣺����������ܻ���   m=log(p/(p-d*r))/(log(1+r))     
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{	
	//�������

	//double M, r,P,n=5.0;    //P����r������,P��Ϣ��.n�������
	//char s1, s2, s3, s;
	//printf("��������ı���:\n");
	//scanf("%lf", &M);

	//printf("�������:\n");
	//scanf("%lf",&n);

	//printf("���������ʣ�\n");
	//scanf("%lf", &r);

	//P = M * (1 + n*r) ;    //���n���ı�Ϣ��
	//printf("��Ϣ��Ϊ��%f", P);

	/*s1 = "����MԪǮ";
	s2 = "����n��";
	s3 = "��Ϣ��ΪP!";
	s = s1 + s2 + s3;
	printf("%s",s );*/

	//��������
	double d, p, r,m;   //d������   p�»�����   r������   m����
	printf("�������������Ľ��»����ȡ������ʣ�");
	scanf("%lf %lf %lf", &d, &p,&r);

	m = log(p / (p - d*r)) / (log(1 + r));
	printf("��Ҫ%f���ܻ�����", m);




	system("pause");
	return 0;
}
