//�󷽳�ax^2+bx+c=0�ĸ�
//������1�������и�������=b^2-4ac>=0;    2��������ʵ��:��<0
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{	
	double  a=0, b=0, c=0, x1, x2, f;

	printf("��ֱ�����a,b,c��");
	scanf("%lf%lf%lf",&a,&b,&c);

	f = b *b- 4*a*c;    //һԪ���η��̸����б�ʽ

	if (f >= 0)
	{
		x1 = ((-b) + sqrt(f)) / (2.0 * a);   //��һ��ʵ��
		x2 = ((-b) - sqrt(f)) / (2.0 * a);  //�ڶ���ʵ��
		printf("������ʵ�����ֱ�Ϊ��x1=%7.2f\nx2=%7.2f", x1, x2);
	}
		
	
	else
		printf("�˷�����ʵ��");
	
	system("pause");
	return 0;
}


//�ܽ᣺д�걾����󣬵��Զ��δ���ִ��󣬵�һֱδ�ܵõ���Ҫ�Ľ��������F10����̵��Ժ�ŷ��֣�scanf()δ��ȷ��ȡ��������ݣ����ٶȵ�֪��double������Ҫ��%lf���룺scanf("%lf%lf",&x1,&x2);
