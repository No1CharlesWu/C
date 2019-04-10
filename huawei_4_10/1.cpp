#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
    vector<string> v;
    vector<string> v_s;
    string str;
    int n, ans = 0;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        char x[200];
        scanf("%s", x);
        v.push_back(x);
    }
    // cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].length() > 8)
        {
            string temp = v[i];
            string temp_1;
            while (temp.size() > 8)
            {
                temp_1 = temp.substr(0, 8);
                v_s.push_back(temp_1);
                temp = temp.substr(8);
            }
            // cout << temp << endl;
            string t1 = temp;
            if (t1.length() == 8)
            {
                v_s.push_back(t1);
            }
            else
            {
                int l = 8 - t1.length();
                for (int i = 0; i < l; i++)
                {
                    t1+= "0";
                }
                v_s.push_back(t1);
            }
        }
        else if (v[i].length() < 8)
        {
            string temp = v[i];
            for (int j = 0; j < (8 - v[i].length()); j++)
            {
                temp += "0";
            }
            v_s.push_back(temp);
        }
        else
        {
            v_s.push_back(v[i]);
        }
    }
    sort(v_s.begin(), v_s.end());
    // cout<<v_s.size()<<endl;
    cout<<endl;
    for (int i = 0; i < v_s.size(); i++)
    {
        if(i != 0)
        {
            cout<<" ";
        }
        cout << v_s[i];
    }
    cout<<endl;
}