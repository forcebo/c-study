#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	const char* p = "abcdef"; //"abcdef"��һ�������ַ����������ǽ�����׵�ַ������p
//	// *p = 'W'; // segmentation fault - �δ��� - ���ʷǷ��ڴ�
//	// printf("%c\n", *p); // a
//	printf("%s\n", p); // abcdef
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef"; // �����ַ���
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
//	int* p = NULL; // p������ָ�� - ָ�����͵�ָ�� - ���Դ�����͵ĵ�ַ
//	char* pc = NULL; // pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//
//	// int arr[10] = { 0 };
//	// arr - ��Ԫ�ص�ַ
//	// &arr[0] - ��Ԫ�صĵ�ַ
//	// &arr - ����ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr; // ����ָ��
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
//	//print1(arr, 3, 5); // arr - ������ - ��Ԫ�ص�ַ
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

//һά���鴫��

//int Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	// &������ �� ������ ���Ǻ����ĵ�ַ
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	// ����ָ��
//	int (*pa)(int, int) = Add; // int - ����ֵ���� (int. int) - �����б�
//	printf("%d\n", pa(a,b));
//	printf("%d\n", (*pa)(a, b)); // *pa�����õõ�������Ȼ�����
//	return 0;
//}

//signal��һ����������
// signal�����Ĳ�������������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������ֵ��void
// signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ���������int������������void
// void (*signal(int, void(*)(int))) (int);

//��
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
//	//ָ������
//	int* arr[5];
//	// ��Ҫһ������������ĸ������ĵ�ַ - ����ָ�������
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
//	int (*pfArr[4])(int, int); // pfArr��һ������ - ����ָ�������
//	int (*(*ppfArr)[4])(int, int) = &pfArr; 
//	// ppfArr ��һ������ָ�룬ָ��ָ����������ĸ�Ԫ��
//	// ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*) (int, int)
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

////����ͨ��
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
//	// �Ƚ���������ֵ�Ĵ�С
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
//	// ��һ���������������������Ԫ�ص�ַ
//	// �ڶ����������������Ԫ�ظ���
//	// �����������������������ÿ��Ԫ�صĴ�С - ��λ���ֽ�
//	// ���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
//	// ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
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
//				// ����
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
//	// ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
//	// ��Ӧ��֪����αȽϴ����������е�Ԫ��
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
//	// void* ���͵�ָ����Խ����������͵ĵ�ַ
//	// void* ���͵�ָ�벻�ܽ��н����ò���
//	// void* ���͵�ָ��Ҳ���ܽ���+-�����Ĳ���
//	return 0;
//}

