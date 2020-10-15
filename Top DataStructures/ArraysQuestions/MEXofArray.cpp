#include<bits/stdc++.h>
using namespace std;

int firstMissing(vector<int> v) // O(nlogn) time and O(1) space
{
 sort(v.begin(),v.end());
 int j=1,n=v.size();
 for(int i=0;i<n;i++)
 {
  if(v[i]==j)j++;
  else return j;
 }
 return v[n-1]+1;
}

int firstMissing2(vector<int> v)  // O(n) time and O(n) space
{
 map<int,int> m;
 for(int x: v)
 {
  m[x]++;
 }
 int i=1;
 while(true)
 {
  if(m[i]==0)return i;
  else i++;
 }
}

int firstMissing3(vector<int> v) // O(n) time and O(1) space, but doesn't work for negative numbers
{
  int n=v.size();
  for(int i=0;i<n;i++)
  {
   v[abs(v[i])-1] *= -1; 
  }
  for(int i=0;i<n;i++)
  {
   if(v[i] > 0) return i+1;
  }
  return n+1;
}

int main()
{
 int n;
 cin>>n;
 vector<int> v(n);
 for(int i=0;i<n;i++)
  cin>>v[i];
 cout<<firstMissing(v)<<endl;
 cout<<firstMissing2(v)<<endl<<firstMissing3(v)<<endl;
 return 0;
}