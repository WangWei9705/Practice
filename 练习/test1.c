#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//	һ����ʶ��ָ��Ҳ��һ���������ͣ�һ��ռ�ĸ��ֽ�
// ������ָ��ʱ��typedef��#defineҪ��һЩ
int main()
{
	int* p;             // ��ָͨ�룬ָ������
	int const* p;   //	ָ�����ͳ�����ָ�룬�����޸�ָ���ֵ�����޷��޸�ָ����ָ���ֵ
	int* const p;
	int const* const p;

	system("pause");
	return 0;
}
