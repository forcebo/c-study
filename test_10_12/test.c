#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


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

void print(char* str)
{
	printf("hehe:%s", str);
}

void test(void (*p)(char*))
{
	printf("test\n");
	p("bit");
}

int main()
{
	test(print);
	return 0;
}