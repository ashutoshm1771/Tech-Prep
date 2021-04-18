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
    void addEdge(int u,int w)
    {
        adj[u].push_back(w);
        //adj[w].push_back(u);
    }
    void BFS(int start)
    {
        int s;
        queue<int> q;
        q.push(start);
        vector<bool> vis(v);
        //for(auto x: vis) x=false;
        vis[start]=true;
        while(!q.empty())
        {
            s=q.front();
            cout<<s<<" ";
            q.pop();
            for(auto x: adj[s])
            {
                if(!vis[x]){
                    vis[x]=true;
                    q.push(x);
                }
            }
        }
    }
};
int main()
{
    Graph g(6);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
    g.addEdge(2,5);
    g.addEdge(3,5);
    g.addEdge(4,6);
    g.addEdge(5,6);
    g.BFS(1);
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// class Graph
// {
//     int V;
//     vector<int> *adj;
//     public:
//     Graph(int V)
//     {
//         this->V=V;
//         adj=new vector<int>[V];
//     }
//     void addEdge(int v,int w)
//     {
//         adj[v].push_back(w);
//     }
//     void BFS(int s)
//     {
//         queue<int> q;
//         q.push(s);
//         vector<bool> vis(V);
//         vis[s]=true;
//         while(!q.empty())
//         {
//             s=q.front();
//             cout<<s<<" ";
//             q.pop();
//             for(auto x: adj[s])
//                 if(!vis[x])
//                 {
//                     vis[x]=true;
//                     q.push(x);
//                 }
//         }
//     }
// };
// int main()
// {
//     Graph g(4); 
//     g.addEdge(0, 1); 
//     g.addEdge(0, 2); 
//     g.addEdge(1, 2); 
//     g.addEdge(2, 0); 
//     g.addEdge(2, 3); 
//     g.addEdge(3, 3); 
//     cout<<"BFS from vertex 2 is ";
//     g.BFS(2);
//     return 0;
// }
