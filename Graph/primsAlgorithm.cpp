#include<bits/stdc++.h>
#define INF 10000
using namespace std;
void findMst(vector<pairt<int>> &adj[],int V,int src)
{
    vector<int> key(V,INF);
    vector<bool> mst(V,false);
    vector<int> parent(V,-1);


    
    parent[src] = -1;
    mst[src] = true;
    for(auto i: adj[src])
    {
        if(mst[i]==false && key[i]<key)
        {
            mst[i]=true;
            parent[i] = src;
        }
    }
}

int main()
{
    int V,E;
    vector<pair<int,int>> adj[];
    cin>>V>>E;
    int src,dest,dist;
    for(int i=0;i<V;i++)
    {
        cin>>src>>dest>>dist;
        adj[src].push_back(make_pair(dest,dist));
        adj[dest].push_back(make_pair(src,dist));
    }
    findMst(adj,V,0);

}