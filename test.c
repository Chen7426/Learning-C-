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
//ʵ��my_strcmp,

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
//strstrʹ�÷���
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

//ʵ��my_strstr

//char* my_strstr(char* p1, char* p2)
//{
//	assert(p1);//���ԣ���ֹassertΪ��ָ��
//	assert(p2);
//	char* s1;//��ǰ����һ��������
//	char* s2;
//	char* cur = p1;
//	if (*p2 == '\0')//�ж�p2�ǲ��ǿ��ַ�
//	{
//		return p1;
//	}
//	//********************//
//	while (*cur)//�ж�s1��û��Ѱ����
//	{
//		s1 = cur;//�����ϴ���ȵĵط�
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

//strtokʹ�ð���
//***********************************************//
int main()
{
	char arr1[] = "176064@qq.com";
	char arr2[] = "@.";//����Ҫ�ָ�ķ���
	char buf[60] = { 0 };
	strcpy(buf, arr1);//����һ��arr1����ֹ���ƻ�
		//��һ�ηָ�**************
		//char* ret = strtok(buf, arr2);
		//printf("%s\n", ret);
		//�ڶ��ηָ�*************
		//ret = strtok(NULL, arr2);
		//printf("%s\n", ret);
		//�����ηָ�************
		//ret = strtok(NULL, arr2);
		//printf("%s\n", ret);
	//ʹ��for��ʵ��strtok��****************
	char* ret = NULL;
	for (ret = strtok(buf, arr2); ret != NULL; ret = strtok(NULL, arr2))
	{
		printf("%s\n", ret);
	}
	return 0;
}