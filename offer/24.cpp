#include <iostream>
using namespace std;

struct ListNode
{
    int value;
    ListNode *next;
};

ListNode *ReverseList(ListNode *pHead)
{
    if (pHead == nullptr || pHead->next == nullptr)
    {
        return pHead;
    }
    ListNode *pNode = pHead;
    ListNode *ReverseHead = nullptr;
    ListNode *pPre = nullptr;
    while (pNode != nullptr)
    {
        ListNode *pNext = pNode->next;
        if (pNext == nullptr)
        {
            ReverseHead = pNode;
        }
        pNode->next = pPre;
        pPre = pNode;
        pNode = pNext;
    }
    return ReverseHead;
}