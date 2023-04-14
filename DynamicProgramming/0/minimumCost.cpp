#include<bits/stdc++.h>
using namespace std;
int dp[5][5] ;
int matrix[4][4]={{3,8,4,3},{4,5,1,7},{8,9,7,1},{2,2,6,5}};
int solve(int i,int j )
{
    if(i>=4 || j>=4)
    {
        return INT32_MAX;
    }
    if(i==3 && j==3)
    {
        return matrix[i][j];
    }
    else
        return matrix[i][j] + min(solve(i + 1, j + 1),min(solve(i + 1, j),solve(i, j + 1)));
}
int main()
{
    memset(dp,-1,sizeof dp);
    cout<<solve(0,0);
}

// vector<int> vec;
// int solve(int idx,bool curr)
// {
//     if(curr>=n)
//     {
//         return 0;
//     }
//     if(curr==n-1)
//     {
//         return arr[idx];
//     }
    
//     int pick = heights[idx] + solve(idx+1,!curr);
//     int t = solve(idx+1,!curr);
//     int nonpick = solve(idx+1,sum);
//     // idx++;
//     return  t+ pick + nonpick;
// }
// int dp[sz];
// int solve( int idx, bool curr)
// {
//     int pick;
//     int nopick;
//     if(idx>=n) return 0;
//     if(dp[idx]!=-1)
//         return 0;
//     else if()
//     if(curr) 
//     {
//             pick=line1[idx]+solve(idx+1,!curr);
//             nopick=solve(idx+1,curr);
//     }
//      else
//      {
//             pick=line2[idx]+solve(idx+1,!curr);
//      }
// }