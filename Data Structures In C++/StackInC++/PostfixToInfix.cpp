#include<bits/stdc++.h>
using namespace std;
bool isOperand(char c)
{
    if(c>='a' && c<='z')return true;
    return false;
}
string postToInfix(string s)
{
    stack<string> st;
    for(int i=0;s[i];i++)
    {
        if(isOperand(s[i]))
        {
            st.push(string(1,s[i]));
        }
        else{
            string op1=st.top(); st.pop();
            string op2=st.top(); st.pop();
            string temp="("+op2+s[i]+op1+")";
            st.push(temp);
        }
    }
    return st.top();
}

int main()
{
    string s;
    cin>>s;
    cout<<postToInfix(s)<<endl;
    return 0;
}