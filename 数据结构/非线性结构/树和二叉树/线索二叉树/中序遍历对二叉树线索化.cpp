中序遍历对二叉树线索化.cpp


void CreateInThread(ThreadTree T){
    ThreadTree pre=NULL;
    if(T!=NULL){
        InThread(T,pre);        //非空二叉树线索化
        pre->rchild=NULL;       //最后一个结点的右指针指向NULL
        pre->rtag=1;
    }
}
void InThread(ThreadTree &p,ThreadTree &pre){
    if(p!=NULL){
        InThread(p->lchild,pre);    //递归，线索化左子树
        if(p->lchild==NULL){    //左子树为空，建立前驱线索
            p->lchild=pre;
            p->ltag=1;
        }
        
        if(pre!=NULL&&pre->rchild==NULL){  //建立前驱结点的后继线索
            pre->rchild=p;
            pre->rtag=1;
        }
        pre=p;  //标记当前结点成为前驱结点
        InThread(p->rchild,pre);    //递归线索化右子树
    }
}