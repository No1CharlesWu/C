/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
 */
/**
 * Definition for singly-linked list.
 */
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (head == nullptr)
        {
            return false;
        }
        ListNode *p1 = head;
        ListNode *p2 = head->next;
        while (p1 != nullptr && p2 != nullptr && p2->next != nullptr)
        {
            if (p1->val == p2->val)
            {
                return true;
            }
            p1 = p1->next;
            p2 = p2->next->next;
        }
        return false;
    }
};
