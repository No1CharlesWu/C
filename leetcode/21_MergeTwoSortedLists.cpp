#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
  public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode preHead(0);
        ListNode *p = &preHead;

        while (l1 || l2)
        {
            int temp1 = (l1 ? l1->val : INT_MAX);
            int temp2 = (l2 ? l2->val : INT_MAX);
            if (temp1 <= temp2)
            {
                p->next = new ListNode(temp1);
                l1 = l1->next;
            }
            else
            {
                p->next = new ListNode(temp2);
                l2 = l2->next;
            }
            p = p->next;
        }
        return preHead.next;
    }
};

int main()
{

    // system("pause");
    return 0;
}
