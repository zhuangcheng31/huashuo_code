//once pragma
#include<stdio.h>
//����
typedef int SListDataType;

//�ڵ� ���˷ѿռ� 
typedef struct SListNode{
	SListDataType data;
	struct SListNode* next;
}SListNode;

//struct SList{
//	SListNode* head;
//  SListNode* tail;
//};

void SListPushBack(SListNode **pphead, SListDataType x);//β��
void SListPopBack(SListNode **pphead);  //βɾ
void SListPushFront(SListNode **pphead, SListDataType x); //
void SListPopFront(SListNode **pphead);
void SListPrint(SListNode *phead, SListDataType);


