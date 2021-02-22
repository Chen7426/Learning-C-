#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int get_max(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	struct stu s1 = { "ÕÅÈı",20, "201742502925" };
//
//	struct stu* p = &s1;
////	printf("%s\n", (*p).name);
////	//printf("%s\n%d\n%s\n", p->name,p->age ,p->id );
////	/*printf("%s\n", s1.name);
////	printf("%d\n", s1.age );
////	printf("%s\n", s1.id );*/
////	return 0;
////}
////int main()
////{
////	char a = 3;
////	char b = 127;
////	char c = a + b;
////	printf("%d\n",c);
////}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b * -2;
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int c = 2 * 3 + 2 * 2 + 2 * 4;
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + (a--);//18
//	printf("%d\n", c);
//	return 0;
//}
//int fun(int a)
//{
//	static int count = 1;
//	/*a = a + count;
//	count++;*/
//	return ++count;
//}
//int main()
//{
//	int a = 10;
//	int b = fun(a);
//	printf("%d\n", b);
//	return 0;
//}
int main()
{
	int i = 1;
	int b = 3 + (++i);
	printf("%d\n", b);
	return 0;
}