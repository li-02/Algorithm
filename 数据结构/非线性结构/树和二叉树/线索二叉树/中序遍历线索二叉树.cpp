#include"线索二叉树-链式存储.h"

void Inorder(ThreadNode *T){
	for(ThreadNode *p=FirstNode(T);p!=NULL;p=NextNode(p)){
		visit(p);
	}
}
ThreadNode *NextNode(ThreadNode *p){
	if(p->rtag==1){
		return p->rchild;	//rtag==1,直接指向后继
	}else{
		return FirstNode(p->rchild);	//指向右孩子，然后找到右孩子子树的第一个结点
	}
}
ThreadNode *FirstNode(ThreadNode *p){
	while(p->ltag==0){
		p=p->lchild;
	}
	return p;	//最左下结点，不一定是叶子结点
}
void visit(ThreadNode *p){
    
}