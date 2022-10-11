链式队列.cpp


/**
 * 定义一个链表
 */
typedef struct LinkNode{
	int data;
	struct LinkNode *next;
}LinkNode;

/**
 * 定义链式队列
 * 初始时，front=rear=NULL
 */
typedef struct LinkQueue{
	LinkNode *front, *rear;
}LinkQueue;

/**
 * 这里就出队要注意一下，其他很简单
 */
bool DeQueue(LinkQueue &Q, int &x){
	if(Q.front==Q.rear){
		return false;
	}

	LinkNode *p=Q.front->next;
	x=p->data;

	Q.front->next=p->next;
	if(p==Q.rear){	//如果原队列只有一个结点，则删除后就剩头结点了，也就是队空了
		Q.rear=Q.front;
	}
}
