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
    int n;
    cin>>n;
    int ymin=INT32_MAX,xmin=INT32_MAX,ymax=INT32_MIN,xmax=INT32_MIN;
    vector<pair<int,int>> vec;
    while (n--)
    {
        int x,y;
        cin>>x>>y;
        vec.push_back(make_pair(x,y));
        if(y<ymin)
        {
            ymin=y;
        }
        else if(y>ymax)
        {
            ymax = y;
        }
        if(x<xmin)
        {
            xmin=x;
        }
        else if(x>xmax)
        {
            xmax = x;
        }
    }
    int cnt=0;
    for(auto it: vec)
    {
        if(it.first>xmin && it.first<xmax && it.second>ymin && it.second<ymax)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    
}
