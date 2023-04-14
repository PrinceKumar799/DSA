#include<bits/stdc++.h>
using namespace std;
void topologicalSort(int m,int n)
{
    vector<int> ans;
    int src;
    vector<bool> visited(m);
    vector<int> indegree(m);
    vector<vector<int>> edges;
    unordered_map<int,list<int>> adj;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        edges.push_back({u,v});
        adj[u].push_back(v);
        indegree[v]++;
    }
    for(int i=0;i<m;i++)
    {
        if(indegree[i]==0)
            src = i;
    }
    queue<int> q;
    q.push(src);
    visited[src] = true;
    while(!q.empty())
    {
        int front = q.front();
        q.pop();
        ans.push_back(front);
        // visited[front] = true;
        for(auto it: adj[front])
        {
            // if(!visited[it])
            // {
                indegree[it]--;
                
            // }
        }
        for (int i = 0; i < m; i++)
        {
            if(indegree[i]==0 && !visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
        
    }
    for(auto i: ans)
    {
        cout<<i<<" ";
    }
}
int main()
{
    int m,n;
    cin>>m>>n;
    topologicalSort(m,n);
    return 0;
}