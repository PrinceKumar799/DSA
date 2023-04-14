#include<iostream>
using namespace std;
int subsetCount(int arr[],int n, int sum)
{
    int t[n+1][sum+1];
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < sum+1; j++)
        {
            if(j==0)
            {
                t[i][j] = 1;
            }
            else if(i==0 && j!=0)
                t[i][j] = 0;
        }    
    }

    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < sum+1; j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;      
    }
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < sum+1; j++)
        {
            if(arr[i-1]<=j)
            {
                t[i][j] = t[i-1][j-arr[i-1]] + t[i-1][j];
            }
            else
            {
                t[i][j] = t[i-1][j];
            }
        }     
    }
    cout<<endl;
    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < sum+1; j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;      
    }
    return t[n][sum];
}
 
int main()
{
    int n,sum;
    cout<<"Array Length: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>sum;
    cout<<subsetCount(arr,n,sum);
    return 0;
}