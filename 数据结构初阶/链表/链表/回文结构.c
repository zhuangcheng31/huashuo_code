#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct SListNode{
	int val;
	struct SListNode *next;
}Node;
Node*reverseList(Node*n1){     //链表逆置
	Node*head = NULL;
	while (n1){
		Node*tmp = n1->next;
		n1->next = head;
		head = n1;
		n1 = tmp;
	}
	return head;
}
int check_symmery(Node*head){
	//找中间结点
	Node*fast = head, *slow = head;
	while (fast&&fast->next){
		fast = fast->next->next;
		slow = slow->next;
	}

	//后半段逆置
	Node*half_head = reverseList(slow);
	//判断是否相等（循环 一旦不相等直接break，return -1）
	while (half_head&&head){  //这里也可以half_head, 因为head整个链表；half_head是半个链表
		if (head->val != half_head->val){
			return -1;
		}
		head = head->next;
		half_head = half_head->next;
	}
	return 1;
}
int main(){
	Node*n1 = (Node*)malloc(sizeof(Node));
	n1->val = 1;
	Node*n2 = (Node*)malloc(sizeof(Node));
	n2->val = 2;
	Node*n3 = (Node*)malloc(sizeof(Node));
	n3->val = 2;
	Node*n4 = (Node*)malloc(sizeof(Node));
	n4->val = 1;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;
	int ret=check_symmery(n1);
	printf("%d\n", ret);
	system("pause");
	return 0;
}