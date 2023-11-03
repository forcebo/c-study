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

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

typedef struct Contact
{
	PeoInfo data[MAX];
	int size; // 记录当前已经有的元素个数
}Contact;

void InitContact(Contact* ps);

void AddContact(Contact* ps);

void ShowContact(const Contact* ps);

void DelContact(Contact* ps);

void SearchContact(const Contact* ps);

void ModifyContact(Contact* ps);

void SortContact(Contact* ps);