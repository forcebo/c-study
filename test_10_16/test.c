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
void reverse(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k <= len);
	reverse(arr, arr + k - 1); // �������
	reverse(arr + k, arr + len - 1); // �����ұ�
	reverse(arr, arr + len - 1); // ��������
}

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

char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	// ����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
	while (*dest++ = *src++)
	{
		;
	}
	//Ŀ�Ŀռ�ĵ�ַ
	return ret;
}

int main()
{
	char arr1[] = "abcdefgi";
	char arr2[] = "bit";

	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}