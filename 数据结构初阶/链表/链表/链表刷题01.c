#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>


/*
//反转单链表；https://leetcode-cn.com/problems/reverse-linked-list/
typedef struct ListNode{
	int val;
	struct ListNode*next;
}ListNode;
struct ListNode *reverseList(struct ListNode* head){
	if (head == NULL || head->next == NULL){  //这种情况是空结点或者只有一个结点
		return head;
	}
	//方法一：
	struct ListNode*n1 = NULL, *n2 = head, *n3 = head->next;
	while (n2){
		n2->next = n1;   //取n2下来插到n1前（n1开始为NULL）,
		n1 = n2;    //更新n1    (更新次序原则：从操作点向远离方向更新)
		n2 = n3;     //更新n2
		if (n3){
			n3 = n3->next;  //更新n3 （更新之前先判断n3是否为NULL;如果不加if，那么当n2是尾结点的时候，n3就已经是NULL了，这时，n3->next会报错)
		}
	}
	return n1;  //这里为什么是返回n1呢？因为循环结束条件是n2==NULL,此时，n3==NULL,即n2是老链表的尾结点，
}   

//方法二：//取cur头插到以newhead为头的新链表中
//     struct ListNode*cur=head,*newHead=NULL;
//     while(cur){
//        struct ListNode*next=cur->next; //先把cur->next保存起来
//        //头插
//        cur->next=newHead;
//        newHead=cur; //更新newhead
//        cur=next; //更新 cur

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
//知识点：如何快速在编译器中构建oj测试用例
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


//题目二：删除链表中等于给定值 val 的所有节点。
//示例 :
//输入 : 1->2->6->3->4->5->6, val = 6
//输出 : 1->2->3->4->5
typedef struct ListNode Node;
typedef struct ListNode{
	int val;
	struct ListNode *next;
};
Node* removeElement(Node *head, int val){
	Node *prev = NULL;
	Node *cur = head;
	while (cur){
		if (cur->val == val){   // cur是要删除的结点
			if (cur == head){          //cur正好是头节点
				head = cur->next;
				free(cur);
				cur = head;
			}
			else{						//cur不是头节点
				prev->next = cur->next;
				free(cur);
				cur = prev->next;
			}
		}
		else{					 //cur结点不是要删除的结点
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


