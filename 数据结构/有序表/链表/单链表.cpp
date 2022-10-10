#include<iostream>
using namespace std;

typedef struct linklist{
    int data;
    struct linklist *next;
}LNode, *LinkList;

// 一般都要加一个头结点,数据域空,指针域指向第一个元素结点

// 头插法
LinkList List_HeadInsert(LinkList &L){
    LNode *s;
    int x;
    L=(LinkList)malloc(sizeof(LNode)); //创建头结点
    L->next=NULL;

    cin>>x;
    while(x!=9999){
        s=(LNode*)malloc(sizeof(LNode)); //创建新结点
        s->data=x;

        s->next=L->next;
        L->next=s;

        cin>>x;
    }
    return L;
}