#include<algorithm>
using namespace std;

long long Fibonacci(unsigned n)
{
    int result[2] = {1,2};
    if(n <2)
    {
        return result[n];
    }
    long long fibOne = 1;
    long long fibTwo = 0;
    long long fib = 0;
    for(int i = 2;i <=n;i++)
    {
        fib = fibOne+fibTwo;
        fibTwo = fibOne;
        fibOne = fib;
    }
    return fib;
}