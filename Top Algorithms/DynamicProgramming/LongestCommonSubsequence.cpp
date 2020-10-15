// Find Longest common subsequence from two arrays

#include<bits/stdc++.h>
using namespace std;

void visualize(vector<vector<int>> dp)
{
 for(vector<int> v: dp)
 {
  for(int x: v)
   cout<<x<<" ";
  cout<<endl;
 }
}
int LCS(vector<int> a,vector<int> b)
{
 int m=a.size(),n=b.size();
 vector<vector<int>> dp(m+1,vector<int>(n+1));
 for(int i=0;i<=m;i++)
 {
  for(int j=0;j<=n;j++)
  {
   if(i==0 || j==0)
   {
    dp[i][j] = 0;
   }
   else if( a[i-1]==b[j-1] )
   {
    dp[i][j] = dp[i-1][j-1] + 1;
   }
   else {
    dp[i][j] = max ( dp[i-1][j] , dp[i][j-1] );
   }
  }
 }
 visualize(dp);
 return dp[m][n];
}
int main()
{
 int m,n;
 cin>>m>>n;
 vector<int> a(m),b(n);
 for(int i=0;i<m;i++)
 {
  cin>>a[i];
 }
 for(int i=0;i<n;i++)
 {
  cin>>b[i];
 }
 cout<<LCS(a,b)<<endl;
}
/*
6 6 
1 7 7 9 1 2
7 10 9 1 11 2
*/