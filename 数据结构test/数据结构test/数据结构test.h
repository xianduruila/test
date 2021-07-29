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

//初始化
void SeqListInit(SL* psl);
//尾插
void SeqListPushBack(SL* psl, SQDataType x);
//头插
void SeqListPushFront(SL* psl, SQDataType x);
//尾删
void SeqListPopBack(SL* psl);
//头删
void SeqListPopFront(SL* psl);
//打印
void SeqListPrint(SL* psl);
//检查容量
void SeqListCheckCapacity(SL* psl);
//指定位置增加
void SeqListInsert(SL* psl, int pos, SQDataType x);
//指定位置删除
void SeqListErase(SL* psl, int pos);
//释放空间
void SeqListDestory(SL* psl);
//查找
void SeqListFind(SL* psl, SQDataType x);
//修改指定位置
void SeqListModity(SL* psl, int pos,SQDataType x);
