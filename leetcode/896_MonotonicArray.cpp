#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;

// // Definition for singly-linked list.
// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };

class Solution
{
  public:
    bool isMonotonic(vector<int> &A)
    {
        bool increasing = false;
        bool decreasing = false;
        if (A.size() == 1)
        {
            return true;
        }

        for (int i = 1; i < A.size(); i++)
        {
            if (A[i] > A[i - 1])
            {
                increasing = true;
            }
            else if (A[i] < A[i - 1])
            {
                decreasing = true;
            }
        }
        return !(increasing && decreasing);
    }
};

int main()
{

    // system("pause");
    return 0;
}
