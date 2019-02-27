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
    vector<int> sortArrayByParity(vector<int> &A)
    {
        vector<int> res;
        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] % 2 == 0)
            {
                res.insert(res.begin(), A[i]);
            }
            else
            {
                res.push_back(A[i]);
            }
        }
        return res;
    }
    vector<int> sortArrayByParityOld(vector<int> &A)
    {
        for (int i = 0, j = A.size() - 1; i < j;)
        {
            swap(A[i], A[j]);
            while (A[i] % 2 == 0)
            {
                i++;
            }
            while (A[j] % 2 == 1)
            {
                j--;
            }
        }
        return A;
    }
};

int main()
{
    Solution s;
    vector<int> a;
    a.push_back(0);
    a.push_back(2);
    vector<int> b = s.sortArrayByParity(a);
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i];
    }
    // system("pause");
    return 0;
}
