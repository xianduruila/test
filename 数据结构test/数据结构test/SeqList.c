#define  _CRT_SECURE_NO_WARNINGS
#include"数据结构test.h"
//void SeqListInit(SL* psl)
//{
//	memset(psl->a, 0, sizeof(SQDataType) * MAX_SIZE);
//	psl->size = 0;
//
//}
////尾插
//void SeqListPushBack(SL* psl, SQDataType x)
//{
//	if (psl->size >= MAX_SIZE)
//	{
//		printf("SeqList is full\n");
//		return;
//	}
//	psl->a[psl->size] = x;
//	psl->size++;
//
//}
////头插
//void SeqListPushFront(SL* psl, SQDataType x)
////尾删
//void SeqListPopBack(SL* psl)
////头删
//void SeqListPopFront(SL* psl)
////////////////////////////////////////////////////////////////////////////////////////////
//初始化
void SeqListInit(SL* psl)
{
	psl->a = NULL;
	psl->size = 0;
	psl->capacity = 0;

}
//检查容量
void SeqListCheckCapacity(SL* psl)
{
	int newcapacity = psl->capacity == 0 ? 4 : psl->capacity * 2;
	if (psl->size >= psl->capacity)
	{
		SQDataType* tmp = (SQDataType*)realloc(psl->a, newcapacity * sizeof(SQDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			psl->a = tmp;
			psl->capacity = newcapacity;
		}
	}
}
//尾插
void SeqListPushBack(SL* psl, SQDataType x)
{
	
	psl->a[psl->size] = x;
	psl->size++;

}
//头插
void SeqListPushFront(SL* psl, SQDataType x)
{
	int end = psl->size - 1;
	while (end >= 0)
	{
		psl->a[end + 1] = psl->a[end];
		end--;
	}
	psl->a[0] = x;
	psl->size++;
}
//尾删
void SeqListPopBack(SL* psl)
{
	assert(psl->size > 0);//断言
	psl->size--;

}
//头删
void SeqListPopFront(SL* psl)
{
	assert(psl->size > 0);
	int start = 1;
	while (start < psl->size)
	{
		psl->a[start - 1] = psl->a[start];
		start++;
	}
	psl->size -= 1;
}
//打印
void SeqListPrint(SL* psl)
{
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->a[i]);
	}
	printf("\n");
}

//给指定位置插入数据
void SeqListInsert(SL* psl, int pos, SQDataType x)
{
	assert(pos < psl->size);
	SeqListCheckCapacity(psl);
	int end = psl->size - 1;
	while (end >= pos)
	{
		psl->a[end + 1] = psl->a[end];
		--end;
	}
	psl->a[pos] = x;
	psl->size++;
}
void SeqListErase(SL* psl, int pos)
{
	assert(pos < psl->size);
	int start = pos+1;
	while (start < psl->size)
	{
		psl->a[start - 1] = psl->a[start];
		++start;
		psl->size--;

	}

}
//释放空间
void SeqListDestory(SL* psl)
{
	free(psl->a);
	psl->a = NULL;
	psl->size = 0;
	psl->capacity = 0;
}
//查找
void SeqListFind(SL* psl, SQDataType x)
{
	for (int i = 0; i < psl->size; i++)
	{
		if (psl->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
//指定位置修改
void SeqListModity(SL* psl,int pos, SQDataType x)
{
	assert(pos < psl->size);
	psl->a[pos] = x;

}