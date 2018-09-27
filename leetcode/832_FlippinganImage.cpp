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
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            invert(A[i]);
            flip(A[i]);
        }
        return A;
    }

    vector<int> flip(vector<int> &A)
    {
        for (int i = 0, j = A.size() - 1; i < j; i++, j--)
        {
            swap(A[i], A[j]);
        }
        return A;
    }

    vector<int> invert(vector<int> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            A[i] = 1 - A[i];
        }
        return A;
    }
};

int main()
{

    // system("pause");
    return 0;
}
