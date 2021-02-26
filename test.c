#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void Print(int a)
//{
//	int i = 0;
//	printf("奇数位：\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	Print(a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	a = a + b;//30
//	b = a - b;
//	a = a - b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
//void Print_table(int n)
//{
//	int i = 0;//控制行
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;//控制列
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print_table(n);
//	return 0;
//}

//int main()
//{
//	char a = '!';
//	char b = '@';
//	char temp = a;
//	a = b;
//	b = a;
//	printf("%c %c\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d %d\n", a, b);
//	int temp = a;
//	a = b;
//	b = a;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//void Print(int a)
//{
//	int b = 0;
//	int c = 0;
//	while (a)
//	{
//		//a = a / 10;
//		b = a % 10;
//		printf("%d ", b);
//		a = a / 10;
//		
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	Print(a);
//	return 0;
//}
//int main()
//{
//	char a = '!';
//	char b = '*';
//	char temp = a;
//	/*a = b;
//	b = temp;*/
//	char* pa = &a;
//	char* pb = &b;
//	*pa = b;
//	*pb = a;
//	printf("%c %c\n", *pa,*pb);
//	return 0;
//}
//int dive_add(int a)
//{
//	int b = 0;
//	int c = 0;
//	while (a)
//	{
//		b = a % 10;
//		a = a / 10;
//		c = c + b;
//	}
//	return c;
//}
//
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int sum=dive_add(a);
//	printf("%d\n", sum);
//	return 0;
//}
int Power(int n, int k)
{
	int a = 1;
	int i = 0;
	if (n > 0)
	{
		for (i = 1; i <= k; i++)
		{
			a = a*n;
		}
		return a;
	}
	else
		return 0;
}


int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	int ret = Power(n, k);
	printf("ret = %d\n", ret);
	return 0;
}