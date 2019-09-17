// https://zhidao.baidu.com/question/564578849788668204.html
// https://blog.csdn.net/fp_hzq/article/details/7972428

#include <iostream>
#include <vector>
using namespace std;

struct Point
{
    int x;
    int y;
};

int Cal(vector<Point> pos, int a, int b)
{
    
}

int main()
{
    int n, a, b;
    cin>>n>>a>>b;
    vector<Point> pos(n);
    for(int i = 0; i < n;i++) {
        cin>>pos[i].x>>pos[i].y;
    }

    int num;
    num = Cal(pos,a,b);
    cout<<num<<endl;

    return 0;
}