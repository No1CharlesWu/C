#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
  public:
    int reverse(int x)
    {
        int result = 0;
        while (x)
        {
            int temp = result * 10 + x % 10;
            if (temp > INT_MAX)
            {
                return 0;
            }
            result = temp;
            x = x / 10;
        }
        return result;
    }

    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        int temp = reverse(x);
        return (x == temp);
    }
};

int main()
{

    // system("pause");
    return 0;
}
