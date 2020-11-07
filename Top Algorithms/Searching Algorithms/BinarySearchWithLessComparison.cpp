// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

int binSearch(vector<int> v,int x)
{
    int l=0,h=v.size()-1,m;
    while(h-l>1)
    {
        m=(h+l)/2;
        if(v[m]<=x)l=m;
        else h=m;
    }
    if(v[h]==x)return h;
    if(v[l]==x)return l;
    return -1;
}

int main()
{
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int f=binSearch(v,x);
    (f==-1) ? cout<<"Not Found" : cout<<"Found at "<<f;
    return 0;
}
