#include <stdio.h>

//int main()
//{
//	char arr1[] = "###########";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//void my_strcpy(char* x, char* y)
//{
//	while (*y != '\0')
//	{
//		*x = *y;
//		x++;
//		y++;
//	}
//	*x = *y;
//}

//void my_strcpy(char* x, char* y)
//{
//	while (*x++ = *y++)
//	{
//		;
//	}
//}

//void my_strcpy(char* x, char* y)
//{
//	assert(*x != NULL);
//	assert(*y != NULL);
//	while (*x++ = *y++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[] = "########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//#include <assert.h>
//int my_strlen(char* x)
//{
//	//int i = 0;
//	assert(*x != NULL);
//	int count = 0;
//	while (*x++ != NULL)
//	{
//		//*x++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello world !";
//	int len = my_strlen(arr);
//	printf("ret = %d\n", len);
//	return 0;
//}

//int main()
//{
//	const int a = 10;
//	const int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//
//}
#include <assert.h>
//char* my_strcpy(char*x,const char* y)
//{
//	char* ret = x;
//	assert(*x != NULL);
//	assert(*y != NULL);
//	while (*x++ = *y++)//利用\0assic码值为0来结束循环
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "#########";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1,arr2));
//	return 0;
//}

//int my_strlen(const char* x)
//{
//	assert(*x != NULL);//断言，确定不是野指针
//	int count = 0;
//	while ((*x++) != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello world !";
//	//int len = my_strlen(arr);
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

void test()
{
	printf("hello world !\n");
}

int main()
{
	test();
	return 0;
}