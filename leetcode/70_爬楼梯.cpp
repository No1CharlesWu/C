/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */
class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 1)
        {
            return 1;
        }
        else if (n == 2)
        {
            return 2;
        }
        int One = 1;
        int Two = 2;
        for (int i = 3; i <= n; i++)
        {
            int temp = One + Two;
            One = Two;
            Two = temp;
        }
        return Two;
    }
};
