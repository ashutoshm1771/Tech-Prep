// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

struct Interval{
 int s,e;
};

bool f(Interval a, Interval b)
{
 return a.s < b.s;
}

void findMerged(vector<Interval>& v)
{
 sort(v.begin(),v.end(),f);
 stack<Interval> s;
 //for(auto x: v)
 // cout<<x.s<<" "<<x.e<<endl;
 for(int i=0;i<v.size();i++)
 {
  if(s.empty()) s.push(v[i]);
  else{
   Interval temp = s.top();
   if(temp.e < v[i].s){
    s.push(v[i]); 
   } 
   else{
    temp.e = max(temp.e,v[i].e);
    s.pop();
    s.push(temp);
   }
  } 
 }
 Interval temp;
 while(!s.empty())
 {
  temp = s.top();
  cout<<temp.s<<" "<<temp.e<<endl;
  s.pop();
 }
}

int main()
{
 int n;
 cin>>n;
 vector<Interval> v(n);
 for(int i=0;i<n;i++)
  cin>>v[i].s>>v[i].e;
 findMerged(v);
 return 0; 
}
