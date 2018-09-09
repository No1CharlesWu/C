#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
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
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
        {
            return 0;
        }
        int count = 1;

        for (int i = 1; i < nums.size(); i++)
        {
            int flag = nums[count - 1];
            if (nums[i] > flag)
            {
                nums[count] = nums[i];
                count++;
            }
        }

        return count;
    }
};

int main()
{
    Solution solution;
    int a[4] = {1, 1, 2};
    vector<int> b(a, a + 3);
    int c = solution.removeDuplicates(b);
    cout << c << endl;
    // system("pause");
    return 0;
}
