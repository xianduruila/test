#define  _CRT_SECURE_NO_WARNINGS
#include"���ݽṹtest.h"

void menu()
{
	printf("****************************************************\n");
	printf("1.β�����ݣ� 2.ͷ������\n");
	printf("3.βɾ���ݣ� 3.ͷɾ����\n");
	printf("4.��ӡ��     -1.�˳�   \n");
	
	printf("****************************************************\n");
	printf("��������Ĳ���ѡ��\n");
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
			printf("��������Ҫβ������ݣ���-1����:>");
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