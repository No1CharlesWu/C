#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
#include <unordered_set>
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
    int findShortestSubArray(vector<int> &nums)
    {
        unordered_map<int, int> firstPosition;
        unordered_map<int, int> frequency;
        int maxDegree = 0;
        int res = INT_MAX;
        if (nums.size() == 1)
        {
            return 1;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (firstPosition.find(nums[i]) == firstPosition.end())
            {
                firstPosition[nums[i]] = i;
                frequency[nums[i]] = 1;
            }
            else
            {
                frequency[nums[i]]++;
            }
            if (maxDegree < frequency[nums[i]])
            {
                maxDegree = frequency[nums[i]];
                res = i - firstPosition[nums[i]] + 1;
            }
            else if (maxDegree == frequency[nums[i]])
            {
                res = res < (i - firstPosition[nums[i]] + 1) ? res : (i - firstPosition[nums[i]] + 1);
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
