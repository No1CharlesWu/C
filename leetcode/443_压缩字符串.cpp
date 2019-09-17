/*
 * @lc app=leetcode.cn id=443 lang=cpp
 *
 * [443] 压缩字符串
 */
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int count = 1;
        int curCount = 1;
        for (int i = 1; i <= chars.size(); i++)
        {
            if (i < chars.size() && chars[i] == chars[i - 1])
            {
                curCount++;
            }
            else
            {
                if (curCount != 1)
                {
                    string temp = to_string(curCount);
                    for (int j = 0; j < temp.size(); j++)
                    {
                        chars[count] = temp[j];
                        count++;
                    }
                }
                if (i < chars.size())
                {
                    chars[count] = chars[i];
                    count++;
                    curCount = 1;
                }
            }
        }
        return count;
    }
};
