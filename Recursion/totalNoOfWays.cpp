#include<iostream>
using namespace std;
int n,m;
int noOfWays(int i,int j)
{
    if(i==n-1 && j==m-1)
    {
        return 1;
    }
    if(i<0 || i>n-1 || j<0 || j>m-1)
    {
        return 0;
    }
    return noOfWays(i+1,j) + noOfWays(i,j+1);
}
int main()
{
    cin>>m>>n;
    cout<<noOfWays(0,0);
}