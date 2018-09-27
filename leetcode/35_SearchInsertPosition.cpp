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
    int searchInsert(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= target)
            {
                return i;
            }
        }
        return nums.size();
    }
};

int main()
{
    cout<<"hello"<<endl;
    // system("pause");
    return 0;
}
