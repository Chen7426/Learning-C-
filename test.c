#include <stdio.h>
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	int *p = &a;
//	printf("%d\n", *p);
//	printf("%d\n", *(&a[1]));
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", strlen(*arr));
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(*p));
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { { 1, 2, 3, 4 }, { 2, 3, 4, 5 }, { 3, 4, 5, 6 } };
//	printf("%d\n", arr[0]+1);
//	return 0;
//}

int main()
{
	int a[] = { 1, 2, 3, 4, 5 };
	int* p = (&a + 1);
	printf("%d,%d\n", *(a + 1), *(p - 1));
	return 0;
}