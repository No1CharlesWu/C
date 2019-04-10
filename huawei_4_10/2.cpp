#include <iostream>
#include <string>
#include <cstdio>
#include <stack>
using namespace std;

int main()
{
    char c[200];
    cin >> c;
    string str = "";
    stack<char> st;
    stack<int> intst;
    for (int i = 0; i < sizeof(c); i++)
    {
        if (c[i] == '{' || c[i] == '(' || c[i] == '[')
        {
            st.push(c[i]);
        }
        else if (c[i] <= '9' && c[i] >= '0')
        {
            intst.push(c[i] - '0');
        }
        else if (c[i] == '}' || c[i] == ')' || c[i] == ']')
        {
            string temp = "";
            while (st.top() != '{' && st.top() != '(' && st.top() != '[')
            {
                char ctemp = st.top();
                temp = ctemp + temp;
                st.pop();
            }
            st.pop();
            int l = intst.top();
            intst.pop();
            string temp1 = "";
            for (int j = 0; j < l; j++)
            {
                temp1 += temp;
            }
            for (int j = 0; j < temp1.length(); j++)
            {
                st.push(temp1[j]);
            }
        }
        else
        {
            st.push(c[i]);
        }
    }
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    cout<<endl;
}