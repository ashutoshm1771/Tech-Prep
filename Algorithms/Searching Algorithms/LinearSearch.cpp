// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;
bool linSearch(vector<int> v,int x)
{
    for(auto t: v)
        if(t==x)return true;
    return false;
}
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    linSearch(v,x) ? cout<<"Found" : cout<<"Not Found";
    return 0;
}
