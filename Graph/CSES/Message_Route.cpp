#include<bits/stdc++.h>
using namespace std;
void print(int parent[],int dest)
{
    stack<int> st;
    int currNode = dest;
    while(currNode!=-1)
    {
        st.push(currNode);
        currNode = parent[currNode];
    }
    cout<<st.size()<<endl;
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }   
}

void bfs(int src,int dest,unordered_map<int,vector<int>> &adj)
{
    vector<bool> visited(dest,false);
    int parent[dest];
    visited[src] = true;
    queue<int> q;
    q.push(src);
    parent[src]=-1;
    while (!q.empty())  
    {
        int front = q.front();
        q.pop();
        for(auto it: adj[front])
        {
            if(!visited[it])
            {
                q.push(it);
                parent[it] = front;
                visited[it] = true;
            }
        }
    }
    for (int i = 1; i <= dest; i++)
    {
        if(!visited[i])
        {
            cout<<"IMPOSSIBLE"<<endl;
            return;
        }
    }
    
    print(parent,dest);
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
    bfs(1,n,adj);    
}