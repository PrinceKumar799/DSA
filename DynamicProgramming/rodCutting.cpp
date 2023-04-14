#include<bits/stdc++.h>
using namespace std;
int cutRod(int price[], int n) {
        int dp[n+1][n+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(i==0 || j==0)
                dp[i][j]=0;
            }
        }
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }

        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(i<=j)
                dp[i][j] = max(price[i-1]+dp[i][j-i],dp[i-1][j]);
                else
                dp[i][j] = dp[i-1][j];
            }
        }
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        return dp[n][n];
    }

    int main()
    {
        int  N = 8;
        int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
        cout<<cutRod(price,N);
    }

    // {

    //     int mat[][] = new int[n + 1][n + 1];
    //     for (int i = 0; i <= n; i++) {
    //         for (int j = 0; j <= n; j++) {
    //             if (i == 0 || j == 0) {
    //                 mat[i][j] = 0;
    //             }
    //             else {
                    
    //                 else {
    //                     if (i > j) {
    //                         mat[i][j] = mat[i - 1][j];
    //                     }
    //                     else {
    //                         mat[i][j] = Math.max(
    //                             prices[i - 1]
    //                                 + mat[i][j - i],
    //                             mat[i - 1][j]);
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     return mat[n][n];
    // }