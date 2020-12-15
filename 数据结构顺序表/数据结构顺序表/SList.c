#include<stdio.h>
#include"SeqList.h"
SListNode *BuySListNode(SListDataType x){
	SListNode*newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL){
		printf("ÉêÇëÊ§°Ü");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;
	tail->next = newNode;
}


void SListPrint(SListNode**pphead){  //´òÓ¡
	SListNode*cur = phead;
	while (cur != NULL){
		printf("%d->", cur->data);
		cur = cur->next;
	}
}

void SListPushBack(SListNode**phead, SListDataType x){  //Î²²å
	if (phead == NULL){

	}
	//ÕÒÎ²
	SListNode* tail = phead;
	while (tail->next != NULL){
		tail = tail->next;
	}
	
}


void SListInsertAfter(SListNode* pos, SListDataType x){
	assert(pos);
	SListNode *newNode->next=post
}
