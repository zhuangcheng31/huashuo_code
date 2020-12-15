#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

//将两个升序链表合并为一个新的 升序 链表并返回。
//新链表是通过拼接给定的两个链表的所有节点组成的。
//https://leetcode-cn.com/problems/merge-two-sorted-lists/description/	

typedef struct ListNode{
	int val;
	struct ListNode*next;
}Node;
////方法一：
//Node* mergeTwoLists(Node*L1,Node*L2 ){
//	if (L1 == NULL){
//		return L2;
//	}
//	if (L2 == NULL){
//		return L1;
//	}
//	Node*head = NULL; Node*tail = NULL; //先定义两个结点指针，head用于返回，tail用于尾插；
//	if (L1->val < L2->val){ 
//		head = L1; //这个head 用于返回
//		tail = L1;
//		L1 = L1->next;
//	}
//	else{
//		head = L2;
//		tail = L2;
//		L2 = L2->next;
//	}
//	//取小的尾插
//	while (L1&&L2){
//		if (L1->val < L2->val){
//			tail->next = L1;	//L1值小的话就尾插L1
//			L1 = L1->next;		//更新L1
//		}
//		else{
//			tail->next = L2;    //L2值小的话就尾插L2
//			L2 = L2->next;     //更新L2
//		}
//
//		tail = tail->next;     //记得更新 tail
//	}
////===========为了应对当其中一个链表取空了，另个要继续而不能停下===============
//	if (L1){     
//		tail->next = L1;
//	}
//	else{
//		tail->next = L2;
//	}
////=================================================================================
//	return head;
//}

//改进方法一：
Node*mergeTwoLists(Node*L1,Node*L2){
	if (L1 == NULL){
		return L2;
	}
	if (L2 == NULL){
		return L1;
	}
	Node*head = NULL; Node*tail = NULL;
	//带哨兵位的头节点，他不存有效数据，方便尾插
	head = tail = (Node*)malloc(sizeof(Node));
	//取小的尾插
	while (L1&&L2){
		if (L1->val < L2->val){
			tail->next = L1;
			L1 = L1->next;
		}
		else{
			tail->next = L2;
			L2 = L2->next;
		}
		tail = tail->next;
	}
	if (L1){
		tail->next = L1;
	}
	else{
		tail->next = L2;
	}
	Node*realhead = head->next;
	return realhead;
}
void ListPrint(Node**pphead){
	Node*cur = *pphead;
	while (cur){
		printf("%d->", cur->val);
		cur = cur->next;
	}
	printf("NULL\n");
}
int main(){
	Node*n1 = (Node*)malloc(sizeof(Node));
	n1->val = 1;
	Node*n2 = (Node*)malloc(sizeof(Node));
	n2->val = 1;
	Node*n3 = (Node*)malloc(sizeof(Node));
	n3->val = 1;
	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;

	Node*n4 = (Node*)m alloc(sizeof(Node));
	n4->val = 1;
	Node*n5 = (Node*)malloc(sizeof(Node));
	n5->val = 3;
	Node*n6 = (Node*)malloc(sizeof(Node));
	n6->val = 4;
	n4->next = n5;
	n5->next = n6;
	n6->next = NULL;
	Node*head=mergeTwoLists(n1, n4);
	ListPrint(&head);
	system("pause") ;
	return 0;
}