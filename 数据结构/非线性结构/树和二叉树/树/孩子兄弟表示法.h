/**
 * @file 孩子兄弟表示法.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-13
 * 
 * @copyright Copyright (c) 2022
 * 
 * 结点的结构
 * 指向节点第一个孩子的指针
 * 指向节点下一个兄弟的指针
 */

typedef struct CSNode{
    int date;
    struct CSNode *firstchild,*nextsibling;
}CSNode;