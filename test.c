#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////*************************************************
////�ҳ�������ֻ����һ�ε��Ǹ�Ԫ��
//
//int signnum(int arr[], int sz)
//{
//	int once = 0;
//	//once = 0 ^ 2 ^ 5 ^ 8 ^ 9 ^ 7 ^ 5 ^ 2 ^ 8 ^ 9;
//	for (int i = 0; i < sz; i++)
//	{
//		once = once ^ arr[i];
//	}
//	return once;
//
//}
//
//int main()
//{
//	int arr[] = { 2, 5, 8, 9, 7, 5, 2, 9, 8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = signnum(arr, sz);
//	printf("%d\n", ret);
//	return 0;
//}
//*************************************************

//����һ�����Ķ��������ж��ٸ�1
//int main()
//{
//	int num = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)//һ������Ԫ�����ĸ��ֽڣ���32λ�����ƣ���0��ʼ��31�պ�Ϊ32����λ
//	{
//		if (1 == (num & 1))//��λ��һ��1����Ӧλ��ͬΪ1����ͬΪ0�����==1������λ��1�����������1
//		{
//			count++;//count��������1�ĸ���
//		}
//		num = num >> i;//ÿ������Ϊ��������һλ��������һλ���֣�����պ�i��Ӧ���Ƶ�λ��
//	}
//	printf("%d\n", count);
//	return 0;
//}

//*************************************************
//�ҳ�������ֻ����һ�ε��Ǹ�Ԫ��
//doublenum(int arr[], int sz)
//{
//	int i = 0;
//	int a = 0;
//	for (i = 0; i < sz; i++)
//	{
//		a = a^arr[i];
//	}
//	int b = 1;
//	for (i = 0; i < sz; i++)
//	{
//		b = b^arr[i];
//	}
//	printf("%d\n", b);
//}
//
//int main()
//{
//	int arr[] = { 2, 5, 8, 9, 7, 5, 2, 9, 8, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	doublenum(arr, sz);
//	return 0;
//}
//*************************************************

//��ʧ�����֣�һ����������һ��������ʧ�ˣ��ҳ��������

//int main()
//{
//	int arr[] = { 7, 2, 5, 9, 4, 6, 1, 3, 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int num = 0;
//	for (i = 0; i < sz; i++)
//	{
//		num ^= arr[i];
//	}
//	for (i = 0; i <= sz; i++)
//	{
//		num ^= i;
//	}
//	printf("%d\n", num);
//	return 0;
//}
//*************************************************

//һ��������������ֻ����һ�ε�Ԫ�أ����ҳ���Ԫ��

#include <stdlib.h>
int* seeknum(int arr[], int sz)
{
	//�ҳ�����Ԫ�ص����ֵ
	int ret = 0;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	//���벽��
	int x1 = 0;
	int x2 = 0;
	int m = 0;
	while (m < 32)
	{
		if ((ret >> m) & 1)
		{
			break;
		}
		else
		m++;
	}
	for (i = 0; i < sz; i++)
	{
		if ((arr[i] >> m) & 1)
		{
			x1 ^= arr[i];
		}
		else
			x2 ^= arr[i];
	}
	int* retArr = (int*)malloc(sizeof(int)* 2);
	retArr[0] = x1;
	retArr[1] = x2;
	/*free(retArr);
	retArr = NULL;*/
	return retArr;
	
}

int main()
{
	int arr[] = { 2, 3, 4, 6, 7, 3, 2, 4 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = seeknum(arr, sz);
	for (i = 0; i < 2; i++)
	{
		printf("%d ",p[i]);
	}
	printf("\n");
	free(p);
	p = NULL;
	return 0;
}
//*************************************************

//int main()
//{
//	int a[] = {1,2,3,4,5,6,7,8,9};
//	int* pa = &a;
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", pa[i]);
//	}
//
//	return 0;
//}
//*************************************************