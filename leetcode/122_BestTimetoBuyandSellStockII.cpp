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
    int maxProfit(vector<int> &prices)
    {
        int res = 0;
        for (int i = 1; i < prices.size(); ++i)
        {
            res += max(prices[i] - prices[i - 1], 0);
        }
        return res;
    }

    int maxProfitOld(vector<int> &prices)
    {
        if (prices.size() == 0)
        {
            return 0;
        }

        int res = 0;
        int pos = 0;
        bool increasing = true;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] < prices[i - 1])
            {
                if (increasing)
                {
                    res += (prices[i - 1] - prices[pos]);
                }
                increasing = false;
                pos = i;
            }
            else
            {
                increasing = true;
            }
        }
        if (increasing)
        {
            res += (prices[prices.size() - 1] - prices[pos]);
        }
        return res;
    }
};

int main()
{

    // system("pause");
    return 0;
}
