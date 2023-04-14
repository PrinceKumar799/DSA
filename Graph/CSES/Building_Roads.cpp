#include<bits/stdc++.h>
using namespace std;
void dfs(vector<bool> &visited,unordered_map<int,vector<int>>&adj,int src)
{
    visited[src] = true;
    for(auto it: adj[src])
    {
        if(!visited[it])
        {
            dfs(visited,adj,it);
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    unordered_map<int,vector<int>>adj;
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> visited(n+1);
    int visitedIdx=INT32_MIN;
    int req=-1;
    vector<pair<int,int>> reqRoads;
    for (int i = 1; i < n+1; i++)
    {
        if(!visited[i])
        {
            if(req!=-1)
            {
                reqRoads.push_back({visitedIdx,i});
            }
            req++;
            visitedIdx = i;
            dfs(visited,adj,i);
        }
        else
        {
            visitedIdx = i;
        }
    }
    cout<<req<<endl;
    for (auto it: reqRoads)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    // for (int i = 0; i < visited.size(); i++)
    // {
    //     cout<<visited[i]<<" ";
    // }
    
    
}