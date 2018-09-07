#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
  public:
    int romanToInt(string s)
    {
        int res = 0;

        unordered_map<char, int> map = {{'I', 1},
                                        {'V', 5},
                                        {'X', 10},
                                        {'L', 50},
                                        {'C', 100},
                                        {'D', 500},
                                        {'M', 1000}};

        res = map[s[0]];
        for (int i = 1; i < s.length(); i++)
        {
            if (map[s[i]] > map[s[i - 1]])
            {
                res = res - 2 * map[s[i - 1]];
            }

            res = res + map[s[i]];
        }

        return res;
    }
};

int main()
{

    // system("pause");
    return 0;
}
