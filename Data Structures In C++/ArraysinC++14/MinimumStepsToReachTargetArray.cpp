// Author : Ashutosh Mishra

#include<iostream>
#include<vector>

using namespace std;

int minSteps(vector<int>& v)
{
    int n=v.size(),ans=0; 
    //cout<<n;
    while(true)
    {
        int i,zc=0;
        for(i=0;i<n;i++)
        {
            if(v[i]&1){ //cout<<v[i]; 
            break; }
            else if(v[i]==0){ //cout<<v[i];
            zc++; }
        }
        if(zc==n)return ans;
        if(i==n)
        {
            for(int j=0;j<n;j++)
            {
                v[j]=v[j]/2;
            }
            ans++;
        }
        for(int j=i;j<n;j++)
        {
            if(v[j]&1){
                v[j]--;
                ans++;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<minSteps(a);
    return 0;
}
