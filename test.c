#include <stdio.h>
////#include <string,h>
////memcpy ʹ�÷���******************
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[6] = { 0 };
//	//memcpy��Ҫ����������
//	memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}
//********************************************************

////ʵ��my_memcpy

//#include <assert.h>
//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	//����ָ�����Ч��
//	assert(dest);
//	assert(src);
//	//��󷵻�dest���׵�ַ����ֹ��ַ��ʧ
//	void* ret = dest;
//	//��ʼ���п�������
//	while (num--)
//	{
//		(*(char*)dest) = (*(char*)src);//ǿ������ת������void*���Խ����ú�++��--
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

////ʵ��my_memmove
//
//#include <assert.h>
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	//����ָ����Ч��
//	assert(dest);
//	assert(src);
//	void* ret = dest;
//	//�����������ǰ������
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	//��dest>=src��������Ӻ���ǰ����
//	else
//	{
//		while (num--)
//		{
//			//��ʱnum����ʱ���Ѿ�����һ�ˣ��պü���dest��src�����ǵ�ĩ��ַ
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

//ʵ��һ������ѧ���Ľṹ������
//����ѧ�����ԣ��������Ա𣬵绰 ����
typedef struct Stu
{
	char name[20];
	char sex[5];
	char id[12];
	int age;
}Stu;

int main()
{
	Stu s = { "zhangsan", "��", "123456", 20 };
	Stu* ps = &s;
	printf("%s %s %s %d\n", s.name, s.sex, s.id, s.age);
	printf("%s %s %s %d\n", ps->name ,ps->sex ,ps->id ,ps->age );
	printf("%d\n", sizeof(ps));
	return 0;
}