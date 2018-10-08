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
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int m = nums[i] > 0 ? nums[i] - 1 : -nums[i] - 1;
            nums[m] = nums[m] > 0 ? -nums[m] : nums[m];
        }
        vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                res.push_back(i + 1);
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
