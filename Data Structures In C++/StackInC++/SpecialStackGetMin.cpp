#include<bits/stdc++.h>
using namespace std;
const int max=50;
class Stack
{
   stack<int> s1,s2;
   public:
   void push(int x)
   {
       s1.push(x);
       if(s2.empty())s2.push(x);
       else { int m=s2.top();
       s2.push(min(x,m)); }
   }
   int pop()
   {
       if(s1.empty())return -1;
       s2.pop();
       int x=s1.top(); s1.pop();
       return x;
   }
   int getMin()
   {
       return s2.top();
   }
};
int main()
{
    Stack s,aus;
    s.push(15);
    s.push(16);
    s.push(17);
    cout<<s.getMin()<<endl;
    s.push(12);
    cout<<s.getMin()<<endl;
    s.pop();
    cout<<s.getMin();
    return 0;
}

