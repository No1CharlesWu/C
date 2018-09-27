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

    // system("pause");
    return 0;
}
