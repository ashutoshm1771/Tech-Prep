// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

void zigZag(vector<int>& v)
{
 bool fl=true;
 for(int i=0;i<v.size()-1;i++)
 {
  if(fl) // >
  {
   if( v[i] < v[i+1])
    swap(v[i],v[i+1]);
  }
  else // <
  {
   if(v[i] > v[i+1])
    swap(v[i],v[i+1]);
  }
 }
}

int main()
{
 int n;
 cin>>n;
 vector<int> v(n);
 for(int i=0;i<n;i++)
  cin>>v[i];
 zigZag(v);
 for(int i=0;i<n;i++)
  cout<<v[i]<<" ";
 return 0;
}
