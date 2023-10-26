#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//声明一个学生类型，是想用学生类型来创建学生变量(对象)
//描述学生：属性 - 名字+电话+性别+年龄
//struct Stu
//{
//	// 成员变量
//	char name[20];
//	char tele[20];
//	char sex[10];
//	int age;
//}s4,s5,s6;// 全局变量
//
//struct Stu s3; // 全局变量
//
//int main()
//{
//	struct Stu s1; // 局部变量
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

//设置默认对齐数位4
//#pragma pack(4)
//struct S
//{
//	char c1; //1
//	// 7
//	double d; // 8
//};
//#pragma pack()
////取消设置的默认对齐数
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

struct S
{
	int a;
	char c;
	double d;
};

//void Init(struct S tmp) // 值传递，不会改变原来的值
//{
//	tmp.a = 100;
//	tmp.c = 'w';
//	tmp.d = 3.14;
//}

void Init(struct S* s)
{
	s->a = 100;
	s->c = 'w';
	s->d = 3.14;
}

void print1(struct S* tmp)
{
	printf("%d %c %lf\n", tmp->a, tmp->c, tmp->d);
}

int main()
{
	struct S s = { 0 };
	Init(&s);
	print1(&s);
	return 0;
}