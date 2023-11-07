#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf); // 以二进制的形式存储
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// .. 表示上一级路径 - fopen("../../test.txt", "r")
//	// . 表示当前路径
//	// 相对路径 - test.txt
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	// 打开成功
//	// 读文件
//	// 关闭文件
//	fclose(pf); // 值传递
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfWrite = fopen("TEST.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//键盘 - 标准输入设备 - stdin
//屏幕 - 标准输出设备 - stdout
//是一个程序默认打开的两个流设备
//stdin stdout stderr - 默认打开的三个流，都是FILE*类型

//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fgets(buf, 1024, pf); // 读一行
//	//printf("%s", buf); // buf中会读取换行
//	puts(buf);//本身会换行
//
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fputs("abcdef", pf);
//	//fputs("world", pf);
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin); // 从标准输入流读取
//	fputs(buf, stdout); // 输出到标准输出流
//
//	// 等价于
//	// gets(buf);
//	// puts(buf);
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};

//int main()
//{
//	struct S s = { 100, 3.14f, "bit" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	// 格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	fscanf(pf,"%d %f %s", &(s.n), &(s.score), &s.arr);
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	fscanf(stdin, "%d %f %s", &s.n, &s.score, s.arr);
//	fprintf(stdout, "%d %.2f %s", s.n, s.score, s.arr);
//	return 0;
//}

//int main()
//{
//	struct S s = { 100, 3.14f, "abcdef" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr); // 可以把结构体转换为字符串存储到buf中
//	printf("%s\n", buf);
//	//从buf中读取格式化数据到tmp中
//	sscanf(buf, "%d %f %s", &tmp.n, &tmp.score, tmp.arr);
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	//struct S s = { "张三", 20, 55.6 };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
//	//size_t fwrite( const void *buffer, size_t size, size_t count, FILE *stream );
//	//fwrite(&s, sizeof(struct S), 1, pf);
//	// size_t fread(void* buffer, size_t size, size_t count, FILE * stream);
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	// 1.定位文件指针
//	fseek(pf, -2, SEEK_END); // 可以用来调节文件指针的位置
//	int pos = ftell(pf); // 获取文件指针相对于起始位置的偏移量
//	printf("%d\n", pos);
//	// 2.读取文件
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// EOF - end of file - 文件结束标志
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%d", ch); // -1
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("hehe");
//		return 0;
//	}
//	// 读文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main() {
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("open file test2.txt");
		return 0;
	}
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);
	}
	if (ferror(pf))
	{
		printf("error\n");
	}
	else if(feof(pf))
	{
		printf("end of file\n");
	}
	return 0;
}