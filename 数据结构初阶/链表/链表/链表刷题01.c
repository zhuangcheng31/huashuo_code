#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>


/*
//��ת������https://leetcode-cn.com/problems/reverse-linked-list/
typedef struct ListNode{
	int val;
	struct ListNode*next;
}ListNode;
struct ListNode *reverseList(struct ListNode* head){
	if (head == NULL || head->next == NULL){  //��������ǿս�����ֻ��һ�����
		return head;
	}
	//����һ��
	struct ListNode*n1 = NULL, *n2 = head, *n3 = head->next;
	while (n2){
		n2->next = n1;   //ȡn2�����嵽n1ǰ��n1��ʼΪNULL��,
		n1 = n2;    //����n1    (���´���ԭ�򣺴Ӳ�������Զ�뷽�����)
		n2 = n3;     //����n2
		if (n3){
			n3 = n3->next;  //����n3 ������֮ǰ���ж�n3�Ƿ�ΪNULL;�������if����ô��n2��β����ʱ��n3���Ѿ���NULL�ˣ���ʱ��n3->next�ᱨ��)
		}
	}
	return n1;  //����Ϊʲô�Ƿ���n1�أ���Ϊѭ������������n2==NULL,��ʱ��n3==NULL,��n2���������β��㣬
}   

//��������//ȡcurͷ�嵽��newheadΪͷ����������
//     struct ListNode*cur=head,*newHead=NULL;
//     while(cur){
//        struct ListNode*next=cur->next; //�Ȱ�cur->next��������
//        //ͷ��
//        cur->next=newHead;
//        newHead=cur; //����newhead
//        cur=next; //���� cur

//    }
//    return newHead;


void SListprint(ListNode**pphead){
	ListNode*cur = *pphead;
	while (cur != NULL){ 
		printf("%d->", cur->val);
		cur = cur->next;
	}
	printf("NULL\n");
}
//֪ʶ�㣺��ο����ڱ������й���oj��������
int main(){

	ListNode*n1 = (ListNode*)malloc(sizeof(ListNode));
	n1->val = 1;

	ListNode*n2 = (ListNode*)malloc(sizeof(ListNode));
	n2->val = 2;

	ListNode*n3 = (ListNode*)malloc(sizeof(ListNode));
	n3->val = 3;

	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;    //1->2->3->NULL
	
	ListNode *head= reverseList(n1);
	SListprint(&head);
	system("pause");
	return 0;
}    */


//��Ŀ����ɾ�������е��ڸ���ֵ val �����нڵ㡣
//ʾ�� :
//���� : 1->2->6->3->4->5->6, val = 6
//��� : 1->2->3->4->5
typedef struct ListNode Node;
typedef struct ListNode{
	int val;
	struct ListNode *next;
};
Node* removeElement(Node *head, int val){
	Node *prev = NULL;
	Node *cur = head;
	while (cur){
		if (cur->val == val){   // cur��Ҫɾ���Ľ��
			if (cur == head){          //cur������ͷ�ڵ�
				head = cur->next;
				free(cur);
				cur = head;
			}
			else{						//cur����ͷ�ڵ�
				prev->next = cur->next;
				free(cur);
				cur = prev->next;
			}
		}
		else{					 //cur��㲻��Ҫɾ���Ľ��
			prev = cur;
			cur = cur->next;
		}
	}
	return head;
}
void Listprint(Node**pphead){
	Node*cur = *pphead;
	while (cur != NULL){
		printf("%d->", cur->val);
		cur = cur->next;
	}
	printf("NULL\n");
}
int main(){
	Node*n1 = (Node*)malloc(sizeof(Node));
	n1->val = 1;
	Node*n2 = (Node*)malloc(sizeof(Node));
	n2->val = 2;
	Node*n3 = (Node*)malloc(sizeof(Node));
	n3->val = 6;
	Node*n4 = (Node*)malloc(sizeof(Node));
	n4->val = 3;
	Node*n5 = (Node*)malloc(sizeof(Node));
	n5->val = 6;
	Node*n6 = (Node*)malloc(sizeof(Node));
	n6->val = 5;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	n6->next = NULL;
	Node*head=removeElement(n1,6);
	Listprint(&head);

	system("pause");
	return 0;
}


