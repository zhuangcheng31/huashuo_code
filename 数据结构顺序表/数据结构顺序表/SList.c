#include<stdio.h>
#include"SeqList.h"
SListNode *BuySListNode(SListDataType x){
	SListNode*newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL){
		printf("����ʧ��");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;
	tail->next = newNode;
}


void SListPrint(SListNode**pphead){  //��ӡ
	SListNode*cur = phead;
	while (cur != NULL){
		printf("%d->", cur->data);
		cur = cur->next;
	}
}

void SListPushBack(SListNode**phead, SListDataType x){  //β��
	if (phead == NULL){

	}
	//��β
	SListNode* tail = phead;
	while (tail->next != NULL){
		tail = tail->next;
	}
	
}


void SListInsertAfter(SListNode* pos, SListDataType x){
	assert(pos);
	SListNode *newNode->next=post
}
