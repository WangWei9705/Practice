#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//��ŵ������
//����������ĳ��������������A��B��C ) ,A�Ϸ���64�����ӣ���С���󣩣�
//������Ҫ��A�ϵ����ӽ���B�ᵽC�ϣ�˳�򲻱䣩

void  move(char x, char y)
//�ú���������ӡ�ƶ�����
{
	printf("%c��>%c\n", x, y);
}

void Tower(int n, char A, char B,char C)

{
	void move( x , y) ;
	if (n == 1)           //���ֻ��Ҫ�ƶ�һ�����ӣ�ֱ�ӽ����Ӵ�A�ƶ���C
	{
		move(A, C);
	}
	else
	{  
		//Tower�����ĵݹ����
		Tower(n - 1, A, C, B);      //�Ƚ�A�ϵ�n-1�����ӽ���C�ƶ���B
		move(A, C);                   //��A��ʣ�µ�һ��ֱ���ƶ���C
		Tower(n - 1, B, A, C);     //�ٽ�B�ϵ�n-1�����ӽ���A�ƶ���C
	}

}

int main()
{	
	int num;
	printf("��������Ҫ�ƶ�����������");
	scanf("%d", &num);

	printf("�ƶ�%d�����ӵĲ���Ϊ��", num);
	Tower(num, 'A',' B',' C');             //����Tower����
	
	system("pause");
	return 0;
}
