/*
 * @lc app=leetcode.cn id=215 lang=cpp
 *
 * [215] 数组中的第K个最大元素
 */
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        int start = 0;
        int end = nums.size() - 1;
        k = k - 1;
        while (start < end)
        {
            int i = Partition(nums, start, end);
            if (i == k)
            {
                break;
            }
            else if (i > k)
            {
                end = i - 1;
            }
            else
            {
                start = i + 1;
            }
        }
        return nums[k];
    }

    int Partition(vector<int> &nums, int start, int end)
    {
        int j = end - 1;
        for (int i = start; i <= j; i++)
        {
            while (j >= start && nums[j] < nums[end])
            {
                j--;
            }
            while (i < end && nums[i] > nums[end])
            {
                i++;
            }
            if (i >= j)
            {
                break;
            }
            Swap(nums, i, j);
        }
        Swap(nums, j + 1, end);
        return j + 1;
    }

    void Swap(vector<int> &nums, int i, int j)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
};
