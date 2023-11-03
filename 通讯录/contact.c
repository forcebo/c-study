#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void InitContact(Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}

void AddContact(Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满，无法增加");
	}
	else
	{
		printf("请输入名字：> ");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄：> ");
		scanf("%d", &ps->data[ps->size].age);
		printf("请输入性别：> ");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话：> ");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址：> ");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("添加成功\n");
	}
}

void ShowContact(const Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

// static修饰该方法使得该函数只能在本文件中使用
static int FindByName(const Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (!strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return - 1;
}

void DelContact(Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除人的名字:> ");
	scanf("%s", name);
	// 查找要删除的人在什么位置
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void SearchContact(const Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找人的名字：>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要查找的人不存在");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

void ModifyContact(Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改人的名字：>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要修改人的信息不存在");
	}
	else
	{
		printf("请输入名字：> ");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄：> ");
		scanf("%d", &ps->data[pos].age);
		printf("请输入性别：> ");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话：> ");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址：> ");
		scanf("%s", ps->data[pos].addr);
		
		printf("修改完成\n");
	}
}

int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

void SortContact(Contact* ps)
{
	int i = 0;
	// printf("%d\n", sizeof(ps->data[0]));
	qsort(ps->data, ps->size, sizeof(ps->data[0]), cmp_peo_by_name);
}