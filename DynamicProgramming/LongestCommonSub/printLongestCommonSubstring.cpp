#include <bits/stdc++.h>
using namespace std;
string lcs(string s1,string s2)
{
    int x = s1.length();
    int y = s2.length();
    int dp[s1.length()+1][s2.length()+1];
    for(int i=0;i<=x;i++)
    {
        for(int j=0;j<=y;j++)
        {
            if(i==0 || j ==0)
            dp[i][j]=0;
        }
    }
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=y;j++)
        {
            if(s1[i-1]==s2[j-1])
            dp[i][j]=  dp[i-1][j-1] + 1;
            else
            dp[i][j] = 0;
        }
    }

    for(int i=0;i<=x;i++)
    {
        for(int j=0;j<=y;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    string ans="";
    // int i = x, j=y;
    // while(i>0 && j>0)
    // {
    //     if(s1[i-1]==s2[j-1])
    //     {
    //         ans += s1[i-1];
    //         i--;
    //         j--;
    //     }
    //     else
    //     {
    //        if(dp[i-1][j]>dp[i][j-1])
    //        {
    //            i--;
    //        }
    //        else
    //        {
    //            j--;
    //        }
    //     }
    // }
    // reverse(ans.begin(),ans.end());
    return ans;
}
int main() {
	string str1,str2;
	cin>>str1>>str2;
	cout<<lcs(str1,str2);
	return 0;
}



int solve(int i,int j,int count)
{
    if(i>=rows || j>= cols)
        return 0;
    int nonPick = max(solve(i+1,j,0),solve(i,j+1,1));
    int pick = 0;
    if(matrix[i][j] > 0 && count<3)
    pick = max(mat[i][j]+solve(i+1,j,0),mat[i][j]+solve(i+1,j,count+1));

    return max(nonPick,pick);
}