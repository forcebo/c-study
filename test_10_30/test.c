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
//	// ֻ��Ҫ30��struct S���͵����� - �˷�
//	// ��Ҫ50��struct S���͵����� - ����
//	return 0;
//}

// C�����ǿ��Դ����߳����� - C99��������

//int main()
//{
//	// ���ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		// ��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno)); // no enough space
//	}
//	else
//	{
//		// ����ʹ�ÿռ�
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
//	// ����̬����Ŀռ䲻��ʹ�õ�ʱ�� ��Ӧ���ͷŻ�������ϵͳ
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
//			printf("%d ", *(p + i)); // ��ÿ���ֽڳ�ʼ��Ϊ0
//		}
//	}
//	// �ͷ��ڴ�
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
//	// ������ʹ��malloc���ٵ�20���ֽڿռ�
//	// �����ʱ��20���ֽڿռ䲻������ʹ����
//	// ����Ҫrealloc��������̬�����ڴ�
//	// reallocʹ�õ�ע������
//	// 1. ���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�
//	// 2. ���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
//	// ����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ������������ͷžɵ��ڴ�ռ䣬��󷵻��¿��ٵ��ڴ�ռ��ַ
//	// 3. ����һ���µı���������realloc�����ķ���ֵ, ��ֹ���ٿռ�ʧ�ܺ��Ҳ���ԭ���ĵ�ַ
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
//	//// 1. �Կ�ָ����н����ò���
//	//int* p = (int*)malloc(40);
//	//// ��һmallocʧ���ˣ�p�ͱ���ֵΪNULL
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i; // err
//	//}
//	//free(p);
//	//p = NULL;
//	//return 0;
//
//	//int* p = realloc(NULL, 40); // �ȼ���malloc(40)
//	// 4.ʹ��free�ͷŶ�̬�����ڴ��һ����
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
//	//// ���տռ�
//	// // ʹ��free�ͷŶ�̬�����ڴ��һ����
//	//free(p);
//	//p = NULL;
//
//	// 5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
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
//	//6.�ڴ�й¶
//	while (1)
//	{
//		malloc(1);
//		//Sleep(1000);
//	}
//	return 0;
//}


//�������´������ֱ����������Լ������ڴ�й¶������
//void GetMemory(char* p) {
//	p = (char*)malloc(100);
//}
//// str��ֵ���ݵ���ʽ��p��p��GetMemory�������βΣ�ֻ���ں����ڲ���Ч��
//// ��GetMemory��������֮�󣬶�̬���ٵ��ڴ���δ�ͷţ������޷��ҵ������Ի�����ڴ�й¶
//void Test(void) {
//	char* str = NULL;
//	GetMemory(str); // str��ȻΪ��
//	strcpy(str, "hello world"); // �������
//	printf(str);
//}

//������Ĵ���
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

// ����ջ�ռ�ĵ�ַ������
//char* GetMemory(void) {
//	char p[] = "hello world"; // �ֲ����飬ֻ���ڸú�����ʹ�ã�����������֮��ͻỹ������ϵͳ�������ֵ�ͻ�ı�
//	return p; // ����ջ�ռ��ַ
//}
//void Test(void) {
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}

//int* test()
//{
//	// static int a = 10; // ��̬��
//	int a = 10; // ջ��
//	return &a;
//}

//int* test()
//{
//	int* ptr = malloc(100); // ����
//	return ptr;
//}

// �ڴ�й©����
//void GetMemory(char** p, int num) {
//	*p = (char*)malloc(num);
//}
//void Test(void) {
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}

// �Ƿ�����
//void Test(void) {
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str); // free�ͷ�strָ��Ŀռ��str��ΪҰָ�룬�������str��ΪNULL
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
//	int arr[0]; // δ֪��С��-���������Ա-����Ĵ�С�ǿ��Ե�����
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