顺序栈.cpp

/**
 *  栈顶指针初始top=-1
 *  进栈，先加一再赋值
 *  出栈，先出栈再减一
 *  栈空，top==-1
 */
#define MaxSize 100
typedef struct SqStack{
	int data[MaxSize];
	int top;	//栈顶指针
}SqStack;

/**
 * 初始化
 */
void InitStack(SqStack &S){
	S.top=-1;
}

/**
 * 判断栈空
 */
bool StackEmpty(SqStack S){
	if(S.top==-1){
		return true;
	}else{
		return false;
	}
}

/**
 * 进栈
 */
bool push(SqStack &S, int e){
	if(S.top==MaxSize-1){	// 栈满了
		return false;
	}
	S.data[++S.top]=e;	// 先加一后赋值
	return true;
}

/**
 * 出栈
 */
bool pop(SqStack &S, int &e){
	if(S.top==-1){
		return false;
	}
	e=S.data[S.top--];
	return true;
}

/**
 * 读取栈顶元素
 */
bool GetTop(SqStack S, int e){
	if(S.top==-1){
		return false;
	}
	e=S.data[S.top];
	return true;
}





