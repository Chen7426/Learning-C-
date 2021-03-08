#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", *p);
//	return 0;
//}
//int main()
//{
//	//char ch[] = "abcdef";
//	char* p = "abcdef";
//	//*p = 'w';
//	printf("%s\n",p);
//	return 0;
//}

//#include<iostream>
////using namespace std;
//int main()
//{
//	char *str = "I love China!";
//	cout << str << endl;
//	return 0;
//}
//int main()
//{
//	char a = 3;
//	if ('w' ==2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	char* p1 = "abcd";
//	char* p2 = "abcd";
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//	int* parr[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//	int* parr[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", (*parr[i]+1));
//		/*int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");*/
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",(*pa)[i]);//此时将（*pa）看作arr，【i】是arr的下标
//	}
//	printf("\n");
//	return 0;
//}

//void test(int x)
//{
//	int i = 0;
//	int j = 0;
//	//int c, d = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			//c++;
//			printf("%d*%d = %d ", i,j);
//			//d++;
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a = 0;
//	test(a);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

void print(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}

//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 6, 7, 8, 9, 10 } };
//	print(arr, 3, 5);
//	return 0;
//}

int main()
{
	char* p = "abcdef";
	printf("%s\n", p);
	return 0;
}