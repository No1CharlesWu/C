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
    vector<vector<int>> transpose(vector<vector<int>> &A)
    {
        vector<vector<int>> res;
        for (int i = 0; i < A[0].size(); i++)
        {
            vector<int> temp;
            for (int j = 0; j < A.size(); j++)
            {
                temp.push_back(A[j][i]);
            }
            res.push_back(temp);
        }
        return res;
    }
};

int main()
{

    // system("pause");
    return 0;
}
