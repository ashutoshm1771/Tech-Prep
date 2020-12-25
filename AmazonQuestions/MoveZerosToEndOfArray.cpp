// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

void moveZeros(vector<int>& v) // Pass by reference
{
 int count = 0 , n = v.size();
 for(int i=0;i<n;i++)
 {
  if(v[i])
  {
   v[count++] = v[i];
  }
 }
 for(int i=count;i<n;i++)
  v[i] = 0;
}

int main()
{
 int n;
 cin>>n;
 vector<int> v(n);
 for(int i=0;i<n;i++)
  cin>>v[i];
 
 moveZeros(v); // void function
 
 for(int i=0;i<n;i++)
  cout<<v[i]<<" ";
 return 0;
}
