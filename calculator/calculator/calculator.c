#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void menu()
{
	printf("*******************\n");
	printf("**1. add  2. sub **\n");
	printf("**3. mul  4. div **\n");
	printf("***0. exit    *****\n");
}
int add(int x, int y)
{
	return x + y;
}
int sub(int x,int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x,int y)
{
	return x / y;
}
int main()
{
	int input = 0;
	int a = 0;
	int b = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		printf("请输入两个操作数:>");
		scanf("%d%d", &a, &b);
		if (input >= 0 && input <= 4)
		{
			int (*pfArr[])(int, int) = { 0,add,sub,mul,div };
			int ret = pfArr[input](a, b);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出\n");
		}
		else
		{
			printf("请重新输入\n");
		}
	} while (input);
	return 0;
}