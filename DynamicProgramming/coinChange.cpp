#include<bits/stdc++.h>
using namespace std;
int solve(int sum,int arr[],int n)
{
    int dp[n+1][sum+1];
    for(int i=0;i<=n;i++)
    {
        for (int j = 0; j < sum+1; j++)
        {
            if(i==0 && j!=0)
            dp[i][j] = 0;
            else if(j==0)
            dp[i][j]=1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for (int j = 1; j < sum+1; j++)
        {
            if(arr[i-1]<=j)
            {
                dp[i][j] = dp[i][j-arr[i-1]] + dp[i-1][j];
            }
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    for(int i=0;i<=n;i++)
    {
        for (int j = 0; j < sum+1; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    return dp[n][sum];
}
int main()
{
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<solve(sum,arr,n);
    
}
