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
    void moveZeroes(vector<int> &nums)
    {
        int zero = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                if (zero == -1)
                {
                    zero = i;
                }
            }
            else
            {
                if (zero != -1)
                {
                    swap(nums[i], nums[zero]);
                    zero++;
                }
            }
        }
    }
};

int main()
{

    // system("pause");
    return 0;
}
