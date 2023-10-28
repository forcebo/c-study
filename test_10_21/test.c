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

//struct S
//{
//	int a;
//	char c;
//	double d;
//};

//void Init(struct S tmp) // 值传递，不会改变原来的值
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


////位段：二进制位 - 可以节省空间
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//// 47bit - 6个字节 * 8 = 48位
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

//enum Sex // 一种类型
//{
//	//枚举的可能取值 - 常量 - 初始化后就无法修改
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
//	//返回1表示小端
//	//返回0表示大端
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
//	//返回1表示小端
//	//返回0表示大端
//	u.i = 1;
//	return u.c;
//}
//
//
//int main()
//{
//	if (check_sys() == 1)
//	{
//		printf("小端");
//	} 
//	else
//	{
//		printf("大端");
//	}
//	// 低地址-------------------高地址
//	// ....[][][11][22][33][44][][]... -大端字节序存储模式
//	// ....[][][44][33][22][11][][]... -小端字节序存储模式
//	// 大小端字节序问题
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
	char arr[5]; // 对齐数为元素char的对齐数
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u)); // 8
	return 0;
}