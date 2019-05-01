#include <algorithm>
#include <iostream>

using namespace std;

struct ListNode
{
    int value;
    ListNode *next;
};

void RemoveNode(ListNode **pHead, int value)
{
    if (pHead == nullptr || *pHead == nullptr)
    {
        return;
    }
    ListNode *pToBeDelete = nullptr;
    if ((*pHead)->value == value)
    {
        pToBeDelete = *pHead;
        *pHead = (*pHead)->next;
    }
    else
    {
        ListNode *pNode = *pHead;
        while (pNode->next != nullptr && pNode->next->value != value)
        {
            pNode = pNode->next;
        }
        if (pNode->next != nullptr && pNode->next->value == value)
        {
            pToBeDelete = pNode->next;
            pNode->next = pNode->next->next;
        }
    }
    if (pToBeDelete != nullptr)
    {
        delete pToBeDelete;
        pToBeDelete = nullptr;
    }
}