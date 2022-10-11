链栈.cpp

/**
 * 一般没有头结点
 * 优点是便于多个栈共享存储空间和提高效率
 */
typedef struct ListStack{
	int data;
	struct ListStack *next;
}*ListStack;