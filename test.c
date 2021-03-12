#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//喝汽水问题，一瓶汽水1元钱，两个空瓶可以换一瓶汽水，20元可以喝多少汽水
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//买的汽水
//	total = money;
//	empty = money;
//	//换的汽水
//	while (empty >= 2)
//	{
//		total = total + (empty / 2);
//		empty = (empty / 2) + (empty % 2);
//	}
//	printf("total = %d\n", total);
//	return 0;
//}

//int main()
//{
//	unsigned int a = -10;
//	printf("%u\n", a);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (0 == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	//dayin
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i, j = 2;
//	printf("%d %d\n", i, j);
//	return 0;
//}

int main()
{
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("%c\n", killer);
		}
	}
	return 0;
}