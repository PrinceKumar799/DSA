#include<iostream>
using namespace std;

bool subsetPartition(int arr[],int n,int rem)
{
    bool dp[n+1][rem+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < rem+1; j++)
        {
            if(i==0 && j!=0)
            dp[i][j]=false;
            else
            dp[i][j]=true;
        }        
    }

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < rem+1; j++)
        {
            if(j>=arr[i-1])
            {
                dp[i][j] = dp[i-1][j - arr[i-1]] | dp[i-1][j];
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }        
    }
    return dp[n][rem];
}
 
int main()
{
    int n,sum=0;
    cout<<"Array Length: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<sum<<endl;
    if(sum&1)
    {
        cout<<"Partition Not Possible"<<endl;
    }
    else
    {
        int flag = subsetPartition(arr,n,sum/2);
        if(flag)
        {
            cout<<"Possible"<<endl;
        }
        else{
        cout<<"Partition Not Possible"<<endl;
        }
    }
    return 0;
}