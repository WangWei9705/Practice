#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// ��ӡ������
void decToBin(int num, int base)
{
	if (num>0)
	{
		decToBin(num / base, base);
		printf("%d", num%base);
	}
}

void test1()
{
	int decimalNum;
	int base = 2;
	printf("Enter number in decimal:");
	scanf("%d", &decimalNum);
	printf("\n");
	printf("Decimal%d:", decimalNum);
	decToBin(decimalNum, base);
	printf("(binary)\n");
}

void test2()
{
	int a = 0;
	printf("������һ��������");
	scanf("%d", &a);
	if (1 <= a <= 10)
	{
		printf("In range\n");
	}
	else
	{
		printf("Out of range\n");
	}
}

void test3()
{
	// ��д����ʵ�ִ�д��ĸתСд��ĸ
	// ����һ�����ÿ⺯��tolower
	/*int ch;
	while ((ch = getchar()) != EOF)
	{
	putchar(tolower(ch));
	}*/
	// ��������ʹ��ASINC��
	int ch;
	while ((ch = getchar()) != EOF)
	{
		if ('A' <= ch&&ch <= 'Z')
		{
			ch += 'a' - 'A';
		}
		putchar(ch);

	}
}

unsigned int reverse_bits(unsigned int value)
{
	unsigned int i;
	unsigned int ret = 0;
	for (i = 1; i != 0; i <<= 1)
	{
		ret <<= 1;
		if (value&i)
		{
			value | i;
		}
		ret >>= 1;
	}
}
int main()
{
	printf("%d\n",reverse_bits(25));
	 
	system("pause");
	return 0;
}

