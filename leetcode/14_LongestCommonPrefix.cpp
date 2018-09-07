#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
  public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string res = "";
        if (strs.empty())
        {
            return res;
        }
        for (int i = 0;; i++)
        {
            if (i >= strs[0].length())
            {
                return res;
            }
            char key = strs[0][i];
            for (int j = 0; j < strs.size(); j++)
            {
                if (i >= strs[j].length())
                {
                    return res;
                }
                if (key != strs[j][i])
                {
                    return res;
                }
            }
            res += strs[0][i];
        }

        return res;
    }
};

int main()
{

    // system("pause");
    return 0;
}
