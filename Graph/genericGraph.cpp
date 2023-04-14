#include<iostream>
#include<unordered_map>
#include<queue>
#include<list>
using namespace std;
template <typename T>
class Graph
{
public:
    unordered_map<T, list<T> > adj;
    void addEdge(T u,T v,bool dirn)
    {
        adj[u].push_back(v);
        if(!dirn)
        {
            adj[v].push_back(u);
        }
    }
    void printAdjList()
    {
        for(auto i: adj)
        {
            cout<<i.first<<"-> ";
            for(auto j: i.second)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
    void shortestPath(int src,int dest)
    {
        queue<int> q;
        unordered_map<int,bool> visited;
        unordered_map<int,int> parent;
        q.push(src);
        visited[src]=true;
        parent[src]=-1;
        while(!q.empty())
        {
            int front = q.front();
            q.pop();
            for(auto it: adj[front])
            {
                if(!visited[it])
                {
                    parent[it]=front;
                    visited[it]=true;
                    q.push(it);
                }
            }
        }
        int t=dest;
        while(t!=-1)
        {
            cout<<t<<" ";
            t=parent[t];
        }
    }

};

int main()
{
    int n,m;
    cout<<"Enter Number of nodes: ";
    cin>>n;
    cout<<"Enter Number of edges: ";
    cin>>m;
    Graph<int> g;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,false);
    }
    unordered_map<int,bool> visited;
    unordered_map<int,int> parent;
    g.shortestPath(1,7);



}
