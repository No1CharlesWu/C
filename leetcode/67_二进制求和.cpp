/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */
#include <string>
using namespace std;
class Solution
{
public:
    string addBinary(string a, string b)
    {
        string res = "";
        int al = a.size() - 1;
        int bl = b.size() - 1;
        int carry = 0;
        while (al >= 0 || bl >= 0)
        {
            int ta, tb;
            if (al < 0)
            {
                ta = 0;
            }
            else
            {
                ta = a[al] - '0';
            }

            if (bl < 0)
            {
                tb = 0;
            }
            else
            {
                tb = b[bl] - '0';
            }
            res = (char)((ta + tb + carry) % 2 + '0') + res;
            carry = (ta + tb + carry) / 2;

            al--;
            bl--;
        }
        if (carry)
        {
            res = '1' + res;
        }
        return res;
    }
};
