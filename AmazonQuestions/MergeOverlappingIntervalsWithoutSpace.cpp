// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

struct Interval
{
 int s,e;
};

bool f(Interval a,Interval b)
{
 return a.s >= b.s;
}

void mergeOverlap(vector<Interval>& v)
{
 int n = v.size(),index = 0;
 sort(v.begin(),v.end(),f);
 for(int i=0;i<n;i++)
  cout<<v[i].s<<" "<<v[i].e<<endl;
 for(int i=0;i<n;i++)
 {
  if(index != 0 && v[index-1].s <= v[i].e)
  {
   while(index != 0 && v[index-1].s <= v[i].e){
   v[index-1].s = min(v[i].s,v[index-1].s);
   v[index-1].e = max(v[index-1].e,v[i].e);
   index--;                                        }
  } 
  else{
   v[index] = v[i];
  }
  index++;
 }
 for(int i=0;i<index;i++)
  cout<<v[i].s<<" "<<v[i].e<<endl;
}

int main()
{
 int n;
 cin>>n;
 vector<Interval> v(n);
 for(int i=0;i<n;i++)
  cin>>v[i].s>>v[i].e;
 mergeOverlap(v);
 return 0;
}

/*
5
2 4
3 5
1 6
7 9
8 10
*/
