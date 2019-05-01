/*
 * @lc app=leetcode.cn id=524 lang=cpp
 *
 * [524] 通过删除字母匹配到字典里最长单词
 */
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    string findLongestWord(string s, vector<string> &d)
    {
        string LongestWord = "";
        for (int i = 0; i < d.size(); i++)
        {
            if (LongestWord.length() > d[i].length() || (LongestWord.length() == d[i].length() && LongestWord.compare(d[i]) < 0))
            {
                continue;
            }
            if (isValid(s, d[i]))
            {
                LongestWord = d[i];
            }
        }
        return LongestWord;
    }

    bool isValid(string s1, string s2)
    {
        int j = 0;
        for (int i = 0; i < s1.length() && j < s2.length(); i++)
        {
            if (s1[i] == s2[j])
            {
                j++;
            }
        }
        return j == s2.length();
    }
};
