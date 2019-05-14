/*
 * @lc app=leetcode.cn id=168 lang=cpp
 *
 * [168] Excel表列名称
 */
#include <string>
#include <iostream>
using namespace std;
class Solution
{
public:
    string convertToTitle(int n)
    {
        int count = n;
        string res = "";
        while (count)
        {
            count--;
            res = char('A' + count % 26) + res;
            count = count / 26;
        }
        return res;
    }
};
