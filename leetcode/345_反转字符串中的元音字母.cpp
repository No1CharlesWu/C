/*
 * @lc app=leetcode.cn id=345 lang=cpp
 *
 * [345] 反转字符串中的元音字母
 */
#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {
        long long i = 0;
        long long j = s.length() - 1;
        while (i < j)
        {
            if (isVowels(s[i]) && isVowels(s[j]))
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
            }
            while (!isVowels(s[i]))
            {
                i++;
                if (i > j)
                {
                    break;
                }
            }
            while (!isVowels(s[j]))
            {
                j--;
                if (j < i)
                {
                    break;
                }
            }
        }
        return s;
    }

    bool isVowels(char c)
    {
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
        {
            return true;
        }
        return false;
    }
};
