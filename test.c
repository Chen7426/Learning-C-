#include <stdio.h>
//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	return 0;
//}

//#define max 100
//int main()
//{
//	printf("%s\n", max);
//	return 0;
//}

//#define SQUARE(X) X*X
//int main()
//{
//	int ret = SQUARE((5+1));
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	printf("hello world\n");
//	printf("hello " "world\n");
//	return 0;
//}
//#define PRINT(X) printf("the value of "#X" is %d\n",X)
////void print(int a)
////{
////	PRINT(a);
////	PRINT(a);
////}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}
#define MAX(X,Y)  ((X)>(Y)?(X):(Y))
int main()
{
	int a = 10;
	int b = 20;
	int  max = MAX(a, b);
	printf("%d\n", max);
	return 0;
}