// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

int countSubA(vector<int> v)
{
 int n=v.size();
 int cnt=0,len=1;
 for(int i=0;i<n-1;i++)
 {
  if(v[i+1]>v[i])
  {
   len++;
  }
  else{
   cnt+=(len*(len-1)/2);
   len=1;
  }
 }
 return cnt;
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
 cout<<countSubA(v);
 return 0;
}

