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
    vector<int> fairCandySwap(vector<int> &A, vector<int> &B)
    {
        vector<int> res;
        long long A_sum = accumulate(A.begin(), A.end(), 0);
        long long B_sum = accumulate(B.begin(), B.end(), 0);
        long long ave = (A_sum + B_sum) / 2;

        unordered_map<int, int> hash;
        for (int i = 0; i < A.size(); i++)
        {
            hash[A[i] + (ave - A_sum)] = A[i];
        }
        for (int i = 0; i < B.size(); i++)
        {
            if (hash.find(B[i]) != hash.end())
            {
                res.push_back(hash[B[i]]);
                res.push_back(B[i]);
                break;
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
