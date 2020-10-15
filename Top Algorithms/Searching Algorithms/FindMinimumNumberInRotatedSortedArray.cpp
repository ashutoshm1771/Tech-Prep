#include<bits/stdc++.h>
using namespace std;

int findMinUtil(vector<int> v,int l,int r)
{
    if(v[l]<=v[r])return l;
    while(l<=r)
    {
        int m=(r+l)/2;
        if(l==r)return l;
        if(v[m]<v[r])r=m;
        else l=m+1;
    }
    return -1;
}
int findMinimum(vector<int> v)
{
    return findMinUtil(v,0,v.size()-1);
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    cout<<findMinimum(v);
    return 0;
}