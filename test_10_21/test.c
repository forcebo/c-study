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

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1)); // 12
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2)); // 8
//}

//����Ĭ�϶�����λ4
//#pragma pack(4)
//struct S
//{
//	char c1; //1
//	// 7
//	double d; // 8
//};
//#pragma pack()
////ȡ�����õ�Ĭ�϶�����
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//#include <stddef.h>
//
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	double d;
//};

//void Init(struct S tmp) // ֵ���ݣ�����ı�ԭ����ֵ
//{
//	tmp.a = 100;
//	tmp.c = 'w';
//	tmp.d = 3.14;
//}

//void Init(struct S* s)
//{
//	s->a = 100;
//	s->c = 'w';
//	s->d = 3.14;
//}
//
//void print1(struct S* tmp)
//{
//	printf("%d %c %lf\n", tmp->a, tmp->c, tmp->d);
//}
//
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	print1(&s);
//	return 0;
//}


////λ�Σ�������λ - ���Խ�ʡ�ռ�
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//// 47bit - 6���ֽ� * 8 = 48λ
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s)); // 8
//	return 0;;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = {0};
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//enum Sex // һ������
//{
//	//ö�ٵĿ���ȡֵ - ���� - ��ʼ������޷��޸�
//	MALE = 2,
//	FEMALE,
//	SECRET = 8
//};
//
//enum Color
//{
//	RED, //0
//	GREEN, //1
//	BLUE, //2
//	BLACK,
//};
//
//int main()
//{
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//	printf("%d\n", sizeof(enum Color));
//	return 0;
//}

//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u)); // 4
//	printf("%p\n", &(u.c)); //0000000AD6D1FB64
//	printf("%p\n", &(u.i)); //0000000AD6D1FB64
//	printf("%p\n", &u); //0000000AD6D1FB64
//	return 0;
//}

//int check_sys()
//{
//	//����1��ʾС��
//	//����0��ʾ���
//	int a = 1;
//	return *(char*)&a;
//}


//int check_sys()
//{
//	union
//	{
//		char c;
//		int i;
//	}u;
//	//����1��ʾС��
//	//����0��ʾ���
//	u.i = 1;
//	return u.c;
//}
//
//
//int main()
//{
//	if (check_sys() == 1)
//	{
//		printf("С��");
//	} 
//	else
//	{
//		printf("���");
//	}
//	// �͵�ַ-------------------�ߵ�ַ
//	// ....[][][11][22][33][44][][]... -����ֽ���洢ģʽ
//	// ....[][][44][33][22][11][][]... -С���ֽ���洢ģʽ
//	// ��С���ֽ�������
//
//	return 0;
//}

//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	u.i = 0x11223344;
//	u.c = 1;
//	printf("%x\n", u.i);
//	printf("%x\n", u.c);
//	return 0;
//}

//enum Sex
//{
//	MALE,
//	FAMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

union Un
{
	int a;
	char arr[5]; // ������ΪԪ��char�Ķ�����
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u)); // 8
	return 0;
}