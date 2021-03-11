#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>
//int main()
//{
//	int a[2][3] = {1,2,3,4,5};
//	int* p =((a+1));
//	//p = 10;
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//char* reserve(char* str)
//{
//	char* ret = str;
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tem = *left;
//		*left = *right;
//		*right = tem;
//		left++;
//		right--;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	reserve(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	//1.计算i的位数
//	int i = 0;
//	for (i = 1; i <= 10000; i++)
//	{
//		int tem = i;
//		int sum = 0;
//		int n = 1;
//		while (tem /= 10)
//		{
//			n++;
//		}
//	//2.计算i的每位数的n次方之和sum
//		tem = i;
//		while (tem)
//		{
//			sum += (int)pow(tem % 10, n);
//			tem /= 10;
//		}
//	//3.比较i与sum是否相等
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	
//	
//	return 0;
//}
//     *
//    ***
//   *****
//  *******
// *********
//***********
int main()
{
	int i = 0;
	int line = 0;
	scanf("%d", &line);
	//上部分
	for (i = 0; i < line; i++)
	{
		//先打印空格
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j <2*i+1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//下部分
	for (i = 0; i < line - 1; i++)
	{
		//daying 
		int j = 0;
		for (j = 0; j <=i ; j++)
		{
			printf(" ");
		}
		//daying*
		for (j = 0; j <2*(line-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}