#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

// 1、strlen 函数(求字符串长度）的实现 函数原型：size_t strlen(const char* str)；

int mystrlen(const char* str)
{
	// 计数器方式
	int i = 0;
	assert(*str != NULL);       // 使用断言操作进行合法性检验
	
	
	while (*str)
	{
		i++;
		str++;
	}
	return i;

	// 不允许创建临时变量的计数器方式（递归）

	if (*str == '\0')

		return 0;

	else
		return 1 + mystrlen(str + 1);
	


	// 指针-指针的方式
	char* p = str;
	while (*p!='\0')
	{
		p++;
	}
	return p - str;
}

// 2、模拟实现strcpy函数(将后一个字符串的内容拷贝到前一个字符串中），原型：char* strcpy(char* destination,const char* source);

char* mystrcpy(char* dest, const char* src)
{
	assert(dest&&src);
	// 方法一
	char* ret = dest;
	while ((*dest++ = *src++))
	{
		;
	}
	return ret;


	// 方法二
	int i = 0;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return dest;
}

// 模拟实现strcat函数（字符串拼接）,函数原型：char* strcat(char* destination,const char* source);

char* mystrcat(char* dest, const char* src)
{
	// 合法性检验
	assert(dest&&src);

	// 方法一

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
	// 找到dest的结束位置

	int i = 0;
	for (i = 0; dest[i] != '\0'; i++);
	
	// 将src拷贝到dest的结束位置

	int j = 0;
	for (j = 0; src[j] != '\0';i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return dest;
}

// 模拟实现strstr函数(用于判断字符串str2是否是str1的子串)，
// 如果是，则该函数返回str2在str1中首次出现的地址；否则，返回NULL。
// 函数原型：char* strstr(const cahr *,const char *);

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



// 模拟实现strchr函数，原型： char *strchr(const char *str, int c) 在参数 str 所指向的字符串中搜索第一次出现字符 c（一个无符号字符）的位置。

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


// 模拟实现strcmp函数（比较两个字符串的大小），函数原型：int strcmp(const char *str,const char* dst)

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

// 模拟实现memcpy，函数原型：void *memcpy(void *str1, const void *str2, size_t n) 从存储区 str2 复制 n 个字符到存储区 str1


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


// 模拟实现memmove函数，原型： void *memmove(void *str1, const void *str2, size_t n) 从 str2 复制 n 个字符到 str1

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
