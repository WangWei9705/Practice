//getchar()��putchar()��ʹ��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	//����getchar()putchar()���롢����ַ�
	/*
	char a, b, c;
	a = getchar();
	b = getchar();
	c = getchar();

	putchar(a);
	putchar(b);
	putchar(c);

	printf("\n");
	*/

	//�򻯺�
	/*
	putchar(getchar());
	putchar(getchar());
	putchar(getchar());
	putchar('\n'[);
	*/

	//��Сд��ĸת��:����ASCII�룬A=65    a=97
	//��д-->Сд    A+32=a
	//Сд-->��д  a-32=A

	char c1, c2 = 0;
	printf("������һ����ĸ��");

flag:
	c1 = getchar();
	/*printf("%c\n", c1);*/

	if (c1 >= 65 && c1<=90)
	{
		c2 = c1 + 32;
		printf("���������һ����д��ĸ������Сд��ĸ����Ӧ��ASCIIֵΪ��%d \n", c2);
	}
		
	else if (c1>=97 && c1 <=122 )
	{
		c2 = c1 - 32;
		printf("���������һ��Сд��ĸ�����Ĵ�дд��ĸ����Ӧ��ASCIIֵΪ��%d\n", c2);
		

	}
	else
	{
		printf("������Ĳ�����ĸ�����������룺");
		goto flag;
	}
		

	system("pause");
	return 0;
}
