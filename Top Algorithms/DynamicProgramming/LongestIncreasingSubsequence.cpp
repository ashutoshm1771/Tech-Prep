#include<bits/stdc++.h>
using namespace std;

int LIS(vector<int> v)
{
 int n=v.size();
 vector<int> dp(n,1);
 for(int i=1;i<n;i++)
 {
  for(int j=0;j<i;j++)
  {
   if(v[i]>v[j] && dp[i] < dp[j]+1)
    dp[i]=dp[j]+1;
  }
 }
 return *max_element(dp.begin(),dp.end());
}
int main()
{
 int n;
 cin>>n;
 vector<int> v(n);
 for(int i=0;i<n;i++)
 {
  cin>>v[i];
 }
 cout<<LIS(v);
 return 0;
}