// DeQueue is Costly

#include<bits/stdc++.h>
using namespace std;

struct Queue
{
    stack<int> s1,s2;
    void enQueue(int x)
    {
        s1.push(x);
    }
    int deQueue()
    {
        if(s1.empty()){ cout<<"Empty"<<endl; return -1;}
        int x;
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        x=s2.top();
        s2.pop();
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return x;
    }
};
int main()
{
    Queue q;
    q.enQueue(1);
    q.enQueue(3);
    q.enQueue(2);
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    cout<<q.deQueue()<<endl;
    return 0;
}