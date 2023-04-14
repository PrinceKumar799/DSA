#include<bits/stdc++.h>
using namespace std;
// int dp[1001];
// int jump(int arr[],int n,int index)
// {
//     if(index==0)
//     {
//         return arr[0];
//     }
//     if(dp[index]!=-1)
//         return dp[index];
//     int oneStep = arr[index] + jump(arr,n,index-1);
//     int twoStep = INT32_MAX;
//     if(index>=2){
//         twoStep = arr[index]+ jump(arr,n,index-2);
//     }
//     return dp[index] = min(oneStep,twoStep);
// }

int jumpTab(int arr[],int n)
{
    int dp[n+1];
    dp[0] = 0;
    for(int i=1;i<=n;i++)
    {
        if(n-i>=2)
        dp[i] = min(arr[i-1]+dp[i-1],arr[i-1]+dp[i-2]);
        else
        dp[i] = arr[i-1]+dp[i-1];
    }
    for(int i=0;i<=n;i++)
    cout<<dp[i]<<" ";
    return dp[n];
}
int main()
{
    int n=5;
    int arr[] = {2,3,4,2,6};
    // memset(dp,-1,sizeof(dp));
    cout<<jumpTab(arr,5)<<endl;;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<dp[i]<<" ";
    // }
}