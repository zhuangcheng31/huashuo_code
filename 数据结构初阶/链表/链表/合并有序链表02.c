#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

//��������������ϲ�Ϊһ���µ� ���� �������ء�
//��������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ�
//https://leetcode-cn.com/problems/merge-two-sorted-lists/description/	

typedef struct ListNode{
	int val;
	struct ListNode*next;
}Node;
////����һ��
//Node* mergeTwoLists(Node*L1,Node*L2 ){
//	if (L1 == NULL){
//		return L2;
//	}
//	if (L2 == NULL){
//		return L1;
//	}
//	Node*head = NULL; Node*tail = NULL; //�ȶ����������ָ�룬head���ڷ��أ�tail����β�壻
//	if (L1->val < L2->val){ 
//		head = L1; //���head ���ڷ���
//		tail = L1;
//		L1 = L1->next;
//	}
//	else{
//		head = L2;
//		tail = L2;
//		L2 = L2->next;
//	}
//	//ȡС��β��
//	while (L1&&L2){
//		if (L1->val < L2->val){
//			tail->next = L1;	//L1ֵС�Ļ���β��L1
//			L1 = L1->next;		//����L1
//		}
//		else{
//			tail->next = L2;    //L2ֵС�Ļ���β��L2
//			L2 = L2->next;     //����L2
//		}
//
//		tail = tail->next;     //�ǵø��� tail
//	}
////===========Ϊ��Ӧ�Ե�����һ������ȡ���ˣ����Ҫ����������ͣ��===============
//	if (L1){     
//		tail->next = L1;
//	}
//	else{
//		tail->next = L2;
//	}
////=================================================================================
//	return head;
//}

//�Ľ�����һ��
Node*mergeTwoLists(Node*L1,Node*L2){
	if (L1 == NULL){
		return L2;
	}
	if (L2 == NULL){
		return L1;
	}
	Node*head = NULL; Node*tail = NULL;
	//���ڱ�λ��ͷ�ڵ㣬��������Ч���ݣ�����β��
	head = tail = (Node*)malloc(sizeof(Node));
	//ȡС��β��
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