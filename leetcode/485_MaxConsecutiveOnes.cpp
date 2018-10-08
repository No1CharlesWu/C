#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <numeric>
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
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int res = 0;
        int count = 0;
        for (int n : nums)
        {
            if (n == 1)
            {
                count++;
            }
            else
            {
                res = max(res, count);
                count = 0;
            }
        }
        res = max(res, count);
        return res;
    }
};

int main()
{

    // system("pause");
    return 0;
}
