#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

void func1(stack<char> &st) {
    if (!st.empty() && st.top() != '(') {
        st.pop();
    }
    return;
}

void func2(stack<char> &st) 
{
    while(st.top() != '(') {
        st.pop();
    }
    st.pop();
}

int main()
{
    string str = "a<<b((c)<d)e";
    string res = "";
    stack<char> st;
    cin>>str;
    cout<<str<<endl;
    for(int i =0; i< str.size();i++) {
        if (str[i] == '<') {
            func1(st);
        } else if (str[i] == ')') {
            func2(st);
        } else {
            st.push(str[i]);
        }
    }
    while(!st.empty()) {
        res += st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    cout<<res<<endl;
    return 0;
}