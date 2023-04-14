#include<unordered_map>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> dijkastra(vector<vector<int>> edges,int V,int src)
{
    unordered_map<int,vector<int>> adj;

    for (int i = 0; i < V; i++)
    {
        int src = edges[i][0];
        int des = edges[i][1];
        int weight = edges[i][2];
        adj[src].push_back({des, weight});
        adj[des].push_back({src, weight});
    }

    set<pair<int,int>> pq;
    vector<int> dist;
    for (int i = 0; i < V; i++)
    {
        dist[i] = INT32_MAX;
    }
    
    dist[src] = 0;

    pq.insert(make_pair(0,src));

    while (!pq.empty())
    {
        pair<int,int> node = *(pq.begin());
        pq.erase(pq.begin);

        int u = node.second;
        for(auto it: adj[u])
        {
            int v = *(it.first);
            int weight = *(it.second);
            if(dist[v] < dist[u] + weight )
            {
                dist[v] = dist[u] + weight;
                pq.insert(make_pair(dist[v],v));
            }
        }
    }    
    return dist;
}

int main()
{
    vector<vector<int>> edges;
    edges.push_back({0,1,2});
    vector<int> res = dijkastra(edges,1,0);
    for(auto it: res)
    {
        cout<<it<<" ";
    }
}