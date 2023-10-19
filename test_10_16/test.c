#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//ʵ��һ�����������������ַ����е�k���ַ�
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

// ������ⷨ
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + j) = tmp;
//	}
//}

// ������ת��
// bacdef
// bafedc
// cdefab
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr + k - 1); // �������
//	reverse(arr + k, arr + len - 1); // �����ұ�
//	reverse(arr, arr + len - 1); // ��������
//}

//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//
//	return 0;
//}

//дһ���������ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮����ַ���
// 1.��ٷ�
// int is_left_move(char* arr1, char* arr2)
//{
//	int len = strlen(arr1);
//	for (int i = 0; i < len; i++)
//	{
//		left_move(arr1, 1);
//		if (strcmp(arr1, arr2) == 0)
//			return 1;
//	}
//	return 0;
//}

// char* strcat(char* strDestination, const char* strSource);
// char* strncat(char* strDest, const char* strSource, size_t count);
// 2.
//int is_left_move(char* str1, char* str2)
//{
//	// 1.��arr1����׷��һ��str1�ַ���
//	// strcat �ú������������Լ�׷���Լ���������ڴ����
//	// strncat 
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	strncat(str1, str1, 6); // abcdefabcdef
//	// 2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	if (strstr(str1, str2) == NULL)
//		return 0;
//	else
//		return 1;
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}

// ���Ͼ���
// ��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ����
// Ҫ��ʱ�临�Ӷ�С��O(N);

// 1 2 3
// 4 5 6
// 7 8 9

//int FindNum(int arr[3][3], int k, int *px, int *py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >=0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			//printf("�±���%d %d\n", x, y);
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("�ҵ���,�±���%d,%d\n",x,y);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//size_t == unsigned int
//1.�������ķ���
//2.�ݹ�
//3.ָ��-ָ��
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(const char* str)
//{
//	if (*str != '\0')
//	{
//		return my_strlen(str + 1) + 1;
//	}
//	else
//	{
//		return 0;
//	}
//}

//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	// ����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//Ŀ�Ŀռ�ĵ�ַ
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefgi";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{	
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	// cmp
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	int ret = my_strcmp(p1, p2);
//	// vs2013
//	// > 1
//	// == 0
//	// < -1
//	// linux -gcc
//	// > >0
//	// == 0
//	// < <0
//	if (ret > 0)
//	{
//		printf("p1 > p2\n");
//	}
//	else if (ret == 0)
//	{
//		printf("p1 == p2\n");
//	}
//	else
//	{
//		printf("p1 < p2\n");
//	}
//	return 0;
//}

//char* my_strncpy(char* dest, const char* src, int count)
//{
//	char* start = dest;
//	while (count && (*dest++ = *src++))
//		count--;
//	if (count)
//		while (--count)
//			*dest++ = '\0';
//	return start;
//}
//
//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "h";
//	my_strncpy(arr1, arr2, 2);
//	printf("%s\n",arr1);
//
//	return 0;
//}

//char* my_strncat(char* front, const char* back, int count)
//{
//	char* start = front;;
//	while (*front++);
//	front--;
//	while (count--)
//		if (!(*front++ = *back++))
//			return start;
//	*front = '\0';
//	return start;
//}
//
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	int ret = strncmp(p1, p2, 4);
//	return 0;
//}

char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	if (*p2 == '\0')
		return p1;
	char* cp = p1;
	char* s1, *s2;
	while (*cp)
	{
		s1 = cp;
		s2 = (char*)p2;
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (!*s2)
		{
			return cp;
		}
		cp++;
	}
	return NULL;
}

int main()
{
	char* p1 = "abcddef";
	char* p2 = "def";
	char* ret = my_strstr(p1, p2);
	printf("%s", ret);

	return 0;
}

//int main()
//{
//	char arr[] = "zpw@bitedu.tech";
//	char* p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p)) // �ᴴ����̬����������֮ǰ���صı��λ��
//	{
//		printf("%s\n", ret);
//	}
//	/*char* ret = strtok(arr, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);*/
//
//	return 0;
//}
//#include <errno.h>
//
//int main()
//{
//	// 0 - No error
//	// 1 - Operation not permitted
//	// 2 - No such file or directory
//	// ...
//	// errno ��һ��ȫ�ֵĴ�����ı���
//	// ��c���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//	/*char* str = strerror(errno);
//	printf("%s\n", str);*/
//	
//	// ���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}

//#include <ctype.h>
//
//int main()
//{
//	char ch = 'w';
//	int ret = islower(ch);
//	printf("%d\n", ret);
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//};
//typedef struct S S;
//
//// dest �� src�������κε��ص�
//void* my_memcpy(void* dest, const void* src, size_t num) // �������ֽ��� - num
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (num--) {
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//// �����ص��ڴ�Ŀ���
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		// ��ǰ��󿽱�
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		// �ɺ���ǰ����
//		while (count--)
//		{
//			*((char*)dest + count) = *(((char*)src + count)); 
//			// (char*)dest + count - ���һ���ֽڵĵ�ַ, Ȼ������count--��������ǰ����
//		}
//	}
//	return ret;
//}

//int main()
//{
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[5] = { 0 };
//	//S arr3[] = { {"����",20},{"����", 30} };
//	//S arr4[3] = { 0 };
//	////memcpy(arr2, arr1, sizeof(arr1));
//	//memcpy(arr4, arr3, sizeof(arr3));
//
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	my_memmove(arr + 2, arr, 20);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 20);
//	printf("%d", ret);
//	return 0;
//}