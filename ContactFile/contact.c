#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//����
void CheckCapacity(Contact* ps);

void LoadContact(Contact* ps)
{
	PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("contact.dat", "rb");
	if (pfRead == NULL)
	{
		printf("LoadContact::%s\n", strerror(errno));
		return;
	}

	//��ȡ�ļ��������ͨѶ¼��
	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}

	fclose(pfRead);
	pfRead = NULL;
}

void InitContact(Contact* ps)
{
	ps->data = (PeoInfo*)malloc(3 * sizeof(PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFALUT_SZ;
	// ���ļ����Ѿ���ŵ���Ϣ���ص�ͨѶ¼��
	LoadContact(ps);
}

void CheckCapacity(Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(ps->data, (ps->capacity + 2) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}

void AddContact(Contact* ps)
{
	CheckCapacity(ps);

	printf("���������֣�> ");
	scanf("%s", ps->data[ps->size].name);
	printf("���������䣺> ");
	scanf("%d", &ps->data[ps->size].age);
	printf("�������Ա�> ");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰��> ");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ��> ");
	scanf("%s", ps->data[ps->size].addr);

	ps->size++;
	printf("���ӳɹ�\n");
}

void ShowContact(const Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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

// static���θ÷���ʹ�øú���ֻ���ڱ��ļ���ʹ��
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
	printf("������Ҫɾ���˵�����:> ");
	scanf("%s", name);
	// ����Ҫɾ��������ʲôλ��
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�����˵����֣�>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�޸��˵����֣�>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸��˵���Ϣ������");
	}
	else
	{
		printf("���������֣�> ");
		scanf("%s", ps->data[pos].name);
		printf("���������䣺> ");
		scanf("%d", &ps->data[pos].age);
		printf("�������Ա�> ");
		scanf("%s", ps->data[pos].sex);
		printf("������绰��> ");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ��> ");
		scanf("%s", ps->data[pos].addr);
		
		printf("�޸����\n");
	}
}

static int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

void SortContact(Contact* ps)
{
	int i = 0;
	// printf("%d\n", sizeof(ps->data[0]));
	qsort(ps->data, ps->size, sizeof(ps->data[0]), cmp_peo_by_name);
}

void DestroyContact(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}

void SaveContact(Contact* ps)
{
	FILE* pfWrite = fopen("contact.dat", "wb");
	if (pfWrite == NULL)
	{
		printf("SaveContact::%s\n", strerror(errno));
		return;
	}
	// дͨѶ¼�е����ݵ��ļ���
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(PeoInfo), 1, pfWrite);
	}
	fclose(pfWrite);
	pfWrite = NULL;
}