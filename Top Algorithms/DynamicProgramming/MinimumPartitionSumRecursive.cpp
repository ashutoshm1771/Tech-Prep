#include<bits/stdc++.h>
using namespace std;

int minPartRec(vector<int> v,int i,int 
int minPart(vector<int> v)
{
 int sum=0;
 for(int x: v)
  sum += x;
 return minPartRec(v,v.size(),0,sum);
}
int main()
{
 int n;
 cin>>n;
 vector<int> v(n);
 for(int i=0;i<n;i++)
  cin>>v[i];
 cout<<minPart(v);
 return 0;
}