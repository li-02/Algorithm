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

// 尾插法
LinkList List_TailInsert(LinkList &L){
    LNode *s; // 新结点
    LNode *r=L; // r代替L指向
    L=(LinkList)malloc(sizeof(LNode));
    int x;
    cin>>x;
    while(!=9999){
        s=(LNode *)malloc(sizeof(LNode));
        s->data=x;
        r->next=s;
        r=s;
        cin>>x;
    }
    r->next=NULL;
    return L;

}

// 按照序号i查找值
LNode * GetELem(LinkList L,int i){

}

// 按照值查找结点
LNode * GetELem2(LinkList L,int e){
    LNode *p=L->next;
    while(p!=NULL&&p->data!=e){
        p=p->next;
    }
    return p;
}

// 插入结点，序号i的位置
void InsertElem(LinkList &L,int i,int e){
    LNode *s=GetELem(L,i-1);
    LNode *p;
    p->data=e;

    p->next=s->next;
    s->next=p;
}

// 删除结点，序号为i
void DeleteElem(LinkList &L,int i){
    LNode *p=GetELem(L,i-1);
    
    LNode *q=p->next;
    p->next=q->next;

    free(q);
}