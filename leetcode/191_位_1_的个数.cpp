/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] 位1的个数
 */
#include <stdint.h>
class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int res = 0;
        for (int i = 0; i < 32; i++)
        {
            int temp = n & 1;
            if (temp)
            {
                res++;
            }
            n >>= 1;
        }
        return res;
    }
};
