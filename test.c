#define _CRT_SECURE_NO_WARNINGS 1

//找出比赛排名

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 3) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1) 
//							)
//						{
//							if (a*b*c*d*e == 120)
//							{
//								printf("a= %d b= %d c= %d d= %d e= %d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//
//}
//#include <math.h>
//int main()
//{
//	int a = 2;
//	int b  = pow(a, 3);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int* a = 1;
//	printf("%d\n", *a);
//	return 0;
//}

//int main()
//{
//	char* arr[] = { "hello", "world" };
//	char*(*p)[2] = &arr;
//	printf("%s\n", *arr);
//	return 0;
//}

//实现字符串旋转
//#include <string.h>
//#include <assert.h>
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	char* left = arr;
//	char* right = arr + len;
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	int len = strlen(arr);
//	scanf("%d", &k);
//	if (k <= len &&k >= 0)
//	{
//		left_move(arr, k);
//		printf("%s\n", arr);
//	}
//
//	else
//		printf("输入数字错误，请重新输入\n");
//	return 0;
//}

//检查一个字符串是否是另外一个字符串自旋得到的
#include <stdio.h>
#include <assert.h>
#include <string.h>

int is_left_move(char* arr, char* str)
{
	assert(arr);
	assert(str);
	int len1 = strlen(arr);
	int len2 = strlen(str);
	if (len2 != len1)
	{
		return 0;
	}
	strncat(arr, arr, len1);
	char* ret = strstr(arr, str);
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefa";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
	{
		printf("Yes!\n");
	}
	else
	{
		printf("No!\n");
	}
	return 0;
}