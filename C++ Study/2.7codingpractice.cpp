#include <iostream>
#include <string>

using namespace std;

void P1();
void P2();

int main()
{
    P1();
    P2();
    return 0;
}

void P1()
{
    string name = "charles";
    string address = "Soochow University";
    cout << "name: " << name << endl;
    cout << "address: " << address << endl;
}

void P2()
{
    cout << "输入以浪为单位的距离：\n";
    int lang_distance;
    cin >> lang_distance;
    cout << "对应的码：" << lang_distance * 220 << endl;
}