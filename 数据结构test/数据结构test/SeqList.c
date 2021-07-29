#define  _CRT_SECURE_NO_WARNINGS
#include"���ݽṹtest.h"
//void SeqListInit(SL* psl)
//{
//	memset(psl->a, 0, sizeof(SQDataType) * MAX_SIZE);
//	psl->size = 0;
//
//}
////β��
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
////ͷ��
//void SeqListPushFront(SL* psl, SQDataType x)
////βɾ
//void SeqListPopBack(SL* psl)
////ͷɾ
//void SeqListPopFront(SL* psl)
////////////////////////////////////////////////////////////////////////////////////////////
//��ʼ��
void SeqListInit(SL* psl)
{
	psl->a = NULL;
	psl->size = 0;
	psl->capacity = 0;

}
//�������
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
//β��
void SeqListPushBack(SL* psl, SQDataType x)
{
	
	psl->a[psl->size] = x;
	psl->size++;

}
//ͷ��
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
//βɾ
void SeqListPopBack(SL* psl)
{
	assert(psl->size > 0);//����
	psl->size--;

}
//ͷɾ
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
//��ӡ
void SeqListPrint(SL* psl)
{
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->a[i]);
	}
	printf("\n");
}

//��ָ��λ�ò�������
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
//�ͷſռ�
void SeqListDestory(SL* psl)
{
	free(psl->a);
	psl->a = NULL;
	psl->size = 0;
	psl->capacity = 0;
}
//����
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
//ָ��λ���޸�
void SeqListModity(SL* psl,int pos, SQDataType x)
{
	assert(pos < psl->size);
	psl->a[pos] = x;

}