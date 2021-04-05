// Author : Ashutosh Mishra

#include<bits/stdc++.h>
using namespace std;

class Graph{
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
  void BFS(int s)
  {
   queue<int> q;
   q.push(s);
   vector<bool> vis(v,false);
   vis[s]=true;
   while(!q.empty())
   {
    s=q.front();
    cout<<s<<"  ";
    q.pop();
    for(auto it=adj[s].begin();it!=adj[s].end();it++){
     if(!vis[*it]){
      vis[*it]=true;
      q.push(*it);
     }
    }
   }
  }
};

int main()
{
  Graph g(4);
  g.addEdge(0,1);
  g.addEdge(0, 2); 
  g.addEdge(1, 2); 
  g.addEdge(2, 0); 
  g.addEdge(2, 3); 
  g.addEdge(3, 3);
  g.BFS(2);
 
 return 0;
}
