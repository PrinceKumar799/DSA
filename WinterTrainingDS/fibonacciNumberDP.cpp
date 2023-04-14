#include<bits/stdc++.h>
using namespace std;
int dp[1001];
//memoization
int fib(int n)
{
    if(n==0||n==1)
    return dp[n]=n;
    if(dp[n]!=0)
        return dp[n];
    return dp[n] = fib(n-1)+fib(n-2);
}

//tabulation
void solve(int n)
{
    int t[n+2];
    t[0] = 0;
    t[1] = 1;
    for (int i = 2; i < n+2; i++)
    {
        t[i] = t[i-1]+t[i-2];
    }
    cout<<t[n];
    
}
int main()
{
    memset(dp,sizeof(dp)/sizeof(dp[0]),0);
    cout<<fib(35)<<endl;
    solve(35);
}

//0 1 1 2 3 5
