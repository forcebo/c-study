#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int a = 10; // 4
//	float f = 10.0; // 4
//	return 0;
//}
//#include <stdio.h>
//
//int check_sys()
//{
//	int i = 1;
//	return (*(char*)&i);
//}
//
//int main()
//{
//	// дһ�δ��룬�������ǵ�ǰ�������ֽ�����ʲô
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c); // -1 -1 255
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = -128; // 10000000000000000000000010000000
//				   // 11111111111111111111111101111111
//				   // 11111111111111111111111100000000
//	printf("%u\n", a); // %u��ӡ�޷���������ӡʱ������������
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = 128; // 10000000
//				  // 11111111111111111111111110000000
//	printf("%u\n", a);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j); // ���ղ������ʽ�������㣬����ʽ����Ϊ�з�������
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	unsigned int i; //  ��ѭ�����޷�����û�и���
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a)); // 255
//	return 0;
//}

//#include <stdio.h>
//unsigned char i = 0; // 0 ~ 255 �����
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	double d = 1E10;
//	printf("%f\n", d);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	return 0;
//}

#include <stdio.h>

int main()
{
	float f = 5.5;
	// 5.5
	// 101.1
	// (-1)^0 * 1.011*2^2
	// S = 0
	// M = 1.011
	// E = 2
	// 0 100000010110000000000000000000
	// 0X40b00000
	return 0;
}