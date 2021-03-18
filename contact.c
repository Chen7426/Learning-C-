#include "contact.h"

//初始化通讯录
void InitContact(struct Contact *ps)
{
	memset(ps->date, 0, sizeof(ps->date));
	ps->size = 0;//是通讯录开始只有0个元素
}

//增加通讯好友
void AddContact(struct Contact *ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录人员已满\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->date[ps->size].name);
		printf("请输入年龄:>");
		scanf("%d", &ps->date[ps->size].age);
		printf("请输入性别:>");
		scanf("%s", ps->date[ps->size].sex);
		printf("请输入电话:>");
		scanf("%s", ps->date[ps->size].tele);
		printf("请输入地址:>");
		scanf("%s", ps->date[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}
}

//打印通讯录
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");//打印表提
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->date[i].name,
				ps->date[i].age,
				ps->date[i].sex,
				ps->date[i].tele,
				ps->date[i].addr
				);
		}
	}
}

//封装查找函数
int FindName(const struct Contact *ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->date[i].name, name))
		{
			return i;
			break;
		}
	}
	return -1;
}

//删除联系人
void DelContact(struct Contact *ps)
{
	//找到要联系人的名字
	char name[MAX_NAME];
	printf("请输入要删除的联系人:>");
	scanf("%s", name);

	//封装查找函数FindName
	int ret = FindName(ps, name);//如果找到，返回元素下标，否则返回-1；
	/*int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->date[i].name, name))
		{
			break;
		}
	}*/
	if (ret == -1)
	{
		//判断是自动跳出，还是break跳出
		printf("该联系人不存在\n");
	}
	//有该人的情况下
	else
	{
		//删除该人
		int j = 0;
		for (j = ret; j < ps->size - 1; j++)
		{
			ps->date[j] = ps->date[j + 1];
		}
		ps->size--;//让最后的一个空白元素删除
		printf("删除成功\n");
	}
}

//寻找联系人
void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找的联系人:>");
	scanf("%s", name);
	int ret = FindName(ps, name);
	if (ret == -1)
	{
		printf("查找的联系人不存在\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");//打印表提
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->date[ret].name,
				ps->date[ret].age,
				ps->date[ret].sex,
				ps->date[ret].tele,
				ps->date[ret].addr
				);
	}
}

//修改联系人信息
void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改的联系人:>");
	scanf("%s", name);
	int ret = FindName(ps, name);
	if (ret == -1)
	{
		printf("要修改的联系人不存在\n");
	}
	else
	//就是找到该元素之后，重新赋值。相当于int a = 10; a = 20;的操作，不要想的太复杂
	{
		printf("请输入名字:>");
		scanf("%s", ps->date[ret].name);
		printf("请输入年龄:>");
		scanf("%d", &ps->date[ret].age);
		printf("请输入性别:>");
		scanf("%s", ps->date[ret].sex);
		printf("请输入电话:>");
		scanf("%s", ps->date[ret].tele);
		printf("请输入地址:>");
		scanf("%s", ps->date[ret].addr);
		printf("修改信息成功\n");
	}
}