#include<iostream>
#include <cstring>
using namespace std;
int static t[6][16];
int knapsack(int wt[],int val[],int capacity,int n)
{
    if(capacity==0||n==0)
        return 0;
    if(t[n][capacity]!=-1)
        return t[n][capacity];
    if(wt[n-1]<=capacity)
    {
        return t[n][capacity]=max(val[n-1]+knapsack(wt,val,capacity-wt[n-1],n-1),knapsack(wt,val,capacity,n-1));
    }
    else
        return t[n][capacity]=knapsack(wt,val,capacity,n-1);

    return -1;
}

int main()
{
    int wt[]={3,5,6,1,4};
    int val[]={2,1,6,3,4};
    int capacity=15;
    int n = sizeof(wt)/sizeof(wt[0]);
    memset(t,-1,sizeof(t));
    cout<<knapsack(wt,val,capacity,n);
    return 0;
}