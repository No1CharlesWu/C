/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */
#include <string>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s)
    {
        bool res = true;
        int start = 0;
        int end = s.size() - 1;
        while (1)
        {
            while (!isValid(s[start]) && start < s.size() - 1)
            {
                start++;
            }
            while (!isValid(s[end]) && end > 0)
            {
                end--;
            }
            if (start > end)
            {
                break;
            }
            if (isEqual(s[start], s[end]))
            {
                start++;
                end--;
            }
            else
            {
                res = false;
                break;
            }
        }
        return res;
    }
    bool isValid(char c)
    {
        if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            return true;
        }
        return false;
    }
    bool isEqual(char a, char b)
    {
        a = toupper(a);
        b = toupper(b);
        return a == b;
    }
};
