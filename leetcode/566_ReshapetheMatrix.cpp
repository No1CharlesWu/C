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
    vector<vector<int>> matrixReshape(vector<vector<int>> &nums, int r, int c)
    {
        int nums_r = nums.size();
        int nums_c = nums[0].size();
        if (nums_r * nums_c != r * c)
        {
            return nums;
        }

        vector<vector<int>> res;
        int res_r = 0;
        int res_c = 0;
        vector<int> temp(c);
        for (int i = 0; i < nums_r; i++)
        {
            for (int j = 0; j < nums_c; j++)
            {
                temp[res_c] = nums[i][j];
                res_c++;
                if (res_c == c)
                {
                    res_c = 0;
                    res.push_back(temp);
                    res_r++;
                }
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
