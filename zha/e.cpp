#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

const int N = 1000;
bool prime[N]; //布尔数组变量0、1

//得到N以内的素数
void primeNum(int a)
{
    int i, j, n = 0;
    for (i = 2; i < a; i++)
    {

        if (i % 2)
            prime[i] = true;
        else
            prime[i] = false;
    }
    for (i = 3; i <= sqrt((double)a); i++)
    {
        if (prime[i])
            for (j = 2 * i; j < N; j += i)
                prime[j] = false;
    }
}

int getResult(int num)
{
    int res = 0;
    int left = 2;
    int right = num - 1;
    while (left <= right)
    {
        while (!prime[left] && left < right)
        {
            left++;
        }
        while (!prime[right] && left < right)
        {
            right--;
        }
        if (left + right < num)
        {
            left++;
        }
        else if (left + right > num)
        {
            right--;
        }
        else
        {
            res++;
            // cout << left << " " << right << endl;
            left++;
            right--;
        }
    }
    return res;
}

int main()
{
    int num;
    cin >> num;
    primeNum(num);
    cout << getResult(num)<<endl;
    return 0;
}