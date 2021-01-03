// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

void findSub(vector<int> v,int k)
{
 int start = 0, curSum = v[0];
 for(int i=1;i<v.size();i++)
 {
  while(curSum > k && start < i-1)
  {
   curSum -= v[start];
   start++;
  }
  if(curSum == k)
  {
   for(int j=start;j<i;j++)
    cout<<v[j]<<" ";
   return ;
  }
  curSum += v[i];
 }
 
 return ;
}

int main()
{
 int n,k;
 cin>>n>>k;
 vector<int> v(n);
 for(int i=0;i<n;i++)
  cin>>v[i];
 findSub(v,k);
 return 0;
}
