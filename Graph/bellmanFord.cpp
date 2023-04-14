#include<iostream>
#include<unordered_map>
#include<queue>
#include<list>
#define INF 1000
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter Number of nodes: ";
    cin>>n;
    cout<<"Enter Number of edges: ";
    cin>>m;
    vector<vector<int>> edges;
    for(int i=0;i<m;i++)
    {
        int u,v,d;
        cin>>u>>v>>d;
        edges.push_back({u,v,d});
    }
    vector<int> distance(n,INF);
    distance[0] = 0;
    for (int i = 0; i < n; i++)
    {
        for(auto it: edges)
        {
            int u = it[0];
            int v = it[1];
            int d = it[2];
            distance[v] = min(distance[v],distance[u]+d);
        }
    }
    
    for(auto i: distance)
    {
        cout<<i<<" ";
    }
}
/*
    1\
    |  \ 1
  3 |   0       an
    |  / 2
    2 /
*/