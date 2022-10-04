#include <iostream>
#include <vector>
using namespace std;

typedef struct ListNode
{
    int val;
    struct ListNode *next;
} ListNode, *LinkList;

// header insert

LinkList List_HeadInsert(LinkList &L)
{
    ListNode *s;
    int x;
    L = (LinkList)malloc(sizeof(ListNode));
    L->next = NULL;
    cin >> x;
    while (1)
    {
        s = (ListNode *)malloc(sizeof(ListNode));
        s->val = x;
        s->next = L->next;
        L->next = s;
        cin >> x;
    }
    return L;
}