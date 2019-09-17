/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if (headA == nullptr || headB == nullptr)
        {
            return nullptr;
        }
        ListNode *p = headA;
        ListNode *q = headB;
        while (p != q)
        {
            if (p == nullptr)
            {
                p = headB;
            }
            else
            {
                p = p->next;
            }
            if (q == nullptr)
            {
                q = headA;
            }
            else
            {
                q = q->next;
            }
        }
        return p;
    }
};
