#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//实现一个函数，可以左旋字符串中的k个字符
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

// 暴力求解法
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

// 三步翻转法
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
//	reverse(arr, arr + k - 1); // 逆序左边
//	reverse(arr + k, arr + len - 1); // 逆序右边
//	reverse(arr, arr + len - 1); // 逆序整体
//}

//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//
//	return 0;
//}

//写一个函数，判断一个字符串是否为另一个字符串旋转之后的字符串
// 1.穷举法
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
//	// 1.在arr1后面追加一个str1字符串
//	// strcat 该函数不能用于自己追加自己，会造成内存崩溃
//	// strncat 
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	strncat(str1, str1, 6); // abcdefabcdef
//	// 2.判断str2指向的字符串是否是str1指向的字符串的子串
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

// 杨氏矩阵
// 有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在
// 要求：时间复杂度小于O(N);

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
//			//printf("下标是%d %d\n", x, y);
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
//		printf("找到了,下标是%d,%d\n",x,y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//size_t == unsigned int
//1.计数器的方法
//2.递归
//3.指针-指针
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
//	// 拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//目的空间的地址
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
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p)) // 会创建静态变量，保存之前返回的标记位置
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
//	// errno 是一个全局的错误码的变量
//	// 当c语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值在errno中
//	/*char* str = strerror(errno);
//	printf("%s\n", str);*/
//	
//	// 打开文件
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
//// dest 和 src不能有任何的重叠
//void* my_memcpy(void* dest, const void* src, size_t num) // 拷贝的字节数 - num
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
//// 处理重叠内存的拷贝
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		// 由前向后拷贝
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		// 由后向前拷贝
//		while (count--)
//		{
//			*((char*)dest + count) = *(((char*)src + count)); 
//			// (char*)dest + count - 最后一个字节的地址, 然后随着count--，不断往前拷贝
//		}
//	}
//	return ret;
//}

//int main()
//{
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[5] = { 0 };
//	//S arr3[] = { {"张三",20},{"李四", 30} };
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