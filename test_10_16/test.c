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

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	if (*p2 == '\0')
//		return p1;
//
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
//
//	return 0;
//}

int main()
{
	char arr[] = "zpw@bitedu.tech";
	char* p = "@.";
	
	char buf[1024] = { 0 };
	strcpy(buf, arr);

	char* ret = strtok(arr, p);
	printf("%s\n", ret);
	ret = strtok(NULL, p);
	printf("%s\n", ret);
	ret = strtok(NULL, p);
	printf("%s\n", ret);

	return 0;
}