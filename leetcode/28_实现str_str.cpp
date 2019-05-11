/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现strStr()
 */
#include <string>
using namespace std;
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (needle.size() == 0)
        {
            return 0;
        }
        if (haystack.size() < needle.size())
        {
            return -1;
        }
        int j = 0;

        for (int i = 0; i <= (haystack.size() - needle.size()); i++)
        {
            if (isMatch(haystack, i, needle))
            {
                return i;
            }
        }

        return -1;
    }

    bool isMatch(string haystack, int index, string needle)
    {
        for (int i = 0; i < needle.size(); i++)
        {
            if (haystack[i + index] != needle[i])
            {
                return false;
            }
        }
        return true;
    }
};
