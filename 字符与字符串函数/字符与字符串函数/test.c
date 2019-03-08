#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

// 1��strlen ����(���ַ������ȣ���ʵ�� ����ԭ�ͣ�size_t strlen(const char* str)��

int mystrlen(const char* str)
{
	// ��������ʽ
	int i = 0;
	assert(*str != NULL);       // ʹ�ö��Բ������кϷ��Լ���
	
	
	while (*str)
	{
		i++;
		str++;
	}
	return i;

	// ����������ʱ�����ļ�������ʽ���ݹ飩

	if (*str == '\0')

		return 0;

	else
		return 1 + mystrlen(str + 1);
	


	// ָ��-ָ��ķ�ʽ
	char* p = str;
	while (*p!='\0')
	{
		p++;
	}
	return p - str;
}

// 2��ģ��ʵ��strcpy����(����һ���ַ��������ݿ�����ǰһ���ַ����У���ԭ�ͣ�char* strcpy(char* destination,const char* source);

char* mystrcpy(char* dest, const char* src)
{
	assert(dest&&src);
	// ����һ
	char* ret = dest;
	while ((*dest++ = *src++))
	{
		;
	}
	return ret;


	// ������
	int i = 0;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return dest;
}

// ģ��ʵ��strcat�������ַ���ƴ�ӣ�,����ԭ�ͣ�char* strcat(char* destination,const char* source);

char* mystrcat(char* dest, const char* src)
{
	// �Ϸ��Լ���
	assert(dest&&src);

	// ����һ

	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
	// �ҵ�dest�Ľ���λ��

	int i = 0;
	for (i = 0; dest[i] != '\0'; i++);
	
	// ��src������dest�Ľ���λ��

	int j = 0;
	for (j = 0; src[j] != '\0';i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return dest;
}

// ģ��ʵ��strstr����(�����ж��ַ���str2�Ƿ���str1���Ӵ�)��
// ����ǣ���ú�������str2��str1���״γ��ֵĵ�ַ�����򣬷���NULL��
// ����ԭ�ͣ�char* strstr(const cahr *,const char *);

char* my_strstr(const char *str1, const char *str2)
{
	char *cp = (char* )str1;
	char *substr = (char *)str2;
	
	assert(str1&&str2);
	char *s1 = NULL;
	
	if (*str2 == '\0')
	{
		return NULL;
	}
	while (*cp)
	{
		s1 = cp;
		substr = str2;
		while (*s1 && *substr && (*s1 == *substr))
		{
			s1++;
			substr++;
		}
		if (*substr == '\0')
			return cp;
		cp++;
	}
}



// ģ��ʵ��strchr������ԭ�ͣ� char *strchr(const char *str, int c) �ڲ��� str ��ָ����ַ�����������һ�γ����ַ� c��һ���޷����ַ�����λ�á�

char *my_strchr(const char *str, int c)
{
	assert(str);
	while (*str && (*str != (char)c))
	{
		str++;
		if ((char)c == *str)
		{
			return (char*)str;
		}
		
		return NULL;
	}

}


// ģ��ʵ��strcmp�������Ƚ������ַ����Ĵ�С��������ԭ�ͣ�int strcmp(const char *str,const char* dst)

int my_strcmp(const char *str1, const char  *str2)
{
	
	assert(str1&&str2);

	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		
	}
	return *str1 - *str2;
}

// ģ��ʵ��memcpy������ԭ�ͣ�void *memcpy(void *str1, const void *str2, size_t n) �Ӵ洢�� str2 ���� n ���ַ����洢�� str1


void* my_memcpy(void* dest, void* src, size_t n)
{
	void* ret = dest;
	char* str1 = (char*)dest;
	char* str2 = (char*)src;
	assert(dest);
	assert(src);
	while (n--)
	{
		*str1++ = *str2++;
	}
	return ret;


}


// ģ��ʵ��memmove������ԭ�ͣ� void *memmove(void *str1, const void *str2, size_t n) �� str2 ���� n ���ַ��� str1

void *my_memmove(void *str1, const *str2, size_t n)
{
	void *ret = str1;

	assert(str1&&str2);
	if (str1 <= str2 || ((char *)str1 >= (char *)str2+n))
	{
		while (n--)
		{
			*(char *)str1 = *(char *)str2;
			str1 = (char *)str1 + 1;
			str2 = (char *)str2 + 1;
		}
	}
	else
	{
		str1 = (char *)str1 + n - 1;
		str2 = (char *)str2 + n - 1;
		while (n--)
		{
			*(char *)str1 = *(char *)str2;
			str1 = (char *)str1 - 1;
			str2 = (char *)str2 - 1;

		}
	}

	return(ret);

}

int main()
{	
	int i = 0;
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 0 };
	int arr3[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	my_memcpy(arr2, arr1, sizeof(arr1));
	my_memmove(arr3 + 5, arr3 + 4, 3 * sizeof(int));
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr3[i]);
	}
	printf("\n");

	//printf("%d\n", my_strcmp(str1, str2));
	/*char *str = "hello bit ke ji";
	
	printf("%s\n", my_strchr(str,' j'));
*/
	
	/*char *str1 = "WHEN YOU HERE PEOPLE SING";
	char *str2 = "PEOPLE";
	char *pl;



	printf("%s\n", my_strstr(str1, str2));*/

	/*printf("%s\n", mystrcat(str1, str2));

	printf("%s\n", mystrcpy(str1, str2));
	
	printf("%d\n", mystrlen(str1));
	*/
	system("pause");
	return 0;
}
