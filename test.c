#include <stdio.h>
//int main()
//{
//	char a = -128;//�˴�128��-128��һ������Ϊ��char���������Դ���127����127+1����-128��
//	printf("%u\n", a);
//	return 0;
//}
//int main()
//{
//	int a = -20;
//	unsigned int b = 10;
//	printf("%d\n", a + b);
//	return 0;
//}
//#include<windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d\n", i);
//		Sleep(100);
//	}
//	return 0;
//}
//int main()
//{
//	char a[10] = "1234567891";
//	printf("%d\n", strlen(a));
//	return 0;
//}
//int main()
//{
//	unsigned char a = 0;
//	for (a = 0; a <= 255; a++)
//	{
//		printf("hello world !\n");
//
//	}
//	return 0;
//}

int main()
{
	float a = 2.5;
	float* p = &a;
	printf("%p\n", p);
	return 0;
}