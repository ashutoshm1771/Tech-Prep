// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

class Graph
{
 int v;
 vector<pair<int,int>> *adj;
 public:
  Graph(int v)
  {
   this->v = v;
   adj= new vector<pair<int,int>>[v];
  }
  void addEdge(int v,int u,int w)
  {
   adj[v].push_back(make_pair(u,w));
   adj[u].push_back(make_pair(v,w));
  }
  void dijkstra(int src)
  {
   set<pair<int,int>> setds;
   vector<int> dist(v,INT_MAX);
   dist[src] = 0;
   setds.insert(make_pair(0,src));
   while(!setds.empty())
   {
    pair<int,int> temp = *(setds.begin());
    setds.erase(setds.begin());
    int u = temp.second;
    for(auto it=adj[u].begin();it!=adj[u].end();it++)
    {
     int vx = (*it).first,w=(*it).second;
     if(dist[vx] > dist[u]+w)
     {
      if(dist[vx]!=INT_MAX)
      {
       setds.erase(setds.find(make_pair(dist[vx],vx)));
      }
      dist[vx] = dist[u] + w;
      setds.insert(make_pair(dist[vx],vx));
     }
    }
   }
   for(int i=0;i<v;i++)
    cout<<i<<" "<<dist[i]<<endl;
  }
};


int main()
{
    int V = 9; 
    Graph g(V); 
    g.addEdge(0, 1, 4); 
    g.addEdge(0, 7, 8); 
    g.addEdge(1, 2, 8); 
    g.addEdge(1, 7, 11); 
    g.addEdge(2, 3, 7); 
    g.addEdge(2, 8, 2); 
    g.addEdge(2, 5, 4); 
    g.addEdge(3, 4, 9); 
    g.addEdge(3, 5, 14); 
    g.addEdge(4, 5, 10); 
    g.addEdge(5, 6, 2); 
    g.addEdge(6, 7, 1); 
    g.addEdge(6, 8, 6); 
    g.addEdge(7, 8, 7); 
 g.dijkstra(0);
 return 0;
}
