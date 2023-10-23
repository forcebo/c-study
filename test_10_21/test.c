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