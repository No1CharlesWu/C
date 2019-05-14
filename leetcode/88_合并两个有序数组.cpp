/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */
#include <vector>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        for (int i = m + n - 1; i >= 0; i--)
        {
            if (m - 1 < 0)
            {
                nums1[i] = nums2[n - 1];
                n--;
            }
            else if (n - 1 < 0)
            {
                nums1[i] = nums1[m - 1];
                m--;
            }
            else if (nums1[m - 1] >= nums2[n - 1])
            {
                nums1[i] = nums1[m - 1];
                m--;
            }
            else
            {
                nums1[i] = nums2[n - 1];
                n--;
            }
        }
    }
};
