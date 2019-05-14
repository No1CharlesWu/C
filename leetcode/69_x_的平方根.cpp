/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */
class Solution
{
public:
    int mySqrt(int x)
    {
        double start = 0;
        double end = x;
        double res = ((int)end + (int)start) / 2;
        while (start < end)
        {
            if (res * res > x)
            {
                end = res;
                res = ((int)end + (int)start) / 2;
            }
            else if (res * res == x)
            {
                return res;
            }
            else
            {
                double temp = res + 1;
                if (temp * temp < x)
                {
                    start = res;
                    res = ((int)end + (int)start) / 2;
                }
                else if (temp * temp > x)
                {
                    return res;
                }
                else
                {
                    return temp;
                }
            }
        }
        return (int)res;
    }
};
