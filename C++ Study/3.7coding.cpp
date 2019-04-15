#include <iostream>
using namespace std;

void P4();
int main()
{
    P4();
    return 0;
}

void P4()
{
    long temp, second, minute, hour, day;
    cout << "输入整数的秒数：\n";
    cin >> temp;
    const int MINUTE = 60;
    const int HOUR = 60;
    const int DAY = 24;
    second = temp % MINUTE;
    temp = temp / MINUTE;
    minute = temp % HOUR;
    temp = temp / HOUR;
    hour = temp % DAY;
    day = temp / DAY;
    cout << day << " days," << hour << "hours," << minute << "minute," << second << " seconds" << endl;
}