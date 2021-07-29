#pragma once

#define MAX_SIZE 10
#include<stdio.h>
#include<string.h>
#include<assert.h>
typedef int SQDataType;

typedef struct SeqList
{
	SQDataType* a;
	int size;
	int capacity;
}SL;

//��ʼ��
void SeqListInit(SL* psl);
//β��
void SeqListPushBack(SL* psl, SQDataType x);
//ͷ��
void SeqListPushFront(SL* psl, SQDataType x);
//βɾ
void SeqListPopBack(SL* psl);
//ͷɾ
void SeqListPopFront(SL* psl);
//��ӡ
void SeqListPrint(SL* psl);
//�������
void SeqListCheckCapacity(SL* psl);
//ָ��λ������
void SeqListInsert(SL* psl, int pos, SQDataType x);
//ָ��λ��ɾ��
void SeqListErase(SL* psl, int pos);
//�ͷſռ�
void SeqListDestory(SL* psl);
//����
void SeqListFind(SL* psl, SQDataType x);
//�޸�ָ��λ��
void SeqListModity(SL* psl, int pos,SQDataType x);
