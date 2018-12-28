#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <string>
#include <numeric>
#include <queue>
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
    vector<int> deckRevealedIncreasing(vector<int> &deck)
    {
        queue<int> q;
        vector<int> res;
        sort(deck.begin(), deck.end());
        reverse(deck.begin(), deck.end());

        for (int i = 0; i < deck.size(); i++)
        {
            if (i == 0)
            {
                q.push(deck[i]);
            }
            else
            {
                int temp = q.front();
                q.pop();
                q.push(temp);
                q.push(deck[i]);
            }
        }
        while(!q.empty())
        {
            res.push_back(q.front());
            q.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

int main()
{

    // system("pause");
    return 0;
}
