#include<bits/stdc++.h>
using namespace std;
int jumpSearch(vector<int> a,int x)
{
    int n=a.size(),prev=0,step=sqrt(n);
    while(a[min(step,n)-1]<x)
    {
        prev=step;
        step+=sqrt(n);
        if(prev>=n)return -1;
    }
    while(a[prev]<x)
    {
        prev++;
        if(prev==min(step,n))return -1;
    }
    if(a[prev]==x)return prev;
    return -1;
}
signed main()
{
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int f=jumpSearch(a,x);
    (f==-1) ? cout<<"Not Found" : cout<<"Found at "<<f;
    return 0;
}