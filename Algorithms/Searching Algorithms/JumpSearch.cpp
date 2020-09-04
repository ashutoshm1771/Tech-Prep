#include<bits/stdc++.h>
using namespace std;

int jumpSearch(vector<int> v,int x)
{
    int n=v.size(),prev=0,step=sqrt(n);
    while(v[min(step,n)-1]<x)
    {
        prev=step;
        step+=sqrt(n);
        if(prev>=n)return -1;
    }
    while(v[prev]<x)
    {
        prev++;
        if(prev==min(step,n))return -1;
    }
    if(v[prev]==x)return prev;
    return -1;
}
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int f=jumpSearch(v,x);
    (f==-1) ? cout<<"Not Found" : cout<<"Found at "<<f<<endl;
    return 0; 
}