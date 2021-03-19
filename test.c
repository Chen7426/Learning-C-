#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int* p = malloc(900000000000);
//	printf("%s\n", strerror(errno));
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	return 0;
//}

//int main()
//{
//	int a[5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i;
//		for (i = 0; i < 5; i++)
//		{
//			printf("%d ",*p ++ = i);
//		}
//		printf("\n");
//	}
//	free(p);
//	p == NULL;
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		malloc(2);
//		//printf("1\n");
//	}
//	return 0;
//}

//*************************************************************
//实现利用函数开辟空间
//void get(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void test(void)
//{
//	char* str = NULL;
//	get(str);
//	strcpy(str, "hello");
//	printf(str);
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//
//*************************************************************
////改正结果1
//void get(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void test(void)
//{
//	char* str = NULL;
//	get(&str);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//*************************************************************
//改正2
//#include <string.h>
//char* get(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void test(void)
//{
//	char* str = NULL;
//	str =  get(str);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//*************************************************************

//char* get()
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void test(void)
//{
//	char* str = NULL;
//	str = get();
//	printf(str);
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//*************************************************************

//int main()
//{
//	int* p = 0;
//	*p = 20;
//	printf("%d\n", *p);
//	return 0;
//}

struct S
{
	char a;
	int* arr;//柔性数组
};

int main()
{
	struct S s;
	printf("%d\n", sizeof(s));
	return 0;
}