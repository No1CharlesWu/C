/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
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
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == nullptr)
        {
            return nullptr;
        }
        ListNode *p = head;
        while(p->next)
        {
            if(p->val == p->next->val)
            {
                ListNode *temp = p->next;
                p->next = temp->next;
                delete temp;
            }
            else
            {
                p = p->next;
            }
            
        }
        return head;
    }
};
