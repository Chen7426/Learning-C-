#include "contact.h"
void menu()
{
	printf("***********************************************\n");
	printf("******** 1. add            2. del   ***********\n");
	printf("******** 3. search         4. modify***********\n");
	printf("******** 5. show           6. sort  ***********\n");
	printf("******** 0. exit                    ***********\n");
	printf("***********************************************\n");

}
//释放空间函数，
void DestroyContact(struct Contact* ps)
{
	free(ps->date);
	ps->date  = NULL;
}

int main()
{
	int input = 0;
	//创建一个可以存放1000个好友的通讯录
	struct Contact con;
	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case EXIT:
			DestroyContact(&con);
			printf("程序退出\n");
			break;
		default:
			printf("输入错误，请重新输入:>\n");
			break;
		}
	} while (input);
	return 0;
}