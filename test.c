#include <stdio.h>
////#include <string,h>
////memcpy 使用方法******************
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[6] = { 0 };
//	//memcpy需要的三个参数
//	memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}
//********************************************************

////实现my_memcpy

//#include <assert.h>
//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	//检验指针的有效性
//	assert(dest);
//	assert(src);
//	//最后返回dest的首地址，防止地址丢失
//	void* ret = dest;
//	//开始进行拷贝过程
//	while (num--)
//	{
//		(*(char*)dest) = (*(char*)src);//强制类型转换，让void*可以解引用和++，--
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}
//************************************************************

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[10] = { 0 };
//	int i = 0;
//	memcpy(arr2, arr, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//********************************************************

////实现my_memmove
//
//#include <assert.h>
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	//检验指针有效性
//	assert(dest);
//	assert(src);
//	void* ret = dest;
//	//正常情况，从前往后复制
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	//当dest>=src的情况，从后往前拷贝
//	else
//	{
//		while (num--)
//		{
//			//此时num进入时，已经被减一了，刚好加上dest或src是他们的末地址
//			*((char*)dest + num) = *((char*)src+num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	my_memmove(arr, arr+2, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
////********************************************************

//int main()
//{
//	char ch;
//	ch = '\4';
//	printf("%c\n", ch);
//	return 0;
//}

//********************************************************

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6 };
//	int arr2[] = { 3, 2, 5, 6, 8, 7 };
//	int ret = memcmp(arr1, arr2, 2);
//	printf("%d\n", ret);
//	return 0;
//}

//********************************************************

//实现一个描述学生的结构体类型
//描述学生属性：姓名，性别，电话 年龄
typedef struct Stu
{
	char name[20];
	char sex[5];
	char id[12];
	int age;
}Stu;

int main()
{
	Stu s = { "zhangsan", "男", "123456", 20 };
	Stu* ps = &s;
	printf("%s %s %s %d\n", s.name, s.sex, s.id, s.age);
	printf("%s %s %s %d\n", ps->name ,ps->sex ,ps->id ,ps->age );
	printf("%d\n", sizeof(ps));
	return 0;
}