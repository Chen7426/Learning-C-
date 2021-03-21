#include "contact.h"

//��ʼ��ͨѶ¼
void InitContact(struct Contact *ps)
{
	ps->date = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));//�ȿ��������ռ�
	//�жϿռ���û�п��ٳɹ�
	if (ps->date == NULL)
	{
		return;
	}
	ps->size = 0;//��ʼ������Ԫ�ؼ���ҲΪ0��
	ps->capacity = DEFAULT_SZ;//�����ʼ��3����ʼ
}
//�����������
void CheckCapacity(struct Contact *ps)
{
	if (ps->size == ps->capacity)//�ж���û����
	{
		//�����㷨
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(ps->date, (ps->capacity + 2)*sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->date = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}

//����ͨѶ����
void AddContact(struct Contact *ps)
{
	//�ȼ��������û�������費��Ҫ����
	//1.������ˣ�������
	//2.���û����ɶ�²���
	CheckCapacity(ps);
		printf("����������:>");
		scanf("%s", ps->date[ps->size].name);
		printf("����������:>");
		scanf("%d", &ps->date[ps->size].age);
		printf("�������Ա�:>");
		scanf("%s", ps->date[ps->size].sex);
		printf("������绰:>");
		scanf("%s", ps->date[ps->size].tele);
		printf("�������ַ:>");
		scanf("%s", ps->date[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
}

//��ӡͨѶ¼
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");//��ӡ����
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

//��װ���Һ���
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

//ɾ����ϵ��
void DelContact(struct Contact *ps)
{
	//�ҵ�Ҫ��ϵ�˵�����
	char name[MAX_NAME];
	printf("������Ҫɾ������ϵ��:>");
	scanf("%s", name);

	//��װ���Һ���FindName
	int ret = FindName(ps, name);//����ҵ�������Ԫ���±꣬���򷵻�-1��
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
		//�ж����Զ�����������break����
		printf("����ϵ�˲�����\n");
	}
	//�и��˵������
	else
	{
		//ɾ������
		int j = 0;
		for (j = ret; j < ps->size - 1; j++)
		{
			ps->date[j] = ps->date[j + 1];
		}
		ps->size--;//������һ���հ�Ԫ��ɾ��
		printf("ɾ���ɹ�\n");
	}
}

//Ѱ����ϵ��
void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ���ϵ��:>");
	scanf("%s", name);
	int ret = FindName(ps, name);
	if (ret == -1)
	{
		printf("���ҵ���ϵ�˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");//��ӡ����
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->date[ret].name,
				ps->date[ret].age,
				ps->date[ret].sex,
				ps->date[ret].tele,
				ps->date[ret].addr
				);
	}
}

//�޸���ϵ����Ϣ
void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ���ϵ��:>");
	scanf("%s", name);
	int ret = FindName(ps, name);
	if (ret == -1)
	{
		printf("Ҫ�޸ĵ���ϵ�˲�����\n");
	}
	else
	//�����ҵ���Ԫ��֮�����¸�ֵ���൱��int a = 10; a = 20;�Ĳ�������Ҫ���̫����
	{
		printf("����������:>");
		scanf("%s", ps->date[ret].name);
		printf("����������:>");
		scanf("%d", &ps->date[ret].age);
		printf("�������Ա�:>");
		scanf("%s", ps->date[ret].sex);
		printf("������绰:>");
		scanf("%s", ps->date[ret].tele);
		printf("�������ַ:>");
		scanf("%s", ps->date[ret].addr);
		printf("�޸���Ϣ�ɹ�\n");
	}
}