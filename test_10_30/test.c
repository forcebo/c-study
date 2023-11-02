#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <Windows.h>

//struct S
//{
//	char name[20];
//	int age;
//};
//
//
//
//int main()
//{
//	struct S arr[50];
//	// 只需要30个struct S类型的数据 - 浪费
//	// 需要50个struct S类型的数据 - 不够
//	return 0;
//}

// C语言是可以创建边长数组 - C99中增加了

//int main()
//{
//	// 向内存申请10个整形的空间
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		// 打印错误原因的一个方式
//		printf("%s\n", strerror(errno)); // no enough space
//	}
//	else
//	{
//		// 正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	// 当动态申请的空间不再使用的时候， 就应该释放还给操作系统
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	// malloc(10*sizeof(int))
//	int *p = (int*)calloc(10, sizeof(int));
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i)); // 将每个字节初始化为0
//		}
//	}
//	// 释放内存
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	// 就是在使用malloc开辟的20个字节空间
//	// 如果此时，20个字节空间不够我们使用了
//	// 就需要realloc来调整动态开辟内存
//	// realloc使用的注意事项
//	// 1. 如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回
//	// 2. 如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一块新的内存区域
//	// 开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，会释放旧的内存空间，最后返回新开辟的内存空间地址
//	// 3. 得用一个新的变量来接受realloc函数的返回值, 防止开辟空间失败后找不到原来的地址
//	// p = realloc(p, 40);
//	int* ptr = realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	//// 1. 对空指针进行解引用操作
//	//int* p = (int*)malloc(40);
//	//// 万一malloc失败了，p就被赋值为NULL
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i; // err
//	//}
//	//free(p);
//	//p = NULL;
//	//return 0;
//
//	//int* p = realloc(NULL, 40); // 等价于malloc(40)
//	// 4.使用free释放动态开辟内存的一部分
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p++ = i;
//	//}
//	//// 回收空间
//	// // 使用free释放动态开辟内存的一部分
//	//free(p);
//	//p = NULL;
//
//	// 5.对同一块动态内存的多次释放
//	/*int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	free(p);
//	p = NULL;
//	free(p); 
//	return 0;*/
//
//	//6.内存泄露
//	while (1)
//	{
//		malloc(1);
//		//Sleep(1000);
//	}
//	return 0;
//}


//运行以下代码会出现崩溃的现象，以及存在内存泄露的问题
//void GetMemory(char* p) {
//	p = (char*)malloc(100);
//}
//// str以值传递的形式给p，p是GetMemory函数的形参，只能在函数内部有效，
//// 等GetMemory函数返回之后，动态开辟的内存尚未释放，并且无法找到，所以会造成内存泄露
//void Test(void) {
//	char* str = NULL;
//	GetMemory(str); // str仍然为空
//	strcpy(str, "hello world"); // 程序崩溃
//	printf(str);
//}

//改正后的代码
//void GetMemory(char** p) {
//	*p = (char*)malloc(100);
//}
//void Test(void) {
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//  str = NULL;
//}

// 返回栈空间的地址的问题
//char* GetMemory(void) {
//	char p[] = "hello world"; // 局部数组，只能在该函数内使用，函数调用完之后就会还给操作系统，里面的值就会改变
//	return p; // 返回栈空间地址
//}
//void Test(void) {
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}

//int* test()
//{
//	// static int a = 10; // 静态区
//	int a = 10; // 栈区
//	return &a;
//}

//int* test()
//{
//	int* ptr = malloc(100); // 堆区
//	return ptr;
//}

// 内存泄漏问题
//void GetMemory(char** p, int num) {
//	*p = (char*)malloc(num);
//}
//void Test(void) {
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}

// 非法访问
//void Test(void) {
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str); // free释放str指向的空间后，str成为野指针，并不会把str置为NULL
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}

//int main()
//{
//	Test();
//	return 0;
//	/*char* str = "abcdef";
//	printf("%s\n", str);
//	printf(str);
//	printf("abcdef");*/
//	return 0;
//}

//struct S
//{
//	int n;
//	int arr[0]; // 未知大小的-柔性数组成员-数组的大小是可以调整的
//};
//
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s)); // 4
//
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	if (ps == NULL)
//	{
//		return 0;
//	}
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr == NULL)
//	{
//		return 0;
//	}
//	ps = ptr;
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

struct str {
    int len;
    char s[0];
};

struct foo {
    struct str* a;
};

int main() {
    struct foo f = { 0 };
    if (f.a->s) {
        printf("%x\n",f.a->s);
    }

    char p[5] = "ab";
    printf("%x\n", p);
    printf(p);

    char* q = "ab";
    printf(q);
    
    return 0;
}