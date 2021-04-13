// Author : Ashutosh Mishra

#include<bits/stdc++.h>

using namespace std;

int findFloor(vector<int> v,int x)
{
    int l=0,r=v.size()-1,m;
    whiile(r-l>1)
    {
        m=(r+l)/2;
        if(v[m]<=x)l=m;
        else r=m;
    }
    return v[l];
}

int main()
{
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int f=findFloor(v,x);
    (f==-1) ? cout<<"Not Found" : cout<<"Floor is "<<f;
    return 0;
    
}
