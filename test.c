#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//	{
//		int j = 0;
//		
//		for (j = 1; j <=i ; j++)
//		{
//			ret = ret*j;
//		}
//		sum = sum + ret;
//		int ret = 1;
//		
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int  Fact(int a)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <=a; i++)
//	{
//		ret = ret*i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = Fact(a);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//		
//	}
//	return 0;
//}

int main()
{
	
	char arr1[] = "##########";
	char arr2[] = "bit";
	
	strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}