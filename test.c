#include <stdio.h>
//int main()
//{
//	short a = 0;
//	int b = 10;
//	printf("%d\n", sizeof(a = b + 5));
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	//Ô­Âë 00000000000000000000000000000000
//	//·´Âë 01111111111111111111111111111111
//	//²¹Âë 10000000000000000000000000000000
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);//11
//	printf("%d\n", a++);//10
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//
//}
//int main()
//{
//	int a = 0;
//	int b = a++;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	c = a&&b;
//	printf("%d\n", c);
//	return 0;
//}
int main()
{
	int a = 1;
	int b = 10;
	int max = 0;
	//if ((5 > a) ? b = 3 : b = -3)
	//b = (a > 5) ? (b = 3) : (b = -3);
	//b = (a > 5 ? 3 : 3);
	max = a > b ? a : b;
	printf("%d\n", b);
		
	return 0;
}