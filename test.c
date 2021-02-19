#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//右移操作符>>移动的是二进制
//int main()
//{
//	int a = 7;
//	//int b = a >> 1;
//	//int b = a >> 2;
//	//int b = a >> 3;
//	int b = a >> 4;
//	printf("b = %d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = a << 1;
//	//
//	printf("%d\n", b);
//	return 0;
//}

//int main()        
//{
//	int a = 3;
//	int b = 5;
//	a = a + b;//8
//	b = a - b;//8-5为原来的a
//	a = a - b;//8-3,为原来的b
//	printf("a = %d , b= %d\n", a, b);
//	return 0;
//
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a = %d b = %d\n",a, b);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num=num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((num & 1) == 1)
//			count++;
//		num = num >> i;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	printf("hello world !");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = a + 1;
//	printf("%d\n", a);
//	a += 1;
//	printf("%d\n", a);
//
//	return 0;
//}

int main()
{
	int a = 10;
	a =+1;
	printf("%d\n", a);
	return 0;
}