// Author : Ashutosh Mishra

#include<bits/stdc++.h>

using namespace std;

int findNumOfPairs(vector<int> v,int x)
{
    int l=0,ans=0,r=v.size()-1;
    while(l<r)
    {
        if(v[l]+v[r]<x){  // 2 4 6 8 9 --> 0 1 2 3 4 
            ans+=(r-l);
            l++;
        }
        else{
            r--;
        }
    }
    return ans;
}

int main()
{
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    cout<<findNumOfPairs(v,x);
    return 0;
}
