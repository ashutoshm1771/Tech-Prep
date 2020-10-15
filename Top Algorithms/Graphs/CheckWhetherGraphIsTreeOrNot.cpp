#include<bits/stdc++.h>
using namespace std;

class Graph
{
 int v;
 vector<int> *adj;
 public:
  Graph(int v)
  {
   this->v=v;
   adj=new vector<int>[v];
  }
  void addEdge(int n,int m)
  {
   adj[n].push_back(m);
   adj[m].push_back(n);
  }
  void DFSUtil(int s,vector<bool>& vis)
  {
   vis[s]=true;
   for(auto it=adj[s].begin();it!=adj[s].end();it++)
   {
    if(!vis[*it])
     DFSUtil(*it,vis);
   }
  }
  bool checkTree()
  {
   vector<bool> vis(v,false);
   bool fl=true;
   for(int i=0;i<v;i++)
   {
    if(!vis[i])
    {
     if(fl){
       DFSUtil(i,vis);
       fl=false;
     }
    }
    else{
      return false;
    }
   }
   return true;
  }
};
int main()
{
 Graph g(
}