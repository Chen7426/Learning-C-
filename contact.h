#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#include <stdio.h>
#include <string.h>

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//通讯录类型
struct Contact
{
	struct PeoInfo date[MAX];
	
	int size;
};
//初始化通讯录
void InitContact(struct Contact* ps);

//添加通讯好友
void AddContact(struct Contact* ps);

//打印通讯表
void ShowContact(const struct Contact* ps);

//删除联系人
void DelContact(struct Contact* ps);

//寻找联系人
void SearchContact(const struct Contact* ps);

//修改联系人
void ModifyContact(struct Contact* ps);