// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

int ceilIndex(vector<int> v,int l,int r,int k)
{
 int m;
 while(r-l>1)
 {
  m=(r+l)/2;
  if(v[m]>=k)
   r=m;
  else l=m;
 } 
 return r;
}

int LISWithoutDP(vector<int> v)
{
 int n=v.size(),len=1;
 vector<int> tail(n);
 tail[0]=v[0]; 
 for(int i=1;i<n;i++)
 {
  if(v[i]<tail[0]) tail[0]=v[i]; // Case 1
  else if(v[i]>tail[len-1]) // Case 2
   tail[len++]=v[i];
  else {
   tail[ceilIndex(tail,0,len-1,v[i])] = v[i];
  }
 }
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
 cout<<LISWithoutDP(v);
 return 0;
}

/*
9 
2 5 3 7 11 8 10 13 6
*/
