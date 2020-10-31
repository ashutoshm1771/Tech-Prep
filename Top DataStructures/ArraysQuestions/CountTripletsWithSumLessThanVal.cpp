// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

int countTrip(vector<int>& v,int num)
{
 int n=v.size();
 sort(v.begin(),v.end());
 for(int i=0;i<n-2;i++)
 {
  int j=i+1,k=n-1;
  while(j<k)
  {
   if(v[i]+v[j]+v[k]>=num)k--;
   else{
    
    j++;
   }
  }
 }
}

int main()
{
 int n,num;
 cin>>n>>num;
 vector<int> v(n);
 for(int i=0;i<n;i++)
 {
  cin>>v[i];
 }
 cout<<countTrip(v,num);
 return 0;
 
}
