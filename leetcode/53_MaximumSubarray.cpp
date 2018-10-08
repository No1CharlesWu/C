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
    int maxSubArray(vector<int> &nums)
    {
        int res = INT_MIN;
        int sum = 0;
        for (int n : nums)
        {
            sum += n;
            res = res > sum ? res : sum;
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return res;
    }
};

int main()
{

    // system("pause");
    return 0;
}
