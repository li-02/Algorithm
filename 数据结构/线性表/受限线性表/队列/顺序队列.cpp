队列.cpp
/**
 * 初始时，front=rear=0;
 * 进队时，先进队，队尾再加一
 * 出队时，先出队，队尾再加一
 * 队空，front=rear=0
 * 队满，不能用等于maxsize判断，此时是假溢出
 */
typedef struct SqQueue{
	int data[MaxSize];
	int front,rear;
}SqQueue;