#include<bits/stdc++.h>
using namespace std;
void bfs(vector<bool> &visited,unordered_map<int,vector<int>> &adj,int src)
{
    queue<int>  q;
    visited[src] = true;
    q.push(src);
    q.push(-1);
    cout<<1<<" ";
    bool flag = false;
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        if(front==-1)
        {
            flag = !flag;
            q.push(-1);
            continue;

        }
        for(auto it: adj[front]) //1 1 1 2 0 1 2 2 2 1
        {
            if(!visited[it])
            {
                if(flag)
                {
                    cout<<1<<" ";
                }
                else
                {
                    cout<<2<<" ";
                }
                visited[it] = true;
                q.push(it);
            }
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    unordered_map<int,vector<int>> adj;
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // for(auto it: adj)
    // {
    //     cout<<it.first<<": ";
    //     for(auto tj: it.second)
    //     {
    //         cout<<tj<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<bool> visited(n+1,false);
    for (int i = 0; i < n+1; i++)
    {
        cout<<visited[i]<<" ";
    }
    cout<<endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     if(!visited[i])
    //     {
            bfs(visited,adj,1);        
    //     }
    // }
    
}