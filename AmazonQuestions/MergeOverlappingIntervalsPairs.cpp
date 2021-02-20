// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

bool f(pair<int,int> a,pair<int,int> b)
{
 return a.first >= b.first;
}

void mergeOverlap(vector<pair<int,int>>& v)
{
 int index = 0 , n=v.size();
 sort(v.begin(),v.end(),f);
 for(int i=0;i<n;i++)
 {
  if(index!=0 && v[index-1].first <= v[i].second)
  {
   while(index != 0 && v[index-1].first <= v[i].second)
   {
    v[index-1].first = min(v[index-1].first , v[i].first);
    v[index-1].second = max(v[index-1].second,v[i].second);
    index--;
   }
  }
  else{
   v[index] = v[i];
  }
  index++;
 }
 for(int i=0;i<index;i++)
  cout<<v[i].first<<" "<<v[i].second<<endl;
}

int main()
{
 int n;
 cin>>n;
 vector<pair<int,int>> v(n);
 for(int i=0;i<n;i++)
  cin>>v[i].first>>v[i].second;
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
