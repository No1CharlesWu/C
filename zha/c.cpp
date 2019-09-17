#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

bool isOk(int flag, int lastNum, int currNum)
{
    if (flag == 1) {
        if (lastNum > currNum) {
            return true;
        } else {
            return false;
        }
    } else if (flag == 0) {
        if (lastNum < currNum) {
            return true;
        } else {
            return false;
        }
    }
    return false;
}

void Dfs(vector<int> &a, vector<bool> &isUsed, int step, int &count, int lastNum)
{
    if(step >= isUsed.size()) {
        count++;
        return;
    }
    for(int i = 0; i < isUsed.size(); i++) {
        if (isUsed[i] == false) {
            if (isOk(a[step-1],lastNum, i)) {
                isUsed[i] = true;
                Dfs(a,isUsed, step+1, count, i);
                isUsed[i] = false;
            } else if (a[step-1] == 1) {
                break;
            }
        }
    }
}

int main() 
{
    int N;
    cin>>N;
    vector<int> a(N-1);
    vector<bool> isUsed(N, false);
    for(int i = 0; i< N-1;i++) {
        cin>>a[i];
    }

    int count = 0;
    for(int i = 0; i < isUsed.size(); i++) {
        isUsed[i] = true;
        Dfs(a, isUsed, 1, count, i);
        isUsed[i] = false;
    }
    cout<<(count%int(pow(10,9) + 7))<<endl;
    return 0;
}