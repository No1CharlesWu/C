#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <numeric>
#include <unordered_set>
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
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> s;
        for (int n : nums)
        {
            if (s.find(n) == s.end())
            {
                s.insert(n);
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{

    // system("pause");
    return 0;
}
