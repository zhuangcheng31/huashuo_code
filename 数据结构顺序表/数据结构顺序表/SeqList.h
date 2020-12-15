#include<stdio.h>
#pragma once

//静态顺序表设计（固定大小）
typedef  int SLDataType;
#define N  10
typedef struct SeqList{

	int a[10];
	int size;
}SL,SeqList;

//尾插 伪善 头茬 头山
void SeqListinit;
void SeqListPushBack(SL* ps, SLDataType x);  //尾插
void SeqListPopBack(struct SeqList* ps);				//
void SeqListPushFront(struct SeqList* ps, SLDataType x);
void SeqListPopFront(struct SeqList* ps);

//任意位置
void SeqListInsert(struct SeqList*ps, int pos,SLDataType x);
void SeqListErase(SL*ps, int pos);

//顺序表查找
int SeqListFind(SeqList* psl, SLDataType x);