#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// ��̬�ڴ����
int main()
{	

	// �ڴ�����ʹ��realloc,����ԭ�ͣ�void* relloc(void* ptr,size_t size);����>ptr��Ҫ�������ڴ��ַ��sizeΪ����֮�����size

	int* p1 = malloc(1024);
	if (p != NULL)
	{
		// ʹ���ڴ�
	}
	else
	{
		exit(EXIT_FAILURE);
	}
	
	// �����ڴ治�㣬��ʱ��Ҫ����
	int* p2 = NULL;
	p2 = realloc(p1, 1024);

	if (p2 != NULL)
	{
		p1 = p2;
	}
	// �ڴ�ʹ��
	free(p1);


	//// ����һ����̬�ڴ濪�ٺ�����calloc,����ԭ�ͣ� void* calloc(size_t,size_t size)

	//int* p = calloc(10, sizeof(int));
	//if (p != NULL)
	//{
	//	// ʹ�ÿռ�
	//	
	//}

	//free(p);    // ����֮��һ��Ҫ�ǵ��ͷţ�����
	//p = NULL;




	//// �ڴ濪�� ʹ��malloc����������ԭ�ͣ�void* malloc(size_t size);
	//int num = 0;
	//scanf("%d", &num);
	//
	//int* p = NULL;
	//p = (int*)malloc(num*sizeof(int));
	//if (p != NULL)			// �ж�ָ��p�Ƿ�Ϊ��
	//{
	//	int i = 0;
	//	for (i = 0; i < num; i++)
	//	{
	//		*(p + i) = 0;	// ��ÿ�����ٵĿռ��ʼ��Ϊ0
	//	}
	//}

	//// ������ɺ�һ��Ҫ�ǵ��ͷţ�����ᵼ���ڴ�й©������ڷ�����������˵������
	//// �ڴ��ͷź�����free ����ԭ�ͣ� void free(void*ptr);
	//free(p);
	//p = NULL;


	system("pause");
	return 0;
}
