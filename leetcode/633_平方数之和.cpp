/*
 * @lc app=leetcode.cn id=633 lang=cpp
 *
 * [633] 平方数之和
 */
#include <math.h>

class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        long long i = 0;
        long long j = (long long)sqrt(c);
        while (i <= j)
        {
            long long temp = i * i + j * j;
            if (c == temp)
            {
                return true;
            }
            else if (c < temp)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return false;
    }
};
