#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

/* 
//给定一个头结点为 head 的非空单链表，返回链表的中间结点。
//如果有两个中间结点，则返回第二个中间结点。
//https://leetcode-cn.com/problems/middle-of-the-linked-list/description/

typedef struct ListNode{
	int val;
	struct ListNode*next;
}Node;
Node* MiddleNode(Node*head){
	Node*slow = head;
	Node*fast = head;
	while (fast&&fast->next){   //fast==NULL是偶数个结点的情况；fast->next==NULL是奇数个结点的情况；
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}
//void ListPrint(Node**pphead){
//	Node*cur = *pphead;
//	while (cur){
//		printf("%d->", cur->val);
//		cur = cur->next;
//	}
//	printf("NULL\n");
//}
void ListPrint(Node*pphead){                //此段和上面注释的一段执行结果一样
		
		while (pphead){
			printf("%d->", pphead->val);
			pphead = pphead->next;
		}
		printf("NULL\n");
	}
int main(){
	Node*n1 = (Node*)malloc(sizeof(Node));
	n1->val = 1;
	Node*n2 = (Node*)malloc(sizeof(Node));
	n2->val = 2;
	Node*n3 = (Node*)malloc(sizeof(Node));
	n3->val = 3;
	Node*n4 = (Node*)malloc(sizeof(Node));
	n4->val = 4;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;
	Node*head=MiddleNode(n1);  //head 是中间节点地址（头指针）
	ListPrint(head);
	system("pause");
	return 0;
}
*/

/*
//输入一个链表，输出该链表中倒数第K个结点
typedef struct ListNode{
	int val;
	struct ListNode*next;
}Node;
Node* FindKthToTail(Node*head, int k){
	Node*fast = head;
	Node*slow = head;
	while (k--){
		if (fast){
			fast = fast->next;
		}
		else{
			return NULL;
		}
	}
		while (fast){
			slow = slow->next;
			fast = fast->next;
		}
		return slow;
}
void ListPrint(Node*pphead){                
	while (pphead){
		printf("%d->", pphead->val);
		pphead = pphead->next;
	}
	printf("NULL\n");
}
int main(){
	Node*n1 = (Node*)malloc(sizeof(Node));
	n1->val = 1;
	Node*n2 = (Node*)malloc(sizeof(Node));
	n2->val = 2;
	Node*n3 = (Node*)malloc(sizeof(Node));
	n3->val = 3;
	Node*n4 = (Node*)malloc(sizeof(Node));
	n4->val = 4;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;
	int k = 2;  //倒数第K个结点
	Node*head = FindKthToTail(n1, k);  //head 是中间节点地址（头指针）
	ListPrint(head);
	system("pause");
	return 0;
}  */