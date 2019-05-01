#include <iostream>
using namespace std;

struct ListNode
{
    int value;
    ListNode *pNext;
};

ListNode *Merge(ListNode *pHead1, ListNode *pHead2)
{
    if (pHead1 == nullptr)
    {
        return pHead2;
    }
    if (pHead2 == nullptr)
    {
        return pHead1;
    }
    ListNode *ReturnHead = nullptr;

    if (pHead1->value < pHead2->value)
    {
        ReturnHead = pHead1;
        ReturnHead->pNext = Merge(pHead1->pNext, pHead2);
    }
    else
    {
        ReturnHead = pHead2;
        ReturnHead->pNext = Merge(pHead1, pHead2->pNext);
    }

    return ReturnHead;
}