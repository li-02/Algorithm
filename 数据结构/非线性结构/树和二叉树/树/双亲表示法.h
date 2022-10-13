#include <iostream>
using namespace std;

#define maxsize 100

/**
 * @brief 定义一个结点
 *
 */
typedef struct PNode
{
    int date;
    int parent; //双亲位置
} PNode;

/**
 * @brief 定义整个树
 *
 */
typedef struct PTree
{
    PNode nodes[maxsize];
    int n; //节点数
};
