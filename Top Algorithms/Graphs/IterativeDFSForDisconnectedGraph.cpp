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
   stack<int> st;
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
  void DFS()
  {
   vector<bool> vis(v,false);
   for(int i=0;i<v;i++)
   {
    if(!vis[i]){
     DFSUtil(i,vis);
    }
   }
  }
}; 
int main()
{
 Graph g(5);
 g.addEdge(1, 0); 
    g.addEdge(2, 1); 
    g.addEdge(3, 4); 
    g.addEdge(4, 0); 
  
    cout << "Following is Depth First Traversal\n"; 
    g.DFS();
 return 0;
}