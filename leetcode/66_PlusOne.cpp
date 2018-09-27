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
    vector<int> plusOne(vector<int> &digits)
    {
        int carry = 1;
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            int sum = digits[i] + carry;
            digits[i] = sum % 10;
            if (!(sum / 10))
            {
                carry = 0;
                break;
            }
        }
        if (carry)
        {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};

int main()
{
    Solution solution;
    int a[4] = {9, 7, 11, 15};
    vector<int> b(a, a + 1);
    vector<int> c = solution.plusOne(b);
    // system("pause");
    return 0;
}
