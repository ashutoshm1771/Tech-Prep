#include<bits/stdc++.h>
using namespace std;

void printGreater(vector<int> v)
{
 int n = v.size() , omax = v[n-1];
 vector<int> s(n);
 s[n-1] = -1;
 for(int i=n-2;i>=0;i--)
 {
  if(v[i] < omax)
  {
   s[i] = omax;
  }
  else{
   s[i] = -1;
   omax = v[i];
  }
 }
 for(int i=0;i<n;i++)
  cout<<s[i]<<" ";
}

int main()
{
 int n;
 cin>>n;
 vector<int> v(n);
 for(int i=0;i<n;i++)
  cin>>v[i];
 printGreater(v);
 return 0;
}