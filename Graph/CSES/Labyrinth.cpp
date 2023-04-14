#include<bits/stdc++.h>
using namespace std;
char building[1001][1001];
bool visited[1001][1001];
int row,col;
int isValid(int x,int y)
{
    if(x<0 || x>=row)
    return INT32_MAX;
    else if(y<0 || y>=col)
    return INT32_MAX;
    else if(building[x][y]=='#')
    return INT32_MAX;
    else if(visited[x][y])
    return INT32_MAX;
    return 1;

}

void bfs(int x,int y)
{
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));
    while (!q.empty())
    {
        auto temp = q.front();
        q.pop();
        int currx = temp.first;
        int curry = temp.second;
        if(cu)
        if(isValid(first+1,second))
        {
            q.push(make_pair(first+1,second));
        }
        if(isValid(first-1,second))
        {
            q.push(make_pair(first-1,second));
        }
        if(isValid(first,second+1))
        {
            q.push(make_pair(first,second+1));
        }
        if(isValid(first,second-1))
        {
            q.push(make_pair(first,second-1));
        }
    }
    
}
int main()
{
    cin>>row>>col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>building[i][j];
        }
    }
    int rooms=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(building[i][j]=='A' && visited[i][j]==false)
            {
                dfs(i,j);
            }
        }
    }
    cout<<rooms<<endl;
    return 0;
    
}