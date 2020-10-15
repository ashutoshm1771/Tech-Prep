/*
  Given two strings str1 and str2 and below operations that can performed on str1. Find minimum number of edits (operations) required to convert ‘str1’ into ‘str2’.
	Insert
	Remove
	Replace
All of the above operations are of equal cost.
*/
#include<bits/stdc++.h>
using namespace std;

int min(int a,int b,int c)
{
 return min(min(a,b),c);
}
int editDistance(string a,string b,int m,int n)
{
 vector<vector<int>> dp(m+1,vector<int>(n+1));
 for(int i=0;i<=m;i++)
 {
  for(int j=0;j<=n;j++)
  {
   if( i==0 ) dp[i][j]=n;
   if( j==0 ) dp[i][j]=m;
   if( a[i-1] == b[j-1] ) dp[i][j]=dp[i-1][j-1];
   else{
    dp[i][j] = 1 + min ( dp[i][j-1] ,    // insert
    			 dp[i-1][j] ,    // remove
    			 dp[i-1][j-1] ); // replace
   }
  }
 }
 return dp[m][n];
}
int main()
{
 string a,b;
 cin>>a>>b;
 cout<<editDistance(a,b,a.size(),b.size());
 return 0;
}