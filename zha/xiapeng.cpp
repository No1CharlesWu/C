#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
#include <algorithm>
#include <string>
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
    long long mytest()
    {
        long long n, k;
        cin >> n >> k;
        string str;
        cin >> str;

        vector<long long> hash(26);
        for (int i = 0; i < str.size(); i++)
        {
            hash[str[i] - 'A']++;
        }
        sort(hash.begin(), hash.end());

        long long res = 0;
        for (int i = hash.size() - 1; i >= 0; i--)
        {
            if (hash[i] >= k)
            {
                res += k * k;
                break;
            }
            else
            {
                res += hash[i] * hash[i];
                k -= hash[i];
            }
        }
        return res;
    }
};

int main()
{
    Solution s;
    return s.mytest();
}
