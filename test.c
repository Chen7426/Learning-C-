#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
//int main()
//{
//	char* p = "abcdef";
//	printf("%c\n", *(p+1));//b
//	return 0;
//}
//实现my_strcmp,

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	while (*str1++ == *str2++)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//	}
//	/*if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}*/
//
//	return (*str1 - *str2);
//
//}
//
//int main()
//{
//	char* str1 = "abced";
//	char* str2 = "abcdef";
//	int ret = my_strcmp(str1, str2);
//	if (ret == 0)
//	{
//		printf("str1 = str2");
//	}
//	else if (ret > 0)
//	{
//		printf("str1 > str2");
//	}
//	else
//	{
//		printf("str1 < str2");
//	}
//	return 0;
//}
//strstr使用方法
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "cde";
//	char* ret = strstr(p1, p2);
//	printf("%s\n", ret);
//	return 0;
//}

//int main()
//{
//	const char* p = "abcd";
//	const char* p2 = "cdef";
//	while (*p)
//	{
//		while (*p == *p2)
//		{
//			p++;
//			p2++;
//		}
//		p++;
//	}
//	return 0;
//}

//实现my_strstr

//char* my_strstr(char* p1, char* p2)
//{
//	assert(p1);//断言，防止assert为空指针
//	assert(p2);
//	char* s1;//提前设置一个变量，
//	char* s2;
//	char* cur = p1;
//	if (*p2 == '\0')//判断p2是不是空字符
//	{
//		return p1;
//	}
//	//********************//
//	while (*cur)//判断s1有没有寻找完
//	{
//		s1 = cur;//返回上次相等的地方
//		s2 = p2;
//		while (*s1&&*s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "acdef";
//	char* ret = my_strstr(p1, p2);
//	printf("%s\n", ret);
//	return 0;
//}

//strtok使用案例
//***********************************************//
int main()
{
	char arr1[] = "176064@qq.com";
	char arr2[] = "@.";//定义要分割的符号
	char buf[60] = { 0 };
	strcpy(buf, arr1);//拷贝一份arr1，防止被破坏
		//第一次分割**************
		//char* ret = strtok(buf, arr2);
		//printf("%s\n", ret);
		//第二次分割*************
		//ret = strtok(NULL, arr2);
		//printf("%s\n", ret);
		//第三次分割************
		//ret = strtok(NULL, arr2);
		//printf("%s\n", ret);
	//使用for来实现strtok函****************
	char* ret = NULL;
	for (ret = strtok(buf, arr2); ret != NULL; ret = strtok(NULL, arr2))
	{
		printf("%s\n", ret);
	}
	return 0;
}