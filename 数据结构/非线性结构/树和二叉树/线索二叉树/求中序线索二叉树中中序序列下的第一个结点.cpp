// 求中序线索二叉树中中序序列下的第一个结点.cpp
#include "线索二叉树-链式存储.h"

ThreadNode *FirstNode(ThreadNode *p)
{
	while (p->ltag == 0)
	{
		p = p->lchild;
	}
	return p; //最左下结点，不一定是叶子结点
}