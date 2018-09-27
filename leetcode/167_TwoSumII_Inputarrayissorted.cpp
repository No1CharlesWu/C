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
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        for (int i = 0, j = numbers.size() - 1;;)
        {
            if (numbers[i] + numbers[j] < target)
            {
                i++;
            }
            else if (numbers[i] + numbers[j] > target)
            {
                j--;
            }
            else
            {
                return vector<int>{i + 1, j + 1};
            }
        }
    }
};

int main()
{

    // system("pause");
    return 0;
}
