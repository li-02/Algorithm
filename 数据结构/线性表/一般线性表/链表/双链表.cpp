双链表.cpp
#include<iostream>
using namespace std;

// 定义
typedef struct DNode{
	int data;
	struct DNode *prior,*next;
}DNode,*DLinkList;

// 插入操作
void InsertElem(DLinkList &L, int i, int e){
	DNode *p=GetELem(L,i-1);	// 找到前驱结点

	DNode *s;
	s->data=e;	// 给新结点赋值

	s->next=p->next; // s和后继结点建立联系, 必须在p->next=s这部操作之前
	p->next->prior=s;

	s->prior=p;
	p->next=s;
}

/**
 * 删除操作
 */
void DeleteElem(DLinkList &L, int i){

	// p是前驱，q是要删除的结点
	p->next=q->next;
	q->next->prior=p;
	free(q);
	
}