// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

int minElem(vector<int> v,int l,int r)
{
 if(v[l] < v[r]) return v[l];
 while(l<=r)
 {
  int m = (l+r)/2;
  if(l == r) return v[l];
  if(v[m] < v[r]) r = m;
  else l = m+1;
 }
 return v[l];
}

int main()
{
 int n;
 cin>>n;
 vector<int> v(n);
 for(int i=0;i<n;i++)
  cin>>v[i];
 cout<<minElem(v,0,n-1);
 return 0;
}
