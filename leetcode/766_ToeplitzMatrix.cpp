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
    bool isToeplitzMatrix(vector<vector<int>> &matrix)
    {
        for (int i = 0; i < matrix.size() - 1; i++)
        {
            for (int j = 0; j < matrix[0].size() - 1; j++)
            {
                if (matrix[i][j] != matrix[i + 1][j + 1])
                {
                    return false;
                }
            }
        }
        return true;
    }

    bool isToeplitzMatrixOld(vector<vector<int>> &matrix)
    {
        unordered_map<int, int> hash;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (hash.find(i - j) == hash.end())
                {
                    hash[i - j] = matrix[i][j];
                }
                else if (hash[i - j] != matrix[i][j])
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main()
{

    // system("pause");
    return 0;
}
