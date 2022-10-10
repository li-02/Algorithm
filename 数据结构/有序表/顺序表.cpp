#include <iostream>
#define max 100
using namespace std;

// static
typedef struct num
{
    int data[max];
    int length;
} SqList;

// dynamic
typedef struct num1
{
    int *data;
    int MaxSize, length;
} SqList1;
// L.data=new int[max];

// insert
bool insert(SqList1 &l, int i, int e)
{
    // 判断i是否有效

    // 判断当前的存储空间是否满了

    // 插入操作

    // 表长加1

    return true;
}

// delete
bool delete_elem(SqList1 &l, int i, int e)
{
    // 判断i是否有效

    // 删除操作

    // 表长减1

    return true;
}