// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

bool checkBalance(string s)
{
 stack<char> st;
 for(auto x: s)
 {
  if(x == '(')st.push(x);
  else{
   if(st.empty())return false;
   if(st.top() == '(')
   {
    st.pop();
   }
  }
 }
 if(st.empty())return true;
 else return false;
}

int main()
{
 string s;
 cin>>s;
 checkBalance( s ) ? cout<<"Balanced" : cout<<"UnBalanced";
 return 0;
 
}
