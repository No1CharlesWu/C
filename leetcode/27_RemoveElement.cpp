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
    int removeElement(vector<int> &nums, int val)
    {
        int count = nums.size();

        for (int i = 0; i < count; i++)
        {
            if (nums[i] == val)
            {
                swap(nums[i], nums[count - 1]);
                count--;
                i--;
            }
        }

        return count;
    }
};

int main()
{

    // system("pause");
    return 0;
}
