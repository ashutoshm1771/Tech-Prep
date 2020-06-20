#include<bits/stdc++.h>
using namespace std;
int precedence(char c)
{
    if(c=='^')return 3;
    else if(c=='*' || c=='/')return 2;
    else return 1;
}
string convertToPostFix(string s)
{
    stack<char> st;
    st.push('N');
    string ns="";
    for(int i=0;s[i];i++)
    {
        if(s[i]>='a' && s[i]<='z')
            ns+=s[i];
        else if(s[i]=='(')
            st.push(s[i]);
        else if(s[i]==')')
        {
            while(st.top()!='N' || st.top()!='(')
            {
                char c=st.top();
                st.pop();
                ns+=c;
            }
            if(st.top()=='('){
                char c=st.top();
                st.pop();
            }
        }
        else{
            while(st.top()!='N' && precedence(s[i])<=precedence(st.top()))
            {
                char c=st.top();
                st.pop();
                ns+=c;
            }
            st.push(s[i]);
        }
    }
    while(st.top()!='N'){
        ns+=st.top();
        st.pop();
    }
    return ns;
}
int main()
{
    string s;
    cin>>s;
    cout<<convertToPostFix(s)<<'\n';
    return 0;
}