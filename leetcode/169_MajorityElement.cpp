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
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> hash;
        int count = nums.size();
        int majority = count / 2;
        for (int n : nums)
        {
            hash[n]++;
            if (hash[n] > majority)
            {
                return n;
            }
        }
        return nums[0];
    }
};

int main()
{

    // system("pause");
    return 0;
}
