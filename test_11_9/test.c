#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//extern int Add(int x, int y);

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	int c = Add(a, b);
//	printf("c = %d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 10;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//
//	//写日志文件
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}

//int main()
//{
//	printf("%d\n", __STDC__);
//	return 0;
//}


//#define MAX 100
//#define STR "hehe"
//#define reg register // 为register这个关键字，创建一个简短的名字
//#define do_forever for(;;) // 死循环
//
//int main()
//{
//
//	reg int a;
//	printf("%s\n", STR);
//	printf("%d\n", MAX);
//	return 0;
//}

//#define SQUEUE(X) ((X)*(X))
//
//int main()
//{
//	int ret = SQUEUE(5);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//void print(int a)
//{
//	printf("the value of a is %d", a);
//}
//
//int main()
//{
//	int a = 10;
//	print(a);
//	return 0;
//}

//#define PRINT(X) printf("the value of "#X" is %d\n", X)
//
//int main()
//{
//	// printf("hello " "world\n");
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	// printf("the value of ""a""is %d\n", a);
//	PRINT(b);
//	// printf("the value of ""b""is %d\n", b);
//	return 0;
//}

//#define CAT(X,Y) X##Y
//
//int main()
//{
//	int Class5 = 2019;
//	printf("%d\n", CAT(Class, 5));
//	//printf("%d\n", Class##5);
//	//printf("%d\n", Class5);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = a + 1; // 1 
//	int b = ++a; // 2 a在给b赋值的同时，a也永久改变了
//	return 0;
//}

//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	// int max = ((a++)>(b++)?(a++):(b++));
//	printf("%d\n", max); // 12
//	printf("%d\n", a); // 11
//	printf("%d\n", b); // 13
//	return 0;
//}

//#define SIZEOF(type) sizeof(type)
//
//int main()
//{
//	int ret = SIZEOF(int);
//	printf("%d\n", ret);
//	return 0;
//}

//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	//int *p = (int*)malloc(10 * sizeof(int));
//	int* p = MALLOC(10, int);
//	return 0;
//}

//#define MAX 100
//
//int main()
//{
//	printf("MAX = %d\n", MAX);
//#undef MAX // 移除了MAX的宏定义
//	printf("MAX = %d\n", MAX);
//	return 0;
//}

//#define DEBUG

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}
