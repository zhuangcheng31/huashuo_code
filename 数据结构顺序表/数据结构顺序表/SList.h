//once pragma
#include<stdio.h>
//链表
typedef int SListDataType;

//节点 不浪费空间 
typedef struct SListNode{
	SListDataType data;
	struct SListNode* next;
}SListNode;

//struct SList{
//	SListNode* head;
//  SListNode* tail;
//};

void SListPushBack(SListNode **pphead, SListDataType x);//尾插
void SListPopBack(SListNode **pphead);  //尾删
void SListPushFront(SListNode **pphead, SListDataType x); //
void SListPopFront(SListNode **pphead);
void SListPrint(SListNode *phead, SListDataType);


