#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution
{
  public:
    bool isValid(string s)
    {
        stack<char> paren;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                paren.push(s[i]);
            }
            else if (s[i] == ')')
            {
                if (paren.empty() || paren.top() != '(')
                {
                    return false;
                }
                paren.pop();
            }
            else if (s[i] == '}')
            {
                if (paren.empty() || paren.top() != '{')
                {
                    return false;
                }
                paren.pop();
            }
            else if (s[i] == ']')
            {
                if (paren.empty() || paren.top() != '[')
                {
                    return false;
                }
                paren.pop();
            }
        }
        return paren.empty();
    }
};

int main()
{

    // system("pause");
    return 0;
}
