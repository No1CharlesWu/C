#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
#include <algorithm>
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
    int arrayPairSum(vector<int> &nums)
    {
        int res = 0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i += 2)
        {
            res += nums[i];
        }
        return res;
    }
};

int main()
{

    // system("pause");
    return 0;
}
