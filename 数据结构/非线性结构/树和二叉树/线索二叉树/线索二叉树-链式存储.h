// 线索二叉树-链式存储.cpp

#include<iostream>
/**
 * tag = 1,表示指向前驱后继 
 */
typedef struct ThreadNode{
    int data;
    int ltag, rtag;
    struct ThreadNode *lchild, *rchild;
}ThreadNode,*ThreadTree;