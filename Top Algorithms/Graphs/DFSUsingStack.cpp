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
  void DFS(int s)
  {
   stack<int> st;
   vector<bool> vis(v,false);
   st.push(s);
   while(!st.empty())
   {
    s=st.top();
    st.pop();
    if(!vis[s]){
     cout<<s<<" ";
     vis[s]=true;
    }
    for(auto it=adj[s].begin();it!=adj[s].end();it++){
     if(!vis[*it])
      st.push(*it);
    }
   }
  }
};

int main()
{
 Graph g(5);
 g.addEdge(1, 0); 
 g.addEdge(0, 2); 
 g.addEdge(2, 1); 
 g.addEdge(0, 3); 
 g.addEdge(1, 4); 
 g.DFS(0);
 return 0;
}
