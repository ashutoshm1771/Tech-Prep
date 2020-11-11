// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

int lcs( string X, string Y, int m, int n )  
{  
    int L[m + 1][n + 1];  
    int i, j;  
    for (i = 0; i <= m; i++)  
    {  
        for (j = 0; j <= n; j++)  
        {  
        if (i == 0 || j == 0)  
            L[i][j] = 0;  
      
        else if (X[i - 1] == Y[j - 1])  
            L[i][j] = L[i - 1][j - 1] + 1;  
      
        else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]);  
        }  
    }  
          
    return L[m][n];  
}  

int LCS(string a,string b,int m,int n)
{
 //int m=a.size(),n=b.size();
 //vector<vector<int>> dp(m+1,vector<int>(n+1));
 int dp[m+1][n+1];
 for(int i=0;i<=m;i++)
 {
  for(int j=0;j<=n;j++)
  {
   if( i==0 || j==0 )
   {
    dp[i][j]=0;
   }
   else if( a[i-1]==b[j-1] )
    dp[i][j] = dp[i-1][j-1] +1;
   else {
    dp[i][j]= max ( dp[i-1][j] , dp[i][j-1] );
   }
  }

 }
 return dp[m][n];
}
int main()
{
 string a,b;
 cin>>a>>b;
 cout<<lcs(a,b,a.size(),b.size())<<" "<<LCS(a,b,a.size(),b.size());
 return 0;
}

/*
AGGTAB
GXTXAYB
*/
