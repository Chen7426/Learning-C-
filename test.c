#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int a = i+2;
//	i = a;
//	printf("%d\n", i);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		printf("hello world !\n");
//		i +=2;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//		//arr[i];
//	}
//	return 0;
//}
int my_strlen(char* str)
{
	char* star = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - star;
}
int main()
{
	char arr[] = "hello world !";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}