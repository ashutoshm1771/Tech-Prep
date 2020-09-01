#include<bits/stdc++.h>
using namespace std;

int getRight(vector<int> v,int l,int r,int x)
{
    int m;
    while(r-l>1)
    {
        m=(r+l)/2;
        if(v[m]<=x)l=m;
        else r=m;
    }
    return l;
}
int getLeft(vector<int> v,int l,int r,int x)
{
    int m;
    while(r-l>1)
    {
        m=(r+l)/2;
        if(v[m]>=x)r=m;
        else l=m;
    }
    return l;
}
int countOccurences(vector<int> v,int x)
{
    int right=getRight(v,0,v.size()-1,x);
    int left=getLeft(v,0,v.size()-1,x);
    if(v[right]==x && v[left]==x)return right-left+1;
    else return 0;
}
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    cout<<countOccurences(v,x)<<endl;
    return 0;
}