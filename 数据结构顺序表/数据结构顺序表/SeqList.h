#include<stdio.h>
#pragma once

//��̬˳�����ƣ��̶���С��
typedef  int SLDataType;
#define N  10
typedef struct SeqList{

	int a[10];
	int size;
}SL,SeqList;

//β�� α�� ͷ�� ͷɽ
void SeqListinit;
void SeqListPushBack(SL* ps, SLDataType x);  //β��
void SeqListPopBack(struct SeqList* ps);				//
void SeqListPushFront(struct SeqList* ps, SLDataType x);
void SeqListPopFront(struct SeqList* ps);

//����λ��
void SeqListInsert(struct SeqList*ps, int pos,SLDataType x);
void SeqListErase(SL*ps, int pos);

//˳������
int SeqListFind(SeqList* psl, SLDataType x);