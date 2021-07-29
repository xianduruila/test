#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

//int Mi(int* nums, int numsSize)
//{
//	int x = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		x ^= nums[i];
//	}
//
//	for(int j =0;j<numsSize+1;j++)
//	{
//		x ^= j;
//	}
//	return x;
//}
//int main()
//{
//	int arr[9] = { 1,2,3,4,5,6,7,8,0 };
//	int ret = Mi(arr, 9);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	unsigned char put[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)put;
//	memset(put, 0, 4);
//	pstPimData->ucPim1 = 2;
//	pstPimData->ucData0 = 3;
//	pstPimData->ucData1 = 4;
//	pstPimData->ucData2 = 5;
//	printf("%02x %02x %02x %02x\n", put[0], put[1], put[2], put[3]);
//	return 0;
//}
//#define MAX_SIZE A+B
//
//struct S
//{
//	unsigned char ID : 4;
//	unsigned char Paral : 2;
//	unsigned char state;
//	unsigned char avail : 1;
//
//}*Env_Alarm_Record;
//int main()
//{
//	int A = 2;
//	int B = 3;
//	struct S* pointer = (struct S*)malloc(sizeof(struct S*) * MAX_SIZE);
//	return 0;
//}
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//#define OFFSETOF(struct_name,member_name) (int)(&(((struct_name*)0)->member_name))
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	char ret = (char)a;
//	return 0;
//}
//int main()
//{
//	int x[20] = { 0 };
//	int n = 0;
//	long k = 0;
//	int i = 0;
//	scanf("%ld", &k);
//	while(k)
//	{
//		x[n] = (k % 10)+48;
//		n++;
//		k = k / 10;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%5d", x[i]);
//		printf("\n");
//	}
//	return 0;
//}
//#define SIZEOF(type) sizeof(type)
//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int* p = MALLOC(10, int);
	//int ret = SIZEOF(int);
	//printf("%d\n", ret);
//#define CAT(X,Y) X##Y
//int main()
//{
	/*int HELLOWORLD = 2021;
	printf("%d\n", CAT(HELLO, WORLD));*/
	//#define PRINT(X) printf("the value of "#X"is %d\n",X);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	printf("the value of" "b" "is %d\n", b);
//	PRINT(b);
	/*printf("%d\n", __STDC__);*/
	/*int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		printf("%d ", arr[i]);
	}*/
	/*int arr[5] = { 1,2,3,4,5 };
	int* p = arr;
	p++;*/
	/*printf("%d\n", *p);*/
	//int a = arr[];
	//printf("%d\n", a);

	//int* ptr = (int*)(&arr + 1);
	//printf("%d %d\n", *(arr + 1), *(ptr - 1));
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("ehhe");
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//}

//typedef struct S
//{
//	char name[20];
//	int age;
//	double score;
//
//}S;
//int main()
//{
//	//S s = { "hahaha",18,36.5 };
//	S tmp = { 0 };
//
//	/*FILE* pf = fopen("test.txt", "wb");*/
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	//fwrite(&s, sizeof(S), 1, pf);
//
//	fread(&tmp, sizeof(S), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//
//	fclose(pf);
//	pf = NULL;
//
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
//	struct S s = { 100,3.14f,"hello" };
//	char buf[1024] = { 0 };
//	struct S tmp = { 0 };
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n", buf);
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//	return 0;
//	
//}
//int main()
//{
//	//struct S s = {100,3.14f,"bit"};
//	//FILE* pf = fopen("test.txt", "w");
//	//fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	struct S s = {0};
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), (s.arr));
//	printf("%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	//char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);
//	//fputs(buf, stdout);
//	return 0;
//}
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	fclose(pf);
//	pf = NULL;
	////写文件
	///*fputc('b',pf);
	//fputc('i', pf);
	//fputc('t', pf);*/

	////读文件
	//int ch = fgetc(pf);

	//fclose(pf);
	//pf = NULL;

//	return 0;
//}
//int main()
//{
//	//打开文件test.docx
//
//	FILE* pf = fopen("D:\\ducument\\资料\\test.docx", "r");
//	//1. 绝对路径的写法
//	//r为只读，w为只写
//	//r若文件打开失败则返回一个NULL；w若文件打开失败则创建一个新文件
//
//
//	/*fopen("test.docx", "r");*/
//	//2. 相对路径写法
//	//相对路径中 .表示当前路径（当前C工程所在的位置） .. 表示上一路径（表示在当前C工程位置的上一级路径）../.. 表示上一个路径的上一个路径
//
//	fclose(pf);
//	//关闭文件，释放空间
//	pf == NULL;
//	//将文件指针置为空指针
//	return 0;
//}
////int main()
////{
////	FILE* pfWrite = fopen("test.txt", "w");
////	fputc('b', pfWrite);
////	fputc('i', pfWrite);
////	fputc('t', pfWrite);
////	fclose(pfWrite);
////	pfWrite = NULL;
////	return 0;
////}
////
////int main()
////{
////	
////	FILE* pfRead = fopen("test.txt", "r");
////	printf("%c\n", fgetc(pfRead));
////	printf("%c\n", fgetc(pfRead));
////	printf("%c\n", fgetc(pfRead));
////
////	fclose(pfRead);
////	pfRead = NULL;
////	
////	return 0;
////}