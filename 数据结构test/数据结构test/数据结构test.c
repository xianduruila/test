#define  _CRT_SECURE_NO_WARNINGS
#include"数据结构test.h"

void menu()
{
	printf("****************************************************\n");
	printf("1.尾插数据， 2.头插数据\n");
	printf("3.尾删数据， 3.头删数据\n");
	printf("4.打印，     -1.退出   \n");
	
	printf("****************************************************\n");
	printf("请输入你的操作选项\n");
}
int main()
{
	SL s;
	SeqListInit(&s);
	SeqListCheckCapacity(&s);
	int option = 0;
	while (option != -1)
	{
		menu();
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			printf("请输入你要尾插的数据，以-1结束:>");
			int x = 0;
			scanf("%d", &x);
			do
			{
				if (x != -1)
				{
					SeqListPushBack(&s, x);
				}
			} while (x != -1);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		}
	}
	SeqListPrint(&s);
	SeqListDestory(&s);
	return 0;
}