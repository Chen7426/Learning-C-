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

//ͨѶ¼����
struct Contact
{
	struct PeoInfo date[MAX];
	
	int size;
};
//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps);

//���ͨѶ����
void AddContact(struct Contact* ps);

//��ӡͨѶ��
void ShowContact(const struct Contact* ps);

//ɾ����ϵ��
void DelContact(struct Contact* ps);

//Ѱ����ϵ��
void SearchContact(const struct Contact* ps);

//�޸���ϵ��
void ModifyContact(struct Contact* ps);