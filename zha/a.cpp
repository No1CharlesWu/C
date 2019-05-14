#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int i = 0;
    int j = 1;
    int k = 2;
    cout << (0 ^ 0) << endl;
    cout << (1 ^ 2) << endl;
    cout << (0 ^ 2) << endl;

    int x = 1;
    cout << bitset<sizeof(x) * 8>(x) << endl;
    char a = '1';
    cout << bitset<sizeof(a) * 8>(a) << endl;
    cout << (int)a << endl;
    cout << (char)49 << endl;
}
