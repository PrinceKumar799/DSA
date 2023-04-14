#include<iostream>
using namespace std;
char building[1001][1001];
bool visited[1001][1001];
int row,col;
bool isValid(int x,int y)
{
    if(x<0 || x>=row)
    return false;
    else if(y<0 || y>=col)
    return false;
    else if(building[x][y]=='#')
    return false;
    else if(visited[x][y])
    return false;
    return true;

}

void dfs(int x,int y)
{
    visited[x][y] = true;
    if(isValid(x+1,y))
    {
        dfs(x+1,y);
    }
    if(isValid(x,y+1))
    {
        dfs(x,y+1);
    }
    if(isValid(x-1,y))
    {
        dfs(x-1,y);
    }
    if (isValid(x,y-1))
    {
        dfs(x,y-1);
    }
}
int main(){
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
            if(building[i][j]=='.' && visited[i][j]==false)
            {
                rooms++;
                dfs(i,j);
            }
        }
    }
    cout<<rooms<<endl;
    return 0;
    
}