#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>



//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
int main()
{
	char Letter, c;

	printf("������һ����ĸ��");
	scanf("%s", &Letter);
	if (Letter >= 65 && Letter <= 90)
	{
		c = Letter + 32;
		printf("���������һ����д��ĸ������Ӧ��Сд��ĸΪ��%c\n", c);
	}
	else if (Letter >= 97 && Letter <= 122)
	{
		c = Letter - 32;
		printf("���������һ��Сд��ĸ������Ӧ�Ĵ�д��ĸΪ��%sc\n", c);

	}

	else
	{
		printf("������Ĳ�����ĸ��");
	}
	  


	system("pause");
	return 0;
}
