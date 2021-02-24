#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}

//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int temp = 0;
//	while (left < right)
//	{
//		//int temp = arr[left];
//		arr[left] = arr[right];
//		temp = arr[left];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int temp = 0;
//	temp = a;
//	a = b;
//	b = temp;
//	printf("a = %d b= %d\n", a, b);
//	return 0;
//
//}

//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i);
//	/*int a = i += 2;
//	printf("%d\n", a);*/
//	printf("%d\n", sizeof(long));
//	return 0;
//}
//int search(unsigned int a)
//{
//	int count = 0;
//	
//	while (a)
//	{
//		if (1 == a % 2)
//		{
//			count++;
//			
//		}
//		a = a / 2;
//	}
//	return count;
//}

int search(int a)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (a & 1 == 1)
		{
			count++;
		}
		a = a>>1;
	}
	return count;
}


int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = search(a);
	printf("%d\n", count);
	return 0;
}