#include<bits/stdc++.h>
using namespace std;

void krushkal(vector<pair<int,pair<int,int>>>& edges)
{
    vector<bool> visited;
    vector<pair<int,int>> mst[];
    sort(edges.begin(),egdes.end());
    for(auto it: edges)
    {
        if(!visited[it.second.first] ||  !visited[it.second.second])
        {
            mst[it.second.first].push_back(make_pair(it.second.second,it.first));
            mst[it.second.second].push_back(make_pair(it.second.first ,it.first));
            visited[it.second.first] = true;
            visited[it.second.second] = true;
        }
    }

    // for(auto it: mst)
    // {
    //     for(auto j: it)
    //     {
    //         cout<<it<<" "<<it.second.first<<" "<<j.second.second<<endl;
    //     }
    // }

}

int main()
{
    int e,v;
    cin>>e>>v;
    vector<pair<int,pair<int,int>>> edges;
    for(int i=0;i<e;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back(make_pair(w,make_pair(u,v)));
    }
    krushkal(edges);
}