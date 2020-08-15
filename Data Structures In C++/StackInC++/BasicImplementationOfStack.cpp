// Author : Ashutosh Mishra

#include<iostream>
using namespace std;
#define MAX 100
class Stack{
    int top;
    public:
    Stack(){ top = -1; }
    int s[MAX];
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};
bool Stack::push(int x)
{
    if(top>=(MAX-1)){ cout<<"Overflow"<<endl; return false; }
    else { s[++top]=x; cout<<"Pushed"<<endl; return true; }
}
bool Stack::isEmpty()
{
    return top<0;
}
int Stack::pop()
{
    if(top<0){cout<<"Stack Empty"; return 0;}
    int x=s[top--];
    return x;
}
int Stack::peek()
{
    if(top<0){ cout<<"Stack Empty"; return 0;}
    int x=s[top];
    return x;
}
int main()
{
    Stack s;
    s.push(2);
    s.push(3);
    cout<<s.pop();
    cout<<s.peek();
    cout<<s.isEmpty();
    return 0;
}
