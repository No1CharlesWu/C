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
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int res = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 1)
                {
                    int count = Count(grid, i, j);
                    res = max(res, count);
                }
            }
        }
        return res;
    }

    int Count(vector<vector<int>> &grid, int r, int c)
    {
        if (r >= grid.size() || r < 0 || c >= grid[0].size() || c < 0 || grid[r][c] == 0)
        {
            return 0;
        }
        grid[r][c] = 0;
        return 1 + Count(grid, r - 1, c) + Count(grid, r + 1, c) + Count(grid, r, c - 1) + Count(grid, r, c + 1);
    }
};

int main()
{

    // system("pause");
    return 0;
}
