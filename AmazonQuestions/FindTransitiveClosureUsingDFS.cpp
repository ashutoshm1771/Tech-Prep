#include<bits/stdc++.h>
using namespace std;

class Graph
{
 int v;
 vector<int> *adj;
 vector<vector<bool>> tc;
 public:
  Graph(int v)
  {
   this->v = v;
   adj = new vector<int>[v];
   tc.resize(v);
   for(int i=0;i<v;i++)
    tc[i] = vector<bool>(v,false);
  }
  void addEdge(int v,int u)
  {
   adj[v].push_back(u);
  }
  void TCUtil(int s,int d)
  {
   tc[s][d] = true;
   for(auto it = adj[d].begin();it!=adj[d].end();it++)
   {
    if(!tc[s][*it])
     TCUtil(s,*it);
   }
  }
  void printTC()
  {
   for(int i=0;i<v;i++)
    TCUtil(i,i);
   for(int i=0;i<v;i++)
   {
    for(int j=0;j<v;j++)
     cout<<tc[i][j]<<" ";
    cout<<endl;
   }
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
 g.printTC();
 return 0;
}