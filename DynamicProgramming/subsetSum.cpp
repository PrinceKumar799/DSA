#include<iostream>
using namespace std;
int arr[5] = {2,3,9,8,11};
                            //recursive solution
bool dp[6][12];
// bool subsetSum(int i, int rem)
// {
//     if(i<0)
//     {
//         return false;
//     }
//     if(rem==0)
//         return true;
//     if()
//     if(arr[i]<=rem)
//     {
//         return dp[i][sum]=subsetSum(i-1,rem - arr[i]) | subsetSum(i-1,rem);
//     }
//     else
//     {
//         return dp[i][sum]=subsetSum(i-1,rem);
//     }
// }

bool subsetSum()
{
    int n=5,m=11;
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < m+1; j++)
        {
            if(i==0 && j!=0)
            dp[i][j]=false;
            else if(j==0)
            dp[i][j]=true;
        }        
    }



    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j++)
        {
            if(j>=arr[i-1])
            {
                dp[i][j] = dp[i-1][j - arr[i-1]] || dp[i-1][j];
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }        
    }

    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < m+1; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;      
    }

    return dp[n][m];
}


int main()
{
    // int n = arr.size();
    // memeset(dp,-1,sizeof dp);
    cout<<subsetSum();
}