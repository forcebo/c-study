#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	const char* p = "abcdef"; //"abcdef"是一个常量字符串，这里是将其的首地址赋给了p
//	// *p = 'W'; // segmentation fault - 段错误 - 访问非法内存
//	// printf("%c\n", *p); // a
//	printf("%s\n", p); // abcdef
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef"; // 常量字符串
//	const char* p2 = "abcdef";
//
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a, &b, &c, &d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int* p = NULL; // p是整型指针 - 指向整型的指针 - 可以存放整型的地址
//	char* pc = NULL; // pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
//
//	// int arr[10] = { 0 };
//	// arr - 首元素地址
//	// &arr[0] - 首元素的地址
//	// &arr - 数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr; // 数组指针
//
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*int (*pa)[10] = &arr;
//	int i = 0;*/
//	/*for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}*/
//	/*int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//	return 0;
//}

//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	//int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7} };
//	//print1(arr, 3, 5); // arr - 数组名 - 首元素地址
//	//print2(arr, 3, 5);
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]); // arr[i] = *(arr+i) = p[i] = *(p+i)
//	}
//	return 0;
//}

//一维数组传参

//int Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	// &函数名 和 函数名 都是函数的地址
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	// 函数指针
//	int (*pa)(int, int) = Add; // int - 返回值类型 (int. int) - 参数列表
//	printf("%d\n", pa(a,b));
//	printf("%d\n", (*pa)(a, b)); // *pa解引用得到函数，然后调用
//	return 0;
//}

//signal是一个函数声明
// signal函数的参数有两个，第一个是int，第二个是函数指针，该函数指针指向的函数的参数是int，返回值是void
// signal函数的返回类型也是一个函数指针：该函数指针指向的函数参数是int，返回类型是void
// void (*signal(int, void(*)(int))) (int);

//简化
//pfun_t signal(int, pfun_t);
//
//typedef void(*pfun_t)(int)

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	//指针数组
//	int* arr[5];
//	// 需要一个数组来存放四个函数的地址 - 函数指针的数组
//	int (*parr[4])(int, int) = {Add, Sub, Mul, Div};
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
//
//int main()
//{
//	char* (*p)(char*, const char*) = my_strcpy;
//	char* (*p[4])(char*, const char*);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = arr;
//
//	int (*pfArr[4])(int, int); // pfArr是一个数组 - 函数指针的数组
//	int (*(*ppfArr)[4])(int, int) = &pfArr; 
//	// ppfArr 是一个数组指针，指针指向的数组有四个元素
//	// 指向的数组的每个元素的类型是一个函数指针 int(*) (int, int)
//}

//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//
//int main()
//{
//	test(print);
//	return 0;
//}

////不够通用
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 1;
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//}


//typedef struct Stu
//{
//	char name[20];
//	int age;
//}Stu;
//
//// void qsort(void* base, size_t num, size_t width, int (*compare)(const void* elem1, const void* elem2));
//
//int cmp_int(const void* e1, const void* e2)
//{
//	// 比较两个整型值的大小
//	return  *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int cmp_float(const void* e1, const void* e2)
//{
//	if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//}
//
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//	printf("\n");
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((Stu*)e1)->age - ((Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((Stu*)e1)->name, ((Stu*)e1)->name);
//}
//
//void test3()
//{
//	Stu s[3] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	// 第一个参数：待排序数组的首元素地址
//	// 第二个参数：待排序的元素个数
//	// 第三个参数：待排序数组的每个元素的大小 - 单位是字节
//	// 第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
//	// 函数指针的两个参数是：带比较的两个元素的地址
//}
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 0;
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				// 交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//void test4()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// 使用bubble_sort的程序员一定知道自己排序的是什么数据
//	// 就应该知道如何比较待排序数组中的元素
//	bubble_sort(arr, sz, sizeof(arr[0]),cmp_int);
//}
//
//void test5()
//{
//	Stu s[3] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	test5();
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	void* p = &a;
//	// void* 类型的指针可以接收任意类型的地址
//	// void* 类型的指针不能进行解引用操作
//	// void* 类型的指针也不能进行+-整数的操作
//	return 0;
//}

