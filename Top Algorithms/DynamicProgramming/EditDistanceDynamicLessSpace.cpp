// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

int min(int a,int b,int c)
{
 return min(min(a,b),c);
}
int editDistance(string a,string b,int m,int n)
{
 vector<vector<int>> dp(2,vector<int>(m+1));
 for(int i=0;i<=m;i++)
  dp[0][i]=0;
 for(int i=1;i<=n;i++)
 {
  for(int j=0;j<=m;j++)
  {
   if(j==0) dp[i%2][j]=i;
   else if ( a[j-1] == b[i-1] )
    dp[i%2][j] = dp[(i-1)%2][j-1];
   else{
    dp[i%2][j] = 1 + min ( dp[(i-1)%2][j-1], // replace
                           dp[(i-1)%2][j],   // remove
                           dp[i%2][j-1] );   // insert
   }
  } 
 }
 return dp[n%2][m];
}

int main()
{
 string a,b;
 cin>>a>>b;
 cout<<editDistance(a,b,a.size(),b.size());
 return 0;
}
