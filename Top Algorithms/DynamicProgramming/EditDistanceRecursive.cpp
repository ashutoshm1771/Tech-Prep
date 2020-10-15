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
int editDistance(string a, string b, int m,int n)
{
 if ( m==0 ) return n;
 if ( n==0 ) return m;
  if(a[m-1]==b[n-1])
   return editDistance(a,b,m-1,n-1);
  else{
   return 1 + min(editDistance(a,b,m,n-1),  // insert
                  editDistance(a,b,m-1,n-1),//replace
                  editDistance(a,b,m-1,n)   // remove
   		  );
  }
}
int main()
{
 string a,b;
 cin>>a>>b;
 cout<<editDistance(a,b,a.size(),b.size());
 return 0;
}