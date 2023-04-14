#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string grid1,grid2;
        cin>>grid1>>grid2;
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            if(grid1[i]==grid2[i])
                continue;
            else if(grid1[i]=='B'&&grid2[i]=='G' || grid1[i]=='G'&&grid2[i]=='B')
                continue;
            else
                flag = false;
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}