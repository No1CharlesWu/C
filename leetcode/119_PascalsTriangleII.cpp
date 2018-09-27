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
    vector<int> getRow(int rowIndex)
    {
        vector<int> res(rowIndex + 1, 0);
        res[0] = 1;

        for (int i = 1; i <= rowIndex; i++)
        {
            for (int j = i; j > 1; j--)
            {
                res[j] = res[j] + res[j - 1];
            }
        }

        return res;
    }

    vector<int> getRowOld(int rowIndex)
    {
        if (rowIndex == 0)
        {
            return vector<int>{1};
        }
        vector<int> res{1};
        for (int i = 1; i <= rowIndex; i++)
        {
            vector<int> temp{1};
            for (int j = 0; j < res.size() - 1; j++)
            {
                temp.push_back(res[j] + res[j + 1]);
            }
            temp.push_back(1);
            res = temp;
        }

        return res;
    }
};

int main()
{

    // system("pause");
    return 0;
}
