#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����һ��ѧ�����ͣ�������ѧ������������ѧ������(����)
//����ѧ�������� - ����+�绰+�Ա�+����
//struct Stu
//{
//	// ��Ա����
//	char name[20];
//	char tele[20];
//	char sex[10];
//	int age;
//}s4,s5,s6;// ȫ�ֱ���
//
//struct Stu s3; // ȫ�ֱ���
//
//int main()
//{
//	struct Stu s1; // �ֲ�����
//	struct Stu s2;
//	return 0;
//}

//struct
//{
//	int a;
//	char c;
//}sa;
//
//int main()
//{
//	 
//	return 0;
//}

struct S1
{
	char c1;
	int a;
	char c2;
};

struct S2
{
	char c1;
	char c2;
	int a;
};


int main()
{
	struct S1 s1 = { 0 };
	printf("%d\n", sizeof(s1));
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));
}