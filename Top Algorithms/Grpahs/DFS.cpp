// Author : Ashutosh Mishra

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
  void addEdge(int v,int u)
  {
   adj[v].push_back(u);
  }
  void DFSUtil(int s,vector<bool>& vis)
  {
   if(!vis[s])
   {
    vis[s]=true;
    cout<<s<<"  ";
    for(auto it=adj[s].begin();it!=adj[s].end();it++)
    {
     if(!vis[*it])
     {
      DFSUtil(*it,vis);
     }
    }
   }
  }
  void DFS(int s)
  {
   vector<bool> vis(v,false);
   DFSUtil(s,vis);
  }
};
int main()
{
 Graph g(4); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3);
    g.DFS(2);
    return 0;
}
