#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int Fib(int x)
//{
//	return x < 2 ? x: Fib(x - 1) + Fib(x - 2);
//}
//
//
//int main()
//{
//	printf("%d\n", Fib(20));
//	return 0;
//}
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}


int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}