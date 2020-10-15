#include<bits/stdc++.h>
using namespace std;

int floorVal(vector<int> v,int x)
{
    int r=v.size()-1,l=0,m;
    while(r-l>1)
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
    int f=floorVal(v,x);
    (f==-1) ? cout<<"Not Found" : cout<<"Val = "<<f;
    return 0;
}